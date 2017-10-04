#include "stdafx.h"
#include "SSCleaner.h"
#include "DX11.h"

//HOOKED FUNCTIONS
   //BitBlt() is used by PunkBuster/FF to make screenshots. When FF call BitBlt() it will call our hooked hkBitBlt(). Called in SAME thread after DX11Renderer::DX11RenderScene(), so can not use mutex to sync and undraw the ESP and provide clean screenshot, this idea did not worked
BOOL hkBitBlt(HDC destination, int x_destination, int y_destination, int width, int height, HDC source, int x_source, int y_source, DWORD rop)
{
	BOOL BitBltResult=false;
	auto PO = SSCleaner->BitBltHook->GetProtectionObject();
	
	if (ShowLogAlert && SSCleaner->NeedSS) { //if any log shown on screen, do not make screeshot	  
		return false;  //called by us durring log shown on screen. Just skip and dont log anything
	}
	if (ShowLogAlert) { //if any log shown on screen, do not make screeshot	  
		HDCToFile("..\\hkBitBlt_blocked.bmp", source, { x_source, y_source, width, height });
		Log->AddLog("Attempted and blocked screenshot BitBlt %i x %i\n", width, height); //called by FF durring log shown on screen. Inform
		return false;
	}

	if (Features::giveAutoCleanSS && SSCleaner->NeedSS) {  //BitBlt called by us automatically, not by FF, so let it go
		BitBltResult = SSCleaner->oBitBlt(destination, x_destination, y_destination, width, height, source, x_source, y_source, rop);
		//HDCToFile("..\\hkBitBlt_CallByUs.bmp", source, { x_source, y_source, width, height });
		//Log->AddLog("Screenshot BitBlt call by us %i x %i\n", width, height);
		return BitBltResult;
	}
	else if(Features::giveAutoCleanSS && !SSCleaner->NeedSS) {  //BitBlt not called by us => called by FF, so spoof the source HDC
		BitBltResult = SSCleaner->oBitBlt(destination, x_destination, y_destination, width, height, SSCleaner->GetCleanSSMemoryDC(), x_source, y_source, rop);
		HDCToFile("..\\hkBitBlt_spoofed.bmp", SSCleaner->GetCleanSSMemoryDC(), { x_source, y_source, width, height });
		Log->AddLog("Screenshot BitBlt spoofed %i x %i\n", width, height);
		return BitBltResult;
	}
	
	//assume Features::giveAutoCleanSS=false
	if (giveCleanSS) {  //if giveCleanSS On, let FF make clean screenshot
		BitBltResult = SSCleaner->oBitBlt(destination, x_destination, y_destination, width, height, source, x_source, y_source, rop);
		HDCToFile("..\\hkBitBlt_taken.bmp", source, { x_source, y_source, width, height });
		Log->AddLog("Screenshot BitBlt taken %i x %i\n", width, height);
	}
	else {  //assume both features are Off: giveAutoCleanSS and giveCleanSS (may be Features::giveCleanSS on but RMB hold)
		BitBltResult = false;  //do not give screenshot to FF
		HDCToFile("..\\hkBitBlt_blocked.bmp", source, { x_source, y_source, width, height });
		Log->AddLog("Attempted and blocked screenshot BitBlt %i x %i\n", width, height);  //the others x_destination y_destination x_source y_source are =0
	}	

	return BitBltResult; // SSCleaner->oBitBlt(destination, x_destination, y_destination, width, height, source, x_source, y_source, rop);   //the others x_destination y_destination x_source y_source are =0
}

   //CopyResource() is used by FairFight to make screenshots
void hkCopyResource(ID3D11DeviceContext* DeviceContext, ID3D11Resource* DestResource, ID3D11Resource* SrcResource)
{
	auto PO = SSCleaner->CopyResourceHook->GetProtectionObject();
	
	if (DestResource)
	{
		ID3D11Texture2D* texture_2d = static_cast<ID3D11Texture2D*>(DestResource);
		D3D11_TEXTURE2D_DESC desc;
		texture_2d->GetDesc(&desc);
		//if called for SS purposes
		if (desc.Width >= static_cast<unsigned int>(DX11->ScreenSX - 25.0f) && desc.Height >= static_cast<unsigned int>(DX11->ScreenSY - 25.0f) && desc.CPUAccessFlags & D3D11_CPU_ACCESS_READ && desc.Usage == D3D11_USAGE_STAGING)
		{
			if (ShowLogAlert && SSCleaner->NeedSS) { //if any log shown on screen, do not make screeshot	  
				return;  //called by us durring log shown on screen. Just skip and dont log anything
			}
			if (ShowLogAlert) { //if any log shown on screen, do not make screeshot
				HDC dxDC = GetDC(DX11->WTarget /*GetForegroundWindow()*/);
				WriteBMP(extractBitmap(static_cast<ID3D11Texture2D*>(SrcResource)), dxDC, L"..\\hkCopyResource_blocked.bmp");
				ReleaseDC(DX11->WTarget, dxDC);
				Log->AddLog("Attempted and blocked screenshot CopyResource %i x %i\n", desc.Width, desc.Height); //called by FF durring log shown on screen. Inform
				return;
			}

			if (Features::giveAutoCleanSS && SSCleaner->NeedSS) {  //CopyResource called by us automatically, not by FF, so let it go
				//HDC dxDC = GetDC(DX11->WTarget /*GetForegroundWindow()*/);
				//WriteBMP(extractBitmap(static_cast<ID3D11Texture2D*>(SrcResource)), dxDC, L"..\\hkCopyResource_CallByUs.bmp");
				//ReleaseDC(DX11->WTarget, dxDC);
				//Log->AddLog("Screenshot CopyResource call by us %i x %i\n", desc.Width, desc.Height);
				return SSCleaner->oCopyResource(DeviceContext, DestResource, SrcResource);
			}
			else if (Features::giveAutoCleanSS && !SSCleaner->NeedSS) {  //CopyResource not called by us => called by FF, so spoof the source DX texture
				HDC dxDC = GetDC(DX11->WTarget /*GetForegroundWindow()*/);
				WriteBMP(extractBitmap(SSCleaner->GetCleanSSTexture()), dxDC, L"..\\hkCopyResource_spoofed.bmp");
				ReleaseDC(DX11->WTarget, dxDC);
				Log->AddLog("Screenshot CopyResource spoofed %i x %i\n", desc.Width, desc.Height);
				return SSCleaner->oCopyResource(DeviceContext, DestResource, SSCleaner->GetCleanSSTexture());
			}

			//assume Features::giveAutoCleanSS=false
			if (giveCleanSS) {  //if giveCleanSS On, let FF make clean screenshot
				HDC dxDC = GetDC(DX11->WTarget /*GetForegroundWindow()*/);
				WriteBMP(extractBitmap(static_cast<ID3D11Texture2D*>(SrcResource)), dxDC, L"..\\hkCopyResource_taken.bmp");
				ReleaseDC(DX11->WTarget, dxDC);
				Log->AddLog("Screenshot CopyResource taken %i x %i\n", desc.Width, desc.Height);
				return SSCleaner->oCopyResource(DeviceContext, DestResource, SrcResource);
			}
			else {  //assume both features are Off: giveAutoCleanSS and giveCleanSS (may be Features::giveCleanSS on but RMB hold)
				HDC dxDC = GetDC(DX11->WTarget /*GetForegroundWindow()*/);
				WriteBMP(extractBitmap(static_cast<ID3D11Texture2D*>(SrcResource)), dxDC, L"..\\hkCopyResource_blocked.bmp");
				ReleaseDC(DX11->WTarget, dxDC);
				Log->AddLog("Attempted and blocked screenshot CopyResource %i x %i\n", desc.Width, desc.Height); //called by FF durring log shown on screen. Inform
				return;
			}
		}
		//Log->AddLog("CopyResource: %i x %i\n", desc.Width, desc.Height);
	}	
	return SSCleaner->oCopyResource(DeviceContext, DestResource, SrcResource);
}

   //CopySubresourceRegion() is used by (PunkBuster/FairFight) to make screenshots
void hkCopySubresourceRegion(ID3D11DeviceContext* device_context, ID3D11Resource* destination_resource, unsigned int destination_subresource, unsigned int destination_x, unsigned int destination_y, unsigned int destination_z, ID3D11Resource* source_resource, unsigned int source_subresource, const D3D11_BOX* source_box)
{
	auto PO = SSCleaner->CopySubresourceHook->GetProtectionObject();

	if (destination_resource)
	{
		ID3D11Texture2D* texture_2d = static_cast<ID3D11Texture2D*>(destination_resource);
		D3D11_TEXTURE2D_DESC desc;
		texture_2d->GetDesc(&desc);
		//if called for SS purposes
		if (desc.Width >= 17 && desc.Width <= 1000 && desc.Height >= 17 && desc.Height <= 500 && desc.CPUAccessFlags & D3D11_CPU_ACCESS_READ && desc.Usage == D3D11_USAGE_STAGING)
		{
			//Game::CTime Timec = Game::GetHour();			
			/*HDC dxDC = GetDC(DX11->WTarget);
			wchar_t fname[60] = { 0 };
			swprintf(fname, L"..\\hkCopySubresourceRegion_%d.bmp", rand() % 100);
			WriteBMP(extractBitmap(static_cast<ID3D11Texture2D*>(source_resource)), dxDC, fname);  
			ReleaseDC(DX11->WTarget, dxDC);
			Log->AddLog("CopySubresourceRegion called: desc.Width=%d desc.Height=%d\n", desc.Width, desc.Height);
			return SSCleaner->oCopySubresource(device_context, destination_resource, destination_subresource, destination_x, destination_y, destination_z, SSCleaner->GetCleanSSTexture(), source_subresource, source_box);  //spoof the screenshot*/

			if (ShowLogAlert && SSCleaner->NeedSS) { //if any log shown on screen, do not make screeshot	  
				return;  //called by us durring log shown on screen. Just skip and dont log anything
			}
			if (ShowLogAlert) { //if any log shown on screen, do not make screeshot
				HDC dxDC = GetDC(DX11->WTarget /*GetForegroundWindow()*/);
				WriteBMP(extractBitmap(static_cast<ID3D11Texture2D*>(source_resource)), dxDC, L"..\\hkCopySubresourceRegion_blocked.bmp");
				ReleaseDC(DX11->WTarget, dxDC);
				Log->AddLog("Attempted and blocked screenshot CopySubresourceRegion %i x %i\n", desc.Width, desc.Height); //called by FF durring log shown on screen. Inform
				return;
			}

			if (Features::giveAutoCleanSS && SSCleaner->NeedSS) {  //CopySubresourceRegion called by us automatically, not by FF, so let it go
				//HDC dxDC = GetDC(DX11->WTarget /*GetForegroundWindow()*/);
				//WriteBMP(extractBitmap(static_cast<ID3D11Texture2D*>(source_resource)), dxDC, L"..\\hkCopySubresourceRegion_CallByUs.bmp");
				//ReleaseDC(DX11->WTarget, dxDC);
				//Log->AddLog("Screenshot CopySubresourceRegion call by us %i x %i\n", desc.Width, desc.Height);
				return SSCleaner->oCopySubresource(device_context, destination_resource, destination_subresource, destination_x, destination_y, destination_z, source_resource, source_subresource, source_box);
			}
			else if (Features::giveAutoCleanSS && !SSCleaner->NeedSS) {  //CopySubresourceRegion not called by us => called by FF, so spoof the source DX texture
				HDC dxDC = GetDC(DX11->WTarget /*GetForegroundWindow()*/);
				WriteBMP(extractBitmap(SSCleaner->GetCleanSSTexture()), dxDC, L"..\\hkCopySubresourceRegion_spoofed.bmp");
				ReleaseDC(DX11->WTarget, dxDC);
				Log->AddLog("Screenshot CopySubresourceRegion spoofed %i x %i\n", desc.Width, desc.Height);
				return SSCleaner->oCopySubresource(device_context, destination_resource, destination_subresource, destination_x, destination_y, destination_z, SSCleaner->GetCleanSSTexture(), source_subresource, source_box);  //spoof the screenshot
			}

			//assume Features::giveAutoCleanSS=false
			if (giveCleanSS) {  //if giveCleanSS On, let FF make clean screenshot
				HDC dxDC = GetDC(DX11->WTarget /*GetForegroundWindow()*/);
				WriteBMP(extractBitmap(static_cast<ID3D11Texture2D*>(source_resource)), dxDC, L"..\\hkCopySubresourceRegion_taken.bmp");
				ReleaseDC(DX11->WTarget, dxDC);
				Log->AddLog("Screenshot CopySubresourceRegion taken %i x %i\n", desc.Width, desc.Height);
				return SSCleaner->oCopySubresource(device_context, destination_resource, destination_subresource, destination_x, destination_y, destination_z, source_resource, source_subresource, source_box);
			}
			else {  //assume both features are Off: giveAutoCleanSS and giveCleanSS (may be Features::giveCleanSS on but RMB hold)
				HDC dxDC = GetDC(DX11->WTarget /*GetForegroundWindow()*/);
				WriteBMP(extractBitmap(static_cast<ID3D11Texture2D*>(source_resource)), dxDC, L"..\\hkCopySubresourceRegion_blocked.bmp");
				ReleaseDC(DX11->WTarget, dxDC);
				Log->AddLog("Attempted and blocked screenshot CopySubresourceRegion %i x %i\n", desc.Width, desc.Height); //called by FF durring log shown on screen. Inform
				return;
			}
		}
		//Log->AddLog("CopySubresourceRegion: %i x %i\n", desc.Width, desc.Height);
	}	
	return SSCleaner->oCopySubresource(device_context, destination_resource, destination_subresource, destination_x, destination_y, destination_z, source_resource, source_subresource, source_box);
}

//SETTING UP EVERYTHING

bool CSSCleaner::HookBitBlt()
{
	BitBltHook = new PLH::VEHHook();
	BitBltHook->SetupHook((BYTE*)(GetProcAddress(GetModuleHandle(L"gdi32.dll"), "BitBlt")), (BYTE*)hkBitBlt, PLH::VEHHook::VEHMethod::INT3_BP);
	BitBltState = BitBltHook->Hook();
	oBitBlt = BitBltHook->GetOriginal<BitBlt_t>();
	/*if (BitBltState)
		Log->AddLog("BB Hooked at %I64X\n", (QWORD)oBitBlt);*/
	return BitBltState;
}

bool CSSCleaner::HookCopyResource()
{
	QWORD* DeviceContextVT = *(QWORD**)(DX11->DX11DeviceContext);
	CopyResourceHook = new PLH::VEHHook();
	CopyResourceHook->SetupHook((BYTE*)DeviceContextVT[47], (BYTE*)hkCopyResource, PLH::VEHHook::VEHMethod::INT3_BP);
	CopyResourceState = CopyResourceHook->Hook();
	oCopyResource = CopyResourceHook->GetOriginal<CopyResource_t>();
	/*if (CopyResourceState)
		Log->AddLog("CR Hooked at %I64X\n", (QWORD)oCopyResource);*/
	return CopyResourceState;
}

bool CSSCleaner::HookCopySubresourceRegion()
{
	QWORD* DeviceContextVT = *(QWORD**)(DX11->DX11DeviceContext);
	CopySubresourceHook = new PLH::VEHHook();
	CopySubresourceHook->SetupHook((BYTE*)DeviceContextVT[46], (BYTE*)hkCopySubresourceRegion, PLH::VEHHook::VEHMethod::INT3_BP);
	CopySubresourceRegionState = CopySubresourceHook->Hook();
	oCopySubresource = CopySubresourceHook->GetOriginal<CopySubresourceRegion_t>();
	/*if (CopySubresourceRegionState)
		Log->AddLog("CSR Hooked at %I64X\n", (QWORD)oCopySubresource);*/
	return CopySubresourceRegionState;
}

//takes screenshot from Window DC into BMP
void CSSCleaner::TakeSSBitBlt()
{	
	wchar_t wnd_title[256];
	HWND hwnd = GetForegroundWindow(); // get handle of currently active window
	GetWindowText(hwnd, wnd_title, sizeof(wnd_title) / sizeof(wchar_t));
	if (wcscmp(wnd_title, L"Battlefield™ 1"))  //do not make screenshot when game minimized!!! Otherwise will screenshot another window
		return;
	HDC hDC = GetDC(NULL);//whole screen
	SelectObject(CleanSSMemoryDC, hOrigBMP);
	DeleteDC(CleanSSMemoryDC);
	HBITMAP   hBMP = extractBitmap(SSCleaner->GetCleanSSTexture());
	CleanSSMemoryDC = CreateCompatibleDC(hDC);
	hOrigBMP = (HBITMAP)SelectObject(CleanSSMemoryDC, hBMP);
}

//takes screenshot from DX texture into ID3D11Texture2D
void CSSCleaner::TakeSSTexture()
{
	ID3D11Texture2D* ScreenShotBuffer = nullptr;
	D3D11_TEXTURE2D_DESC ScreenShot;
	HRESULT hr = DX11->DX11SwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), reinterpret_cast<void**>(&ScreenShotBuffer));
	memset(&ScreenShot, 0, sizeof(D3D11_TEXTURE2D_DESC));

	ScreenShotBuffer->GetDesc(&ScreenShot);
	if (CleanSStexture != nullptr) {
		CleanSStexture->Release();  //always before CreateTexture2D free old mem
		CleanSStexture = nullptr;
	}
	DX11->DX11Device->CreateTexture2D(&ScreenShot, NULL, &CleanSStexture);
	DX11->DX11DeviceContext->CopyResource(CleanSStexture, ScreenShotBuffer);	

	ScreenShotBuffer->Release();
	ScreenShotBuffer = nullptr;
	//HDC dxDC = GetDC(DX11->WTarget /*GetForegroundWindow()*/);
	//WriteBMP(extractBitmap(SSCleaner->GetCleanSSTexture()), dxDC, L"..\\hkTakeSSTexture_CallByUs.bmp");
	//ReleaseDC(DX11->WTarget, dxDC);
	//Log->AddLog("TakeSSTexture CopyResource call by us %i x %i\n", ScreenShot.Width, ScreenShot.Height);
}

void CSSCleaner::TakeSS()  //takes clean screenshot on every 30sec and store it in CleanSS. For purpose of hkCopyResource() and hkCopySubresourceRegion() to poke a clean screenshot
{
	if (CurrentSSTick - LastSSTick > Features::AutoCleanSSTimer * 1000)  //on every X seconds NeedSS=true and will take screenshot
	{
		NeedSS = true;
		LastSSTick = CurrentSSTick;
		return;
	}

	if (NeedSS)
	{	
		if (!ShowLogAlert) { //if not log shown on screen, make screeshot	
			TakeSSTexture();
			TakeSSBitBlt();  //take screenshot for BitBlt memDC
		}
		NeedSS = false;  //make it false after called TakeSSBitBlt(), not before!
	}

	CurrentSSTick = GetTickCount();
}

//write HDC to a .bmp file
bool HDCToFile(const char* FilePath, HDC Context, RECT Area, uint16_t BitsPerPixel)
{
	uint32_t Width = Area.right - Area.left;
	uint32_t Height = Area.bottom - Area.top;
	BITMAPINFO Info;
	BITMAPFILEHEADER Header;
	memset(&Info, 0, sizeof(Info));
	memset(&Header, 0, sizeof(Header));
	Info.bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
	Info.bmiHeader.biWidth = Width;
	Info.bmiHeader.biHeight = Height;
	Info.bmiHeader.biPlanes = 1;
	Info.bmiHeader.biBitCount = BitsPerPixel;
	Info.bmiHeader.biCompression = BI_RGB;
	Info.bmiHeader.biSizeImage = Width * Height * (BitsPerPixel > 24 ? 4 : 3);
	Header.bfType = 0x4D42;
	Header.bfOffBits = sizeof(BITMAPFILEHEADER) + sizeof(BITMAPINFOHEADER);
	char* Pixels = NULL;
	HDC MemDC = CreateCompatibleDC(Context);
	HBITMAP Section = CreateDIBSection(Context, &Info, DIB_RGB_COLORS, (void**)&Pixels, 0, 0);
	DeleteObject(SelectObject(MemDC, Section));
	BOOL ReturnValue;
	ReturnValue = BitBlt(MemDC, 0, 0, Width, Height, Context, Area.left, Area.top, SRCCOPY);
	if (ReturnValue == TRUE)
	{
		//cout << "Snapshot Successful\n";
	}
	if (ReturnValue == FALSE)
	{
		//cout << "Snapshot FAILED!!!\n";
		DWORD LastError;
		LastError = GetLastError();
		//cout << "Last Error Was : " << LastError << "\n";
	}
	DeleteDC(MemDC);
	std::fstream hFile(FilePath, std::ios::out | std::ios::binary);
	if (hFile.is_open())
	{
		hFile.write((char*)&Header, sizeof(Header));
		hFile.write((char*)&Info.bmiHeader, sizeof(Info.bmiHeader));
		hFile.write(Pixels, (((BitsPerPixel * Width + 31) & ~31) / 8) * Height);
		hFile.close();
		DeleteObject(Section);
		return true;
	}
	DeleteObject(Section);
	return false;
}

//convert DX texture to HBITMAP
HBITMAP extractBitmap(void* texture) {
	HBITMAP	hBitmapTexture = NULL;
	HGDIOBJ hBitmap;

	ID3D11Texture2D* d3dtex = (ID3D11Texture2D*)texture;
	D3D11_TEXTURE2D_DESC desc;
	d3dtex->GetDesc(&desc);

	ID3D11Texture2D* pNewTexture = NULL;
	D3D11_TEXTURE2D_DESC description;
	d3dtex->GetDesc(&description);

	description.BindFlags = 0;

	description.CPUAccessFlags = D3D11_CPU_ACCESS_READ | D3D11_CPU_ACCESS_WRITE;
	description.Usage = D3D11_USAGE_STAGING;
	HRESULT hr = DX11->DX11Device->CreateTexture2D(&description, NULL, &pNewTexture);

	ID3D11DeviceContext* ctx = NULL;
	DX11->DX11Device->GetImmediateContext(&ctx);

	ctx->CopyResource(pNewTexture, d3dtex);

	D3D11_MAPPED_SUBRESOURCE resource;
	UINT subresource = D3D11CalcSubresource(0, 0, 0);
	ctx->Map(pNewTexture, subresource, D3D11_MAP_READ_WRITE, 0, &resource);

	// COPY from texture to bitmap buffer
	uint8_t* sptr = reinterpret_cast<uint8_t*>(resource.pData);
	uint8_t* dptr = new uint8_t[desc.Width*desc.Height * 4];

	for (size_t h = 0; h < desc.Height; ++h)
	{
		size_t msize = std::min<size_t>(desc.Width * 4, resource.RowPitch);
		memcpy_s(dptr, desc.Width * 4, sptr, msize);
		sptr += resource.RowPitch;
		dptr += desc.Width * 4;
	}

	dptr -= desc.Width*desc.Height * 4;

	// SWAP BGR to RGB bitmap
	uint32_t *dPtr = reinterpret_cast<uint32_t*>(dptr);
	for (size_t count = 0; count < desc.Width*desc.Height * 4; count += 4) {
		uint32_t t = *(dPtr);                 uint32_t t1 = (t & 0x00ff0000) >> 16;
		uint32_t t2 = (t & 0x000000ff) << 16;
		uint32_t t3 = (t & 0x0000ff00);
		uint32_t ta = (t & 0xFF000000);

		*(dPtr++) = t1 | t2 | t3 | ta;
	}

	hBitmapTexture = CreateCompatibleBitmap(GetDC(NULL), desc.Width, desc.Height);
	SetBitmapBits(hBitmapTexture, desc.Width*desc.Height * 4, dptr);

	//hBitmap = CopyImage(hBitmapTexture, IMAGE_BITMAP, desc.Width, desc.Height, LR_CREATEDIBSECTION);
	return hBitmapTexture;
}

//write HBITMAP to a .bmp file
void WriteBMP(HBITMAP bitmap, HDC hDC, /*LPTSTR*/LPCWSTR filename)
{
	BITMAP bmp;
	PBITMAPINFO pbmi;
	WORD cClrBits;
	HANDLE hf; // file handle 
	BITMAPFILEHEADER hdr; // bitmap file-header 
	PBITMAPINFOHEADER pbih; // bitmap info-header 
	LPBYTE lpBits; // memory pointer 
	DWORD dwTotal; // total count of bytes 
	DWORD cb; // incremental count of bytes 
	BYTE *hp; // byte pointer 
	DWORD dwTmp;

	// create the bitmapinfo header information

	if (!GetObject(bitmap, sizeof(BITMAP), (LPSTR)&bmp))
	{
		//AfxMessageBox(L"Could not retrieve bitmap info");
		return;
	}

	// Convert the color format to a count of bits. 
	cClrBits = (WORD)(bmp.bmPlanes * bmp.bmBitsPixel);
	if (cClrBits == 1)
		cClrBits = 1;
	else if (cClrBits <= 4)
		cClrBits = 4;
	else if (cClrBits <= 8)
		cClrBits = 8;
	else if (cClrBits <= 16)
		cClrBits = 16;
	else if (cClrBits <= 24)
		cClrBits = 24;
	else cClrBits = 32;
	// Allocate memory for the BITMAPINFO structure.
	if (cClrBits != 24)
		pbmi = (PBITMAPINFO)LocalAlloc(LPTR,
			sizeof(BITMAPINFOHEADER) + sizeof(RGBQUAD) * (1 << cClrBits));
	else
		pbmi = (PBITMAPINFO)LocalAlloc(LPTR, sizeof(BITMAPINFOHEADER));

	// Initialize the fields in the BITMAPINFO structure. 

	pbmi->bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
	pbmi->bmiHeader.biWidth = bmp.bmWidth;
	pbmi->bmiHeader.biHeight = bmp.bmHeight;
	pbmi->bmiHeader.biPlanes = bmp.bmPlanes;
	pbmi->bmiHeader.biBitCount = bmp.bmBitsPixel;
	if (cClrBits < 24)
		pbmi->bmiHeader.biClrUsed = (1 << cClrBits);

	// If the bitmap is not compressed, set the BI_RGB flag. 
	pbmi->bmiHeader.biCompression = BI_RGB;

	// Compute the number of bytes in the array of color 
	// indices and store the result in biSizeImage. 
	pbmi->bmiHeader.biSizeImage = (pbmi->bmiHeader.biWidth + 7) / 8 * pbmi->bmiHeader.biHeight * cClrBits;
	// Set biClrImportant to 0, indicating that all of the 
	// device colors are important. 
	pbmi->bmiHeader.biClrImportant = 0;

	// now open file and save the data
	pbih = (PBITMAPINFOHEADER)pbmi;
	lpBits = (LPBYTE)GlobalAlloc(GMEM_FIXED, pbih->biSizeImage);

	if (!lpBits) {
		//AfxMessageBox(L"writeBMP::Could not allocate memory");
		return;
	}

	// Retrieve the color table (RGBQUAD array) and the bits 
	if (!GetDIBits(hDC, HBITMAP(bitmap), 0, (WORD)pbih->biHeight, lpBits, pbmi,
		DIB_RGB_COLORS)) {
		//AfxMessageBox(L"writeBMP::GetDIB error");
		return;
	}

	// Create the .BMP file. 
	hf = CreateFile(filename, GENERIC_READ | GENERIC_WRITE, (DWORD)0,
		NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL,
		(HANDLE)NULL);
	if (hf == INVALID_HANDLE_VALUE) {
		//AfxMessageBox(L"Could not create file for writing");
		return;
	}
	hdr.bfType = 0x4d42; // 0x42 = "B" 0x4d = "M" 
						 // Compute the size of the entire file. 
	hdr.bfSize = (DWORD)(sizeof(BITMAPFILEHEADER) +
		pbih->biSize + pbih->biClrUsed
		* sizeof(RGBQUAD) + pbih->biSizeImage);
	hdr.bfReserved1 = 0;
	hdr.bfReserved2 = 0;

	// Compute the offset to the array of color indices. 
	hdr.bfOffBits = (DWORD) sizeof(BITMAPFILEHEADER) +
		pbih->biSize + pbih->biClrUsed
		* sizeof(RGBQUAD);

	// Copy the BITMAPFILEHEADER into the .BMP file. 
	if (!WriteFile(hf, (LPVOID)&hdr, sizeof(BITMAPFILEHEADER),
		(LPDWORD)&dwTmp, NULL)) {
		//AfxMessageBox(L"Could not write in to file");
		return;
	}

	// Copy the BITMAPINFOHEADER and RGBQUAD array into the file. 
	if (!WriteFile(hf, (LPVOID)pbih, sizeof(BITMAPINFOHEADER)
		+ pbih->biClrUsed * sizeof(RGBQUAD),
		(LPDWORD)&dwTmp, (NULL))) {
		//AfxMessageBox(L"Could not write in to file");
		return;
	}


	// Copy the array of color indices into the .BMP file. 
	dwTotal = cb = pbih->biSizeImage;
	hp = lpBits;
	if (!WriteFile(hf, (LPSTR)hp, (int)cb, (LPDWORD)&dwTmp, NULL)) {
		//AfxMessageBox(L"Could not write in to file");
		return;
	}

	// Close the .BMP file. 
	if (!CloseHandle(hf)) {
		//AfxMessageBox(L"Could not close file");
		return;
	}

	// Free memory. 
	GlobalFree((HGLOBAL)lpBits);
}

std::unique_ptr<CSSCleaner> SSCleaner;
