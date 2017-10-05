#include "stdafx.h"
#include "imgui.h"
#include "Game.h"
#include "SSCleaner.h"
#include "DX11.h"

BOOLEAN Game::ThreadState[3] = { TRUE };
bool Game::cursorOn = false;

int key_StartHack = VK_END;
int key_ShowMenu = VK_DELETE;
int key_Quit = VK_F8;
int key_Save = VK_F12;
int key_ShowName = VK_MULTIPLY;
int key_Aimbot = VK_ADD;
int key_Radar = VK_INSERT;
int key_RadarWide = VK_HOME;
int key_NoSway = VK_SUBTRACT;
int key_giveCleanSS = VK_SCROLL;
int key_MedicBugfix = VK_DIVIDE;
int key_ESP = VK_F1;
int key_HEAD = VK_NUMPAD8;
int key_NECK = VK_NUMPAD5;
int key_HIP = VK_NUMPAD2;
int key_TestSSBitBlt = VK_F5;
int key_TestSSCopyResource = VK_F6;
int key_Aim1 = VK_RBUTTON;
int key_Aim2 = 0xA4;

bool Features::ESP = true;
bool Features::Aimbot = true;
bool Features::ShowMenu = true;
bool Features::ESPShowFriends = false;
bool Features::ShowBones = true;
bool Features::ShowVehicles = true;
bool Features::NoSway = true;
int  Features::NoSwayRandomize = 2;
bool Features::InstantHit = false;
bool Features::Crosshair = true;
int  Features::Radar = 1;
int  Features::RadarDistance = 250;
int  Features::RadarSize = 250;
int  Features::RadarPosX = 1275;
int  Features::RadarPosY = 130;
bool Features::SpectWarn = true;
bool Features::ShowFOV = false;
bool Features::ShowHealth = true;
bool Features::ShowName = false;
bool Features::ShowDistance = false;
bool Features::ShowESPBoxes = false;
float Features::ESPDistance = 300.f; //999.f
bool Features::giveAutoCleanSS = true;
float Features::AutoCleanSSTimer = 15.0;
bool Features::giveCleanSS = false;
bool Features::giveCleanSSwithRMB = true;
bool Features::MedicBugfix = false;

std::map<QWORD, SwayDataSaved> SwayData;
std::map<QWORD, BulletDataSaved> BulletData;
//std::map<CSoldier*, bool> VisibleEntities;
Vector3 posos;

void MainThread()
{
	while (true)
	{
		if (GetAsyncKeyState(key_ShowMenu))  //VK_DELETE  VK_NUMPAD0
		{
			Features::ShowMenu = !Features::ShowMenu;
			Sleep(200);
		}
		if (GetAsyncKeyState(key_Quit))    //VK_F8
			break;
		if (GetAsyncKeyState(key_Save)) {   //VK_F12
			MarkSettingsDirty();  //save settings
			Log->AddLog("Settings Saved...\n");
			Sleep(200);
		}
		if (GetAsyncKeyState(key_ShowName)) { //VK_MULTIPLY  Key NUMPAD* 
			Features::ShowName = !Features::ShowName;
			Sleep(200);
		}
		if (GetAsyncKeyState(key_Aimbot)) { //VK_ADD  Key +
			Features::Aimbot = !Features::Aimbot;
			Sleep(200);
		}
		if (GetAsyncKeyState(key_Radar)) { //VK_INSERT  Key INSERT
			Features::Radar = Features::Radar ? 0 : 1;
			Sleep(200);
		}
		if (GetAsyncKeyState(key_RadarWide)) { //VK_HOME  Key HOME
			Features::Radar = Features::Radar ? 0 : 2;
			Sleep(200);
		}
		if (GetAsyncKeyState(key_NoSway)) { //VK_SUBTRACT  Key -
			Features::NoSway = !Features::NoSway;
			Sleep(200);
		}
		if (GetAsyncKeyState(key_giveCleanSS)) { //VK_SCROLL  Key Scroll Lock key
			Features::giveCleanSS = !Features::giveCleanSS;
			giveCleanSS = Features::giveCleanSS;
			Features::giveAutoCleanSS = false;  //when giveCleanSS On firmly disable the other feature giveAutoCleanSS. Dont want both features to interfere
			Sleep(200);
		}
		if (GetAsyncKeyState(key_MedicBugfix)) { //VK_DIVIDE  Key / for medic bugfix
			Features::MedicBugfix = !Features::MedicBugfix;
			Sleep(200);
		}
		if (GetAsyncKeyState(key_ESP)) { //VK_F1  Key F1 for ESP
			Features::ESP = !Features::ESP;
			Sleep(200);
		}
		if (GetAsyncKeyState(key_HEAD)) { //VK_NUMPAD8  Key NUMPAD8 HEAD			
			Aimbot::Bone = eBones::HEAD;
			Sleep(200);
		}
		if (GetAsyncKeyState(key_NECK)) { //VK_NUMPAD5  Key NUMPAD5 NECK			
			Aimbot::Bone = eBones::NECK;
			Sleep(200);
		}
		if (GetAsyncKeyState(key_HIP)) { //VK_NUMPAD2   Key NUMPAD2 HIP			
			Aimbot::Bone = eBones::HIP;
			Sleep(200);
		}
		if (GetAsyncKeyState(key_TestSSBitBlt)) { //VK_F5  Key F5 TEST SCREENSHOT BitBlt	
			wchar_t wnd_title[256];
			HWND win = GetForegroundWindow(); //FindWindowEx(NULL,NULL,L"Battlefield™ 1",NULL); //GetDesktopWindow();
			GetWindowText(win, wnd_title, sizeof(wnd_title) / sizeof(wchar_t));
			if (wcscmp(wnd_title, L"Battlefield™ 1")) //do not make screenshot when game minimized!!!					
				return;
			HDC dc = GetDC(NULL/*win*/);
			HDCToFile("..\\hkBitBlt_provided.bmp", dc, { 0, 0, static_cast<int> (DX11Renderer::ScreenSX), static_cast<int> (DX11Renderer::ScreenSY) });
			ReleaseDC(win, dc);
			Sleep(200);   //IMPORTANT! Sleep! Otherwise button will repeat 10 times
		}
		if (GetAsyncKeyState(key_TestSSCopyResource)) { //VK_F6 Key F6 TEST SCREENSHOT CopyResource
			DX11_mutex.lock();
			ID3D11Texture2D* ScreenShotProvided = nullptr;
			ID3D11Texture2D* ScreenShotBuffer = nullptr;
			D3D11_TEXTURE2D_DESC ScreenShot;
			HRESULT hr = DX11->DX11SwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), reinterpret_cast<void**>(&ScreenShotBuffer));
			memset(&ScreenShot, 0, sizeof(D3D11_TEXTURE2D_DESC));
			ScreenShotBuffer->GetDesc(&ScreenShot);
			DX11->DX11Device->CreateTexture2D(&ScreenShot, NULL, &ScreenShotProvided);
			DX11->DX11DeviceContext->CopyResource(ScreenShotProvided, ScreenShotBuffer);

			ScreenShotBuffer->Release();
			ScreenShotBuffer = nullptr;

			HDC dxDC = GetDC(DX11->WTarget /*GetForegroundWindow()*/);
			WriteBMP(extractBitmap(ScreenShotProvided), dxDC, L"..\\hkCopyResource_provided.bmp");  //extractBitmap will call the CopyResource

			ScreenShotProvided->Release();
			ReleaseDC(DX11->WTarget, dxDC);
			DX11_mutex.unlock();
			Sleep(200);  //IMPORTANT! Sleep! Otherwise button will repeat 10 times
		}
		/*if (GetAsyncKeyState(VK_NUMPAD1)) { //Key NUMPAD1 TEST LOG
		Log->AddLog("test\n");
		Sleep(200);
		}*/
		Sleep(60);
	}
	Game::ThreadState[1] = FALSE;
}