#pragma once
#include "stdafx.h"
#include "DX11.h"

#define ORIGIN 0
#define TOP 1
#define UP 2
#define CENTER 3
#define DOWN 4
#define BOTTOM 5

extern int key_StartHack;
extern int key_ShowMenu;
extern int key_Quit;
extern int key_Save;
extern int key_ShowName;
extern int key_Aimbot;
extern int key_Radar;
extern int key_RadarWide;
extern int key_NoSway;
extern int key_giveCleanSS;
extern int key_MedicBugfix;
extern int key_ESP;
extern int key_HEAD;
extern int key_NECK;
extern int key_HIP;
extern int key_TestSSBitBlt;
extern int key_TestSSCopyResource;
extern int key_Aim1;
extern int key_Aim2;

void MainThread();

////fix 05.09.2017////////////////////////
class ClassInfoData;
class FieldInfoCotainer;
enum GamePlatform
{
	GamePlatform_Ps3 = 0,
	GamePlatform_Win32 = 1,
	GamePlatform_Xenon = 2,
	GamePlatform_Gen4a = 3,
	GamePlatform_Gen4b = 4,
	GamePlatform_Android = 5,
	GamePlatform_iOS = 6,
	GamePlatform_OSX = 7,
	GamePlatform_Linux = 8,
	GamePlatform_Any = 9,
	GamePlatform_Invalid = 10,
	GamePlatformCount = 11,
};
class MemberInfo
{
public:
	ClassInfoData* m_Data; //0x0000 

	MemberInfo* GetMemberData() { return (MemberInfo*)m_Data; }
};//Size=0x0008
class MemberInfoData
{
public:
	char* m_Name; //0x0000 
	__int16 m_Flags; //0x0008 

};//Size=0x000A
class ModuleInfo
{
public:
	char* m_Name; //0x0000 
	ModuleInfo* m_Next; //0x0008 

};//Size=0x0010
class TypeInfoData : public MemberInfoData
{
public:
	__int32 m_TotalSize; //0x000A 
	char _0x000E[0x0002];
	ModuleInfo* m_ModuleInfo; //0x0010 

};//Size=0x0018
class TypeInfo : public MemberInfo
{
public:
	TypeInfo* m_Next; //0x0008 
	WORD m_RuntimeID; //0x0010 
	WORD m_Flags; //0x0012 
	char _0x0014[0x0004];

	TypeInfoData* GetTypeData() { return (TypeInfoData*)m_Data; }
};//Size=0x0018
class DataContainer
{
public:
	char _0x0000[0x0010];

};//Size=0x0010
class SystemSettings : public DataContainer
{
public:
	char* m_Name; //0x0010 
	GamePlatform m_Platform; //0x0018 
	char _0x001C[0x0004];

};//Size=0x0020
class SyncedBFSettings : public SystemSettings
{
public:
	float m_RoundTimeLimit; //0x0020 
	char _0x0024[0x0004];
	char* m_JesusModeForPlayerTag; //0x0028 
	char* m_JesusModeForPlayers; //0x0030 
	__int32 m_Team1Faction; //0x0038 
	__int32 m_Team2Faction; //0x003C 
	__int32 m_Team3Faction; //0x0040 
	__int32 m_Team4Faction; //0x0044 
	DWORD m_CommanderSize; //0x0048 
	char _0x004C[0x0004];
	char* m_FieldSpecLevels; //0x0050 
	char _0x0058[0x0008];//ServerTypeValues m_ServerType; //0x0058 
	float m_HighLatency; //0x005C 
	float m_CriticalLatency; //0x0060 
	float m_HighLatencyVariation; //0x0064 
	float m_CriticalLatencyVariation; //0x0068 
	float m_HighPacketLossRatio; //0x006C 
	float m_CriticalPacketLossRatio; //0x0070 
	float m_LowMonitorRefresh; //0x0074 
	float m_LowClientFps; //0x0078 
	float m_BadExperienceIconsHoldTime; //0x007C 
	float m_ServerFpsLowThresholdPerc; //0x0080 
	float m_ServerFpsLowThresholdCritPerc; //0x0084 
	__int32 m_WeatherSequencerState; //0x0088 
	unsigned char m_AllUnlocksUnlocked; //0x008C 
	unsigned char m_EnableMinimap; //0x008D 
	unsigned char m_NoHud; //0x008E 
	unsigned char m_EnableMinimapSpotting; //0x008F 
	unsigned char m_Enable3dSpotting; //0x0090 
	unsigned char m_EnableNameTag; //0x0091 
	unsigned char m_EnableLandVehicles; //0x0092 
	unsigned char m_EnableAirVehicles; //0x0093 
	unsigned char m_EnableHorses; //0x0094 
	unsigned char m_EnableMeleeWeapons; //0x0095 
	unsigned char m_EnableShotguns; //0x0096 
	unsigned char m_EnableHandguns; //0x0097 
	unsigned char m_EnableExplosives; //0x0098 
	unsigned char m_EnableLightMachineGun; //0x0099 
	unsigned char m_EnableSubMachineGun; //0x009A 
	unsigned char m_EnableSemiAutoRifle; //0x009B 
	unsigned char m_EnableSingleActionRifle; //0x009C 
	unsigned char m_EnableWeaponsForAll; //0x009D 
	unsigned char m_OnlySquadLeaderSpawn; //0x009E 
	unsigned char m_DisableCombatSquadSpawn; //0x009F 
	unsigned char m_TeamSwitchingAllowed; //0x00A0 
	unsigned char m_RevertBackToBF3KillerCamera; //0x00A1 
	unsigned char m_DisableHitIndicators; //0x00A2 
	unsigned char m_DisableVehicleCommanderActions; //0x00A3 
	unsigned char m_IsCompetitive; //0x00A4 
	unsigned char m_LowRankOnly; //0x00A5 
	unsigned char m_CommanderEnabled; //0x00A6 
	unsigned char m_FieldUpgradeSystemActive; //0x00A7 
	unsigned char m_IsRanked; //0x00A8 
	unsigned char m_Kit1Enabled; //0x00A9 
	unsigned char m_Kit2Enabled; //0x00AA 
	unsigned char m_Kit3Enabled; //0x00AB 
	unsigned char m_Kit4Enabled; //0x00AC 
	unsigned char m_Kit5Enabled; //0x00AD 
	unsigned char m_Kit6Enabled; //0x00AE 
	unsigned char m_Kit7Enabled; //0x00AF 
	unsigned char m_Kit8Enabled; //0x00B0 
	unsigned char m_Kit9Enabled; //0x00B1 
	unsigned char m_EnableServerFpsTracking; //0x00B2 
	unsigned char m_MeleeOnMovingPlatformEnabled; //0x00B3 
	char _0x00B4[0x0004];

};//Size=0x00B8
class ClassInfo : public TypeInfo
{
public:
	ClassInfo* m_Super; //0x0018 
	SyncedBFSettings* m_SyncedBFSettings; //0x0020 
	WORD m_ID; //0x0028 
	WORD m_LastSubClassID; //0x002A 
	char _0x002C[0x0004];
	ClassInfo* m_FirstDerivedClass; //0x0030 
	ClassInfo* m_NextSiblingClass; //0x0038 
	FieldInfoCotainer* m_Fields; //0x0040  incl inherited classes 
	__int32 m_TotalFieldCount; //0x0048 
	char _0x004C[0x0005];

	ClassInfoData* GetClassData() { return (ClassInfoData*)m_Data; }
};//Size=0x0051
class FieldInfoData : public MemberInfoData
{
public:
	__int32 m_FieldOffset; //0x000A 
	char _0x000E[0x0002];
	TypeInfo* m_FieldTypeInfo; //0x0010 

};//Size=0x0018
class FieldInfoDataContainer
{
public:
	FieldInfoData m_Array[0x003E]; //0x0000 

};//Size=0x05D0
class ClassInfoData : public TypeInfoData
{
public:
	char _0x0018[0x0002];
	unsigned char m_FieldCount; //0x001A 
	char _0x001B[0x0005];
	ClassInfo* m_Super; //0x0020 
	char _0x0028[0x0008];
	FieldInfoDataContainer* m_Fields; //0x0030 not incl inherited classes

};//Size=0x0038
class FieldInfo
{
public:
	virtual TypeInfo* GetDeclaringType(); //
	virtual unsigned int GetFieldIndex(); //

	FieldInfoData* m_Data; //0x0008 
	TypeInfo* m_DeclaringType; //0x0010 
	__int32 m_FieldIndex; //0x0018 
	__int32 m_AttributeMask; //0x001C 

	FieldInfoData* GetFieldData() { return (FieldInfoData*)m_Data; }
};//Size=0x0020
class FieldInfoCotainer
{
public:
	FieldInfo* m_Array[0x0040]; //0x0000 

};//Size=0x0200
class Dx11RenderTargetView
{
public:
	virtual TypeInfo* getType();
	virtual void Function1(); //
	virtual void Function2(); //
	virtual char* getDebugName(); //
	virtual void Function4(); //
	virtual unsigned int getWidth();
	virtual unsigned int getHeight();
	virtual void Function7(); //
	virtual void Function8(); // maby getColorFormat
	virtual void Function9(); // maby getDepthFormat
	virtual void Function10(); //
	virtual void Function11(); //
	virtual unsigned int getRenderTargetCount();
	virtual bool hasDepthTarget();
	virtual void Function14(); //

	char _0x0008[108];
	__int32 m_height; //0x0074 
	__int32 m_width; //0x0078 
	char _0x007C[4];
	unsigned int m_targetCount; //0x0080 
	char _0x0084[76];
	ID3D11RenderTargetView* m_renderTargetViews[0x8]; //0x00D0
	ID3D11DepthStencilView* m_depthStencilView; //0x0110 
};
class Screen
{
public:
	//char _0x02B8[0x02B8];  //maybe not accurate
	Dx11RenderTargetView* m_pDefaultRenderView; //0x02B8
};
////end fix 05.09.2017////////////////////////////////
/////for Dx11Renderer *pDxRenderer (not needed)///////
class ScreenInfo
{
public:
	__int32 m_width; //0x0000 
	__int32 m_height; //0x0004 
	__int32 m_winWidth; //0x0008 
	__int32 m_winHeigh; //0x000C 
	float m_fullscreenRefreshRate; //0x0010 

};//Size=0x0014
class DX11Screen
{
public:
	char _0x0000[0x0008];
	void* m_windowHandle; //0x0008 
	char _0x0010[0x004C];
	unsigned char m_isTopWindow; //0x005C 
	unsigned char m_isMinimized; //0x005D 
	unsigned char m_isMaximized; //0x005E 
	unsigned char m_isResizing; //0x005F 
	char _0x0060[0x0008];
	ScreenInfo m_screenInfo; //0x0068 

};//Size=0x007C
class Dx11Renderer
{
public:
	char _0x0000[0x07E0];
	__int32 m_frameCounter; //0x07E0 
	__int32 m_framesInProgress; //0x07E4 
	__int32 m_framesInProgress2; //0x07E8 
	unsigned char m_isActive; //0x07EC 
	char _0x07ED[0x0003];
	DX11Screen* m_pScreen; //0x07F0 

	static Dx11Renderer* GetInstance()
	{
		return *(Dx11Renderer**)(OFFSET_DXRENDERER);
	}
};//Size=0x07F8
  /////end for Dx11Renderer *pDxRenderer/////////////////////

class CSoldier;

class Features
{
public:
	static bool ESP;
	static bool Aimbot;
	static bool ShowMenu;
	static bool ESPShowFriends;
	static bool ShowBones;
	static bool ShowVehicles;
	static bool NoSway;
	static int  NoSwayRandomize;
	static bool InstantHit;
	static bool Crosshair;
	static int Radar;
	static int RadarDistance;
	static int RadarSize;
	static int RadarPosX;
	static int RadarPosY;
	static bool SpectWarn;
	static bool ShowFOV;
	static bool ShowHealth;
	static bool ShowName;
	static bool ShowDistance;
	static bool ShowESPBoxes;
	static float ESPDistance;
	static bool giveAutoCleanSS;
	static float AutoCleanSSTimer;
	static bool giveCleanSS;
	static bool giveCleanSSwithRMB;
	static bool MedicBugfix;
	static Color ColorEnemyHidden;
	static Color ColorEnemyVisible;
	static Color ColorFriend;
	static Color ColorName;
	static Color ColorEnemyVehicle;
	static Color ColorFriendVehicle;
	static Color ColorCrosshair;
	static Color ColorFOV;
};

enum eBones
{
	HEAD = 62, //
	HIP = 249, //
	STOMACH = 142, //
	CHEST = 146, //
	NECK = 50, //
	RIGHT_FEMUR = 299, // 
	RIGHT_KNEE = 295, //
	RIGHT_SHINBONE = 290, //
	RIGHT_MALLEOLUS = 290,
	RIGHT_TIPTOE = 291, // 
	RIGHT_SHOULDER = 164, //
	RIGHT_BICEPS = 165, //
	RIGHT_ELBOW = 169, //
	RIGHT_ULNA = 170, //
	RIGHT_HAND = 170, //
	LEFT_FEMUR = 285, //
	LEFT_KNEE = 286, // 
	LEFT_SHINBONE = 276, //
	LEFT_MALLEOLUS = 276,
	LEFT_TIPTOE = 277,
	LEFT_SHOULDER = 160, //
	LEFT_BICEPS = 49, // 
	LEFT_ELBOW = 14, //
	LEFT_ULNA = 21, //
	LEFT_HAND = 21, //
};

class QuatTransform
{
public:
	Vector4 m_TransAndScale;
	Vector4 m_Rotation;
};
class AxisAlignedBox
{
public:
	Vector4 m_Min; //0x0000 
	Vector4 m_Max; //0x0010 

	AxisAlignedBox()
	{}
};//Size=0x0020

class LinearTransform
{
public:
	union
	{
		struct
		{
			Vector3 left;
			Vector3 up;
			Vector3 forward;
			Vector3 trans;
		};
		FLOAT data[4][4];
	};
	LinearTransform()
	{}
};

struct TransformAABBStruct
{
	LinearTransform Transform;
	AxisAlignedBox AABB;
	Matrix pad;

	TransformAABBStruct()
	{}
};

class CHealthComponent
{
public:
	char pad0[0x20];
	float HP;
};

class ClientSoldierPrediction
{
public:
	char pad0[0x60];
	Vector3 Position;
	char pad1[20];
	Vector3 Velocity;
};

class ClientSoldierAimingSimulation
{
public:
	//? = 0x0010; // what is it?
	char pad0[0x30];
	float yaw; //0x0018 FLOAT
	char pad1[0x10];
	float pitch; //0x001C FLOAT
				 //D3DXVECTOR2 sway; //0x0028 D3DXVECTOR2
				 //float zoomLevel; //0x0068 FLOAT
				 //Vector3 LastRayCast; //0x160 Vector3
};
class AimEntityData {
public:
};
class CSoldierEntity {
public:
};
class ClientAimEntity {
public:
	char _0x0000[40];
	AimEntityData* m_pAimEntityData; //0x0028 [AimEntityData]
	char _0x0030[368];
	CSoldierEntity* m_pClientSoldierEntity; //0x01A0 [ClientSoldierEntity]
	ClientSoldierAimingSimulation* m_authorativeAiming; //0x01A8
	char _0x01B0[1680];
};

struct SwayDataSaved
{
	bool enabled = false;
	std::vector<float> Data;
};

struct BulletDataSaved
{
	bool enabled = false;
	float velocity;
	float time;
	float gravity;
	bool instantHit;
	int BulletsPerShot;
	int BulletsPerShell;
	float RateOfFire;
};

extern std::map<QWORD, SwayDataSaved> SwayData;
extern std::map<QWORD, BulletDataSaved> BulletData;
//extern std::map<CSoldier*, bool> VisibleEntities;

class ClientWeapon {
public:
};

class SoldierAimingSimulationData {
public:
};

class SoldierWeaponBlueprint {
public:
};

class GunSwayData {
public:
	char pad0[0x03C8];
	float m_ShootingRecoilDecreaseScale; //0x03C8
	float m_FirstShotNoZoomDispersionMultiplier; //0x03CC
	float m_FirstShotZoomDispersionMultiplier; //0x03D0
	float m_FirstShotRecoilMultiplier; //0x03D4
	float m_PowerOfDispersionRandom; //0x03D8
};

class WeaponFiringData {
public:
	char _0x0000[0x38];
	GunSwayData* gunSwayData; //0x0038 [GunSwayData]
};//Size=0x0040

class WeaponFiring {
public:
	char _0x0000[0x18];
	WeaponFiringData* data;
};//Size=0x0440

class SoldierWeaponData {
public:
	char _0x0000[144];
	WeaponFiringData* weaponFiringData; //0x0090 [WeaponFiringData]
	char _0x0098[216];
	char* m_Name; //0x0170 
	char _0x0178[16];
	SoldierAimingSimulationData* m_pSoldierAimingSimulationData; //0x0188 [SoldierAimingSimulationData]
	char _0x0190[40];
	SoldierWeaponBlueprint* m_pSoldierWeaponBlueprint; //0x01B8 [SoldierWeaponBlueprint]
	char _0x01C0[640];
};

class ClientSoldierWeapon {
public:
	char _0x0000[48];
	SoldierWeaponData* soldierWeaponData; //0x0030 [SoldierWeaponData]
	char _0x0038[18840];
	__int64 m_ZoomLevelData1; //0x49D0 [ZoomLevelData]
	__int64 ZoomLevelData2; //0x49D8 [ZoomLevelData]
	char _0x49E0[48];
	ClientWeapon* m_pWeapon; //0x4A10 [ClientWeapon]
	char _0x4A18[16];
	WeaponFiring* weaponFiring; //0x4A18 
	char _0x4A30[1552];

};//Size=0x5040

class ClientSoldierWeaponsComponent {
public:
	char _0x0000[56];
	ClientSoldierWeapon* weapon; //0x0038 [ClientSoldierWeapon]
	char _0x0040[24];
	CSoldier* soldier; //0x0058 [ClientSoldierEntity]
	char _0x0060[96];
};

class CSoldier
{
public:
	char pad0[0x1C0]; //0x0000
	CHealthComponent* HealthComponent; //0x01C0
	char pad1[0x3E0]; // 0x01C8
	ClientSoldierPrediction* prediction; // 0x05A8
	char pad2[0xA8]; // 0x05B0
	ClientSoldierWeaponsComponent* weaponComponent; //0x0658 -- malo interesujacy
	char pad33[0x18]; // 0x660
	ClientAimEntity* aim;  //0x0678
	ClientSoldierWeapon* weapon; // 0x0680
	char pad_0680[0x20]; //0x0688
	BYTE m_isSprinting; //0x06A8
	char pad_06A9[2]; //0x06A9
	BYTE m_Occluded; //0x06AB
	char pad_06AC[0x980 - 0x6AB]; //0x06AC

	Vector3 GetPosition()
	{
		return prediction->Position;
	}

	Vector3 GetVelocity()
	{
		return prediction->Velocity;
	}

	int GetBulletsPerShot()
	{
		return Mem::ReadPtr<int>({ (QWORD)this, 0x658, 0x900, 0x38, 0x30, 0x90, 0x10, 0x108 }, false);
	}
	void SetBulletsPerShot(int _vel)
	{   //Damage Multiplier (Bullet per shot) not recommended to go above 5 unless using a shotgun. If you have high ping none of these will register on the server, for me it worked up to 250 ping
		Mem::WritePtr<int>({ (QWORD)this, 0x658, 0x900, 0x38, 0x30, 0x90, 0x10, 0x108 }, _vel, false);
	}
	int GetBulletsPerShell()
	{
		return Mem::ReadPtr<int>({ (QWORD)this, 0x658, 0x900, 0x38, 0x30, 0x90, 0x10, 0x010C }, false);
	}
	void SetBulletsPerShell(int _vel)
	{
		Mem::WritePtr<int>({ (QWORD)this, 0x658, 0x900, 0x38, 0x30, 0x90, 0x10, 0x010C }, _vel, false);
	}
	float GetRateOfFire()
	{
		return Mem::ReadPtr<float>({ (QWORD)this, 0x658, 0x900, 0x38, 0x30, 0x90, 0x10, 0x224 }, false);
	}
	void SetRateOfFire(float _vel)
	{
		Mem::WritePtr<float>({ (QWORD)this, 0x658, 0x900, 0x38, 0x30, 0x90, 0x10, 0x224 }, _vel, false);
	}
	float GetBulletVelocity()
	{
		return Mem::ReadPtr<float>({ (QWORD)this, 0x658, 0x900, 0x38, 0x4A30, 0x130, 0x10, 0x88 + 0x20 }, false);
	}

	void SetBulletVelocity(float _vel)
	{
		Mem::WritePtr<float>({ (QWORD)this, 0x658, 0x900, 0x38, 0x4A30, 0x130, 0x10, 0x88 + 0x20 }, _vel, false);
	}

	void SetBulletGravity(float _gravity)
	{
		Mem::WritePtr<float>({ (QWORD)this, 0x658, 0x900, 0x38, 0x30, 0x90, 0x10, 0xC0, 0x140 }, _gravity, false);
	}

	float GetBulletGravity()
	{
		//return Mem::ReadPtr<float>({ (QWORD)this, 0x658, 0x900, 0x38, 0x30, 0x90, 0x10, 0xC0, 0x140 }, false);
		return (GetBulletVelocity()<500) ? (500 / GetBulletVelocity()) : (1200 / GetBulletVelocity());
	}

	void SetInstantHit(BYTE _state)
	{
		Mem::WritePtr<BYTE>({ (QWORD)this, 0x658, 0x900, 0x38, 0x30, 0x90, 0x10, 0xC0, 0x181 }, _state, false);
	}

	void SetTimeToLive(float _time)
	{
		Mem::WritePtr<float>({ (QWORD)this, 0x658, 0x900, 0x38, 0x30, 0x90, 0x10, 0xC0, 0x94 }, _time, false);
	}

	float GetTimeToLive()
	{
		return Mem::ReadPtr<float>({ (QWORD)this, 0x658, 0x900, 0x38, 0x30, 0x90, 0x10, 0xC0, 0x94 }, false);
	}

	QWORD GetWeapon()
	{
		//return weaponComponent->weapon->soldierWeaponData->weaponFiringData;
		return Mem::ReadPtr<QWORD>({ (QWORD)this, 0x658, 0x900, 0x38, 0x30 }, false);
	}

	void SetSpreadEnabled(bool _state)
	{

		QWORD Weapon = GetWeapon();

		if (!Mem::IsValid(&Weapon))
			return;

		if (!SwayData[Weapon].enabled)
		{
			for (int i = 0; i < 0xFF; i++)
			{
				QWORD offset = (i * 0x4);
				SwayData[Weapon].Data.push_back(Mem::ReadPtr<float>({ (QWORD)this, 0x658, 0x900, 0x38, 0x30, 0x90, 0x38, 0x10, offset }, false));
			}
			SwayData[Weapon].enabled = true;
		}

		if (_state)
		{
			for (int i = 0; i < 0xFF; i++)
			{
				QWORD offset = (i * 0x4);
				Mem::WritePtr<float>({ (QWORD)this, 0x658, 0x900, 0x38, 0x30, 0x90, 0x38, 0x10, offset }, 0.f, false);
			}
		}
		else
		{
			if (!SwayData[Weapon].enabled)
				return;

			for (int i = 0; i < 0xFF; i++)
			{
				QWORD offset = (i * 0x4);
				if (SwayData[Weapon].Data[i])
					Mem::WritePtr<float>({ (QWORD)this, 0x658, 0x900, 0x38, 0x30, 0x90, 0x38, 0x10, offset }, SwayData[Weapon].Data[i], false);
			}
		}

	}

	unsigned int GetActiveSlot()
	{
		return Mem::ReadPtr<unsigned int>({ (QWORD)this, 0x658, 0x960 }, false);
	}

	void SetBulletData(bool _state)
	{
		QWORD Weapon = GetWeapon();
		if (!Mem::IsValid(&Weapon))
			return;

		if (!BulletData[Weapon].enabled)
		{
			BulletData[Weapon].instantHit = false;
			BulletData[Weapon].gravity = GetBulletGravity();
			BulletData[Weapon].time = GetTimeToLive();
			BulletData[Weapon].velocity = GetBulletVelocity();
			BulletData[Weapon].BulletsPerShot = GetBulletsPerShot();
			BulletData[Weapon].BulletsPerShell = GetBulletsPerShell();
			BulletData[Weapon].RateOfFire = GetRateOfFire();
			BulletData[Weapon].enabled = true;

		}

		if (_state)
		{
			SetBulletGravity(0.f);
			SetTimeToLive(1.f);
			SetBulletVelocity(9999.f);
			SetInstantHit(1);
			SetBulletsPerShot(5); //Damage Multiplier (Bullet per shot) not recommended to go above 5 unless using a shotgun. If you have high ping none of these will register on the server, for me it worked up to 250 ping
			SetBulletsPerShell(20);
			SetRateOfFire(2000);
		}
		else
		{
			if (!BulletData[Weapon].enabled)
				return;

			SetBulletGravity(BulletData[Weapon].gravity);
			SetTimeToLive(BulletData[Weapon].time);
			SetBulletVelocity(BulletData[Weapon].velocity);
			SetBulletsPerShot(BulletData[Weapon].BulletsPerShot);
			SetBulletsPerShell(BulletData[Weapon].BulletsPerShell);
			SetRateOfFire(BulletData[Weapon].RateOfFire);
			SetInstantHit(0);
		}
	}

	/*if u just delet Mem::Write<BYTE>((QWORD)this + 0x1A, 161);
	you cant update your bones behind walls
	BYTE old = Mem::Read<BYTE>((QWORD)this + 0x1A);//save the old state
	Mem::Write<BYTE>((QWORD)this + 0x1A, old);//reset the flag to prevent the medic revive bug*/
	//Mem::Write<BYTE>((QWORD)this + 0x1A, 175); will revive but will break all ESP. 175 is default bone flag value for each entity
	bool GetBonePosition(Vector3& outPos, DWORD ID)
	{
		Mem::Write<BYTE>((QWORD)this + 0x1B4, 1);
		Mem::Write<BYTE>((QWORD)this + 0x1A, 161);

		QuatTransform Temp = Mem::Read<QuatTransform>(Mem::Read<QWORD>(Mem::Read<QWORD>((QWORD)this + 0x460) + 0x20) + (ID * 0x20));

		if (Vector3(Temp.m_TransAndScale.x, Temp.m_TransAndScale.y, Temp.m_TransAndScale.z).Length() >= .1f/*1.f*/)
		{
			outPos.x = Temp.m_TransAndScale.x;
			outPos.y = Temp.m_TransAndScale.y;
			outPos.z = Temp.m_TransAndScale.z;
			return true;
		}
		return false;
	}

	//GetBonePositionLP is GetBonePosition version to be called only for Local soldier LPSoldier->.  Not for Entity soldiers(enemies). For Entity soldiers use GetBonePosition
	bool GetBonePositionLP(Vector3& outPos, DWORD ID)
	{
		QuatTransform Temp = Mem::Read<QuatTransform>(Mem::Read<QWORD>(Mem::Read<QWORD>((QWORD)this + 0x460) + 0x20) + (ID * 0x20));

		if (Vector3(Temp.m_TransAndScale.x, Temp.m_TransAndScale.y, Temp.m_TransAndScale.z).Length() >= .1f/*1.f*/)
		{
			outPos.x = Temp.m_TransAndScale.x;
			outPos.y = Temp.m_TransAndScale.y;
			outPos.z = Temp.m_TransAndScale.z;
			return true;
		}
		return false;
	}

	Vector3 GetAngles()
	{
		return Mem::ReadPtr<Vector3>({ (QWORD)this, 0x678, 0x1A8, 0x28, 0x24 }, false);
	}

	BOOLEAN SetAngles(Vector3 _angles)
	{
		return Mem::WritePtr<Vector3>({ (QWORD)this, 0x678, 0x1A8, 0x28, 0x24 }, _angles, false);
	}

	Vector3 GetShootSpace()
	{
		return Mem::ReadPtr<Matrix>({ (QWORD)this, 0x658, 0x900, 0x38, 0x4A18, 0x40 }, false).Translation();
	}

	Vector3 GetSpawnOffset()
	{
		return Mem::ReadPtr<Vector3>({ (QWORD)this, 0x658, 0x900, 0x38, 0x30, 0x90, 0x10, 0x60 }, false);
	}

	Vector3 GetInitialPosition()
	{
		return Mem::ReadPtr<Vector3>({ (QWORD)this, 0x658, 0x900, 0x38, 0x4A18, 0x40 }, false);
	}

	void SetChamsEnabled(BYTE btEnabled)
	{
		Mem::Write<BYTE>((QWORD)this + 0x5CD, btEnabled);
	}
};

class CVehicleEntity  //EntityBusPeer
{
public:
	virtual void Function0(); //
	virtual void Function1(); //
	virtual void Function2(); //
	virtual void Function3(); //
	virtual void Function4(); //
	virtual void Function5(); //
	virtual void Function6(); //
	virtual void Function7(); //
	virtual void Function8(); //
	virtual void Function9(); //
	virtual void Function10(); //
	virtual void Function11(); //
	virtual void Function12(); //
	virtual void Function13(); //
	virtual void Function14(); //
	virtual void Function15(); //
	virtual void Function16(); //
	virtual void Function17(); //
	virtual void Function18(); //
	virtual void Function19(); //
	virtual void Function20(); //
	virtual void Function21(); //
	virtual void Function22(); //
	virtual void Function23(); // 
	virtual void Function24();
	virtual void GetAABB(TransformAABBStruct* pAABB);
	virtual void GetTransform(Matrix* mTransform);

	BYTE GetTeam()
	{
		return Mem::Read<BYTE>((QWORD)this + 0x1C34);
	}

	std::string GetName()
	{
		std::string Name;
		Name = Mem::ReadPtr<char*>({ (QWORD)this, 0x30, 0x130 }, false);
		if (Mem::IsValid((QWORD*)((QWORD)this + 0x30)))
			Name = Name.substr(9, Name.size() - 9);
		return Name;
	}

	bool IsHorse() {
		return !strcmp("Horse", GetName().c_str());
	}

	bool GetVehiclePosition(Vector3& outPos, DWORD ID = ORIGIN) {
		//if (!GetName().length())  //vehicle no name => not valid vehicle?
		//	return false;

		TransformAABBStruct _AABB;
		Vector3 minSP, maxSP, cor2SP, cor3SP, cor4SP, cor5SP, cor6SP, cor7SP;
		Matrix _Transform;
		GetTransform(&_Transform);
		Vector3 Position = Vector3(_Transform.m[3][0], _Transform.m[3][1], _Transform.m[3][2]);
		glm::vec3 glmPos = glm::vec3(Position.x, Position.y, Position.z);

		GetAABB(&_AABB);
		glm::vec3 min = glm::vec3(_AABB.AABB.m_Min.x, _AABB.AABB.m_Min.y, _AABB.AABB.m_Min.z);
		glm::vec3 max = glm::vec3(_AABB.AABB.m_Max.x, _AABB.AABB.m_Max.y, _AABB.AABB.m_Max.z);
		//glm::vec3 cor2(max.x, min.y, min.z);
		//glm::vec3 cor3(max.x, min.y, max.z);
		//glm::vec3 cor4(min.x, min.y, max.z);
		//glm::vec3 cor5(min.x, max.y, max.z);
		//glm::vec3 cor6(min.x, max.y, min.z);
		//glm::vec3 cor7(max.x, max.y, min.z);
		glm::mat3 TransformMatrix(glm::vec3(_Transform.m[0][0], _Transform.m[1][0], _Transform.m[2][0]),
			glm::vec3(_Transform.m[0][1], _Transform.m[1][1], _Transform.m[2][1]),
			glm::vec3(_Transform.m[0][2], _Transform.m[1][2], _Transform.m[2][2]));

		//glm::vec3 crnr2 = glmPos + cor2 * TransformMatrix;
		//glm::vec3 crnr3 = glmPos + cor3 * TransformMatrix;
		//glm::vec3 crnr4 = glmPos + cor4 * TransformMatrix;
		//glm::vec3 crnr5 = glmPos + cor5 * TransformMatrix;
		//glm::vec3 crnr6 = glmPos + cor6 * TransformMatrix;
		//glm::vec3 crnr7 = glmPos + cor7 * TransformMatrix;
		min = glmPos + min * TransformMatrix;
		max = glmPos + max * TransformMatrix;

		if (ID == ORIGIN) {
			outPos.x = min.x;
			outPos.y = min.y;
			outPos.z = min.z;
		}
		else if (ID == TOP) {
			outPos.x = (max.x - min.x) / 2 + min.x;
			outPos.y = max.y;
			outPos.z = (max.z - min.z) / 2 + min.z;
		}
		else if (ID == UP) {
			outPos.x = (max.x - min.x) / 2 + min.x;
			outPos.y = (max.y - min.y) *0.88 + min.y;
			outPos.z = (max.z - min.z) / 2 + min.z;
		}
		else if (ID == CENTER) {
			outPos.x = (max.x - min.x) / 2 + min.x;
			outPos.y = (max.y - min.y) / 2 + min.y;
			outPos.z = (max.z - min.z) / 2 + min.z;
		}
		else if (ID == DOWN) {
			outPos.x = (max.x - min.x) / 2 + min.x;
			outPos.y = (max.y - min.y) *0.12 + min.y;
			outPos.z = (max.z - min.z) / 2 + min.z;
		}
		else if (ID == BOTTOM) {
			outPos.x = (max.x - min.x) / 2 + min.x;
			outPos.y = min.y;
			outPos.z = (max.z - min.z) / 2 + min.z;
		}
		else {
			outPos.x = (max.x - min.x) / 2 + min.x;
			outPos.y = (max.y - min.y) / 2 + min.y;
			outPos.z = (max.z - min.z) / 2 + min.z;
			return false;
		}

		return true;
	}

}; //Size=0x0008
   //////////this is only to take vehicle velocity
class Entity : public CVehicleEntity
{
public:
	char _0x0008[0x0018];
};//Size=0x0020
class SpatialEntity : public Entity
{
public:
	char _0x0020[0x0008];
};//Size=0x0028
class ComponentEntity : public SpatialEntity
{
public:
	char _0x0028[0x0008];
	char _0x0030[0x0008]; //ComponentData* m_Data; //0x0030
	char _0x0038[0x0008]; //ComponentTable* m_ComponentTable; //0x0038
	char _0x0040[0x0010];
};//Size=0x0050
class GameComponentEntity : public ComponentEntity
{
public:
	char _0x0050[0x0020];
};//Size=0x0070
class ClientGameComponentEntity : public GameComponentEntity
{
public:
};//Size=0x0070
class ClientPhysicsEntity : public ClientGameComponentEntity
{
public:
	char _0x0070[0x0020];
};//Size=0x0090
class ClientControllableEntity : public ClientPhysicsEntity
{
public:
	char _0x0090[0x00A0];
	char _0x0130[0x0008]; //ClientSpawnEntity* m_SpawnEntity; //0x0130
	char _0x0138[0x0010];
	char _0x0148[0x0008]; //Array<ClientPlayerEntryComponent*> m_EntryComponents; //0x0148
	char _0x0150[0x0070];
	char _0x01C0[0x0008]; //ClientControllableHealthComponent* m_HealthComponent; //0x01C0
	char _0x01C8[0x0038];
	//bool IsSoldier() { return GetID() == CID_ClientSoldierEntity; }
	//bool IsVehicle() { return GetID() == CID_ClientVehicleEntity; }
};//Size=0x0200

class ClientVehicleEntity : public ClientControllableEntity
{
public:
	char _0x0200[0x0110];
	D3DXVECTOR3 m_Velocity; //0x0310
	byte m_VisibleUserSet;
	char _0x031C[0x015C - 1];
	char _0x0478[0x14D8]; //ClientChassisComponent* m_ClientChassisComponent; //0x0478

						  //bool IsAlive(){ return IsValidPtr(m_HealthComponent) && m_HealthComponent->m_ControllableCurHealth > 0.0f; }
	bool IsVisible() { return m_VisibleUserSet; }
};//Size=0x1950

class ClientCharacterEntity : public ClientControllableEntity
{
public:
	char _0x0200[0x0100];
};//Size=0x0300
class ClientSoldierEntity : public ClientCharacterEntity
{
public:
	char _0x0300[0x0190];
	char _0x0490[0x0008];//ClientSoldierPhysicsComponent* m_ClientSoldierPhysicsComponent; //0x0490
	char _0x0498[0x0100];
	ClientSoldierPrediction* m_ClientSoldierPrediction; //0x0598
	char _0x05A0[0x0014];
	float m_AuthorativeYaw; //0x05B4
	char _0x05B8[0x002C];
	float m_AuthorativePitch; //0x05E4
	unsigned char m_PoseState; //0x05E8   5E8 was old. it is 5F8 right now
	char _0x05E9[0x005F];
	ClientSoldierWeaponsComponent* m_ClientSoldierWeaponsComponent; //0x0648
	char _0x0650[0x0008];
	char _0x0658[0x0008]; //ClientSoldierBreathControlComponent* m_ClientSoldierBreathControlComponent; //0x0658
	char _0x0660[0x0008];
	ClientAimEntity* m_ClientAimEntity; //0x0668
	char _0x0670[0x0028 + 2];
	unsigned char m_Sprinting; //0x0698
	unsigned char m_Occluded; //0x0699
	char _0x069A[0x02DE];

	//bool IsAlive() { return IsValidPtr(m_HealthComponent) && m_HealthComponent->m_SoldierCurHealth > 0.0f; }
	bool IsVisible() { return !m_Occluded; }  //not working for vehicles
};//Size=0x0960   
  //////end of code for vehicle velocity 

class Element
{
public:
	Element* flink;
	Element* blink;
	int unknown0;
	int unknown1;
};

/*template <class T>
class EntityIterator
{
public:
Element* first_element;
Element* current_element;

EntityIterator(GameWorld* game_world, intptr_t class_info)
{
using get_entity_list_fn = Element*(__thiscall*)(class_info, game_world);
static get_entity_list_fn get_entity_list = reinterpret_cast<get_entity_list_fn>(0x1447941F0);

first_element = get_entity_list(class_info, game_world);
current_element = first_element;
}

bool has_next()
{
return current && current->flink;
}

Element* first()
{
return first_element;
}

Element* front()
{
return current_element;
}

Element* next()
{
return utility::valid_ptr(first_element) ? current_element = current_element->flink : nullptr;
}
};*/

class MaterialDecl
{
public:
	uint32_t packed; //+0x0
};

class PhysicsId
{
protected:
	union
	{

		int32_t m_Id; //0x0000
		struct
		{
			uint16_t m_Index; //0x0000
			uint8_t m_Realm; //0x0002
			uint8_t m_Unk; //0x0003
		};
	};

public:

	int32_t Get()
	{
		return m_Id;
	}

	uint8_t GetRealm()
	{
		return m_Realm;
	}

	uint16_t GetIndex()
	{
		return m_Index;
	}

	operator int32_t()
	{
		return this->Get();
	}

	bool IsValid()
	{
		return this->Get() != -1;
	}

}; //0x0004

class RayCastHit
{
public:
	Vector4 position; //0x0000 
	Vector4 normal; //0x0010 
	PhysicsId physics_id; //0x0020
	MaterialDecl material; //0x0024
	uint32_t part; //0x0028
	uint32_t bone; //0x002C
	float lambda; //0x0030
	char _pad0[0xC];
}; //Size = 0x0070

template <class T>
class vector_
{
private:
	T* m_firstElement;
	T* m_lastElement;
	T* m_arrayBound;
	void* vftable;
public:
	size_t size()
	{
		return (((intptr_t)m_lastElement - (intptr_t)m_firstElement) / sizeof(void*));
	}

	T at(int nIndex)
	{
		return *(T*)((intptr_t)m_firstElement + (nIndex * sizeof(T)));
	}
	T operator [](int index)
	{
		return At(index);
	}
};



enum RayCastFlags
{
	NoCheck = 0,
	CheckDetailMesh = 0x0DB,
	IsAsyncRaycast = 0x2,
	DontCheckWater = 0x0FD,
	DontCheckTerrain = 0x07A,
	DontCheckRagdoll = 0x10,
	DontCheckCharacter = 0x20,
	DontCheckGroup = 0x40,
	DontCheckPhantoms = 0x80,
};

class RayCaster
{
public:
	virtual void Unknown();
	virtual bool PhysicsRayQuery(char* text, Vector4 *from, Vector4 *to, RayCastHit *hit, int flag, vector_<PhysicsId>* PhysicsEntityList);

	bool doshit(char* text, Vector4 *from, Vector4 *to, RayCastHit *hit, int flag, vector_<PhysicsId>* PhysicsEntityList)
	{
		typedef bool*(__thiscall *tFunc)(void*, char*, Vector4 *, Vector4 *, RayCastHit *, int, vector_<PhysicsId>*);
		tFunc testt = *(tFunc*)(*(QWORD*)this + 0x8);
		return testt(this, text, from, to, hit, flag, PhysicsEntityList);
	}

	static RayCaster* Get()
	{
		return Mem::ReadPtr<RayCaster*>({ OFFSET_GAMECONTEXT_2, 0x30, 0x108, 0x88 }, true);
	}

};

class BorderInputNode
{
public:
	char _pad0[0x8];
	void* input_cache; //0x0008
	char _pad1[0x40];
	void* input_node;  //0x0050

	static BorderInputNode* Get()
	{
		return (BorderInputNode*)(*((*(void***)BORDER_INPUT_NODE) + 1));
	}
};

class EntityInfo
{
public:
	char pad0[0x130];
	char Name[32];
};

class CSpectator
{
public:
	char pad0[0x40];
	char Name[32];

	bool IsSpectator()
	{
		return Mem::Read<bool>((QWORD)this + 0x1C31);
	}

	QWORD GetView()
	{
		return Mem::Read<QWORD>((QWORD)this + 0x1D98);
	}
};

class CEntity {
public:
	char pad0[0x40];
	char Name[32];
	char pad1[7124];
	BYTE teamId; //0x1C34
	char pad2[259];
	CVehicleEntity* vehicle; // 0x1D38
	char pad3[8];
	CSoldier* soldier; //0x1D48

	const char* GetName() {
		std::string Name = Mem::ReadPtr<char*>({ (QWORD)this, 0x30, 0x130 }, false);
		if (Name.size() <= 4)
			return "";
		if (Name.find("vehicles.") != -1)
			Name = Name.substr(8, Name.length());
		return Name.c_str();
	}

	CSoldier* GetSoldier() {
		return Mem::Read<CSoldier*>((QWORD)&soldier);
		//return Mem::Read<CSoldier*>((QWORD)soldier);
	}

	CVehicleEntity* GetCurrentVehicle() {
		return Mem::Read<CVehicleEntity*>((QWORD)&vehicle);
		//return Mem::Read<CVehicleEntity*>((QWORD)vehicle);
	}

	BYTE GetTeam() {
		return teamId;
	}

	QWORD GetPlayerView() {
		return Mem::Read<QWORD>((QWORD)this + 0x1D98); // TO FIX - wychodzi poza strukture CEntity
	}
};

class CEntityList {
public:
	CEntity* GetEntity(int i) {
		return Mem::Read<CEntity*>((QWORD)this + 0x38 + (i * 0x8));
	}
};

class CSpectatorList {
public:

	CSpectator* GetSpectator(const uint& _i)
	{
		CSpectator* _spectator = Mem::Read<CSpectator*>((QWORD)this + 0x28 + (_i * 0x8));
		if (Mem::IsValid(_spectator) && _spectator->IsSpectator())
			return _spectator;
		return nullptr;
	}

};

class ClientPlayerManager
{
public:

	virtual void function();
	virtual QWORD GetPlayers();
	virtual CSpectatorList* GetSpectators();

};

class Game
{
public:

	static BOOLEAN ThreadState[3];
	static bool cursorOn;

	static CEntity* GetLocalPlayer()
	{
		return Mem::Read<CEntity*>(Mem::Read<QWORD>(Mem::Read<QWORD>(OFFSET_GAMECONTEXT_2) + 0x68) + 0x578);
	}

	static ClientPlayerManager* GetClientPlayerManager()
	{
		return Mem::Read<ClientPlayerManager*>(Mem::Read<QWORD>(OFFSET_GAMECONTEXT_2) + 0x68);
	}

	static void ToggleGameCursor()
	{
		cursorOn = !cursorOn;
		//Mem::Write<bool>(OFFSET_CURSOR, cursorOn);
	}

	static CEntityList* GetEntityList()
	{
		return Mem::ReadPtr<CEntityList*>({ OFFSET_GAMECONTEXT_2, 0x68, 0x560 }, true);
	}

	static bool W2S(const Vector3& WorldPosition, Vector3& _out)
	{
		float mX = DX11->ScreenSX * 0.5f;
		float mY = DX11->ScreenSY * 0.5f;

		D3DXMATRIXA16 VPM = Mem::Read<D3DXMATRIXA16>(Mem::Read<QWORD>(Mem::Read<QWORD>(OFFSET_GAMERENDERER) + 0x60) + 0x460);

		_out.z = VPM(0, 3) * WorldPosition.x + VPM(1, 3) * WorldPosition.y + VPM(2, 3) * WorldPosition.z + VPM(3, 3);
		if (_out.z < 0.1f)
			return false;

		float x = VPM(0, 0) * WorldPosition.x + VPM(1, 0) * WorldPosition.y + VPM(2, 0) * WorldPosition.z + VPM(3, 0);
		float y = VPM(0, 1) * WorldPosition.x + VPM(1, 1) * WorldPosition.y + VPM(2, 1) * WorldPosition.z + VPM(3, 1);

		_out.x = mX + mX * x / _out.z;
		_out.y = mY - mY * y / _out.z;

		//if (_out.x <= 0.f || _out.x >= 1920 || _out.y <= 0.f || _out.y >= 1080)
		if (_out.x <= 0.f || _out.x >= 3841 || _out.y <= 0.f || _out.y >= 2161)  //HD 3840 x 2160
			return false;

		return true;
	}

	struct CTime
	{
	public:
		int Hour;
		int Minute;
		CTime(int _hour, int _minute) : Hour(_hour), Minute(_minute) {}
	};

	static CTime GetHour()
	{
		time_t Tick = time(0);
		struct tm* Time = localtime(&Tick);
		return CTime(Time->tm_hour, Time->tm_min);
	}
};