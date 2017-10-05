#include "stdafx.h"
#include "Game.h"
#include "Aimbot.h"
#include <iostream>
#include <string.h>
#include "IMem.h"

float GetAngleBetweenVectors3D(Vector3 v1, Vector3 v2);
Vector3 CalculatePerfectTrajectory(Vector3 From, Vector3 To, Vector3 EntityVelocity, float BulletVelocity, float Gravity);
Vector3 BulletVelocityCorrection(Vector3 vAimPosition, Vector3 EnemyVelocity, Vector3 LocalVelocity, float Distance, float BulletVelocity);
float BulletDropCorrection(float BulletVelocity, float BulletGravity, float Distance);

float Aimbot::SmoothFactor = 0.070; //0.035
float Aimbot::FOV = 90.f; //20.f
float Aimbot::Distance = 300.f; //100.f
int Aimbot::Bone = NECK; //HEAD
int Aimbot::RetargetTimer = 200; //200
bool Aimbot::RandomBone = false; //false
bool Aimbot::PrioritizeDistance = true;
bool Aimbot::AimPrediction = true;
float Aimbot::AimPredictXYZ = 1.0;
float Aimbot::AimOffsetY = 0;
bool Aimbot::AimVehicles = true;
bool Aimbot::AimHorses = true;
int Aimbot::VehicleBone = UP;
int Aimbot::HorseBone = UP;
bool Aimbot::AimSlots2 = true;
bool Aimbot::AimSlots5 = true;
bool Aimbot::AimSlots6 = true;
bool Aimbot::AimSlots7 = true;

CSoldier* ActualTarget = nullptr;

bool IsAiming = false;

void AimbotThread()
{
	while (true)
	{
		CEntity* LocalPlayer = Game::GetLocalPlayer();
		if (Mem::IsValid(LocalPlayer) && Mem::IsValid(LocalPlayer->GetSoldier()))
		{
			CSoldier* LPSoldier = LocalPlayer->GetSoldier();
			if (Mem::IsValid(LPSoldier) && Mem::IsValid(LPSoldier->prediction) && Mem::IsValid(LPSoldier->aim))
			{
				ImGuiIO& io = ImGui::GetIO();
				unsigned int Slot = LPSoldier->GetActiveSlot();

				if (Slot == 0 || Slot == 1 || (Slot == 2 && Aimbot::AimSlots2) || (Slot == 5 && Aimbot::AimSlots5) || (Slot == 6 && Aimbot::AimSlots6) || (Slot == 7 && Aimbot::AimSlots7))
				{
					if (GetAsyncKeyState(key_Aim2) || GetAsyncKeyState(key_Aim1) || GetAsyncKeyState(VK_LBUTTON))
					{
						if (!IsAiming)
						{
							IsAiming = true;
							if (Features::NoSway && !(Features::NoSwayRandomize - 1))  //firm NoRecoil
								LPSoldier->SetSpreadEnabled(true);
							else if (Features::NoSway && Features::NoSwayRandomize) {  //random NoRecoil
								std::srand(unsigned(time(0)));
								if (!(rand() % Features::NoSwayRandomize))
									LPSoldier->SetSpreadEnabled(true);
							}
							if (Features::InstantHit)
								LPSoldier->SetBulletData(true);
							if (Features::giveCleanSS && Features::giveCleanSSwithRMB)
								giveCleanSS = false;  //when aim suspend "Provide Clean Screenshot" feature
						}
					}
					if (!GetAsyncKeyState(key_Aim2) && !GetAsyncKeyState(key_Aim1) && !GetAsyncKeyState(VK_LBUTTON) && IsAiming)
					{
						IsAiming = false;
						ActualTarget = nullptr;
						if (Features::NoSway)
							LPSoldier->SetSpreadEnabled(false);
						if (Features::InstantHit)
							LPSoldier->SetBulletData(false);
						if (Features::giveCleanSS && Features::giveCleanSSwithRMB)
							giveCleanSS = true;  //when not aim unsuspend "Provide Clean Screenshot" feature
					}
				}
				else if ((Slot == 2 || Slot == 3 || Slot == 4 || Slot == 5 || Slot == 6 || Slot == 7) && Features::giveCleanSS && Features::giveCleanSSwithRMB) {  //when you play with 3 4 5 and aim, see ESP if Features::giveCleanSS=On
					if (GetAsyncKeyState(key_Aim2) || GetAsyncKeyState(key_Aim1) || GetAsyncKeyState(VK_LBUTTON))
						giveCleanSS = false;  //when aim suspend "Provide Clean Screenshot" feature
					if (!GetAsyncKeyState(key_Aim2) && !GetAsyncKeyState(key_Aim1) && !GetAsyncKeyState(VK_LBUTTON))
						giveCleanSS = true;  //when not aim unsuspend "Provide Clean Screenshot" feature
				}
				else if (Features::giveCleanSS && Features::giveCleanSSwithRMB)
					giveCleanSS = true;  //when not aim unsuspend "Provide Clean Screenshot" feature
			}
		}

		if ((GetAsyncKeyState(key_Aim1) || GetAsyncKeyState(key_Aim2)) && Features::Aimbot)
		{
			CEntity* LocalPlayer = Game::GetLocalPlayer();
			if (Mem::IsValid(LocalPlayer) && Mem::IsValid(LocalPlayer->GetSoldier()))
			{
				CSoldier* LPSoldier = LocalPlayer->GetSoldier();
				if (Mem::IsValid(LPSoldier) && Mem::IsValid(LPSoldier->prediction) && Mem::IsValid(LPSoldier->aim))
				{
					unsigned int Slot = LPSoldier->GetActiveSlot();
					if (Slot == 0 || Slot == 1 || (Slot == 2 && Aimbot::AimSlots2) || (Slot == 5 && Aimbot::AimSlots5) || (Slot == 6 && Aimbot::AimSlots6) || (Slot == 7 && Aimbot::AimSlots7))
					{
						CEntityList* EntityList = Game::GetEntityList();
						Vector3 MyPos = LPSoldier->GetShootSpace() - LPSoldier->GetSpawnOffset();
						Vector3 MyAngles;
						if (MyPos.Length() <= 1.f)
							continue;

						float NearestOne = 750.f;
						Vector3 AimHere = Vector3::Zero;
						CSoldier* CurrentTarget = nullptr;
						int BoneToAim = -1;

						if (Mem::IsValid(EntityList))
						{
							for (int i = 0; i < 64; i++)
							{
								CEntity* Ent = EntityList->GetEntity(i);
								if (Mem::IsValid(Ent))
								{
									bool isValidTarget = false;
									bool isVehicle = false;   //soldier=false vehicle=true
									CSoldier* EntSoldier = Ent->GetSoldier();
									if (Mem::IsValid(EntSoldier) && Mem::IsValid(EntSoldier->HealthComponent) && Mem::IsValid(EntSoldier->prediction)) {
										isValidTarget = true;
										isVehicle = false;
									}
									else if ((Aimbot::AimVehicles || Aimbot::AimHorses) && Mem::IsValid(Ent->GetCurrentVehicle())) {
										isValidTarget = true;
										isVehicle = true;
									}

									if (isValidTarget)      //if (Mem::IsValid(EntSoldier) && Mem::IsValid(EntSoldier->HealthComponent) && Mem::IsValid(EntSoldier->prediction)) 
									{
										if (Ent->GetTeam() != LocalPlayer->GetTeam())       //if (Ent->GetTeam() != LocalPlayer->GetTeam() && !EntSoldier->m_Occluded && Aimbot::Bone >= 0 && EntSoldier->HealthComponent->HP >= 0.1f)
										{
											Vector3 Pos = Vector3::Zero;
											if (!isVehicle && !EntSoldier->m_Occluded && Aimbot::Bone >= 0 && EntSoldier->HealthComponent->HP >= 0.1f) {  //if soldier
												static const eBones RandBones[] = { HEAD, CHEST, HIP, STOMACH, NECK, RIGHT_FEMUR, LEFT_FEMUR, LEFT_KNEE, RIGHT_KNEE };
												if (!Aimbot::RandomBone)
													BoneToAim = Aimbot::Bone;
												else
													BoneToAim = static_cast<int>(RandBones[rand() % 9]);
												if (BoneToAim != -1)
													EntSoldier->GetBonePosition(Pos, BoneToAim);
											}
											else if (isVehicle) {   //if vehicle
												if (Ent->GetCurrentVehicle()->IsHorse())  //if horse
													Ent->GetCurrentVehicle()->GetVehiclePosition(Pos, Aimbot::HorseBone);
												else   //if tank
													Ent->GetCurrentVehicle()->GetVehiclePosition(Pos, Aimbot::VehicleBone);
											}

											if (Pos != Vector3::Zero)  //if Pos is set  Pos != Vector3::Zero //if (EntSoldier->GetBonePosition(Pos, BoneToAim) || Ent->GetCurrentVehicle()->GetVehiclePosition(Pos) ){
											{
												MyAngles = LPSoldier->GetAngles();
												if (MyAngles.Length() != 0.f)
												{
													float dist = Vector3::Distance(MyPos, Pos);    //if (isVehicle && Ent->GetCurrentVehicle()->IsHorse()) Log->AddLog("horse %.2f %.2f %.2f\n", Pos.x, Pos.y, Pos.z);
													Vector3 SP;
													if (Game::W2S(Pos, SP))
													{
														if (Vector2::Distance(Vector2(SP.x, SP.y), Vector2(DX11->ScreenSX / 2.f, DX11->ScreenSY / 2.f)) <= Aimbot::FOV && dist >= 1.f && dist < Aimbot::Distance)
														{
															if (Aimbot::PrioritizeDistance)
															{
																if (dist < NearestOne)
																{
																	NearestOne = dist;
																	AimHere = Pos;
																	CurrentTarget = EntSoldier;
																	if (Aimbot::AimPrediction) {
																		/*/////////////////////////////////
																		//Mem::ReadPtr<unsigned int>({ (QWORD)this, 0x658, 0x960 }, false);
																		//Mem::WritePtr<float>({ (QWORD)this, 0x658, 0x900, 0x38, 0x4A30, 0x130, 0x10, 0x88 }
																		//Mem::ReadPtr<float>({ (QWORD)this, 0x658, 0x900, 0x38, 0x30, 0x90, 0x10, 0xC0, 0x140 }, false);
																		std::ofstream outputFile1;		//log
																		if (LPSoldier->GetActiveSlot() == 0) outputFile1.open(L"e:\\games\\5\\battlefieldMachinegun.log");
																		if (LPSoldier->GetActiveSlot() == 1) outputFile1.open(L"e:\\games\\5\\battlefieldPistol.log");
																		if (LPSoldier->GetActiveSlot() == 5) outputFile1.open(L"e:\\games\\5\\battlefieldGranate.log");
																		if (LPSoldier->GetActiveSlot() == 2) outputFile1.open(L"e:\\games\\5\\battlefieldRPG.log");
																		for (size_t i = 0; i < 0x4A30 * 100; i++) {
																		//QWORD LastPtr = Mem::Read<QWORD>(Offsets[0] + Offsets[1]);
																		//LastPtr = Mem::Read<QWORD>(LastPtr + Offsets[2]);
																		//LastPtr = Mem::Read<QWORD>(LastPtr + Offsets[3]);
																		//LastPtr = Mem::Read<QWORD>(LastPtr + Offsets[4]);
																		//LastPtr = Mem::Read<QWORD>(LastPtr + Offsets[5]);
																		//LastPtr = Mem::Read<QWORD>(LastPtr + Offsets[6]);
																		//LastPtr = Mem::Read<QWORD>(LastPtr + i);
																		//float val = Mem::Read<float>(LastPtr);
																		float val = Mem::ReadPtr<float>({ (QWORD)LPSoldier, 0x658, 0x900, 0x38, 0x30, 0x90, 0x10, 0xC0, 0x140+i }, false);
																		//float val = Mem::ReadPtr<float>({ (QWORD)LPSoldier, 0x658, 0x900, 0x38, 0x4A30, 0x130, 0x10, 0x88 + 0x0020 +i }, false);
																		if((LPSoldier->GetActiveSlot() == 0) && val >= 0.1 && val <= 1 && val!=1.0)
																		outputFile1 << "val="<< val << " #i=" << i << std::endl;
																		if ((LPSoldier->GetActiveSlot() == 1) && val >= 0.1 && val <= 1 && val != 1.0)
																		outputFile1 << "val=" << val << " #i=" << i << std::endl;
																		if ((LPSoldier->GetActiveSlot() == 5) && val >= 1.2 && val <= 8 && val != 1.0)
																		outputFile1 << "val=" << val << " #i=" << i << std::endl;
																		if ((LPSoldier->GetActiveSlot() == 2) && val >= 1 && val <= 5 && val != 1.0)
																		outputFile1 << "val=" << val << " #i=" << i << std::endl;
																		}
																		outputFile1.close();  Sleep(40);
																		//Log->AddLog("BulletVelocity %p \n",LPSoldier );
																		*////////////////////////////////////////////
																		Vector3 velocity = isVehicle ? Vector3(((ClientVehicleEntity*)Ent->GetCurrentVehicle())->m_Velocity) : CurrentTarget->GetVelocity();
																		AimHere = BulletVelocityCorrection(AimHere, velocity, LPSoldier->GetVelocity(), NearestOne*pow(Aimbot::AimPredictXYZ, 2), LPSoldier->GetBulletVelocity());
																		AimHere.y += BulletDropCorrection(LPSoldier->GetBulletVelocity(), LPSoldier->GetBulletGravity(), NearestOne) + Aimbot::AimOffsetY;
																	}
																}
															}
															else
															{
																NearestOne = dist;
																AimHere = Pos;
																CurrentTarget = EntSoldier;
																if (Aimbot::AimPrediction) {
																	Vector3 velocity = isVehicle ? Vector3(((ClientVehicleEntity*)Ent->GetCurrentVehicle())->m_Velocity) : CurrentTarget->GetVelocity();
																	AimHere = BulletVelocityCorrection(AimHere, velocity, LPSoldier->GetVelocity(), NearestOne*pow(Aimbot::AimPredictXYZ, 2), LPSoldier->GetBulletVelocity());
																	AimHere.y += BulletDropCorrection(LPSoldier->GetBulletVelocity(), LPSoldier->GetBulletGravity(), NearestOne) + Aimbot::AimOffsetY;
																}
															}
														}
													}
												}
												//}
											}
										}
									}
								}
							}
						}
						/*//TEST AIM IN POINT CODE
						AimHere = Vector3(3, 3, 3);
						CurrentTarget = 0;*/
						if (NearestOne <= Aimbot::Distance && CurrentTarget)
						{
							if (Mem::IsValid(&Mem::ReadPtr<Vector3>({ (QWORD)LPSoldier, 0x668, 0x1A8, 0x24, 0x24 }, false)))
							{
								if (ActualTarget && CurrentTarget != ActualTarget)
								{
									ActualTarget = nullptr;
									Sleep(Aimbot::RetargetTimer);
									continue;
								}
								MyAngles = LPSoldier->GetAngles();
								LPSoldier->SetAngles(Aimbot::CalculateAngle(AimHere, MyPos, MyAngles)); //this cause medic bug. If called once medic cannot revive anymore
								ActualTarget = CurrentTarget;
							}
						}
						/*//TEST AIM IN POINT CODE
						else
						{
						if (ActualTarget && CurrentTarget != ActualTarget)
						{
						ActualTarget = nullptr;
						Sleep(Aimbot::RetargetTimer);
						continue;
						}
						MyAngles = LPSoldier->GetAngles();
						LPSoldier->SetAngles(Aimbot::CalculateAngle(AimHere, MyPos, MyAngles)); //this cause medic bug. If called once medic cannot revive anymore

						ActualTarget = CurrentTarget;
						}*/
					}
				}
			}
		}

		if (GetAsyncKeyState(key_Quit))
			break;

		Sleep(1);
	}

	Game::ThreadState[2] = FALSE;
}

//////////////Aimbot Correction / Prediction https://www.unknowncheats.me/forum/battlefield-1-a/212952-battlefield-1-aimbot-correction-prediction.html
Vector3 BulletVelocityCorrection(Vector3 vAimPosition, Vector3 EnemyVelocity, Vector3 LocalVelocity, float Distance, float BulletVelocity)
{
	float m_time = (Distance / fabs(BulletVelocity));

	if (LocalVelocity.x != 0 || LocalVelocity.y != 0 || LocalVelocity.z != 0)
	{
		vAimPosition.x += (EnemyVelocity.x - LocalVelocity.x) * m_time;
		vAimPosition.y += (EnemyVelocity.y - LocalVelocity.y) * m_time;
		vAimPosition.z += (EnemyVelocity.z - LocalVelocity.z) * m_time;
	}
	else
	{
		vAimPosition.x += EnemyVelocity.x * m_time;
		vAimPosition.y += EnemyVelocity.y * m_time;
		vAimPosition.z += EnemyVelocity.z * m_time;
	}

	return vAimPosition;
}

float BulletDropCorrection(float BulletVelocity, float BulletGravity, float Distance)
{
	float m_grav = fabs(BulletGravity);
	float m_time = (Distance / fabs(BulletVelocity));

	return (Distance / 235) * m_grav * m_time * m_time;
}
/*How to use :
vAimPos = BulletVelocityCorrection(vAimPos, soldier_prediction->m_Velocity, local_soldier_prediction->m_Velocity, vTargetDistance, local_soldier_FiringFunctionData->m_initialSpeed);
vAimPos.y = vAimPos.y += BulletDropCorrection(local_soldier_FiringFunctionData->m_initialSpeed, local_soldier_BulletEntityData->m_gravity, vTargetDistance);*/
/////////////End Aimbot Correction / Prediction/////////////////////////////////////////////////////

void NormalizeAngle(Vector2& Angle)
{
	while (Angle.x <= -D3DX_PI)
		Angle.x += 2 * D3DX_PI;
	while (Angle.x > D3DX_PI)
		Angle.x -= 2 * D3DX_PI;
	while (Angle.y <= -D3DX_PI)
		Angle.y += 2 * D3DX_PI;
	while (Angle.y > D3DX_PI)
		Angle.y -= 2 * D3DX_PI;
}

void SmoothAngle(Vector2& From, Vector2& To, float Percent)
{
	Vector2 VecDelta = From - To;
	NormalizeAngle(VecDelta);
	VecDelta.x *= Percent;
	VecDelta.y *= Percent;
	To = From - VecDelta;
}

Vector3 CalculatePerfectTrajectory(Vector3 From, Vector3 To, Vector3 EntityVelocity, float BulletVelocity, float Gravity)
{
	return Vector3::Zero;
}

float GetAngleBetweenVectors3D(Vector3 v1, Vector3 v2)
{
	float numerator = v1.x * v2.x + v1.y * v2.y + v1.z * v2.z;
	float denominator = v1.Length() * v2.Length();
	float angle = acos(numerator / denominator) * (180.f / D3DX_PI);

	if (std::isnan(angle) || std::isinf(angle)) angle = 9999.f;

	return angle;
}

void Clamp(Vector3& VA)
{
	if (std::isnan(VA.x) || std::isnan(VA.y) || std::isnan(VA.z) || std::isinf(VA.x) || std::isinf(VA.y) || std::isinf(VA.z))
		return;
	if (VA.x > 360.f) VA.x -= 360.f;
	else if (VA.x < 0.f) VA.x += 360.f;
	if (VA.y > 89.f) VA.y -= 89.f;
	else if (VA.y < -85.f) VA.y += -85.f;
	VA.z = 0.f;
}

//thanks to yujiaqi for this fix
Vector3 Aimbot::CalculateAngle(Vector3 _Target, Vector3 _LocalPos, Vector3 _Angles)
{
	Vector3 vDirection = _Target - _LocalPos;
	//Log->AddLog("vDirection x=%.8f y=%.8f z=%.8f \n", vDirection.x, vDirection.y, vDirection.z);
	Vector2 vFinal = Vector2(-atan2(vDirection.x, vDirection.z), atan2(vDirection.y, sqrtf(vDirection.x * vDirection.x + vDirection.z * vDirection.z)));

	float Initialx = Game::GetLocalPlayer()->GetSoldier()->GetInitialPosition().x;
	float Initialz = Game::GetLocalPlayer()->GetSoldier()->GetInitialPosition().z;
	float Initialy = Game::GetLocalPlayer()->GetSoldier()->GetInitialPosition().y;

	float Initialanglesx = atan2(Initialz, Initialx);

	while (Initialanglesx < 0) //just make negative (-) to positive (+) atan, because atan is repeating on every 2*pi. Which is equivalent on abs()
	{
		Initialanglesx = 2 * D3DX_PI + Initialanglesx;
	}
	Initialanglesx -= _Angles.x;
	vFinal.x -= Initialanglesx;
	vFinal.y -= Game::GetLocalPlayer()->GetSoldier()->aim->m_authorativeAiming->pitch;
	SmoothAngle(Vector2(_Angles.x, _Angles.y), vFinal, Aimbot::SmoothFactor);

	return vFinal;
}
/*
Vector3 Aimbot::CalculateAngle(Vector3 _Target, Vector3 _LocalPos, Vector3 _Angles)
{
Vector3 vDirection = _Target - _LocalPos;
Vector2 vFinal = Vector2(-atan2(vDirection.x, vDirection.z), atan2(vDirection.y, sqrtf(vDirection.x * vDirection.x + vDirection.z * vDirection.z)));
//static float CorrectPercent = (1 / (200 / std::max(abs(vDirection.x), abs(vDirection.z)))) *0.002;  //correct percentage
//static float CorrectDelta = -atan2(vDirection.x, vDirection.z) * CorrectPercent;
//Vector2 vFinal = Vector2(-atan2(vDirection.x, vDirection.z) + (Features::Radar ? 0 : CorrectDelta), atan2(vDirection.y, sqrtf(vDirection.x * vDirection.x + vDirection.z * vDirection.z)));
//Log->AddLog("x=%.2f z=%.2f atan= %.3f  corrDelta= %.3f  corrPercent= %.3f\n", vDirection.x, vDirection.z, -atan2(vDirection.x, vDirection.z), CorrectDelta, CorrectPercent);

SmoothAngle(Vector2(_Angles.x, _Angles.y), vFinal, Aimbot::SmoothFactor);
return vFinal;
}*/

/*
#define M_RADPI 57.295779513082
Vector3 Aimbot::CalculateAngle(Vector3 _Target, Vector3 _LocalPos, Vector3 _Angles)
{
Vector3 Delta = _LocalPos - _Target;
Vector2 vFinal = Vector2((float)(atan(Delta.z / sqrt(Delta.x * Delta.x + Delta.y * Delta.y)) * M_RADPI), (float)(atan(Delta.y / Delta.x) * M_RADPI) );
if (Delta.x >= 0.0) vFinal.y += 180.0f;

SmoothAngle(Vector2(_Angles.x, _Angles.y), vFinal, Aimbot::SmoothFactor);

return vFinal;
}

Vector3 Aimbot::CalculateAngle(Vector3 _Target, Vector3 _LocalPos, Vector3 _Angles)
{
Vector3 delta = _LocalPos - _Target;
Vector2 vFinal;
double hyp = sqrt(delta.x * delta.x + delta.y * delta.y);
vFinal.x = (float)(asinf(delta.x / hyp) * 57.295779513082f);
vFinal.y = (float)(atanf(delta.y / delta.x) * 57.295779513082f);

if (delta.x >= 0.0)
vFinal.y += 180.0f;

SmoothAngle(Vector2(_Angles.x, _Angles.y), vFinal, Aimbot::SmoothFactor);
return vFinal;
}*/