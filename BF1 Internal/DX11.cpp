#include "stdafx.h"
#include "DX11.h"
#include "Game.h"
#include "imgui.h"

float DX11Renderer::ScreenX = 0, DX11Renderer::ScreenY = 0;
float DX11Renderer::ScreenSX = 0, DX11Renderer::ScreenSY = 0;

Vector2 GUI2::LastMousePosition = Vector2(0, 0);
Vector2 GUI2::MousePosition = Vector2(0, 0);

using D3D11PresentHook = HRESULT(__stdcall*)(IDXGISwapChain*, UINT, UINT);
D3D11PresentHook DX11HookPresent = NULL;
PLH::Detour* PresentHook;

using PerFrameHook_t = int(__stdcall*)(uintptr_t, float);
PerFrameHook_t PerFrameHook = NULL;
PLH::VEHHook* DetourPerFrameHook;
CVMTHookManager64* pfh;

static INT LastTick;
static int LastLogSize = 0;
bool ShowLogAlert = false;
bool giveCleanSS = false;
std::mutex DX11_mutex;

int __stdcall HookedPerFrame(uintptr_t _this, float a1)
{
	return PerFrameHook(_this, a1);
}

void DX11Renderer::DX11RenderScene()
{
	DX11Begin();

	if (!Closing)
	{
		if (SSCleaner->BitBltState && !giveCleanSS)  //if giveCleanSS On, then hide all from screen and prepare for clean screenshot and wait FF to call BitBlt
		{
			if (Features::giveCleanSS)
				Features::giveAutoCleanSS = false;  //when giveCleanSS On firmly disable the other feature giveAutoCleanSS. Dont want both features to interfere

			if (Features::giveAutoCleanSS) {
				Features::giveCleanSS = false;  //when giveAutoCleanSS On firmly disable the other feature giveCleanSS. Dont want both features to interfere
				SSCleaner->TakeSS();
			}
			else   //if Features::giveAutoCleanSS off => delete stored SS texture; BitBlt will be blocked
				SSCleaner->NeedSS = false;

			if (!SSCleaner->NeedSS)
			{
				if (Features::ShowMenu)
				{
					CEntity* LocalPlayer = Game::GetLocalPlayer();
					if (Mem::IsValid(LocalPlayer))
					{
						CSoldier* LPSoldier = LocalPlayer->GetSoldier();
						if (Mem::IsValid(LPSoldier) || Mem::IsValid(LocalPlayer->GetCurrentVehicle()))
						{
							static bool MainMenu = true;
							static bool LogOpened = true;
							ImGui::SetNextWindowPos(ImVec2(0, 0));
							if (ImGui::Begin("Del menu;N Names;+ Aimbot;- Recoil;InsHome Radar;F12 Save;F8 Quit"/*("BF! Hack - " + std::string(LocalPlayer->Name)).c_str()*/, &MainMenu, ImVec2(505, ScreenSY * 0.94), 0.9f, ImGuiWindowFlags_NoSavedSettings))
							{
								if (ImGui::CollapsingHeader("ESP"))
								{
									ImGui::Columns(2, "##Columns_1", false);
									ImGui::Checkbox("Enable ESP", &Features::ESP);
									ImGui::Checkbox("Show Vehicles", &Features::ShowVehicles);
									ImGui::Checkbox("Show Friends", &Features::ESPShowFriends);
									ImGui::Checkbox("Show Bones", &Features::ShowBones);
									ImGui::SliderFloat("Distance", &Features::ESPDistance, 5.f, 2500.f, "%.0f");

									ImGui::NextColumn();

									ImGui::Checkbox("Show FOV Circle", &Features::ShowFOV);
									ImGui::Checkbox("Show Names", &Features::ShowName);
									ImGui::Checkbox("Show Distance", &Features::ShowDistance);
									ImGui::Checkbox("Show HP", &Features::ShowHealth);
									ImGui::Checkbox("Show ESP Boxes", &Features::ShowESPBoxes);

									ImGui::NextColumn();
								}
								ImGui::Columns(1, "##Columns_2", false);
								if (ImGui::CollapsingHeader("Aimbot"))
								{
									ImGui::Checkbox("Enable Aimbot", &Features::Aimbot);
									ImGui::Checkbox("Aim with weapon 2", &Aimbot::AimSlots2);
									ImGui::Checkbox("Aim with weapon 5", &Aimbot::AimSlots5);
									ImGui::Checkbox("Aim with weapon 6", &Aimbot::AimSlots6);
									ImGui::Checkbox("Aim with weapon 7", &Aimbot::AimSlots7);
									ImGui::Checkbox("Prioritize Distance", &Aimbot::PrioritizeDistance);
									ImGui::Checkbox("Aim Prediction", &Aimbot::AimPrediction);
									if (Aimbot::AimPrediction) {
										ImGui::SliderFloat("Aim Predict XYZ", &Aimbot::AimPredictXYZ, 0.1f, 3.f, "%.1f");
										ImGui::SliderFloat("Aim Offset Y", &Aimbot::AimOffsetY, -3.f, 3.f, "%.1f");
									}
									ImGui::SliderFloat("FOV", &Aimbot::FOV, 1.f, 360.f, "%.0f");
									ImGui::SliderFloat("Max Distance", &Aimbot::Distance, 1.f, 750.f, "%.0f");
									ImGui::SliderFloat("Smooth", &Aimbot::SmoothFactor, 0.001f, 1.f, "%.3f");
									ImGui::SliderInt("Retarget Timer", &Aimbot::RetargetTimer, 1, 1000);

									const char* Bones[] = { "Head", "Neck", "Chest", "Hip" };
									static int BoneSelected = -1;
									ImGui::TextColored(ImColor(0, 255, 0), "Actual Bone: %i", Aimbot::Bone);
									ImGui::Checkbox("Random Bone", &Aimbot::RandomBone);
									if (ImGui::Combo("Bones", &BoneSelected, Bones, 4))
									{
										if (BoneSelected == 0)
											Aimbot::Bone = eBones::HEAD;
										else if (BoneSelected == 1)
											Aimbot::Bone = eBones::NECK;
										else if (BoneSelected == 2)
											Aimbot::Bone = eBones::CHEST;
										else if (BoneSelected == 3)
											Aimbot::Bone = eBones::HIP;
									}
									ImGui::Checkbox("Aim at Vehicles", &Aimbot::AimVehicles);
									if (Aimbot::AimVehicles) {
										ImGui::RadioButton("Top", &Aimbot::VehicleBone, TOP); ImGui::SameLine();
										ImGui::RadioButton("Up", &Aimbot::VehicleBone, UP); ImGui::SameLine();
										ImGui::RadioButton("Center", &Aimbot::VehicleBone, CENTER); ImGui::SameLine();
										ImGui::RadioButton("Down", &Aimbot::VehicleBone, DOWN); ImGui::SameLine();
										ImGui::RadioButton("Bottom", &Aimbot::VehicleBone, BOTTOM);
									}
									ImGui::Checkbox("Aim at Horses", &Aimbot::AimHorses);
									if (Aimbot::AimHorses) {
										ImGui::RadioButton("Top ", &Aimbot::HorseBone, TOP); ImGui::SameLine(); //must be different string name or will bug
										ImGui::RadioButton("Up ", &Aimbot::HorseBone, UP); ImGui::SameLine();
										ImGui::RadioButton("Center ", &Aimbot::HorseBone, CENTER); ImGui::SameLine();
										ImGui::RadioButton("Down ", &Aimbot::HorseBone, DOWN); ImGui::SameLine();
										ImGui::RadioButton("Bottom ", &Aimbot::HorseBone, BOTTOM);
									}
								}
								if (ImGui::CollapsingHeader("Misc"))
								{
									ImGui::Checkbox("Crosshair", &Features::Crosshair);
									ImGui::RadioButton("Radar Off", &Features::Radar, 0); ImGui::SameLine();
									ImGui::RadioButton("Radar On", &Features::Radar, 1); ImGui::SameLine();
									ImGui::RadioButton("Radar Wide", &Features::Radar, 2); ImGui::SameLine();
									ImGui::RadioButton("Radar Window", &Features::Radar, 3);
									if (Features::Radar) {
										ImGui::SliderInt("Radar Distance", &Features::RadarDistance, 5, 1000);
										ImGui::SliderInt("Radar Size", &Features::RadarSize, 50.f, ScreenSY);
										if (Features::Radar != 3) {
											ImGui::SliderInt("Radar Pos X", &Features::RadarPosX, 1.f, ScreenSX);
											ImGui::SliderInt("Radar Pos Y", &Features::RadarPosY, 1.f, ScreenSY);
										}
									}
									ImGui::Checkbox("No Sway/Recoil", &Features::NoSway);
									if (Features::NoSway) {
										ImGui::SliderInt("random of:", &Features::NoSwayRandomize, 1, 10);
									}
									ImGui::Checkbox("Instant Hit", &Features::InstantHit);
									ImGui::Checkbox("Spectators Warning", &Features::SpectWarn);
									ImGui::Checkbox("Medic revive bugfix (use only if needed)", &Features::MedicBugfix);
									ImGui::Checkbox("Provide Automatically Clean Screenshot", &Features::giveAutoCleanSS);
									if (Features::giveAutoCleanSS)
										ImGui::SliderFloat("Auto Clean SS Timer", &Features::AutoCleanSSTimer, 0.1f, 30.f, "%.1f");
									else {
										ImGui::Checkbox("Provide Clean Screenshot (ScrollLock button to On/Off)", &Features::giveCleanSS);
										ImGui::Checkbox("Provide Clean Screenshot suspend when aim with right mouse button", &Features::giveCleanSSwithRMB);
									}
								}
								///////////add Log///////////////////////////////////////////////////////////
								if (Log->Buf.size())
									if (ImGui::CollapsingHeader("Log")) //add log section
										if (Mem::IsValid(Log.get()))
											Log->Draw("", &LogOpened);
								ImGui::TextColored(ImColor(0, 255, 0), "Weapon Slot: %i", LPSoldier->GetActiveSlot());  //weapon ID; 0 main gun. 1 pistoll; 2 injection (if medic)							
								ImGui::TextColored(ImColor(0, 255, 0), "Bullet volocity: %.1f", LPSoldier->GetBulletVelocity());  //bullet volocity e.g. 800 for most main guns
																																  //ImGui::TextColored(ImColor(0, 255, 0), "Bullet gravity: %.1f", LPSoldier->GetBulletGravity());
								ImGui::TextColored(SSCleaner->BitBltState ? ImColor(0, 255, 0) : ImColor(255, 0, 0), "BitBlt Hooked: %s at %I64X", SSCleaner->BitBltState ? "Yes" : "No", SSCleaner->BitBltState ? (QWORD)SSCleaner->oBitBlt : 0);  //BitBlt() is used by PunkBuster to make screenshots
								ImGui::TextColored(SSCleaner->CopyResourceState ? ImColor(0, 255, 0) : ImColor(255, 0, 0), "CopyResource Hooked: %s at %I64X", SSCleaner->CopyResourceState ? "Yes" : "No", SSCleaner->CopyResourceState ? (QWORD)SSCleaner->oCopyResource : 0);   //CopyResource() is used by FairFight to make screenshots
								ImGui::TextColored(SSCleaner->CopySubresourceRegionState ? ImColor(0, 255, 0) : ImColor(255, 0, 0), "CopySubresourceRegion Hooked: %s at %I64X", SSCleaner->CopySubresourceRegionState ? "Yes" : "No", SSCleaner->CopySubresourceRegionState ? (QWORD)SSCleaner->oCopySubresource : 0);  //CopySubresourceRegion() is used by (PunkBuster/FairFight) to make screenshots
								if (!SSCleaner->BitBltState)
									ImGui::TextColored(ImColor(255, 0, 0), "DANGER! SCREENSHOTS NOT BLOCKED!");
								else if (!SSCleaner->CopyResourceState || !SSCleaner->CopySubresourceRegionState)
									ImGui::TextColored(ImColor(255, 255, 0), "Play in Bordless mode only! Fullscreen unprotected from screenshots");
								else
									ImGui::TextColored(ImColor(255, 255, 0), "Play in Bordless mode only!");
								//////////////////////////////////////////////////////////////////////////
								ImGui::End();
							}
						}
					}
				}
				if (Features::Crosshair) {
					DrawLine(ScreenSX / 2.f - ScreenSX*0.005, ScreenSY / 2.f, ScreenSX / 2.f + ScreenSX*0.005, ScreenSY / 2.f, Color(255, 0, 0, 200));
					DrawLine(ScreenSX / 2.f, ScreenSY / 2.f - ScreenSX*0.005, ScreenSX / 2.f, ScreenSY / 2.f + ScreenSX*0.005, Color(255, 0, 0, 200));
				}
				if (!Mem::IsValid(Game::GetLocalPlayer()->GetCurrentVehicle())) { //sorry no radar when in a vehicle. Radar cant get coordinates of local soldier LPSoldier; GetPosition() or GetBonePosition() return incorect value
																				  /////////////////////////////////////////////////RADAR https://www.unknowncheats.me/forum/battlefield-1-a/210381-bf1-internal-hack-source-2.html
					if (Features::Radar == 1)  //draw radar box
					{
						rad_orginX = ((float)Features::RadarPosX) - Features::RadarSize / 2;
						rad_orginY = ((float)Features::RadarPosY) + Features::RadarSize / 2;
						FillRGB(rad_orginX - Features::RadarSize / 2, rad_orginY - Features::RadarSize, Features::RadarSize/**2*/, Features::RadarSize, Color(0, 0, 200, 30));
						DrawLine(rad_orginX - Features::RadarSize / 2, rad_orginY, rad_orginX + Features::RadarSize / 2, rad_orginY, Color(0, 0, 200, 100));   //horizontal bottom line
						DrawLine(rad_orginX, rad_orginY - Features::RadarSize*0.07 + 1, rad_orginX, rad_orginY - Features::RadarSize, Color(0, 0, 200, 30));    //vertival central line						
						DrawTriangle(rad_orginX, rad_orginY - Features::RadarSize*0.07, rad_orginX - Features::RadarSize*0.03, rad_orginY, rad_orginX + Features::RadarSize*0.03, rad_orginY, Color(0, 0, 200, 80)); //triangle on origin
					}
					if (Features::Radar == 2)  //draw radar box
					{
						rad_orginX = ((float)Features::RadarPosX) - Features::RadarSize;
						rad_orginY = ((float)Features::RadarPosY) + Features::RadarSize;
						FillRGB(rad_orginX - Features::RadarSize, rad_orginY - Features::RadarSize, Features::RadarSize * 2, Features::RadarSize, Color(0, 0, 200, 30));
						DrawLine(rad_orginX - Features::RadarSize, rad_orginY, rad_orginX + Features::RadarSize, rad_orginY, Color(0, 0, 200, 100));   //horizontal bottom line
						DrawLine(rad_orginX, rad_orginY - Features::RadarSize*0.07 + 1, rad_orginX, rad_orginY - Features::RadarSize, Color(0, 0, 200, 30));  //vertival central line	
						DrawTriangle(rad_orginX, rad_orginY - Features::RadarSize*0.07, rad_orginX - Features::RadarSize*0.03, rad_orginY, rad_orginX + Features::RadarSize*0.03, rad_orginY, Color(0, 0, 200, 80)); //triangle on origin
					}
					////////////////////End Radar
				}
				if (Features::ESP)
				{
					CEntity* LocalPlayer = Game::GetLocalPlayer();
					if (Mem::IsValid(LocalPlayer) && Mem::IsValid(LocalPlayer->GetSoldier()))
					{
						CSoldier* LPSoldier = LocalPlayer->GetSoldier();
						if ((Mem::IsValid(LPSoldier) && Mem::IsValid(LPSoldier->prediction)) || (Mem::IsValid(LocalPlayer->GetCurrentVehicle())))
						{
							if (Features::ShowFOV)
								DrawCircle(ScreenSX / 2.f, ScreenSY / 2.f, Color(0, 255, 255, 255), Aimbot::FOV, 25);

							//PLAYERS
							CEntityList* EntityList = Game::GetEntityList();
							ClientPlayerManager* PlayerManager = Game::GetClientPlayerManager();
							/////////////Spectators warning//////////////
							if (Features::SpectWarn && Mem::IsValid(PlayerManager))
							{
								CSpectatorList* SpectatorList = PlayerManager->GetSpectators();
								if (Mem::IsValid(SpectatorList))
								{
									int ValidSpecs = 0;
									bool FirstText = true;
									for (int i = 0; i < 16; i++)
									{
										CSpectator* Spec = SpectatorList->GetSpectator(i);
										if (Mem::IsValid(Spec) && LocalPlayer->GetPlayerView() == Spec->GetView())
										{
											if (FirstText)
											{
												DrawDXText(ScreenSX / 2.f, ScreenSY * 0.91f/*- 200.f*/, 1.f, true, 0.f, Color(255, 0, 70, 200), true, "*Spectator Warning*");
												FirstText = false;
											}
											//DrawDXText(ScreenSX / 2.f, (ScreenSY - 200.f) + 25.f + (ValidSpecs * 20.f), 1.f, true, 0.f, Color(255, 255, 0, 255), true, "-%i. %s %I64X", ValidSpecs + 1, Spec->Name, Spec);
											DrawDXText(ScreenSX / 2.f, (ScreenSY * 0.91f) + 25.f + (ValidSpecs * 20.f), 1.f, true, 0.f, Color(255, 0, 70, 200), true, "%s", Spec->Name);
											ValidSpecs++;
										}
									}
								}
							}
							/*//TEST AIM IN POINT CODE
							Vector3 testPos = Vector3(3, 3, 3);
							Vector3 testSP;
							Vector3 testShootSpace;
							LPSoldier->GetBonePosition(testShootSpace, 98);
							Vector3 ShootSpaceSP;
							if (Game::W2S(testPos, testSP))
							{
							DrawCircle(testSP.x, testSP.y, Color(255, 0, 0, 255), 2, 25);
							DrawLine(testSP.x, testSP.y, ScreenSX / 2.f, ScreenSY / 2.f + ScreenSX*0.2, Color(255, 0, 0, 255));
							}*/
							/////////////////////////////////
							if (Mem::IsValid(EntityList))
							{
								/*std::ofstream outputFile;		//log
								outputFile.open(L"C:\\battlefield1_ESP.log");
								outputFile << "start" << std::endl;*/
								for (int i = 0; i < 64; i++)
								{
									//outputFile << i << " ===== " << std::endl;  //log

									CEntity* Ent = EntityList->GetEntity(i);
									if (Mem::IsValid(Ent))
									{
										CSoldier* EntSoldier = Ent->GetSoldier();
										/*outputFile << "CEntity->getSoldier() -- ok" << std::endl;  //log
										outputFile << "Is CSoldier valid: " << Mem::IsValid(EntSoldier) << std::endl;
										if (Mem::IsValid(EntSoldier)) {
										outputFile << "Soldier Name: " << Ent->Name << std::endl;
										outputFile << "Is HealthComponent valid: " << Mem::IsValid(EntSoldier->HealthComponent) << std::endl;
										if (Mem::IsValid(EntSoldier->HealthComponent))
										outputFile << "HealthComponent HP: " <<  EntSoldier->HealthComponent->HP << std::endl;
										}*/

										if (Mem::IsValid(EntSoldier) && Mem::IsValid(EntSoldier->HealthComponent) && EntSoldier->HealthComponent->HP >= 0.1f && EntSoldier->HealthComponent->HP <= 100.f)
										{
											Vector3 HeadPos;

											if (Features::MedicBugfix && Ent->GetTeam() == LocalPlayer->GetTeam()) { //if MedicBugfix do not show own team mates because GetBonePosition makes then unable to revive
												Features::ESPShowFriends = false;
												continue;
											}

											if (!EntSoldier->GetBonePosition(HeadPos, 53))
												continue;
											HeadPos = EntSoldier->GetPosition() + Vector3(0.f, 2.f, 0.f);
											//outputFile << "HEAD: " << HeadPos.x << " " << HeadPos.y << " " << HeadPos.z << std::endl;  //log

											Vector3 FeetPos = EntSoldier->GetPosition();
											Vector3 HeadSP;
											Vector3 FeetSP;
											float dist = 0.f;

											if (Mem::IsValid(LPSoldier) && Mem::IsValid(LPSoldier->prediction))  //local player on feet; GetPosition() works OK
												dist = Vector3::Distance(FeetPos, LPSoldier->GetPosition());  //distance between other soldier and local player
											else if (Mem::IsValid(LocalPlayer->GetCurrentVehicle())) {  //local player in vehicle; GetPosition() crash! => Take position from HEAD, not from GetPosition() prediction
												static Vector3 MyHeadPos;
												LPSoldier->GetBonePositionLP(MyHeadPos, HEAD);
												dist = Vector3::Distance(FeetPos, MyHeadPos); //Log->AddLog("pos x=%2.2f y=%2.2f z=%2.2f | %2.2f %2.2f %2.2f | %.2f %.2f %.2f\n", MyHeadPos.x, MyHeadPos.y, MyHeadPos.z,((ClientVehicleEntity*)LocalPlayer->GetCurrentVehicle())->m_Velocity.x, ((ClientVehicleEntity*)LocalPlayer->GetCurrentVehicle())->m_Velocity.y, ((ClientVehicleEntity*)LocalPlayer->GetCurrentVehicle())->m_Velocity.z, ((PhysicsBody*)LocalPlayer->GetCurrentVehicle())->m_RigidBodyData->m_CenterOfMass.x, ((PhysicsBody*)LocalPlayer->GetCurrentVehicle())->m_RigidBodyData->m_CenterOfMass.y, ((PhysicsBody*)LocalPlayer->GetCurrentVehicle())->m_RigidBodyData->m_CenterOfMass.z);
											}
											if (!Mem::IsValid(LocalPlayer->GetCurrentVehicle())) { //sorry no radar when in a vehicle. Radar cant get coordinates of local soldier LPSoldier; GetPosition() or GetBonePosition() return incorect value
																								   /////////////////RADAR https://www.unknowncheats.me/forum/battlefield-1-a/210381-bf1-internal-hack-source-2.html
												if (Features::Radar == 1 && dist > .01f && dist < Features::RadarDistance && Ent->GetTeam() != LocalPlayer->GetTeam()) //add player if not in same team
												{
													float zs = LPSoldier->GetPosition().z - FeetPos.z;
													float xs = LPSoldier->GetPosition().x - FeetPos.x;
													float scale = ((float)Features::RadarDistance) / Features::RadarSize;
													zs /= scale;
													xs /= scale;

													Vector3 Yaw = -LPSoldier->GetAngles(); // okay
													float xpos = xs * (float)cos(Yaw.x) - zs * (float)sin(Yaw.x);
													float ypos = xs * (float)sin(Yaw.x) + zs * (float)cos(Yaw.x);
													xpos = xpos * 2 + (rad_orginX);
													ypos = ypos * 2 + (rad_orginY);

													if (xpos < (float)(rad_orginX - Features::RadarSize / 2)) xpos = (float)(rad_orginX - Features::RadarSize / 2);
													if (ypos < (float)(rad_orginY - Features::RadarSize)) ypos = (float)(rad_orginY - Features::RadarSize);
													if (xpos >(float)((rad_orginX)+Features::RadarSize / 2 - Features::RadarSize / 40)) xpos = (float)((rad_orginX)+Features::RadarSize / 2 - Features::RadarSize / 40);
													if (ypos >(float)((rad_orginY)+Features::RadarSize - Features::RadarSize / 40)) ypos = (float)((rad_orginY)+Features::RadarSize - Features::RadarSize / 40);
													//radar_size/40 is thloge size of the dot on the radar; radar_size/30 = bigger dots
													FillRGB(xpos, ypos, Features::RadarSize / 40, Features::RadarSize / 40, Color(255, 0, 0, 200));
												}
												if (Features::Radar == 2 && dist > .01f && dist < Features::RadarDistance && Ent->GetTeam() != LocalPlayer->GetTeam()) //add player if not in same team
												{
													float zs = LPSoldier->GetPosition().z - FeetPos.z;
													float xs = LPSoldier->GetPosition().x - FeetPos.x;
													float scale = ((float)Features::RadarDistance) / Features::RadarSize;
													zs /= scale;
													xs /= scale;

													Vector3 Yaw = -LPSoldier->GetAngles(); // okay
													float xpos = xs * (float)cos(Yaw.x) - zs * (float)sin(Yaw.x);
													float ypos = xs * (float)sin(Yaw.x) + zs * (float)cos(Yaw.x);
													xpos = xpos * 2 + (rad_orginX);
													ypos = ypos * 2 + (rad_orginY);

													if (xpos < (float)(rad_orginX - Features::RadarSize)) xpos = (float)(rad_orginX - Features::RadarSize);
													if (ypos < (float)(rad_orginY - Features::RadarSize)) ypos = (float)(rad_orginY - Features::RadarSize);
													if (xpos >(float)((rad_orginX)+Features::RadarSize - Features::RadarSize / 40)) xpos = (float)((rad_orginX)+Features::RadarSize - Features::RadarSize / 40);
													if (ypos >(float)((rad_orginY)+Features::RadarSize - Features::RadarSize / 40)) ypos = (float)((rad_orginY)+Features::RadarSize - Features::RadarSize / 40);
													//radar_size/40 is the size of the dot on the radar; radar_size/30 = bigger dots
													FillRGB(xpos, ypos, Features::RadarSize / 40, Features::RadarSize / 40, Color(255, 0, 0, 200));
												}
												////////////////////End Radar
												////////////////////radar window
												if (Features::Radar == 3) {
													ImVec2 position = ImVec2(ScreenSX - Features::RadarSize - 20, 0);

													ImVec2 radarSize = ImVec2(Features::RadarSize, Features::RadarSize);
													ImColor radarLinesColor = ImColor(100, 100, 100, 255);

													CEntity* LocalPlayer = Game::GetLocalPlayer();
													CEntityList* EntityList = Game::GetEntityList();

													ImGuiWindowFlags wFlags = /*ImGuiWindowFlags_NoResize |*/ ImGuiWindowFlags_NoCollapse;
													if (!Features::ShowMenu)
													{
														wFlags |= ImGuiWindowFlags_NoInputs;
														wFlags |= ImGuiWindowFlags_NoMove;
														wFlags |= ImGuiWindowFlags_NoTitleBar;
													}

													ImGui::SetNextWindowPos(position, ImGuiSetCond_FirstUseEver);
													if (ImGui::Begin("Radar", (bool*)Features::Radar, radarSize, 0.4f, wFlags))
													{
														ImVec2 pos1 = ImGui::GetWindowPos();
														ImVec2 center = ImVec2(pos1.x + radarSize.x / 2, pos1.y + radarSize.y / 2);
														ImGui::GetWindowDrawList()->AddLine(ImVec2(pos1.x, pos1.y), center, radarLinesColor);
														ImGui::GetWindowDrawList()->AddLine(ImVec2(pos1.x + radarSize.x, pos1.y), center, radarLinesColor);
														ImGui::GetWindowDrawList()->AddLine(ImVec2(pos1.x, pos1.y + radarSize.y / 2), ImVec2(pos1.x + radarSize.x, pos1.y + radarSize.y / 2), radarLinesColor);
														ImGui::GetWindowDrawList()->AddLine(center, ImVec2(pos1.x + radarSize.x / 2, pos1.y + radarSize.y), radarLinesColor);

														float b = 15.f;
														float d = (b / (2.f * sin(70.f / 2.f))) * cos(70.f / 2.f);
														ImGui::GetWindowDrawList()->AddTriangleFilled(center - ImVec2(b / 2, -d / 2), center - ImVec2(0, d / 2), center + ImVec2(b / 2, d / 2), ImColor(0, 255, 0));

														if (Mem::IsValid(EntityList) && Mem::IsValid(LocalPlayer))
														{
															CSoldier* LPSoldier = LocalPlayer->GetSoldier();
															if (Mem::IsValid(LocalPlayer))
															{
																Vector3 Yaw = LPSoldier->GetAngles();
																Vector3 LPos = LPSoldier->GetShootSpace() - LPSoldier->GetSpawnOffset(); //=LPSoldier->getPosition();
																for (int i = 0; i < 64; i++)
																{
																	CEntity* Ent = EntityList->GetEntity(i); //ClientEntity* Ent = EntityList->getEntity(i);

																	if (Mem::IsValid(Ent))
																	{
																		if (Ent == LocalPlayer)
																			continue;

																		CSoldier* EntSoldier = Ent->GetSoldier(); //ClientSoldierEntity* EntSoldier = Ent->getSoldier();
																		if (Mem::IsValid(EntSoldier))
																		{
																			//if (!(EntSoldier->HealthComponent->HP >= 0.1f && EntSoldier->HealthComponent->maxHealth >= 100.f)) continue;
																			Vector3 CPos; // = EntSoldier->getPosition();
																			EntSoldier->GetBonePosition(CPos, Aimbot::Bone);

																			float dist = Vector3::Distance(CPos, LPos);
																			if (dist >= .01f && dist <= Features::RadarDistance && EntSoldier->HealthComponent->HP >= 0.1f && EntSoldier->HealthComponent->HP <= 100.f)
																			{
																				ImColor pColor = ImColor(255, 0, 0);
																				if (Ent->GetTeam() == LocalPlayer->GetTeam()) {
																					if (!Features::ESPShowFriends) continue;
																					ImColor pColor = ImColor(0, 255, 0);
																				}

																				float r_1 = LPos.z - CPos.z;
																				float r_2 = LPos.x - CPos.x;
																				float scale = ((float)Features::RadarDistance) / Features::RadarSize;
																				r_1 /= scale;
																				r_2 /= scale;
																				float x_1 = r_2 * (float)cos((long double)-Yaw.x) - r_1 * sin((long double)-Yaw.x);
																				float y_1 = r_2 * (float)sin((long double)-Yaw.x) + r_1 * cos((long double)-Yaw.x);

																				ImGui::GetWindowDrawList()->AddCircleFilled(center + ImVec2(x_1, y_1), 2, ImColor(255, 0, 0));
																			}
																		}

																	}
																}
															}
														}
														ImGui::End();
													}
												}
												//////////////////////////end radar window
											}
											if (Game::W2S(HeadPos, HeadSP) && Game::W2S(FeetPos, FeetSP) && (Mem::IsValid(LocalPlayer->GetCurrentVehicle()) ? true : (dist >= .01f && dist < Features::ESPDistance))/*dist > 0.01f && dist < Features::ESPDistance*/) //if in vehicle show all, no matter distance (bugfix)
											{
												if (Ent->GetTeam() == LocalPlayer->GetTeam() && !Features::ESPShowFriends)
													continue;

												Color BoxColor = Color(0, 235, 235, 255);

												bool Enemy = false, Visible = false;
												if (Ent->GetTeam() != LocalPlayer->GetTeam())
												{
													Enemy = true;

													if (!EntSoldier->m_Occluded) // czy go widac?
													{
														Visible = true;
														BoxColor = Color(0, 255, 0, 255);
													}
													else
														BoxColor = Color(255, 0, 0, 255);
												}

												float BoxSY = FeetSP.y - HeadSP.y;
												float BoxSX = BoxSY / 2.f;
												float BoxX = HeadSP.x - BoxSX / 2.f;
												float BoxY = HeadSP.y;
												float HP = EntSoldier->HealthComponent->HP;

												if (Features::ShowESPBoxes)
												{
													DrawEmptyBox(BoxX - 1, BoxY - 1, BoxSX, BoxSY + 2, 3, Color(0, 0, 0, 175));
													DrawEmptyBox(BoxX, HeadSP.y, BoxSX, BoxSY, 1, BoxColor);
												}

												if (!Mem::IsValid(LocalPlayer->GetCurrentVehicle())) {  //sorry, no ESP distance in vehicle. bugfix
													std::string Distance;
													if (Features::ShowName) Distance = "\n[" + std::to_string(static_cast<int>(dist)) + " m]";
													else  Distance = "[" + std::to_string(static_cast<int>(dist)) + " m]";
													DrawDXText(BoxX - 10.f, Features::ShowHealth ? BoxY + BoxSY + 4.f : BoxY + BoxSY, 0.6f, false, 0.f, Color(255, 255, 255, 255), true, "%s%s", Features::ShowName ? Ent->Name : "", Features::ShowDistance ? Distance.c_str() : "");
												}
												else
													DrawDXText(BoxX - 10.f, Features::ShowHealth ? BoxY + BoxSY + 4.f : BoxY + BoxSY, 0.6f, false, 0.f, Color(255, 255, 255, 255), true, "%s", Features::ShowName ? Ent->Name : "");

												if (Features::ShowHealth)
												{
													DrawBox(BoxX - 1, FeetSP.y + 2, (HP * BoxSX) / 100 + 3, 5, Color(0, 0, 0, 255));
													DrawBox(BoxX, FeetSP.y + 3, (HP * BoxSX) / 100 + 1, 3, Color(((100 - HP) * 255) / 100, (HP * 255) / 100, 0, 255));
												}

												/*for (int i = 0; i < 200; i++)
												{
												Vector3 fucking, f2;
												EntSoldier->GetBonePosition(fucking, i);
												Game::W2S(fucking, f2);
												DrawDXText(f2.x, f2.y, 0.5f, true, 0.f, Color(255, 255, 255, 255), true, "%i", i);
												}*/ //BONES TEST

												if (Features::ShowBones)
												{
													Vector3 NeckSP, ChestSP, StomachSP, HipSP, LShoulderSP, LBicepsSP, LElbowSP, LUlnaSP, LHandSP, LFemurSP, LKneeSP, LShinboneSP, LMalleolusSP, LTipToeSP,
														RShoulderSP, RBicepsSP, RElbowSP, RUlnaSP, RHandSP, RFemurSP, RKneeSP, RShinboneSP, RMalleolusSP, RTipToeSP, NeckPos, ChestPos, StomachPos, HipPos,
														LShoulderPos, LBicepsPos, LElbowPos, LUlnaPos, LHandPos, LFemurPos, LKneePos, LShinbonePos, LMalleolusPos, LTipToePos, RShoulderPos, RBicepsPos,
														RElbowPos, RUlnaPos, RHandPos, RFemurPos, RKneePos, RShinbonePos, RMalleolusPos, RTipToePos;

													EntSoldier->GetBonePosition(HeadPos, HEAD/*53*/);
													EntSoldier->GetBonePosition(NeckPos, NECK);
													/*Vector3 fucking, f2;
													EntSoldier->GetBonePosition(fucking, HEAD);
													Game::W2S(fucking, f2);
													DrawCircle(f2.x, f2.y, Color(255, 0, 0, 255), 4.f, 10);*/
													EntSoldier->GetBonePosition(ChestPos, CHEST);
													EntSoldier->GetBonePosition(StomachPos, STOMACH);
													EntSoldier->GetBonePosition(HipPos, HIP);

													EntSoldier->GetBonePosition(LShoulderPos, LEFT_SHOULDER);
													EntSoldier->GetBonePosition(LBicepsPos, LEFT_BICEPS);
													EntSoldier->GetBonePosition(LElbowPos, LEFT_ELBOW);
													EntSoldier->GetBonePosition(LUlnaPos, LEFT_ULNA);
													EntSoldier->GetBonePosition(LHandPos, LEFT_HAND);
													EntSoldier->GetBonePosition(LFemurPos, LEFT_FEMUR);
													EntSoldier->GetBonePosition(LKneePos, LEFT_KNEE);
													EntSoldier->GetBonePosition(LShinbonePos, LEFT_SHINBONE);
													EntSoldier->GetBonePosition(LMalleolusPos, LEFT_MALLEOLUS);
													EntSoldier->GetBonePosition(LTipToePos, LEFT_TIPTOE);

													EntSoldier->GetBonePosition(RShoulderPos, RIGHT_SHOULDER);
													EntSoldier->GetBonePosition(RBicepsPos, RIGHT_BICEPS);
													EntSoldier->GetBonePosition(RElbowPos, RIGHT_ELBOW);
													EntSoldier->GetBonePosition(RUlnaPos, RIGHT_ULNA);
													EntSoldier->GetBonePosition(RHandPos, RIGHT_HAND);
													EntSoldier->GetBonePosition(RFemurPos, RIGHT_FEMUR);
													EntSoldier->GetBonePosition(RKneePos, RIGHT_KNEE);
													EntSoldier->GetBonePosition(RShinbonePos, RIGHT_SHINBONE);
													EntSoldier->GetBonePosition(RMalleolusPos, RIGHT_MALLEOLUS);
													EntSoldier->GetBonePosition(RTipToePos, RIGHT_TIPTOE);

													if (Game::W2S(HeadPos, HeadSP) &&
														Game::W2S(NeckPos, NeckSP) &&
														//Game::W2S(ChestPos, ChestSP) &&
														//Game::W2S(StomachPos, StomachSP) &&
														Game::W2S(HipPos, HipSP) &&
														Game::W2S(LShoulderPos, LShoulderSP) &&
														Game::W2S(LBicepsPos, LBicepsSP) &&
														Game::W2S(LElbowPos, LElbowSP) &&
														Game::W2S(LUlnaPos, LUlnaSP) &&
														Game::W2S(LHandPos, LHandSP) &&
														Game::W2S(LFemurPos, LFemurSP) &&
														Game::W2S(LKneePos, LKneeSP) &&
														Game::W2S(LShinbonePos, LShinboneSP) &&
														Game::W2S(LMalleolusPos, LMalleolusSP) &&
														Game::W2S(LTipToePos, LTipToeSP) &&
														Game::W2S(RShoulderPos, RShoulderSP) &&
														Game::W2S(RBicepsPos, RBicepsSP) &&
														Game::W2S(RElbowPos, RElbowSP) &&
														Game::W2S(RUlnaPos, RUlnaSP) &&
														Game::W2S(RHandPos, RHandSP) &&
														Game::W2S(RFemurPos, RFemurSP) &&
														Game::W2S(RKneePos, RKneeSP) &&
														Game::W2S(RShinbonePos, RShinboneSP) &&
														Game::W2S(RMalleolusPos, RMalleolusSP) &&
														Game::W2S(RTipToePos, RTipToeSP))
													{
														Color BonesColor = Color(0, 255, 255, 255);
														if (Enemy)
														{
															if (Visible)
																BonesColor = Color(0, 255, 0, 255);
															else
																BonesColor = Color(255, 0, 0, 255);
														}

														float HeadSize = sqrt(pow(HeadSP.x - NeckSP.x, 2) + pow(HeadSP.y - NeckSP.y, 2));
														DrawCircle(HeadSP.x, HeadSP.y, BonesColor, HeadSize / 2.7, 10);
														//DrawCircle(HeadSP.x, HeadSP.y, BonesColor, 70.f / dist, 10);

														DrawLine(HeadSP.x, HeadSP.y, NeckSP.x, NeckSP.y, BonesColor);
														DrawLine(NeckSP.x, NeckSP.y, HipSP.x, HipSP.y, BonesColor);

														DrawLine(NeckSP.x, NeckSP.y, LShoulderSP.x, LShoulderSP.y, BonesColor);
														DrawLine(LShoulderSP.x, LShoulderSP.y, LBicepsSP.x, LBicepsSP.y, BonesColor);
														DrawLine(LBicepsSP.x, LBicepsSP.y, LElbowSP.x, LElbowSP.y, BonesColor);
														DrawLine(LElbowSP.x, LElbowSP.y, LHandSP.x, LHandSP.y, BonesColor);

														DrawLine(NeckSP.x, NeckSP.y, RShoulderSP.x, RShoulderSP.y, BonesColor);
														DrawLine(RShoulderSP.x, RShoulderSP.y, RBicepsSP.x, RBicepsSP.y, BonesColor);
														DrawLine(RBicepsSP.x, RBicepsSP.y, RElbowSP.x, RElbowSP.y, BonesColor);
														DrawLine(RElbowSP.x, RElbowSP.y, RHandSP.x, RHandSP.y, BonesColor);

														DrawLine(HipSP.x, HipSP.y, LFemurSP.x, LFemurSP.y, BonesColor);
														DrawLine(LFemurSP.x, LFemurSP.y, LKneeSP.x, LKneeSP.y, BonesColor);
														DrawLine(LKneeSP.x, LKneeSP.y, LShinboneSP.x, LShinboneSP.y, BonesColor);
														DrawLine(LShinboneSP.x, LShinboneSP.y, LMalleolusSP.x, LMalleolusSP.y, BonesColor);
														DrawLine(LMalleolusSP.x, LMalleolusSP.y, LTipToeSP.x, LTipToeSP.y, BonesColor);

														DrawLine(HipSP.x, HipSP.y, RFemurSP.x, RFemurSP.y, BonesColor);
														DrawLine(RFemurSP.x, RFemurSP.y, RKneeSP.x, RKneeSP.y, BonesColor);
														DrawLine(RKneeSP.x, RKneeSP.y, RShinboneSP.x, RShinboneSP.y, BonesColor);
														DrawLine(RShinboneSP.x, RShinboneSP.y, RMalleolusSP.x, RMalleolusSP.y, BonesColor);
														DrawLine(RMalleolusSP.x, RMalleolusSP.y, RTipToeSP.x, RTipToeSP.y, BonesColor);
													}
												}
											}
										}
									}
									if (Features::ShowVehicles && Mem::IsValid(Ent->GetCurrentVehicle()))
									{
										TransformAABBStruct _AABB;
										Vector3 minSP, maxSP, cor2SP, cor3SP, cor4SP, cor5SP, cor6SP, cor7SP, NameSP;
										CVehicleEntity* Vehicle = Ent->GetCurrentVehicle();
										Matrix _Transform;
										Vehicle->GetTransform(&_Transform);
										Vector3 Position = Vector3(_Transform.m[3][0], _Transform.m[3][1], _Transform.m[3][2]);
										glm::vec3 glmPos = glm::vec3(Position.x, Position.y, Position.z);

										Color BoxColor = Color(0, 0, 150, 255);

										//to fix the vehicle friend/enemy color issue (all of them having the same color), change the following line
										//https://www.unknowncheats.me/forum/battlefield-1-a/210381-bf1-internal-hack-source-3.html
										//if (Vehicle->GetTeam() != LocalPlayer->GetTeam())
										if (Ent->GetTeam() != LocalPlayer->GetTeam())
											BoxColor = Color(255, 220, 0, 255);
										else
											if (!Features::ESPShowFriends)
												continue;

										Vehicle->GetAABB(&_AABB);

										glm::vec3 min = glm::vec3(_AABB.AABB.m_Min.x, _AABB.AABB.m_Min.y, _AABB.AABB.m_Min.z);
										glm::vec3 max = glm::vec3(_AABB.AABB.m_Max.x, _AABB.AABB.m_Max.y, _AABB.AABB.m_Max.z);
										glm::vec3 cor2(max.x, min.y, min.z);
										glm::vec3 cor3(max.x, min.y, max.z);
										glm::vec3 cor4(min.x, min.y, max.z);
										glm::vec3 cor5(min.x, max.y, max.z);
										glm::vec3 cor6(min.x, max.y, min.z);
										glm::vec3 cor7(max.x, max.y, min.z);
										glm::mat3 TransformMatrix(glm::vec3(_Transform.m[0][0], _Transform.m[1][0], _Transform.m[2][0]),
											glm::vec3(_Transform.m[0][1], _Transform.m[1][1], _Transform.m[2][1]),
											glm::vec3(_Transform.m[0][2], _Transform.m[1][2], _Transform.m[2][2]));

										glm::vec3 crnr2 = glmPos + cor2 * TransformMatrix;
										glm::vec3 crnr3 = glmPos + cor3 * TransformMatrix;
										glm::vec3 crnr4 = glmPos + cor4 * TransformMatrix;
										glm::vec3 crnr5 = glmPos + cor5 * TransformMatrix;
										glm::vec3 crnr6 = glmPos + cor6 * TransformMatrix;
										glm::vec3 crnr7 = glmPos + cor7 * TransformMatrix;
										min = glmPos + min * TransformMatrix;
										max = glmPos + max * TransformMatrix;

										Vector3 MyHeadPos;
										/*//Hope it's not wrong to post it here, but sometimes the medic is unable to revice someone. https://github.com/Tonyx97/BF1-Internal/issues/7
										Vector3 MyHeadPos = LPSoldier->GetPosition(); // Feet Position, fix for Revive Bug
										//LocalPlayer->GetSoldier()->GetBonePosition(MyHeadPos, HEAD); // Creates Revive Bug*/

										if (Mem::IsValid(LPSoldier) && Mem::IsValid(LPSoldier->prediction))  //local player on feet; GetPosition() works OK
											Vector3 MyHeadPos = LPSoldier->GetPosition(); // Feet Position, fix for Revive Bug
										else     //local player in vehicle; GetPosition() crash! => Take position from HEAD, not from GetPosition() prediction
											LPSoldier->GetBonePositionLP(MyHeadPos, HEAD); // Creates Revive Bug. Not aymore

										float dist = Vector3::Distance(Vector3(min.x, min.y, min.z), MyHeadPos);
										if ((Mem::IsValid(LocalPlayer->GetCurrentVehicle()) ? true : (dist >= .01f && dist < Features::ESPDistance)) &&  //if in vehicle show all, no matter distance (bugfix)
																																						 /*dist >= 1.f && dist < Features::ESPDistance &&*/
											Game::W2S(Vector3(min.x, min.y, min.z), minSP) &&
											Game::W2S(Vector3(max.x, max.y, max.z), maxSP) &&
											Game::W2S(Vector3(crnr2.x, crnr2.y, crnr2.z), cor2SP) &&
											Game::W2S(Vector3(crnr3.x, crnr3.y, crnr3.z), cor3SP) &&
											Game::W2S(Vector3(crnr4.x, crnr4.y, crnr4.z), cor4SP) &&
											Game::W2S(Vector3(crnr5.x, crnr5.y, crnr5.z), cor5SP) &&
											Game::W2S(Vector3(crnr6.x, crnr6.y, crnr6.z), cor6SP) &&
											Game::W2S(Vector3(crnr7.x, crnr7.y, crnr7.z), cor7SP) &&
											Game::W2S(Vector3(glmPos.x, glmPos.y /*+ (max.y - min.y)*/, glmPos.z), NameSP))
										{
											DrawDXText(NameSP.x, NameSP.y, 0.8f, true, 0.f, Color(0, 255, 255, 255), true, "%s", Vehicle->GetName().c_str());

											DrawLine(minSP.x, minSP.y, cor4SP.x, cor4SP.y, BoxColor);
											DrawLine(minSP.x, minSP.y, cor2SP.x, cor2SP.y, BoxColor);
											DrawLine(minSP.x, minSP.y, cor6SP.x, cor6SP.y, BoxColor);
											DrawLine(maxSP.x, maxSP.y, cor5SP.x, cor5SP.y, BoxColor);
											DrawLine(maxSP.x, maxSP.y, cor7SP.x, cor7SP.y, BoxColor);
											DrawLine(maxSP.x, maxSP.y, cor3SP.x, cor3SP.y, BoxColor);
											DrawLine(cor7SP.x, cor7SP.y, cor6SP.x, cor6SP.y, BoxColor);
											DrawLine(cor7SP.x, cor7SP.y, cor2SP.x, cor2SP.y, BoxColor);
											DrawLine(cor6SP.x, cor6SP.y, cor5SP.x, cor5SP.y, BoxColor);
											DrawLine(cor6SP.x, cor6SP.y, cor7SP.x, cor7SP.y, BoxColor);
											DrawLine(cor2SP.x, cor2SP.y, cor3SP.x, cor3SP.y, BoxColor);
											DrawLine(cor3SP.x, cor3SP.y, cor4SP.x, cor4SP.y, BoxColor);
											DrawLine(cor4SP.x, cor4SP.y, cor5SP.x, cor5SP.y, BoxColor);
										}
									}
								}
								//outputFile.close();  //log
							}
						}
					}
				}
			}
		}
		/////log show on screen/////////////////////////
		if (!SSCleaner->NeedSS && Mem::IsValid(Log.get())) //log got something => alert, show on screen last line
			if (Log->Buf.size() && LastLogSize != Log->Buf.size()) {
				if (GetTickCount() - LastTick < 15000) { // Show time 15 sec.
					if (GetTickCount() - LastTick > 1000) //show 1 sec after added log just to be safe when use of Features::giveCleanSS to not capture log printed on screen (although they are one thread sequently called)
						DrawDXText(ScreenSX / 2.f, (ScreenSY * 0.91f) - 25.f, 1.f, true, 0.f, Color(255, 0, 70, 200), true, "%s", Log->GetLastLine());
				}
				else if (!ShowLogAlert) {
					ShowLogAlert = true;
					LastTick = GetTickCount();
				}
				else {
					ShowLogAlert = false;
					LastLogSize = Log->Buf.size();
				}
			}
		/////////////////////////////////////////////
		ImGui::Render();
	}

	DX11End();
	std::lock_guard<std::mutex> lock(DX11_mutex);  //keep mutex on last line because I want hkCopyResource_blocked.bmp to have all hacks drawn on the screenshot, to see what exactly is blocked
}

BOOLEAN _Initialized = FALSE;

HRESULT HookedDX11Renderer(IDXGISwapChain* _SwapChain, UINT SyncInterval, UINT Flags)
{
	if (!_Initialized) _Initialized = DX11->InitDX11RenderStuff(_SwapChain);

	////fix 05.09.2017////////////////////////
	DX11->DX11Device->GetImmediateContext(&(DX11->DX11DeviceContext));

	Dx11RenderTargetView* pDxRenderTargetView = Mem::ReadPtr<Dx11RenderTargetView*>({ OFFSET_DXRENDERER, 0x820, 0x02B8 }, true);
	if (!pDxRenderTargetView) exit(1);

	ID3D11RenderTargetView* pTargetViews[0x8];
	for (int i = 0; i < pDxRenderTargetView->m_targetCount; i++)
		pTargetViews[i] = pDxRenderTargetView->m_renderTargetViews[i];

	DX11->DX11DeviceContext->OMSetRenderTargets(pDxRenderTargetView->m_targetCount, pTargetViews, pDxRenderTargetView->m_depthStencilView);
	DX11->DX11BackBuffer = (ID3D11Texture2D*)pTargetViews;
	//////////////////////////////////////////////

	DX11->DX11RenderScene();

	return DX11HookPresent(_SwapChain, SyncInterval, Flags);
}

DWORD DX11Renderer::InitDevice(HMODULE _DllModule, const wchar_t* HWNDTarget)
{
	while (true)
	{
		if (GetAsyncKeyState(key_StartHack)) break;  //VK_END
		Sleep(40);
	}

	HWND hWnd = FindWindow(0, HWNDTarget);

	WTarget = hWnd;

	Target = HWNDTarget;
	DllModule = _DllModule;

	RECT TarDims;
	GetWindowRect(hWnd, &TarDims);
	ScreenX = TarDims.left;
	ScreenY = TarDims.top;
	ScreenSX = TarDims.right - TarDims.left;
	ScreenSY = TarDims.bottom - TarDims.top;

	Crosshair = false;

	//IDXGISwapChain* sc = Mem::ReadPtr<IDXGISwapChain*>({ OFFSET_DXRENDERER, 0x7F0, 0x280 }, true);
	IDXGISwapChain* sc = Mem::ReadPtr<IDXGISwapChain*>({ OFFSET_DXRENDERER, 0x7F0 + 0x30, 0x280, 0x10 }, true);  //IDXGISwapChain* m_swapChain; //0x0010  https://www.unknowncheats.me/forum/1799228-post1160.html   https://www.unknowncheats.me/forum/battlefield-1-a/186728-battlefield-1-reversing-struct-offsets-thread-59.html
	if (!Mem::IsValid(sc))
		exit(1);

	QWORD* EngineSwapChainVT = *(QWORD**)(sc);

	PresentHook = new PLH::Detour();
	PresentHook->SetupHook((BYTE*)EngineSwapChainVT[8], (BYTE*)HookedDX11Renderer);
	PresentHook->Hook();
	DX11HookPresent = PresentHook->GetOriginal<D3D11PresentHook>();

	pfh = NULL;
	//pfh = new CVMTHookManager64((QWORD**)BorderInputNode::Get()->input_node);  //disable this if you dont have BORDER_INPUT_NODE
	//PerFrameHook = (PerFrameHook_t)pfh->dwGetMethodAddress(3);   //disable this if you dont have BORDER_INPUT_NODE
	//pfh->dwHookMethod((DWORD64)HookedPerFrame, 3);    //disable this if you dont have BORDER_INPUT_NODE

	IHooks::Initialize(Target);

	while (true)
	{
		if (GetAsyncKeyState(key_Quit)) break;
		Sleep(200);
	}

	Game::ThreadState[0] = FALSE;

	while (true)
	{
		if (!Game::ThreadState[0] && !Game::ThreadState[1] && !Game::ThreadState[2]) break;
		Sleep(100);
	}

	Closing = TRUE;
	IHooks::Restore();
	Sleep(1000);
	CleanupDevice();
	while (true)
		Sleep(9999000);  //do not exit, will make game crash	

	return NULL;
}

BOOLEAN DX11Renderer::InitDX11RenderStuff(IDXGISwapChain* _SwapChain)
{
	void const* shaderByteCode;
	size_t byteCodeLength;

	_SwapChain->GetDevice(__uuidof(DX11Device), (void**)&DX11Device);
	_SwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (void**)&DX11BackBuffer);
	DX11SwapChain = _SwapChain;
	//DX11Device->CreateRenderTargetView(DX11BackBuffer, NULL, &DX11RenderTargetView);

	DX11Device->GetImmediateContext(&DX11DeviceContext);
	DX11SpriteBatch.reset(new SpriteBatch(DX11DeviceContext));
	DX11Purista.reset(new SpriteFont(DX11Device, PuristaFont, sizeof(PuristaFont)));
	DX11Batch.reset(new PrimitiveBatch<VertexPositionColor>(DX11DeviceContext));
	DX11CommonStates.reset(new CommonStates(DX11Device));
	DX11BatchEffects.reset(new BasicEffect(DX11Device));
	DX11BatchEffects->SetVertexColorEnabled(true);
	StateSaver = new DXTKStateSaver;

	InitImGUI(WTarget, DX11Device, DX11DeviceContext);

	DXGI_SWAP_CHAIN_DESC sd;
	_SwapChain->GetDesc(&sd);

	/*D3D11_RENDER_TARGET_VIEW_DESC RenderTarget;
	ZeroMemory(&RenderTarget, sizeof(RenderTarget));
	RenderTarget.Format = sd.BufferDesc.Format;
	RenderTarget.ViewDimension = D3D11_RTV_DIMENSION_TEXTURE2D;

	DX11Device->CreateRenderTargetView(DX11BackBuffer, &RenderTarget, &DX11RenderTargetView);
	DX11DeviceContext->OMSetRenderTargets(1, &DX11RenderTargetView, NULL);*/

	DX11BatchEffects->GetVertexShaderBytecode(&shaderByteCode, &byteCodeLength);
	DX11Device->CreateInputLayout(VertexPositionColor::InputElements, VertexPositionColor::InputElementCount, shaderByteCode, byteCodeLength, &InputLayout);

	XMMATRIX Projection = XMMatrixOrthographicOffCenterRH(0.0f, ScreenSX, ScreenSY, 0.0f, 0.0f, 1.0f);
	DX11BatchEffects->SetProjection(Projection);
	DX11BatchEffects->SetWorld(XMMatrixIdentity());
	DX11BatchEffects->SetView(XMMatrixIdentity());

	SSCleaner->HookBitBlt();
	SSCleaner->HookCopyResource();  //turned it off. The game is calling for many other purposes so cant determine when is for Screanshot and when is not
	SSCleaner->HookCopySubresourceRegion();  //turned it off. The game is calling for many other purposes so cant determine when is for Screanshot and when is not

	Initialized = TRUE;
	return TRUE;
}

void DX11Renderer::DX11Begin()
{
	RestoreState = FALSE;
	StateSaver->saveCurrentState(DX11DeviceContext);
	RestoreState = TRUE;

	DX11SpriteBatch->Begin(SpriteSortMode_Deferred);

	DX11BatchEffects->Apply(DX11DeviceContext);
	DX11DeviceContext->IASetInputLayout(InputLayout);

	DX11Batch->Begin();

	ImGui_ImplDX11_NewFrame();
}

void DX11Renderer::DX11End()
{
	DX11Batch->End();
	DX11SpriteBatch->End();
	if (RestoreState) StateSaver->restoreSavedState();
}

void DX11Renderer::DrawCursor(float x, float y, float size)
{
	DX11SpriteBatch->Draw(CursorTexture.Get(), XMFLOAT2(x + (CursorDesc.Width / 2 * size), y + (CursorDesc.Height / 2 * size)), nullptr, Colors::White, 0.f, XMFLOAT2(CursorDesc.Width / 2, CursorDesc.Height / 2), size);
}

void DX11Renderer::DrawDXText(float x, float y, float scale, bool center, float rot, Color color, bool shadow, const char* Format, ...)
{
	if (!Initialized) return;

	char Buf[1024] = { '\0' };
	va_list VAL;
	va_start(VAL, Format);
	vsprintf_s(Buf, Format, VAL);
	va_end(VAL);
	std::wstring text = ConvertToWStr(Buf);

	XMFLOAT2 pos = { x, y };
	XMFLOAT2 posShadow[4];
	XMVECTOR colora = { color.R() / 255, color.G() / 255, color.B() / 255, color.A() / 255 };
	XMVECTOR coloraShadow = { 0.f, 0.f, 0.f, 0.7f };

	posShadow[0] = { x + 1.f, y + 1.f };
	posShadow[1] = { x - 1.f, y + 1.f };
	posShadow[2] = { x - 1.f, y - 1.f };
	posShadow[3] = { x + 1.f, y - 1.f };

	XMFLOAT2 origin(0, 0);
	if (center)
	{
		XMVECTOR size = DX11Purista->MeasureString(text.c_str());
		float sizeX = XMVectorGetX(size);
		float sizeY = XMVectorGetY(size);
		origin = XMFLOAT2(sizeX / 2, sizeY / 2);
	}

	if (shadow && color.A() / 255.f > 0.f)
	{
		for (unsigned short i = 0; i < 4; i++)
			DX11Purista->DrawString(DX11SpriteBatch.get(), text.c_str(), posShadow[i], coloraShadow, rot, origin, scale * 0.64f, SpriteEffects_None, 0);
	}
	DX11Purista->DrawString(DX11SpriteBatch.get(), text.c_str(), pos, colora, rot, origin, scale * 0.64f, SpriteEffects_None, 0);
}

void DX11Renderer::DrawUnicodeText(float x, float y, float scale, bool center, float rot, Color color, bool shadow, std::wstring Format)
{
	if (!Initialized) return;

	//std::wstring text = ConvertToWStr(Format);

	XMFLOAT2 pos = { x, y };
	XMFLOAT2 posShadow = { x + 1, y + 1 };
	XMVECTOR colora = { color.R() / 255, color.G() / 255, color.B() / 255, color.A() / 255 };
	XMVECTOR coloraShadow = { 0.f, 0.f, 0.f, 255.f };

	XMFLOAT2 origin(0, 0);
	if (center)
	{
		XMVECTOR size = DX11Purista->MeasureString(Format.c_str());
		float sizeX = XMVectorGetX(size);
		float sizeY = XMVectorGetY(size);
		origin = XMFLOAT2(sizeX / 2, sizeY / 2);
	}

	if (shadow) DX11Purista->DrawString(DX11SpriteBatch.get(), Format.c_str(), posShadow, coloraShadow, rot, origin, scale * 0.64f, SpriteEffects_None, 0);
	DX11Purista->DrawString(DX11SpriteBatch.get(), Format.c_str(), pos, colora, rot, origin, scale * 0.64f, SpriteEffects_None, 0);
}


void DX11Renderer::DrawEmptyBox(float x, float y, float x1, float y1, float px, Color color)
{
	FillRGB(x, y, x1, px, color);
	FillRGB(x + x1, y, px, y1, color);
	FillRGB(x, y + y1 - px, x1 + px, px, color);
	FillRGB(x, y, px, y1, color);
}


void DX11Renderer::DrawEmptyBoxTab(float x, float y, float x1, float y1, float px, Color color)
{
	FillRGB(x, y, x1, px, color);
	FillRGB(x + x1, y, px, y1, color);
	FillRGB(x, y, px, y1, color);
}

void DX11Renderer::DrawEmptyBoxTab_2(float x, float y, float x1, float y1, float from, float to, float px, Color color)
{
	FillRGB(x, y, from, px, color);
	FillRGB(x + to, y, x1 - to, px, color);
	FillRGB(x + x1, y, px, y1, color);
	FillRGB(x, y + y1 - px, x1 + px, px, color);
	FillRGB(x, y, px, y1, color);
}

void DX11Renderer::DrawBox(float x, float y, float x1, float y1, Color color)
{
	FillRGB(x, y, x1, y1, color);
}


void DX11Renderer::FillRGB(float x, float y, float x1, float y1, Color color)
{
	FXMVECTOR c1 = { x, y };
	FXMVECTOR c2 = { x + x1, y };
	FXMVECTOR c3 = { x + x1, y + y1 };
	FXMVECTOR c4 = { x, y + y1 };
	FXMVECTOR colora = { color.R() / 255.f, color.G() / 255.f, color.B() / 255.f, color.A() / 255.f };
	VertexPositionColor d1(c1, colora);
	VertexPositionColor d2(c2, colora);
	VertexPositionColor d3(c3, colora);
	VertexPositionColor d4(c4, colora);

	DX11Batch->DrawQuad(d1, d2, d3, d4);
}

void DX11Renderer::Draw3DBox(float x, float y, float x1, float y1, float movement, Color color)
{
	if (!Initialized) return;

	FXMVECTOR c1 = { x, y };
	FXMVECTOR c2 = { x + x1, y };
	FXMVECTOR c3 = { x + x1 - movement, y + y1 };
	FXMVECTOR c4 = { x - movement, y + y1 };
	FXMVECTOR colora = { color.R() / 255.f, color.G() / 255.f, color.B() / 255.f, color.A() / 255.f };
	VertexPositionColor d1(c1, colora);
	VertexPositionColor d2(c2, colora);
	VertexPositionColor d3(c3, colora);
	VertexPositionColor d4(c4, colora);

	DX11Batch->DrawQuad(d1, d2, d3, d4);
}

void DX11Renderer::DrawTriangle(float x, float y, Color color)
{
	if (!Initialized) return;

	FXMVECTOR c1 = { x, y };
	FXMVECTOR c2 = { x - 20.f, y };
	FXMVECTOR c3 = { x, y - 20.f };
	FXMVECTOR colora = { color.R() / 255.f, color.G() / 255.f, color.B() / 255.f, color.A() / 255.f };
	VertexPositionColor d1(c1, colora);
	VertexPositionColor d2(c2, colora);
	VertexPositionColor d3(c3, colora);

	DX11Batch->DrawTriangle(d1, d2, d3);
}

void DX11Renderer::DrawTriangle(float angle1x, float angle1y, float angle2x, float angle2y, float angle3x, float angle3y, Color color)
{
	if (!Initialized) return;

	FXMVECTOR c1 = { angle1x, angle1y };
	FXMVECTOR c2 = { angle2x, angle2y };
	FXMVECTOR c3 = { angle3x, angle3y };
	FXMVECTOR colora = { color.R() / 255.f, color.G() / 255.f, color.B() / 255.f, color.A() / 255.f };
	VertexPositionColor d1(c1, colora);
	VertexPositionColor d2(c2, colora);
	VertexPositionColor d3(c3, colora);

	DX11Batch->DrawTriangle(d1, d2, d3);
}

void DX11Renderer::DrawCircle(float x, float y, Color color, float radius, int _s)
{
	if (!Initialized) return;
	float Angle = (360.0f / _s)*(3.1415926f / 180);

	float Cos = cos(Angle);
	float Sin = sin(Angle);

	XMVECTOR vec = { radius, 0 };
	XMVECTOR pos = { x, y };

	for (unsigned short i = 0; i < _s; ++i)
	{
		XMVECTOR rot = { Cos*XMVectorGetX(vec) - Sin*XMVectorGetY(vec), Sin*XMVectorGetX(vec) + Cos*XMVectorGetY(vec) };
		rot += pos;
		vec += pos;
		DrawLine(XMVectorGetX(vec), XMVectorGetY(vec), XMVectorGetX(rot), XMVectorGetY(rot), color);
		vec = rot - pos;
	}
}


void DX11Renderer::DrawLine(float x0, float y0, float x1, float y1, Color color)
{
	if (!Initialized) return;

	FXMVECTOR pos1 = { x0, y0 };
	FXMVECTOR pos2 = { x1, y1 };
	FXMVECTOR colora = { color.R() / 255, color.G() / 255, color.B() / 255, color.A() / 255 };
	VertexPositionColor draw1(pos1, colora);
	VertexPositionColor draw2(pos2, colora);

	DX11Batch->DrawLine(draw1, draw2);
}


void DX11Renderer::CleanupDevice()
{
	DX11Device->Release();
	DX11DeviceContext->Release();
	PresentHook->UnHook();
	//DetourPerFrameHook->UnHook();
	if (pfh != NULL) pfh->UnHook();
	if (SSCleaner->BitBltState) SSCleaner->BitBltHook->UnHook();
	if (SSCleaner->CopyResourceState) SSCleaner->CopyResourceHook->UnHook();
	if (SSCleaner->CopySubresourceRegionState) SSCleaner->CopySubresourceHook->UnHook();
}


std::wstring DX11Renderer::ConvertToWStr(const std::string& s)
{
	int len;
	int slength = (int)s.length() + 1;
	len = MultiByteToWideChar(CP_ACP, 0, s.c_str(), slength, 0, 0);
	wchar_t* buf = new wchar_t[len];
	MultiByteToWideChar(CP_ACP, 0, s.c_str(), slength, buf, len);
	std::wstring r(buf);
	delete[] buf;
	return r;
}

//DX11 STATE SAVER
//DX11 STATE SAVER
//DX11 STATE SAVER
//DX11 STATE SAVER



DXTKStateSaver::DXTKStateSaver() : m_savedState(false), m_featureLevel(D3D_FEATURE_LEVEL_11_0), m_pContext(NULL), m_primitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_UNDEFINED), m_pInputLayout(NULL), m_pBlendState(NULL),
m_sampleMask(0xFFFFFFFF), m_pDepthStencilState(NULL), m_stencilRef(0), m_pRasterizerState(NULL), m_pPSSRV(NULL), m_pSamplerState(NULL), m_pVS(NULL), m_numVSClassInstances(0), m_pVSConstantBuffer(NULL), m_pGS(NULL),
m_numGSClassInstances(0), m_pGSConstantBuffer(NULL), m_pGSSRV(NULL), m_pPS(NULL), m_numPSClassInstances(0), m_pHS(NULL), m_numHSClassInstances(0), m_pDS(NULL), m_numDSClassInstances(0), m_pVB(NULL), m_vertexStride(0),
m_vertexOffset(0), m_pIndexBuffer(NULL), m_indexFormat(DXGI_FORMAT_UNKNOWN), m_indexOffset(0)
{
	for (int i = 0; i < 4; ++i)
	{
		m_blendFactor[i] = 0.0f;
	}
	for (int i = 0; i < 256; ++i)
	{
		m_pVSClassInstances[i] = NULL;
		m_pGSClassInstances[i] = NULL;
		m_pPSClassInstances[i] = NULL;
		m_pHSClassInstances[i] = NULL;
		m_pDSClassInstances[i] = NULL;
	}
}

DXTKStateSaver::~DXTKStateSaver()
{
	releaseSavedState();
}

HRESULT DXTKStateSaver::saveCurrentState(ID3D11DeviceContext* pContext)
{
	if (m_savedState) releaseSavedState();
	if (pContext == NULL) return E_INVALIDARG;

	ID3D11Device* pDevice;
	pContext->GetDevice(&pDevice);
	if (pDevice != NULL)
	{
		m_featureLevel = pDevice->GetFeatureLevel();
		pDevice->Release();
	}

	pContext->AddRef();
	m_pContext = pContext;
	m_pContext->IAGetPrimitiveTopology(&m_primitiveTopology);
	m_pContext->IAGetInputLayout(&m_pInputLayout);
	m_pContext->OMGetBlendState(&m_pBlendState, m_blendFactor, &m_sampleMask);
	m_pContext->OMGetDepthStencilState(&m_pDepthStencilState, &m_stencilRef);
	m_pContext->RSGetState(&m_pRasterizerState);
	m_numVSClassInstances = 256;
	m_pContext->VSGetShader(&m_pVS, m_pVSClassInstances, &m_numVSClassInstances);
	m_pContext->VSGetConstantBuffers(0, 1, &m_pVSConstantBuffer);
	m_numPSClassInstances = 256;
	m_pContext->PSGetShader(&m_pPS, m_pPSClassInstances, &m_numPSClassInstances);
	m_pContext->PSGetShaderResources(0, 1, &m_pPSSRV);
	pContext->PSGetSamplers(0, 1, &m_pSamplerState);

	if (m_featureLevel >= D3D_FEATURE_LEVEL_10_0)
	{
		m_numGSClassInstances = 256;
		m_pContext->GSGetShader(&m_pGS, m_pGSClassInstances, &m_numGSClassInstances);
		m_pContext->GSGetConstantBuffers(0, 1, &m_pGSConstantBuffer);

		m_pContext->GSGetShaderResources(0, 1, &m_pGSSRV);

		if (m_featureLevel >= D3D_FEATURE_LEVEL_11_0)
		{
			m_numHSClassInstances = 256;
			m_pContext->HSGetShader(&m_pHS, m_pHSClassInstances, &m_numHSClassInstances);

			m_numDSClassInstances = 256;
			m_pContext->DSGetShader(&m_pDS, m_pDSClassInstances, &m_numDSClassInstances);
		}
	}

	m_pContext->IAGetVertexBuffers(0, 1, &m_pVB, &m_vertexStride, &m_vertexOffset);
	m_pContext->IAGetIndexBuffer(&m_pIndexBuffer, &m_indexFormat, &m_indexOffset);
	m_savedState = true;

	return S_OK;
}

HRESULT DXTKStateSaver::restoreSavedState()
{
	if (!m_savedState) return E_FAIL;

	m_pContext->IASetPrimitiveTopology(m_primitiveTopology);
	m_pContext->IASetInputLayout(m_pInputLayout);

	m_pContext->OMSetBlendState(m_pBlendState, m_blendFactor, m_sampleMask);
	m_pContext->OMSetDepthStencilState(m_pDepthStencilState, m_stencilRef);

	m_pContext->RSSetState(m_pRasterizerState);

	m_pContext->VSSetShader(m_pVS, m_pVSClassInstances, m_numVSClassInstances);
	m_pContext->VSSetConstantBuffers(0, 1, &m_pVSConstantBuffer);

	m_pContext->PSSetShader(m_pPS, m_pPSClassInstances, m_numPSClassInstances);
	m_pContext->PSSetShaderResources(0, 1, &m_pPSSRV);
	m_pContext->PSSetSamplers(0, 1, &m_pSamplerState);

	if (m_featureLevel >= D3D_FEATURE_LEVEL_10_0)
	{
		m_pContext->GSSetShader(m_pGS, m_pGSClassInstances, m_numGSClassInstances);
		m_pContext->GSSetConstantBuffers(0, 1, &m_pGSConstantBuffer);

		m_pContext->GSSetShaderResources(0, 1, &m_pGSSRV);

		if (m_featureLevel >= D3D_FEATURE_LEVEL_11_0)
		{
			m_pContext->HSSetShader(m_pHS, m_pHSClassInstances, m_numHSClassInstances);

			m_pContext->DSSetShader(m_pDS, m_pDSClassInstances, m_numDSClassInstances);
		}
	}

	m_pContext->IASetVertexBuffers(0, 1, &m_pVB, &m_vertexStride, &m_vertexOffset);

	m_pContext->IASetIndexBuffer(m_pIndexBuffer, m_indexFormat, m_indexOffset);

	return S_OK;
}

void DXTKStateSaver::ZeroShaders(ID3D11DeviceContext* pContext)
{
	pContext->VSSetShader(NULL, NULL, 0);
	pContext->PSSetShader(NULL, NULL, 0);
	pContext->HSSetShader(NULL, NULL, 0);
	pContext->DSSetShader(NULL, NULL, 0);
	pContext->GSSetShader(NULL, NULL, 0);
}

void DXTKStateSaver::releaseSavedState()
{
	m_primitiveTopology = D3D11_PRIMITIVE_TOPOLOGY_UNDEFINED;
	SAFE_RELEASE(m_pInputLayout);
	SAFE_RELEASE(m_pBlendState);
	for (int i = 0; i < 4; ++i)
		m_blendFactor[i] = 0.0f;
	m_sampleMask = 0xffffffff;
	SAFE_RELEASE(m_pDepthStencilState);
	m_stencilRef = 0;
	SAFE_RELEASE(m_pRasterizerState);
	SAFE_RELEASE(m_pPSSRV);
	SAFE_RELEASE(m_pSamplerState);
	SAFE_RELEASE(m_pVS);
	for (UINT i = 0; i < m_numVSClassInstances; ++i)
		SAFE_RELEASE(m_pVSClassInstances[i]);
	m_numVSClassInstances = 0;
	SAFE_RELEASE(m_pVSConstantBuffer);
	SAFE_RELEASE(m_pGS);
	for (UINT i = 0; i < m_numGSClassInstances; ++i)
		SAFE_RELEASE(m_pGSClassInstances[i]);
	m_numGSClassInstances = 0;
	SAFE_RELEASE(m_pGSConstantBuffer);
	SAFE_RELEASE(m_pGSSRV);
	SAFE_RELEASE(m_pPS);
	for (UINT i = 0; i < m_numPSClassInstances; ++i)
		SAFE_RELEASE(m_pPSClassInstances[i]);
	m_numPSClassInstances = 0;
	SAFE_RELEASE(m_pHS);
	for (UINT i = 0; i < m_numHSClassInstances; ++i)
		SAFE_RELEASE(m_pHSClassInstances[i]);
	m_numHSClassInstances = 0;
	SAFE_RELEASE(m_pDS);
	for (UINT i = 0; i < m_numDSClassInstances; ++i)
		SAFE_RELEASE(m_pDSClassInstances[i]);
	m_numDSClassInstances = 0;
	SAFE_RELEASE(m_pVB);
	m_vertexStride = 0;
	m_vertexOffset = 0;
	SAFE_RELEASE(m_pIndexBuffer);
	m_indexFormat = DXGI_FORMAT_UNKNOWN;
	m_indexOffset = 0;

	SAFE_RELEASE(m_pContext);
	m_featureLevel = D3D_FEATURE_LEVEL_11_0;

	m_savedState = false;
}

std::unique_ptr<DX11Renderer> DX11;
std::unique_ptr<CLog> Log;