#pragma once

#include "stdafx.h"

void AimbotThread();

class Aimbot
{
public:

	static float SmoothFactor;
	static float FOV;
	static float Distance;
	static int RetargetTimer;
	static int Bone;
	static bool RandomBone;
	static bool PrioritizeDistance;
	static bool AimPrediction;
	static float AimPredictXYZ;
	static float AimOffsetY;
	static bool AimVehicles;
	static bool AimHorses;
	static int VehicleBone;
	static int HorseBone;
	static bool AimSlots2;
	static bool AimSlots5;
	static bool AimSlots6;
	static bool AimSlots7;

	static Vector3 CalculateAngle(Vector3 _Target, Vector3 _LocalPos, Vector3 _Angles);
};

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