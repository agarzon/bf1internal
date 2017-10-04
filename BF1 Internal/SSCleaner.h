#pragma once
#include "stdafx.h"

using BitBlt_t = BOOL(__stdcall*)(HDC, int, int, int, int, HDC, int, int, DWORD);
using CopyResource_t = void(__stdcall*)(ID3D11DeviceContext*, ID3D11Resource*, ID3D11Resource*);
using CopySubresourceRegion_t = void(__stdcall*)(ID3D11DeviceContext*, ID3D11Resource*, unsigned int, unsigned int, unsigned int, unsigned int, ID3D11Resource*, unsigned int, const D3D11_BOX*);
bool HDCToFile(const char* FilePath, HDC Context, RECT Area, uint16_t BitsPerPixel = 24);
HBITMAP extractBitmap(void* texture);
void WriteBMP(HBITMAP bitmap, HDC hDC, /*LPTSTR*/LPCWSTR filename);
void hkCopyResource(ID3D11DeviceContext* DeviceContext, ID3D11Resource* DestResource, ID3D11Resource* SrcResource);

class CSSCleaner
{
public:

	//HOOKS
	PLH::VEHHook* BitBltHook;
	PLH::VEHHook* CopyResourceHook;
	PLH::VEHHook* CopySubresourceHook;
	BitBlt_t oBitBlt;    //the original addres of BitBlt()
	CopyResource_t oCopyResource;   //the original addres of CopyResource()
	CopySubresourceRegion_t oCopySubresource;    //the original addres of CopySubresourceRegion()

	//DATA
	INT LastSSTick;
	INT CurrentSSTick;
	ID3D11Texture2D* CleanSStexture = nullptr;  //this keep DX texture screenshot. Filled by TakeSSTexture()
	HDC CleanSSMemoryDC;  //this keep BitBlt screenshot in memory HDC. Filled by TakeSSBitBlt()

	bool BitBltState = false;
	bool CopyResourceState = false;
	bool CopySubresourceRegionState = false;
	bool NeedSS = false;
	HBITMAP hOrigBMP;

	//FUNCTIONS
	bool HookBitBlt();   //BitBlt() is used by PunkBuster to make screenshots
	bool HookCopyResource();  //CopyResource() is used by FairFight to make screenshots
	bool HookCopySubresourceRegion(); //CopySubresourceRegion() is used by (PunkBuster/FairFight) to make screenshots
	void TakeSS();
	void TakeSSBitBlt();  //takes screenshot from Window DC into BMP
	void TakeSSTexture();  ////takes screenshot from DX texture into ID3D11Texture2D
	ID3D11Texture2D* GetCleanSSTexture() { return CleanSStexture; }
	void DeleteCleanSSTexture() { CleanSStexture->Release(); CleanSStexture = nullptr; }
	HDC GetCleanSSMemoryDC() { return CleanSSMemoryDC; }
};

extern std::unique_ptr<CSSCleaner> SSCleaner;
extern bool ShowLogAlert;
extern bool giveCleanSS;
extern std::mutex DX11_mutex;
