#include "stdafx.h"
#include "DX11.h"

class DataContainer;
class GameDataContainer;
class DataBusPeer;
class GameObjectData;
class EntityBusPeer;
class EntityData;
class LinearTransform;
class Asset;
class Entity;
class SpatialEntityData;
class DataBusData;
class SpatialEntity;
class ComponentEntityData;
class EntityBusData;
class Component;
class ComponentEntity;
class ComponentData;
class GameComponentEntityData;
class Blueprint;
class HealthComponent;
class GameComponent;
class GameComponentEntity;
class GameComponentData;
class EntryComponentHudData;
class GamePhysicsEntityData;
class InvestigateSettigns;
class PhysicsComponentData;
class PrefabBlueprint;
class ClientGameHealthComponent;
class PhysicsComponent;
class RenderingOverrides;
class ServerGameComponent;
class ClientGameComponent;
class ClientGameComponentEntity;
class EntryComponentData;
class SystemSettings;
class ProjectileEntityData;
class InvestigateSettignsCustomization;
class GunSwayDispersionData;
class GunSwayRecoilData;
class HealthComponentData;
class GamePhysicsComponentData;
class SpatialPrefabBlueprint;
class ClientControllableHealthComponent;
class CharacterPhysicsComponent;
class ReferenceObjectData;
class ServerEntryComponent;
class BundleSettingsInfo;
class BundleHeapInfo;
class DataContainerPolicyAsset;
class TreeNodeBase;
class ClientEntryComponent;
class ClientPhysicsEntity;
class Camera;
class CameraData;
class PlayerEntryComponentData;
class BaseDisplaySettings;
class MemberInfo;
class MemberInfoData;
class MeshProjectileEntityData;
class FireEffectData;
class BoltActionData;
class HoldAndReleaseData;
class RecoilData;
class FiringDispersionData;
class AccuracyPenaltySettings;
class TinyPiecewiseLinearCurve;
class InvestigateSettignsCustomizations;
class EvasiveBucketTimeSettings;
class GunSwayBaseMoveJumpData;
class GunSwayDispersionModData;
class GunSwayBaseMoveData;
class GameHealthComponentData;
class ControllablePhysicsComponentData;
class SubWorldData;
class Vec4;
class SurfaceShaderInstanceDataStruct;
class InputActionData;
class ClientCharacterHealthComponent;
class ClientCharacterMasterPhysicsComponent;
class LogicReferenceObjectData;
class IUISystem;
class ServerPlayerEntryComponent;
class Tool;
class ControllableEntityData;
class VehicleHealthZoneData;
class BoneComponentData;
class BlueprintBundleSettings;
class UnlockAssetBase;
class MovingBodyData;
class StatsCategoryBaseData;
class PartPhysicsComponent;
class ClientBoneComponent;
class ClientPlayerEntryComponent;
class ClientControllableEntity;
class SpatialReferenceObjectData;
class ClientProjectileEntity;
class ClientCharacterCameraComponent;
class TargetCamera;
class TargetCameraData;
class TurnEffectData;
class BlurEffectData;
class VoiceOverValue;
class WeaponModifierBase;
class ScreenInfo;
class PiecewiseLinearCurve;
class StanceToggleSwitchMapData;
class VehicleEntryComponentData;
class DxDisplaySettings;
class ObjectBlueprint;
class TypeInfo;
class TypeInfoData;
class GhostedProjectileEntityData;
class AntRef;
class FakePhysicsData;
class ShotConfigData;
class AmmoConfigData;
class OverHeatData;
class FireLogicData;
class WeaponDispersion;
class InteractionEntityData;
class GameTweakAITargeting;
class GameTweakCommon;
class GameTweakPanicBehavior;
class GameTweakSniper;
class GameTweakBucketDamage;
class GameAIDifficultyData;
class TargetCameraCallback;
class GunSwayStandData;
class GunSwayStanceZoomModifierData;
class GunSwayCrouchProneData;
class GunSwayStanceTransition;
class WeaponSwayData;
class ControllableHealthComponentData;
class VehiclePhysicsComponentData;
class PhysicsActionBaseData;
class GameAIWeaponData;
class AimInputEntityData;
class JobAffinitySet;
class IKeyboard;
class LandingGearConditionData;
class LevelPreloadInfo;
class LevelDescription;
class WorldData;
class AimingConstraintsData;
class LockingAndHomingData;
class AimingWorldSpaceLockEfficiencyData;
class RenderVolumeEntityData;
class MathEntityAssembly;
class AntAnimationHandlerData;
class Guid;
class MissileUnguidedData;
class NearTargetDetonationData;
class IMouse;
class AxesInputActionData;
class ClientSoldierHealthComponent;
class ClientSoldierPhysicsComponent;
class WidgetReferenceEntityData;
class IglooSubsystem;
class UISystem;
class HudData;
class ProfileOptionData;
class InputNode;
class PhysicsBody;
class PhysicsBodyData;
class MeshAsset;
class RegularCameraViewData;
class StanceCameraData;
class ServerVehicleEntryComponent;
class CongestionControlSettings;
class ServerSpawnEntity;
class Weapon;
class ServerBoneComponent;
class PartComponentData;
class BaseSkeletonAsset;
class AimingPoseData;
class CharacterEntityData;
class ChildComponentData;
class SoldierFOVEffect;
class WeaponEntityData;
class StoredWeaponData;
class BlueprintBundleReference;
class WeaponUnlockAsset;
class RotationBodyData;
class ClientAimInputEntity;
class StateNodeEntityBaseData;
class StatsCategoryGuidData;
class ClientVehicleHealthComponent;
class ClientVehiclePhysicsComponent;
class ClientMeshComponent;
class TextureBaseAsset;
class ClientPartComponent;
class ClientChildComponent;
class ClientVehicleEntryComponent;
class InputThrottle;
class VehicleInputData;
class AntiRollBars;
class InAirForceConfig;
class VehicleHudData;
class VehicleLockableInfoData;
class AngleOfImpactData;
class ClientCharacterEntity;
class PhysicsActionData;
class SpawnReferenceObjectData;
class ClientBulletEntity;
class ClientSoldierCameraComponent;
class FPSCamera;
class FPSCameraData;
class VehicleCustomizationAsset;
class VoiceOverNamedValue;
class ClientSpawnEntity;
class ToolData;
class Firing;
class FiringPad;
class RumbleFiringData;
class VisualEnvironmentComponentData;
class WeaponModifierDynamicBase;
class WeaponAnimationSettingsData;
class CreepingAirBarrage;
class CriteriaGateList;
class CrosshairTypeAsset;
class Curve2D;
class CustomizationTable;
class DX11Screen;
class DamageModifier;
class DamageModifierExtended;
class DestructionMaskVolumeEntityData;
class DiceShooterVehicleEntryComponentData;
class DiceUIInputManagerSettings;
class DifficultyDatas;
class DistanceToAwareCurveOverride;
class DriverSettings;
class DummyClass;
class Dx11DisplaySettings;
class Dx11Renderer;
class DynamicDataContainer;
class EffectBlueprint;
class EnlightenShaderDatabaseAsset;
class EntityVoiceOverInfo;
class Entry;
class EntryComponentSoundData;
class EntryInputActionBindingsData;
class EntryInputActionMapsData;
class EnumFieldInfo;
class EnumFieldInfoData;
class EvasionVolume;
class ExplosionEntityData;
class ExplosionPackEntityData;
class ExplosionWindForceData;
class ExtendedConstraintsData;
class FOVTransitionData;
class FPSAimer;
class FaceAnimationWaveMappings;
class FairFightServerSettings;
class FakeHingeData;
class FieldInfo;
class FieldInfoCotainer;
class FieldInfoData;
class FieldInfoDataContainer;
class FiringCallback;
class FiringFunctionData;
class FiringIntervalPattern;
class FlashlightModifier;
class FloatCurve;
class FloatPhysicsData;
class GAMESETTINGS;
class GameAIEntryData;
class GameAISystem;
class GameAnimationSettings;
class GameInteractionEntityData;
class GameLevel;
class GameModeSettings;
class GameRender;
class GameRenderSettings;
class GameSettings;
class GameTweakData;
class GameView;
class GearboxConfigData;
class GrenadeEntityData;
class GunSwayData;
class HavokAsset;
class HearingModifier;
class HorseHealthComponentData;
class HorsePhysicsComponentData;
class HorsePropulsionPhysicsActionData;
class IClientDiceShooterVehicleEntryComponent;
class IPhysicsRayCaster;
class InputActionMappingsData;
class InputCache;
class InputCamera;
class InputConfigurationAsset;
class FiringCallbackHolder;
class AILevelData;
class InterpolationManagerSettings;
class AIWeaponData;
class AccuracyHitBox;
class AeroDynamicPhysicsData;
class AiAimInputEntityData;
class JobAffinitySettings;
class KeyboardImpl;
class KeyboardInputActionData;
class AimEntityData;
class LandingGearLogicData;
class LevelData;
class AimRotationBoneComponentData;
class AimTransformBuilderEntityData;
class AimingConstraintEntityData;
class LocalizationAsset;
class AimingSimulationEntityData;
class LockingControllerData;
class LockingTypeAsset;
class AimingWorldLockEfficiencyEntityData;
class Main;
class MaskVolumeEntityData;
class MaterialGridData;
class AlignmentData;
class MathEntityData;
class AlternateCameraViewData;
class AntAnimatableData;
class AntAnimatableEntityData;
class MeshLodGroup;
class AntEnumeration;
class Minimap2DEntityData;
class Minimap2DTextureAsset;
class MissileEntityData;
class AntProjectAsset;
class ModuleInfo;
class MotionDampingData;
class MotorbikeData;
class MouseImpl;
class AntiRollBar;
class N0A05926F;
class N0A05CDE6;
class N0A06EE1B;
class N0A09A266;
class N0A0DBBFC;
class N0A0DD79C;
class N0A0E3EF5;
class N0A0EDA88;
class N0A116F71;
class N0A118D54;
class N0A11DD07;
class N0A136457;
class N0A146F66;
class N0A148F3D;
class N0A14C86C;
class N0A151E00;
class N0A16C972;
class N0A1875D7;
class N0A199B95;
class N0A1B05CF;
class N0A1D6A6D;
class N0A1ED932;
class N0A1FA9BC;
class N0A202738;
class N0A2044DD;
class N0A207AFC;
class N0A220042;
class N0A22CE16;
class N0A23B761;
class N0A33CCBA;
class N0CDF59FF;
class N0CE44716;
class N0CE90205;
class N0CE99D66;
class N0CF5EFBC;
class N0CF7D064;
class N0D08180B;
class N0D09A9D5;
class N0D0A037C;
class N0D0BDADA;
class N0D0E2103;
class N0D0F3284;
class N0D104D5F;
class N0D110CA0;
class N0D113AE2;
class N0D11967E;
class N0D177319;
class ArrayTypeInfo;
class ArrayTypeInfoData;
class ObjectVariation;
class AudioLanguage;
class Pad;
class PadInputActionData;
class AuthoritativeAimInputEntityData;
class AutoAssetCollector;
class PathfindingBlobAsset;
class PersistentAmmoData;
class BFClientSettings;
class BFClientSoldierHealthComponent;
class BFClientSoldierPhysicsComponent;
class BFServerSettings;
class BFUIDynamicWidgetGroupAsset;
class BFUIDynamicWidgetReferenceEntityData;
class PhysicsEntityData;
class PhysicsManager;
class PhysicsSettings;
class BFUIStaticBundlesAsset;
class PlayerData;
class BFUISystem;
class PlayerFilterEntityData;
class PlayerHolder;
class PlayerViewData;
class BfCompassHudData;
class PreferredRange;
class ProceduralAnimationTypeSimple;
class BfCrosshairHudData;
class ProfileOptionDataBool;
class ProfileOptionDataFloat;
class ProfileOptionsAsset;
class Projectile;
class ProjectileBlueprint;
class BfVehicleHudData;
class PropertyToInputEntityData;
class ProximityData;
class ProximityTrackerData;
class RBX;
class RDI;
class BfWeaponHudData;
class BoolEntityData;
class BorderInputNode;
class RegulatedSteering;
class RenderView;
class BulletEntityData;
class BurstIntervalPattern;
class RigidBody;
class RigidBodyData;
class RigidMeshAsset;
class CameraComponentData;
class CameraComponentSoundData;
class CameraRecoilData;
class CameraRelativeControlData;
class ServerDiceShooterVehicleEntryComponent;
class CharacterBlueprint;
class CharacterPhysicsBodyData;
class CharacterPhysicsData;
class ServerSettings;
class CharacterSoundData;
class CharacterSprintData;
class ServerVehicleSpawnEntity;
class ServerWeapon;
class ServerWeaponComponent;
class ShooterComponentHolder;
class ChassisComponentData;
class SkeletonAsset;
class SkeletonCollisionData;
class SoldierAimAssistData;
class SoldierAimingConstraintsData;
class SoldierAimingSimulationData;
class SoldierAutoAimData;
class SoldierEntityData;
class ChildBarrelComponentData;
class SoldierHeadCollisionData;
class SoldierHealthModuleData;
class SoldierSprintSettingsData;
class SoldierWeaponCustomizationAsset;
class SoldierWeaponData;
class SoldierWeaponHudData;
class SoldierWeaponUnlockAsset;
class SoundAsset;
class SoundScopeData;
class SoundScopeStrategyData;
class ChildRotationBodyData;
class ClassInfo;
class ClassInfoData;
class Client;
class ClientActiveWeaonHandler;
class SpecialBehavior;
class SprayPattern;
class StabilizerData;
class ClientAiAimInputEntity;
class StanceFilterComponentData;
class StanceFilterHolder;
class ClientAimEntity;
class ClientAimRotationBoneComponent;
class StateNodeEntityData;
class StaticCamera;
class StaticCameraData;
class ClientAimingConstraint;
class ClientAimingSimulation;
class StatsCategoryVehicleData;
class StatsCategoryWeaponData;
class ClientAimingSimulationDataProviderEntity;
class StreamPoolPreset;
class ClientAimingWorldLockEfficiencyEntity;
class SubWorldInclusion;
class SuppressedBehavior;
class SurfaceShaderBaseAsset;
class ClientAnimatedSoldierWeaponHandler;
class SustainFiringData;
class SustainFiringSweepAreaSettings;
class SyncedBFSettings;
class ClientBFVehicleHealthComponent;
class ClientBFVehiclePhysicsComponent;
class ClientCameraComponent;
class ClientCharacterAnimatableMeshProxyComponent;
class TargetModifier;
class TargetingData;
class TextureAsset;
class ClientChassisComponent;
class ClientChildBarrelComponent;
class ClientComponentTargetCameraCallback;
class ClientDiceShooterVehicleEntryComponent;
class TransformSpace;
class ClientFireProjectileEntity;
class ClientGameContext;
class ClientHorsePhysicsComponent;
class ClientInput;
class UIImmediateModeFontConfigurationAsset;
class UIInputActionDataAsset;
class UIPartPropertyList;
class UISettings;
class ClientMinimap2DEntity;
class UIWorldIconBehavior;
class ClientPlayer;
class UnlockEntityData;
class UnlockUserDataBase;
class ValueTypeInfo;
class ValueTypeInfoData;
class ClientPlayerManager;
class VehicleAimerSettings;
class VehicleConfigData;
class ClientSettings;
class VehicleEntityData;
class ClientSoldierBreathControlComponent;
class VehicleHealthComponentData;
class ClientSoldierEntity;
class ClientSoldierPrediction;
class VehicleInaccuracySettings;
class ClientSoldierWeapon;
class ClientSoldierWeaponsComponent;
class VehiclePhysicsActionData;
class ClientStanceFilterComponent;
class VehicleSoundData;
class VehicleSpawnReferenceObjectData;
class VeniceClientBulletEntity;
class VeniceClientSoldierCameraComponent;
class VeniceFPSCamera;
class VeniceFPSCameraData;
class VeniceUISettings;
class VeniceVehicleCustomizationAsset;
class VersionData;
class ViewHolder;
class VisionModifier;
class VisualEnvironmentBlueprint;
class ClientUnlockComponent;
class VoiceOverConversationQueueGroup;
class ClientVehicleAimingSimulation;
class VoiceOverObject;
class VoiceOverPronunciation;
class VoiceOverSystemAsset;
class ClientVehicleEntity;
class WeakData;
class WeakPtr;
class ClientVehicleSpawnEntity;
class ClientWeapon;
class WeaponComponentData;
class WeaponData;
class ClientWeaponComponent;
class ClientWeaponHolder;
class WeaponFiring;
class WeaponFiringData;
class WeaponFiringHolder;
class WeaponHitProbability;
class WeaponInfo;
class WeaponMagazineModifier;
class WeaponModifier;
class CollisionData;
class ColorCorrectionComponentData;
class WeaponProjectileModifier;
class WeaponRestrictions;
class WeaponSettings;
class WeaponSuppressionData;
class ComponentTable;
class ComponentTulpe;
class WeaponZoomLevelData;
class WeaponZoomLevelModifier;
class CompositeMeshAsset;
class WindowSettings;
class ConsoleCommandTriggerEntityData;
class ZoomLevelData;
class vectorFiringCallback;;

enum WeaponClassification
{
	WCNone = 0,
	WCPrimary = 1,
	WCSecondary = 2,
};

enum TimeDeltaType
{
	TimeDeltaType_None = 0,
	TimeDeltaType_Player = 1,
	TimeDeltaType_World = 2,
	TimeDeltaType_Extra1 = 3,
	TimeDeltaType_Extra2 = 4,
	TimeDeltaType_Extra3 = 5,
	TimeDeltaType_Extra4 = 6,
	TimeDeltaType_Extra5 = 7,
	TimeDeltaType_Count = 8,
};

enum FloatCurveType
{
	FloatCurveType_Spline = 0,
	FloatCurveType_Smooth = 1,
	FloatCurveType_Linear = 2,
	FloatCurveType_NearestValue = 3,
};

enum AntHitReactionWeaponType
{
	AntHitReactionWeaponType_Pistol = 0,
	AntHitReactionWeaponType_SMG = 1,
	AntHitReactionWeaponType_AssaultRifle = 2,
	AntHitReactionWeaponType_LMG = 3,
	AntHitReactionWeaponType_Shotgun = 4,
	AntHitReactionWeaponType_SniperRifle = 5,
	AntHitReactionWeaponType_Explosion = 6,
	AntHitReactionWeaponType_Flashbang = 7,
	AntHitReactionWeaponType_Melee = 8,
};

enum Realm
{
	Realm_Client = 0,
	Realm_Server = 1,
	Realm_ClientAndServer = 2,
	Realm_None = 3,
	Realm_Pipeline = 4,
};

enum CharacterPoseType
{
	CharacterPoseType_Stand = 0,
	CharacterPoseType_Crouch = 1,
	CharacterPoseType_Prone = 2,
	CharacterPoseTypeCount = 3,
};

enum AntEntryIdEnum
{
	AntEntryIdEnum_Humvee_Driver = 0,
	AntEntryIdEnum_Humvee_Gunner = 1,
	AntEntryIdEnum_Humvee_PassengerRearLeft = 2,
	AntEntryIdEnum_Humvee_PassengerRearRight = 3,
	AntEntryIdEnum_F16_Pilot = 4,
	AntEntryIdEnum_SU37_Pilot = 5,
	AntEntryIdEnum_AH6_Pilot = 6,
	AntEntryIdEnum_AH64_Pilot = 7,
	AntEntryIdEnum_AH64_Gunner = 8,
	AntEntryIdEnum_Vodnik_Driver = 9,
	AntEntryIdEnum_Vodnik_Gunner = 10,
	AntEntryIdEnum_Humvee_PassengerFrontRight = 11,
	AntEntryIdEnum_Vodnik_PassengerFrontRight = 12,
	AntEntryIdEnum_Vodnik_PassengerRearRight = 13,
	AntEntryIdEnum_Vodnik_PassengerRearLeft = 14,
	AntEntryIdEnum_VadsGunner = 15,
	AntEntryIdEnum_F18F_Pilot = 16,
	AntEntryIdEnum_F18F_Navigator = 17,
	AntEntryIdEnum_M1A2_Gunner = 18,
	AntEntryIdEnum_M1A2_Driver = 19,
};

enum CharacterPhysicsCollisionBehavior
{
	CPCB_KillWhenHitByEnemy = 0,
	CPCB_KillWhenHitByEnemyLeaveWhenHitByFriendly = 1,
	CPCB_DoNothing = 2,
};

enum EntryClass
{
	ecPrimary = 0,
	ecSecondary = 1,
};

enum EntrySeatType
{
	EST_Driver = 0,
	EST_Gunner = 1,
	EST_Passenger = 2,
};

enum EntrySpottingSettings
{
	ESSDefault = 0,
	ESSSendAndReceive = 1,
	ESSReceive = 2,
	ESSCount = 3,
};

enum CaptureTypeEnum
{
	CaptureTypeEnum_CenterPoint = 0,
	CaptureTypeEnum_BoundingBox = 1,
	CaptureTypeEnum_CenterPointUnlimitedHeight = 2,
	CaptureTypeEnum_UnlimitedHeight = 2,
	CaptureTypeEnum_BoundingBoxUnlimitedHeight = 3,
};

enum DamageEntityType
{
	DamageEntityType_Soldier = 0,
	DamageEntityType_Vehicle = 1,
	DamageEntityType_Plane = 2,
	DamageEntityType_Invalid = 3,
	DamageEntityType_Count = 4,
};

enum VehicleSpawnerType
{
	VehicleSpawnerType_NoSpawner = 0,
	VehicleSpawnerType_BasicSpawner = 1,
	VehicleSpawnerType_TeamSpawner = 2,
};

enum AIVehicleSoundCategory
{
	AIVehicleSoundCategory_Normal = 0,
	AIVehicleSoundCategory_Quiet = 1,
};

enum TeamId
{
	TeamNeutral = 0,
	Team1 = 1,
	Team2 = 2,
	Team3 = 3,
	Team4 = 4,
	Team5 = 5,
	Team6 = 6,
	Team7 = 7,
	Team8 = 8,
	Team9 = 9,
	Team10 = 10,
	Team11 = 11,
	Team12 = 12,
	Team13 = 13,
	Team14 = 14,
	Team15 = 15,
	Team16 = 16,
	TeamIdCount = 17,
};

enum VehicleCategory
{
	VehicleCategory_Land = 0,
	VehicleCategory_Air = 1,
	VehicleCategory_Horse = 2,
	VehicleCategory_Count = 3,
};

enum UnlockSpawnType
{
	SpawnLock_Ignore = 0,
	SpawnLock_Locked = 1,
	SpawnLock_Unlocked = 2,
};

enum WeaponClassification
{
	WCNone = 0,
	WCPrimary = 1,
	WCSecondary = 2,
};

enum TimeDeltaType
{
	TimeDeltaType_None = 0,
	TimeDeltaType_Player = 1,
	TimeDeltaType_World = 2,
	TimeDeltaType_Extra1 = 3,
	TimeDeltaType_Extra2 = 4,
	TimeDeltaType_Extra3 = 5,
	TimeDeltaType_Extra4 = 6,
	TimeDeltaType_Extra5 = 7,
	TimeDeltaType_Count = 8,
};

enum FloatCurveType
{
	FloatCurveType_Spline = 0,
	FloatCurveType_Smooth = 1,
	FloatCurveType_Linear = 2,
	FloatCurveType_NearestValue = 3,
};

enum AntHitReactionWeaponType
{
	AntHitReactionWeaponType_Pistol = 0,
	AntHitReactionWeaponType_SMG = 1,
	AntHitReactionWeaponType_AssaultRifle = 2,
	AntHitReactionWeaponType_LMG = 3,
	AntHitReactionWeaponType_Shotgun = 4,
	AntHitReactionWeaponType_SniperRifle = 5,
	AntHitReactionWeaponType_Explosion = 6,
	AntHitReactionWeaponType_Flashbang = 7,
	AntHitReactionWeaponType_Melee = 8,
};

enum Realm
{
	Realm_Client = 0,
	Realm_Server = 1,
	Realm_ClientAndServer = 2,
	Realm_None = 3,
	Realm_Pipeline = 4,
};

enum CharacterPoseType
{
	CharacterPoseType_Stand = 0,
	CharacterPoseType_Crouch = 1,
	CharacterPoseType_Prone = 2,
	CharacterPoseTypeCount = 3,
};

enum AntEntryIdEnum
{
	AntEntryIdEnum_Humvee_Driver = 0,
	AntEntryIdEnum_Humvee_Gunner = 1,
	AntEntryIdEnum_Humvee_PassengerRearLeft = 2,
	AntEntryIdEnum_Humvee_PassengerRearRight = 3,
	AntEntryIdEnum_F16_Pilot = 4,
	AntEntryIdEnum_SU37_Pilot = 5,
	AntEntryIdEnum_AH6_Pilot = 6,
	AntEntryIdEnum_AH64_Pilot = 7,
	AntEntryIdEnum_AH64_Gunner = 8,
	AntEntryIdEnum_Vodnik_Driver = 9,
	AntEntryIdEnum_Vodnik_Gunner = 10,
	AntEntryIdEnum_Humvee_PassengerFrontRight = 11,
	AntEntryIdEnum_Vodnik_PassengerFrontRight = 12,
	AntEntryIdEnum_Vodnik_PassengerRearRight = 13,
	AntEntryIdEnum_Vodnik_PassengerRearLeft = 14,
	AntEntryIdEnum_VadsGunner = 15,
	AntEntryIdEnum_F18F_Pilot = 16,
	AntEntryIdEnum_F18F_Navigator = 17,
	AntEntryIdEnum_M1A2_Gunner = 18,
	AntEntryIdEnum_M1A2_Driver = 19,
};

enum CharacterPhysicsCollisionBehavior
{
	CPCB_KillWhenHitByEnemy = 0,
	CPCB_KillWhenHitByEnemyLeaveWhenHitByFriendly = 1,
	CPCB_DoNothing = 2,
};

enum EntryClass
{
	ecPrimary = 0,
	ecSecondary = 1,
};

enum EntrySeatType
{
	EST_Driver = 0,
	EST_Gunner = 1,
	EST_Passenger = 2,
};

enum EntrySpottingSettings
{
	ESSDefault = 0,
	ESSSendAndReceive = 1,
	ESSReceive = 2,
	ESSCount = 3,
};

enum CaptureTypeEnum
{
	CaptureTypeEnum_CenterPoint = 0,
	CaptureTypeEnum_BoundingBox = 1,
	CaptureTypeEnum_CenterPointUnlimitedHeight = 2,
	CaptureTypeEnum_UnlimitedHeight = 2,
	CaptureTypeEnum_BoundingBoxUnlimitedHeight = 3,
};

enum DamageEntityType
{
	DamageEntityType_Soldier = 0,
	DamageEntityType_Vehicle = 1,
	DamageEntityType_Plane = 2,
	DamageEntityType_Invalid = 3,
	DamageEntityType_Count = 4,
};

enum VehicleSpawnerType
{
	VehicleSpawnerType_NoSpawner = 0,
	VehicleSpawnerType_BasicSpawner = 1,
	VehicleSpawnerType_TeamSpawner = 2,
};

enum AIVehicleSoundCategory
{
	AIVehicleSoundCategory_Normal = 0,
	AIVehicleSoundCategory_Quiet = 1,
};

enum TeamId
{
	TeamNeutral = 0,
	Team1 = 1,
	Team2 = 2,
	Team3 = 3,
	Team4 = 4,
	Team5 = 5,
	Team6 = 6,
	Team7 = 7,
	Team8 = 8,
	Team9 = 9,
	Team10 = 10,
	Team11 = 11,
	Team12 = 12,
	Team13 = 13,
	Team14 = 14,
	Team15 = 15,
	Team16 = 16,
	TeamIdCount = 17,
};

enum VehicleCategory
{
	VehicleCategory_Land = 0,
	VehicleCategory_Air = 1,
	VehicleCategory_Horse = 2,
	VehicleCategory_Count = 3,
};

enum UIHudIcon
{
	UIHudIcon_Unused = 0,
	UIHudIcon_LocalPlayer = 1,
	UIHudIcon_LocalDirection = 2,
	UIHudIcon_FriendlyPlayer = 3,
	UIHudIcon_EnemyPlayer = 4,
	UIHudIcon_NeutralPlayer = 5,
	UIHudIcon_SquadMember = 6,
	UIHudIcon_SquadLeader = 7,
	UIHudIcon_SquadLeaderTargeted = 8,
	UIHudIcon_Vehicle = 9,
	UIHudIcon_PrimaryObjective = 10,
	UIHudIcon_PrimaryObjectiveBlink = 11,
	UIHudIcon_SecondaryObjective = 12,
	UIHudIcon_AreaMapMarker = 13,
	UIHudIcon_ObjectiveDestroy = 14,
	UIHudIcon_ObjectiveScout = 15,
	UIHudIcon_ObjectiveDefend = 16,
	UIHudIcon_ObjectiveMoveTo = 17,
	UIHudIcon_ObjectiveAttack = 18,
	UIHudIcon_ObjectiveFollow = 19,
	UIHudIcon_ObjectiveGeneral = 20,
	UIHudICon_UAV = 21,
	UIHudIcon_AmmoCrate = 22,
	UIHudIcon_MedicBag = 23,
	UIHudIcon_C4 = 24,
	UIHudIcon_ATMine = 25,
	UIHudIcon_StationaryWeapon = 26,
	UIHudIcon_North = 27,
	UIHudIcon_South = 28,
	UIHudIcon_West = 29,
	UIHudIcon_East = 30,
	UIHudIcon_NeutralFlag = 31,
	UIHudIcon_FriendlyFlag = 32,
	UIHudIcon_EnemyFlag = 33,
	UIHudIcon_FriendlyBase = 34,
	UIHudIcon_EnemyBase = 35,
	UIHudIcon_Team1Flag = 36,
	UIHudIcon_Team2Flag = 37,
	UIHudIcon_NeutralFlagLit = 38,
	UIHudIcon_FriendlyFlagLit = 39,
	UIHudIcon_EnemyFlagLit = 40,
	UIHudIcon_SelectableSpawnPoint = 41,
	UIHudIcon_SelectedSpawnPoint = 42,
	UIHudIcon_NonSelectableSpawnPoint = 43,
	UIHudIcon_FriendlyFlagUnderAttack = 44,
	UIHudIcon_EnemyFlagUnderAttack = 45,
	UIHudIcon_OrderAttack = 46,
	UIHudIcon_OrderDefend = 47,
	UIHudIcon_OrderAttackObserved = 48,
	UIHudIcon_OrderDefendObserved = 49,
	UIHudIcon_Boat = 50,
	UIHudIcon_Car = 51,
	UIHudIcon_Jeep = 52,
	UIHudIcon_HeliAttack = 53,
	UIHudIcon_HeliScout = 54,
	UIHudIcon_Tank = 55,
	UIHudIcon_TankIFV = 56,
	UIHudIcon_TankArty = 57,
	UIHudIcon_TankAA = 58,
	UIHudIcon_TankAT = 59,
	UIHudIcon_Jet = 60,
	UIHudIcon_JetBomber = 61,
	UIHudIcon_Stationary = 62,
	UIHudIcon_Strategic = 63,
	UIHudIcon_MotionRadarSweep = 64,
	UIHudIcon_NeedBackup = 65,
	UIHudIcon_NeedAmmo = 66,
	UIHudIcon_NeedMedic = 67,
	UIHudIcon_NeedPickup = 68,
	UIHudIcon_NeedRepair = 69,
	UIHudIcon_KitAssault = 70,
	UIHudIcon_KitDemolition = 71,
	UIHudIcon_KitRecon = 72,
	UIHudIcon_KitSpecialist = 73,
	UIHudIcon_KitSupport = 74,
	UIHudIcon_KitMedic = 75,
	UIHudIcon_KitEngineer = 76,
	UIHudIcon_KitPickupAssault = 77,
	UIHudIcon_KitPickupDemolition = 78,
	UIHudIcon_KitPickupRecon = 79,
	UIHudIcon_KitPickupSpecialist = 80,
	UIHudIcon_KitPickupSupport = 81,
	UIHudIcon_KitPickupMedic = 82,
	UIHudIcon_KitPickupEngineer = 83,
	UIHudIcon_Pickup = 84,
	UIHudIcon_TaggedVehicle = 85,
	UIHudIcon_LaserPaintedVehicle = 86,
	UIHudIcon_HeliTargetEnemy = 87,
	UIHudIcon_HeliTargetFriendly = 88,
	UIHudIcon_ArtilleryTarget = 89,
	UIHudIcon_NeutralFlagAttacker = 90,
	UIHudIcon_FriendlyFlagAttacker = 91,
	UIHudIcon_EnemyFlagAttacker = 92,
	UIHudIcon_LaserTarget = 93,
	UIHudIcon_ObjectiveAttacker = 94,
	UIHudIcon_ObjectiveDefender = 95,
	UIHudIcon_HealthbarBackground = 96,
	UIHudIcon_Healthbar = 97,
	UIHudIcon_RadarSweepComponent = 98,
	UIHudIcon_Blank = 99,
	UIHudIcon_LocalPlayerBigIcon = 100,
	UIHudIcon_LocalPlayerOutOfMap = 101,
	UIHudIcon_PrimaryObjectiveLarge = 102,
	UIHudIcon_TargetUnlocked = 103,
	UIHudIcon_TargetLocked = 104,
	UIHudIcon_TargetLocking = 105,
	UIHudIcon_ArtilleryStrikeNametag = 106,
	UIHudIcon_ArtilleryStrikeMinimap = 107,
	UIHudIcon_CapturePointContested = 108,
	UIHudIcon_CapturePointDefended = 109,
	UIHudIcon_RoundBar = 110,
	UIHudIcon_RoundBarBg = 111,
	UIHudIcon_RoundBarBgPlate = 112,
	UIHudIcon_SnapOvalArrow = 113,
	UIHudIcon_SquadleaderBg = 114,
	UIHudIcon_VehicleBg = 115,
	UIHudIcon_NonTakeableControlPoint = 116,
	UIHudIcon_SpottedPosition = 117,
	UIHudIcon_Grenade = 118,
	UIHudIcon_Revive = 119,
	UIHudIcon_Repair = 120,
	UIHudIcon_Interact = 121,
	UIHudIcon_Voip = 122,
	UIHudIcon_Claymore = 123,
	UIHudIcon_EodBot = 124,
	UIHudIcon_Explosive = 125,
	UIHudIcon_LaserDesignator = 126,
	UIHudIcon_Mav = 127,
	UIHudIcon_Mortar = 128,
	UIHudIcon_RadioBeacon = 129,
	UIHudIcon_Ugs = 130,
	UIHudIcon_PercetageBarMiddle = 131,
	UIHudIcon_PercetageBarEdge = 132,
	UIHudIcon_PercentageBarBackground = 133,
	UIHudIcon_TankLC = 134,
	UIHudIcon_HeliTrans = 135,
	UIHudIcon_StaticAT = 136,
	UIHudIcon_StaticAA = 137,
	UIHudIcon_SprintBoost = 138,
	UIHudIcon_AmmoBoost = 139,
	UIHudIcon_ExplosiveBoost = 140,
	UIHudIcon_ExplosiveResistBoost = 141,
	UIHudIcon_SuppressionBoost = 142,
	UIHudIcon_SuppressionResistBoost = 143,
	UIHudIcon_GrenadeBoost = 144,
	UIHudIcon_HealSpeedBoost = 145,
	UIHudIcon_NeedAmmoHighlight = 146,
	UIHudIcon_NeedMedicHighlight = 147,
	UIHudIcon_NeedRepairHighlight = 148,
	UIHudIcon_NeedPickupHighlight = 149,
	UIHudIcon_PlayerDead = 150,
	UIHudIcon_Player = 151,
	UIHudIcon_Flag = 152,
	UIHudIcon_Base = 153,
	UIHudIcon_ObjectiveNeutralBomb = 154,
	UIHudIcon_ObjectiveFriendlyBomb = 155,
	UIHudIcon_ObjectiveEnemyBomb = 156,
	UIHudIcon_ObjectiveEnemyHVT = 157,
	UIHudIcon_ObjectiveFriendlyHVT = 158,
	UIHudIcon_Count = 159,
};

enum MinimapZoomLevelEnum
{
	MinimapZoomLevel_OnFoot = 0,
	MinimapZoomLevel_Vehicle = 1,
	MinimapZoomLevel_Flight = 2,
};

enum GameplayBones
{
	GameplayBones_UndefinedBone = -1,
	GameplayBones_RootBone = 0,
	GameplayBones_RootMeshBone = 1,
	GameplayBones_ConnectBone = 2,
	GameplayBones_HeadBone = 3,
	GameplayBones_CameraBone = 4,
	GameplayBones_AimBone = 5,
	GameplayBones_WeaponBone = 6,
	GameplayBones_WeaponAux1Bone = 7,
	GameplayBones_LeftArmBone = 8,
	GameplayBones_LeftToeBone = 9,
	GameplayBones_RightToeBone = 10,
	GameplayBones_LeftFootBone = 11,
	GameplayBones_RightFootBone = 12,
	GameplayBones_Count = 13,
};

enum WarnTarget
{
	wtWarnSoldierAndVehicle = 0,
	wtWarnSoldier = 1,
	wtWarnVehicle = 2,
	wtWarnNone = 3,
};

enum UIBlendMode
{
	UIBlendMode_Solid = 0,
	UIBlendMode_AlphaBlend = 1,
	UIBlendMode_Lighten = 2,
	UIBlendMode_Darken = 3,
	UIBlendMode_Add = 4,
	UIBlendMode_Subtract = 5,
	UIBlendMode_Count = 6,
	UIBlendMode_Passthrough = 7,
};

enum BFUISnapLayoutMode
{
	BFUISnapLayoutMode_Default = 0,
	BFUISnapLayoutMode_ScreenEdge = 1,
	BFUISnapLayoutMode_SafeEdge = 2,
	BFUISnapLayoutMode_CenteredLayoutEdge = 3,
	BFUISnapLayoutMode_ParentEdge = 4,
};

enum UILayoutMode
{
	UILayoutMode_AnchorOffset = 0,
	UILayoutMode_PositionExpansion = 1,
};

enum BlueprintPersistenceSetting
{
	BlueprintPersistenceSetting_InheritFromParent = 0,
	BlueprintPersistenceSetting_SavedWhenInMemory = 1,
	BlueprintPersistenceSetting_AlwaysSaved = 2,
	BlueprintPersistenceSetting_NeverSaved = 3,
};

enum WeaponClassification
{
	WCNone = 0,
	WCPrimary = 1,
	WCSecondary = 2,
};

enum TimeDeltaType
{
	TimeDeltaType_None = 0,
	TimeDeltaType_Player = 1,
	TimeDeltaType_World = 2,
	TimeDeltaType_Extra1 = 3,
	TimeDeltaType_Extra2 = 4,
	TimeDeltaType_Extra3 = 5,
	TimeDeltaType_Extra4 = 6,
	TimeDeltaType_Extra5 = 7,
	TimeDeltaType_Count = 8,
};

enum FloatCurveType
{
	FloatCurveType_Spline = 0,
	FloatCurveType_Smooth = 1,
	FloatCurveType_Linear = 2,
	FloatCurveType_NearestValue = 3,
};

enum AntHitReactionWeaponType
{
	AntHitReactionWeaponType_Pistol = 0,
	AntHitReactionWeaponType_SMG = 1,
	AntHitReactionWeaponType_AssaultRifle = 2,
	AntHitReactionWeaponType_LMG = 3,
	AntHitReactionWeaponType_Shotgun = 4,
	AntHitReactionWeaponType_SniperRifle = 5,
	AntHitReactionWeaponType_Explosion = 6,
	AntHitReactionWeaponType_Flashbang = 7,
	AntHitReactionWeaponType_Melee = 8,
};

enum Realm
{
	Realm_Client = 0,
	Realm_Server = 1,
	Realm_ClientAndServer = 2,
	Realm_None = 3,
	Realm_Pipeline = 4,
};

enum CharacterPoseType
{
	CharacterPoseType_Stand = 0,
	CharacterPoseType_Crouch = 1,
	CharacterPoseType_Prone = 2,
	CharacterPoseTypeCount = 3,
};

enum AntEntryIdEnum
{
	AntEntryIdEnum_Humvee_Driver = 0,
	AntEntryIdEnum_Humvee_Gunner = 1,
	AntEntryIdEnum_Humvee_PassengerRearLeft = 2,
	AntEntryIdEnum_Humvee_PassengerRearRight = 3,
	AntEntryIdEnum_F16_Pilot = 4,
	AntEntryIdEnum_SU37_Pilot = 5,
	AntEntryIdEnum_AH6_Pilot = 6,
	AntEntryIdEnum_AH64_Pilot = 7,
	AntEntryIdEnum_AH64_Gunner = 8,
	AntEntryIdEnum_Vodnik_Driver = 9,
	AntEntryIdEnum_Vodnik_Gunner = 10,
	AntEntryIdEnum_Humvee_PassengerFrontRight = 11,
	AntEntryIdEnum_Vodnik_PassengerFrontRight = 12,
	AntEntryIdEnum_Vodnik_PassengerRearRight = 13,
	AntEntryIdEnum_Vodnik_PassengerRearLeft = 14,
	AntEntryIdEnum_VadsGunner = 15,
	AntEntryIdEnum_F18F_Pilot = 16,
	AntEntryIdEnum_F18F_Navigator = 17,
	AntEntryIdEnum_M1A2_Gunner = 18,
	AntEntryIdEnum_M1A2_Driver = 19,
};

enum CharacterPhysicsCollisionBehavior
{
	CPCB_KillWhenHitByEnemy = 0,
	CPCB_KillWhenHitByEnemyLeaveWhenHitByFriendly = 1,
	CPCB_DoNothing = 2,
};

enum EntryClass
{
	ecPrimary = 0,
	ecSecondary = 1,
};

enum EntrySeatType
{
	EST_Driver = 0,
	EST_Gunner = 1,
	EST_Passenger = 2,
};

enum EntrySpottingSettings
{
	ESSDefault = 0,
	ESSSendAndReceive = 1,
	ESSReceive = 2,
	ESSCount = 3,
};

enum CaptureTypeEnum
{
	CaptureTypeEnum_CenterPoint = 0,
	CaptureTypeEnum_BoundingBox = 1,
	CaptureTypeEnum_CenterPointUnlimitedHeight = 2,
	CaptureTypeEnum_UnlimitedHeight = 2,
	CaptureTypeEnum_BoundingBoxUnlimitedHeight = 3,
};

enum DamageEntityType
{
	DamageEntityType_Soldier = 0,
	DamageEntityType_Vehicle = 1,
	DamageEntityType_Plane = 2,
	DamageEntityType_Invalid = 3,
	DamageEntityType_Count = 4,
};

enum VehicleSpawnerType
{
	VehicleSpawnerType_NoSpawner = 0,
	VehicleSpawnerType_BasicSpawner = 1,
	VehicleSpawnerType_TeamSpawner = 2,
};

enum AIVehicleSoundCategory
{
	AIVehicleSoundCategory_Normal = 0,
	AIVehicleSoundCategory_Quiet = 1,
};

enum TeamId
{
	TeamNeutral = 0,
	Team1 = 1,
	Team2 = 2,
	Team3 = 3,
	Team4 = 4,
	Team5 = 5,
	Team6 = 6,
	Team7 = 7,
	Team8 = 8,
	Team9 = 9,
	Team10 = 10,
	Team11 = 11,
	Team12 = 12,
	Team13 = 13,
	Team14 = 14,
	Team15 = 15,
	Team16 = 16,
	TeamIdCount = 17,
};

enum VehicleCategory
{
	VehicleCategory_Land = 0,
	VehicleCategory_Air = 1,
	VehicleCategory_Horse = 2,
	VehicleCategory_Count = 3,
};

enum UnlockSpawnType
{
	SpawnLock_Ignore = 0,
	SpawnLock_Locked = 1,
	SpawnLock_Unlocked = 2,
};

enum WeaponClassification
{
	WCNone = 0,
	WCPrimary = 1,
	WCSecondary = 2,
};

enum TimeDeltaType
{
	TimeDeltaType_None = 0,
	TimeDeltaType_Player = 1,
	TimeDeltaType_World = 2,
	TimeDeltaType_Extra1 = 3,
	TimeDeltaType_Extra2 = 4,
	TimeDeltaType_Extra3 = 5,
	TimeDeltaType_Extra4 = 6,
	TimeDeltaType_Extra5 = 7,
	TimeDeltaType_Count = 8,
};

enum FloatCurveType
{
	FloatCurveType_Spline = 0,
	FloatCurveType_Smooth = 1,
	FloatCurveType_Linear = 2,
	FloatCurveType_NearestValue = 3,
};

enum AntHitReactionWeaponType
{
	AntHitReactionWeaponType_Pistol = 0,
	AntHitReactionWeaponType_SMG = 1,
	AntHitReactionWeaponType_AssaultRifle = 2,
	AntHitReactionWeaponType_LMG = 3,
	AntHitReactionWeaponType_Shotgun = 4,
	AntHitReactionWeaponType_SniperRifle = 5,
	AntHitReactionWeaponType_Explosion = 6,
	AntHitReactionWeaponType_Flashbang = 7,
	AntHitReactionWeaponType_Melee = 8,
};

enum Realm
{
	Realm_Client = 0,
	Realm_Server = 1,
	Realm_ClientAndServer = 2,
	Realm_None = 3,
	Realm_Pipeline = 4,
};

enum CharacterPoseType
{
	CharacterPoseType_Stand = 0,
	CharacterPoseType_Crouch = 1,
	CharacterPoseType_Prone = 2,
	CharacterPoseTypeCount = 3,
};

enum AntEntryIdEnum
{
	AntEntryIdEnum_Humvee_Driver = 0,
	AntEntryIdEnum_Humvee_Gunner = 1,
	AntEntryIdEnum_Humvee_PassengerRearLeft = 2,
	AntEntryIdEnum_Humvee_PassengerRearRight = 3,
	AntEntryIdEnum_F16_Pilot = 4,
	AntEntryIdEnum_SU37_Pilot = 5,
	AntEntryIdEnum_AH6_Pilot = 6,
	AntEntryIdEnum_AH64_Pilot = 7,
	AntEntryIdEnum_AH64_Gunner = 8,
	AntEntryIdEnum_Vodnik_Driver = 9,
	AntEntryIdEnum_Vodnik_Gunner = 10,
	AntEntryIdEnum_Humvee_PassengerFrontRight = 11,
	AntEntryIdEnum_Vodnik_PassengerFrontRight = 12,
	AntEntryIdEnum_Vodnik_PassengerRearRight = 13,
	AntEntryIdEnum_Vodnik_PassengerRearLeft = 14,
	AntEntryIdEnum_VadsGunner = 15,
	AntEntryIdEnum_F18F_Pilot = 16,
	AntEntryIdEnum_F18F_Navigator = 17,
	AntEntryIdEnum_M1A2_Gunner = 18,
	AntEntryIdEnum_M1A2_Driver = 19,
};

enum CharacterPhysicsCollisionBehavior
{
	CPCB_KillWhenHitByEnemy = 0,
	CPCB_KillWhenHitByEnemyLeaveWhenHitByFriendly = 1,
	CPCB_DoNothing = 2,
};

enum EntryClass
{
	ecPrimary = 0,
	ecSecondary = 1,
};

enum EntrySeatType
{
	EST_Driver = 0,
	EST_Gunner = 1,
	EST_Passenger = 2,
};

enum EntrySpottingSettings
{
	ESSDefault = 0,
	ESSSendAndReceive = 1,
	ESSReceive = 2,
	ESSCount = 3,
};

enum CaptureTypeEnum
{
	CaptureTypeEnum_CenterPoint = 0,
	CaptureTypeEnum_BoundingBox = 1,
	CaptureTypeEnum_CenterPointUnlimitedHeight = 2,
	CaptureTypeEnum_UnlimitedHeight = 2,
	CaptureTypeEnum_BoundingBoxUnlimitedHeight = 3,
};

enum DamageEntityType
{
	DamageEntityType_Soldier = 0,
	DamageEntityType_Vehicle = 1,
	DamageEntityType_Plane = 2,
	DamageEntityType_Invalid = 3,
	DamageEntityType_Count = 4,
};

enum VehicleSpawnerType
{
	VehicleSpawnerType_NoSpawner = 0,
	VehicleSpawnerType_BasicSpawner = 1,
	VehicleSpawnerType_TeamSpawner = 2,
};

enum AIVehicleSoundCategory
{
	AIVehicleSoundCategory_Normal = 0,
	AIVehicleSoundCategory_Quiet = 1,
};

enum TeamId
{
	TeamNeutral = 0,
	Team1 = 1,
	Team2 = 2,
	Team3 = 3,
	Team4 = 4,
	Team5 = 5,
	Team6 = 6,
	Team7 = 7,
	Team8 = 8,
	Team9 = 9,
	Team10 = 10,
	Team11 = 11,
	Team12 = 12,
	Team13 = 13,
	Team14 = 14,
	Team15 = 15,
	Team16 = 16,
	TeamIdCount = 17,
};

enum VehicleCategory
{
	VehicleCategory_Land = 0,
	VehicleCategory_Air = 1,
	VehicleCategory_Horse = 2,
	VehicleCategory_Count = 3,
};

enum UIHudIcon
{
	UIHudIcon_Unused = 0,
	UIHudIcon_LocalPlayer = 1,
	UIHudIcon_LocalDirection = 2,
	UIHudIcon_FriendlyPlayer = 3,
	UIHudIcon_EnemyPlayer = 4,
	UIHudIcon_NeutralPlayer = 5,
	UIHudIcon_SquadMember = 6,
	UIHudIcon_SquadLeader = 7,
	UIHudIcon_SquadLeaderTargeted = 8,
	UIHudIcon_Vehicle = 9,
	UIHudIcon_PrimaryObjective = 10,
	UIHudIcon_PrimaryObjectiveBlink = 11,
	UIHudIcon_SecondaryObjective = 12,
	UIHudIcon_AreaMapMarker = 13,
	UIHudIcon_ObjectiveDestroy = 14,
	UIHudIcon_ObjectiveScout = 15,
	UIHudIcon_ObjectiveDefend = 16,
	UIHudIcon_ObjectiveMoveTo = 17,
	UIHudIcon_ObjectiveAttack = 18,
	UIHudIcon_ObjectiveFollow = 19,
	UIHudIcon_ObjectiveGeneral = 20,
	UIHudICon_UAV = 21,
	UIHudIcon_AmmoCrate = 22,
	UIHudIcon_MedicBag = 23,
	UIHudIcon_C4 = 24,
	UIHudIcon_ATMine = 25,
	UIHudIcon_StationaryWeapon = 26,
	UIHudIcon_North = 27,
	UIHudIcon_South = 28,
	UIHudIcon_West = 29,
	UIHudIcon_East = 30,
	UIHudIcon_NeutralFlag = 31,
	UIHudIcon_FriendlyFlag = 32,
	UIHudIcon_EnemyFlag = 33,
	UIHudIcon_FriendlyBase = 34,
	UIHudIcon_EnemyBase = 35,
	UIHudIcon_Team1Flag = 36,
	UIHudIcon_Team2Flag = 37,
	UIHudIcon_NeutralFlagLit = 38,
	UIHudIcon_FriendlyFlagLit = 39,
	UIHudIcon_EnemyFlagLit = 40,
	UIHudIcon_SelectableSpawnPoint = 41,
	UIHudIcon_SelectedSpawnPoint = 42,
	UIHudIcon_NonSelectableSpawnPoint = 43,
	UIHudIcon_FriendlyFlagUnderAttack = 44,
	UIHudIcon_EnemyFlagUnderAttack = 45,
	UIHudIcon_OrderAttack = 46,
	UIHudIcon_OrderDefend = 47,
	UIHudIcon_OrderAttackObserved = 48,
	UIHudIcon_OrderDefendObserved = 49,
	UIHudIcon_Boat = 50,
	UIHudIcon_Car = 51,
	UIHudIcon_Jeep = 52,
	UIHudIcon_HeliAttack = 53,
	UIHudIcon_HeliScout = 54,
	UIHudIcon_Tank = 55,
	UIHudIcon_TankIFV = 56,
	UIHudIcon_TankArty = 57,
	UIHudIcon_TankAA = 58,
	UIHudIcon_TankAT = 59,
	UIHudIcon_Jet = 60,
	UIHudIcon_JetBomber = 61,
	UIHudIcon_Stationary = 62,
	UIHudIcon_Strategic = 63,
	UIHudIcon_MotionRadarSweep = 64,
	UIHudIcon_NeedBackup = 65,
	UIHudIcon_NeedAmmo = 66,
	UIHudIcon_NeedMedic = 67,
	UIHudIcon_NeedPickup = 68,
	UIHudIcon_NeedRepair = 69,
	UIHudIcon_KitAssault = 70,
	UIHudIcon_KitDemolition = 71,
	UIHudIcon_KitRecon = 72,
	UIHudIcon_KitSpecialist = 73,
	UIHudIcon_KitSupport = 74,
	UIHudIcon_KitMedic = 75,
	UIHudIcon_KitEngineer = 76,
	UIHudIcon_KitPickupAssault = 77,
	UIHudIcon_KitPickupDemolition = 78,
	UIHudIcon_KitPickupRecon = 79,
	UIHudIcon_KitPickupSpecialist = 80,
	UIHudIcon_KitPickupSupport = 81,
	UIHudIcon_KitPickupMedic = 82,
	UIHudIcon_KitPickupEngineer = 83,
	UIHudIcon_Pickup = 84,
	UIHudIcon_TaggedVehicle = 85,
	UIHudIcon_LaserPaintedVehicle = 86,
	UIHudIcon_HeliTargetEnemy = 87,
	UIHudIcon_HeliTargetFriendly = 88,
	UIHudIcon_ArtilleryTarget = 89,
	UIHudIcon_NeutralFlagAttacker = 90,
	UIHudIcon_FriendlyFlagAttacker = 91,
	UIHudIcon_EnemyFlagAttacker = 92,
	UIHudIcon_LaserTarget = 93,
	UIHudIcon_ObjectiveAttacker = 94,
	UIHudIcon_ObjectiveDefender = 95,
	UIHudIcon_HealthbarBackground = 96,
	UIHudIcon_Healthbar = 97,
	UIHudIcon_RadarSweepComponent = 98,
	UIHudIcon_Blank = 99,
	UIHudIcon_LocalPlayerBigIcon = 100,
	UIHudIcon_LocalPlayerOutOfMap = 101,
	UIHudIcon_PrimaryObjectiveLarge = 102,
	UIHudIcon_TargetUnlocked = 103,
	UIHudIcon_TargetLocked = 104,
	UIHudIcon_TargetLocking = 105,
	UIHudIcon_ArtilleryStrikeNametag = 106,
	UIHudIcon_ArtilleryStrikeMinimap = 107,
	UIHudIcon_CapturePointContested = 108,
	UIHudIcon_CapturePointDefended = 109,
	UIHudIcon_RoundBar = 110,
	UIHudIcon_RoundBarBg = 111,
	UIHudIcon_RoundBarBgPlate = 112,
	UIHudIcon_SnapOvalArrow = 113,
	UIHudIcon_SquadleaderBg = 114,
	UIHudIcon_VehicleBg = 115,
	UIHudIcon_NonTakeableControlPoint = 116,
	UIHudIcon_SpottedPosition = 117,
	UIHudIcon_Grenade = 118,
	UIHudIcon_Revive = 119,
	UIHudIcon_Repair = 120,
	UIHudIcon_Interact = 121,
	UIHudIcon_Voip = 122,
	UIHudIcon_Claymore = 123,
	UIHudIcon_EodBot = 124,
	UIHudIcon_Explosive = 125,
	UIHudIcon_LaserDesignator = 126,
	UIHudIcon_Mav = 127,
	UIHudIcon_Mortar = 128,
	UIHudIcon_RadioBeacon = 129,
	UIHudIcon_Ugs = 130,
	UIHudIcon_PercetageBarMiddle = 131,
	UIHudIcon_PercetageBarEdge = 132,
	UIHudIcon_PercentageBarBackground = 133,
	UIHudIcon_TankLC = 134,
	UIHudIcon_HeliTrans = 135,
	UIHudIcon_StaticAT = 136,
	UIHudIcon_StaticAA = 137,
	UIHudIcon_SprintBoost = 138,
	UIHudIcon_AmmoBoost = 139,
	UIHudIcon_ExplosiveBoost = 140,
	UIHudIcon_ExplosiveResistBoost = 141,
	UIHudIcon_SuppressionBoost = 142,
	UIHudIcon_SuppressionResistBoost = 143,
	UIHudIcon_GrenadeBoost = 144,
	UIHudIcon_HealSpeedBoost = 145,
	UIHudIcon_NeedAmmoHighlight = 146,
	UIHudIcon_NeedMedicHighlight = 147,
	UIHudIcon_NeedRepairHighlight = 148,
	UIHudIcon_NeedPickupHighlight = 149,
	UIHudIcon_PlayerDead = 150,
	UIHudIcon_Player = 151,
	UIHudIcon_Flag = 152,
	UIHudIcon_Base = 153,
	UIHudIcon_ObjectiveNeutralBomb = 154,
	UIHudIcon_ObjectiveFriendlyBomb = 155,
	UIHudIcon_ObjectiveEnemyBomb = 156,
	UIHudIcon_ObjectiveEnemyHVT = 157,
	UIHudIcon_ObjectiveFriendlyHVT = 158,
	UIHudIcon_Count = 159,
};

enum MinimapZoomLevelEnum
{
	MinimapZoomLevel_OnFoot = 0,
	MinimapZoomLevel_Vehicle = 1,
	MinimapZoomLevel_Flight = 2,
};

enum GameplayBones
{
	GameplayBones_UndefinedBone = -1,
	GameplayBones_RootBone = 0,
	GameplayBones_RootMeshBone = 1,
	GameplayBones_ConnectBone = 2,
	GameplayBones_HeadBone = 3,
	GameplayBones_CameraBone = 4,
	GameplayBones_AimBone = 5,
	GameplayBones_WeaponBone = 6,
	GameplayBones_WeaponAux1Bone = 7,
	GameplayBones_LeftArmBone = 8,
	GameplayBones_LeftToeBone = 9,
	GameplayBones_RightToeBone = 10,
	GameplayBones_LeftFootBone = 11,
	GameplayBones_RightFootBone = 12,
	GameplayBones_Count = 13,
};

enum WarnTarget
{
	wtWarnSoldierAndVehicle = 0,
	wtWarnSoldier = 1,
	wtWarnVehicle = 2,
	wtWarnNone = 3,
};

enum SubRealm
{
	SubRealm_All = 0,
	SubRealm_LocalPlayer = 1,
	SubRealm_RemotePlayer = 2,
};

enum AnimationControlModeEnum
{
	AnimationControlModeEnum_PlaceTrajectoryAtObject = 0,
	AnimationControlModeEnum_PlaceObjectAtTrajectory = 1,
	AnimationControlModeEnum_DisconnectTrajectoryAndObject = 2,
};

enum JointOutputModeEnum
{
	JointOutputModeEnum_NoOutput = 0,
	JointOutputModeEnum_AllJoints = 1,
	JointOutputModeEnum_GameplayBones = 2,
};

enum UnlockEntityLogic
{
	UnlockEntityLogic_AND = 0,
	UnlockEntityLogic_OR = 1,
};

enum UnlockEntityPlayerQueryType
{
	UnlockEntityPlayerQueryType_ActiveWeaponUnlocks = 0,
	UnlockEntityPlayerQueryType_AllWeaponUnlocks = 1,
	UnlockEntityPlayerQueryType_PlayerUnlocks = 2,
	UnlockEntityPlayerQueryType_UnlockedForPlayer = 3,
};

enum EntryEnterRestriction
{
	EntryEnterRestriction_NoRestriction = 0,
	EntryEnterRestriction_OnlyPrimaryEntry = 1,
};

enum LocalPlayerId
{
	LocalPlayerId_0 = 0,
	LocalPlayerId_1 = 1,
	LocalPlayerId_2 = 2,
	LocalPlayerId_3 = 3,
	LocalPlayerId_4 = 4,
	LocalPlayerId_5 = 5,
	LocalPlayerId_6 = 6,
	LocalPlayerId_7 = 7,
	LocalPlayerId_Invalid = 255,
};

enum StreamRealm
{
	StreamRealm_None = 0,
	StreamRealm_Client = 1,
	StreamRealm_Both = 2,
};

enum RadiosityTypeOverride
{
	RadiosityTypeOverride_None = 0,
	RadiosityTypeOverride_Dynamic = 1,
	RadiosityTypeOverride_LightProbe = 2,
	RadiosityTypeOverride_Static = 3,
	RadiosityTypeOverride_TerrainProjected = 4,
};

enum RenderingOverride
{
	RenderingOverride_Inherit = 0,
	RenderingOverride_Enable = 1,
	RenderingOverride_Disable = 2,
	RenderingOverride_Legacy = 3,
};

enum InteractionEntityType
{
	IET_None = 0,
	IET_RushCrateArm = 1,
	IET_RushCrateDisarm = 2,
	IET_ObliterationDropOffArm = 3,
	IET_CTFFlag = 4,
	IET_DoorBarge = 5,
};

enum BlinkType
{
	BTHold = 0,
	BTBlink = 1,
	BTCount = 2,
};

enum CharacterStateType
{
	CharacterStateType_OnGround = 0,
	CharacterStateType_Jumping = 1,
	CharacterStateType_InAir = 2,
	CharacterStateType_Climbing = 3,
	CharacterStateType_Falling = 4,
	CharacterStateType_User_0 = 5,
	CharacterStateType_Parachute = 5,
	CharacterStateType_User_1 = 6,
	CharacterStateType_Swimming = 6,
	CharacterStateType_User_2 = 7,
	CharacterStateType_AnimationControlled = 7,
	CharacterStateType_User_3 = 8,
	CharacterStateType_Sliding = 8,
	CharacterStateType_User_4 = 9,
	CharacterStateType_User_5 = 10,
	CharacterStateType_StateCount = 11,
};

enum RigidBodyCollisionLayer
{
	RigidBodyCollisionLayer_Invalid = 0,
	RigidBodyCollisionLayer_StaticLayer = 1,
	RigidBodyCollisionLayer_DynamicLayer = 2,
	RigidBodyCollisionLayer_PlayerCollisionLayer = 3,
	RigidBodyCollisionLayer_AICollisionLayer = 4,
	RigidBodyCollisionLayer_KeyframeLayer = 5,
	RigidBodyCollisionLayer_DebrisLayer = 6,
	RigidBodyCollisionLayer_FastDebrisLayer = 7,
	RigidBodyCollisionLayer_OnlyStaticCollisionLayer = 8,
	RigidBodyCollisionLayer_RagdollLayer = 9,
	RigidBodyCollisionLayer_NoCollisionLayer = 10,
	RigidBodyCollisionLayer_WaterLayer = 11,
	RigidBodyCollisionLayer_BangerLayer = 12,
	RigidBodyCollisionLayer_NoVehicleCollisionLayer = 13,
	RigidBodyCollisionLayer_CharacterLayer = 14,
	RigidBodyCollisionLayer_DynamicNoCharacterCollisionLayer = 15,
	RigidBodyCollisionLayer_PredictedVehicleLayer = 16,
	RigidBodyCollisionLayer_TerrainLayer = 17,
	RigidBodyCollisionLayer_OnlyTerrainCollionLayer = 18,
	RigidBodyCollisionLayer_CharacterCollisionGeometryLayer = 19,
	RigidBodyCollisionLayer_AiCollisionBodyLayer = 20,
	RigidBodyCollisionLayer_CameraCollisionLayer = 21,
	RigidBodyCollisionLayer_OnlyStaticCameraCollisionLayer = 22,
	RigidBodyCollisionLayer_KeyframedCollisionBodyLayer = 23,
	RigidBodyCollisionLayer_VehicleLayer = 24,
	RigidBodyCollisionLayer_VehicleAndCharacterCollisionLayer = 25,
	RigidBodyCollisionLayer_VehicleUsingSimpleTerrainLayer = 26,
	RigidBodyCollisionLayer_SimpleTerrainLayer = 27,
	RigidBodyCollisionLayer_OnlyStaticAndTerrainLayer = 28,
	RigidBodyCollisionLayer_NoSpectatorStaticCollisionLayer = 29,
	RigidBodyCollisionLayer_SpectatorCameraCollisionLayer = 30,
	RigidBodyCollisionLayer_NoWaterCollisionLayer = 31,
	RigidBodyCollisionLayer_Size = 32,
};

enum PersonViewMode
{
	PersonViewMode_FirstPerson = 0,
	PersonViewMode_ThirdPerson = 1,
};

enum PlayerSpawnType
{
	PlayerSpawnType_HumanPlayer = 0,
	PlayerSpawnType_AiPlayer = 1,
	PlayerSpawnType_Actor = 2,
	PlayerSpawnType_BrainAI = 3,
	PlayerSpawnType_Ai2Player = 300,
};

enum FiringWeaponClass
{
	WeaponClass_AssaultRifle = 0,
	WeaponClass_MachineGun = 1,
	WeaponClass_Pistol = 2,
	WeaponClass_SniperRifle = 3,
	WeaponClass_SMG = 4,
};

enum VoPrimaryFireType
{
	VoPrimaryFireType_SMG = -5,
	VoPrimaryFireType_SniperRifle = -4,
	VoPrimaryFireType_Pistol = -3,
	VoPrimaryFireType_MachineGun = -2,
	VoPrimaryFireType_AssaultRifle = -1,
};

enum SustainFiringFireStyle
{
	SustainFiringFireStyle_TrackTarget = 0,
	SustainFiringFireStyle_SweepArea = 1,
};

enum ValidAgainst
{
	ValidAgainst_Nothing = 0,
	ValidAgainst_Soldiers = 1,
	ValidAgainst_SoldiersAndUnshieldedVehicles = 2,
	ValidAgainst_UnshieldedVehicles = 3,
	ValidAgainst_ShieldedVehicles = 4,
	ValidAgainst_AllVehicles = 5,
	ValidAgainst_All = 6,
	ValidAgainst_HumanSoldiers = 7,
};

enum TargetPreference
{
	TargetPreference_Soldiers = 0,
	TargetPreference_Vehicles = 1,
};

enum LogFileCollisionMode
{
	LFCM_Overwrite = 0,
	LFCM_Rotate = 1,
	LFCM_TimeStamp = 2,
};

enum SKU
{
	WW = 0,
	EU = 1,
	US = 2,
	JPN = 3,
	ROA = 4,
	RU = 5,
	EN = 6,
};

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

enum DisplayDynamicRange
{
	DisplayDynamicRange_SDR = 0,
	DisplayDynamicRange_DolbyMaui = 1,
	DisplayDynamicRange_DolbyVision = 2,
	DisplayDynamicRange_LiveGrading = 3,
	DisplayDynamicRange_HDR10 = 4,
	DisplayDynamicRange_HDR10_Float = 5,
	DisplayDynamicRange_Auto = 6,
};

enum UISystemType
{
	UISystem_None = 0,
	UISystem_Standard = 1,
};

enum LanguageFormat
{
	LanguageFormat_English = 0,
	LanguageFormat_French = 1,
	LanguageFormat_German = 2,
	LanguageFormat_Spanish = 3,
	LanguageFormat_SpanishUSA = 4,
	LanguageFormat_SpanishMex = 5,
	LanguageFormat_Italian = 6,
	LanguageFormat_Japanese = 7,
	LanguageFormat_Russian = 8,
	LanguageFormat_Polish = 9,
	LanguageFormat_Dutch = 10,
	LanguageFormat_Portuguese = 11,
	LanguageFormat_TraditionalChinese = 12,
	LanguageFormat_Korean = 13,
	LanguageFormat_Czech = 14,
	LanguageFormat_BrazilianPortuguese = 15,
	LanguageFormat_ArabicSA = 16,
	LanguageFormat_Turkish = 17,
	LanguageFormat_WorstCase = 18,
	LanguageFormat_Count = 19,
	LanguageFormat_Undefined = 20,
};

enum FOVTransitionType
{
	FOVTransitionType_Linear = 0,
	FOVTransitionType_Smooth = 1,
	FOVTransitionType_Count = 2,
};

enum ProfileOptionsType
{
	GstAudio = 0,
	GstRender = 1,
	GstInput = 2,
	GstAI = 3,
	GstGameplay = 4,
	GstPlayerProfile = 5,
	GstPersistence = 6,
	GstBinary = 7,
	GstKeyBinding = 8,
	GstCustomization = 9,
	GstSpectator = 10,
	GstCount = 11,
};

enum ZoomLevelActivateEventType
{
	ZoomLevelActivateEventType_Disable = 0,
	ZoomLevelActivateEventType_Enable = 1,
	ZoomLevelActivateEventType_ToggleOnLightSwitch = 2,
};

enum VehicleMode
{
	VmIdle = 0,
	VmEntering = 1,
	VmEntered = 2,
	VmStarting = 3,
	VmStarted = 4,
	VmStopping = 5,
	VmLeaving = 6,
};

enum RigidBodyType
{
	RBTypeCollision = 0,
	RBTypeDetail = 1,
	RBTypeCharacter = 2,
	RBTypeRaycast = 3,
	RBTypeGroup = 4,
	RBTypeProxy = 5,
	RBTypeSize = 6,
};

enum RigidBodyMotionType
{
	RigidBodyMotionType_Invalid = 0,
	RigidBodyMotionType_Fixed = 1,
	RigidBodyMotionType_Keyframed = 2,
	RigidBodyMotionType_Dynamic = 3,
	RigidBodyMotionType_Size = 4,
};

enum RigidBodyQualityType
{
	RigidBodyQualityType_Fixed = 0,
	RigidBodyQualityType_Debris = 1,
	RigidBodyQualityType_Dynamic = 2,
	RigidBodyQualityType_NeighborWelding = 3,
	RigidBodyQualityType_MotionWelding = 4,
	RigidBodyQualityType_TriangleWelding = 5,
	RigidBodyQualityType_Critical = 6,
	RigidBodyQualityType_Vehicle = 7,
	RigidBodyQualityType_Character = 8,
	RigidBodyQualityType_Grenade = 9,
	RigidBodyQualityType_Projectile = 10,
	RigidBodyQualityType_Invalid = 11,
};

enum LodDistanceMethod
{
	LodDistanceMethod_BoundingSphere = 0,
	LodDistanceMethod_YAxis = 1,
	LodDistanceMethod_Count = 2,
};

enum EnlightenType
{
	EnlightenType_Dynamic = 0,
	EnlightenType_LightProbe = 1,
	EnlightenType_Static = 2,
	EnlightenType_Proxy = 3,
};

enum LocalPlayerViewId
{
	LocalPlayerViewId_RootView = 0,
	LocalPlayerViewId_Secondary = 1,
	LocalPlayerViewId_Custom1 = 2,
	LocalPlayerViewId_Custom2 = 3,
	LocalPlayerViewId_Custom3 = 4,
	LocalPlayerViewId_Custom4 = 5,
	LocalPlayerViewId_Count = 6,
};

enum WeaponClassification
{
	WCNone = 0,
	WCPrimary = 1,
	WCSecondary = 2,
};

enum TimeDeltaType
{
	TimeDeltaType_None = 0,
	TimeDeltaType_Player = 1,
	TimeDeltaType_World = 2,
	TimeDeltaType_Extra1 = 3,
	TimeDeltaType_Extra2 = 4,
	TimeDeltaType_Extra3 = 5,
	TimeDeltaType_Extra4 = 6,
	TimeDeltaType_Extra5 = 7,
	TimeDeltaType_Count = 8,
};

enum FloatCurveType
{
	FloatCurveType_Spline = 0,
	FloatCurveType_Smooth = 1,
	FloatCurveType_Linear = 2,
	FloatCurveType_NearestValue = 3,
};

enum AntHitReactionWeaponType
{
	AntHitReactionWeaponType_Pistol = 0,
	AntHitReactionWeaponType_SMG = 1,
	AntHitReactionWeaponType_AssaultRifle = 2,
	AntHitReactionWeaponType_LMG = 3,
	AntHitReactionWeaponType_Shotgun = 4,
	AntHitReactionWeaponType_SniperRifle = 5,
	AntHitReactionWeaponType_Explosion = 6,
	AntHitReactionWeaponType_Flashbang = 7,
	AntHitReactionWeaponType_Melee = 8,
};

enum Realm
{
	Realm_Client = 0,
	Realm_Server = 1,
	Realm_ClientAndServer = 2,
	Realm_None = 3,
	Realm_Pipeline = 4,
};

enum CharacterPoseType
{
	CharacterPoseType_Stand = 0,
	CharacterPoseType_Crouch = 1,
	CharacterPoseType_Prone = 2,
	CharacterPoseTypeCount = 3,
};

enum AntEntryIdEnum
{
	AntEntryIdEnum_Humvee_Driver = 0,
	AntEntryIdEnum_Humvee_Gunner = 1,
	AntEntryIdEnum_Humvee_PassengerRearLeft = 2,
	AntEntryIdEnum_Humvee_PassengerRearRight = 3,
	AntEntryIdEnum_F16_Pilot = 4,
	AntEntryIdEnum_SU37_Pilot = 5,
	AntEntryIdEnum_AH6_Pilot = 6,
	AntEntryIdEnum_AH64_Pilot = 7,
	AntEntryIdEnum_AH64_Gunner = 8,
	AntEntryIdEnum_Vodnik_Driver = 9,
	AntEntryIdEnum_Vodnik_Gunner = 10,
	AntEntryIdEnum_Humvee_PassengerFrontRight = 11,
	AntEntryIdEnum_Vodnik_PassengerFrontRight = 12,
	AntEntryIdEnum_Vodnik_PassengerRearRight = 13,
	AntEntryIdEnum_Vodnik_PassengerRearLeft = 14,
	AntEntryIdEnum_VadsGunner = 15,
	AntEntryIdEnum_F18F_Pilot = 16,
	AntEntryIdEnum_F18F_Navigator = 17,
	AntEntryIdEnum_M1A2_Gunner = 18,
	AntEntryIdEnum_M1A2_Driver = 19,
};

enum CharacterPhysicsCollisionBehavior
{
	CPCB_KillWhenHitByEnemy = 0,
	CPCB_KillWhenHitByEnemyLeaveWhenHitByFriendly = 1,
	CPCB_DoNothing = 2,
};

enum EntryClass
{
	ecPrimary = 0,
	ecSecondary = 1,
};

enum EntrySeatType
{
	EST_Driver = 0,
	EST_Gunner = 1,
	EST_Passenger = 2,
};

enum EntrySpottingSettings
{
	ESSDefault = 0,
	ESSSendAndReceive = 1,
	ESSReceive = 2,
	ESSCount = 3,
};

enum CaptureTypeEnum
{
	CaptureTypeEnum_CenterPoint = 0,
	CaptureTypeEnum_BoundingBox = 1,
	CaptureTypeEnum_CenterPointUnlimitedHeight = 2,
	CaptureTypeEnum_UnlimitedHeight = 2,
	CaptureTypeEnum_BoundingBoxUnlimitedHeight = 3,
};

enum DamageEntityType
{
	DamageEntityType_Soldier = 0,
	DamageEntityType_Vehicle = 1,
	DamageEntityType_Plane = 2,
	DamageEntityType_Invalid = 3,
	DamageEntityType_Count = 4,
};

enum VehicleSpawnerType
{
	VehicleSpawnerType_NoSpawner = 0,
	VehicleSpawnerType_BasicSpawner = 1,
	VehicleSpawnerType_TeamSpawner = 2,
};

enum AIVehicleSoundCategory
{
	AIVehicleSoundCategory_Normal = 0,
	AIVehicleSoundCategory_Quiet = 1,
};

enum TeamId
{
	TeamNeutral = 0,
	Team1 = 1,
	Team2 = 2,
	Team3 = 3,
	Team4 = 4,
	Team5 = 5,
	Team6 = 6,
	Team7 = 7,
	Team8 = 8,
	Team9 = 9,
	Team10 = 10,
	Team11 = 11,
	Team12 = 12,
	Team13 = 13,
	Team14 = 14,
	Team15 = 15,
	Team16 = 16,
	TeamIdCount = 17,
};

enum VehicleCategory
{
	VehicleCategory_Land = 0,
	VehicleCategory_Air = 1,
	VehicleCategory_Horse = 2,
	VehicleCategory_Count = 3,
};

enum UnlockSpawnType
{
	SpawnLock_Ignore = 0,
	SpawnLock_Locked = 1,
	SpawnLock_Unlocked = 2,
};

enum WeaponClassification
{
	WCNone = 0,
	WCPrimary = 1,
	WCSecondary = 2,
};

enum TimeDeltaType
{
	TimeDeltaType_None = 0,
	TimeDeltaType_Player = 1,
	TimeDeltaType_World = 2,
	TimeDeltaType_Extra1 = 3,
	TimeDeltaType_Extra2 = 4,
	TimeDeltaType_Extra3 = 5,
	TimeDeltaType_Extra4 = 6,
	TimeDeltaType_Extra5 = 7,
	TimeDeltaType_Count = 8,
};

enum FloatCurveType
{
	FloatCurveType_Spline = 0,
	FloatCurveType_Smooth = 1,
	FloatCurveType_Linear = 2,
	FloatCurveType_NearestValue = 3,
};

enum AntHitReactionWeaponType
{
	AntHitReactionWeaponType_Pistol = 0,
	AntHitReactionWeaponType_SMG = 1,
	AntHitReactionWeaponType_AssaultRifle = 2,
	AntHitReactionWeaponType_LMG = 3,
	AntHitReactionWeaponType_Shotgun = 4,
	AntHitReactionWeaponType_SniperRifle = 5,
	AntHitReactionWeaponType_Explosion = 6,
	AntHitReactionWeaponType_Flashbang = 7,
	AntHitReactionWeaponType_Melee = 8,
};

enum Realm
{
	Realm_Client = 0,
	Realm_Server = 1,
	Realm_ClientAndServer = 2,
	Realm_None = 3,
	Realm_Pipeline = 4,
};

enum CharacterPoseType
{
	CharacterPoseType_Stand = 0,
	CharacterPoseType_Crouch = 1,
	CharacterPoseType_Prone = 2,
	CharacterPoseTypeCount = 3,
};

enum AntEntryIdEnum
{
	AntEntryIdEnum_Humvee_Driver = 0,
	AntEntryIdEnum_Humvee_Gunner = 1,
	AntEntryIdEnum_Humvee_PassengerRearLeft = 2,
	AntEntryIdEnum_Humvee_PassengerRearRight = 3,
	AntEntryIdEnum_F16_Pilot = 4,
	AntEntryIdEnum_SU37_Pilot = 5,
	AntEntryIdEnum_AH6_Pilot = 6,
	AntEntryIdEnum_AH64_Pilot = 7,
	AntEntryIdEnum_AH64_Gunner = 8,
	AntEntryIdEnum_Vodnik_Driver = 9,
	AntEntryIdEnum_Vodnik_Gunner = 10,
	AntEntryIdEnum_Humvee_PassengerFrontRight = 11,
	AntEntryIdEnum_Vodnik_PassengerFrontRight = 12,
	AntEntryIdEnum_Vodnik_PassengerRearRight = 13,
	AntEntryIdEnum_Vodnik_PassengerRearLeft = 14,
	AntEntryIdEnum_VadsGunner = 15,
	AntEntryIdEnum_F18F_Pilot = 16,
	AntEntryIdEnum_F18F_Navigator = 17,
	AntEntryIdEnum_M1A2_Gunner = 18,
	AntEntryIdEnum_M1A2_Driver = 19,
};

enum CharacterPhysicsCollisionBehavior
{
	CPCB_KillWhenHitByEnemy = 0,
	CPCB_KillWhenHitByEnemyLeaveWhenHitByFriendly = 1,
	CPCB_DoNothing = 2,
};

enum EntryClass
{
	ecPrimary = 0,
	ecSecondary = 1,
};

enum EntrySeatType
{
	EST_Driver = 0,
	EST_Gunner = 1,
	EST_Passenger = 2,
};

enum EntrySpottingSettings
{
	ESSDefault = 0,
	ESSSendAndReceive = 1,
	ESSReceive = 2,
	ESSCount = 3,
};

enum CaptureTypeEnum
{
	CaptureTypeEnum_CenterPoint = 0,
	CaptureTypeEnum_BoundingBox = 1,
	CaptureTypeEnum_CenterPointUnlimitedHeight = 2,
	CaptureTypeEnum_UnlimitedHeight = 2,
	CaptureTypeEnum_BoundingBoxUnlimitedHeight = 3,
};

enum DamageEntityType
{
	DamageEntityType_Soldier = 0,
	DamageEntityType_Vehicle = 1,
	DamageEntityType_Plane = 2,
	DamageEntityType_Invalid = 3,
	DamageEntityType_Count = 4,
};

enum VehicleSpawnerType
{
	VehicleSpawnerType_NoSpawner = 0,
	VehicleSpawnerType_BasicSpawner = 1,
	VehicleSpawnerType_TeamSpawner = 2,
};

enum AIVehicleSoundCategory
{
	AIVehicleSoundCategory_Normal = 0,
	AIVehicleSoundCategory_Quiet = 1,
};

enum TeamId
{
	TeamNeutral = 0,
	Team1 = 1,
	Team2 = 2,
	Team3 = 3,
	Team4 = 4,
	Team5 = 5,
	Team6 = 6,
	Team7 = 7,
	Team8 = 8,
	Team9 = 9,
	Team10 = 10,
	Team11 = 11,
	Team12 = 12,
	Team13 = 13,
	Team14 = 14,
	Team15 = 15,
	Team16 = 16,
	TeamIdCount = 17,
};

enum VehicleCategory
{
	VehicleCategory_Land = 0,
	VehicleCategory_Air = 1,
	VehicleCategory_Horse = 2,
	VehicleCategory_Count = 3,
};

enum UIHudIcon
{
	UIHudIcon_Unused = 0,
	UIHudIcon_LocalPlayer = 1,
	UIHudIcon_LocalDirection = 2,
	UIHudIcon_FriendlyPlayer = 3,
	UIHudIcon_EnemyPlayer = 4,
	UIHudIcon_NeutralPlayer = 5,
	UIHudIcon_SquadMember = 6,
	UIHudIcon_SquadLeader = 7,
	UIHudIcon_SquadLeaderTargeted = 8,
	UIHudIcon_Vehicle = 9,
	UIHudIcon_PrimaryObjective = 10,
	UIHudIcon_PrimaryObjectiveBlink = 11,
	UIHudIcon_SecondaryObjective = 12,
	UIHudIcon_AreaMapMarker = 13,
	UIHudIcon_ObjectiveDestroy = 14,
	UIHudIcon_ObjectiveScout = 15,
	UIHudIcon_ObjectiveDefend = 16,
	UIHudIcon_ObjectiveMoveTo = 17,
	UIHudIcon_ObjectiveAttack = 18,
	UIHudIcon_ObjectiveFollow = 19,
	UIHudIcon_ObjectiveGeneral = 20,
	UIHudICon_UAV = 21,
	UIHudIcon_AmmoCrate = 22,
	UIHudIcon_MedicBag = 23,
	UIHudIcon_C4 = 24,
	UIHudIcon_ATMine = 25,
	UIHudIcon_StationaryWeapon = 26,
	UIHudIcon_North = 27,
	UIHudIcon_South = 28,
	UIHudIcon_West = 29,
	UIHudIcon_East = 30,
	UIHudIcon_NeutralFlag = 31,
	UIHudIcon_FriendlyFlag = 32,
	UIHudIcon_EnemyFlag = 33,
	UIHudIcon_FriendlyBase = 34,
	UIHudIcon_EnemyBase = 35,
	UIHudIcon_Team1Flag = 36,
	UIHudIcon_Team2Flag = 37,
	UIHudIcon_NeutralFlagLit = 38,
	UIHudIcon_FriendlyFlagLit = 39,
	UIHudIcon_EnemyFlagLit = 40,
	UIHudIcon_SelectableSpawnPoint = 41,
	UIHudIcon_SelectedSpawnPoint = 42,
	UIHudIcon_NonSelectableSpawnPoint = 43,
	UIHudIcon_FriendlyFlagUnderAttack = 44,
	UIHudIcon_EnemyFlagUnderAttack = 45,
	UIHudIcon_OrderAttack = 46,
	UIHudIcon_OrderDefend = 47,
	UIHudIcon_OrderAttackObserved = 48,
	UIHudIcon_OrderDefendObserved = 49,
	UIHudIcon_Boat = 50,
	UIHudIcon_Car = 51,
	UIHudIcon_Jeep = 52,
	UIHudIcon_HeliAttack = 53,
	UIHudIcon_HeliScout = 54,
	UIHudIcon_Tank = 55,
	UIHudIcon_TankIFV = 56,
	UIHudIcon_TankArty = 57,
	UIHudIcon_TankAA = 58,
	UIHudIcon_TankAT = 59,
	UIHudIcon_Jet = 60,
	UIHudIcon_JetBomber = 61,
	UIHudIcon_Stationary = 62,
	UIHudIcon_Strategic = 63,
	UIHudIcon_MotionRadarSweep = 64,
	UIHudIcon_NeedBackup = 65,
	UIHudIcon_NeedAmmo = 66,
	UIHudIcon_NeedMedic = 67,
	UIHudIcon_NeedPickup = 68,
	UIHudIcon_NeedRepair = 69,
	UIHudIcon_KitAssault = 70,
	UIHudIcon_KitDemolition = 71,
	UIHudIcon_KitRecon = 72,
	UIHudIcon_KitSpecialist = 73,
	UIHudIcon_KitSupport = 74,
	UIHudIcon_KitMedic = 75,
	UIHudIcon_KitEngineer = 76,
	UIHudIcon_KitPickupAssault = 77,
	UIHudIcon_KitPickupDemolition = 78,
	UIHudIcon_KitPickupRecon = 79,
	UIHudIcon_KitPickupSpecialist = 80,
	UIHudIcon_KitPickupSupport = 81,
	UIHudIcon_KitPickupMedic = 82,
	UIHudIcon_KitPickupEngineer = 83,
	UIHudIcon_Pickup = 84,
	UIHudIcon_TaggedVehicle = 85,
	UIHudIcon_LaserPaintedVehicle = 86,
	UIHudIcon_HeliTargetEnemy = 87,
	UIHudIcon_HeliTargetFriendly = 88,
	UIHudIcon_ArtilleryTarget = 89,
	UIHudIcon_NeutralFlagAttacker = 90,
	UIHudIcon_FriendlyFlagAttacker = 91,
	UIHudIcon_EnemyFlagAttacker = 92,
	UIHudIcon_LaserTarget = 93,
	UIHudIcon_ObjectiveAttacker = 94,
	UIHudIcon_ObjectiveDefender = 95,
	UIHudIcon_HealthbarBackground = 96,
	UIHudIcon_Healthbar = 97,
	UIHudIcon_RadarSweepComponent = 98,
	UIHudIcon_Blank = 99,
	UIHudIcon_LocalPlayerBigIcon = 100,
	UIHudIcon_LocalPlayerOutOfMap = 101,
	UIHudIcon_PrimaryObjectiveLarge = 102,
	UIHudIcon_TargetUnlocked = 103,
	UIHudIcon_TargetLocked = 104,
	UIHudIcon_TargetLocking = 105,
	UIHudIcon_ArtilleryStrikeNametag = 106,
	UIHudIcon_ArtilleryStrikeMinimap = 107,
	UIHudIcon_CapturePointContested = 108,
	UIHudIcon_CapturePointDefended = 109,
	UIHudIcon_RoundBar = 110,
	UIHudIcon_RoundBarBg = 111,
	UIHudIcon_RoundBarBgPlate = 112,
	UIHudIcon_SnapOvalArrow = 113,
	UIHudIcon_SquadleaderBg = 114,
	UIHudIcon_VehicleBg = 115,
	UIHudIcon_NonTakeableControlPoint = 116,
	UIHudIcon_SpottedPosition = 117,
	UIHudIcon_Grenade = 118,
	UIHudIcon_Revive = 119,
	UIHudIcon_Repair = 120,
	UIHudIcon_Interact = 121,
	UIHudIcon_Voip = 122,
	UIHudIcon_Claymore = 123,
	UIHudIcon_EodBot = 124,
	UIHudIcon_Explosive = 125,
	UIHudIcon_LaserDesignator = 126,
	UIHudIcon_Mav = 127,
	UIHudIcon_Mortar = 128,
	UIHudIcon_RadioBeacon = 129,
	UIHudIcon_Ugs = 130,
	UIHudIcon_PercetageBarMiddle = 131,
	UIHudIcon_PercetageBarEdge = 132,
	UIHudIcon_PercentageBarBackground = 133,
	UIHudIcon_TankLC = 134,
	UIHudIcon_HeliTrans = 135,
	UIHudIcon_StaticAT = 136,
	UIHudIcon_StaticAA = 137,
	UIHudIcon_SprintBoost = 138,
	UIHudIcon_AmmoBoost = 139,
	UIHudIcon_ExplosiveBoost = 140,
	UIHudIcon_ExplosiveResistBoost = 141,
	UIHudIcon_SuppressionBoost = 142,
	UIHudIcon_SuppressionResistBoost = 143,
	UIHudIcon_GrenadeBoost = 144,
	UIHudIcon_HealSpeedBoost = 145,
	UIHudIcon_NeedAmmoHighlight = 146,
	UIHudIcon_NeedMedicHighlight = 147,
	UIHudIcon_NeedRepairHighlight = 148,
	UIHudIcon_NeedPickupHighlight = 149,
	UIHudIcon_PlayerDead = 150,
	UIHudIcon_Player = 151,
	UIHudIcon_Flag = 152,
	UIHudIcon_Base = 153,
	UIHudIcon_ObjectiveNeutralBomb = 154,
	UIHudIcon_ObjectiveFriendlyBomb = 155,
	UIHudIcon_ObjectiveEnemyBomb = 156,
	UIHudIcon_ObjectiveEnemyHVT = 157,
	UIHudIcon_ObjectiveFriendlyHVT = 158,
	UIHudIcon_Count = 159,
};

enum MinimapZoomLevelEnum
{
	MinimapZoomLevel_OnFoot = 0,
	MinimapZoomLevel_Vehicle = 1,
	MinimapZoomLevel_Flight = 2,
};

enum GameplayBones
{
	GameplayBones_UndefinedBone = -1,
	GameplayBones_RootBone = 0,
	GameplayBones_RootMeshBone = 1,
	GameplayBones_ConnectBone = 2,
	GameplayBones_HeadBone = 3,
	GameplayBones_CameraBone = 4,
	GameplayBones_AimBone = 5,
	GameplayBones_WeaponBone = 6,
	GameplayBones_WeaponAux1Bone = 7,
	GameplayBones_LeftArmBone = 8,
	GameplayBones_LeftToeBone = 9,
	GameplayBones_RightToeBone = 10,
	GameplayBones_LeftFootBone = 11,
	GameplayBones_RightFootBone = 12,
	GameplayBones_Count = 13,
};

enum WarnTarget
{
	wtWarnSoldierAndVehicle = 0,
	wtWarnSoldier = 1,
	wtWarnVehicle = 2,
	wtWarnNone = 3,
};

enum UIBlendMode
{
	UIBlendMode_Solid = 0,
	UIBlendMode_AlphaBlend = 1,
	UIBlendMode_Lighten = 2,
	UIBlendMode_Darken = 3,
	UIBlendMode_Add = 4,
	UIBlendMode_Subtract = 5,
	UIBlendMode_Count = 6,
	UIBlendMode_Passthrough = 7,
};

enum BFUISnapLayoutMode
{
	BFUISnapLayoutMode_Default = 0,
	BFUISnapLayoutMode_ScreenEdge = 1,
	BFUISnapLayoutMode_SafeEdge = 2,
	BFUISnapLayoutMode_CenteredLayoutEdge = 3,
	BFUISnapLayoutMode_ParentEdge = 4,
};

enum UILayoutMode
{
	UILayoutMode_AnchorOffset = 0,
	UILayoutMode_PositionExpansion = 1,
};

enum BlueprintPersistenceSetting
{
	BlueprintPersistenceSetting_InheritFromParent = 0,
	BlueprintPersistenceSetting_SavedWhenInMemory = 1,
	BlueprintPersistenceSetting_AlwaysSaved = 2,
	BlueprintPersistenceSetting_NeverSaved = 3,
};

enum WeaponClassification
{
	WCNone = 0,
	WCPrimary = 1,
	WCSecondary = 2,
};

enum TimeDeltaType
{
	TimeDeltaType_None = 0,
	TimeDeltaType_Player = 1,
	TimeDeltaType_World = 2,
	TimeDeltaType_Extra1 = 3,
	TimeDeltaType_Extra2 = 4,
	TimeDeltaType_Extra3 = 5,
	TimeDeltaType_Extra4 = 6,
	TimeDeltaType_Extra5 = 7,
	TimeDeltaType_Count = 8,
};

enum FloatCurveType
{
	FloatCurveType_Spline = 0,
	FloatCurveType_Smooth = 1,
	FloatCurveType_Linear = 2,
	FloatCurveType_NearestValue = 3,
};

enum AntHitReactionWeaponType
{
	AntHitReactionWeaponType_Pistol = 0,
	AntHitReactionWeaponType_SMG = 1,
	AntHitReactionWeaponType_AssaultRifle = 2,
	AntHitReactionWeaponType_LMG = 3,
	AntHitReactionWeaponType_Shotgun = 4,
	AntHitReactionWeaponType_SniperRifle = 5,
	AntHitReactionWeaponType_Explosion = 6,
	AntHitReactionWeaponType_Flashbang = 7,
	AntHitReactionWeaponType_Melee = 8,
};

enum Realm
{
	Realm_Client = 0,
	Realm_Server = 1,
	Realm_ClientAndServer = 2,
	Realm_None = 3,
	Realm_Pipeline = 4,
};

enum CharacterPoseType
{
	CharacterPoseType_Stand = 0,
	CharacterPoseType_Crouch = 1,
	CharacterPoseType_Prone = 2,
	CharacterPoseTypeCount = 3,
};

enum AntEntryIdEnum
{
	AntEntryIdEnum_Humvee_Driver = 0,
	AntEntryIdEnum_Humvee_Gunner = 1,
	AntEntryIdEnum_Humvee_PassengerRearLeft = 2,
	AntEntryIdEnum_Humvee_PassengerRearRight = 3,
	AntEntryIdEnum_F16_Pilot = 4,
	AntEntryIdEnum_SU37_Pilot = 5,
	AntEntryIdEnum_AH6_Pilot = 6,
	AntEntryIdEnum_AH64_Pilot = 7,
	AntEntryIdEnum_AH64_Gunner = 8,
	AntEntryIdEnum_Vodnik_Driver = 9,
	AntEntryIdEnum_Vodnik_Gunner = 10,
	AntEntryIdEnum_Humvee_PassengerFrontRight = 11,
	AntEntryIdEnum_Vodnik_PassengerFrontRight = 12,
	AntEntryIdEnum_Vodnik_PassengerRearRight = 13,
	AntEntryIdEnum_Vodnik_PassengerRearLeft = 14,
	AntEntryIdEnum_VadsGunner = 15,
	AntEntryIdEnum_F18F_Pilot = 16,
	AntEntryIdEnum_F18F_Navigator = 17,
	AntEntryIdEnum_M1A2_Gunner = 18,
	AntEntryIdEnum_M1A2_Driver = 19,
};

enum CharacterPhysicsCollisionBehavior
{
	CPCB_KillWhenHitByEnemy = 0,
	CPCB_KillWhenHitByEnemyLeaveWhenHitByFriendly = 1,
	CPCB_DoNothing = 2,
};

enum EntryClass
{
	ecPrimary = 0,
	ecSecondary = 1,
};

enum EntrySeatType
{
	EST_Driver = 0,
	EST_Gunner = 1,
	EST_Passenger = 2,
};

enum EntrySpottingSettings
{
	ESSDefault = 0,
	ESSSendAndReceive = 1,
	ESSReceive = 2,
	ESSCount = 3,
};

enum CaptureTypeEnum
{
	CaptureTypeEnum_CenterPoint = 0,
	CaptureTypeEnum_BoundingBox = 1,
	CaptureTypeEnum_CenterPointUnlimitedHeight = 2,
	CaptureTypeEnum_UnlimitedHeight = 2,
	CaptureTypeEnum_BoundingBoxUnlimitedHeight = 3,
};

enum DamageEntityType
{
	DamageEntityType_Soldier = 0,
	DamageEntityType_Vehicle = 1,
	DamageEntityType_Plane = 2,
	DamageEntityType_Invalid = 3,
	DamageEntityType_Count = 4,
};

enum VehicleSpawnerType
{
	VehicleSpawnerType_NoSpawner = 0,
	VehicleSpawnerType_BasicSpawner = 1,
	VehicleSpawnerType_TeamSpawner = 2,
};

enum AIVehicleSoundCategory
{
	AIVehicleSoundCategory_Normal = 0,
	AIVehicleSoundCategory_Quiet = 1,
};

enum TeamId
{
	TeamNeutral = 0,
	Team1 = 1,
	Team2 = 2,
	Team3 = 3,
	Team4 = 4,
	Team5 = 5,
	Team6 = 6,
	Team7 = 7,
	Team8 = 8,
	Team9 = 9,
	Team10 = 10,
	Team11 = 11,
	Team12 = 12,
	Team13 = 13,
	Team14 = 14,
	Team15 = 15,
	Team16 = 16,
	TeamIdCount = 17,
};

enum VehicleCategory
{
	VehicleCategory_Land = 0,
	VehicleCategory_Air = 1,
	VehicleCategory_Horse = 2,
	VehicleCategory_Count = 3,
};

enum UnlockSpawnType
{
	SpawnLock_Ignore = 0,
	SpawnLock_Locked = 1,
	SpawnLock_Unlocked = 2,
};

enum WeaponClassification
{
	WCNone = 0,
	WCPrimary = 1,
	WCSecondary = 2,
};

enum TimeDeltaType
{
	TimeDeltaType_None = 0,
	TimeDeltaType_Player = 1,
	TimeDeltaType_World = 2,
	TimeDeltaType_Extra1 = 3,
	TimeDeltaType_Extra2 = 4,
	TimeDeltaType_Extra3 = 5,
	TimeDeltaType_Extra4 = 6,
	TimeDeltaType_Extra5 = 7,
	TimeDeltaType_Count = 8,
};

enum FloatCurveType
{
	FloatCurveType_Spline = 0,
	FloatCurveType_Smooth = 1,
	FloatCurveType_Linear = 2,
	FloatCurveType_NearestValue = 3,
};

enum AntHitReactionWeaponType
{
	AntHitReactionWeaponType_Pistol = 0,
	AntHitReactionWeaponType_SMG = 1,
	AntHitReactionWeaponType_AssaultRifle = 2,
	AntHitReactionWeaponType_LMG = 3,
	AntHitReactionWeaponType_Shotgun = 4,
	AntHitReactionWeaponType_SniperRifle = 5,
	AntHitReactionWeaponType_Explosion = 6,
	AntHitReactionWeaponType_Flashbang = 7,
	AntHitReactionWeaponType_Melee = 8,
};

enum Realm
{
	Realm_Client = 0,
	Realm_Server = 1,
	Realm_ClientAndServer = 2,
	Realm_None = 3,
	Realm_Pipeline = 4,
};

enum CharacterPoseType
{
	CharacterPoseType_Stand = 0,
	CharacterPoseType_Crouch = 1,
	CharacterPoseType_Prone = 2,
	CharacterPoseTypeCount = 3,
};

enum AntEntryIdEnum
{
	AntEntryIdEnum_Humvee_Driver = 0,
	AntEntryIdEnum_Humvee_Gunner = 1,
	AntEntryIdEnum_Humvee_PassengerRearLeft = 2,
	AntEntryIdEnum_Humvee_PassengerRearRight = 3,
	AntEntryIdEnum_F16_Pilot = 4,
	AntEntryIdEnum_SU37_Pilot = 5,
	AntEntryIdEnum_AH6_Pilot = 6,
	AntEntryIdEnum_AH64_Pilot = 7,
	AntEntryIdEnum_AH64_Gunner = 8,
	AntEntryIdEnum_Vodnik_Driver = 9,
	AntEntryIdEnum_Vodnik_Gunner = 10,
	AntEntryIdEnum_Humvee_PassengerFrontRight = 11,
	AntEntryIdEnum_Vodnik_PassengerFrontRight = 12,
	AntEntryIdEnum_Vodnik_PassengerRearRight = 13,
	AntEntryIdEnum_Vodnik_PassengerRearLeft = 14,
	AntEntryIdEnum_VadsGunner = 15,
	AntEntryIdEnum_F18F_Pilot = 16,
	AntEntryIdEnum_F18F_Navigator = 17,
	AntEntryIdEnum_M1A2_Gunner = 18,
	AntEntryIdEnum_M1A2_Driver = 19,
};

enum CharacterPhysicsCollisionBehavior
{
	CPCB_KillWhenHitByEnemy = 0,
	CPCB_KillWhenHitByEnemyLeaveWhenHitByFriendly = 1,
	CPCB_DoNothing = 2,
};

enum EntryClass
{
	ecPrimary = 0,
	ecSecondary = 1,
};

enum EntrySeatType
{
	EST_Driver = 0,
	EST_Gunner = 1,
	EST_Passenger = 2,
};

enum EntrySpottingSettings
{
	ESSDefault = 0,
	ESSSendAndReceive = 1,
	ESSReceive = 2,
	ESSCount = 3,
};

enum CaptureTypeEnum
{
	CaptureTypeEnum_CenterPoint = 0,
	CaptureTypeEnum_BoundingBox = 1,
	CaptureTypeEnum_CenterPointUnlimitedHeight = 2,
	CaptureTypeEnum_UnlimitedHeight = 2,
	CaptureTypeEnum_BoundingBoxUnlimitedHeight = 3,
};

enum DamageEntityType
{
	DamageEntityType_Soldier = 0,
	DamageEntityType_Vehicle = 1,
	DamageEntityType_Plane = 2,
	DamageEntityType_Invalid = 3,
	DamageEntityType_Count = 4,
};

enum VehicleSpawnerType
{
	VehicleSpawnerType_NoSpawner = 0,
	VehicleSpawnerType_BasicSpawner = 1,
	VehicleSpawnerType_TeamSpawner = 2,
};

enum AIVehicleSoundCategory
{
	AIVehicleSoundCategory_Normal = 0,
	AIVehicleSoundCategory_Quiet = 1,
};

enum TeamId
{
	TeamNeutral = 0,
	Team1 = 1,
	Team2 = 2,
	Team3 = 3,
	Team4 = 4,
	Team5 = 5,
	Team6 = 6,
	Team7 = 7,
	Team8 = 8,
	Team9 = 9,
	Team10 = 10,
	Team11 = 11,
	Team12 = 12,
	Team13 = 13,
	Team14 = 14,
	Team15 = 15,
	Team16 = 16,
	TeamIdCount = 17,
};

enum VehicleCategory
{
	VehicleCategory_Land = 0,
	VehicleCategory_Air = 1,
	VehicleCategory_Horse = 2,
	VehicleCategory_Count = 3,
};

enum UIHudIcon
{
	UIHudIcon_Unused = 0,
	UIHudIcon_LocalPlayer = 1,
	UIHudIcon_LocalDirection = 2,
	UIHudIcon_FriendlyPlayer = 3,
	UIHudIcon_EnemyPlayer = 4,
	UIHudIcon_NeutralPlayer = 5,
	UIHudIcon_SquadMember = 6,
	UIHudIcon_SquadLeader = 7,
	UIHudIcon_SquadLeaderTargeted = 8,
	UIHudIcon_Vehicle = 9,
	UIHudIcon_PrimaryObjective = 10,
	UIHudIcon_PrimaryObjectiveBlink = 11,
	UIHudIcon_SecondaryObjective = 12,
	UIHudIcon_AreaMapMarker = 13,
	UIHudIcon_ObjectiveDestroy = 14,
	UIHudIcon_ObjectiveScout = 15,
	UIHudIcon_ObjectiveDefend = 16,
	UIHudIcon_ObjectiveMoveTo = 17,
	UIHudIcon_ObjectiveAttack = 18,
	UIHudIcon_ObjectiveFollow = 19,
	UIHudIcon_ObjectiveGeneral = 20,
	UIHudICon_UAV = 21,
	UIHudIcon_AmmoCrate = 22,
	UIHudIcon_MedicBag = 23,
	UIHudIcon_C4 = 24,
	UIHudIcon_ATMine = 25,
	UIHudIcon_StationaryWeapon = 26,
	UIHudIcon_North = 27,
	UIHudIcon_South = 28,
	UIHudIcon_West = 29,
	UIHudIcon_East = 30,
	UIHudIcon_NeutralFlag = 31,
	UIHudIcon_FriendlyFlag = 32,
	UIHudIcon_EnemyFlag = 33,
	UIHudIcon_FriendlyBase = 34,
	UIHudIcon_EnemyBase = 35,
	UIHudIcon_Team1Flag = 36,
	UIHudIcon_Team2Flag = 37,
	UIHudIcon_NeutralFlagLit = 38,
	UIHudIcon_FriendlyFlagLit = 39,
	UIHudIcon_EnemyFlagLit = 40,
	UIHudIcon_SelectableSpawnPoint = 41,
	UIHudIcon_SelectedSpawnPoint = 42,
	UIHudIcon_NonSelectableSpawnPoint = 43,
	UIHudIcon_FriendlyFlagUnderAttack = 44,
	UIHudIcon_EnemyFlagUnderAttack = 45,
	UIHudIcon_OrderAttack = 46,
	UIHudIcon_OrderDefend = 47,
	UIHudIcon_OrderAttackObserved = 48,
	UIHudIcon_OrderDefendObserved = 49,
	UIHudIcon_Boat = 50,
	UIHudIcon_Car = 51,
	UIHudIcon_Jeep = 52,
	UIHudIcon_HeliAttack = 53,
	UIHudIcon_HeliScout = 54,
	UIHudIcon_Tank = 55,
	UIHudIcon_TankIFV = 56,
	UIHudIcon_TankArty = 57,
	UIHudIcon_TankAA = 58,
	UIHudIcon_TankAT = 59,
	UIHudIcon_Jet = 60,
	UIHudIcon_JetBomber = 61,
	UIHudIcon_Stationary = 62,
	UIHudIcon_Strategic = 63,
	UIHudIcon_MotionRadarSweep = 64,
	UIHudIcon_NeedBackup = 65,
	UIHudIcon_NeedAmmo = 66,
	UIHudIcon_NeedMedic = 67,
	UIHudIcon_NeedPickup = 68,
	UIHudIcon_NeedRepair = 69,
	UIHudIcon_KitAssault = 70,
	UIHudIcon_KitDemolition = 71,
	UIHudIcon_KitRecon = 72,
	UIHudIcon_KitSpecialist = 73,
	UIHudIcon_KitSupport = 74,
	UIHudIcon_KitMedic = 75,
	UIHudIcon_KitEngineer = 76,
	UIHudIcon_KitPickupAssault = 77,
	UIHudIcon_KitPickupDemolition = 78,
	UIHudIcon_KitPickupRecon = 79,
	UIHudIcon_KitPickupSpecialist = 80,
	UIHudIcon_KitPickupSupport = 81,
	UIHudIcon_KitPickupMedic = 82,
	UIHudIcon_KitPickupEngineer = 83,
	UIHudIcon_Pickup = 84,
	UIHudIcon_TaggedVehicle = 85,
	UIHudIcon_LaserPaintedVehicle = 86,
	UIHudIcon_HeliTargetEnemy = 87,
	UIHudIcon_HeliTargetFriendly = 88,
	UIHudIcon_ArtilleryTarget = 89,
	UIHudIcon_NeutralFlagAttacker = 90,
	UIHudIcon_FriendlyFlagAttacker = 91,
	UIHudIcon_EnemyFlagAttacker = 92,
	UIHudIcon_LaserTarget = 93,
	UIHudIcon_ObjectiveAttacker = 94,
	UIHudIcon_ObjectiveDefender = 95,
	UIHudIcon_HealthbarBackground = 96,
	UIHudIcon_Healthbar = 97,
	UIHudIcon_RadarSweepComponent = 98,
	UIHudIcon_Blank = 99,
	UIHudIcon_LocalPlayerBigIcon = 100,
	UIHudIcon_LocalPlayerOutOfMap = 101,
	UIHudIcon_PrimaryObjectiveLarge = 102,
	UIHudIcon_TargetUnlocked = 103,
	UIHudIcon_TargetLocked = 104,
	UIHudIcon_TargetLocking = 105,
	UIHudIcon_ArtilleryStrikeNametag = 106,
	UIHudIcon_ArtilleryStrikeMinimap = 107,
	UIHudIcon_CapturePointContested = 108,
	UIHudIcon_CapturePointDefended = 109,
	UIHudIcon_RoundBar = 110,
	UIHudIcon_RoundBarBg = 111,
	UIHudIcon_RoundBarBgPlate = 112,
	UIHudIcon_SnapOvalArrow = 113,
	UIHudIcon_SquadleaderBg = 114,
	UIHudIcon_VehicleBg = 115,
	UIHudIcon_NonTakeableControlPoint = 116,
	UIHudIcon_SpottedPosition = 117,
	UIHudIcon_Grenade = 118,
	UIHudIcon_Revive = 119,
	UIHudIcon_Repair = 120,
	UIHudIcon_Interact = 121,
	UIHudIcon_Voip = 122,
	UIHudIcon_Claymore = 123,
	UIHudIcon_EodBot = 124,
	UIHudIcon_Explosive = 125,
	UIHudIcon_LaserDesignator = 126,
	UIHudIcon_Mav = 127,
	UIHudIcon_Mortar = 128,
	UIHudIcon_RadioBeacon = 129,
	UIHudIcon_Ugs = 130,
	UIHudIcon_PercetageBarMiddle = 131,
	UIHudIcon_PercetageBarEdge = 132,
	UIHudIcon_PercentageBarBackground = 133,
	UIHudIcon_TankLC = 134,
	UIHudIcon_HeliTrans = 135,
	UIHudIcon_StaticAT = 136,
	UIHudIcon_StaticAA = 137,
	UIHudIcon_SprintBoost = 138,
	UIHudIcon_AmmoBoost = 139,
	UIHudIcon_ExplosiveBoost = 140,
	UIHudIcon_ExplosiveResistBoost = 141,
	UIHudIcon_SuppressionBoost = 142,
	UIHudIcon_SuppressionResistBoost = 143,
	UIHudIcon_GrenadeBoost = 144,
	UIHudIcon_HealSpeedBoost = 145,
	UIHudIcon_NeedAmmoHighlight = 146,
	UIHudIcon_NeedMedicHighlight = 147,
	UIHudIcon_NeedRepairHighlight = 148,
	UIHudIcon_NeedPickupHighlight = 149,
	UIHudIcon_PlayerDead = 150,
	UIHudIcon_Player = 151,
	UIHudIcon_Flag = 152,
	UIHudIcon_Base = 153,
	UIHudIcon_ObjectiveNeutralBomb = 154,
	UIHudIcon_ObjectiveFriendlyBomb = 155,
	UIHudIcon_ObjectiveEnemyBomb = 156,
	UIHudIcon_ObjectiveEnemyHVT = 157,
	UIHudIcon_ObjectiveFriendlyHVT = 158,
	UIHudIcon_Count = 159,
};

enum MinimapZoomLevelEnum
{
	MinimapZoomLevel_OnFoot = 0,
	MinimapZoomLevel_Vehicle = 1,
	MinimapZoomLevel_Flight = 2,
};

enum GameplayBones
{
	GameplayBones_UndefinedBone = -1,
	GameplayBones_RootBone = 0,
	GameplayBones_RootMeshBone = 1,
	GameplayBones_ConnectBone = 2,
	GameplayBones_HeadBone = 3,
	GameplayBones_CameraBone = 4,
	GameplayBones_AimBone = 5,
	GameplayBones_WeaponBone = 6,
	GameplayBones_WeaponAux1Bone = 7,
	GameplayBones_LeftArmBone = 8,
	GameplayBones_LeftToeBone = 9,
	GameplayBones_RightToeBone = 10,
	GameplayBones_LeftFootBone = 11,
	GameplayBones_RightFootBone = 12,
	GameplayBones_Count = 13,
};

enum WarnTarget
{
	wtWarnSoldierAndVehicle = 0,
	wtWarnSoldier = 1,
	wtWarnVehicle = 2,
	wtWarnNone = 3,
};

enum SubRealm
{
	SubRealm_All = 0,
	SubRealm_LocalPlayer = 1,
	SubRealm_RemotePlayer = 2,
};

enum AnimationControlModeEnum
{
	AnimationControlModeEnum_PlaceTrajectoryAtObject = 0,
	AnimationControlModeEnum_PlaceObjectAtTrajectory = 1,
	AnimationControlModeEnum_DisconnectTrajectoryAndObject = 2,
};

enum JointOutputModeEnum
{
	JointOutputModeEnum_NoOutput = 0,
	JointOutputModeEnum_AllJoints = 1,
	JointOutputModeEnum_GameplayBones = 2,
};

enum UnlockEntityLogic
{
	UnlockEntityLogic_AND = 0,
	UnlockEntityLogic_OR = 1,
};

enum UnlockEntityPlayerQueryType
{
	UnlockEntityPlayerQueryType_ActiveWeaponUnlocks = 0,
	UnlockEntityPlayerQueryType_AllWeaponUnlocks = 1,
	UnlockEntityPlayerQueryType_PlayerUnlocks = 2,
	UnlockEntityPlayerQueryType_UnlockedForPlayer = 3,
};

enum EntryEnterRestriction
{
	EntryEnterRestriction_NoRestriction = 0,
	EntryEnterRestriction_OnlyPrimaryEntry = 1,
};

enum LocalPlayerId
{
	LocalPlayerId_0 = 0,
	LocalPlayerId_1 = 1,
	LocalPlayerId_2 = 2,
	LocalPlayerId_3 = 3,
	LocalPlayerId_4 = 4,
	LocalPlayerId_5 = 5,
	LocalPlayerId_6 = 6,
	LocalPlayerId_7 = 7,
	LocalPlayerId_Invalid = 255,
};

enum StreamRealm
{
	StreamRealm_None = 0,
	StreamRealm_Client = 1,
	StreamRealm_Both = 2,
};

enum RadiosityTypeOverride
{
	RadiosityTypeOverride_None = 0,
	RadiosityTypeOverride_Dynamic = 1,
	RadiosityTypeOverride_LightProbe = 2,
	RadiosityTypeOverride_Static = 3,
	RadiosityTypeOverride_TerrainProjected = 4,
};

enum RenderingOverride
{
	RenderingOverride_Inherit = 0,
	RenderingOverride_Enable = 1,
	RenderingOverride_Disable = 2,
	RenderingOverride_Legacy = 3,
};

enum InteractionEntityType
{
	IET_None = 0,
	IET_RushCrateArm = 1,
	IET_RushCrateDisarm = 2,
	IET_ObliterationDropOffArm = 3,
	IET_CTFFlag = 4,
	IET_DoorBarge = 5,
};

enum BlinkType
{
	BTHold = 0,
	BTBlink = 1,
	BTCount = 2,
};

enum CharacterStateType
{
	CharacterStateType_OnGround = 0,
	CharacterStateType_Jumping = 1,
	CharacterStateType_InAir = 2,
	CharacterStateType_Climbing = 3,
	CharacterStateType_Falling = 4,
	CharacterStateType_User_0 = 5,
	CharacterStateType_Parachute = 5,
	CharacterStateType_User_1 = 6,
	CharacterStateType_Swimming = 6,
	CharacterStateType_User_2 = 7,
	CharacterStateType_AnimationControlled = 7,
	CharacterStateType_User_3 = 8,
	CharacterStateType_Sliding = 8,
	CharacterStateType_User_4 = 9,
	CharacterStateType_User_5 = 10,
	CharacterStateType_StateCount = 11,
};

enum RigidBodyCollisionLayer
{
	RigidBodyCollisionLayer_Invalid = 0,
	RigidBodyCollisionLayer_StaticLayer = 1,
	RigidBodyCollisionLayer_DynamicLayer = 2,
	RigidBodyCollisionLayer_PlayerCollisionLayer = 3,
	RigidBodyCollisionLayer_AICollisionLayer = 4,
	RigidBodyCollisionLayer_KeyframeLayer = 5,
	RigidBodyCollisionLayer_DebrisLayer = 6,
	RigidBodyCollisionLayer_FastDebrisLayer = 7,
	RigidBodyCollisionLayer_OnlyStaticCollisionLayer = 8,
	RigidBodyCollisionLayer_RagdollLayer = 9,
	RigidBodyCollisionLayer_NoCollisionLayer = 10,
	RigidBodyCollisionLayer_WaterLayer = 11,
	RigidBodyCollisionLayer_BangerLayer = 12,
	RigidBodyCollisionLayer_NoVehicleCollisionLayer = 13,
	RigidBodyCollisionLayer_CharacterLayer = 14,
	RigidBodyCollisionLayer_DynamicNoCharacterCollisionLayer = 15,
	RigidBodyCollisionLayer_PredictedVehicleLayer = 16,
	RigidBodyCollisionLayer_TerrainLayer = 17,
	RigidBodyCollisionLayer_OnlyTerrainCollionLayer = 18,
	RigidBodyCollisionLayer_CharacterCollisionGeometryLayer = 19,
	RigidBodyCollisionLayer_AiCollisionBodyLayer = 20,
	RigidBodyCollisionLayer_CameraCollisionLayer = 21,
	RigidBodyCollisionLayer_OnlyStaticCameraCollisionLayer = 22,
	RigidBodyCollisionLayer_KeyframedCollisionBodyLayer = 23,
	RigidBodyCollisionLayer_VehicleLayer = 24,
	RigidBodyCollisionLayer_VehicleAndCharacterCollisionLayer = 25,
	RigidBodyCollisionLayer_VehicleUsingSimpleTerrainLayer = 26,
	RigidBodyCollisionLayer_SimpleTerrainLayer = 27,
	RigidBodyCollisionLayer_OnlyStaticAndTerrainLayer = 28,
	RigidBodyCollisionLayer_NoSpectatorStaticCollisionLayer = 29,
	RigidBodyCollisionLayer_SpectatorCameraCollisionLayer = 30,
	RigidBodyCollisionLayer_NoWaterCollisionLayer = 31,
	RigidBodyCollisionLayer_Size = 32,
};

enum PersonViewMode
{
	PersonViewMode_FirstPerson = 0,
	PersonViewMode_ThirdPerson = 1,
};

enum PlayerSpawnType
{
	PlayerSpawnType_HumanPlayer = 0,
	PlayerSpawnType_AiPlayer = 1,
	PlayerSpawnType_Actor = 2,
	PlayerSpawnType_BrainAI = 3,
	PlayerSpawnType_Ai2Player = 300,
};

enum FiringWeaponClass
{
	WeaponClass_AssaultRifle = 0,
	WeaponClass_MachineGun = 1,
	WeaponClass_Pistol = 2,
	WeaponClass_SniperRifle = 3,
	WeaponClass_SMG = 4,
};

enum VoPrimaryFireType
{
	VoPrimaryFireType_SMG = -5,
	VoPrimaryFireType_SniperRifle = -4,
	VoPrimaryFireType_Pistol = -3,
	VoPrimaryFireType_MachineGun = -2,
	VoPrimaryFireType_AssaultRifle = -1,
};

enum SustainFiringFireStyle
{
	SustainFiringFireStyle_TrackTarget = 0,
	SustainFiringFireStyle_SweepArea = 1,
};

enum ValidAgainst
{
	ValidAgainst_Nothing = 0,
	ValidAgainst_Soldiers = 1,
	ValidAgainst_SoldiersAndUnshieldedVehicles = 2,
	ValidAgainst_UnshieldedVehicles = 3,
	ValidAgainst_ShieldedVehicles = 4,
	ValidAgainst_AllVehicles = 5,
	ValidAgainst_All = 6,
	ValidAgainst_HumanSoldiers = 7,
};

enum TargetPreference
{
	TargetPreference_Soldiers = 0,
	TargetPreference_Vehicles = 1,
};

enum LogFileCollisionMode
{
	LFCM_Overwrite = 0,
	LFCM_Rotate = 1,
	LFCM_TimeStamp = 2,
};

enum SKU
{
	WW = 0,
	EU = 1,
	US = 2,
	JPN = 3,
	ROA = 4,
	RU = 5,
	EN = 6,
};

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

enum DisplayDynamicRange
{
	DisplayDynamicRange_SDR = 0,
	DisplayDynamicRange_DolbyMaui = 1,
	DisplayDynamicRange_DolbyVision = 2,
	DisplayDynamicRange_LiveGrading = 3,
	DisplayDynamicRange_HDR10 = 4,
	DisplayDynamicRange_HDR10_Float = 5,
	DisplayDynamicRange_Auto = 6,
};

enum UISystemType
{
	UISystem_None = 0,
	UISystem_Standard = 1,
};

enum LanguageFormat
{
	LanguageFormat_English = 0,
	LanguageFormat_French = 1,
	LanguageFormat_German = 2,
	LanguageFormat_Spanish = 3,
	LanguageFormat_SpanishUSA = 4,
	LanguageFormat_SpanishMex = 5,
	LanguageFormat_Italian = 6,
	LanguageFormat_Japanese = 7,
	LanguageFormat_Russian = 8,
	LanguageFormat_Polish = 9,
	LanguageFormat_Dutch = 10,
	LanguageFormat_Portuguese = 11,
	LanguageFormat_TraditionalChinese = 12,
	LanguageFormat_Korean = 13,
	LanguageFormat_Czech = 14,
	LanguageFormat_BrazilianPortuguese = 15,
	LanguageFormat_ArabicSA = 16,
	LanguageFormat_Turkish = 17,
	LanguageFormat_WorstCase = 18,
	LanguageFormat_Count = 19,
	LanguageFormat_Undefined = 20,
};

enum FOVTransitionType
{
	FOVTransitionType_Linear = 0,
	FOVTransitionType_Smooth = 1,
	FOVTransitionType_Count = 2,
};

enum ProfileOptionsType
{
	GstAudio = 0,
	GstRender = 1,
	GstInput = 2,
	GstAI = 3,
	GstGameplay = 4,
	GstPlayerProfile = 5,
	GstPersistence = 6,
	GstBinary = 7,
	GstKeyBinding = 8,
	GstCustomization = 9,
	GstSpectator = 10,
	GstCount = 11,
};

enum ZoomLevelActivateEventType
{
	ZoomLevelActivateEventType_Disable = 0,
	ZoomLevelActivateEventType_Enable = 1,
	ZoomLevelActivateEventType_ToggleOnLightSwitch = 2,
};

enum VehicleMode
{
	VmIdle = 0,
	VmEntering = 1,
	VmEntered = 2,
	VmStarting = 3,
	VmStarted = 4,
	VmStopping = 5,
	VmLeaving = 6,
};

enum RigidBodyType
{
	RBTypeCollision = 0,
	RBTypeDetail = 1,
	RBTypeCharacter = 2,
	RBTypeRaycast = 3,
	RBTypeGroup = 4,
	RBTypeProxy = 5,
	RBTypeSize = 6,
};

enum RigidBodyMotionType
{
	RigidBodyMotionType_Invalid = 0,
	RigidBodyMotionType_Fixed = 1,
	RigidBodyMotionType_Keyframed = 2,
	RigidBodyMotionType_Dynamic = 3,
	RigidBodyMotionType_Size = 4,
};

enum RigidBodyQualityType
{
	RigidBodyQualityType_Fixed = 0,
	RigidBodyQualityType_Debris = 1,
	RigidBodyQualityType_Dynamic = 2,
	RigidBodyQualityType_NeighborWelding = 3,
	RigidBodyQualityType_MotionWelding = 4,
	RigidBodyQualityType_TriangleWelding = 5,
	RigidBodyQualityType_Critical = 6,
	RigidBodyQualityType_Vehicle = 7,
	RigidBodyQualityType_Character = 8,
	RigidBodyQualityType_Grenade = 9,
	RigidBodyQualityType_Projectile = 10,
	RigidBodyQualityType_Invalid = 11,
};

enum LodDistanceMethod
{
	LodDistanceMethod_BoundingSphere = 0,
	LodDistanceMethod_YAxis = 1,
	LodDistanceMethod_Count = 2,
};

enum EnlightenType
{
	EnlightenType_Dynamic = 0,
	EnlightenType_LightProbe = 1,
	EnlightenType_Static = 2,
	EnlightenType_Proxy = 3,
};

enum LocalPlayerViewId
{
	LocalPlayerViewId_RootView = 0,
	LocalPlayerViewId_Secondary = 1,
	LocalPlayerViewId_Custom1 = 2,
	LocalPlayerViewId_Custom2 = 3,
	LocalPlayerViewId_Custom3 = 4,
	LocalPlayerViewId_Custom4 = 5,
	LocalPlayerViewId_Count = 6,
};

enum InputActionMapSlot
{
	InputActionMapSlot_Undefined = 0,
	InputActionMapSlot_Root1 = 1,
	InputActionMapSlot_Root2 = 2,
	InputActionMapSlot_Root3 = 3,
	InputActionMapSlot_Root4 = 4,
	InputActionMapSlot_Root5 = 5,
	InputActionMapSlot_Root6 = 6,
	InputActionMapSlot_Root7 = 7,
	InputActionMapSlot_Root8 = 8,
	InputActionMapSlot_Root9 = 9,
	InputActionMapSlot_Root10 = 10,
	InputActionMapSlot_Root11 = 11,
	InputActionMapSlot_Root12 = 12,
	InputActionMapSlot_Root13 = 13,
	InputActionMapSlot_Root14 = 14,
	InputActionMapSlot_Root15 = 15,
	InputActionMapSlot_Root16 = 16,
	InputActionMapSlot_Sticks1 = 17,
	InputActionMapSlot_Sticks2 = 18,
	InputActionMapSlot_Sticks3 = 19,
	InputActionMapSlot_Sticks4 = 20,
	InputActionMapSlot_Buttons1 = 21,
	InputActionMapSlot_Buttons2 = 22,
	InputActionMapSlot_Buttons3 = 23,
	InputActionMapSlot_Buttons4 = 24,
	InputActionMapSlot_Sticks1Buttons1 = 25,
	InputActionMapSlot_Sticks1Buttons2 = 26,
	InputActionMapSlot_Sticks1Buttons3 = 27,
	InputActionMapSlot_Sticks1Buttons4 = 28,
	InputActionMapSlot_Sticks2Buttons1 = 29,
	InputActionMapSlot_Sticks2Buttons2 = 30,
	InputActionMapSlot_Sticks2Buttons3 = 31,
	InputActionMapSlot_Sticks2Buttons4 = 32,
	InputActionMapSlot_Sticks3Buttons1 = 33,
	InputActionMapSlot_Sticks3Buttons2 = 34,
	InputActionMapSlot_Sticks3Buttons3 = 35,
	InputActionMapSlot_Sticks3Buttons4 = 36,
	InputActionMapSlot_Sticks4Buttons1 = 37,
	InputActionMapSlot_Sticks4Buttons2 = 38,
	InputActionMapSlot_Sticks4Buttons3 = 39,
	InputActionMapSlot_Sticks4Buttons4 = 40,
	InputActionMapSlot_Count = 41,
};

enum BundleHeapType
{
	BundleHeapType_OwnWithParentSmallblock = 0,
	BundleHeapType_OwnWithSmallblock = 1,
	BundleHeapType_OwnWithoutSmallblock = 2,
	BundleHeapType_Parent = 3,
	BundleHeapType_Level = 4,
	BundleHeapType_Global = 5,
	BundleHeapType_Null = 6,
};

enum UnlockAvailability
{
	UnlockAvailability_All = 0,
	UnlockAvailability_HumanPlayerOnly = 1,
	UnlockAvailability_AIOnly = 2,
};

enum SightType
{
	SightType_None = 0,
	SightType_Canted = 1,
	SightType_Magnifier = 2,
	SightType_IronSights = 3,
	SightType_ShortRange = 4,
	SightType_MediumRange = 5,
	SightType_LongRange = 6,
};

enum VoiceOverPronunciationFallback
{
	VoiceOverPronunciationFallback_None = 0,
	VoiceOverPronunciationFallback_Master = 1,
};

enum VoiceOverConversationQueueGroupPolyphony
{
	VoiceOverConversationQueueGroupPolyphony_Sources = 0,
	VoiceOverConversationQueueGroupPolyphony_GlobalSources = 1,
	VoiceOverConversationQueueGroupPolyphony_Conversations = 2,
};

enum ScaleResampleMode
{
	ScaleResampleMode_Point = 0,
	ScaleResampleMode_Linear = 1,
	ScaleResampleMode_Bicubic = 2,
	ScaleResampleMode_Lanczos = 3,
	ScaleResampleMode_LanczosSeparable = 4,
	ScaleResampleMode_BicubicSharp = 5,
	ScaleResampleMode_BicubicSharpSeparable = 6,
};

enum DisplayMappingShoulderType
{
	DisplayMappingShoulderType_None = 0,
	DisplayMappingShoulderType_Neutral = 1,
};

enum ClientState
{
	ClientState_WaitingForStaticBundleLoad = 0x0000,
	ClientState_LoadProfileOptions = 0x0001,
	ClientState_LostConnection = 0x0002,
	ClientState_WaitingForUnload = 0x0003,
	ClientState_Startup = 0x0004,
	ClientState_StartServer = 0x0005,
	ClientState_WaitingForLevel = 0x0006,
	ClientState_StartLoadingLevel = 0x0007,
	ClientState_WaitingForLevelLoaded = 0x0008,
	ClientState_WaitingForLevelLink = 0x0009,
	ClientState_LevelLinked = 0x000A,
	ClientState_WaitingForGhosts = 0x000B,
	ClientState_Ingame = 0x000C,
	ClientState_LeaveIngame = 0x000D,
	ClientState_ConnectToServer = 0x000E,
	ClientState_ShuttingDown = 0x000F,
	ClientState_Shutdown = 0x0010,
	ClientState_None //0x0011,
};

enum InputDeviceKeys
{
	IDK_None = 0,
	IDK_Escape = 1,
	IDK_1 = 2,
	IDK_2 = 3,
	IDK_3 = 4,
	IDK_4 = 5,
	IDK_5 = 6,
	IDK_6 = 7,
	IDK_7 = 8,
	IDK_8 = 9,
	IDK_9 = 10,
	IDK_0 = 11,
	IDK_Minus = 12,
	IDK_Equals = 13,
	IDK_Backspace = 14,
	IDK_Tab = 15,
	IDK_Q = 16,
	IDK_W = 17,
	IDK_E = 18,
	IDK_R = 19,
	IDK_T = 20,
	IDK_Y = 21,
	IDK_U = 22,
	IDK_I = 23,
	IDK_O = 24,
	IDK_P = 25,
	IDK_LeftBracket = 26,
	IDK_RightBracket = 27,
	IDK_Enter = 28,
	IDK_LeftCtrl = 29,
	IDK_A = 30,
	IDK_S = 31,
	IDK_D = 32,
	IDK_F = 33,
	IDK_G = 34,
	IDK_H = 35,
	IDK_J = 36,
	IDK_K = 37,
	IDK_L = 38,
	IDK_Semicolon = 39,
	IDK_Apostrophe = 40,
	IDK_Grave = 41,
	IDK_LeftShift = 42,
	IDK_Backslash = 43,
	IDK_Z = 44,
	IDK_X = 45,
	IDK_C = 46,
	IDK_V = 47,
	IDK_B = 48,
	IDK_N = 49,
	IDK_M = 50,
	IDK_Comma = 51,
	IDK_Period = 52,
	IDK_Slash = 53,
	IDK_RightShift = 54,
	IDK_Multiply = 55,
	IDK_LeftAlt = 56,
	IDK_Space = 57,
	IDK_Capital = 58,
	IDK_F1 = 59,
	IDK_F2 = 60,
	IDK_F3 = 61,
	IDK_F4 = 62,
	IDK_F5 = 63,
	IDK_F6 = 64,
	IDK_F7 = 65,
	IDK_F8 = 66,
	IDK_F9 = 67,
	IDK_F10 = 68,
	IDK_Numlock = 69,
	IDK_ScrollLock = 70,
	IDK_Numpad7 = 71,
	IDK_Numpad8 = 72,
	IDK_Numpad9 = 73,
	IDK_Subtract = 74,
	IDK_Numpad4 = 75,
	IDK_Numpad5 = 76,
	IDK_Numpad6 = 77,
	IDK_Add = 78,
	IDK_Numpad1 = 79,
	IDK_Numpad2 = 80,
	IDK_Numpad3 = 81,
	IDK_Numpad0 = 82,
	IDK_Decimal = 83,
	IDK_OEM_102 = 86,
	IDK_F11 = 87,
	IDK_F12 = 88,
	IDK_F13 = 100,
	IDK_F14 = 101,
	IDK_F15 = 102,
	IDK_Kana = 112,
	IDK_PTBRSlash = 115,
	IDK_Convert = 121,
	IDK_NoConvert = 123,
	IDK_Yen = 125,
	IDK_PTBRNUMPADPOINT = 126,
	IDK_Function = 128,
	IDK_NumpadEquals = 141,
	IDK_PrevTrack = 144,
	IDK_At = 145,
	IDK_Colon = 146,
	IDK_Underline = 147,
	IDK_Kanji = 148,
	IDK_Stop = 149,
	IDK_Ax = 150,
	IDK_Unlabeled = 151,
	IDK_NextTrack = 153,
	IDK_NumpadEnter = 156,
	IDK_RightCtrl = 157,
	IDK_Mute = 160,
	IDK_Calculator = 161,
	IDK_PlayPause = 162,
	IDK_MediaStop = 164,
	IDK_VolumeDown = 174,
	IDK_VolumeUp = 176,
	IDK_WebHome = 178,
	IDK_NumpadComma = 179,
	IDK_Divide = 181,
	IDK_PrintScreen = 183,
	IDK_RightAlt = 184,
	IDK_Pause = 197,
	IDK_Home = 199,
	IDK_ArrowUp = 200,
	IDK_PageUp = 201,
	IDK_ArrowLeft = 203,
	IDK_ArrowRight = 205,
	IDK_End = 207,
	IDK_ArrowDown = 208,
	IDK_PageDown = 209,
	IDK_Insert = 210,
	IDK_Delete = 211,
	IDK_LeftWin = 219,
	IDK_RightWin = 220,
	IDK_AppMenu = 221,
	IDK_Power = 222,
	IDK_Sleep = 223,
	IDK_Wake = 227,
	IDK_WebSearch = 229,
	IDK_WebFavorites = 230,
	IDK_WebRefresh = 231,
	IDK_WebStop = 232,
	IDK_WebForward = 233,
	IDK_WebBack = 234,
	IDK_MyComputer = 235,
	IDK_Mail = 236,
	IDK_MediaSelect = 237,
	IDK_Undefined = 255,
};

enum InputDevicePadButtons
{
	IDB_Lup = 0,
	IDB_Ldown = 1,
	IDB_Lleft = 2,
	IDB_Lright = 3,
	IDB_Rup = 4,
	IDB_Rdown = 5,
	IDB_Rleft = 6,
	IDB_Rright = 7,
	IDB_Rtopleft = 8,
	IDB_Rtopright = 9,
	IDB_Lthumb = 10,
	IDB_Rthumb = 11,
	IDB_start = 12,
	IDB_alt = 13,
	IDB_Ltrigger = 14,
	IDB_Rtrigger = 15,
	IDB_Ltrigger2 = 16,
	IDB_Rtrigger2 = 17,
	IDB_TSwipeLeft = 18,
	IDB_TSwipeUp = 19,
	IDB_TSwipeRight = 20,
	IDB_TSwipeDown = 21,
	IDB_XButton1 = 22,
	IDB_XButton2 = 23,
	IDB_XButton3 = 24,
	IDB_XButton4 = 25,
	IDB_XButton5 = 26,
	IDB_XButton6 = 27,
	IDB_XButton7 = 28,
	IDB_XButton8 = 29,
	IDB_XButton9 = 30,
	IDB_XButton10 = 31,
	IDB_XButton11 = 32,
	IDB_XButton12 = 33,
	IDB_XButton13 = 34,
	IDB_XButton14 = 35,
	IDB_XButton15 = 36,
	IDB_XButton16 = 37,
	IDB_XButton17 = 38,
	IDB_XButton18 = 39,
	IDB_PosZAxis = 40,
	IDB_NegZAxis = 41,
	IDB_XRotationPos = 42,
	IDB_XRotationNeg = 43,
	IDB_YRotationPos = 44,
	IDB_YRotationNeg = 45,
	IDB_ZRotationPos = 46,
	IDB_ZRotationNeg = 47,
	IDB_Pov1North = 48,
	IDB_Pov1South = 49,
	IDB_Pov1West = 50,
	IDB_Pov1East = 51,
	IDB_Pov2North = 52,
	IDB_Pov2South = 53,
	IDB_Pov2West = 54,
	IDB_Pov2East = 55,
	IDB_Pov3North = 56,
	IDB_Pov3South = 57,
	IDB_Pov3West = 58,
	IDB_Pov3East = 59,
	IDB_Pov4North = 60,
	IDB_Pov4South = 61,
	IDB_Pov4West = 62,
	IDB_Pov4East = 63,
	IDB_Undefined = 64,
	IDB_NumPadButtons = 64,
};

enum InputDevicePOVs
{
	IDP_POV_0 = 0,
	IDP_POV_1 = 1,
	IDP_POV_2 = 2,
	IDP_POV_Undefined = 3,
};

enum InputDeviceAxes
{
	IDA_Axis0X = 0,
	IDA_Axis0Y = 1,
	IDA_Axis0XPos = 2,
	IDA_Axis0YPos = 3,
	IDA_Axis0XNeg = 4,
	IDA_Axis0YNeg = 5,
	IDA_Axis1X = 6,
	IDA_Axis1Y = 7,
	IDA_Axis1XPos = 8,
	IDA_Axis1YPos = 9,
	IDA_Axis1XNeg = 10,
	IDA_Axis1YNeg = 11,
	IDA_Axis2X = 12,
	IDA_Axis2Y = 13,
	IDA_Axis3X = 14,
	IDA_Axis3Y = 15,
	IDA_Axis4X = 16,
	IDA_Axis4Y = 17,
	IDA_Axis5X = 18,
	IDA_Axis5Y = 19,
	IDA_Axis6X = 20,
	IDA_Axis6Y = 21,
	IDA_Axis7X = 22,
	IDA_Axis7Y = 23,
	IDA_Undefined = 24,
};

class DataContainer
{
public:
char _0x0000[0x0010];

};//Size=0x0010

class GameDataContainer : public DataContainer
{
public:
};//Size=0x0010

class DataBusPeer : public GameDataContainer
{
public:
	DWORD m_Flags; //0x0010 
char _0x0014[0x0004];

};//Size=0x0018

class GameObjectData : public DataBusPeer
{
public:
};//Size=0x0018

class EntityBusPeer
{
public:
	virtual TypeInfo* GetTypeInfo(); //
	virtual void Function1(); //
	virtual void Function2(); //
	virtual void Function3(); //
	virtual void Function4(); //
	virtual void Function5(); //
	virtual void Function6(); //
	virtual void Function7(); //
	virtual void Function8(); //
	virtual void Function9(); //
	virtual EntityData* GetEntityData(); //
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
	virtual void Function24(); //
	virtual void GetAABB(TransformAABBStruct* pAABB); //
	virtual void GetTransform(D3DXMATRIX* mTransform); //
	virtual void Function27(); //
	virtual void Function28(); //
	virtual void Function29(); //
	virtual void Function30(); //
	virtual void Function31(); //
	virtual void Function32(); //
	virtual void Function33(); //
	virtual void Function34(); //
	virtual Component* GetComponentByType(TypeInfo *type); //
	virtual void Function36(); //
	virtual void Function37(); //
	virtual void Function38(); //
	virtual void Function39(); //
	virtual void Function40(); //
	virtual void Function41(); //
	virtual void Function42(); //
	virtual void Function43(); //
	virtual void Function44(); //
	virtual void Function45(); //
	virtual void Function46(); //
	virtual void Function47(); //
	virtual void Function48(); //
	virtual void Function49(); //
	virtual void Function50(); //
	virtual void Function51(); //
	virtual void Function52(); //
	virtual void Function53(); //
	virtual void Function54(); //
	virtual void Function55(); //
	virtual void Function56(); //
	virtual void Function57(); //
	virtual void Function58(); //
	virtual void Function59(); //
	virtual void Function60(); //
	virtual void Function61(); //
	virtual void Function62(); //
	virtual void Function63(); //
	virtual void Function64(); //
	virtual void Function65(); //
	virtual void Function66(); //
	virtual void Function67(); //
	virtual void Function68(); //
	virtual void Function69(); //
	virtual void Function70(); //
	virtual void Function71(); //
	virtual void Function72(); //
	virtual void Function73(); // this
	virtual void Function74(); //
	virtual void Function75(); //
	virtual void Function76(); //
	virtual void Function77(); //
	virtual void Function78(); //
	virtual void Function79(); //
	virtual void Function80(); //
	virtual void Function81(); //
	virtual void Function82(); //
	virtual void Function83(); //
	virtual void Function84(); //
	virtual void Function85(); //
	virtual void Function86(); //
	virtual void Function87(); //
	virtual void Function88(); //
	virtual void Function89(); //
	virtual void Function90(); //
	virtual void Function91(); //this

};//Size=0x0008

class EntityData : public GameObjectData
{
public:
};//Size=0x0018

class LinearTransform
{
public:
	D3DXVECTOR3 m_right; //0x0000 
	char _0x000C[0x0004];
	D3DXVECTOR3 m_up; //0x0010 
	char _0x001C[0x0004];
	D3DXVECTOR3 m_forward; //0x0020 
	char _0x002C[0x0004];
	D3DXVECTOR3 m_trans; //0x0030 
char _0x003C[0x0004];

};//Size=0x0040

class Asset : public DataContainer
{
public:
	char* m_Name; //0x0010 

};//Size=0x0018

class Entity : public EntityBusPeer
{
public:
char _0x0008[0x0018];

};//Size=0x0020

class SpatialEntityData : public EntityData
{
public:
	char _0x0018[0x0008];
	LinearTransform m_Transform; //0x0020 

};//Size=0x0060

class DataBusData : public Asset
{
public:
	Array<PropertyConnection*>* m_PropertyConnections; //0x0018 
	Array<LinkConnection*>* m_LinkConnections; //0x0020 
	DynamicDataContainer* m_Interface; //0x0028 
	WORD m_Flags; //0x0030 
char _0x0032[0x0006];

};//Size=0x0038

class SpatialEntity : public Entity
{
public:
char _0x0020[0x0008];

};//Size=0x0028

class ComponentEntityData : public SpatialEntityData
{
public:
	Array<GameObjectData*>* m_Components; //0x0060 
	unsigned char m_ClientRuntimeComponentCount; //0x0068 
	unsigned char m_ServerRuntimeComponentCount; //0x0069 
	unsigned char m_ClientRuntimeTransformationCount; //0x006A 
	unsigned char m_ServerRuntimeTransformationCount; //0x006B 
char _0x006C[0x0004];

};//Size=0x0070

class EntityBusData : public DataBusData
{
public:
	Array<EventConnection*>* m_EventConnections; //0x0038 

};//Size=0x0040

class Component : public EntityBusPeer
{
public:
	ComponentTable* m_ComponentTable; //0x0008 
	WeaponComponentData* m_WeaponComponentData; //0x0010 
	unsigned char m_ComponentNum; //0x0018 
char _0x0019[0x0007];

};//Size=0x0020

class ComponentEntity : public SpatialEntity
{
public:
	char _0x0028[0x0008];
	VehicleEntityData* m_VehicleEntityData; //0x0030 
	ComponentTable* m_ComponentTable; //0x0038 
char _0x0040[0x0010];

};//Size=0x0050

class ComponentData : public GameObjectData
{
public:
	Array<GameObjectData*>* m_Components; //0x0018 
	LinearTransform m_Transform; //0x0020 
	unsigned char m_Excluded; //0x0060 
char _0x0061[0x000F];

};//Size=0x0070

class GameComponentEntityData : public ComponentEntityData
{
public:
	unsigned char m_Enabled; //0x0070 
char _0x0071[0x000F];

};//Size=0x0080

class Blueprint : public EntityBusData
{
public:
};//Size=0x0040

class HealthComponent : public Component
{
public:
	float m_SoldierCurHealth; //0x0020 
	float m_SoldierMaxHealth; //0x0024 

};//Size=0x0028

class GameComponent : public Component
{
public:
	ClientDiceShooterVehicleEntryComponent* m_ClientDiceShooterVehicleEntryComponent; //0x0020 
char _0x0028[0x0008];

};//Size=0x0030

class GameComponentEntity : public ComponentEntity
{
public:
char _0x0050[0x0020];

};//Size=0x0070

class GameComponentData : public ComponentData
{
public:
};//Size=0x0070

class EntryComponentHudData
{
public:
	__int32 m_Index; //0x0000 
	EntrySeatType m_SeatType; //0x0004 
	unsigned char m_Frustum; //0x0008 
	unsigned char m_Visible; //0x0009 
	unsigned char m_MaximizeMiniMapOnEntry; //0x000A 
char _0x000B[0x0001];

};//Size=0x000C

class GamePhysicsEntityData : public GameComponentEntityData
{
public:
	PhysicsEntityData* m_PhysicsData; //0x0080 
	unsigned char m_IsTraversable; //0x0088 
	unsigned char m_IsCharacterCollidable; //0x0089 
char _0x008A[0x0006];

};//Size=0x0090

class InvestigateSettigns
{
public:
	__int32 m_MaxInvestigators; //0x0000 
	float m_MinDistIfObstruscted; //0x0004 
	InvestigateSettignsKnowledgeSharing m_KnowledgeShare; //0x0008 
	InvestigateEndConditions m_EndConditions; //0x0010 
	unsigned char m_CanStandInPlaceAndLook; //0x0018 
	unsigned char m_CanGetCloserIfObstructed; //0x0019 
char _0x001A[0x0002];

};//Size=0x001C

class PhysicsComponentData : public ComponentData
{
public:
	Array<PhysicsBodyData*>* m_PhysicsBodies; //0x0070 
	Array<PhysicsConstraintData*>* m_PhysicsConstraints; //0x0078 
	Array<PhysicsPartData*>* m_Parts; //0x0080 
	unsigned char m_MovableParts; //0x008C 
char _0x008D[0x0003];

};//Size=0x0090

class PrefabBlueprint : public Blueprint
{
public:
	Array<GameObjectData*>* m_Objects; //0x0040 
	TimeDeltaType m_TimeDeltaType; //0x0048 
char _0x004C[0x0004];

};//Size=0x0050

class ClientGameHealthComponent : public HealthComponent
{
public:
char _0x0028[0x0008];

};//Size=0x0030

class PhysicsComponent : public Component
{
public:
	char _0x0020[0x0010];
	char _0x0038[0x0028];
	WORD N010525F5; //0x0060 
char _0x0062[0x0006];

};//Size=0x0068

class RenderingOverrides
{
public:
	RenderingOverride m_ShadowEnable; //0x0000 
	RenderingOverride m_DynamicReflectionEnable; //0x0004 
	RenderingOverride m_StaticReflectionEnable; //0x0008 

};//Size=0x000C

class ServerGameComponent : public GameComponent
{
public:
};//Size=0x0030

class ClientGameComponent : public GameComponent
{
public:
char _0x0030[0x0008];

};//Size=0x0038

class ClientGameComponentEntity : public GameComponentEntity
{
public:
};//Size=0x0070

class EntryComponentData : public GameComponentData
{
public:
	D3DXVECTOR3 m_ClearPathToExitPointStartOffset; //0x0070 
	char _0x007C[0x0004];
	D3DXVECTOR3 m_SoldierOffset; //0x0080 
	char _0x008C[0x0004];
	EntryClass m_EntryClass; //0x0090 
	char _0x0094[0x0004];
	GameAIEntryData* m_AIData; //0x0098 
	EntryInputActionMapsData* m_InputConceptDefinition; //0x00A0 
	__int32 m_ActionMapSettingsFlipYSchemeOverride; //0x00A8 
	char _0x00AC[0x0004];
	InputActionMappingsData* m_InputMapping; //0x00B0 
	Array<InputCurveData*>* m_InputCurves; //0x00B8 
	float m_MouseSensitivity; //0x00C0 
	float m_JoystickSensitivity; //0x00C4 
	EntryComponentHudData m_HudData; //0x00C8 
	__int32 m_EntryOrderNumber; //0x00D4 
	float m_EnterImpulse; //0x00D8 
	float m_EntryRadius; //0x00DC 
	EntrySpottingSettings m_EntrySpottingSettings; //0x00E0 
	__int32 m_TriggerEventOnKey; //0x00E4 
	__int32 m_CameraIndex; //0x00E8 
	unsigned char m_ForbiddenForHuman; //0x00EC 
	unsigned char m_IsAllowedToExitInAir; //0x00ED 
	unsigned char m_IsShielded; //0x00EE 
	unsigned char m_LockSoldierAimingToEntry; //0x00EF 
	unsigned char m_ShowSoldierInEntry; //0x00F0 
	unsigned char m_Show1pSoldierInEntry; //0x00F1 
	unsigned char m_ShowSoldierWeaponInEntry; //0x00F2 
	unsigned char m_Show1pSoldierInEntryForPlayerOnly; //0x00F3 
	unsigned char m_Show3pSoldierWeaponInEntry; //0x00F4 
	unsigned char m_ShowSoldierGearInEntry; //0x00F5 
	PoseConstraintsData m_PoseConstraints; //0x00F6 
	unsigned char m_AllowRagdollFromEntry; //0x00F9 
char _0x00FA[0x0006];

};//Size=0x0100

class SystemSettings : public DataContainer
{
public:
	char* m_Name; //0x0010 
	GamePlatform m_Platform; //0x0018 
char _0x001C[0x0004];

};//Size=0x0020

class ProjectileEntityData : public GamePhysicsEntityData
{
public:
	float m_InitialSpeed; //0x0090 
	float m_TimeToLive; //0x0094 
	DWORD m_MaxCount; //0x0098 
	float m_InitMeshHideTime; //0x009C 
	float m_VisualConvergeDistance; //0x00A0 
	float m_VisualConvergenceDelay; //0x00A4 
	float m_VisualConvergenceDuration; //0x00A8 
	float m_ProxyVisualConvergenceDelay; //0x00AC 
	float m_ProxyVisualConvergenceDuration; //0x00B0 
	char _0x00B4[0x0004];
	ExplosionEntityData* m_Explosion; //0x00B8 
	WeaponSuppressionData* m_SuppressionData; //0x00C0 
	char* m_AmmunitionType; //0x00C8 
	MaterialDecl m_MaterialPair; //0x00D0 
	EntityVoiceOverInfo* m_VoiceOverInfo; //0x00D8 
	unsigned char m_DetonateOnTimeout; //0x00E0 
	unsigned char m_ServerProjectileDisabled; //0x00E1 
	unsigned char m_HideOnDetonation; //0x00E2 
char _0x00E3[0x000D];

};//Size=0x00F0

class InvestigateSettignsCustomization
{
public:
	float m_MinTimeBeforeReinvestigatingSamePosition; //0x0000 
	InvestigateSettigns m_Settings; //0x0004 
	unsigned char m_Enabled; //0x0020 
char _0x0021[0x0003];

};//Size=0x0024

class GunSwayDispersionData
{
public:
	float m_MinAngle; //0x0000 
	float m_MaxAngle; //0x0004 
	float m_IncreasePerShot; //0x0008 
	float m_DecreasePerSecond; //0x000C 
	float m_NoFireDecreasePerSecond; //0x0010 
	float m_NoFireTimeThreshold; //0x0014 

};//Size=0x0018

class GunSwayRecoilData
{
public:
	float m_RecoilAmplitudeMax; //0x0000 
	float m_RecoilAmplitudeIncPerShot; //0x0004 
	float m_HorizontalRecoilAmplitudeIncPerShotMin; //0x0008 
	float m_HorizontalRecoilAmplitudeIncPerShotMax; //0x000C 
	float m_HorizontalRecoilAmplitudeMax; //0x0010 
	float m_RecoilAmplitudeDecreaseFactor; //0x0014 

};//Size=0x0018

class HealthComponentData : public ComponentData
{
public:
};//Size=0x0070

class GamePhysicsComponentData : public PhysicsComponentData
{
public:
	char _0x0094[0x0004];
	Array<EffectParameter*>* m_EffectParameters; //0x0098 

};//Size=0x00A0

class SpatialPrefabBlueprint : public PrefabBlueprint
{
public:
};//Size=0x0050

class ClientControllableHealthComponent : public ClientGameHealthComponent
{
public:
	char _0x0030[0x0010];
	float m_ControllableCurHealth; //0x0040 
char _0x0044[0x0004];

};//Size=0x0048

class CharacterPhysicsComponent : public PhysicsComponent
{
public:
char _0x0068[0x0090];

};//Size=0x00F8

class ReferenceObjectData : public GameObjectData
{
public:
	Blueprint* m_Blueprint; //0x0018 
	LinearTransform m_BlueprintTransform; //0x0020 
	ObjectVariation* m_ObjectVariation; //0x0060 
	StreamRealm m_StreamRealm; //0x0068 
	RadiosityTypeOverride m_RadiosityTypeOverride; //0x006C 
	DWORD m_LightmapResolutionScale; //0x0070 
	RenderingOverrides m_RenderingOverrides; //0x0074 
	unsigned char m_ForceSeparateEnlightenSystem; //0x0080 
	unsigned char m_CastSunShadowEnable; //0x0081 
	unsigned char m_CastReflectionEnable; //0x0082 
	unsigned char m_CastEnvmapEnable; //0x0083 
	unsigned char m_Excluded; //0x0084 
char _0x0085[0x000B];

};//Size=0x0090

class ServerEntryComponent : public ServerGameComponent
{
public:
char _0x0030[0x00C8];

};//Size=0x00F8

class BundleSettingsInfo
{
public:
	DWORD m_GroupIdentifier; //0x0000 
	char _0x0004[0x0004];
	char* m_GroupName; //0x0008 

};//Size=0x0010

class BundleHeapInfo
{
public:
	BundleHeapType m_HeapType; //0x0000 
	DWORD m_InitialSize; //0x0004 
	unsigned char m_AllowGrow; //0x0008 
char _0x0009[0x0003];

};//Size=0x000C

class DataContainerPolicyAsset : public Asset
{
public:
};//Size=0x0018

class TreeNodeBase : public DataContainer
{
public:
};//Size=0x0010

class ClientEntryComponent : public ClientGameComponent
{
public:
	char _0x0038[0x00D0];
	VeniceFPSCamera* m_VeniceFPSCamera; //0x0108 
	char _0x0110[0x0080];
	ClientPlayer* m_OwnerPlayer; //0x0190 
char _0x0198[0x0068];

};//Size=0x0200

class ClientPhysicsEntity : public ClientGameComponentEntity
{
public:
	ClientBFVehiclePhysicsComponent* m_PhysicsComponent; //0x0070 
char _0x0078[0x0018];

};//Size=0x0090

class Camera
{
public:
	char _0x0000[0x0010];
	D3DXMATRIX m_VehicleTransform; //0x0010 
	D3DXMATRIX m_ControllableTransform; //0x0050 
	D3DXVECTOR3 m_SoldierPosition; //0x0090 
	char _0x009C[0x000C];
	float m_ZoomLevel; //0x00A8 
	char _0x00AC[0x0054];
	StaticCameraData* m_StaticCameraData; //0x0100 
char _0x0108[0x0048];

};//Size=0x0150

class CameraData : public GameObjectData
{
public:
	float m_PreFadeTime; //0x0018 
	char _0x001C[0x0004];
	D3DXVECTOR3 m_OcclusionRayOffset; //0x0020 
	char _0x002C[0x0004];
	D3DXVECTOR3 m_CameraShakeLimits; //0x0030 
	char _0x003C[0x0004];
	float m_FadeTime; //0x0040 
	float m_FadeWaitTime; //0x0044 
	float m_NearPlane; //0x0048 
	float m_ShadowViewDistanceScale; //0x004C 
	float m_SoundOcclusion; //0x0050 
	float m_SoundListenerRadius; //0x0054 
	float m_SoundListenerFov; //0x0058 
	float m_ShakeFactor; //0x005C 
	LocalPlayerViewId m_ViewId; //0x0060 
	unsigned char m_StayFadedWhileStreaming; //0x0064 
	unsigned char m_EnableCameraShakeLimits; //0x0065 
char _0x0066[0x000A];

};//Size=0x0070

class PlayerEntryComponentData : public EntryComponentData
{
public:
	D3DXVECTOR3 m_AnimationAccelerationMultiplier; //0x0100 
	char _0x010C[0x0004];
	char* m_AntEntryID; //0x0110 
	AntEntryIdEnum m_AntEntryId; //0x0118 
	char _0x011C[0x0004];
	AntEnumeration* m_AntEntryEnumeration; //0x0120 
	CharacterPhysicsCollisionBehavior m_CharacterCollisionBehavior; //0x0128 
	unsigned char m_FilterVehicleInput; //0x012C 
	unsigned char m_EnableCharacterPhysicsPhantom; //0x012D 
char _0x012E[0x0002];

};//Size=0x0130

class BaseDisplaySettings : public SystemSettings
{
public:
	DWORD m_PreferredAdapterVendor; //0x0020 
	DWORD m_FullscreenHeight; //0x0024 
	DWORD m_FullscreenWidth; //0x0028 
	float m_FullscreenRefreshRate; //0x002C 
	__int32 m_FullscreenOutputIndex; //0x0030 
	__int32 m_PresentInterval; //0x0034 
	DWORD m_PresentImmediateThreshold; //0x0038 
	__int32 m_RenderAheadLimit; //0x003C 
	float m_GpuTimeoutTime; //0x0040 
	float m_LatencyLimitMs; //0x0044 
	float m_RecoveryTimeMaxMs; //0x0048 
	float m_RecoveryTimeRampMs; //0x004C 
	DWORD m_FrameResourceSegmentSize; //0x0050 
	DWORD m_FrameResourceNonSegmentSize; //0x0054 
	DWORD m_FrameResourceFreeFrameCount; //0x0058 
	float m_FrameResourceFreeFactor; //0x005C 
	float m_StereoDepth; //0x0060 
	float m_StereoConvergenceScale; //0x0064 
	float m_StereoSeparationScale; //0x0068 
	float m_StereoSoldierZoomConvergenceScale; //0x006C 
	DisplayDynamicRange m_DisplayDynamicRange; //0x0070 
	DWORD m_RenderTargetPoolBytes; //0x0074 
	DWORD m_RenderTargetPoolDebugX; //0x0078 
	DWORD m_RenderTargetPoolDebugY; //0x007C 
	float m_DepthBufferPoolEsramBudget; //0x0080 
	float m_GBufferPoolEsramBudget; //0x0084 
	float m_RenderTargetPoolEsramBudget; //0x0088 
	float m_HDRTargetEsramBudget; //0x008C 
	float m_PostRenderTargetPoolEsramBudget; //0x0090 
	float m_HalfResRenderTargetPoolEsramBudget; //0x0094 
	float m_ShadowSlicePoolEsramBudget; //0x0098 
	float m_HBAOPoolEsramBudget; //0x009C 
	unsigned char m_NullDriverEnable; //0x00A0 
	unsigned char m_CreateMinimalWindow; //0x00A1 
	unsigned char m_FullscreenModeEnable; //0x00A2 
	unsigned char m_Fullscreen; //0x00A3 
	unsigned char m_PresentEnable; //0x00A4 
	unsigned char m_WindowBordersEnable; //0x00A5 
	unsigned char m_VSyncEnable; //0x00A6 
	unsigned char m_TripleBufferingEnable; //0x00A7 
	unsigned char m_AutomaticComputeSyncEnable; //0x00A8 
	unsigned char m_LockRenderDispatchToPresent; //0x00A9 
	unsigned char m_FrameResourceFreeEnable; //0x00AA 
	unsigned char m_StereoEnable; //0x00AB 
	unsigned char m_StereoSplitScreenEnable; //0x00AC 
	unsigned char m_StereoVrEnable; //0x00AD 
	unsigned char m_Framebuffer10BitEnable; //0x00AE 
	unsigned char m_RenderTargetPoolEnable; //0x00AF 
	unsigned char m_RenderTargetPoolDebug; //0x00B0 
	unsigned char m_CpuHeapStompEnable; //0x00B1 
char _0x00B2[0x0006];

};//Size=0x00B8

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

class MeshProjectileEntityData : public ProjectileEntityData
{
public:
	D3DXVECTOR3 m_InitialAngularVelocity; //0x00F0 
	char _0x00FC[0x0004];
	MeshAsset* m_Mesh; //0x0100 
	EffectBlueprint* m_TrailEffect; //0x0108 
	EffectBlueprint* m_TrailEffect1p; //0x0110 
	float m_InstantAttachableTestDistance; //0x0118 
	float m_InstantAttachableVisualConvergenceDelay; //0x011C 
	float m_InstantAttachableVisualConvergenceDuration; //0x0120 
	float m_MaxAttachableInclination; //0x0124 
	float m_UnspawnAfterDetonationDelay; //0x0128 
	unsigned char m_IsAttachable; //0x012C 
	unsigned char m_InstantAttachableTestUnderReticule; //0x012D 
	unsigned char m_UprightAttachable; //0x012E 
	unsigned char m_ExtraDamping; //0x012F 

};//Size=0x0130

class FireEffectData
{
public:
	D3DXVECTOR3 m_Offset; //0x0000 
	char _0x000C[0x0004];
	D3DXVECTOR3 m_Rotation; //0x0010 
	char _0x001C[0x0004];
	D3DXVECTOR3 m_ZoomOffset; //0x0020 
	char _0x002C[0x0004];
	D3DXVECTOR3 m_ZoomRotation; //0x0030 
	char _0x003C[0x0004];
	EffectBlueprint* m_Effect; //0x0040 
	unsigned char m_UseZoomOffset; //0x0048 
	unsigned char m_UseZoomRotation; //0x0049 
	unsigned char m_DisableDuringZoom; //0x004A 
	unsigned char m_UpdateTransform; //0x004B 
	unsigned char m_StopLoopingEffects; //0x004C 
char _0x004D[0x0003];

};//Size=0x0050

class BoltActionData
{
public:
	float m_BoltActionDelay; //0x0000 
	float m_BoltActionTime; //0x0004 
	float m_BoltActionTimeCompletedFraction; //0x0008 
	unsigned char m_HoldBoltActionUntilFireRelease; //0x000C 
	unsigned char m_HoldBoltActionUntilZoomRelease; //0x000D 
	unsigned char m_ForceBoltActionOnFireTrigger; //0x000E 
	unsigned char m_UnZoomOnBoltAction; //0x000F 
	unsigned char m_ReturnToZoomAfterBoltAction; //0x0010 
	unsigned char m_TriggerBoltActionWhenOutOfAmmo; //0x0011 
char _0x0012[0x0002];

};//Size=0x0014

class HoldAndReleaseData
{
public:
	float m_MaxHoldTime; //0x0000 
	float m_MinPowerModifier; //0x0004 
	float m_MaxPowerModifier; //0x0008 
	float m_PowerIncreasePerSecond; //0x000C 
	float m_Delay; //0x0010 
	float m_KilledHoldingPowerModifier; //0x0014 
	unsigned char m_ForceFireWhenKilledHolding; //0x0018 
	unsigned char m_PreciseReplicatedPowerModifier; //0x0019 
	unsigned char m_SecondaryActionCancelHoldAndRelease; //0x001A 
char _0x001B[0x0001];

};//Size=0x001C

class RecoilData
{
public:
	float m_MaxRecoilAngleX; //0x0000 
	float m_MinRecoilAngleX; //0x0004 
	float m_MaxRecoilAngleY; //0x0008 
	float m_MinRecoilAngleY; //0x000C 
	float m_MaxRecoilAngleZ; //0x0010 
	float m_MinRecoilAngleZ; //0x0014 
	float m_MaxRecoilFov; //0x0018 
	float m_MinRecoilFov; //0x001C 
	unsigned char m_RecoilFollowsDispersion; //0x0020 
char _0x0021[0x0003];

};//Size=0x0024

class FiringDispersionData
{
public:
	float m_MinAngle; //0x0000 
	float m_MaxAngle; //0x0004 
	float m_IncreasePerShot; //0x0008 
	float m_DecreasePerSecond; //0x000C 

};//Size=0x0010

class AccuracyPenaltySettings
{
public:
	float m_SprintMultiplier; //0x0000 
	float m_CrouchMultiplier; //0x0004 
	float m_ProneMultiplier; //0x0008 
	float m_MovingVehicleMultiplier; //0x000C 
	float m_VehicleStillMultiplier; //0x0010 
	float m_SprintSpeed; //0x0014 
	float m_MovingVehicleSpeed; //0x0018 

};//Size=0x001C

class TinyPiecewiseLinearCurve
{
public:
	float m_X0; //0x0000 
	float m_Y0; //0x0004 
	float m_X1; //0x0008 
	float m_Y1; //0x000C 

};//Size=0x0010

class InvestigateSettignsCustomizations : public InvestigateSettignsCustomization
{
public:
	InvestigateSettignsCustomization m_Combat; //0x0024 
	InvestigateSettignsCustomization m_CombatSearchArea; //0x0048 
	InvestigateSettignsCustomization m_SearchArea; //0x006C 
	unsigned char m_Enabled; //0x0090 
char _0x0091[0x0003];

};//Size=0x0094

class EvasiveBucketTimeSettings
{
public:
	Array<Float32*>* m_SprintDamageBucketTimes; //0x0000 
	Array<Float32*>* m_CrouchDamageBucketTimes; //0x0008 
	Array<Float32*>* m_ProneDamageBucketTimes; //0x0010 
	Array<Float32*>* m_MovingVehicleDamageBucketTimes; //0x0018 
	Array<Float32*>* m_VehicleStillDamageBucketTimes; //0x0020 
	float m_SprintSpeed; //0x0028 
	float m_MovingVehicleSpeed; //0x002C 

};//Size=0x0030

class GunSwayBaseMoveJumpData : public GunSwayDispersionData
{
public:
	GunSwayDispersionData m_Moving; //0x0018 
	GunSwayDispersionData m_Jumping; //0x0030 
	GunSwayDispersionData m_Sprinting; //0x0048 
	GunSwayRecoilData m_Recoil; //0x0060 

};//Size=0x0078

class GunSwayDispersionModData
{
public:
	float m_MinAngleModifier; //0x0000 
	float m_MaxAngleModifier; //0x0004 
	float m_IncreasePerShotModifier; //0x0008 
	float m_DecreasePerSecondModifier; //0x000C 
	float m_NoFireDecreasePerSecondModifier; //0x0010 
	float m_NoFireTimeThresholdModifier; //0x0014 
	float m_FirstShotDispersionModifier; //0x0018 

};//Size=0x001C

class GunSwayBaseMoveData : public GunSwayDispersionData
{
public:
	GunSwayDispersionData m_Moving; //0x0018 
	GunSwayRecoilData m_Recoil; //0x0030 

};//Size=0x0048

class GameHealthComponentData : public HealthComponentData
{
public:
};//Size=0x0070

class ControllablePhysicsComponentData : public GamePhysicsComponentData
{
public:
};//Size=0x00A0

class SubWorldData : public SpatialPrefabBlueprint
{
public:
	MaterialGridData* m_RuntimeMaterialGrid; //0x0050 
	BlueprintPersistenceSetting m_PersistenceSetting; //0x0058 
	char _0x005C[0x0004];
	AutoAssetCollector* m_AutoAssetCollector; //0x0060 
	unsigned char m_IsWin32SubLevel; //0x0068 
	unsigned char m_IsXenonSubLevel; //0x0069 
	unsigned char m_IsPs3SubLevel; //0x006A 
	unsigned char m_IsGen4aSubLevel; //0x006B 
	unsigned char m_IsGen4bSubLevel; //0x006C 
	unsigned char m_IsAndroidSubLevel; //0x006D 
	unsigned char m_IsIOSSubLevel; //0x006E 
	unsigned char m_IsOSXSubLevel; //0x006F 
	unsigned char m_IsLinuxSubLevel; //0x0070 
char _0x0071[0x0007];

};//Size=0x0078

class Vec4
{
public:
	float m_x; //0x0000 
	float m_y; //0x0004 
	float m_z; //0x0008 
	float m_w; //0x000C 

};//Size=0x0010

class SurfaceShaderInstanceDataStruct
{
public:
	SurfaceShaderBaseAsset* m_Shader; //0x0000 
	Array<BoolShaderParameter*>* m_BoolParameters; //0x0008 
	Array<VectorShaderParameter*>* m_VectorParameters; //0x0010 
	Array<VectorArrayShaderParameter*>* m_VectorArrayParameters; //0x0018 
	Array<TextureShaderParameter*>* m_TextureParameters; //0x0020 

};//Size=0x0028

class InputActionData : public DataContainer
{
public:
	unsigned char m_IsAnalog; //0x0010 
	unsigned char m_NegateValue; //0x0011 
char _0x0012[0x0006];

};//Size=0x0018

class ClientCharacterHealthComponent : public ClientControllableHealthComponent
{
public:
char _0x0048[0x0028];

};//Size=0x0070

class ClientCharacterMasterPhysicsComponent : public CharacterPhysicsComponent
{
public:
char _0x00F8[0x00C0];

};//Size=0x01B8

class LogicReferenceObjectData : public ReferenceObjectData
{
public:
	LocalPlayerId m_LocalPlayerId; //0x0090 
	SubRealm m_SubRealm; //0x0094 
char _0x0098[0x0008];

};//Size=0x00A0

class IUISystem
{
public:
char _0x0000[0x0018];

};//Size=0x0018

class ServerPlayerEntryComponent : public ServerEntryComponent
{
public:
};//Size=0x00F8

class Tool
{
public:
	char _0x0000[0x0008];
	WeaponData* m_WeaponData; //0x0008 
char _0x0010[0x0008];

};//Size=0x0018

class ControllableEntityData : public GamePhysicsEntityData
{
public:
	TeamId m_DefaultTeam; //0x0090 
	float m_LowHealthThreshold; //0x0094 
	MaterialDecl m_MaterialPair; //0x0098 
	char _0x009C[0x0004];
	Array<Int32*>* m_SuppressedInputs; //0x00A0 
	unsigned char m_UsePrediction; //0x00A8 
	unsigned char m_ResetTeamOnLastPlayerExits; //0x00A9 
	unsigned char m_Immortal; //0x00AA 
	unsigned char m_FakeImmortal; //0x00AB 
	unsigned char m_ForceForegroundRendering; //0x00AC 
char _0x00AD[0x0003];

};//Size=0x00B0

class VehicleHealthZoneData
{
public:
	float m_MaxHealth; //0x0000 
	float m_MaxShieldHealth; //0x0004 
	float m_MinDamageAngle; //0x0008 
	float m_DamageAngleMultiplier; //0x000C 
	Curve2D* m_DamageAngleMultiplierCurve; //0x0010 
	float m_VerticalFactor; //0x0018 
	unsigned char m_UseDamageAngleCalculation; //0x001C 
char _0x001D[0x0003];

};//Size=0x0020

class BoneComponentData : public GameComponentData
{
public:
};//Size=0x0070

class BlueprintBundleSettings : public BundleHeapInfo
{
public:
	char _0x000C[0x0004];
	BundleSettingsInfo m_BundleSettingsInfo; //0x0010 

};//Size=0x0020

class UnlockAssetBase : public DataContainerPolicyAsset
{
public:
	UnlockUserDataBase* m_UnlockUserData; //0x0018 
	char* m_DebugUnlockId; //0x0020 
	DWORD m_Identifier; //0x0028 
	DWORD m_UnlockScore; //0x002C 
	DWORD m_RequiredKitRank; //0x0030 
	char _0x0034[0x0004];
	char* m_KitRankAwardCode; //0x0038 
	DWORD m_SubCategoryIdentifier; //0x0040 
	char _0x0044[0x0004];
	UnlockAssetBase* m_NextLevelUnlockAsset; //0x0048 
	unsigned char m_AutoAvailable; //0x0054 
	unsigned char m_HiddenInProgression; //0x0055 
char _0x0056[0x0002];

};//Size=0x0058

class MovingBodyData : public DataContainer
{
public:
	float m_Mass; //0x0010 
	float m_Inertia; //0x0014 

};//Size=0x0018

class StatsCategoryBaseData : public TreeNodeBase
{
public:
	Array<StatsCategoryBaseData*>* m_BaseSubCategories; //0x0010 
	char* m_Code; //0x0018 

};//Size=0x0020

class PartPhysicsComponent : public PhysicsComponent
{
public:
char _0x0068[0x0040];

};//Size=0x00A8

class ClientBoneComponent : public ClientGameComponent
{
public:
};//Size=0x0038

class ClientPlayerEntryComponent : public ClientEntryComponent
{
public:
char _0x0200[0x0380];

};//Size=0x0580

class ClientControllableEntity : public ClientPhysicsEntity
{
public:
	char _0x0090[0x00A0];
	ClientVehicleSpawnEntity* m_ClientVehicleSpawnEntity; //0x0130 
	char _0x0138[0x0010];
	ShooterComponentHolder* m_EntryHolder; //0x0148  Array<ClientPlayerEntryComponent*> m_EntryComponents
	char _0x0150[0x0070];
	ClientVehicleHealthComponent* m_HealthComponent; //0x01C0 
char _0x01C8[0x0038];

};//Size=0x0200

class SpatialReferenceObjectData : public ReferenceObjectData
{
public:
	LocalPlayerId m_LocalPlayerId; //0x0090 
char _0x0094[0x000C];

};//Size=0x00A0

class ClientProjectileEntity : public ClientPhysicsEntity
{
public:
	char _0x0090[0x0090];
	D3DXVECTOR4 m_Velocity; //0x0120  fabs == m_InitialSpeed
	char _0x0130[0x0004];
	float m_AirTime; //0x0134 
char _0x0138[0x0008];

};//Size=0x0140

class ClientCharacterCameraComponent : public ClientGameComponent
{
public:
char _0x0038[0x0088];

};//Size=0x00C0

class TargetCamera : public Camera
{
public:
char _0x0150[0x0010];

};//Size=0x0160

class TargetCameraData : public CameraData
{
public:
	Array<HudData*>* m_Hud; //0x0070 
char _0x0078[0x0008];

};//Size=0x0080

class TurnEffectData
{
public:
	float m_MaxRollAngle; //0x0000 
	float m_MaxPitchAngle; //0x0004 
	float m_YawVelocityThreshhold; //0x0008 
	float m_VelocityThreshhold; //0x000C 
	float m_SafeTime; //0x0010 
	float m_BeginTime; //0x0014 
	float m_HoldTime; //0x0018 
	float m_EndTime; //0x001C 

};//Size=0x0020

class BlurEffectData
{
public:
	float m_DispersionStrength; //0x0000 
	float m_DispersionThreshhold; //0x0004 
	float m_ExplosionStrength; //0x0008 
	float m_BulletStrength; //0x000C 
	float m_ExplosionFalloffSpeed; //0x0010 
	float m_BulletFalloffSpeed; //0x0014 

};//Size=0x0018

class VoiceOverValue : public DataContainer
{
public:
};//Size=0x0010

class WeaponModifierBase : public DataContainer
{
public:
	__int32 m_ApplyOrder; //0x0010 
	unsigned char m_DynamicUpdateEnabled; //0x0014 
char _0x0015[0x0003];

};//Size=0x0018

class ScreenInfo
{
public:
	__int32 m_width; //0x0000 
	__int32 m_height; //0x0004 
	__int32 m_winWidth; //0x0008 
	__int32 m_winHeigh; //0x000C 
	float m_fullscreenRefreshRate; //0x0010 

};//Size=0x0014

class PiecewiseLinearCurve
{
public:
	Array<CurvePoint*>* m_Points; //0x0000 
	unsigned char m_InterpolateCurve; //0x0008 
char _0x0009[0x0007];

};//Size=0x0010

class StanceToggleSwitchMapData
{
public:
	__int32 m_Action; //0x0000 
	char _0x0004[0x0004];
	Array<int> m_Stances; //0x0008 

};//Size=0x0010

class VehicleEntryComponentData : public PlayerEntryComponentData
{
public:
	__int32 m_NumberOfStances; //0x0130 
	CharacterPoseType m_AnimationDistanceCullingPose; //0x0134 
	EntryComponentSoundData* m_EntryComponentSound; //0x0138 
	unsigned char m_StancesEnabled; //0x0140 
	unsigned char m_UpdateCharacterInVehicleEntry; //0x0141 
	unsigned char m_AllowAnimationDistanceCulling; //0x0142 
char _0x0143[0x000D];

};//Size=0x0150

class DxDisplaySettings : public BaseDisplaySettings
{
public:
	Array<Int32*>* m_DebugBreakIgnoredIDs; //0x00B8 
	DWORD m_NvidiaMinDriverVersion; //0x00C0 
	char _0x00C4[0x0004];
	char* m_AmdMinDriverVersion; //0x00C8 
	char* m_IntelMinDriverVersion; //0x00D0 
	char* m_AmdMinDriverPackagingVersion; //0x00D8 
	unsigned char m_WarpDriverEnable; //0x00E0 
	unsigned char m_DebugInfoEnable; //0x00E1 
	unsigned char m_DebugInfoOutputEnable; //0x00E2 
	unsigned char m_DebugBreakOnErrorEnable; //0x00E3 
	unsigned char m_DebugBreakOnWarningEnable; //0x00E4 
	unsigned char m_DebugBreakOnInfoEnable; //0x00E5 
	unsigned char m_MultiGpuValidationEnable; //0x00E6 
	unsigned char m_DxDiagDriverDetectionEnable; //0x00E7 
	unsigned char m_NvApiEnable; //0x00E8 
	unsigned char m_MinDriverRequired; //0x00E9 
	unsigned char m_PixProfilingEnable; //0x00EA 
	unsigned char m_NvHlslIntrinsicsEnable; //0x00EB 
	unsigned char m_AmdHlslIntrinsicsEnable; //0x00EC 
char _0x00ED[0x0003];

};//Size=0x00F0

class ObjectBlueprint : public Blueprint
{
public:
	EntityData* m_Object; //0x0040 

};//Size=0x0048

class TypeInfo : public MemberInfo
{
public:
	TypeInfo* m_Next; //0x0008 
	WORD m_RuntimeID; //0x0010 
	WORD m_Flags; //0x0012 
char _0x0014[0x0004];

TypeInfoData* GetTypeData() { return (TypeInfoData*)m_Data; }
};//Size=0x0018

class TypeInfoData : public MemberInfoData
{
public:
	__int32 m_TotalSize; //0x000A 
	char _0x000E[0x0002];
	ModuleInfo* m_ModuleInfo; //0x0010 

};//Size=0x0018

class GhostedProjectileEntityData : public MeshProjectileEntityData
{
public:
	float m_ProxyConvergenceDelay; //0x0130 
	float m_ProxyConvergenceDuration; //0x0134 
	unsigned char m_ProxyConvergenceInstantOnAttach; //0x0138 
	unsigned char m_ForceProxyConvergence; //0x0139 
	unsigned char m_ConvergenceUsingInitialSpeed; //0x013A 
char _0x013B[0x0005];

};//Size=0x0140

class AntRef
{
public:
char _0x0000[0x0014];

};//Size=0x0014

class FakePhysicsData : public DataContainer
{
public:
	FakePhysicsData* m_ChildFakePhysics; //0x0010 
	float m_StartSpeed; //0x0018 
	float m_GravityModifier; //0x001C 
	float m_StartDampening; //0x0020 
	float m_EndDampening; //0x0024 
	float m_MinSpeed; //0x0028 
	float m_MaxSpeed; //0x002C 
	float m_Mass; //0x0030 
char _0x0034[0x0004];

};//Size=0x0038

class ShotConfigData
{
public:
	D3DXVECTOR3 m_InitialPosition; //0x0000 
	char _0x000C[0x0004];
	D3DXVECTOR3 m_InitialDirection; //0x0010 
	char _0x001C[0x0004];
	D3DXVECTOR3 m_InitialSpeed; //0x0020 
	char _0x002C[0x0004];
	D3DXVECTOR3 m_CameraSpawnOffset; //0x0030 
	char _0x003C[0x0004];
	Array<InitialDirectionScaleByPitchData*>* m_InitialDirectionScaleByPitch; //0x0040 
	Array<InitialSpeedScaleByPitchData*>* m_InitialSpeedScaleByPitch; //0x0048 
	float m_InheritWeaponSpeedAmount; //0x0050 
	char _0x0054[0x0004];
	ExplosionEntityData* m_MuzzleExplosion; //0x0058 
	BulletEntityData* m_BulletEntityData; //0x0060 
	ProjectileEntityData* m_SecondaryProjectileData; //0x0068 
	Projectile* m_ProjectileBlueprint; //0x0070 
	Projectile* m_SecondaryProjectile; //0x0078 
	float m_SpawnDelay; //0x0080 
	DWORD m_NumberOfBulletsPerShell; //0x0084 
	DWORD m_NumberOfBulletsPerShot; //0x0088 
	DWORD m_NumberOfBulletsPerBurst; //0x008C 
	unsigned char m_UseSpawnDelayForQuickSwitch; //0x0090 
	unsigned char m_RelativeTargetAiming; //0x0091 
	unsigned char m_ForceSpawnToCamera; //0x0092 
	unsigned char m_SpawnVisualAtWeaponBone; //0x0093 
	unsigned char m_ActiveForceSpawnToCamera; //0x0094 
char _0x0095[0x000B];

};//Size=0x00A0

class AmmoConfigData
{
public:
	__int32 m_MagazineCapacity; //0x0000 
	__int32 m_NumberOfMagazines; //0x0004 
	__int32 m_StripperClipSize; //0x0008 
	DWORD m_TraceFrequency; //0x000C 
	DWORD m_AmmoPickupMinAmount; //0x0010 
	DWORD m_AmmoPickupMaxAmount; //0x0014 
	float m_AutoReplenishDelay; //0x0018 
	float m_AutoReplenishSpeedupFactor; //0x001C 
	float m_AmmoBagPickupDelayMultiplier; //0x0020 
	__int32 m_AmmoBagPickupAmount; //0x0024 
	PersistentAmmoData* m_PersistentAmmoSettings; //0x0028 
	unsigned char m_SpawnWithoutAmmo; //0x0030 
	unsigned char m_AutoReplenishMagazine; //0x0031 
	unsigned char m_AutoReplenishWhenInactive; //0x0032 
char _0x0033[0x0005];

};//Size=0x0038

class OverHeatData : public FireEffectData
{
public:
	float m_HeatPerBullet; //0x0050 
	float m_HeatDropPerSecond; //0x0054 
	float m_OverHeatDropDelay; //0x0058 
	float m_OverHeatPenaltyTime; //0x005C 
	float m_OverHeatThreshold; //0x0060 
	unsigned char m_StopZoomWhenOverheated; //0x0064 
char _0x0065[0x000B];

};//Size=0x0070

class FireLogicData : public HoldAndReleaseData
{
public:
	BoltActionData m_BoltAction; //0x001C 
	RecoilData m_Recoil; //0x0030 
	__int32 m_FireInputAction; //0x0054 
	__int32 m_ReloadInputAction; //0x0058 
	__int32 m_CycleFireModeInputAction; //0x005C 
	float m_TriggerPullWeight; //0x0060 
	float m_RateOfFire; //0x0064 
	float m_RateOfFireForBurst; //0x0068 
	float m_BurstsPerMinute; //0x006C 
	float m_ClientFireRateMultiplier; //0x0070 
	float m_ReloadDelay; //0x0074 
	float m_PostReloadDelay; //0x0078 
	float m_BridgeDelay; //0x007C 
	float m_ReloadTime; //0x0080 
	char _0x0084[0x0004];
	Array<Float32*>* m_ReloadTimerArray; //0x0088 
	float m_ReloadTimeBulletsLeft; //0x0090 
	float m_ReloadThreshold; //0x0094 
	float m_PreFireDelay; //0x0098 
	float m_PendingFireWindow; //0x009C 
	float m_AutomaticDelay; //0x00A0 
	Array<FireLogicType*>* m_FireLogicTypeArray; //0x00B0 
	unsigned char m_CorrectedAutomaticFireReplication; //0x00B8 
	unsigned char m_HoldOffReloadUntilFireRelease; //0x00B9 
	unsigned char m_HoldOffReloadUntilZoomRelease; //0x00BA 
	unsigned char m_ForceReloadActionOnFireTrigger; //0x00BB 
	unsigned char m_ClosedBolt; //0x00BC 
	unsigned char m_FireLogicSwitchOnZoom; //0x00BD 
	unsigned char m_AlwaysAutoReload; //0x00BE 
	unsigned char m_AutoReloadIgnoreFireTriggerPressed; //0x00BF 

};//Size=0x00C0

class WeaponDispersion : public FiringDispersionData
{
public:
	FiringDispersionData m_CrouchDispersion; //0x0010 
	FiringDispersionData m_ProneDispersion; //0x0020 
	float m_JumpDispersionAngle; //0x0030 
	float m_ProneTransitionDispersionAngle; //0x0034 
	float m_MoveDispersionAngle; //0x0038 
	float m_MoveZoomedDispersionAngle; //0x003C 
	float m_DecreasePerSecond; //0x0040 

};//Size=0x0044

class InteractionEntityData : public SpatialEntityData
{
public:
	float m_UseWithinRadius; //0x0060 
	float m_UseWithinAngle; //0x0064 
	float m_UseWithinWidth; //0x0068 
	float m_UseWithinHeight; //0x006C 
	float m_UseWithinXOffset; //0x0070 
	float m_UseWithinYOffset; //0x0074 
	float m_UseMinVelocityStart; //0x0078 
	float m_UseMinVelocityEnd; //0x007C 
	float m_UseMinVelocityEndRadius; //0x0080 
	float m_FacingInteractorAngle; //0x0084 
	DWORD m_MaxUses; //0x0088 
	float m_DisplayWithinRadius; //0x008C 
	SoundAsset* m_PreInteractionSoundEffect; //0x0090 
	unsigned char m_TestIfOccluded; //0x0098 
	unsigned char m_AllowInteractionViaRemoteEntry; //0x0099 
	unsigned char m_UseDisplayWithinRadius; //0x009A 
	unsigned char m_Enabled; //0x009B 
char _0x009C[0x0004];

};//Size=0x00A0

class GameTweakAITargeting : public TinyPiecewiseLinearCurve
{
public:
	float m_ReaquireTargetDistanceThreshold; //0x0010 
	TinyPiecewiseLinearCurve m_FiringDelayAfterReaquiringTarget; //0x0014 
	TinyPiecewiseLinearCurve m_TimeUntilDamageFromStartOfFirstBurst; //0x0024 
	TinyPiecewiseLinearCurve m_TimeUntilDamageTimeIsFullyRestored; //0x0034 
	TinyPiecewiseLinearCurve m_TimeUntilAccurateFromStartOfFirstDamage; //0x0044 
	TinyPiecewiseLinearCurve m_TimeUntilAccurateTimeIsFullyRestored; //0x0054 
	AccuracyPenaltySettings m_AccuracyPenaltySettings; //0x0064 
	__int32 m_AimingAtAngleThreshold; //0x0080 

};//Size=0x0084

class GameTweakCommon
{
public:
	Array<SensingArea*>* m_SensingAreas; //0x0000 
	SensingAreaModifier m_SensingAreasAlertedModifier; //0x0008 
	float m_SensingConeRange; //0x0010 
	float m_SensingConeRangeAgainstVehicles; //0x0014 
	float m_SensingConeRangeWhenAlerted; //0x0018 
	float m_SensingConeAngle; //0x001C 
	float m_SensingConeAngleWhenAlerted; //0x0020 
	float m_SensingConeAngleAbove; //0x0024 
	float m_SensingConeAngleBelow; //0x0028 
	float m_SensingShotFiredDistance; //0x002C 
	float m_SensingHumanDrivenVehicleDistance; //0x0030 
	float m_SensingExplosionDistance; //0x0034 
	float m_SensingGrenadeDistance; //0x0038 
	float m_SensingStaticTargetObjectDistance; //0x003C 
	float m_SensingMovingTargetObjectDistance; //0x0040 
	TinyPiecewiseLinearCurve m_DistanceToAwareTimeCurveCentral; //0x0044 
	float m_AwareCurveCentralAngle; //0x0054 
	float m_PeripheralConeRangeWhenIdle; //0x0058 
	TinyPiecewiseLinearCurve m_DistanceToAwareTimeCurvePeripheral; //0x005C 
	float m_AwareStandingPenaltyMultiplier; //0x006C 
	float m_AwareToAlertTime; //0x0070 
	float m_CorpseAlertDistance; //0x0074 
	float m_VisibilityAcummulationTime; //0x0078 
	float m_HighIntensityRadius; //0x007C 
	float m_InvestigateSeenEnemyAlertPercent; //0x0080 
	float m_ConcealmentCoolDownTime; //0x0084 
	float m_ConcealmentDisableAtDistance; //0x0088 
	float m_PassiveTime; //0x008C 
	Array<GrenadeTokenList*>* m_GrenadeTokens; //0x0090 
	float m_MeleeChargeTokenMinimumTime; //0x0098 
	float m_MeleeChargeTokenMaximumTime; //0x009C 
	__int32 m_MeleeChargeTokenCount; //0x00A0 
	float m_MeleeChargeMinimumCooldownTimer; //0x00A4 
	__int32 m_SimultaneousChargeCount; //0x00A8 
	__int32 m_SimultaneousVehicleUsage; //0x00AC 
	float m_MinVehicleBookingDelayOnTokenAvailable; //0x00B0 
	float m_MaxVehicleBookingDelayOnTokenAvailable; //0x00B4 
	float m_EnemyMinTimeInMediumIntensity; //0x00B8 
	float m_MaxTimeSinceEnemyLostToStartCombatInvestigate; //0x00BC 
	float m_MaxTimeSinceEnemyLostToSearch; //0x00C0 
	float m_MinTimeToStayAlertWhenAlertedBySomethingOtherThanSighting; //0x00C4 
	float m_FallbackToSearchAreaWhenNeverSeenEnemyTime; //0x00C8 
	float m_MinTimeFromRecentThreatToSearchArea; //0x00CC 
	InvestigateSettignsCustomizations m_InvestigateCustomization; //0x00D0 
	char _0x0164[0x0004];
	Array<TeamId*>* m_TeamsWithAwareness; //0x0168 
	float m_MaxLastKnownPositionShareDistance; //0x0170 
	float m_CentralAngle; //0x0174 
	float m_CentralViewDistance; //0x0178 
	float m_PeripheralAngle; //0x017C 
	float m_PeripheralViewDistance; //0x0180 
	float m_BeingChargedDetectDistance; //0x0184 
	float m_BeingChargedAngleLimit; //0x0188 
	unsigned char m_UseNewSensingAreas; //0x018C 
	unsigned char m_InstantlyAlertedByCorpse; //0x018D 
	unsigned char m_AllowMultipleCorpseInvestigators; //0x018E 
	unsigned char m_EnableVisibilityAcummulation; //0x018F 
	unsigned char m_IgnoreSoundWhenAlerted; //0x0190 
	unsigned char m_CombatInvestigateCanExceedMaxSearchTime; //0x0191 
	unsigned char m_AreaSearchWithoutCombatInvestigate; //0x0192 
	unsigned char m_InvestigateLatestSound; //0x0193 
	unsigned char m_IncludeTerrainInVisionTests; //0x0194 
	unsigned char m_EnableLastKnownPositionSharing; //0x0195 
	unsigned char m_CorpsesCauseAlertnessIncrease; //0x0196 
	unsigned char m_CorpsesTriggerSearchArea; //0x0197 
	unsigned char m_AlertedByFriendlyCombatActions; //0x0198 
	unsigned char m_UseInvestigationPriorities; //0x0199 
	unsigned char m_BeingShotAtTriggerSearchArea; //0x019A 
	unsigned char m_BeingChargedCausesAlert; //0x019B 
char _0x019C[0x0004];

};//Size=0x01A0

class GameTweakPanicBehavior
{
public:
	float m_PrePanicTime; //0x0000 
	float m_TotalPanicTime; //0x0004 
	float m_PanicBlastRadiusPercentage; //0x0008 
	unsigned char m_PanicOnGrenade; //0x000C 
	unsigned char m_PanicOnWeaponSuppression; //0x000D 
	unsigned char m_PanicOnVehicleSuppression; //0x000E 
char _0x000F[0x0001];

};//Size=0x0010

class GameTweakSniper
{
public:
	float m_GlintToShotFiredDelay; //0x0000 
	float m_HideAfterShotDelay; //0x0004 
	float m_TimeUpBeforeScopeGlint; //0x0008 
	float m_TimeHidden; //0x000C 

};//Size=0x0010

class GameTweakBucketDamage
{
public:
	Array<Float32*>* m_PlayerDamageBucketTimes; //0x0000 
	EvasiveBucketTimeSettings m_EvasiveBucketTimeSettings; //0x0008 
	float m_DamageMultiplier; //0x0038 
char _0x003C[0x0004];

};//Size=0x0040

class GameAIDifficultyData : public DataContainer
{
public:
};//Size=0x0010

class TargetCameraCallback
{
public:
char _0x0000[0x0008];

};//Size=0x0008

class GunSwayStandData : public GunSwayBaseMoveJumpData
{
public:
	GunSwayBaseMoveJumpData m_Zoom; //0x0078 

};//Size=0x00F0

class GunSwayStanceZoomModifierData : public GunSwayDispersionModData
{
public:
	GunSwayDispersionModData m_MovingDispersionMod; //0x001C 
	GunSwayDispersionModData m_SprintingDispersionMod; //0x0038 
	float m_RecoilMagnitudeMod; //0x0054 
	float m_RecoilAngleMod; //0x0058 
	float m_RecoilAngleOffset; //0x005C 
	float m_FirstShotRecoilMod; //0x0060 
	float m_RecoilAmplitudeDecreaseFactorMod; //0x0064 

};//Size=0x0068

class GunSwayCrouchProneData : public GunSwayBaseMoveData
{
public:
	GunSwayBaseMoveData m_Zoom; //0x0048 

};//Size=0x0090

class GunSwayStanceTransition : public GunSwayDispersionData
{
public:
	float m_CoolDown; //0x0018 

};//Size=0x001C

class WeaponSwayData : public DataContainer
{
public:
};//Size=0x0010

class ControllableHealthComponentData : public GameHealthComponentData
{
public:
};//Size=0x0070

class VehiclePhysicsComponentData : public ControllablePhysicsComponentData
{
public:
	VehiclePhysicsActionData* m_VehiclePhysicsAction; //0x00A0 
	ProximityTrackerData* m_ProximityTrackerData; //0x00A8 

};//Size=0x00B0

class PhysicsActionBaseData : public EntityData
{
public:
	float m_BlendFactor; //0x0018 
	float m_InputBlendFactor; //0x001C 
	float m_ClampLinAcc; //0x0020 
	float m_ClampAngAcc; //0x0024 
	AudioCurve m_BlendFactorCurve; //0x0028 
	AudioCurve m_CollisionResponseCurve; //0x0038 

};//Size=0x0048

class GameAIWeaponData : public Asset
{
public:
};//Size=0x0018

class AimInputEntityData : public EntityData
{
public:
};//Size=0x0018

class JobAffinitySet
{
public:
char _0x0000[0x001E];

};//Size=0x001E

class IKeyboard
{
public:
	virtual void Init(); //
	virtual void Release(); //
	virtual void PreFrameUpdate(float); //
	virtual void Update(float); //
	virtual bool IsDown(InputDeviceKeys); //
	virtual bool WentDown(InputDeviceKeys); //
	virtual bool WentUp(InputDeviceKeys); //
	virtual void EnableTypingMode(bool); //
	virtual bool GetBufferedAction(void*); //

};//Size=0x0008

class LandingGearConditionData
{
public:
	float m_Height; //0x0000 
	float m_Velocity; //0x0004 
	float m_Angle; //0x0008 

};//Size=0x000C

class LevelPreloadInfo
{
public:
	Array<CString*>* m_PreloadedBlueprintBundles; //0x0000 
	Array<SubLevelPreloadInfo*>* m_SubLevelPreloadInfoMap; //0x0008 

};//Size=0x0010

class LevelDescription
{
public:
	char* m_Name; //0x0000 
	char* m_Description; //0x0008 
	Array<LevelDescriptionComponent*>* m_Components; //0x0010 
	unsigned char m_IsMultiplayer; //0x0018 
	unsigned char m_IsCoop; //0x0019 
	unsigned char m_IsMenu; //0x001A 
	unsigned char m_IsEpilogue; //0x001B 
char _0x001C[0x0004];

};//Size=0x0020

class WorldData : public SubWorldData
{
public:
	Array<SubWorldDataComponent*>* m_Components; //0x0078 
	unsigned char m_IsProceduralLevel; //0x0080 
char _0x0081[0x0007];

};//Size=0x0088

class AimingConstraintsData
{
public:
	float m_MinYaw; //0x0000 
	float m_MaxYaw; //0x0004 
	float m_MinPitch; //0x0008 
	float m_MaxPitch; //0x000C 

};//Size=0x0010

class LockingAndHomingData
{
public:
	WarnTarget m_WarnLock; //0x0000 
	unsigned char m_IsHoming; //0x0004 
	unsigned char m_IsGuided; //0x0005 
	unsigned char m_IsGuidedWhenZoomed; //0x0006 
	unsigned char m_IsGuidedHoming; //0x0007 
	unsigned char m_FireOnlyWhenLockedOn; //0x0008 
char _0x0009[0x0003];

};//Size=0x000C

class AimingWorldSpaceLockEfficiencyData
{
public:
	float m_EfficiencyYaw; //0x0000 
	float m_EfficiencyPitch; //0x0004 
	float m_EfficiencyYawZoom; //0x0008 
	float m_EfficiencyPitchZoom; //0x000C 

};//Size=0x0010

class RenderVolumeEntityData : public SpatialEntityData
{
public:
	Vec4 m_UserMasks; //0x0060 
	SurfaceShaderInstanceDataStruct m_Shader; //0x0070 
	unsigned char m_Enabled; //0x009C 
char _0x009D[0x0003];

};//Size=0x00A0

class MathEntityAssembly
{
public:
	Array<MathEntityFunctionCall*>* m_FunctionCalls; //0x0000 
	Array<MathEntityInstruction*>* m_Instructions; //0x0008 

};//Size=0x0010

class AntAnimationHandlerData
{
public:
char _0x0000[0x00F8];

};//Size=0x00F8

class Guid
{
public:
char _0x0000[0x0010];

};//Size=0x0010

class MissileUnguidedData
{
public:
	D3DXVECTOR2 m_StaticPosition; //0x0000 
	D3DXVECTOR2 m_TargetPositionOffset; //0x0008 
	unsigned char m_UseStaticPosition; //0x0010 
	unsigned char m_UseTargetPositionOffset; //0x0011 
char _0x0012[0x0002];

};//Size=0x0014

class NearTargetDetonationData
{
public:
	float m_DetonationRadius; //0x0000 
	float m_MaxDetonationDelay; //0x0004 
	float m_MinDetonationDelay; //0x0008 
	unsigned char m_DetonateNearTarget; //0x000C 
char _0x000D[0x0003];

};//Size=0x0010

class IMouse
{
public:
	virtual void Init(); //
	virtual void Release(); //
	virtual void PreFrameUpdate(float); //
	virtual void Update(float); //
	virtual void UpdateBetweenFrames(float); //
	virtual void IsDown(int); //
	virtual void WentDown(int); //
	virtual void WentUp(int); //
	virtual void GetLevel(void*); //
	virtual void GetLevel2(int); //
	virtual void GetBufferedAction(void*); //
	virtual void EnableCursorMode(bool, int); //
	virtual void SetCursorPosition(int, int); //
	virtual void SetCursorRect(bool, unsigned int, unsigned int, unsigned int, unsigned int); //
	virtual void SetMouseSensitivity(float); //
	virtual void SetMouseNormalizationScale(float); //
	virtual void ResetMouseNormalizationScale(); //
	virtual void GetMouseSensitivityMultiplier(); //
	virtual void SetUIOwnsInput(bool); //
	virtual void SetCursor(int, void*); //

};//Size=0x0008

class AxesInputActionData : public InputActionData
{
public:
	InputDeviceAxes m_Axis; //0x0018 
	unsigned char m_NormalizeInput; //0x001C 
char _0x001D[0x0003];

};//Size=0x0020

class ClientSoldierHealthComponent : public ClientCharacterHealthComponent
{
public:
char _0x0070[0x0078];

};//Size=0x00E8

class ClientSoldierPhysicsComponent : public ClientCharacterMasterPhysicsComponent
{
public:
char _0x01B8[0x00F0];

};//Size=0x02A8

class WidgetReferenceEntityData : public LogicReferenceObjectData
{
public:
};//Size=0x00A0

class IglooSubsystem
{
public:
char _0x0000[0x0018];

};//Size=0x0018

class UISystem : public IUISystem
{
public:
char _0x0018[0x0A48];

};//Size=0x0A60

class HudData : public DataContainer
{
public:
};//Size=0x0010

class ProfileOptionData : public Asset
{
public:
	char* m_UniqueId; //0x0018 
	ProfileOptionsType m_Category; //0x0020 
	unsigned char m_LocalPlayerSpecific; //0x0024 
char _0x0025[0x0003];

};//Size=0x0028

class InputNode
{
public:
	virtual void Function0(); //

};//Size=0x0008

class PhysicsBody : public Entity
{
public:
	char _0x0020[0x0008];
	RigidBodyData* m_RigidBodyData; //0x0028 
char _0x0030[0x0018];

};//Size=0x0048

class PhysicsBodyData : public EntityData
{
public:
	Realm m_Realm; //0x0018 
	RigidBodyCollisionLayer m_CollisionLayer; //0x001C 
	Asset* m_Asset; //0x0020 
	unsigned char m_AssetIndex; //0x0028 
	unsigned char m_TransformIndex; //0x0029 
	unsigned char m_WorldIndex; //0x002A 
	unsigned char m_CollisionRootShapeIndex; //0x002B 
	unsigned char m_RaycastRootShapeIndex; //0x002C 
	unsigned char m_AddToSpatialQueryManager; //0x002D 
char _0x002E[0x0002];

};//Size=0x0030

class MeshAsset : public Asset
{
public:
	Array<Uint32*>* m_BlendShapeChannelHashes; //0x0018 
	ResourceRef m_MeshSetResource; //0x0020 
	ResourceRef m_OccluderMeshResource; //0x0028 
	MeshLodGroup* m_LodGroup; //0x0030 
	float m_LodScale; //0x0038 
	float m_CullScale; //0x003C 
	float m_CoverageValue; //0x0044 
	__int32 m_EnlightenMeshLod; //0x004C 
	float m_AutoLightmapUVsMaxDistance; //0x0050 
	float m_AutoLightmapUVsExpansionFactor; //0x0054 
	float m_AutoLightmapUVsMaxNormalDeviation; //0x0058 
	char _0x005C[0x0004];
	ProceduralAnimationTypeSimple* m_ProceduralAnimation; //0x0060 
	Array<MeshMaterial*>* m_Materials; //0x0068 
	DWORD m_NameHash; //0x0070 
	unsigned char m_StreamingEnable; //0x0074 
	unsigned char m_OccluderMeshEnable; //0x0075 
	unsigned char m_OccluderHighPriority; //0x0076 
	unsigned char m_OccluderIsConservative; //0x0077 
	unsigned char m_DestructionMaterialEnable; //0x0078 
	unsigned char m_EnableEnlightenStaticOverride; //0x0079 
	unsigned char m_LightmapUVsScaleCharts; //0x007A 
	unsigned char m_AutoLightmapUVs; //0x007B 
char _0x007C[0x0004];

};//Size=0x0080

class RegularCameraViewData
{
public:
	D3DXVECTOR3 m_MeshOffset; //0x0000 
	char _0x000C[0x0004];
	InputSuppressionData m_InputSuppression; //0x0010 
	float m_FieldOfView; //0x0018 
	char _0x001C[0x0004];
	RigidMeshAsset* m_Mesh; //0x0020 
	ObjectBlueprint* m_MaskMeshBlueprint; //0x0028 
	float m_ScreenExposureAreaScale; //0x0030 
	unsigned char m_FLIREnabled; //0x0034 
	unsigned char m_AllowFieldOfViewScaling; //0x0035 
	unsigned char m_LockMeshToRenderView; //0x0036 
char _0x0037[0x0009];

};//Size=0x0040

class StanceCameraData
{
public:
	Array<Int32*>* m_ValidStances; //0x0000 
	Array<Int32*>* m_DefaultCameraForStances; //0x0008 

};//Size=0x0010

class ServerVehicleEntryComponent : public ServerPlayerEntryComponent
{
public:
char _0x00F8[0x0080];

};//Size=0x0178

class CongestionControlSettings
{
public:
	float m_LatencyMsMax; //0x0000 
	float m_PacketLossMin; //0x0004 
	float m_PacketLossMax; //0x0008 
	float m_LatencyIncrPercMax; //0x000C 
	float m_LatencyIncrJitter; //0x0010 
	float m_LatencyIncrThreshold; //0x0014 
	float m_ConnectionGradeGood; //0x0018 
	float m_ConnectionGradeBad; //0x001C 
	float m_FreqDistScaleMax; //0x0020 
	float m_AdaptionStepCount; //0x0024 
	__int32 m_MaxFrequencyDivider; //0x0028 
	float m_MaxBwUtilForIncrease; //0x002C 
	DWORD m_MoveFrequencyDividerBest; //0x0030 
	DWORD m_MoveFrequencyDividerWorst; //0x0034 
	unsigned char m_Enabled; //0x0038 
char _0x0039[0x0003];

};//Size=0x003C

class ServerSpawnEntity : public SpatialEntity
{
public:
	char _0x0028[0x0008];
	VehicleSpawnReferenceObjectData* m_VehicleSpawnReferenceObjectData; //0x0030 
char _0x0038[0x0278];

};//Size=0x02B0

class Weapon : public Tool
{
public:
	WeaponFiringData* m_WeaponFiringData; //0x0018 
	char _0x0020[0x0010];
	D3DXVECTOR3 m_Speed; //0x0030 
	char _0x003C[0x0004];
	D3DXMATRIX m_ShootSpace; //0x0040 
	D3DXMATRIX m_ShootSpaceIdentity; //0x0080 
	char _0x00C0[0x0010];
	D3DXMATRIX m_LookSpace; //0x00D0 
	SoldierWeaponUnlockAsset* m_SoldierWeaponUnlockAsset; //0x0110 
char _0x0118[0x0098];

};//Size=0x01B0

class ServerBoneComponent : public ServerGameComponent
{
public:
};//Size=0x0030

class PartComponentData : public GameComponentData
{
public:
	Array<HealthStateData*>* m_HealthStates; //0x0070 
	Array<PartLinkData*>* m_PartLinks; //0x0078 
	unsigned char m_IsSupported; //0x0080 
	unsigned char m_IsFragile; //0x0081 
	unsigned char m_AffectsBoundingBox; //0x0082 
	unsigned char m_IsNetworkable; //0x0083 
	unsigned char m_IsWindow; //0x0084 
	unsigned char m_AnimatePhysics; //0x0085 
char _0x0086[0x000A];

};//Size=0x0090

class BaseSkeletonAsset : public Asset
{
public:
};//Size=0x0018

class AimingPoseData
{
public:
	float m_MinimumPitch; //0x0000 
	float m_MaximumPitch; //0x0004 
	float m_TargetingFov; //0x0008 
	float m_AimSteadiness; //0x000C 
	float m_SpeedMultiplier; //0x0010 
	float m_RecoilMultiplier; //0x0014 

};//Size=0x0018

class CharacterEntityData : public ControllableEntityData
{
public:
	float m_MaxHealth; //0x00B0 
	PersonViewMode m_DefaultViewMode; //0x00B4 
	PlayerSpawnType m_PlayerSpawnType; //0x00B8 
	char _0x00BC[0x0004];
	EntityVoiceOverInfo* m_VoiceOverInfo; //0x00C0 
	CharacterSoundData* m_Sound; //0x00C8 
	unsigned char m_CharacterLightingEnable; //0x00D0 
char _0x00D1[0x000F];

};//Size=0x00E0

class ChildComponentData : public BoneComponentData
{
public:
	LinearTransform m_AlignTransform; //0x0070 
	SoundAsset* m_SoundEffect; //0x00B0 
	MovingBodyData* m_MovingBody; //0x00B8 
	VehicleHealthZoneData m_HealthZone; //0x00C0 
	float m_SoundEffectStartRpm; //0x00E0 
	float m_SoundEffectStopRpm; //0x00E4 
	AlignmentData* m_AlignmentSettings; //0x00E8 
	unsigned char m_WorldSpacePositionLock; //0x00F0 
	unsigned char m_EnableAlignToCamera; //0x00F1 
char _0x00F2[0x000E];

};//Size=0x0100

class SoldierFOVEffect : public DataContainer
{
public:
	float m_Fov; //0x0010 
	float m_FovInDelay; //0x0014 
	float m_FovInTime; //0x0018 
	float m_FovOutDelay; //0x001C 
	float m_FovOutTime; //0x0020 
	unsigned char m_FovIsOffset; //0x0024 
char _0x0025[0x0003];

};//Size=0x0028

class WeaponEntityData : public GameComponentEntityData
{
public:
	char _0x0080[0x0010];
	WeaponFiringData* m_WeaponFiringData; //0x0090 
char _0x0098[0x0018];

};//Size=0x00B0

class StoredWeaponData
{
public:
	__int32 m_WeaponClass; //0x0000 
	__int32 m_MagCount; //0x0004 
	__int32 m_MagCapacity; //0x0008 
	__int32 m_AnimBaseSet; //0x000C 
	unsigned char m_SwitchToPrimaryWhenOutOfAmmo; //0x0010 
char _0x0011[0x0003];

};//Size=0x0014

class BlueprintBundleReference
{
public:
	char* m_Name; //0x0000 
	BlueprintBundleSettings m_Settings; //0x0008 
	Array<SharedBundleReference*>* m_Parents; //0x0028 
	unsigned char m_ContainsControllable; //0x0030 
char _0x0031[0x0007];

};//Size=0x0038

class WeaponUnlockAsset : public UnlockAssetBase
{
public:
};//Size=0x0058

class RotationBodyData : public MovingBodyData
{
public:
	float m_AngularMomentumMultiplier; //0x0018 
	float m_AngularMomentumThreshold; //0x001C 
	float m_AngularMomentumDamping; //0x0020 
	float m_AngularMomentumDampingAcc; //0x0024 
	float m_AngularMomentumDampingDeacc; //0x0028 
	float m_AngularConstraintMin; //0x002C 
	float m_AngularConstraintMax; //0x0030 
	__int32 m_RotationAxis; //0x0034 
	ExtendedConstraintsData* m_ExtendedConstraints; //0x0038 
	unsigned char m_UsePostSatisfyConstraints; //0x0040 
	unsigned char m_UseAngularMomentumThreshold; //0x0041 
	unsigned char m_UseAngularMomentumDamping; //0x0042 
	unsigned char m_UseAngularConstraint; //0x0043 
char _0x0044[0x0004];

};//Size=0x0048

class ClientAimInputEntity : public Entity
{
public:
	char _0x0020[0x0008];
	AiAimInputEntityData* m_AiAimInputEntityData; //0x0028 
char _0x0030[0x0020];

};//Size=0x0050

class StateNodeEntityBaseData : public EntityData
{
public:
	char* m_StateName; //0x0018 
	Realm m_Realm; //0x0020 
char _0x0024[0x0004];

};//Size=0x0028

class StatsCategoryGuidData : public StatsCategoryBaseData
{
public:
	Array<Guid*>* m_ObjectInstanceGuids; //0x0020 

};//Size=0x0028

class ClientVehicleHealthComponent : public ClientControllableHealthComponent
{
public:
char _0x0048[0x0080];

};//Size=0x00C8

class ClientVehiclePhysicsComponent : public PartPhysicsComponent
{
public:
char _0x00A8[0x0028];

};//Size=0x00D0

class ClientMeshComponent : public ClientGameComponent
{
public:
char _0x0038[0x00D8];

};//Size=0x0110

class TextureBaseAsset : public Asset
{
public:
	ResourceRef m_Resource; //0x0018 

};//Size=0x0020

class ClientPartComponent : public ClientGameComponent
{
public:
	char _0x0038[0x0080];
	ChassisComponentData* m_ChassisComponentData; //0x00B8 
char _0x00C0[0x0008];

};//Size=0x00C8

class ClientChildComponent : public ClientBoneComponent
{
public:
	char _0x0038[0x0018];
	ChildRotationBodyData* m_ChildRotationBodyData; //0x0050 
char _0x0058[0x02B8];

};//Size=0x0310

class ClientVehicleEntryComponent : public ClientPlayerEntryComponent
{
public:
	virtual int GetStance(); //

	char _0x0588[0x04B0];
	vector<ClientStanceFilterComponent*> m_Stances; //0x0A38 
	char _0x0A58[0x0010];
	__int32 m_CurrentStance; //0x0A68 
char _0x0A6C[0x0034];

};//Size=0x0AA0

class InputThrottle
{
public:
	float m_ForwardSpeedSupressionAmount; //0x0000 
	float m_BackwardSpeedSupressionAmount; //0x0004 
	float m_SideSpeedSupressionAmount; //0x0008 
	float m_IgnoreBrakeSpeedThreshold; //0x000C 
	unsigned char m_Enabled; //0x0010 
char _0x0011[0x0003];

};//Size=0x0014

class VehicleInputData
{
public:
	float m_ThrottleDeadzone; //0x0000 
	float m_BrakeDeadzone; //0x0004 
	float m_YawDeadzone; //0x0008 
	float m_PitchDeadzone; //0x000C 
	float m_RollDeadzone; //0x0010 
	float m_ThrottleInertiaOutDuration; //0x0014 
	float m_ThrottleInertiaInDuration; //0x0018 
	float m_ThrottleInertiaMinRatio; //0x001C 
	float m_BrakeInertiaOutDuration; //0x0020 
	float m_BrakeInertiaInDuration; //0x0024 
	float m_BrakeInertiaMinRatio; //0x0028 
	float m_YawInertiaOutDuration; //0x002C 
	float m_YawInertiaInDuration; //0x0030 
	float m_YawInertiaMinRatio; //0x0034 
	float m_PitchInertiaOutDuration; //0x0038 
	float m_PitchInertiaInDuration; //0x003C 
	float m_PitchInertiaMinRatio; //0x0040 
	float m_RollInertiaOutDuration; //0x0044 
	float m_RollInertiaInDuration; //0x0048 
	float m_RollInertiaMinRatio; //0x004C 

};//Size=0x0050

class AntiRollBars
{
public:
	AntiRollBar* m_Front; //0x0000 
	AntiRollBar* m_Rear; //0x0008 

};//Size=0x0010

class InAirForceConfig
{
public:
	D3DXVECTOR3 m_InAirAlignment; //0x0000 
	char _0x000C[0x0004];
	D3DXVECTOR3 m_InAirAngularDamping; //0x0010 
	char _0x001C[0x0004];
	D3DXVECTOR3 m_InAirYawAngularControl; //0x0020 
	char _0x002C[0x0004];
	D3DXVECTOR3 m_InAirYawLinearControl; //0x0030 
	char _0x003C[0x0004];
	float m_InAirAscendingGravityModifier; //0x0040 
	float m_InAirDescendingGravityModifier; //0x0044 
	float m_FadeInAirForcesThreshold; //0x0048 
	float m_InAirMaximumPitchLimit; //0x004C 
	float m_InAirScaleToMaxSpeed; //0x0050 
	float m_InAirUpwardLinearDamping; //0x0054 
	float m_InAirDownwardLinearDamping; //0x0058 
	unsigned char m_UseInAirControl; //0x005C 
char _0x005D[0x0003];

};//Size=0x0060

class VehicleHudData : public LinearTransform
{
public:
	VeniceVehicleCustomizationAsset* m_VeniceVehicleCustomizationAsset; //0x0040 
	UIHudIcon m_MinimapIcon; //0x0048 
	char _0x004C[0x0004];
	char* m_IconName; //0x0050 
	char* m_CustomInteractionPromptString; //0x0058 
	MinimapZoomLevelEnum m_MinimapZoomLevel; //0x0060 
	char _0x0064[0x0004];
	TextureAsset* m_Texture; //0x0068 
	DWORD m_VehicleItemHash; //0x0070 
	unsigned char m_RotateInMap; //0x0074 
	unsigned char m_ShowHealth; //0x0075 
	unsigned char m_IsHeavyStationary; //0x0076 
	unsigned char m_ImitateSoldierInventory; //0x0077 
	unsigned char m_DisableInteractionPrompt; //0x0078 
char _0x0079[0x0007];

};//Size=0x0080

class VehicleLockableInfoData
{
public:
	float m_HeatSignature; //0x0000 
	float m_RadarSignature; //0x0004 
	float m_LowAltitudeHeight; //0x0008 
	float m_LowAltitudeHeatSignature; //0x000C 

};//Size=0x0010

class AngleOfImpactData
{
public:
	float m_Zone12Delimiter; //0x0000 
	float m_Zone23Delimiter; //0x0004 
	float m_Zone1Multiplier; //0x0008 
	float m_Zone2Multiplier; //0x000C 
	float m_Zone3Multiplier; //0x0010 
	unsigned char m_Enabled; //0x0014 
char _0x0015[0x0003];

};//Size=0x0018

class ClientCharacterEntity : public ClientControllableEntity
{
public:
char _0x0200[0x0100];

};//Size=0x0300

class PhysicsActionData : public EntityData
{
public:
};//Size=0x0018

class SpawnReferenceObjectData : public SpatialReferenceObjectData
{
public:
	LinearTransform m_ControllableTransform; //0x00A0 
	LinearTransform m_ControllableInput; //0x00E0 
	Array<ExtraSpawnData*>* m_ExtraSpawnData; //0x0120 
	char* m_LocationNameSid; //0x0128 
	char* m_LocationTextSid; //0x0130 
	TeamId m_Team; //0x0138 
	float m_InitialSpawnDelay; //0x013C 
	float m_SpawnDelay; //0x0140 
	__int32 m_MaxCount; //0x0144 
	__int32 m_MaxCountSimultaneously; //0x0148 
	__int32 m_TotalCountSimultaneouslyOfType; //0x014C 
	__int32 m_TotalCountSimultaneouslyOfTypeTeam1; //0x0150 
	__int32 m_TotalCountSimultaneouslyOfTypeTeam2; //0x0154 
	float m_SpawnAreaRadius; //0x0158 
	float m_SpawnProtectionRadius; //0x015C 
	DWORD m_SpawnProtectionFriendlyKilledCount; //0x0160 
	float m_SpawnProtectionFriendlyKilledTime; //0x0164 
	__int32 m_TakeControlEntryIndex; //0x0168 
	float m_RotationYaw; //0x016C 
	float m_RotationPitch; //0x0170 
	float m_RotationRoll; //0x0174 
	float m_Throttle; //0x0178 
	unsigned char m_Enabled; //0x017C 
	unsigned char m_LockedTeam; //0x017D 
	unsigned char m_InitialAutoSpawn; //0x017E 
	unsigned char m_AutoSpawn; //0x017F 
	unsigned char m_QueueSpawnEvent; //0x0180 
	unsigned char m_UseAsSpawnPoint; //0x0181 
	unsigned char m_SpawnProtectionCheckAllTeams; //0x0182 
	unsigned char m_ClearBangersOnSpawn; //0x0183 
	unsigned char m_OnlySendEventForHumanPlayers; //0x0184 
	unsigned char m_SendWeaponEvents; //0x0185 
	unsigned char m_TryToSpawnOutOfSight; //0x0186 
	unsigned char m_TakeControlOnTransformChange; //0x0187 
	unsigned char m_ReturnControlOnIdle; //0x0188 
	unsigned char m_IgnoreBelowTerrainTest; //0x0189 
char _0x018A[0x0006];

};//Size=0x0190

class ClientBulletEntity : public ClientProjectileEntity
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
	virtual void Function24(); //
	virtual void Function25(); //
	virtual void Function26(); //
	virtual void Function27(); //
	virtual void Function28(); //
	virtual void Function29(); //
	virtual void Function30(); //
	virtual void Function31(); //
	virtual void Function32(); //
	virtual void Function33(); //
	virtual void Function34(); //
	virtual void Function35(); //
	virtual void Function36(); //
	virtual void Function37(); //
	virtual void Function38(); //
	virtual void Function39(); //
	virtual void Function40(); //
	virtual void Function41(); //
	virtual void Function42(); //
	virtual void Function43(); //
	virtual void Function44(); //
	virtual void Function45(); //
	virtual void Function46(); //
	virtual void Function47(); //
	virtual void Function48(); //
	virtual void Function49(); //
	virtual void Function50(); //
	virtual void Function51(); //
	virtual void Function52(); //
	virtual void Function53(); //
	virtual void Function54(); //
	virtual void Function55(); //
	virtual void Function56(); //
	virtual void Function57(); //
	virtual void Function58(); //
	virtual void Function59(); //
	virtual void Function60(); //
	virtual void Function61(); //
	virtual void Function62(); //
	virtual void Function63(); //
	virtual void Function64(); //
	virtual void Function65(); //
	virtual void Function66(); //
	virtual void Function67(); //
	virtual void Function68(); //
	virtual void Function69(); //
	virtual void Function70(); //
	virtual void Function71(); //
	virtual void Function72(); //
	virtual void Function73(); //
	virtual void Function74(); //
	virtual void Function75(); //
	virtual void Function76(); //
	virtual void Function77(); //
	virtual void Function78(); //
	virtual void Function79(); //
	virtual void Function80(); //
	virtual void Function81(); //
	virtual void Function82(); //
	virtual void Function83(); //
	virtual void Function84(); //
	virtual void Function85(); //
	virtual void Function86(); //
	virtual void Function87(); //
	virtual void Function88(); //
	virtual void Function89(); //
	virtual void Function90(); //
	virtual void Function91(); //
	virtual void Function92(); //
	virtual void Function93(); //
	virtual void Function94(); //
	virtual void Function95(); //
	virtual void Function96(); //
	virtual void Function97(); //
	virtual void Function98(); //
	virtual void Function99(); //
	virtual void Function100(); //
	virtual void Function101(); //
	virtual void Function102(); //
	virtual void Function103(); //
	virtual void Function104(); //
	virtual void Function105(); //
	virtual void Function106(); //
	virtual void Function107(); //
	virtual void Function108(); //
	virtual void Function109(); //
	virtual void Function110(); //
	virtual void Function111(); //
	virtual void Function112(); //
	virtual void Function113(); //
	virtual void Function114(); //
	virtual void Function115(); //
	virtual void Function116(); //
	virtual void Function117(); //
	virtual void Function118(); //
	virtual void Function119(); //
	virtual void Function120(); //
	virtual void Function121(); //
	virtual void Function122(); //
	virtual void Function123(); //
	virtual void Function124(); //
	virtual void Function125(); //
	virtual void Function126(); //
	virtual void Function127(); //
	virtual void Function128(); //
	virtual void Function129(); //
	virtual void Function130(); //
	virtual void Function131(); //
	virtual void Function132(); //
	virtual void Function133(); //
	virtual void Function134(); //
	virtual void Function135(); //
	virtual void Function136(); //
	virtual void Function137(); //
	virtual void Function138(); //
	virtual void Function139(); //
	virtual void Function140(); //
	virtual void Function141(); //
	virtual void Function142(); //
	virtual void Function143(); //
	virtual void Function144(); //
	virtual void Function145(); //
	virtual void Function146(); //
	virtual void Function147(); //
	virtual void Function148(); //
	virtual void Function149(); //
	virtual void Function150(); //
	virtual void Function151(); //
	virtual void Function152(); //
	virtual void Function153(); //
	virtual void Function154(); //
	virtual void Function155(); //
	virtual void Function156(); //
	virtual void Function157(); //
	virtual void Function158(); //
	virtual void Function159(); //
	virtual void Function160(); //
	virtual void Function161(); //
	virtual void Function162(); //
	virtual void Function163(); //
	virtual void Function164(); //
	virtual void Function165(); //
	virtual void Function166(); //
	virtual void Function167(); //
	virtual void Function168(); //
	virtual void Function169(); //
	virtual void Function170(); //
	virtual void Function171(); //
	virtual void Function172(); //
	virtual void Function173(); //
	virtual void Function174(); //
	virtual void Function175(); //
	virtual void Function176(); //
	virtual void Function177(); //
	virtual void Function178(); //
	virtual void Function179(); //
	virtual void Function180(); //
	virtual void Function181(); //
	virtual void Function182(); //
	virtual void Function183(); //
	virtual void Function184(); //
	virtual void Function185(); //
	virtual void Function186(); //
	virtual void Function187(); //
	virtual void Function188(); //
	virtual void Function189(); //
	virtual void Function190(); //
	virtual void Function191(); //
	virtual void Function192(); //
	virtual void Function193(); //
	virtual void Function194(); //
	virtual void Function195(); //
	virtual void Function196(); //

	char _0x0148[0x0008];
	BulletEntityData* m_BulletEntityData; //0x0150 
	char _0x0158[0x0008];
	D3DXVECTOR4 m_InitialPosition; //0x0160 
	char _0x0170[0x0010];
	D3DXVECTOR4 m_NextPredicetedPosition; //0x0180 
	D3DXMATRIX m_Transform; //0x0190 
char _0x01D0[0x0120];

};//Size=0x02F0

class ClientSoldierCameraComponent : public ClientCharacterCameraComponent
{
public:
char _0x00C0[0x0350];

};//Size=0x0410

class FPSCamera : public TargetCamera
{
public:
char _0x0160[0x0030];

};//Size=0x0190

class FPSCameraData : public TargetCameraData
{
public:
	TurnEffectData m_TurnEffectSettings; //0x0080 
	BlurEffectData m_BlurEffectSettings; //0x00A0 
	float m_FOV; //0x00B8 
char _0x00BC[0x0004];

};//Size=0x00C0

class VehicleCustomizationAsset : public DataContainerPolicyAsset
{
public:
	CustomizationTable* m_Customization; //0x0018 

};//Size=0x0020

class VoiceOverNamedValue : public VoiceOverValue
{
public:
	char* m_Name; //0x0010 
	DWORD m_NameHash; //0x0018 

};//Size=0x0020

class ClientSpawnEntity : public SpatialEntity
{
public:
char _0x0028[0x0138];

};//Size=0x0160

class ToolData : public DataContainer
{
public:
	unsigned char m_IsAlwaysActive; //0x0010 
char _0x0011[0x0007];

};//Size=0x0018

class Firing
{
public:
	virtual void Function0(); //
	virtual void Function1(); //
	virtual WeaponComponentData* GetWeaponComponentData(); //
	virtual void Function3(); //
	virtual void Function4(); //
	virtual void Function5(); //
	virtual void Function6(); //
	virtual int GetAmmo(); //
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
	virtual void Function24(); //
	virtual void Function25(); //
	virtual void Function26(); //
	virtual void Function27(); //
	virtual void Function28(); //
	virtual void Function29(); //
	virtual void Function30(); //
	virtual void Function31(); //
	virtual void Function32(); //
	virtual void Function33(); //
	virtual void Function34(); //
	virtual void Function35(); //
	virtual void Function36(); //
	virtual void Function37(); //
	virtual void Function38(); //
	virtual void Function39(); //
	virtual void Function40(); //
	virtual void Function41(); //
	virtual void Function42(); //
	virtual void Function43(); //
	virtual void Function44(); //
	virtual void Function45(); //
	virtual void Function46(); //
	virtual void Function47(); //
	virtual void Function48(); //

	char _0x0008[0x0008];
	WeaponFiringData* m_WeaponFiringData; //0x0010 
	char _0x0018[0x0008];
	WeaponComponentData* m_WeaponComponentData; //0x0020 
	char _0x0028[0x0090];
	__int32 m_Ammo; //0x00B8 
	__int32 m_ExtraAmmo; //0x00BC 
	char _0x00C0[0x0004];
	unsigned char m_HasStoppedFiring; //0x00C4 
	unsigned char m_PrimaryFireTriggeredLastFrame; //0x00C5 
	unsigned char m_IsOverheated; //0x00C6 
	char _0x00C7[0x000D];
	__int32 m_TicksUsingWeapon; //0x00D4 
char _0x00D8[0x0088];

};//Size=0x0160

class FiringPad
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
	virtual void Function24(); //
	virtual void Function25(); //
	virtual void Function26(); //
	virtual void Function27(); //
	virtual void Function28(); //
	virtual void Function29(); //
	virtual void Function30(); //
	virtual void Function31(); //
	virtual void Function32(); //
	virtual void Function33(); //
	virtual void Function34(); //
	virtual void Function35(); //
	virtual void Function36(); //
	virtual void Function37(); //
	virtual void Function38(); //
	virtual void Function39(); //
	virtual void Function40(); //
	virtual void Function41(); //
	virtual void Function42(); //
	virtual void Function43(); //
	virtual void Function44(); //
	virtual void Function45(); //
	virtual void Function46(); //
	virtual void Function47(); //
	virtual void Function48(); //
	virtual void Function49(); //
	virtual void Function50(); //
	virtual void Function51(); //

char _0x0008[0x0118];

};//Size=0x0120

class RumbleFiringData
{
public:
	float m_LowRumble; //0x0000 
	float m_HighRumble; //0x0004 
	float m_RumbleDuration; //0x0008 

};//Size=0x000C

class VisualEnvironmentComponentData : public GameComponentData
{
public:
	Array<CString*>* m_PropertyOverrides; //0x0070 
	Array<Uint32*>* m_PropertyOverrideMasks; //0x0078 

};//Size=0x0080

class WeaponModifierDynamicBase : public WeaponModifierBase
{
public:
};//Size=0x0018

class WeaponAnimationSettingsData
{
public:
	float m_KickbackFactor; //0x0000 
	float m_KickbackSpeedFactor; //0x0004 
	float m_WeaponOffsetX; //0x0008 
	float m_WeaponOffsetY; //0x000C 
	float m_WeaponOffsetZ; //0x0010 
	float m_WeaponYaw; //0x0014 
	float m_WeaponPitch; //0x0018 
	float m_ZoomOutSpeed; //0x001C 
	float m_ZoomInSpeed; //0x0020 
	float m_ShakeAmount; //0x0024 
	float m_CenterofShaking; //0x0028 
	float m_ZoomGunswayPositionX; //0x002C 
	float m_ZoomGunswayPositionY; //0x0030 

};//Size=0x0034

class CreepingAirBarrage : public DataContainer
{
public:
	float m_StartDistance; //0x0010 
	float m_TimeToInterceptionPoint; //0x0014 
	float m_TimeAtInterceptionPoint; //0x0018 
	float m_Cooldown; //0x001C 
	float m_AheadOfPlayerMultiplier; //0x0020 
char _0x0024[0x0004];

};//Size=0x0028

class CriteriaGateList : public Asset
{
public:
	Array<Float32*>* m_CriteriaGates; //0x0018 

};//Size=0x0020

class CrosshairTypeAsset : public Asset
{
public:
};//Size=0x0018

class Curve2D : public DataContainer
{
public:
	Array<Vec2*>* m_Curve; //0x0010 

};//Size=0x0018

class CustomizationTable : public DataContainer
{
public:
	Array<CustomizationUnlockParts*>* m_UnlockParts; //0x0010 

};//Size=0x0018

class DX11Screen
{
public:
	char _0x0000[0x0008];
	void* m_windowHandle ; //0x0008 
	char _0x0010[0x004C];
	unsigned char m_isTopWindow; //0x005C 
	unsigned char m_isMinimized; //0x005D 
	unsigned char m_isMaximized; //0x005E 
	unsigned char m_isResizing; //0x005F 
	char _0x0060[0x0008];
	ScreenInfo m_screenInfo; //0x0068 

};//Size=0x007C

class DamageModifier : public DataContainer
{
public:
	TinyPiecewiseLinearCurve m_Damage; //0x0010 

};//Size=0x0020

class DamageModifierExtended : public DataContainer
{
public:
	PiecewiseLinearCurve m_Damage; //0x0010 

};//Size=0x0020

class DestructionMaskVolumeEntityData : public SpatialEntityData
{
public:
	Vec4 m_DustAccumulationCurve; //0x0060 
	Vec4 m_ShaderUserMasks; //0x0070 
	float m_Radius; //0x0080 
	float m_DustAccumulationLifeTime; //0x0084 
	SurfaceShaderInstanceDataStruct m_Shader; //0x0088 

};//Size=0x00B0

class DiceShooterVehicleEntryComponentData : public VehicleEntryComponentData
{
public:
	LinearTransform m_AimFollowTransform; //0x0150 
	D3DXVECTOR3 m_VictimOffsetOverride; //0x0190 
	char _0x019C[0x0004];
	Array<StanceSwitchMapData*> m_DirectStanceSwitches; //0x01A0 
	StanceToggleSwitchMapData m_ToggleStanceSwitch; //0x01A8 
	float m_MouseZoomSensitivity; //0x01B8 
	float m_JoystickZoomSensitivity; //0x01BC 
	unsigned char m_ShowSoldierWhenShielded; //0x01C0 
	unsigned char m_ResetAimOnEnter; //0x01C1 
	unsigned char m_ResetAimInVehicleDirection; //0x01C2 
	unsigned char m_UpdateAnimatableTransform; //0x01C3 
	unsigned char m_SetEntryTransformToAnimatable; //0x01C4 
	unsigned char m_ToggleZoom; //0x01C5 
	unsigned char m_StartDeathExperienceAtCameraPosition; //0x01C6 
char _0x01C7[0x0009];

};//Size=0x01D0

class DiceUIInputManagerSettings : public SystemSettings
{
public:
	float m_ScrollWheelDeadZone; //0x0020 
	float m_DoubleClickTime; //0x0024 
	unsigned char m_AutomaticTypingMode; //0x0028 
	unsigned char m_TreatTouchAsMouse; //0x0029 
char _0x002A[0x0006];

};//Size=0x0030

class DifficultyDatas : public Asset
{
public:
	Array<DifficultyData*>* m_Difficulties; //0x0018 

};//Size=0x0020

class DistanceToAwareCurveOverride : public DataContainer
{
public:
	TinyPiecewiseLinearCurve m_DistanceToAwareTimeCurveCentral; //0x0010 
	TinyPiecewiseLinearCurve m_DistanceToAwareTimeCurvePeripheral; //0x0020 

};//Size=0x0030

class DriverSettings : public Asset
{
public:
	char _0x0018[0x0028];
	RegulatedSteering* m_RegulatedSteering; //0x0040 
char _0x0048[0x00A0];

};//Size=0x00E8

class DummyClass
{
public:
char _0x0000[0x0040];

};//Size=0x0040

class Dx11DisplaySettings : public DxDisplaySettings
{
public:
	DWORD m_StagingBufferPoolItemSizeMin; //0x00F0 
	DWORD m_StagingBufferPoolItemSizeMax; //0x00F4 
	DWORD m_StagingBufferPoolHeapMemBlockSize; //0x00F8 
	float m_StagingBufferPoolItemMaxAge; //0x00FC 
	char* m_StagingBufferPoolPreheatString; //0x0100 
	unsigned char m_RefDriverEnable; //0x0108 
	unsigned char m_DriverInternalThreadingEnable; //0x0109 
	unsigned char m_GetDeviceRemovedReasonEnable; //0x010A 
	unsigned char m_DrawMemoryGraph; //0x010B 
	unsigned char m_MemoryPoolsEnable; //0x010C 
	unsigned char m_NvPerfHudEnable; //0x010D 
	unsigned char m_AnnotationInterfaceEnable; //0x010E 
	unsigned char m_AmdQuadsEnable; //0x010F 
	unsigned char m_AmdGenerateMipsWorkaroundEnable; //0x0110 
	unsigned char m_DepthBoundsExtensionEnable; //0x0111 
	unsigned char m_AmdCrossfireControlDefaultSync; //0x0112 
	unsigned char m_AmdCrossfireControlUseBroadcast; //0x0113 
	unsigned char m_Dx11Dot1Enable; //0x0114 
	unsigned char m_Dx11Dot1RuntimeEnable; //0x0115 
	unsigned char m_EndFrameJobEnable; //0x0116 
	unsigned char m_DepthStencilExtensionEnable; //0x0117 
	unsigned char m_ForceRenderTargetInEsramTest; //0x0118 
	unsigned char m_RenderdocCaptureEnable; //0x0119 
	unsigned char m_ReZEnable; //0x011A 
	unsigned char m_UseStagingResourcePool; //0x011B 
	unsigned char m_ReleaseCmdJobsEnable; //0x011C 
	unsigned char m_GpuProfilerEnable; //0x011D 
char _0x011E[0x0002];

};//Size=0x0120

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

class DynamicDataContainer : public DataContainer
{
public:
	Array<DataField*>* m_Fields; //0x0010 

};//Size=0x0018

class EffectBlueprint : public ObjectBlueprint
{
public:
char _0x004C[0x0004];

};//Size=0x0050

class EnlightenShaderDatabaseAsset : public Asset
{
public:
	DWORD m_NumShaders; //0x0018 
	char _0x001C[0x0004];
	ResourceRef m_DatabaseResource; //0x0020 

};//Size=0x0028

class EntityVoiceOverInfo : public DataContainer
{
public:
	VoiceOverObject* m_VoiceOverType; //0x0010 
	Array<VoiceOverLabel*>* m_Labels; //0x0018 

};//Size=0x0020

class Entry
{
public:
	char _0x0000[0x09F8];
	char _0x0A00[0x0028];
	__int32 N0011BD1F; //0x0A28 
	__int32 N0011C50D; //0x0A2C 
	char _0x0A30[0x0004];
	__int32 N0012446E; //0x0A34 
	__int32 N00124DA2; //0x0A38 
char _0x0A3C[0x19A4];

};//Size=0x23E0

class EntryComponentSoundData : public DataContainer
{
public:
	Array<StanceSwitchSoundData*>* m_StanceSounds; //0x0010 
	SoundAsset* m_StanceSwitchSound; //0x0018 

};//Size=0x0020

class EntryInputActionBindingsData : public DataContainer
{
public:
	Array<EntryInputActionBinding*>* m_Bindings; //0x0010 

};//Size=0x0018

class EntryInputActionMapsData : public Asset
{
public:
	__int32 m_ActionMapSettingsScheme; //0x0018 
	InputActionMapSlot m_DefaultInputActionMap; //0x001C 
	Array<EntryInputActionMapData*>* m_InputActionMaps; //0x0020 
	DWORD m_Identifier; //0x0028 
char _0x002C[0x0004];

};//Size=0x0030

class EnumFieldInfo : public TypeInfo
{
public:
	FieldInfoCotainer* m_FieldInfos; //0x0018 

};//Size=0x0020

class EnumFieldInfoData : public TypeInfoData
{
public:
	char _0x0018[0x0008];
	FieldInfoCotainer* m_FieldInfos; //0x0020 

};//Size=0x0028

class EvasionVolume : public DataContainer
{
public:
	float m_VolumeWidth; //0x0010 
	float m_VolumeHeight; //0x0014 
	char _0x0018[0x0008];
	D3DXVECTOR3 m_OffsetFromCenter; //0x0020 
	char _0x002C[0x0004];
	float m_VolumeDepth; //0x0030 
char _0x0034[0x000C];

};//Size=0x0040

class ExplosionEntityData : public SpatialEntityData
{
public:
	EffectBlueprint* m_DetonationEffect; //0x0060 
	EffectBlueprint* m_DetonationEffectForFriendlies; //0x0068 
	MaskVolumeEntityData* m_MaskVolume; //0x0070 
	DestructionMaskVolumeEntityData* m_DestructionMaskVolume; //0x0078 
	MaterialDecl m_MaterialPair; //0x0080 
	MaterialDecl m_SecondaryMaterialPair; //0x0084 
	ExplosionWindForceData* m_ShockwaveWindForce; //0x0088 
	float m_EmpTime; //0x0094 
	float m_MaxOcclusionRaycastRadius; //0x0098 
	float m_InnerBlastRadius; //0x009C 
	float m_BlastDamage; //0x00A0 
	float m_BlastRadius; //0x00A4 
	float m_BlastImpulse; //0x00A8 
	float m_ShockwaveDamage; //0x00AC 
	float m_ShockwaveRadius; //0x00B0 
	float m_ShockwaveImpulse; //0x00B4 
	float m_ShockwaveTime; //0x00B8 
	float m_CameraShockwaveRadius; //0x00BC 
	float m_SpawnDelay; //0x00C0 
	unsigned char m_NoFriendliesEffectOnEnabledFriendlyFire; //0x00C4 
	unsigned char m_UseEntityTransformForDetonationEffect; //0x00C5 
	unsigned char m_SecondaryMaterialsActive; //0x00C6 
	unsigned char m_HasStunEffect; //0x00C7 
	unsigned char m_AllowDamageToOwner; //0x00C8 
	unsigned char m_ApplyBlastDamageToVehiclesAndCharactersInstantly; //0x00C9 
	unsigned char m_ForceServersideAiDamage; //0x00CA 
	unsigned char m_DisableOcclusion; //0x00CB 
	unsigned char m_DisableStaticEntityOcclusion; //0x00CC 
	unsigned char m_DisableOcclusionOutsideBlastRadius; //0x00CD 
	unsigned char m_TriggerImpairedHearing; //0x00CE 
	unsigned char m_Enabled; //0x00CF 

};//Size=0x00D0

class ExplosionPackEntityData : public GhostedProjectileEntityData
{
public:
	LinearTransform m_ExplosionOffsetTransform; //0x0140 
	D3DXVECTOR3 m_WorldIconOffset; //0x0180 
	char _0x018C[0x0004];
	Array<ExplosionPackTrigger*>* m_ExplosionPackTriggers; //0x0190 
	float m_VehicleDetonationSampleInterval; //0x0198 
	float m_SoldierDetonationSampleInterval; //0x019C 
	float m_GravityScale; //0x01A0 
	float m_OnCollisionLinearVelocityDamping; //0x01A4 
	float m_TimeToLiveOnPlayerDeath; //0x01A8 
	float m_Health; //0x01AC 
	float m_SpottedTime; //0x01B0 
	float m_DefuseRadius; //0x01B4 
	char* m_IconName; //0x01B8 
	UIWorldIconBehavior* m_IconBehavior; //0x01C0 
	float m_AlignWithGroundRayLength; //0x01C8 
	unsigned char m_IsDestructible; //0x01CC 
	unsigned char m_ReceivesExplosionDamage; //0x01CD 
	unsigned char m_ShowInSpectatorUI; //0x01CE 
	unsigned char m_SpottedByEnemyAsSoldier; //0x01CF 
	unsigned char m_AlignWithGround; //0x01D0 
char _0x01D1[0x000F];

};//Size=0x01E0

class ExplosionWindForceData : public DataContainer
{
public:
	float m_Strength; //0x0010 
	float m_Variation; //0x0014 
	float m_VariationRate; //0x0018 
	float m_MicroVariation; //0x001C 
	float m_Hardness; //0x0020 
	float m_ForceAsInstantVelocity; //0x0024 
	unsigned char m_ShouldAffectVegetation; //0x0028 
	unsigned char m_ShouldAffectMeshScattering; //0x0029 
	unsigned char m_ShouldAffectEffects; //0x002A 
	unsigned char m_ShouldAffectCloth; //0x002B 
	unsigned char m_ShouldAffectPhysics; //0x002C 
char _0x002D[0x0003];

};//Size=0x0030

class ExtendedConstraintsData : public DataContainer
{
public:
	float m_Heading; //0x0010 
	float m_Width; //0x0014 
	float m_Falloff; //0x0018 
	float m_AngularConstraintMin; //0x001C 
	float m_AngularConstraintMax; //0x0020 
char _0x0024[0x0004];

};//Size=0x0028

class FOVTransitionData : public DataContainer
{
public:
	FOVTransitionType m_TransitionType; //0x0010 
	float m_Shape; //0x0014 
	float m_StartDelay; //0x0018 
	float m_StartJump; //0x001C 
	float m_EndEarly; //0x0020 
	unsigned char m_Invert; //0x0024 
char _0x0025[0x0003];

};//Size=0x0028

class FPSAimer
{
public:
	SoldierAimAssistData* m_SoldierAimAssistData; //0x0000 
	char _0x0008[0x0018];
	DWORD m_Zoomed; //0x0020 
	float m_Yaw; //0x0024 
	float m_Pitch; //0x0028 
	char _0x002C[0x0014];
	float m_YawAcceleration; //0x0040 
	float m_PitchAcceleration; //0x0044 
	char _0x0048[0x005C];
	float m_YawMultiplyer; //0x00A4 
	float m_PitchMultiplyer; //0x00A8 
char _0x00AC[0x0080];

};//Size=0x012C

class FaceAnimationWaveMappings : public DataContainer
{
public:
	AntRef m_AntAsset; //0x0010 
	AntRef m_OnStartedTalking; //0x0024 
	Array<FaceAnimationWaveMapping*>* m_Mappings; //0x0038 

};//Size=0x0040

class FairFightServerSettings : public SystemSettings
{
public:
	void** m_CombatScoreBuckets; //0x0020 
	unsigned char m_Enabled; //0x0028 
char _0x0029[0x0007];

};//Size=0x0030

class FakeHingeData : public FakePhysicsData
{
public:
	float m_MinAngle; //0x0038 
	float m_MaxAngle; //0x003C 
	D3DXVECTOR3 m_Pivot; //0x0040 
	char _0x004C[0x0004];
	D3DXVECTOR3 m_RotationAxis; //0x0050 
	char _0x005C[0x0004];
	D3DXVECTOR3 m_ExtensionAxis; //0x0060 
	char _0x006C[0x0004];
	float m_AngularDampening; //0x0070 
	float m_PullbackAcceleration; //0x0074 
	float m_ProgressiveExponent; //0x0078 
	float m_InertiaModifier; //0x007C 

};//Size=0x0080

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

class FiringCallback
{
public:
	char _0x0000[0x0008];
	IClientDiceShooterVehicleEntryComponent* Component; //0x0008 
	WeaponInfo* N0040E2C0; //0x0010 

};//Size=0x0018

class FiringFunctionData : public GameDataContainer
{
public:
	WeaponDispersion m_WeaponDispersion; //0x0010 
	char _0x0054[0x0004];
	Array<FireEffectData*>* m_PreFireEffects1p; //0x0058 
	ShotConfigData m_Shot; //0x0060 
	OverHeatData m_OverHeat; //0x0100 
	Array<FireEffectData*>* m_PreFireEffects3p; //0x0170 
	Array<FireEffectData*>* m_FireEffects1p; //0x0178 
	Array<FireEffectData*>* m_FireEffects3p; //0x0180 
	SoundAsset* m_Sound; //0x0188 
	SoundAsset* m_SoundRemotePlayer; //0x0190 
	FireLogicData m_FireLogic; //0x0198 
	AmmoConfigData m_Ammo; //0x0258 
	float m_SelfHealTimeWhenDeployed; //0x0290 
	unsigned char m_UsePrimaryAmmo; //0x0294 
	unsigned char m_UnlimitedAmmoForAI; //0x0295 
	unsigned char m_IsPassiveWeapon; //0x0296 
char _0x0297[0x0009];

};//Size=0x02A0

class FiringIntervalPattern : public DataContainer
{
public:
	Array<Interval*>* m_Interval; //0x0010 

};//Size=0x0018

class FlashlightModifier : public DataContainer
{
public:
	float m_FlashlightConeRange; //0x0010 
	float m_FlashlightConeAngle; //0x0014 

};//Size=0x0018

class FloatCurve : public DataContainer
{
public:
	Array<FloatCurvePoint*>* m_Points; //0x0010 
	FloatCurveType m_CurveType; //0x0018 
char _0x001C[0x0004];

};//Size=0x0020

class FloatPhysicsData : public DataContainer
{
public:
	float m_Density; //0x0010 
	float m_FilledDensity; //0x0014 

};//Size=0x0018

class GAMESETTINGS
{
public:
	GameSettings* m_GameSettings; //0x0000 
	char _0x0008[0x0028];
	UISettings* m_UISettings; //0x0030 
	WindowSettings* m_WindowSettings; //0x0038 
	Dx11DisplaySettings* m_Dx11DisplaySettings; //0x0040 
char _0x0048[0x03F8];

};//Size=0x0440

class GameAIEntryData : public Asset
{
public:
	GameAIEntryData* m_Ai2Data; //0x0018 

};//Size=0x0020

class GameAISystem : public Asset
{
public:
};//Size=0x0018

class GameAnimationSettings : public SystemSettings
{
public:
	void** m_AntOnClientOnlyGamemodes; //0x0020 
	float m_TemporalLoddingFirstDeltaTime; //0x0028 
	float m_TemporalLoddingSecondDeltaTime; //0x002C 
	float m_TemporalLoddingThirdDeltaTime; //0x0030 
	float m_TemporalLoddingFourthDeltaTime; //0x0034 
	float m_TemporalLoddingFifthDeltaTime; //0x0038 
	float m_TemporalLoddingSixthDeltaTime; //0x003C 
	float m_TemporalLoddingFirstDistance; //0x0040 
	float m_TemporalLoddingSecondDistance; //0x0044 
	float m_TemporalLoddingThirdDistance; //0x0048 
	float m_TemporalLoddingFourthDistance; //0x004C 
	float m_TemporalLoddingFifthDistance; //0x0050 
	float m_TemporalLoddingSixthDistance; //0x0054 
	float m_TemporalLoddingFarDistance; //0x0058 
	unsigned char m_ServerEnable; //0x005C 
	unsigned char m_ClientEnable; //0x005D 
	unsigned char m_UseRawGamepadInput; //0x005E 
char _0x005F[0x0001];

};//Size=0x0060

class GameInteractionEntityData : public InteractionEntityData
{
public:
	float m_DelayBetweenUses; //0x00A0 
	TeamId m_TeamId; //0x00A4 
	TeamId m_SpectatorTeamId; //0x00A8 
	__int32 m_InputAction; //0x00AC 
	float m_HoldToInteractTime; //0x00B0 
	InteractionEntityType m_InteractionEntityType; //0x00B4 
	char* m_InteractionSid; //0x00B8 
	BlinkType m_Blink; //0x00C0 
	char _0x00C4[0x0004];
	char* m_InteractingSid; //0x00C8 
	char* m_NameSid; //0x00D0 
	float m_InteractionVerticalOffset; //0x00D8 
	char _0x00DC[0x0004];
	char* m_FriendlyTextSid; //0x00E0 
	char* m_EnemyTextSid; //0x00E8 
	float m_CapturepointVerticalOffset; //0x00F0 
	float m_ArtilleryIconBlinkRate; //0x00F4 
	char* m_IconName; //0x00F8 
	UIWorldIconBehavior* m_IconBehavior; //0x0100 
	float m_TacticalRadius; //0x0108 
	unsigned char m_ShrinkSnap; //0x010C 
	unsigned char m_ShowAsCapturePoint; //0x010D 
	unsigned char m_FriendlyInteractionEnabled; //0x010E 
	unsigned char m_EnemyInteractionEnabled; //0x010F 
	unsigned char m_IsArtilleryAvailable; //0x0110 
	unsigned char m_ForceSnap; //0x0111 
char _0x0112[0x000E];

};//Size=0x0120

class GameLevel
{
public:
	char _0x0000[0x0018];
	LevelData* m_LevelData; //0x0018 
	char _0x0020[0x0008];
	char* m_Name; //0x0028 
	char _0x0030[0x00D8];
	PhysicsManager* m_PhysicsManager; //0x0108 

};//Size=0x0110

class GameModeSettings : public SystemSettings
{
public:
	void** m_Information; //0x0020 

};//Size=0x0028

class GameRender
{
public:
	char _0x0000[0x0040];
	GameRenderSettings* m_GameRenderSettings; //0x0040 
	char _0x0048[0x0018];
	RenderView* m_View; //0x0060 

};//Size=0x0068

class GameRenderSettings : public DataContainer
{
public:
	DWORD m_InactiveSkipFrameCount; //0x0010 
	float m_ResolutionScale; //0x0014 
	float m_FrameSynthesisScaleH; //0x0018 
	float m_FrameSynthesisScaleV; //0x001C 
	float m_ResolutionScaleDynamicGraphMax; //0x0020 
	__int32 m_MantleEnable; //0x0024 
	float m_NearPlane; //0x0028 
	float m_ViewDistance; //0x002C 
	float m_ForceFov; //0x0030 
	float m_FovMultiplier; //0x0034 
	float m_ForceOrthoViewSize; //0x0038 
	float m_EdgeModelScreenAreaScale; //0x003C 
	float m_EdgeModelViewDistance; //0x0040 
	__int32 m_EdgeModelForceLod; //0x0044 
	float m_EdgeModelLodScale; //0x0048 
	float m_StaticModelPartOcclusionMaxScreenArea; //0x004C 
	DWORD m_StaticModelCullJobCount; //0x0050 
	DWORD m_SplitScreenTestViewCount; //0x0054 
	DWORD m_SplitScreenTestCase; //0x0058 
	float m_ForceBlurAmount; //0x005C 
	float m_ForceWorldFadeAmount; //0x0060 
	ScaleResampleMode m_RenderScaleResampleMode; //0x0064 
	float m_StereoCrosshairMaxHitDepth; //0x0068 
	float m_StereoCrosshairRadius; //0x006C 
	float m_StereoCrosshairDampingFactor; //0x0070 
	DWORD m_UIBlurKernelRadius; //0x0074 
	float m_DisplayMappingSdrPeakLuma; //0x0078 
	float m_DisplayMappingHdr10PeakLuma; //0x007C 
	DisplayMappingShoulderType m_DisplayMappingShoulderType; //0x0080 
	float m_HdrLiveGradingOverlayOpacity; //0x0084 
	float m_DolbyVisionMetadataL1MinLuminanceOverride; //0x0088 
	float m_DolbyVisionMetadataL1MaxLuminanceOverride; //0x008C 
	float m_DolbyVisionMetadataL2MinLuminanceOverride; //0x0090 
	float m_DolbyVisionMetadataL2MaxLuminanceOverride; //0x0094 
	float m_DolbyVisionMetadataL2AvgLuminanceOverride; //0x0098 
	unsigned char m_Enable; //0x009C 
	unsigned char m_NullRendererEnable; //0x009D 
	unsigned char m_JobEnable; //0x009E 
	unsigned char m_BuildJobSyncEnable; //0x009F 
	unsigned char m_DrawDebugDynamicTextureArrays; //0x00A0 
	unsigned char m_DrawDebugInfo; //0x00A1 
	unsigned char m_DrawScreenInfo; //0x00A2 
	unsigned char m_ResolutionScaleDynamicDrawDebug; //0x00A3 
	unsigned char m_ClampGpuMemory; //0x00A4 
	unsigned char m_Fullscreen; //0x00A5 
	unsigned char m_ForceVSyncEnable; //0x00A6 
	unsigned char m_MovieVSyncEnable; //0x00A7 
	unsigned char m_VSyncFlashTestEnable; //0x00A8 
	unsigned char m_OutputBrightnessTestEnable; //0x00A9 
	unsigned char m_GlEnable; //0x00AA 
	unsigned char m_Dx11Enable; //0x00AB 
	unsigned char m_Dx12Enable; //0x00AC 
	unsigned char m_BalsaEnable; //0x00AD 
	unsigned char m_Gen4aEsramEnable; //0x00AE 
	unsigned char m_Gen4bColorRemap; //0x00AF 
	unsigned char m_GpuTextureCompressorEnable; //0x00B0 
	unsigned char m_MeshWorldEnable; //0x00B1 
	unsigned char m_EmittersEnable; //0x00B2 
	unsigned char m_EntityRenderEnable; //0x00B3 
	unsigned char m_DebugRendererEnable; //0x00B4 
	unsigned char m_DebugRenderServiceEnable; //0x00B5 
	unsigned char m_InitialClearEnable; //0x00B6 
	unsigned char m_GpuProfilerEnable; //0x00B7 
	unsigned char m_ForceOrthoViewEnable; //0x00B8 
	unsigned char m_ForceSquareOrthoView; //0x00B9 
	unsigned char m_DestructionVolumeDrawEnable; //0x00BA 
	unsigned char m_EdgeModelsEnable; //0x00BB 
	unsigned char m_EdgeModelCastShadowsEnable; //0x00BC 
	unsigned char m_EdgeModelDepthBiasEnable; //0x00BD 
	unsigned char m_EdgeModelShadowDepthBiasEnable; //0x00BE 
	unsigned char m_EdgeModelUseMainLodEnable; //0x00BF 
	unsigned char m_EdgeModelUseLodBox; //0x00C0 
	unsigned char m_EdgeModelCullEnable; //0x00C1 
	unsigned char m_EdgeModelFrustumCullEnable; //0x00C2 
	unsigned char m_EdgeModelDrawBoxes; //0x00C3 
	unsigned char m_EdgeModelDrawStats; //0x00C4 
	unsigned char m_StaticModelEnable; //0x00C5 
	unsigned char m_StaticModelMeshesEnable; //0x00C6 
	unsigned char m_StaticModelZPassEnable; //0x00C7 
	unsigned char m_StaticModelPartCullEnable; //0x00C8 
	unsigned char m_StaticModelPartFrustumCullEnable; //0x00C9 
	unsigned char m_StaticModelPartOcclusionCullEnable; //0x00CA 
	unsigned char m_StaticModelPartShadowCullEnable; //0x00CB 
	unsigned char m_StaticModelDrawBoxes; //0x00CC 
	unsigned char m_StaticModelDrawStats; //0x00CD 
	unsigned char m_StaticModelCullSpuJobEnable; //0x00CE 
	unsigned char m_StaticModelSurfaceShaderTerrainAccessEnable; //0x00CF 
	unsigned char m_LockView; //0x00D0 
	unsigned char m_ResetLockedView; //0x00D1 
	unsigned char m_InfiniteProjectionMatrixEnable; //0x00D2 
	unsigned char m_SecondaryStreamingViewEnable; //0x00D3 
	unsigned char m_FadeEnable; //0x00D4 
	unsigned char m_FadeWaitingEnable; //0x00D5 
	unsigned char m_FadeInverted; //0x00D6 
	unsigned char m_RenderPlanesEnable; //0x00D7 
	unsigned char m_RenderPlaneMainEnable; //0x00D8 
	unsigned char m_RenderPlaneOverlayEnable; //0x00D9 
	unsigned char m_RenderPlanesAutoDisable; //0x00DA 
	unsigned char m_RenderScaleResampleEnable; //0x00DB 
	unsigned char m_BlurEnable; //0x00DC 
	unsigned char m_UIBlurEnable; //0x00DD 
	unsigned char m_UIBlurDownsampleBoxBlur; //0x00DE 
	unsigned char m_HdrGradingEnable; //0x00DF 
	unsigned char m_DisplayMappingEnable; //0x00E0 
	unsigned char m_HdrOutputPreferCs; //0x00E1 
	unsigned char m_DrawHdrCalibrationScreen; //0x00E2 
	unsigned char m_DolbyVisionMetadataLuminanceOverrideEnable; //0x00E3 
	unsigned char m_DolbyVisionMetadataDebugOverlayEnable; //0x00E4 
char _0x00E5[0x0003];

};//Size=0x00E8

class GameSettings : public SystemSettings
{
public:
	DWORD m_MaxPlayerCount; //0x0020 
	DWORD m_MaxSpectatorCount; //0x0024 
	DWORD m_MinPlayerCountElimination; //0x0028 
	LogFileCollisionMode m_LogFileCollisionMode; //0x002C 
	DWORD m_LogFileRotationHistoryLength; //0x0030 
	char _0x0034[0x0004];
	char* m_Level; //0x0038 
	char* m_StartPoint; //0x0040 
	char* m_InstallationLevel; //0x0048 
	char* m_InstallationStartPoint; //0x0050 
	char* m_InstallationDefaultLayerInclusion; //0x0058 
	Array<InputConfigurationAsset*>* m_InputConfiguration; //0x0060 
	char* m_ActiveGameModeViewDefinition; //0x0068 
	Array<GameModeViewDefinition*>* m_GameModeViewDefinitions; //0x0070 
	TeamId m_DefaultTeamId; //0x0078 
	DWORD m_PS3ContentRatingAge; //0x007C 
	DWORD m_LogHistory; //0x0080 
	char _0x0084[0x0004];
	VersionData* m_Version; //0x0088 
	SubWorldInclusion* m_LayerInclusionTable; //0x0090 
	char* m_DefaultLayerInclusion; //0x0098 
	float m_TimeBeforeSpawnIsAllowed; //0x00A0 
	float m_LevelWarmUpTime; //0x00A4 
	float m_TimeToWaitForQuitTaskCompletion; //0x00A8 
	char _0x00AC[0x0004];
	PlayerData* m_Player; //0x00B0 
	DifficultyDatas* m_DifficultySettings; //0x00B8 
	__int32 m_DifficultyIndex; //0x00C0 
	SKU m_CurrentSKU; //0x00C4 
	Array<GameSettingsComponent*>* m_GameSettingsComponents; //0x00C8 
	float m_HistoryMaxProjectileDistance; //0x00D0 
	unsigned char m_LogFileEnable; //0x00D4 
	unsigned char m_ResourceRefreshAlwaysAllowed; //0x00D5 
	unsigned char m_SpawnMaxLocalPlayersOnStartup; //0x00D6 
	unsigned char m_UseSpeedBasedDetailedCollision; //0x00D7 
	unsigned char m_UseSingleWeaponSelector; //0x00D8 
	unsigned char m_AutoAimEnabled; //0x00D9 
	unsigned char m_HasUnlimitedAmmo; //0x00DA 
	unsigned char m_HasUnlimitedMags; //0x00DB 
	unsigned char m_RotateLogs; //0x00DC 
	unsigned char m_AdjustVehicleCenterOfMass; //0x00DD 
	unsigned char m_AimAssistEnabled; //0x00DE 
	unsigned char m_AimAssistUsePolynomials; //0x00DF 
	unsigned char m_ForceFreeStreaming; //0x00E0 
	unsigned char m_ForceDisableFreeStreaming; //0x00E1 
	unsigned char m_IsGodMode; //0x00E2 
	unsigned char m_IsJesusMode; //0x00E3 
	unsigned char m_IsJesusModeAi; //0x00E4 
	unsigned char m_CoreParallelDispatchJobsEnabled; //0x00E5 
	unsigned char m_GameAdministrationEnabled; //0x00E6 
	unsigned char m_AllowDestructionOutsideCombatArea; //0x00E7 
	unsigned char m_DefaultCameraInheritsFov; //0x00E8 
char _0x00E9[0x0007];

};//Size=0x00F0

class GameTweakData : public GameAIDifficultyData
{
public:
	GameTweakCommon m_Common; //0x0010 
	GameTweakAITargeting m_AITargeting; //0x01B0 
	char _0x0234[0x0004];
	GameTweakBucketDamage m_BucketDamageAiVsHuman; //0x0238 
	GameTweakBucketDamage m_BucketDamageAiVsAi; //0x0278 
	GameTweakSniper m_Sniper; //0x02B8 
	GameTweakPanicBehavior m_Panic; //0x02C8 
	GameTweakBlindedBehavior m_Blinded; //0x02D8 
	AISoundDefaults m_AISoundDefaults; //0x02E0 

};//Size=0x02E8

class GameView : public TargetCameraCallback
{
public:
char _0x0008[0x0008];

};//Size=0x0010

class GearboxConfigData : public DataContainer
{
public:
char _0x0010[0x0048];

};//Size=0x0058

class GrenadeEntityData : public GhostedProjectileEntityData
{
public:
	float m_Gravity; //0x0140 
	float m_CollisionSpeedMultiplier; //0x0144 
	float m_MinBounceSpeed; //0x0148 
	float m_CollisionDamage; //0x014C 
	char _0x0154[0x0004];
	char* m_HudIndicatorIcon; //0x0158 
	MaterialDecl m_MaterialPairOverride; //0x0160 
	char _0x0164[0x0004];
	Array<ExplosionPackTrigger*>* m_ExplosionTriggers; //0x0168 
	float m_VehicleDetonationSampleInterval; //0x0170 
	float m_SoldierDetonationSampleInterval; //0x0174 
	unsigned char m_ShowHudIndicator; //0x0178 
	unsigned char m_UseMaterialOverride; //0x0179 
char _0x017A[0x0006];

};//Size=0x0180

class GunSwayData : public WeaponSwayData
{
public:
	Array<GunSwayDispersionData*>* m_Dispersion; //0x0010 
	Array<GunSwayRecoilData*>* m_Recoil; //0x0018 
	Array<GunSwayStanceTransition*>* m_StanceTransitionDispersion; //0x0020 
	Array<GunSwayDispersionModData*>* m_SuppressionDispersionModifiers; //0x0028 
	Array<GunSwayRecoilModData*>* m_SuppressionRecoilModifiers; //0x0030 
	GunSwayStandData m_Stand; //0x0038 
	GunSwayCrouchProneData m_Crouch; //0x0128 
	GunSwayCrouchProneData m_Prone; //0x01B8 
	GunSwayStanceTransition m_ProneToCrouch; //0x0248 
	GunSwayStanceTransition m_ProneToStand; //0x0264 
	GunSwayStanceTransition m_CrouchToProne; //0x0280 
	GunSwayStanceTransition m_CrouchToStand; //0x029C 
	GunSwayStanceTransition m_StandToProne; //0x02B8 
	GunSwayStanceTransition m_StandToCrouch; //0x02D4 
	GunSwayStanceZoomModifierData m_SuppressionModifierUnzoomed; //0x02F0 
	GunSwayStanceZoomModifierData m_SuppressionModifierZoomed; //0x0358 
	Array<GunSwayModifierUnlock*>* m_ModifierUnlocks; //0x03C0 
	float m_ShootingRecoilDecreaseScale; //0x03C8 
	float m_FirstShotNoZoomDispersionMultiplier; //0x03CC 
	float m_FirstShotZoomDispersionMultiplier; //0x03D0 
	float m_FirstShotRecoilMultiplier; //0x03D4 
	float m_PowerOfDispersionRandom; //0x03D8 
	char _0x03DC[0x0004];
	CameraRecoilData* m_CameraRecoil; //0x03E0 
	unsigned char m_CameraRecoilWhenZoomed; //0x03E8 
char _0x03E9[0x0007];

};//Size=0x03F0

class HavokAsset : public Asset
{
public:
	Array<DataContainer*>* m_ExternalAssets; //0x0018 
	ResourceRef m_Resource; //0x0020 

};//Size=0x0028

class HearingModifier : public DataContainer
{
public:
	float m_SensingShotFiredDistance; //0x0010 
	float m_SensingHumanDrivenVehicleDistance; //0x0014 
	float m_SensingExplosionDistance; //0x0018 
	float m_SensingGrenadeDistance; //0x001C 

};//Size=0x0020

class HorseHealthComponentData : public ControllableHealthComponentData
{
public:
	float m_MaxHealth; //0x0070 
	float m_DamageMultiplier; //0x0074 
	float m_FallDamageThreshold; //0x0078 
	char _0x007C[0x0004];
	Array<ValueAtX*>* m_DamageAtVerticalVelocity; //0x0080 
char _0x0088[0x0008];

};//Size=0x0090

class HorsePhysicsComponentData : public VehiclePhysicsComponentData
{
public:
	MaterialDecl m_HorseMaterial; //0x00B0 
char _0x00B4[0x000C];

};//Size=0x00C0

class HorsePropulsionPhysicsActionData : public PhysicsActionBaseData
{
public:
	float m_InputSteering; //0x0048 
	float m_InputThrottle; //0x004C 
	float m_InputBrake; //0x0050 
	float m_InputBrakeInAir; //0x0054 
	float m_RunSpeed; //0x0058 
	char _0x005C[0x0004];
	AudioCurve m_SurfacePitchRunSpeedMultiplier; //0x0060 
	AudioCurve m_AccelerationCurve; //0x0070 
	AudioCurve m_DeaccelerationCurve; //0x0080 
	float m_MinSideSpeedForAutoThrottle; //0x0090 
	float m_ReverseSteeringMultiplier; //0x0094 
	float m_ReverseSpeed; //0x0098 
	float m_ReverseSensorRayLength; //0x009C 
	float m_ReverseSensorOffsetY; //0x00A0 
	float m_ReverseSensorOffsetZ; //0x00A4 
	AudioCurve m_YawSpeed; //0x00A8 
	AudioCurve m_StoppingYawSpeed; //0x00B8 
	AudioCurve m_YawAccelerationCurve; //0x00C8 
	AudioCurve m_YawDeaccelerationCurve; //0x00D8 
	AudioCurve m_BrakeSpeed; //0x00E8 
	AudioCurve m_BrakeZoneAngle; //0x00F8 
	AudioCurve m_StoppingBrakeZoneAngle; //0x0108 
	float m_IdleSpeedlimit; //0x0118 
	float m_StoppingToIdleTimeout; //0x011C 
	float m_SlopeForMinSliding; //0x0120 
	float m_SlopeSlidingForce; //0x0124 
	float m_SlopeForMaxSliding; //0x0128 
char _0x012C[0x0004];

};//Size=0x0130

class IClientDiceShooterVehicleEntryComponent
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

char _0x0008[0x0038];

};//Size=0x0040

class IPhysicsRayCaster
{
public:
	virtual bool PhysicsRayQuery(const char* identifier, D3DXVECTOR4* from, D3DXVECTOR4* to, RayCastHit* hit, int flag, void* PhysicsEntityList);; //
	virtual void* asyncPhysicsRayQuery(const char* identifier, D3DXVECTOR4* from, D3DXVECTOR4* to, int flag, void* PhysicsEntityList);; //

};//Size=0x0008

class InputActionMappingsData : public DataContainer
{
public:
char _0x0010[0x0008];

};//Size=0x0018

class InputCache
{
public:
	unsigned char m_DisableCache; //0x0000 
	char _0x0001[0x0003];
	float m_ConceptCache[0x00EA]; //0x0004 
	DWORD m_SourceCache[0x0001]; //0x03AC 

};//Size=0x03B0

class InputCamera
{
public:
	char _0x0000[0x0090];
	D3DXMATRIX m_VehicleTransform1; //0x0090 
	D3DXMATRIX m_ControllableTransform; //0x00D0 
	D3DXVECTOR3 m_SoldierPosition1; //0x0110 
	char _0x011C[0x00EC];
	VeniceFPSCamera* m_VeniceFPSCamera; //0x0208 
	char _0x0210[0x0008];
	Camera* m_Camera; //0x0218 
char _0x0220[0x0008];

};//Size=0x0228

class InputConfigurationAsset : public Asset
{
public:
	Array<EntryInputActionMapsData*>* m_DefaultInputConceptDefinitions; //0x0018 
	Array<InputConceptIdentifiers*>* m_DefaultExclusiveInputConcepts; //0x0020 
	EntryInputActionBindingsData* m_EntryInputActionBindings; //0x0028 
	Array<EditableActionMap*>* m_UserConfigurableActionMaps; //0x0030 
	UIInputActionDataAsset* m_UIInputActions; //0x0038 
	__int32 m_TogglePoseAction; //0x0040 
	__int32 m_CrouchAction; //0x0044 
	__int32 m_CrouchAndHoldAction; //0x0048 
	__int32 m_PickupInteractionAction; //0x004C 
	__int32 m_PickupInteractionActionKeyboard; //0x0050 
	float m_SprintReleaseTime; //0x0054 
	float m_ThrottleInputRequiredForSprint; //0x0058 
	float m_VehicleBoostIsToggleMinInput; //0x005C 
	float m_EnterVehicleHoldTime; //0x0060 
	char _0x0064[0x0004];
	Array<PoseTransition*>* m_FiringDisablingTransitions; //0x0068 
	unsigned char m_ReverseInputConceptExclusion; //0x0070 
	unsigned char m_ProneToStandOnJump; //0x0071 
	unsigned char m_StandAutomaticallyIfSprinting; //0x0072 
	unsigned char m_DisableCrouch; //0x0073 
	unsigned char m_DisableProne; //0x0074 
	unsigned char m_DisableCrawlingWhileFiring; //0x0075 
	unsigned char m_DisableCrawlingWhileReloading; //0x0076 
	unsigned char m_DisableFiringWhileDeployingBipod; //0x0077 
	unsigned char m_DisableFiringWhileJumping; //0x0078 
	unsigned char m_DisableSprintingWhileReloading; //0x0079 
	unsigned char m_EnableSprintToCrouchTransition; //0x007A 
	unsigned char m_StopSprintingWhenReleasingThrottle; //0x007B 
	unsigned char m_StopSprintingWhenReleasingSprint; //0x007C 
	unsigned char m_WaitForSprintReleaseBeforeSprintAgain; //0x007D 
	unsigned char m_VehicleBoostIsToggle; //0x007E 
	unsigned char m_InputCurvesEnabled; //0x007F 

};//Size=0x0080

class FiringCallbackHolder
{
public:
	FiringCallback* m_Array[0x000A]; //0x0000 

};//Size=0x0050

class AILevelData : public DataContainer
{
public:
};//Size=0x0010

class InterpolationManagerSettings : public DataContainer
{
public:
	float m_MinSendTickDeltaVariation; //0x0010 
	float m_TimeNudgePIDConstKPos; //0x0014 
	float m_TimeNudgePIDConstKNeg; //0x0018 
	float m_TimeNudgePIDConstTIPos; //0x001C 
	float m_TimeNudgePIDConstTINeg; //0x0020 
	float m_TimeNudgePIDConstTDPos; //0x0024 
	float m_TimeNudgePIDConstTDNeg; //0x0028 
	float m_TimeNudgePIDPacketDeltaTimeTol; //0x002C 
	float m_TimeNudgePIDIncreaseDueToMissingPacket; //0x0030 
	float m_TimeNudgePIDMaxChangePerSec; //0x0034 
	float m_PIDMissingPacketTime; //0x0038 
	float m_PIDMissingPacketCorrTimer; //0x003C 
	__int32 m_AveragePacketSampleCount; //0x0040 
char _0x0044[0x0004];

};//Size=0x0048

class AIWeaponData : public GameAIWeaponData
{
public:
	FiringWeaponClass m_FiringWeaponClass; //0x0018 
	VoPrimaryFireType m_VoPrimaryFireType; //0x001C 
	float m_WeaponRange; //0x0020 
	float m_MinimumUsageDistance; //0x0024 
	float m_MaximumUsageDistance; //0x0028 
	float m_VehicleMaxTargetLOSLost; //0x002C 
	float m_MinEnterVehicleDistance; //0x0030 
	float m_ExitVehicleDisableTime; //0x0034 
	EvasionVolume* m_EvasionVolume; //0x0038 
	PreferredRange* m_PreferredRange; //0x0040 
	PreferredRange* m_IndoorPreferredRange; //0x0048 
	PreferredRange* m_OutdoorPreferredRange; //0x0050 
	FiringIntervalPattern* m_FiringIntervalPattern; //0x0058 
	SustainFiringData* m_SustainFiringData; //0x0060 
	BurstIntervalPattern* m_BurstIntervalPattern; //0x0068 
	CreepingAirBarrage* m_CreepingAirBarrage; //0x0070 
	SprayPattern* m_SprayPattern; //0x0078 
	AccuracyHitBox* m_AccuracyHitBox; //0x0080 
	VehicleAimerSettings* m_VehicleAimerSettings; //0x0088 
	VisionModifier* m_VisionModifier; //0x0090 
	HearingModifier* m_HearingModifier; //0x0098 
	TargetModifier* m_TargetModifier; //0x00A0 
	TargetingData* m_TargetingSettingsOverride; //0x00A8 
	VehicleInaccuracySettings* m_VehicleInaccuracySettings; //0x00B0 
	SuppressedBehavior* m_SuppressedBehavior; //0x00B8 
	DamageModifier* m_DamageModifier; //0x00C0 
	DamageModifierExtended* m_DamageModifierExtended; //0x00C8 
	WeaponRestrictions* m_FriendlyWeaponRestrictions; //0x00D0 
	WeaponRestrictions* m_EnemyWeaponRestrictions; //0x00D8 
	SpecialBehavior* m_SpecialBehavior; //0x00E0 
	WeaponHitProbability* m_HumanTargetHitProbability; //0x00E8 
	DistanceToAwareCurveOverride* m_DistanceToAwareCurveOverride; //0x00F0 
	ValidAgainst m_ValidAgainst; //0x00F8 
	TargetPreference m_TargetPreference; //0x00FC 
	float m_WeaponThreatScale; //0x0100 
	float m_ValidWeaponScale; //0x0104 
	float m_InValidWeaponScale; //0x0108 
	unsigned char m_UseTargetExtrapolation; //0x010C 
	unsigned char m_CausesEvasionOnFire; //0x010D 
	unsigned char m_UseShootspaceForVision; //0x010E 
char _0x010F[0x0001];

};//Size=0x0110

class AccuracyHitBox : public DataContainer
{
public:
	float m_AimBoxDistMin; //0x0010 
	float m_AimBoxDistMax; //0x0014 
	float m_AimBoxDistFarStart; //0x0018 
	float m_AimBoxDistFarEnd; //0x001C 
	float m_AimBoxWidthMinDistMin; //0x0020 
	float m_AimBoxWidthMaxDistMin; //0x0024 
	float m_AimBoxHeightMinDistMin; //0x0028 
	float m_AimBoxHeightMaxDistMin; //0x002C 
	float m_AimBoxWidthMinDistMax; //0x0030 
	float m_AimBoxWidthMaxDistMax; //0x0034 
	float m_AimBoxHeightMinDistMax; //0x0038 
	float m_AimBoxHeightMaxDistMax; //0x003C 
	float m_AimBoxWidthMinDistFar; //0x0040 
	float m_AimBoxWidthMaxDistFar; //0x0044 
	float m_AimBoxHeightMinDistFar; //0x0048 
	float m_AimBoxHeightMaxDistFar; //0x004C 

};//Size=0x0050

class AeroDynamicPhysicsData : public DataContainer
{
public:
	D3DXVECTOR3 m_BodyDrag; //0x0010 
	char _0x001C[0x0004];
	D3DXVECTOR3 m_BodyDragOffsetYZ; //0x0020 
	char _0x002C[0x0004];
	D3DXVECTOR3 m_BodyDragOffsetXZ; //0x0030 
	char _0x003C[0x0004];
	D3DXVECTOR3 m_BodyDragOffsetXY; //0x0040 
char _0x004C[0x0004];

};//Size=0x0050

class AiAimInputEntityData : public AimInputEntityData
{
public:
	float m_Yaw; //0x0018 
	float m_Pitch; //0x001C 
	unsigned char m_Active; //0x0020 
char _0x0021[0x0007];

};//Size=0x0028

class JobAffinitySettings : public SystemSettings
{
public:
	JobAffinitySet m_ClientIdle; //0x0020 
	JobAffinitySet m_ClientUpdateRenderer; //0x003E 
	JobAffinitySet m_ClientUpdateGame; //0x005C 
	JobAffinitySet m_ClientSimAsync; //0x007A 
	JobAffinitySet m_ClientAntAsync; //0x0098 
	JobAffinitySet* m_ClientPhysicsAsync; //0x00B6 
char _0x00BE[0x001A];

};//Size=0x00D8

class KeyboardImpl : public IKeyboard
{
public:
};//Size=0x0008

class KeyboardInputActionData : public InputActionData
{
public:
	InputDeviceKeys m_Key; //0x0018 
char _0x001C[0x0004];

};//Size=0x0020

class AimEntityData : public EntityData
{
public:
	SoldierAimingSimulationData* m_DefaultAimingController; //0x0018 
	LinearTransform m_AimOverrideTransform; //0x0020 
	D3DXVECTOR3 m_FollowOffset; //0x0060 
	char _0x006C[0x0004];
	__int32 m_YawInput; //0x0070 
	__int32 m_PitchInput; //0x0074 
	__int32 m_ThrottleInput; //0x0078 
	__int32 m_StrafeInput; //0x007C 
	float m_TimeToDelayAfterCollision; //0x0080 
	float m_CollisionBlendOut; //0x0084 
	float m_SuppressionValue; //0x0088 
	unsigned char m_Excluded; //0x008C 
	unsigned char m_AllowBlendOut; //0x008D 
	unsigned char m_OverrideAim; //0x008E 
	unsigned char m_AimAtLastHitPosition; //0x008F 

};//Size=0x0090

class LandingGearLogicData : public DataContainer
{
public:
	LandingGearConditionData m_RetractCondition; //0x0010 
	LandingGearConditionData m_DeployCondition; //0x001C 

};//Size=0x0028

class LevelData : public WorldData
{
public:
	PathfindingBlobAsset* m_PathfindingBlobs; //0x0088 
	GameAISystem* m_AISystem; //0x0090 
	GameAISystem* m_AI2System; //0x0098 
	AILevelData* m_AILevelData; //0x00A0 
	float m_WorldSizeXZ; //0x00A8 
	char _0x00AC[0x0004];
	LevelDescription m_LevelDescription; //0x00B0 
	char* m_GameConfigurationName; //0x00D0 
	float m_DefaultFOV; //0x00D8 
	float m_InfantryFOVMultiplier; //0x00DC 
	StreamPoolPreset* m_StreamPoolPreset; //0x00E0 
	VoiceOverSystemAsset* m_VoiceOverSystem; //0x00E8 
	Array<VoiceOverLogicAsset*>* m_VoiceOverLogic; //0x00F0 
	float m_MaxVehicleHeight; //0x00F8 
	char _0x00FC[0x0004];
	EnlightenShaderDatabaseAsset* m_EnlightenShaderDatabase; //0x0100 
	AntProjectAsset* m_AntProjectAsset; //0x0108 
	char* m_AerialHeightmapData; //0x0110 
	Array<CameraModeAsset*>* m_CameraModes; //0x0118 
	Array<CameraTransition*>* m_CameraTransitions; //0x0120 
	LevelPreloadInfo m_PreloadInfo; //0x0128 
	FaceAnimationWaveMappings* m_FaceAnimationWaveMappings; //0x0138 
	Array<CString*>* m_AutoLoadBundles; //0x0140 
	UnlockIdTable m_UnlockIdTable; //0x0148 
	__int32 m_WaitForInstallationGroupHash; //0x0150 
	unsigned char m_HugeBroadPhase; //0x0154 
	unsigned char m_FreeStreamingEnable; //0x0155 
	unsigned char m_NewShaderDatabase; //0x0156 
	unsigned char m_OldShaderDatabase; //0x0157 

};//Size=0x0158

class AimRotationBoneComponentData : public GameComponentData
{
public:
	GameplayBones m_FollowBone; //0x0070 
	unsigned char m_RequireUpdateVisualTransforms; //0x0074 
	unsigned char m_IsAimRotationBoneRoot; //0x0075 
	unsigned char m_ApplyYaw; //0x0076 
	unsigned char m_ApplyPitch; //0x0077 
	unsigned char m_Active; //0x0078 
char _0x0079[0x0007];

};//Size=0x0080

class AimTransformBuilderEntityData : public EntityData
{
public:
	Realm m_Realm; //0x0018 
	char _0x001C[0x0004];
	LinearTransform m_BaseOffset; //0x0020 
	D3DXVECTOR3 m_Offset; //0x0060 
	char _0x006C[0x0004];
	LinearTransform m_AimFollowTransform; //0x0070 
	float m_Yaw; //0x00B0 
	float m_Pitch; //0x00B4 
	unsigned char m_UseOwnerAsFollowTransform; //0x00B8 
	unsigned char m_RunInPostAnimation; //0x00B9 
char _0x00BA[0x0006];

};//Size=0x00C0

class AimingConstraintEntityData : public EntityData
{
public:
	__int32 m_ConstraintPriority; //0x0018 
	char _0x001C[0x0004];
	LinearTransform m_ConstraintFollowTransform; //0x0020 
	AimingConstraintsData m_AimingConstraints; //0x0060 
	unsigned char m_Enabled; //0x0070 
	unsigned char m_EnableRelativeFollowTransformYaw; //0x0071 
	unsigned char m_EnableRelativeFollowTransformPitch; //0x0072 
char _0x0073[0x000D];

};//Size=0x0080

class LocalizationAsset : public Asset
{
public:
	Array<UITextDatabase*>* m_LocalizedTexts; //0x0018 

};//Size=0x0020

class AimingSimulationEntityData : public EntityData
{
public:
	Array<SoldierAimingSimulationData*>* m_AimingControllers; //0x0018 
	__int32 m_CurrentIndex; //0x0020 
char _0x0024[0x0004];

};//Size=0x0028

class LockingControllerData : public DataContainer
{
public:
	Array<ZoomLevelLockData*>* m_ZoomLevelLock; //0x0010 
	float m_LockTime; //0x0018 
	float m_UnLockTime; //0x001C 
	float m_ReleaseTime; //0x0020 
	float m_ReleaseOnNewTargetTime; //0x0024 
	float m_SampleRate; //0x0028 
	float m_HoldStillThreshold; //0x002C 
	float m_CheckVisibilityLength; //0x0030 
	float m_RayLength; //0x0034 
	float m_AcceptanceAngle; //0x0038 
	float m_AngleConstant; //0x003C 
	float m_DistanceConstant; //0x0040 
	float m_Sensitivity; //0x0044 
	float m_MinimumLockTime; //0x0048 
	LockingAndHomingData m_LockingWeaponData; //0x004C 
	unsigned char m_LockOnVisibleTargetsOnly; //0x0058 
	unsigned char m_RequireAmmoToLock; //0x0059 
	unsigned char m_PositionOnly; //0x005A 
	unsigned char m_LockOnWorldSpacePos; //0x005B 
	unsigned char m_NormalizeConstantWeights; //0x005C 
	unsigned char m_CheckTargetLockStrengthOnRaycast; //0x005D 
	unsigned char m_LockOnVehicles; //0x005E 
	unsigned char m_LockOnEmptyVehicles; //0x005F 
	unsigned char m_LockOnCharacters; //0x0060 
	unsigned char m_LockOnCharactersInOpenEntries; //0x0061 
	unsigned char m_IgnoreHeigthLockDistance; //0x0062 
	unsigned char m_LockInCombatAreaOnly; //0x0063 
char _0x0064[0x0004];

};//Size=0x0068

class LockingTypeAsset : public Asset
{
public:
};//Size=0x0018

class AimingWorldLockEfficiencyEntityData : public EntityData
{
public:
	__int32 m_EfficiencyPriority; //0x0018 
	AimingWorldSpaceLockEfficiencyData m_AimingWorldSpaceLockEfficiency; //0x001C 
	float m_OverrideYawEfficiency; //0x002C 
	float m_OverridePitchEfficiency; //0x0030 
	float m_OverrideYawEfficiencyZoom; //0x0034 
	float m_OverridePitchEfficiencyZoom; //0x0038 
	unsigned char m_Enabled; //0x003C 
char _0x003D[0x0003];

};//Size=0x0040

class Main
{
public:
	char _0x0000[0x0020];
	unsigned char m_IsDedicatedServer; //0x0020 
	unsigned char m_IsDedicatedServerData; //0x0021 
	unsigned char m_IsPaused; //0x0022 
	char _0x0023[0x002D];
	Client* m_Client; //0x0050 

};//Size=0x0058

class MaskVolumeEntityData : public RenderVolumeEntityData
{
public:
};//Size=0x00A0

class MaterialGridData : public Asset
{
public:
	MaterialDecl m_DefaultMaterial; //0x0018 
	char _0x001C[0x0004];
	Array<MaterialDecl*>* m_MaterialPairs; //0x0020 
	Array<Uint32*>* m_MaterialIndexMap; //0x0028 
	DWORD m_DefaultMaterialIndex; //0x0030 
	char _0x0034[0x0004];
	Array<MaterialRelationPropertyPair*>* m_MaterialProperties; //0x0038 
	Array<MaterialInteractionGridRow*>* m_InteractionGrid; //0x0040 

};//Size=0x0048

class AlignmentData : public DataContainer
{
public:
	__int32 m_AlignAction; //0x0010 
	float m_StopTolerance; //0x0014 
	float m_Speed; //0x0018 
char _0x001C[0x0004];

};//Size=0x0020

class MathEntityData : public EntityData
{
public:
	char _0x001C[0x0004];
	MathEntityAssembly m_Assembly; //0x0020 
	unsigned char m_EvaluateOnEvent; //0x0030 
char _0x0031[0x0007];

};//Size=0x0038

class AlternateCameraViewData : public DataContainer
{
public:
char _0x0010[0x0070];

};//Size=0x0080

class AntAnimatableData
{
public:
char _0x0000[0x0070];

};//Size=0x0070

class AntAnimatableEntityData : public EntityData
{
public:
	Realm m_Realm; //0x0018 
	SubRealm m_SubRealm; //0x001C 
	AntAnimationHandlerData m_AnimationData; //0x0020 
	AnimationControlModeEnum m_InitialAnimationControlMode; //0x0118 
	JointOutputModeEnum m_JointOutputMode; //0x011C 
	Array<Int32*>* m_JointOutputPropertyIds; //0x0120 
	unsigned char m_AutoActivate; //0x0128 
	unsigned char m_InitialForceDisableCulling; //0x0129 
	unsigned char m_DisableAutoDistanceCulling; //0x012A 
	unsigned char m_Interpolation; //0x012B 
char _0x012C[0x0004];

};//Size=0x0130

class MeshLodGroup : public Asset
{
public:
	float m_Lod1Distance; //0x0018 
	float m_Lod2Distance; //0x001C 
	float m_Lod3Distance; //0x0020 
	float m_Lod4Distance; //0x0024 
	float m_Lod5Distance; //0x0028 
	float m_Lod6Distance; //0x002C 
	float m_ShadowDistance; //0x0030 
	float m_CullScreenArea; //0x0034 
	char* m_RuntimeShortName; //0x0038 

};//Size=0x0040

class AntEnumeration : public DataContainer
{
public:
	AntRef m_AntAsset; //0x0010 
	__int32 m_Value; //0x0024 

};//Size=0x0028

class Minimap2DEntityData : public EntityData
{
public:
	char* m_Tag; //0x0018 
	DWORD m_Layer; //0x0020 
	DWORD m_OutputSize; //0x0024 
	DWORD m_MaxActiveTiles; //0x0028 
	char _0x002C[0x0004];
	Minimap2DTextureAsset* m_Minimap2DTextureAsset; //0x0030 
	unsigned char m_Visible; //0x0038 
char _0x0039[0x0007];

};//Size=0x0040

class Minimap2DTextureAsset : public Asset
{
public:
	Array<Minimap2DTile*>* m_Tiles; //0x0018 
	Guid m_ImageDataURLChunk; //0x0020 
	DWORD m_ImageDataURLChunkSize; //0x0030 
	__int32 m_RootTileIndex; //0x0034 
	DWORD m_OutputSize; //0x0038 
	DWORD m_TextureTileSize; //0x003C 
	DWORD m_LowestTileResolution; //0x0040 
	DWORD m_SkipMips; //0x0044 
	DWORD m_LowDetailSkipMips; //0x0048 
	unsigned char m_UseMipMappedStaticTile; //0x004C 
	unsigned char m_HasDetailVolumes; //0x004D 
char _0x004E[0x0002];

};//Size=0x0050

class MissileEntityData : public GhostedProjectileEntityData
{
public:
	EffectBlueprint* m_EngineEffect; //0x0140 
	ExplosionEntityData* m_DudExplosion; //0x0148 
	SoundAsset* m_FlyBySound; //0x0150 
	float m_EngineStrength; //0x0158 
	float m_MaxSpeed; //0x015C 
	float m_EngineTimeToIgnition; //0x0160 
	float m_EngineTimeToLive; //0x0164 
	float m_TimeToActivateGuidingSystem; //0x0168 
	float m_TimeToArm; //0x016C 
	float m_MaxTurnAngle; //0x0170 
	float m_MinTurnAngle; //0x0174 
	float m_TurnAngleMultiplier; //0x0178 
	float m_Drag; //0x017C 
	float m_Gravity; //0x0180 
	float m_FlyBySoundRadius; //0x0184 
	float m_FlyBySoundSpeed; //0x0188 
	float m_ImpactImpulse; //0x018C 
	float m_Damage; //0x0190 
	TeamId m_DefaultTeam; //0x0194 
	WarnTarget m_WarnTarget; //0x0198 
	char _0x019C[0x0004];
	LockingControllerData* m_LockingController; //0x01A0 
	MissileLockableInfoData m_LockableInfo; //0x01A8 
	MissileUnguidedData m_UnguidedData; //0x01B0 
	NearTargetDetonationData m_NearTargetDetonation; //0x01C4 
	float m_MaxBankAngle; //0x01D4 
	float m_BankingSpeed; //0x01D8 
	char _0x01DC[0x0004];
	char* m_Icon; //0x01E0 
	char* m_TargetIcon; //0x01E8 
	char* m_TargetIconEnemy; //0x01F0 
	float m_MinGhostFrequency; //0x01F8 
	float m_DepthUnderWater; //0x01FC 
	float m_MaxSpeedInWater; //0x0200 
	unsigned char m_ApplyGravityWhenUnguided; //0x0204 
	unsigned char m_WarnOnPointingMissile; //0x0205 
	unsigned char m_EnableBanking; //0x0206 
	unsigned char m_StartEffectsOnSpawn; //0x0207 
	unsigned char m_OnlyIgniteEngineUnderWater; //0x0208 
	unsigned char m_OnlyArmWhenUnderWater; //0x0209 
	unsigned char m_RegulateDepthUnderWater; //0x020A 
char _0x020B[0x0005];

};//Size=0x0210

class AntProjectAsset : public Asset
{
public:
	char* m_AntNativeProjectName; //0x0018 
	AntRef m_SceneOp; //0x0020 
	__int32 m_ProjectId; //0x0034 

};//Size=0x0038

class ModuleInfo
{
public:
	char* m_Name; //0x0000 
	ModuleInfo* m_Next; //0x0008 

};//Size=0x0010

class MotionDampingData : public DataContainer
{
public:
	float m_Pitch; //0x0010 
	float m_Yaw; //0x0014 
	char _0x0018[0x0008];
	D3DXVECTOR3 m_LinearModifier; //0x0020 
	char _0x002C[0x0004];
	float m_Roll; //0x0030 
	float m_Linear; //0x0034 
char _0x0038[0x0008];

};//Size=0x0040

class MotorbikeData : public DataContainer
{
public:
	float m_MaxLeaningRoll; //0x0010 
	float m_CounterLeanForce; //0x0014 
	char _0x0018[0x0008];
	D3DXVECTOR3 m_DampBigJumpImpactCounterForce; //0x0020 
	char _0x002C[0x0004];
	D3DXVECTOR3 m_WheelieForce; //0x0030 
	char _0x003C[0x0004];
	D3DXVECTOR3 m_WheelieForceBodyOffset; //0x0040 
	char _0x004C[0x0004];
	float m_StandStillLeanForce; //0x0050 
	float m_LeanForce; //0x0054 
	float m_JumpForwardLeanMinAngle; //0x0058 
	float m_JumpForwardLeanMomentum; //0x005C 
	float m_JumpForwardLeanMinNoContactTime; //0x0060 
	float m_LeanForceMaxVel; //0x0064 
	float m_KickstandRoll; //0x0068 
	float m_KickstandLinearDamping; //0x006C 
	float m_StandStillRoll; //0x0070 
	float m_DampBigJumpImpactVelocity; //0x0074 
	float m_DampBigJumpMaxSpringForceFraction; //0x0078 
	float m_DampBigJumpImpactVerticalVelocity; //0x007C 
	float m_YawBrakeDampingLerpStartScale; //0x0080 
	float m_YawBrakeDampingLerpEndScale; //0x0084 
	float m_StoppieActivationVelocity; //0x0088 
	float m_StoppieStartVelocity; //0x008C 
	float m_StoppieStopVelocity; //0x0090 
	float m_StoppieMomentum; //0x0094 
	float m_ShortOffgroundGravityMultiplier; //0x0098 
	float m_ShortOffgroundPeriod; //0x009C 
	float m_WheelieSwitchOffNoContactTime; //0x00A0 
	float m_WheelieMaxNoDownForceContactTime; //0x00A4 
	float m_WheelieMaxNoContactTime; //0x00A8 
	float m_WheelieSteeringFactor; //0x00AC 
	float m_WheelieInertia; //0x00B0 
	float m_WheelieStartVelocity; //0x00B4 
	float m_WheelieMaxVelocityUndamped; //0x00B8 
	float m_WheelieMaxVelocityDampRange; //0x00BC 
	float m_WheelieOutAngularMomentum; //0x00C0 
	float m_WheelieSpringDamping; //0x00C4 
	float m_WheelieSpringKScale; //0x00C8 
	float m_WheelieAngularDamping; //0x00CC 
	float m_WheelieAngularDampingSpeed; //0x00D0 
	float m_WheelieMaxAngle; //0x00D4 
	float m_WheelieMaxVelocity; //0x00D8 
	float m_WheelieVelocityForceScale; //0x00DC 
	float m_WheelieAngularStartMomentum; //0x00E0 
	unsigned char m_DampBigJumpImpact; //0x00E4 
char _0x00E5[0x000B];

};//Size=0x00F0

class MouseImpl : public IMouse
{
public:
};//Size=0x0008

class AntiRollBar : public DataContainer
{
public:
	float m_Stiffness; //0x0010 
	float m_TorqueActivationLimit; //0x0014 

};//Size=0x0018

class N0A05926F
{
public:
char _0x0000[0x0040];

};//Size=0x0040

class N0A05CDE6
{
public:
char _0x0000[0x0040];

};//Size=0x0040

class N0A06EE1B
{
public:
char _0x0000[0x0040];

};//Size=0x0040

class N0A09A266
{
public:
char _0x0000[0x0440];

};//Size=0x0440

class N0A0DBBFC
{
public:
char _0x0000[0x0040];

};//Size=0x0040

class N0A0DD79C
{
public:
char _0x0000[0x0080];

};//Size=0x0080

class N0A0E3EF5
{
public:
char _0x0000[0x0440];

};//Size=0x0440

class N0A0EDA88
{
public:
char _0x0000[0x00C0];

};//Size=0x00C0

class N0A116F71
{
public:
char _0x0000[0x0040];

};//Size=0x0040

class N0A118D54
{
public:
char _0x0000[0x0040];

};//Size=0x0040

class N0A11DD07
{
public:
char _0x0000[0x0440];

};//Size=0x0440

class N0A136457
{
public:
char _0x0000[0x00C0];

};//Size=0x00C0

class N0A146F66
{
public:
char _0x0000[0x0040];

};//Size=0x0040

class N0A148F3D
{
public:
char _0x0000[0x0440];

};//Size=0x0440

class N0A14C86C
{
public:
char _0x0000[0x0840];

};//Size=0x0840

class N0A151E00
{
public:
char _0x0000[0x0C40];

};//Size=0x0C40

class N0A16C972
{
public:
char _0x0000[0x0440];

};//Size=0x0440

class N0A1875D7
{
public:
char _0x0000[0x0040];

};//Size=0x0040

class N0A199B95
{
public:
char _0x0000[0x0040];

};//Size=0x0040

class N0A1B05CF
{
public:
	char _0x0000[0x0058];
	Camera* m_Camera; //0x0058 
	char _0x0060[0x0028];
	Camera* m_Camera; //0x0088 
char _0x0090[0x03B0];

};//Size=0x0440

class N0A1D6A6D
{
public:
	char _0x0000[0x0058];
	float N0A1DE661; //0x0058 
	float N0A1DEC4F; //0x005C 
	char _0x0060[0x0028];
	Camera* m_Camera; //0x0088 
char _0x0090[0x03B0];

};//Size=0x0440

class N0A1ED932
{
public:
char _0x0000[0x0040];

};//Size=0x0040

class N0A1FA9BC
{
public:
char _0x0000[0x0440];

};//Size=0x0440

class N0A202738
{
public:
char _0x0000[0x0040];

};//Size=0x0040

class N0A2044DD
{
public:
char _0x0000[0x0040];

};//Size=0x0040

class N0A207AFC
{
public:
char _0x0000[0x0440];

};//Size=0x0440

class N0A220042
{
public:
char _0x0000[0x0C40];

};//Size=0x0C40

class N0A22CE16
{
public:
char _0x0000[0x0C40];

};//Size=0x0C40

class N0A23B761
{
public:
char _0x0000[0x0840];

};//Size=0x0840

class N0A33CCBA
{
public:
	char _0x0000[0x00E0];
	ServerSettings* m_ServerSettings; //0x00E0 
char _0x00E8[0x0358];

};//Size=0x0440

class N0CDF59FF
{
public:
char _0x0000[0x0040];

};//Size=0x0040

class N0CE44716
{
public:
char _0x0000[0x0440];

};//Size=0x0440

class N0CE90205
{
public:
char _0x0000[0x0040];

};//Size=0x0040

class N0CE99D66
{
public:
char _0x0000[0x0040];

};//Size=0x0040

class N0CF5EFBC
{
public:
char _0x0000[0x0440];

};//Size=0x0440

class N0CF7D064
{
public:
char _0x0000[0x0040];

};//Size=0x0040

class N0D08180B
{
public:
char _0x0000[0x0440];

};//Size=0x0440

class N0D09A9D5
{
public:
char _0x0000[0x0440];

};//Size=0x0440

class N0D0A037C
{
public:
char _0x0000[0x0440];

};//Size=0x0440

class N0D0BDADA
{
public:
	char _0x0000[0x0058];
	float N0D0CBCAB; //0x0058 
	float N0D0CC76B; //0x005C 
char _0x0060[0x03E0];

};//Size=0x0440

class N0D0E2103
{
public:
char _0x0000[0x0440];

};//Size=0x0440

class N0D0F3284
{
public:
char _0x0000[0x0440];

};//Size=0x0440

class N0D104D5F
{
public:
char _0x0000[0x0440];

};//Size=0x0440

class N0D110CA0
{
public:
char _0x0000[0x0440];

};//Size=0x0440

class N0D113AE2
{
public:
char _0x0000[0x0440];

};//Size=0x0440

class N0D11967E
{
public:
char _0x0000[0x0440];

};//Size=0x0440

class N0D177319
{
public:
char _0x0000[0x0440];

};//Size=0x0440

class ArrayTypeInfo : public TypeInfo
{
public:
};//Size=0x0018

class ArrayTypeInfoData : public TypeInfoData
{
public:
	char _0x0018[0x0008];
	TypeInfo* m_ElementType; //0x0020 

};//Size=0x0028

class ObjectVariation : public Asset
{
public:
	DWORD m_NameHash; //0x0018 
char _0x001C[0x0004];

};//Size=0x0020

class AudioLanguage : public DataContainer
{
public:
	char* m_Name; //0x0010 
	LanguageFormat m_LanguageMapping; //0x0018 
char _0x001C[0x0004];

};//Size=0x0020

class Pad
{
public:
	virtual void Function0(); //
	virtual void Function1(); //
	virtual void Function2(); //
	virtual int PreFrame(float); //

};//Size=0x0008

class PadInputActionData : public AxesInputActionData
{
public:
	InputDevicePadButtons m_Button; //0x0020 
	InputDevicePadButtons m_PS3AlternativeButton; //0x0024 
	InputDevicePadButtons m_PSVitaButton; //0x0028 
	InputDevicePadButtons m_PSVitaAlternativeButton; //0x002C 
	InputDevicePOVs m_Pov; //0x0030 
	unsigned char m_UseSquareInput; //0x0034 
char _0x0035[0x0003];

};//Size=0x0038

class AuthoritativeAimInputEntityData : public AimInputEntityData
{
public:
	float m_Yaw; //0x0018 
	float m_Pitch; //0x001C 
	unsigned char m_UseCorrectSetup; //0x0020 
char _0x0021[0x0007];

};//Size=0x0028

class AutoAssetCollector : public DataContainer
{
public:
	Array<Asset*>* m_Assets; //0x0010 
	float m_AutoCollectMinimumUsagePercentage; //0x0018 
char _0x001C[0x0004];

};//Size=0x0020

class PathfindingBlobAsset : public Asset
{
public:
	Array<PathfindingBlob*>* m_Blobs; //0x0018 

};//Size=0x0020

class PersistentAmmoData : public GameDataContainer
{
public:
	__int32 m_MagazinesOnRespawn; //0x0010 
char _0x0014[0x0004];

};//Size=0x0018

class BFClientSettings : public SystemSettings
{
public:
	TeamId m_JoinAsTeamId; //0x0020 
	char _0x0024[0x0004];
	char* m_PlayerName; //0x0028 
	unsigned char m_JoinAsCommander; //0x0030 
	unsigned char m_ProgressionDebug; //0x0031 
char _0x0032[0x0006];

};//Size=0x0038

class BFClientSoldierHealthComponent : public ClientSoldierHealthComponent
{
public:
char _0x00E8[0x0668];

};//Size=0x0750

class BFClientSoldierPhysicsComponent : public ClientSoldierPhysicsComponent
{
public:
char _0x02A8[0x0100];

};//Size=0x03A8

class BFServerSettings : public SystemSettings
{
public:
	__int32 m_DisableTeamSwitchRoundProgressThreshold; //0x0020 
	char _0x0024[0x0004];
	char* m_ForceTeamForPlayerTag; //0x0028 
	__int32 m_ForceTeamForPlayerTagTeam; //0x0030 
	char _0x0034[0x0004];
	char* m_ForceSquadForPlayerTag; //0x0038 
	__int32 m_ForceSquadForPlayerTagSquad; //0x0040 
	char _0x0044[0x0004];
	char* m_ForceTeamAndSquadForPlayers; //0x0048 
	char* m_ForceNametagForPlayers; //0x0050 
	float m_NoInteractivityTimeoutTime; //0x0058 
	float m_NoInteractivityThresholdLimit; //0x005C 
	DWORD m_NoInteractivityBanRoundCount; //0x0060 
	DWORD m_TeamKillCountForKick; //0x0064 
	float m_TeamKillValueForKick; //0x0068 
	float m_TeamKillValueIncrease; //0x006C 
	float m_TeamKillValueDecreasePerSecond; //0x0070 
	DWORD m_TeamKillKickForBan; //0x0074 
	__int32 m_RoundMaxPlayerCount; //0x0078 
	__int32 m_RoundMinPlayerCount; //0x007C 
	__int32 m_RoundLockdownCountdown; //0x0080 
	__int32 m_RoundRestartCountdown; //0x0084 
	__int32 m_RoundWarmupTimeout; //0x0088 
	char _0x008C[0x0004];
	char* m_BannerUrl; //0x0090 
	char* m_ServerPreset; //0x0098 
	char* m_ServerType; //0x00A0 
	char* m_ServerExperience; //0x00A8 
	char* m_ServerDescription; //0x00B0 
	char* m_ServerMessage; //0x00B8 
	char* m_ServerAdministrationSettings; //0x00C0 
	char* m_ServerAdministrationMapRotation; //0x00C8 
	char* m_ServerAdministrationMapRotationInformation; //0x00D0 
	char* m_Spectators; //0x00D8 
	DWORD m_TeamSwitchImbalanceLimit; //0x00E0 
	DWORD m_GameSize; //0x00E4 
	char* m_GameMod; //0x00E8 
	VoiceChannel m_DefaultVoiceChannel; //0x00F0 
	__int32 m_DeathmatchFriendZoneFallbackCount; //0x00F4 
	__int32 m_ServerConfigurationRefreshInterval; //0x00F8 
	char _0x00FC[0x0004];
	char* m_OverrideServerConfigurationStartTime; //0x0100 
	float m_AlternateEORTimeout; //0x0108 
	__int32 m_MaxNumSoldierCorpses; //0x010C 
	__int32 m_CommanderRankThreshold; //0x0110 
	__int32 m_LowRankLimit; //0x0114 
	float m_TicketBleedRateModifier; //0x0118 
	float m_BackendConnectDelay; //0x011C 
	char* m_PlaytestMateUrl; //0x0120 
	char* m_PlaytestMateId; //0x0128 
	float m_TicketCountScale; //0x0130 
	__int32 m_ModeObjectiveShuffle; //0x0134 
	__int32 m_EventWelcomeTimer; //0x0138 
	float m_PasswordVerificationWindow; //0x013C 
	unsigned char m_AutoBalance; //0x0140 
	unsigned char m_OverrideAutoBalance; //0x0141 
	unsigned char m_UseSkillBasedBalancing; //0x0142 
	unsigned char m_DisableBattlePickups; //0x0143 
	unsigned char m_UseGameModeSpecificSkillForBalancing; //0x0144 
	unsigned char m_IsManDownRotationEnabled; //0x0145 
	unsigned char m_EnableKillCam; //0x0146 
	unsigned char m_EnableAlwaysFog; //0x0147 
	unsigned char m_MapSequencerEnabled; //0x0148 
	unsigned char m_EliteKitEnabled; //0x0149 
	unsigned char m_KickAPlayerOnVIPJoin; //0x014A 
	unsigned char m_AlwaysAllowedToSpectate; //0x014B 
char _0x014C[0x0004];

};//Size=0x0150

class BFUIDynamicWidgetGroupAsset : public Asset
{
public:
};//Size=0x0018

class BFUIDynamicWidgetReferenceEntityData : public WidgetReferenceEntityData
{
public:
	BFUIDynamicWidgetGroupAsset* m_GroupAsset; //0x00A0 
	unsigned char m_CenterWidgetOnScreen; //0x00A8 
	unsigned char m_Enabled; //0x00A9 
char _0x00AA[0x0006];

};//Size=0x00B0

class PhysicsEntityData : public EntityData
{
public:
	HavokAsset* m_Asset; //0x0018 
	D3DXVECTOR3 m_InertiaModifier; //0x0020 
	char _0x002C[0x0004];
	Array<RigidBodyData*>* m_RigidBodies; //0x0030 
	FloatPhysicsData* m_FloatPhysics; //0x0038 
	float m_Mass; //0x0040 
	float m_AngularVelocityDamping; //0x0044 
	float m_LinearVelocityDamping; //0x0048 
	char _0x004C[0x0004];
	ProximityData* m_Proximity; //0x0050 
	Array<PhysicsConstraintData*>* m_Constraints; //0x0058 
	unsigned char m_MovableParts; //0x0060 
	unsigned char m_IsComposite; //0x0061 
char _0x0062[0x000E];

};//Size=0x0070

class PhysicsManager : public IglooSubsystem
{
public:
	char _0x0018[0x0070];
	IPhysicsRayCaster* m_RayCaster; //0x0088 

};//Size=0x0090

class PhysicsSettings : public DataContainer
{
public:
	DWORD m_ClientClothWorldThreadCount; //0x0010 
	float m_WindManagerAwakeningRadius; //0x0014 
	DWORD m_BlockStreamAllocatorMemory; //0x0018 
	DWORD m_StepLocalStreamAllocator; //0x001C 
	DWORD m_BodyBufferCapacity; //0x0020 
	DWORD m_MotionBufferCapacity; //0x0024 
	DWORD m_ConstraintBufferCapacity; //0x0028 
	float m_SDFThickness; //0x002C 
	unsigned char m_Enable; //0x0030 
	unsigned char m_EnableClothInterpolationJobs; //0x0031 
	unsigned char m_EnableClothUpdateJob; //0x0032 
	unsigned char m_ClothVelocityVectorEnable; //0x0033 
	unsigned char m_ClothDrawUpdateParallelEnable; //0x0034 
	unsigned char m_RunClientSimulationSingleThreaded; //0x0035 
	unsigned char m_RunEffectSimulationSingleThreaded; //0x0036 
	unsigned char m_RunServerSimulationSingleThreaded; //0x0037 
	unsigned char m_EnableAIRigidBody; //0x0038 
	unsigned char m_ForestEnable; //0x0039 
	unsigned char m_EnableJobs; //0x003A 
	unsigned char m_RemoveRagdollWhenWoken; //0x003B 
	unsigned char m_RemoveFromWorldOnCollisionOverflow; //0x003C 
	unsigned char m_SingleStepCharacter; //0x003D 
	unsigned char m_ForceSingleStepCharacterInSP; //0x003E 
	unsigned char m_EnableFollowWheelRaycasts; //0x003F 
	unsigned char m_EnableClientWheelRaycasts; //0x0040 
	unsigned char m_UpdateVehicleTerrainLevel; //0x0041 
	unsigned char m_EnableASyncWheelRaycasts; //0x0042 
	unsigned char m_UseDelayedWakeUpClient; //0x0043 
	unsigned char m_UseDelayedWakeUpServer; //0x0044 
	unsigned char m_SuppressDebrisSpawnUntilReady; //0x0045 
	unsigned char m_EnablePlayerVSAICollisions; //0x0046 
	unsigned char m_EnableClientKeyframedCollisions; //0x0047 
	unsigned char m_EnableFXKeyframedCollisions; //0x0048 
	unsigned char m_EnableRemoveFromWorldKeepActive; //0x0049 
	unsigned char m_UseDynamicBlockStreamAllocator; //0x004A 
char _0x004B[0x0005];

};//Size=0x0050

class BFUIStaticBundlesAsset : public Asset
{
public:
	char* m_ResourceBundlePath; //0x0018 

};//Size=0x0020

class PlayerData : public Asset
{
public:
	PlayerViewData* m_PlayerView; //0x0018 
	EntryInputActionMapsData* m_InputConceptDefinition; //0x0020 
	InputActionMappingsData* m_InputMapping; //0x0028 

};//Size=0x0030

class BFUISystem : public UISystem
{
public:
	char _0x0A60[0x0288];
	__int32 m_ScreenWidth; //0x0CE8 
	__int32 m_ScreenHeight; //0x0CEC 
	char _0x0CF0[0x0090];
	D3DXVECTOR3 m_CameraPosition; //0x0D80 
	char _0x0D8C[0x0004];
	ClientControllableEntity* m_AimedEntity; //0x0D90 
char _0x0D98[0x0268];

};//Size=0x1000

class PlayerFilterEntityData : public EntityData
{
public:
	unsigned char m_InvertFilter; //0x001C 
	unsigned char m_ForwardToSpectators; //0x001D 
char _0x001E[0x0002];

};//Size=0x0020

class PlayerHolder
{
public:
	ClientPlayer* m_Players[0x0014]; //0x0000 

};//Size=0x00A0

class PlayerViewData : public DataContainer
{
public:
char _0x0010[0x0008];

};//Size=0x0018

class BfCompassHudData : public HudData
{
public:
	unsigned char m_UseRenderTarget; //0x0010 
char _0x0011[0x0007];

};//Size=0x0018

class PreferredRange : public DataContainer
{
public:
	float m_Start; //0x0010 
	float m_Ideal; //0x0014 
	float m_End; //0x0018 
char _0x001C[0x0004];

};//Size=0x0020

class ProceduralAnimationTypeSimple : public DataContainer
{
public:
	float m_BendMultiplier; //0x0010 
	float m_WiggleSpeedMultiplier; //0x0014 
	float m_WindInfluenceMultiplier; //0x0018 
char _0x001C[0x0004];

};//Size=0x0020

class BfCrosshairHudData : public HudData
{
public:
	float m_CrosshairAngleMin; //0x0010 
	float m_CrosshairAngleMax; //0x0014 
	float m_CrosshairScale; //0x0018 
	char _0x001C[0x0004];
	CrosshairTypeAsset* m_CrosshairType; //0x0020 

};//Size=0x0028

class ProfileOptionDataBool : public ProfileOptionData
{
public:
	unsigned char m_Value; //0x0028 
char _0x0029[0x0007];

};//Size=0x0030

class ProfileOptionDataFloat : public ProfileOptionData
{
public:
	float m_Min; //0x0028 
	float m_Max; //0x002C 
	float m_Value; //0x0030 
	float m_Step; //0x0034 

};//Size=0x0038

class ProfileOptionsAsset : public Asset
{
public:
	char* m_FileName; //0x0018 
	char* m_ContentName; //0x0020 
	DWORD m_FileSize; //0x0028 
	char _0x002C[0x0004];
	Array<ProfileOptionData*>* m_Options; //0x0030 
	Array<ProfileOptionData*>* m_OptionsPs3; //0x0038 
	Array<ProfileOptionData*>* m_OptionsXenon; //0x0040 
	Array<ProfileOptionData*>* m_OptionsGen4a; //0x0048 
	Array<ProfileOptionData*>* m_OptionsGen4b; //0x0050 
	Array<ProfileOptionData*>* m_OptionsWin; //0x0058 
	unsigned char m_AutoSaveOnQuit; //0x0060 
char _0x0061[0x0007];

};//Size=0x0068

class Projectile : public ObjectBlueprint
{
public:
	TimeDeltaType m_TimeDeltaType; //0x0048 
char _0x004C[0x0004];

};//Size=0x0050

class ProjectileBlueprint : public ObjectBlueprint
{
public:
	TimeDeltaType m_TimeDeltaType; //0x0048 
char _0x004C[0x0004];

};//Size=0x0050

class BfVehicleHudData : public HudData
{
public:
	float m_SeaLevelAltFreq; //0x0010 
	char _0x0014[0x0004];
	UIPartPropertyList* m_HudPropertyList; //0x0018 
	unsigned char m_UseWeaponOrientations; //0x0020 
	unsigned char m_UseVelocityVectorMarker; //0x0021 
	unsigned char m_UseThrust; //0x0022 
	unsigned char m_UseGForce; //0x0023 
	unsigned char m_UseSkidSlip; //0x0024 
	unsigned char m_UseClimbRate; //0x0025 
char _0x0026[0x0002];

};//Size=0x0028

class PropertyToInputEntityData : public EntityData
{
public:
	Array<Property*>* m_Properties; //0x0018 
	unsigned char m_InterpolationEnable; //0x0020 
char _0x0021[0x0007];

};//Size=0x0028

class ProximityData : public DataContainer
{
public:
char _0x0014[0x0004];

};//Size=0x0018

class ProximityTrackerData : public DataContainer
{
public:
	DWORD m_CollisionLayer; //0x0010 
	char _0x0014[0x000C];
	D3DXVECTOR3 m_HalfExtents; //0x0020 
char _0x002C[0x0004];

};//Size=0x0030

class RBX
{
public:
	char _0x0000[0x00D5];
	unsigned char N005C5289; //0x00D5 
char _0x00D6[0x036A];

};//Size=0x0440

class RDI
{
public:
	char _0x0000[0x000C];
	float N0077DD63; //0x000C 
	float N0077E8CA; //0x0010 
	char _0x0014[0x00BC];
	ClientDiceShooterVehicleEntryComponent* m_ClientDiceShooterVehicleEntryComponent; //0x00D0 
	char _0x00D8[0x0200];
	AuthoritativeAimInputEntityData* m_AuthoritativeAimInputEntityData; //0x02D8 
	char _0x02E0[0x0128];
	AimTransformBuilderEntityData* m_AimTransformBuilderEntityData; //0x0408 
char _0x0410[0x0430];

};//Size=0x0840

class BfWeaponHudData : public HudData
{
public:
	LockingTypeAsset* m_LockingType; //0x0010 
	char* m_WeaponClass; //0x0018 
	float m_LowAmmoWarning; //0x0020 
	float m_CameraShakeModifier; //0x0024 
	char* m_HudIcon; //0x0028 

};//Size=0x0030

class BoolEntityData : public EntityData
{
public:
	unsigned char m_DefaultValue; //0x001C 
char _0x001D[0x0003];

};//Size=0x0020

class BorderInputNode : public InputNode
{
public:
	InputCache* m_InputCache; //0x0008 
	unsigned char m_ForceReadCache; //0x0010 
	char _0x0011[0x003F];
	Pad* m_Pad; //0x0050 
	char _0x0058[0x0010];
	KeyboardImpl* m_Keyboard; //0x0068 
	MouseImpl* m_Mouse; //0x0070 

};//Size=0x0078

class RegulatedSteering : public DataContainer
{
public:
char _0x0010[0x0020];

};//Size=0x0030

class RenderView
{
public:
	char _0x0000[0x02A0];
	D3DXMATRIX viewMatrix; //0x02A0 
	D3DXMATRIX viewMatrixTranspose; //0x02E0 
	D3DXMATRIX viewMatrixInverse; //0x0320 
	D3DXMATRIX projectionMatrix; //0x0360 
	D3DXMATRIX viewMatrixAtOrigin; //0x03A0 
	D3DXMATRIX projectionTranspose; //0x03E0 
	D3DXMATRIX projectionInverse; //0x0420 
	D3DXMATRIX viewProj; //0x0460 
	D3DXMATRIX viewProjTranspose; //0x04A0 
	D3DXMATRIX viewProjInverse; //0x04E0 

};//Size=0x0520

class BulletEntityData : public MeshProjectileEntityData
{
public:
	SoundAsset* m_FlyBySound; //0x0130 
	ExplosionEntityData* m_DudExplosion; //0x0138 
	float m_Gravity; //0x0140 
	float m_Drag; //0x0144 
	float m_ImpactImpulse; //0x0148 
	float m_DetonationTimeVariation; //0x014C 
	float m_VehicleDetonationRadius; //0x0150 
	float m_VehicleDetonationActivationDelay; //0x0154 
	float m_FlyBySoundRadius; //0x0158 
	float m_FlyBySoundSpeed; //0x015C 
	float m_Stamina; //0x0160 
	float m_DistributeDamageOverTime; //0x0164 
	float m_StartDamage; //0x0168 
	float m_EndDamage; //0x016C 
	float m_DamageFalloffStartDistance; //0x0170 
	float m_DamageFalloffEndDistance; //0x0174 
	FloatCurve* m_DamageCurve; //0x0178 
	float m_TimeToArmExplosion; //0x0180 
	float m_FirstFrameTravelDistance; //0x0184 
	__int32 m_StopTrailEffectOnUnspawnFrameDelay; //0x0188 
	unsigned char m_VehicleDetonationUsesFriendlyFireRules; //0x018C 
	unsigned char m_HasVehicleDetonation; //0x018D 
	unsigned char m_InstantHit; //0x018E 
	unsigned char m_StopTrailEffectOnUnspawn; //0x018F 

};//Size=0x0190

class BurstIntervalPattern : public DataContainer
{
public:
	Array<BurstInterval*>* m_BurstInterval; //0x0010 

};//Size=0x0018

class RigidBody : public PhysicsBody
{
public:
char _0x0048[0x0050];

};//Size=0x0098

class RigidBodyData : public PhysicsBodyData
{
public:
	D3DXVECTOR3 m_CenterOfMass; //0x0030 
	char _0x003C[0x0004];
	D3DXVECTOR3 m_InertiaModifier; //0x0040 
	char _0x004C[0x0004];
	LinearTransform m_Transform; //0x0050 
	LinearTransform m_KeyframeTransform; //0x0090 
	RigidBodyType m_RigidBodyType; //0x00D0 
	float m_Mass; //0x00D4 
	MaterialDecl m_Material; //0x00D8 
	float m_DynamicFriction; //0x00DC 
	float m_StaticFriction; //0x00E0 
	float m_Restitution; //0x00E4 
	float m_AngularVelocityDamping; //0x00E8 
	float m_LinearVelocityDamping; //0x00EC 
	RigidBodyMotionType m_MotionType; //0x00F0 
	RigidBodyQualityType m_QualityType; //0x00F4 
	DWORD m_SystemGroup; //0x00F8 
	DWORD m_SubSystemId; //0x00FC 
	DWORD m_SubSystemIdNoCollide; //0x0100 
	char _0x0104[0x0004];
	Array<Uint32*>* m_PartIndices; //0x0108 
	FloatPhysicsData* m_FloatPhysics; //0x0110 
	unsigned char m_ComputeCenterOfMass; //0x0118 
	unsigned char m_IsRootController; //0x0119 
char _0x011A[0x0006];

};//Size=0x0120

class RigidMeshAsset : public MeshAsset
{
public:
};//Size=0x0080

class CameraComponentData : public GameComponentData
{
public:
	RegularCameraViewData m_RegularView; //0x0070 
	D3DXVECTOR3 m_CameraTransitionPos; //0x00B0 
	char _0x00BC[0x0004];
	LinearTransform m_OverrideTransform; //0x00C0 
	StaticCameraData* m_StaticCameraData; //0x0100 
	float m_FieldOfView; //0x0108 
	float m_ForceFieldOfView; //0x010C 
	float m_RegularViewFOVMultiplier; //0x0110 
	float m_AlternateViewFOVMultiplier; //0x0114 
	AlternateCameraViewData* m_AlternateView; //0x0118 
	float m_OverrideFreelookPitch; //0x0120 
	float m_OverrideFreelookYaw; //0x0124 
	CameraRelativeControlData* m_CameraRelativeControlConfig; //0x0128 
	float m_FreezeHeight; //0x0130 
	SoldierAnimatedCameraData m_SoldierAnimatedCamera; //0x0134 
	float m_CameraTransitionTime; //0x013C 
	DWORD m_MeshParentComponentNumber; //0x0140 
	char _0x0144[0x0004];
	StanceCameraData m_StanceData; //0x0148 
	CameraComponentSoundData* m_CameraSoundData; //0x0158 
	unsigned char m_EnableCameraMesh; //0x0160 
	unsigned char m_TransparentDepthTestEnable; //0x0161 
	unsigned char m_OverrideFreelookEnable; //0x0162 
	unsigned char m_AlternateViewEnabled; //0x0163 
	unsigned char m_IsFirstPerson; //0x0164 
	unsigned char m_ReceiveImpulsesAsThirdPerson; //0x0165 
	unsigned char m_UseCameraTransition; //0x0166 
	unsigned char m_UseOverrideTransform; //0x0167 
char _0x0168[0x0008];

};//Size=0x0170

class CameraComponentSoundData : public DataContainer
{
public:
	SoundAsset* m_SwitchToAlternateViewSound; //0x0010 
	SoundAsset* m_SwitchToNormalViewSound; //0x0018 

};//Size=0x0020

class CameraRecoilData : public DataContainer
{
public:
	float m_SpringConstant; //0x0010 
	float m_SpringDamping; //0x0014 
	float m_SpringMinThresholdAngle; //0x0018 
char _0x001C[0x0004];

};//Size=0x0020

class CameraRelativeControlData : public DataContainer
{
public:
char _0x0010[0x0060];

};//Size=0x0070

class ServerDiceShooterVehicleEntryComponent : public ServerVehicleEntryComponent
{
public:
char _0x0178[0x0040];

};//Size=0x01B8

class CharacterBlueprint : public ObjectBlueprint
{
public:
char _0x004C[0x0004];

};//Size=0x0050

class CharacterPhysicsBodyData : public PhysicsBodyData
{
public:
	CharacterPhysicsData* m_CharacterPhysics; //0x0030 

};//Size=0x0038

class CharacterPhysicsData : public Asset
{
public:
	Array<CharacterPoseData*>* m_Poses; //0x0018 
	Array<CharacterStateData*>* m_States; //0x0020 
	CharacterStateType m_DefaultState; //0x0028 
	char _0x002C[0x0004];
	CharacterSprintData* m_Sprint; //0x0030 
	MaterialDecl m_MaterialPair; //0x0038 
	__int32 m_PushableObjectWeight; //0x003C 
	float m_Mass; //0x0040 
	float m_MaxAscendAngle; //0x0044 
	float m_SlideAngle; //0x0048 
	float m_SlideSpeedCondition; //0x004C 
	float m_PhysicalRadius; //0x0050 
	float m_EnterSwimStateDepth; //0x0054 
	float m_ExitSwimStateDepth; //0x0058 
	float m_InputAcceleration; //0x005C 
	float m_LadderAcceptAngle; //0x0060 
	float m_LadderAcceptAnglePitch; //0x0064 
	float m_JumpPenaltyTime; //0x0068 
	float m_JumpPenaltyFactor; //0x006C 
	float m_RadiusToPredictCollisionOnCharacters; //0x0070 
	char _0x0074[0x0004];
	CharacterPhysicsBodyData* m_PhysicsBody; //0x0078 
	__int32 m_CheckSupportRaycastCountMoving; //0x0080 
	float m_CheckSupportLookaheadDistance; //0x0084 
	float m_RayStartHeightOnGround; //0x0088 
	float m_RayEndHeightOnGround; //0x008C 
	float m_RayStartHeightInAir; //0x0090 
	float m_RayEndHeightInAir; //0x0094 
	float m_SpeedForMovingRayCasts; //0x0098 
	unsigned char m_AllowSupportedSlideState; //0x009C 
	unsigned char m_AllowPoseChangeDuringTransition; //0x009D 
	unsigned char m_AutoPushAwayFromWallsInProne; //0x009E 
char _0x009F[0x0001];

};//Size=0x00A0

class ServerSettings : public SystemSettings
{
public:
	char* m_InstancePath; //0x0020 
	DWORD m_RemoteControlPort; //0x0028 
	DWORD m_MaxQueriesPerSecond; //0x002C 
	char* m_SavePoint; //0x0030 
	float m_TimeoutTime; //0x0038 
	DWORD m_PlayerCountNeededForMultiplayer; //0x003C 
	char* m_DebugMenuClick; //0x0040 
	float m_JuiceTimeThreshold; //0x0048 
	char _0x004C[0x0004];
	char* m_JuiceReportPerformanceCategory; //0x0050 
	CongestionControlSettings m_CongestionCtrl; //0x0058 
	float m_FrameHistoryTime; //0x0094 
	float m_FrameHistoryTimeSoldiers; //0x0098 
	float m_LoadingTimeout; //0x009C 
	float m_IngameTimeout; //0x00A0 
	float m_OutgoingFrequency; //0x00A4 
	float m_OutgoingHighFrequency; //0x00A8 
	float m_OutgoingHighFrequencyCap; //0x00AC 
	DWORD m_IncomingRate; //0x00B0 
	DWORD m_OutgoingRate; //0x00B4 
	DWORD m_MoveManagerMultiPlayerMoveDivider; //0x00B8 
	DWORD m_OutgoingHighFrequencyRate; //0x00BC 
	char* m_Playlist; //0x00C0 
	__int32 m_DedicatedServerCpu; //0x00C8 
	DWORD m_SaveGameVersion; //0x00CC 
	char* m_ServerName; //0x00D0 
	char* m_ServerPassword; //0x00D8 
	float m_VehicleRespawnTimeScale; //0x00E0 
	float m_SoldierRespawnTimeScale; //0x00E4 
	char* m_AdministrationPassword; //0x00E8 
	char* m_RemoteAdministrationPort; //0x00F0 
	float m_ServerFpsStallThreshold; //0x00F8 
	float m_WaitingForGhostsTimeout; //0x00FC 
	unsigned char m_QueryProviderEnabled; //0x0100 
	unsigned char m_DebrisClusterEnabled; //0x0101 
	unsigned char m_VegetationEnabled; //0x0102 
	unsigned char m_WaterPhysicsEnabled; //0x0103 
	unsigned char m_IsDesertingAllowed; //0x0104 
	unsigned char m_DestroyVehiclesOutsideCombatAreaOnDisable; //0x0105 
	unsigned char m_IsRenderDamageEvents; //0x0106 
	unsigned char m_RespawnOnDeathPosition; //0x0107 
	unsigned char m_IsStatsEnabled; //0x0108 
	unsigned char m_IsNetworkStatsEnabled; //0x0109 
	unsigned char m_IsAiEnabled; //0x010A 
	unsigned char m_IsDestructionEnabled; //0x010B 
	unsigned char m_IsSoldierAnimationEnabled; //0x010C 
	unsigned char m_IsSoldierDetailedCollisionEnabled; //0x010D 
	unsigned char m_LoadSavePoint; //0x010E 
	unsigned char m_DisableCutscenes; //0x010F 
	unsigned char m_HavokVisualDebugger; //0x0110 
	unsigned char m_HavokCaptureToFile; //0x0111 
	unsigned char m_ShowTriggerDebugText; //0x0112 
	unsigned char m_TimeoutGame; //0x0113 
	unsigned char m_AILooksIntoCamera; //0x0114 
	unsigned char m_DeathmatchDebugInfo; //0x0115 
	unsigned char m_VehicleInteractionIgnoresSeeThrough; //0x0116 
	unsigned char m_JuiceReportPerformanceEnabled; //0x0117 
	unsigned char m_JuiceReportMemoryEnabled; //0x0118 
	unsigned char m_JobEnable; //0x0119 
	unsigned char m_ThreadingEnable; //0x011A 
	unsigned char m_DrawActivePhysicsObjects; //0x011B 
	unsigned char m_IsRanked; //0x011C 
	unsigned char m_UnlockResolver; //0x011D 
	unsigned char m_ScoringLogEnabled; //0x011E 
	unsigned char m_ServerStallSmoothingEnabled; //0x011F 
	unsigned char m_ForcePlaylist; //0x0120 
	unsigned char m_AutoUnspawnBangers; //0x0121 
	unsigned char m_RegulatedAIThrottle; //0x0122 
	unsigned char m_EnableAnimationCulling; //0x0123 
	unsigned char m_FallBackToSquadSpawn; //0x0124 
	unsigned char m_SaveGameUseProfileSaves; //0x0125 
	unsigned char m_VehicleSpawnAllowed; //0x0126 
	unsigned char m_AdministrationEnabled; //0x0127 
	unsigned char m_AdministrationLogEnabled; //0x0128 
	unsigned char m_AdministrationTimeStampLogNames; //0x0129 
	unsigned char m_AdministrationEventsEnabled; //0x012A 
	unsigned char m_AdministrationServerNameRestricted; //0x012B 
	unsigned char m_ExtendedJuiceLoggingEnabled; //0x012C 
	unsigned char m_HostMigrationOnMaintenanceEnabled; //0x012D 
char _0x012E[0x0002];

};//Size=0x0130

class CharacterSoundData : public DataContainer
{
public:
	SoundAsset* m_Movement; //0x0010 

};//Size=0x0018

class CharacterSprintData : public DataContainer
{
public:
	float m_SprintPowerDecreasePerSecond; //0x0010 
	float m_SprintPowerIncreasePerSecond; //0x0014 
	float m_SprintMinimumPower; //0x0018 
	unsigned char m_AllowContinousSprinting; //0x001C 
char _0x001D[0x0003];

};//Size=0x0020

class ServerVehicleSpawnEntity : public ServerSpawnEntity
{
public:
char _0x02B0[0x00B0];

};//Size=0x0360

class ServerWeapon : public Weapon
{
public:
char _0x01B0[0x0190];

};//Size=0x0340

class ServerWeaponComponent : public ServerBoneComponent
{
public:
	char _0x0030[0x0080];
	char _0x00B8[0x0020];
	ServerDiceShooterVehicleEntryComponent* m_ServerDiceShooterVehicleEntryComponent; //0x00D8 
char _0x00E0[0x0150];

};//Size=0x0230

class ShooterComponentHolder
{
public:
	ClientPlayerEntryComponent* m_ShooterComponents[0x000F]; //0x0000 

};//Size=0x0078

class ChassisComponentData : public PartComponentData
{
public:
	VehicleConfigData* m_VehicleConfigData; //0x0090 
	GearboxConfigData* m_GearboxConfig; //0x0098 
	CameraRelativeControlData* m_CameraRelativeControlConfig; //0x00A0 
	Array<VehicleWaterEffectData*>* m_WaterEffects; //0x00A8 
	Array<VehicleWaterEffectData*>* m_WaterStreakEffects; //0x00B0 
	float m_TriggerGroundEffectImpulse; //0x00B8 
	float m_TriggerGroundEffectHeight; //0x00BC 
	float m_GroundEffectFadeParam; //0x00C0 
	char _0x00C4[0x0004];
	LandingGearLogicData* m_LandingGearLogic; //0x00C8 
	Array<OnImpulseModifierData*>* m_OnImpulseModifiers; //0x00D0 
	float m_GlobalOnImpulseModifier; //0x00D8 
	unsigned char m_AlwaysFullThrottle; //0x00DC 
	unsigned char m_GroundEffectOnTerrainOnly; //0x00DD 
	unsigned char m_UseAheadOfTime; //0x00DE 
	unsigned char m_AllowNegativeThrottle; //0x00DF 

};//Size=0x00E0

class SkeletonAsset : public BaseSkeletonAsset
{
public:
	Array<CString*>* m_BoneNames; //0x0018 
	Array<Uint32*>* m_BoneNameHashes; //0x0020 
	Array<Int32*>* m_Hierarchy; //0x0028 
	Array<LinearTransform*>* m_LocalPose; //0x0030 
	Array<LinearTransform*>* m_ModelPose; //0x0038 
	Array<Int32*>* m_ServerSkeletonToSkeletonMap; //0x0040 
	Array<Int32*>* m_SkeletonToServerSkeletonMap; //0x0048 
	Array<Int32*>* m_ServerHierarchy; //0x0050 
	Array<Int32*>* m_GameplayBonesToSkeleton; //0x0058 
	Array<Int32*>* m_GameplayBonesToServerSkeleton; //0x0060 

};//Size=0x0068

class SkeletonCollisionData : public DataContainer
{
public:
	SkeletonAsset* m_SkeletonAsset; //0x0010 
	Array<BoneCollisionData*>* m_BoneCollisionData; //0x0018 

};//Size=0x0020

class SoldierAimAssistData : public GameDataContainer
{
public:
	Array<Float32*>* m_InputPolynomial; //0x0010 
	Array<Float32*>* m_ZoomedInputPolynomial; //0x0018 
	D3DXVECTOR3 m_StickyBoxScale; //0x0020 
	char _0x002C[0x0004];
	D3DXVECTOR3 m_StickyDistanceScale; //0x0030 
	char _0x003C[0x0004];
	D3DXVECTOR3 m_SnapBoxScale; //0x0040 
	char _0x004C[0x0004];
	D3DXVECTOR3 m_SnapDistanceScale; //0x0050 
	char _0x005C[0x0004];
	D3DXVECTOR3 m_EyePosOffset; //0x0060 
	char _0x006C[0x0004];
	float m_AccelerationInputThreshold; //0x0070 
	float m_AccelerationMultiplier; //0x0074 
	float m_AccelerationDamping; //0x0078 
	float m_AccelerationTimeThreshold; //0x007C 
	float m_SquaredAcceleration; //0x0080 
	D3DXVECTOR2 m_MaxAcceleration; //0x0084 
	float m_YawSpeedStrength; //0x008C 
	float m_PitchSpeedStrength; //0x0090 
	D3DXVECTOR2 m_AttractDistanceFallOffs; //0x0094 
	float m_AttractSoftZone; //0x009C 
	float m_AttractUserInputMultiplier; //0x00A0 
	float m_AttractUserInputMultiplier_NoZoom; //0x00A4 
	float m_AttractOwnSpeedInfluence; //0x00A8 
	float m_AttractTargetSpeedInfluence; //0x00AC 
	float m_AttractOwnRequiredMovementForMaximumAttract; //0x00B0 
	float m_AttractStartInputThreshold; //0x00B4 
	float m_AttractMoveInputCap; //0x00B8 
	float m_AttractYawStrength; //0x00BC 
	float m_AttractPitchStrength; //0x00C0 
	float m_MaxToTargetAngle; //0x00C4 
	float m_MaxToTargetXZAngle; //0x00C8 
	float m_ViewObstructedKeepTime; //0x00CC 
	float m_SnapZoomLateralSpeedLimit; //0x00D0 
	float m_SnapZoomTime; //0x00D4 
	float m_SnapZoomPostTimeNoInput; //0x00D8 
	float m_SnapZoomPostTime; //0x00DC 
	DWORD m_SnapZoomReticlePointPriority; //0x00E0 
	float m_SnapZoomAutoEngageTime; //0x00E4 
	float m_SnapZoomBreakTimeAtMaxInput; //0x00E8 
	float m_SnapZoomBreakMaxInput; //0x00EC 
	float m_SnapZoomBreakMinAngle; //0x00F0 
	float m_SnapZoomSpamGuardTime; //0x00F4 
	SkeletonCollisionData* m_SoldierBackupSkeletonCollisionData; //0x00F8 
	float m_CheckBoneCenterOnlyDistance; //0x0100 
	float m_DisableForcedTargetRecalcDistance; //0x0104 
	float m_OverrideAimingRange; //0x0108 
	float m_OverrideAimingRangeCrouch; //0x010C 
	float m_OverrideAimingRangeProne; //0x0110 
	unsigned char m_UseYawAcceleration; //0x0114 
	unsigned char m_UsePitchAcceleration; //0x0115 
	unsigned char m_SnapZoomUserShorterWeaponTime; //0x0116 
	unsigned char m_SnapZoomPostTimeDynamicPoint; //0x0117 
	unsigned char m_ForceSoldierBackupSkeletonCollisionUse; //0x0118 
char _0x0119[0x0007];

};//Size=0x0120

class SoldierAimingConstraintsData : public DataContainer
{
public:
	AimingConstraintsData m_SwimmingConstraints; //0x0010 

};//Size=0x0020

class SoldierAimingSimulationData : public GameDataContainer
{
public:
	Array<ZoomLevelData*>* m_ZoomLevels; //0x0010 
	SoldierAimAssistData* m_AimAssist; //0x0018 
	AimingPoseData m_StandPose; //0x0020 
	AimingPoseData m_CrouchPose; //0x0038 
	AimingPoseData m_PronePose; //0x0050 
	float m_ZoomTransitionTime; //0x0068 
	char _0x006C[0x0004];
	Array<ZoomLevelSpecificTransitionTime*>* m_ZoomTransitionTimeArray; //0x0070 
	float m_FovDelayTime; //0x0078 
	float m_FovTransitionTime; //0x007C 
	float m_AimingRange; //0x0080 
	float m_LockAimToTargetSpeed; //0x0084 
	ProfileOptionDataFloat* m_ZoomLookSpeedSensitivity; //0x0088 
	ProfileOptionDataBool* m_UniformAiming; //0x0090 
	ProfileOptionDataFloat* m_UniformAimingCoefficient; //0x0098 
	Array<AimerModifierData*>* m_Modifiers; //0x00A0 
	unsigned char m_ReturnToZoomAfterReload; //0x00A8 
	unsigned char m_UpdateCameraFOV; //0x00A9 
char _0x00AA[0x0006];

};//Size=0x00B0

class SoldierAutoAimData : public DataContainer
{
public:
	Array<AutoAimData*>* m_Poses; //0x0010 

};//Size=0x0018

class SoldierEntityData : public CharacterEntityData
{
public:
	D3DXVECTOR3 m_FLIRKeyColor; //0x00E0 
	char _0x00EC[0x0004];
	MaterialDecl m_FootMaterialPair; //0x00F0 
	MaterialDecl m_HeadMaterialPair; //0x00F4 
	Array<BoneFakePhysicsData*>* m_BoneFakePhysics; //0x00F8 
	SoldierAutoAimData* m_AutoAim; //0x0100 
	SoldierAimingConstraintsData* m_AimingConstraints; //0x0108 
	SoldierHeadCollisionData* m_HeadCollision; //0x0110 
	CharacterPhysicsData* m_CharacterPhysics; //0x0118 
	SoldierSprintSettingsData* m_SprintSettings; //0x0120 
	SoldierFOVEffect* m_SoldierFOVEffectSettings; //0x0128 
	Array<HidableSoldierMeshWeaponPart*>* m_HidableMeshParts; //0x0130 
	float m_ImpulseReactionTime; //0x0138 
	char _0x013C[0x0004];
	SoldierHealthModuleData* m_HealthModule; //0x0140 
	Array<Int32*>* m_AbortSpawnInvisibilityInputs; //0x0148 
	Array<BreathControlData*>* m_BreathControl; //0x0150 
	CollisionData* m_CollisionInfo; //0x0158 
	float m_FLIRValue; //0x0160 
	float m_ExplosionDamageModifier; //0x0164 
	float m_RegenerationDelayModifier; //0x0168 
	float m_FallDamageThreshold; //0x016C 
	DWORD m_BlueprintNameHash; //0x0170 
	float m_VisualCullScreenArea; //0x0174 
	unsigned char m_UseSpineXRotation; //0x0178 
	unsigned char m_ShowWeaponWhenDead; //0x0179 
	unsigned char m_EnableGroundmapLighting; //0x017A 
	unsigned char m_LowerGunOnOwnTeam; //0x017B 
	unsigned char m_ProximityCheck; //0x017C 
	unsigned char m_FreeSpaceCheck; //0x017D 
	unsigned char m_CollisionEnabled; //0x017E 
	unsigned char m_PhysicsControlled; //0x017F 
	unsigned char m_IsPushable; //0x0180 
	unsigned char m_HumanPlayerControlled; //0x0181 
	unsigned char m_DisableOnPlayerSetEventIfDead; //0x0182 
	unsigned char m_InteractiveManDownAllowed; //0x0183 
	unsigned char m_ShowNametag; //0x0184 
	unsigned char m_ForceAnimationToStandPose; //0x0185 
	unsigned char m_AimFollowEyeTransform; //0x0186 
	unsigned char m_Hide3p; //0x0187 
	unsigned char m_AllowSprintInterruptingActions; //0x0188 
	unsigned char m_EnableGasmaskInputBlocking; //0x0189 
char _0x018A[0x0006];

};//Size=0x0190

class ChildBarrelComponentData : public ChildComponentData
{
public:
};//Size=0x0100

class SoldierHeadCollisionData : public DataContainer
{
public:
	float m_HeadRadius; //0x0010 
	char _0x0014[0x0004];
	Array<SoldierHeadCollisionPoseData*>* m_PoseStates; //0x0018 

};//Size=0x0020

class SoldierHealthModuleData : public DataContainer
{
public:
};//Size=0x0010

class SoldierSprintSettingsData : public SoldierFOVEffect
{
public:
	float m_RecoverTime; //0x0028 
	float m_SprintToProneRecoverTime; //0x002C 
	Array<Int32*>* m_InterruptingActions; //0x0030 

};//Size=0x0038

class SoldierWeaponCustomizationAsset : public DataContainerPolicyAsset
{
public:
	CustomizationTable* m_Customization; //0x0018 

};//Size=0x0020

class SoldierWeaponData : public WeaponEntityData
{
public:
	char _0x00B0[0x00D0];
	char* m_Name; //0x0180 
	char _0x0188[0x0010];
	SoldierAimingSimulationData* m_SoldierAimingSimulationData; //0x0198 
char _0x01A0[0x0070];

};//Size=0x0210

class SoldierWeaponHudData : public HudData
{
public:
	float m_ReloadPrompt; //0x0010 
char _0x0014[0x0004];

};//Size=0x0018

class SoldierWeaponUnlockAsset : public WeaponUnlockAsset
{
public:
	BlueprintBundleReference m_WeaponBlueprintBundleReference; //0x0058 
	BlueprintBundleReference m_Weapon1pBlueprintBundleReference; //0x0090 
	Blueprint* m_NonStreamedBlueprint; //0x00C8 
	SoldierWeaponCustomizationAsset* m_Customization; //0x00D0 
	UnlockAssetBase* m_Extra; //0x00D8 
	DWORD m_WeaponIdentifier; //0x00E0 
	DWORD m_Category; //0x00E4 
	StoredWeaponData m_WeaponData; //0x00E8 
	char _0x00FC[0x0004];
	Array<UnlockToBlueprintBundle*>* m_UnlockToBlueprintBundle; //0x0100 

};//Size=0x0108

class SoundAsset : public Asset
{
public:
	SoundScopeData* m_Scope; //0x0018 
	Array<SoundDataReference*>* m_ReferencedData; //0x0020 

};//Size=0x0028

class SoundScopeData : public DataContainer
{
public:
	char* m_Name; //0x0010 
	SoundScopeStrategyData* m_DefaultStrategy; //0x0018 

};//Size=0x0020

class SoundScopeStrategyData : public DataContainer
{
public:
	char* m_Name; //0x0010 
	Array<SoundScopeStageData*>* m_Stages; //0x0018 

};//Size=0x0020

class ChildRotationBodyData : public RotationBodyData
{
public:
	float m_ForceModifier; //0x0048 
	float m_ResetForceModifier; //0x004C 
	float m_ResetForceInputThreshold; //0x0050 
	__int32 m_RotationInput; //0x0054 
	float m_WorldSpaceLockEfficiency; //0x0058 
	unsigned char m_UseLinearInput; //0x005C 
char _0x005D[0x0003];

};//Size=0x0060

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

class Client
{
public:
	char _0x0000[0x0008];
	GameSettings* m_GameSettings; //0x0008 
	char _0x0010[0x00A0];
	ClientGameContext* m_ClientGameContext; //0x00B0 
	ClientSettings* m_ClientSettings; //0x00B8 
	char _0x00C0[0x0008];
	ClientPlayerManager* m_ClientPlayerManager; //0x00C8 
	char _0x00D0[0x0028];
	ClientInput* m_ClientInput; //0x00F8 
	char _0x0100[0x0018];
	BFUISystem* m_BFUISystem; //0x0118 
	char _0x0120[0x00B8];
	char* m_Level; //0x01D8 
	char _0x01E0[0x01B0];
	ClientState m_ClientState; //0x0390 
	char _0x0394[0x0120];
	float m_FPS; //0x04B4 
char _0x04B8[0x0008];

};//Size=0x04C0

class ClientActiveWeaonHandler
{
public:
	char _0x0000[0x0038];
	ClientSoldierWeapon* m_ClientSoldierWeapon; //0x0038 

};//Size=0x0040

class SpecialBehavior : public DataContainer
{
public:
	unsigned char m_AllowFireWhileTargetIsHidden; //0x0010 
char _0x0011[0x0007];

};//Size=0x0018

class SprayPattern : public DataContainer
{
public:
	float m_AreaHeight; //0x0010 
	float m_SweepTimePitch; //0x0014 
	float m_AreaWidth; //0x0018 
	float m_SweepTimeYaw; //0x001C 

};//Size=0x0020

class StabilizerData : public DataContainer
{
public:
	float m_PitchStrength; //0x0010 
	float m_RollStrength; //0x0014 
	float m_YawStrength; //0x0018 
	float m_VerticalVelocityStrength; //0x001C 
	unsigned char m_Advanced; //0x0020 
	unsigned char m_AdvancedYaw; //0x0021 
char _0x0022[0x0006];

};//Size=0x0028

class ClientAiAimInputEntity : public ClientAimInputEntity
{
public:
	char _0x0050[0x0030];
	char _0x0088[0x003C];
	float N010EFEDC; //0x00C4 
	float N010F07C2; //0x00C8 
char _0x00CC[0x045C];

};//Size=0x0528

class StanceFilterComponentData : public GameComponentData
{
public:
	Array<Int32*>* m_ValidStances; //0x0070 
	float m_StanceChangeTime; //0x0078 
	char _0x007C[0x0004];
	Array<ActionSuppressor*>* m_ActionsToFilter; //0x0080 
	unsigned char m_UndoParentStanceFilter; //0x0088 
	unsigned char m_FilterSpecificActions; //0x0089 
char _0x008A[0x0006];

};//Size=0x0090

class StanceFilterHolder
{
public:
	ClientStanceFilterComponent* m_Array[0x0003]; //0x0000 

};//Size=0x0018

class ClientAimEntity : public Entity
{
public:
	char _0x0020[0x0008];
	AimEntityData* m_AimEntityData; //0x0028 
	char _0x0030[0x0090];
	D3DXMATRIX m_TurrentTransform; //0x00C0 
	D3DXMATRIX m_VehicleTransform; //0x0100 
	char _0x0140[0x0020];
	D3DXVECTOR3 m_RayVector; //0x0160 
	float m_RayLength; //0x016C 
	char _0x0170[0x0030];
	ClientVehicleEntity* m_ClientVehicleEntity; //0x01A0 
	ClientAimingSimulation* m_AuthorativeAiming; //0x01A8 
char _0x01B0[0x0370];

};//Size=0x0520

class ClientAimRotationBoneComponent : public ClientGameComponent
{
public:
	char _0x0038[0x0018];
	ClientAimEntity* m_AimEntity; //0x0050 
char _0x0060[0x0030];

};//Size=0x0090

class StateNodeEntityData : public StateNodeEntityBaseData
{
public:
	Array<StateNavEventInfo*>* m_EventTriggersInfo; //0x0028 
	Array<StateNavEventInfo*>* m_ConsumedEventsInfo; //0x0030 

};//Size=0x0038

class StaticCamera : public TargetCamera
{
public:
	char _0x0160[0x00B0];
	float N00E0DEE4; //0x0210 
	float N00E0EB07; //0x0214 
	float N00E10F1B; //0x0218 
char _0x021C[0x0074];

};//Size=0x0290

class StaticCameraData : public TargetCameraData
{
public:
	Array<Vec3*>* m_LeftCurve; //0x0080 
	Array<Vec3*>* m_RightCurve; //0x0088 
	Array<Vec3*>* m_UpCurve; //0x0090 
	Array<Vec3*>* m_DownCurve; //0x0098 
	Array<CameraLoosePartPhysicsData*>* m_LoosePartPhysics; //0x00A0 
	float m_LeftYawAngle; //0x00A8 
	float m_RightYawAngle; //0x00AC 
	float m_UpPitchAngle; //0x00B0 
	float m_DownPitchAngle; //0x00B4 
	__int32 m_AverageFilterFrames; //0x00B8 
	__int32 m_YawInputAction; //0x00BC 
	__int32 m_PitchInputAction; //0x00C0 
	float m_WorldSpaceLockEfficiencyYaw; //0x00C4 
	float m_WorldSpaceLockEfficiencyYawAway; //0x00C8 
	float m_WorldSpaceLockEfficiencyPitch; //0x00CC 
	float m_YawSensitivityNonZoomed; //0x00D0 
	float m_YawSensitivityZoomed; //0x00D4 
	float m_PitchSensitivityNonZoomed; //0x00D8 
	float m_PitchSensitivityZoomed; //0x00DC 
	unsigned char m_MergeLeftAndRightCurves; //0x00E0 
	unsigned char m_MergeUpAndDownCurves; //0x00E1 
	unsigned char m_MirrorHorizontalCurves; //0x00E2 
	unsigned char m_MirrorVerticalCurves; //0x00E3 
	unsigned char m_AccumulateInput; //0x00E4 
	unsigned char m_ResetAccumulatedInputOnViewChange; //0x00E5 
char _0x00E6[0x000A];

};//Size=0x00F0

class ClientAimingConstraint : public Entity
{
public:
	char _0x0020[0x0008];
	AimingConstraintEntityData* m_AimingConstraintEntityData; //0x0028 
	char _0x0030[0x0008];
	ClientAimEntity* m_ClientAimEntity; //0x0038 
char _0x0040[0x0008];

};//Size=0x0048

class ClientAimingSimulation
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
	virtual float GetYaw(); //
	virtual FPSAimer* GetFPSAimer(); //

	SoldierAimingSimulationData* m_SoldierAimingSimulationData; //0x0008 
	char _0x0010[0x0018];
	FPSAimer* m_FPSAimer; //0x0028 
	float m_Yaw; //0x0030 
	float m_Pitch; //0x0034 
	float m_YawTimer; //0x0038 
	float m_PitchTimer; //0x003C 
	D3DXVECTOR2 m_Sway; //0x0040 
	char _0x0048[0x0008];
	float m_Multiplyer; //0x0050 
	char _0x0054[0x0008];
	float m_InputYaw; //0x005C 
	float m_InputPitch; //0x0060 
	char _0x0064[0x0010];
	float N00F3997D; //0x0074 
	char _0x0078[0x0010];
	float m_ZoomLevel; //0x0088 
	char _0x008C[0x0004];
	D3DXMATRIX m_Transform; //0x0090 
	char _0x00D0[0x0050];
	ClientDiceShooterVehicleEntryComponent* m_ClientDiceShooterVehicleEntryComponent; //0x0120 
	char _0x0128[0x0050];
	void* m_RayObject; //0x0178 
	D3DXVECTOR3 m_RayPosition; //0x0180 
	float m_RayLength; //0x018C 
char _0x0190[0x01C0];

};//Size=0x0350

class StatsCategoryVehicleData : public StatsCategoryGuidData
{
public:
	DWORD m_FirstVehicleId; //0x0028 
char _0x002C[0x0004];

};//Size=0x0030

class StatsCategoryWeaponData : public StatsCategoryGuidData
{
public:
	DWORD m_SoldierWeaponId; //0x0028 
	char _0x002C[0x0004];
	CriteriaGateList* m_AccessoryUnlockGates; //0x0030 
	Array<BasicUnlockInfo*>* m_UnlocksInfo; //0x0038 

};//Size=0x0040

class ClientAimingSimulationDataProviderEntity : public Entity
{
public:
	char _0x0020[0x0008];
	AimingSimulationEntityData* m_AimingSimulationEntityData; //0x0028 
char _0x0030[0x0010];

};//Size=0x0040

class StreamPoolPreset : public DataContainer
{
public:
	Array<StreamPoolMapping*>* m_Mappings; //0x0010 

};//Size=0x0018

class ClientAimingWorldLockEfficiencyEntity : public Entity
{
public:
	char _0x0020[0x0008];
	AimingWorldLockEfficiencyEntityData* m_AimingWorldLockEfficiencyEntityData; //0x0028 
char _0x0030[0x0018];

};//Size=0x0048

class SubWorldInclusion : public Asset
{
public:
	Array<SubWorldInclusionCriterion*>* m_Criteria; //0x0018 

};//Size=0x0020

class SuppressedBehavior : public DataContainer
{
public:
	float m_SuppressedTime; //0x0010 
	float m_TargetSquadTime; //0x0014 

};//Size=0x0018

class SurfaceShaderBaseAsset : public Asset
{
public:
};//Size=0x0018

class ClientAnimatedSoldierWeaponHandler
{
public:
	ClientSoldierWeapon* m_Weapon1; //0x0000 
	ClientSoldierWeapon* m_Weapon2; //0x0008 
	ClientSoldierWeapon* m_Weapon3; //0x0010 

};//Size=0x0018

class SustainFiringData : public DataContainer
{
public:
	SustainFiringFireStyle m_FireStyle; //0x0010 
	float m_SpinUpDuration; //0x0014 
	float m_SustainFireTimeMin; //0x0018 
	float m_SustainFireTimeMax; //0x001C 
	float m_CooldownDurationMin; //0x0020 
	float m_CooldownDurationMax; //0x0024 
	float m_AimFactorBetweenFeetAndEyes; //0x0028 
	float m_TrackingRate; //0x002C 
	SustainFiringSweepAreaSettings* m_SweepAreaSettings; //0x0030 
	unsigned char m_StopSustainFireWhenShotAt; //0x0038 
char _0x0039[0x0007];

};//Size=0x0040

class SustainFiringSweepAreaSettings : public DataContainer
{
public:
	float m_SweepArcWidth; //0x0010 
	float m_MinimumSweepMovement; //0x0014 
	float m_SweepRate; //0x0018 
	float m_PostSweepPauseDuration; //0x001C 
	unsigned char m_StartSweepFromEdgeOfArc; //0x0020 
char _0x0021[0x0007];

};//Size=0x0028

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
	ServerTypeValues m_ServerType; //0x0058 
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

class ClientBFVehicleHealthComponent : public ClientVehicleHealthComponent
{
public:
char _0x00C8[0x0060];

};//Size=0x0128

class ClientBFVehiclePhysicsComponent : public ClientVehiclePhysicsComponent
{
public:
	ClientBFVehicleHealthComponent* m_HealthComponent; //0x00D0 
char _0x00D8[0x0040];

};//Size=0x0118

class ClientCameraComponent : public ClientGameComponent
{
public:
	char _0x0038[0x0228];
	D3DXMATRIX m_VehicleMatrix; //0x0260 
	D3DXMATRIX m_RotationMatrix; //0x02A0 
	char _0x02E0[0x0038];
	StaticCamera* m_StaticCamera; //0x0318 
	ClientComponentTargetCameraCallback* m_ClientComponentTargetCameraCallback; //0x0320 
char _0x0328[0x00B8];

};//Size=0x03E0

class ClientCharacterAnimatableMeshProxyComponent : public ClientMeshComponent
{
public:
char _0x0110[0x0010];

};//Size=0x0120

class TargetModifier : public DataContainer
{
public:
	unsigned char m_SquadSuppression; //0x0010 
	unsigned char m_AlwaysTargetHuman; //0x0011 
char _0x0012[0x0006];

};//Size=0x0018

class TargetingData : public DataContainer
{
public:
	float m_AimOffsetY; //0x0010 
	float m_VisibleTargetLimit; //0x0014 
	float m_TargetLostTimer; //0x0018 
	TinyPiecewiseLinearCurve m_TargetDistanceEvaluation; //0x001C 
	SuppressionValues m_SuppressionScore; //0x002C 
	float m_HumanSuppressionScoreMultiplier; //0x0034 
	float m_SuppressionTimeLimit; //0x0038 
	float m_AquiredTimer; //0x003C 
	float m_AquiredObjectTimer; //0x0040 
	float m_AquiredDistScale; //0x0044 
	float m_TargetAimingTimer; //0x0048 
	float m_CurrentHumanTargetAimingDistScale; //0x004C 
	float m_LowHealthPercentage; //0x0050 
	float m_CurrentHumanTargetLowHealthDistScale; //0x0054 
	float m_ElevationAboveThreshold; //0x0058 
	float m_ElevationDistScaleY; //0x005C 
	float m_CurrentTargetDistScale; //0x0060 
	float m_TargetVisibleDistScale; //0x0064 
	float m_HumanPreferenceScale; //0x0068 
	float m_TargetObjectDistScale; //0x006C 
	float m_VehicleTargetDistScale; //0x0070 
	unsigned char m_UseDistanceAsSeparateScaling; //0x0074 
	unsigned char m_BalanceDistribution; //0x0075 
char _0x0076[0x0002];

};//Size=0x0078

class TextureAsset : public TextureBaseAsset
{
public:
char _0x0024[0x0004];

};//Size=0x0028

class ClientChassisComponent : public ClientPartComponent
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
	virtual void Function24(); //
	virtual void Function25(); //
	virtual void Function26(); //
	virtual void Function27(); //
	virtual void Function28(); //
	virtual void Function29(); //
	virtual void Function30(); //
	virtual void Function31(); //
	virtual void Function32(); //
	virtual void Function33(); //
	virtual void Function34(); //
	virtual void Function35(); //
	virtual void Function36(); //
	virtual void Function37(); //
	virtual void Function38(); //
	virtual void Function39(); //
	virtual void Function40(); //
	virtual void Function41(); //
	virtual void Function42(); //
	virtual void Function43(); //
	virtual void Function44(); //
	virtual void Function45(); //
	virtual void Function46(); //
	virtual void Function47(); //
	virtual void Function48(); //
	virtual void Function49(); //

	char _0x00C8[0x0008];
	char _0x00D8[0x0018];
	ClientBFVehiclePhysicsComponent* m_ClientBFVehiclePhysicsComponent; //0x00F0 
	RigidBody* m_RigidBody; //0x00F8 
char _0x0108[0x2808];

};//Size=0x2910

class ClientChildBarrelComponent : public ClientChildComponent
{
public:
};//Size=0x0310

class ClientComponentTargetCameraCallback : public TargetCameraCallback
{
public:
	ClientCameraComponent* m_ClientCameraComponent; //0x0008 
char _0x0010[0x0040];

};//Size=0x0050

class ClientDiceShooterVehicleEntryComponent : public ClientVehicleEntryComponent
{
public:
	char _0x0AA0[0x0008];
	vector<FiringCallback*> m_Weapons; //0x0AA8 
	ClientVehicleEntity* m_ClientVehicleEntity; //0x0AC8 
	ClientAimEntity* m_ClientAimEntity; //0x0AD0 
	ClientAimingSimulationDataProviderEntity* m_ClientAimingSimulationDataProviderEntity; //0x0AD8 
	SoldierAimingSimulationData* m_SoldierAimingSimulationData; //0x0AE0 
char _0x0AE8[0x0098];

};//Size=0x0B80

class TransformSpace : public DataContainer
{
public:
	TransformSpace* m_Parent; //0x0010 
	DWORD m_Id; //0x0018 
	char _0x001C[0x0004];
	LinearTransform m_LocalTransform; //0x0020 

};//Size=0x0060

class ClientFireProjectileEntity : public Entity
{
public:
char _0x0020[0x0308];

};//Size=0x0328

class ClientGameContext
{
public:
	char _0x0000[0x0020];
	ClientPlayerManager* m_PlayerManager; //0x0020 
	char _0x0028[0x0008];
	GameLevel* m_GameLevel; //0x0030 

static ClientGameContext* GetInstance()
{
	return *(ClientGameContext**)(OFFSET_CLIENTGAMECONTEXT);
}
};//Size=0x0038

class ClientHorsePhysicsComponent : public ClientVehiclePhysicsComponent
{
public:
};//Size=0x00D0

class ClientInput
{
public:
	char _0x0000[0x0010];
	BorderInputNode* m_InputNode; //0x0010 
	char _0x0018[0x0008];
	InputCamera* m_InputCamera; //0x0020 
	float m_InputYaw; //0x0028 
	float m_InputPitch; //0x002C 

};//Size=0x0030

class UIImmediateModeFontConfigurationAsset : public Asset
{
public:
	Array<UIImmediateModeFontBundle*>* m_FontBundles; //0x0018 
	__int32 m_FontDpi; //0x0020 
	__int32 m_GlyphCacheSize; //0x0024 
	__int32 m_GlyphCacheSizeLowEnd; //0x0028 
	__int32 m_GlyphCachePadding; //0x002C 
	float m_GlyphGeometryPadding; //0x0030 
	unsigned char m_GlyphCachePremultipliedAlpha; //0x0034 
	unsigned char m_AutoHinting; //0x0035 
char _0x0036[0x0002];

};//Size=0x0038

class UIInputActionDataAsset : public Asset
{
public:
	float m_DefaultRepeatDelaySec; //0x0018 
	float m_DefaultRepeatSpeedSec; //0x001C 
	float m_DefaultOneAxisDeadZone; //0x0020 
	float m_DefaultTwoAxisDeadZone; //0x0024 
	Array<UIInputActionMapData*>* m_InputActionMaps; //0x0028 
	Array<UIAnalogInputMapData*>* m_AnalogInputMaps; //0x0030 

};//Size=0x0038

class UIPartPropertyList : public DataContainer
{
public:
	Array<UIPartProperties*>* m_HudPropertyList; //0x0010 

};//Size=0x0018

class UISettings : public SystemSettings
{
public:
	UISystemType m_System; //0x0020 
	char _0x0024[0x0004];
	ProfileOptionsAsset* m_ProfileOptions; //0x0028 
	LanguageFormat m_Language; //0x0030 
	char _0x0034[0x0004];
	LocalizationAsset* m_Localization; //0x0038 
	UIImmediateModeFontConfigurationAsset* m_FontConfiguration; //0x0040 
	unsigned char m_DrawEnable; //0x0048 
	unsigned char m_EnableJobs; //0x0049 
	unsigned char m_UseXYUITranslationOffset; //0x004A 
char _0x004B[0x0005];

};//Size=0x0050

class ClientMinimap2DEntity : public Entity
{
public:
	char _0x0020[0x0008];
	Minimap2DEntityData* m_Minimap2DEntityData; //0x0028 
char _0x0030[0x0050];

};//Size=0x0080

class UIWorldIconBehavior : public Asset
{
public:
};//Size=0x0018

class ClientPlayer
{
public:
	virtual ~ClientPlayer(); //
	virtual ClientCharacterEntity* GetCharacterEntity() ; // ClientSoldierEntity + 0x200
	virtual void* GetCharacterUserData(); //soldier
	virtual EntryComponent* GetEntryComponent(); //ClientSoldierEntity + 0x128
	virtual bool InVehicle(); //

	char _0x0008[0x0010];
	char* m_Name; //0x0018 
	char _0x0020[0x1C11];
	unsigned char m_isAI; //0x1C31 
	char _0x1C32[0x0002];
	__int32 m_teamID; //0x1C34 
	char _0x1C38[0x00F0];
	WeakPtr* m_pSoldier; //0x1D28 
	char _0x1D30[0x0008];
	ClientVehicleEntity* m_ClientVehicleEntity; //0x1D38 
	char _0x1D40[0x0008];
	ClientSoldierEntity* m_pControllable; //0x1D48 
	__int32 m_controllableEntryId; //0x1D50 
char _0x1D54[0x00C0];

ClientSoldierEntity* GetSoldier()
{
	return m_pSoldier.data();
}

ClientVehicleEntity* GetVehicle()
{
	return m_pVehicle;
}
};//Size=0x1E14

class UnlockEntityData : public EntityData
{
public:
	Realm m_Realm; //0x0018 
	char _0x001C[0x0004];
	Array<Guid*>* m_UnlockGuids; //0x0020 
	UnlockEntityLogic m_Logic; //0x0028 
	UnlockEntityPlayerQueryType m_ContextPlayerQueryType; //0x002C 
	unsigned char m_InvertTest; //0x0030 
	unsigned char m_ContextPlayer; //0x0031 
char _0x0032[0x0006];

};//Size=0x0038

class UnlockUserDataBase : public DataContainerPolicyAsset
{
public:
};//Size=0x0018

class ValueTypeInfo : public TypeInfo
{
public:
	FieldInfoCotainer* m_FieldInfos; //0x0018 

};//Size=0x0020

class ValueTypeInfoData : public TypeInfoData
{
public:
	void* m_DefaultValue; //0x0018 
	FieldInfoCotainer* m_FieldInfos; //0x0020 

};//Size=0x0028

class ClientPlayerManager
{
public:
	virtual ~ClientPlayerManager(); //
	virtual eastl::vector<ClientPlayer*>* GetPlayers(); //
	virtual eastl::vector<ClientPlayer*>* GetSpectators(); //

	PlayerData* m_PlayerData; //0x0008 
	char _0x0010[0x00D0];
	PlayerHolder* m_PlayerHolder; //0x00E0 
	char _0x00E8[0x0490];
	ClientPlayer* m_Client; //0x0578 

};//Size=0x0580

class VehicleAimerSettings : public DataContainer
{
public:
	float m_MinPrecisionToFire; //0x0010 
	unsigned char m_IsParabolic; //0x0014 
	unsigned char m_AimHigh; //0x0015 
	unsigned char m_TrackTowardsTarget; //0x0016 
	unsigned char m_TrackBeyondTarget; //0x0017 

};//Size=0x0018

class VehicleConfigData : public DataContainer
{
public:
	float m_HeavyLandingClosingSpeed; //0x0010 
	float m_HeavyLandingStiffenTime; //0x0014 
	char _0x0018[0x0008];
	D3DXVECTOR3 m_CenterOfMass; //0x0020 
	char _0x002C[0x0004];
	D3DXVECTOR3 m_CenterOfMassHandlingOffset; //0x0030 
	char _0x003C[0x0004];
	D3DXVECTOR3 m_InertiaOverride; //0x0040 
	char _0x004C[0x0004];
	D3DXVECTOR3 m_ProximityExtScale; //0x0050 
	char _0x005C[0x0004];
	InAirForceConfig m_InAirConfig; //0x0060 
	AeroDynamicPhysicsData* m_AeroDynamicPhysics; //0x00C0 
	MotorbikeData* m_MotorbikePhysics; //0x00C8 
	MotionDampingData* m_MotionDamping; //0x00D0 
	VehicleInputData m_Input; //0x00D8 
	FloatPhysicsData* m_FloatPhysics; //0x0128 
	StabilizerData* m_Stabilizer; //0x0130 
	Array<StabilizerSettings*>* m_Stabilizers; //0x0138 
	Array<ConstantForceData*>* m_ConstantForce; //0x0140 
	VehicleMode m_VehicleModeAtReset; //0x0148 
	float m_BodyMass; //0x014C 
	float m_GravityModifier; //0x0150 
	float m_UphillGravityFactor; //0x0154 
	float m_SpeedForFullUphillGravityEffect; //0x0158 
	float m_SpeedForNoUphillGravityEffect; //0x015C 
	float m_AligningTorqueFactor; //0x0160 
	float m_YawMin; //0x0164 
	float m_YawMax; //0x0168 
	float m_DownForceBaseFactor; //0x016C 
	float m_DownForceWheelFactor; //0x0170 
	float m_VehicleModeChangeEnteringTime; //0x0174 
	float m_VehicleModeChangeStartingTime; //0x0178 
	float m_VehicleModeChangeStoppingTime; //0x017C 
	float m_VehicleModeChangeLeavingTime; //0x0180 
	float m_StandStillLowSpeedTimeLimit; //0x0184 
	float m_StaticFrictionBreakCollisionMod; //0x0188 
	float m_StaticFrictionBreakVelocityMod; //0x018C 
	float m_CoefficientOfAirFriction; //0x0190 
	float m_AirDensity; //0x0194 
	float m_AirDragArea; //0x0198 
	float m_WindResistanceBaseFactor; //0x019C 
	float m_WindResistanceVelocityFactor; //0x01A0 
	float m_WindResistanceVelocityFactorMin; //0x01A4 
	float m_WindResistanceVelocityFactorMax; //0x01A8 
	InputThrottle m_UseInputYawAsThrottle; //0x01AC 
	AntiRollBars m_AntiRollBars; //0x01C0 
	float m_MaxGroundSpeed; //0x01D0 
	float m_ProximityHeightTranslation; //0x01D4 
	float m_FrictionAtLowVelocity; //0x01D8 
	CutSceneSettings m_CutSceneSettings; //0x01DC 
	unsigned char m_UseCenterOfMassHandlingOffsetForWheels; //0x01DE 
	unsigned char m_ForceAxisAlignedInertiaTensor; //0x01DF 
	unsigned char m_UseHeavyLandingSuspension; //0x01E0 
	unsigned char m_CalculateSuspensionWithRespectToCOM; //0x01E1 
	unsigned char m_UseDownForce; //0x01E2 
	unsigned char m_UseDownForceWheelFactor; //0x01E3 
	unsigned char m_UseGearbox; //0x01E4 
	unsigned char m_UseNeutralGearOnDriverExit; //0x01E5 
	unsigned char m_UseStandStillBrake; //0x01E6 
	unsigned char m_UseStandStillSleep; //0x01E7 
	unsigned char m_UseTurnAroundForce; //0x01E8 
	unsigned char m_AllowWheelsToCollideWhenVehicleIsUpsideDown; //0x01E9 
	unsigned char m_AvoidGettingStuck; //0x01EA 
	unsigned char m_UseMotorcycleControl; //0x01EB 
	unsigned char m_InvertPitchAllowed; //0x01EC 
	unsigned char m_UseWindResistance; //0x01ED 
char _0x01EE[0x0002];

};//Size=0x01F0

class ClientSettings : public SystemSettings
{
public:
	Array<Boolean*>* m_PadsRumbleEnabled; //0x0020 
	Array<Uint32*>* m_PadsIndex; //0x0028 
	DWORD m_VrDeviceType; //0x0030 
	float m_JuiceDistanceThreshold; //0x0034 
	float m_JuiceTimeThreshold; //0x0038 
	float m_JuiceVehicleDistanceThreshold; //0x003C 
	float m_JuiceVehicleTimeThreshold; //0x0040 
	char _0x0044[0x0004];
	char* m_JuiceReportPerformanceCategory; //0x0048 
	float m_JuicePerformanceFpsHistogramTimeThreshold; //0x0050 
	char _0x0054[0x0004];
	char* m_ScreenshotFilename; //0x0058 
	char* m_ScreenshotSuffix; //0x0060 
	DWORD m_Team; //0x0068 
	__int32 m_SpawnPointIndex; //0x006C 
	char* m_ServerIp; //0x0070 
	char* m_SecondaryServerIp; //0x0078 
	float m_AimScale; //0x0080 
	float m_MouseSensitivityMin; //0x0084 
	float m_MouseSensitivitySliderRange; //0x0088 
	float m_MouseSensitivityFactor; //0x008C 
	float m_MouseSensitivityPower; //0x0090 
	float m_XenonGamepadDeadZoneCenter; //0x0094 
	float m_XenonGamepadDeadZoneAxis; //0x0098 
	float m_XenonGamepadDeadZoneOffsetAxis; //0x009C 
	float m_PS3GamepadDeadZoneCenter; //0x00A0 
	float m_PS3GamepadDeadZoneAxis; //0x00A4 
	float m_PS3GamepadDeadZoneOffsetAxis; //0x00A8 
	float m_PCGamepadDeadZoneCenter; //0x00AC 
	float m_PCGamepadDeadZoneAxis; //0x00B0 
	float m_PCGamepadDeadZoneOffsetAxis; //0x00B4 
	float m_Gen4aGamepadDeadZoneCenter; //0x00B8 
	float m_Gen4aGamepadDeadZoneAxis; //0x00BC 
	float m_Gen4aGamepadDeadZoneOffsetAxis; //0x00C0 
	float m_Gen4bGamepadDeadZoneCenter; //0x00C4 
	float m_Gen4bGamepadDeadZoneAxis; //0x00C8 
	float m_Gen4bGamepadDeadZoneOffsetAxis; //0x00CC 
	char* m_GamepadGuid; //0x00D0 
	DWORD m_ClientBulletsPerQuery; //0x00D8 
	float m_IncomingFrequency; //0x00DC 
	float m_IncomingHighFrequency; //0x00E0 
	DWORD m_IncomingRate; //0x00E4 
	DWORD m_OutgoingRate; //0x00E8 
	DWORD m_IncomingHighFrequencyRate; //0x00EC 
	float m_LoadingTimeout; //0x00F0 
	float m_LoadedTimeout; //0x00F4 
	float m_IngameTimeout; //0x00F8 
	DWORD m_MaxCorrectionUpdateCount; //0x00FC 
	char* m_InstancePath; //0x0100 
	unsigned char m_IsSpectator; //0x0108 
	unsigned char m_VisualFrameInterpolation; //0x0109 
	unsigned char m_UseTimeSinceInput; //0x010A 
	unsigned char m_AllowVideoRecording; //0x010B 
	unsigned char m_DrawStats; //0x010C 
	unsigned char m_DebrisClusterEnabled; //0x010D 
	unsigned char m_VegetationEnabled; //0x010E 
	unsigned char m_ForceEnabled; //0x010F 
	unsigned char m_WorldRenderEnabled; //0x0110 
	unsigned char m_TerrainEnabled; //0x0111 
	unsigned char m_WaterPhysicsEnabled; //0x0112 
	unsigned char m_OvergrowthEnabled; //0x0113 
	unsigned char m_EffectsEnabled; //0x0114 
	unsigned char m_EmittersEnabled; //0x0115 
	unsigned char m_AutoIncrementPadIndex; //0x0116 
	unsigned char m_JuicePlayerReportPositionEnabled; //0x0117 
	unsigned char m_JuiceReportPerformanceEnabled; //0x0118 
	unsigned char m_JuiceReportMemoryEnabled; //0x0119 
	unsigned char m_JuiceReportPerformanceFpsHistogramEnabled; //0x011A 
	unsigned char m_ExtendedJuiceLoggingEnabled; //0x011B 
	unsigned char m_JuiceReportPerformanceOnlyOnSimFrames; //0x011C 
	unsigned char m_LipSyncEnabled; //0x011D 
	unsigned char m_OnDamageSpottingEnabled; //0x011E 
	unsigned char m_IgnoreClientFireRateMultiplier; //0x011F 
	unsigned char m_PauseGameOnStartUp; //0x0120 
	unsigned char m_SkipFastLevelLoad; //0x0121 
	unsigned char m_InputEnable; //0x0122 
	unsigned char m_ScreenshotToFile; //0x0123 
	unsigned char m_LoadMenu; //0x0124 
	unsigned char m_DebugMenuOnLThumb; //0x0125 
	unsigned char m_InvertFreeCamera; //0x0126 
	unsigned char m_ScreenshotComparisonsEnable; //0x0127 
	unsigned char m_RenderTags; //0x0128 
	unsigned char m_InvertPitch; //0x0129 
	unsigned char m_InvertPadPcRightStick; //0x012A 
	unsigned char m_Scheme0FlipY; //0x012B 
	unsigned char m_Scheme1FlipY; //0x012C 
	unsigned char m_Scheme2FlipY; //0x012D 
	unsigned char m_InvertYaw; //0x012E 
	unsigned char m_ConsoleInputEmulation; //0x012F 
	unsigned char m_InputLayoutChangeOnlyForPad; //0x0130 
	unsigned char m_SampleInputEveryVisualFrame; //0x0131 
	unsigned char m_SampleVisualFrameInputPostFrame; //0x0132 
	unsigned char m_HavokVisualDebugger; //0x0133 
	unsigned char m_HavokCaptureToFile; //0x0134 
	unsigned char m_UseMouseAndKeyboardSystem; //0x0135 
	unsigned char m_UseGlobalGamePadInput; //0x0136 
	unsigned char m_UsePcGamePadInput; //0x0137 
	unsigned char m_ShowBuildId; //0x0138 
	unsigned char m_ExtractPersistenceInformation; //0x0139 
	unsigned char m_EnableRestTool; //0x013A 
	unsigned char m_LocalVehicleSimulationEnabled; //0x013B 
	unsigned char m_AsyncClientBulletEntity; //0x013C 
	unsigned char m_AutoUnspawnDynamicObjects; //0x013D 
	unsigned char m_QuitGameOnServerDisconnect; //0x013E 
	unsigned char m_UseOldKillerCamera; //0x013F 
	unsigned char m_LuaOptionSetEnable; //0x0140 
	unsigned char m_DecoupledRenderUpdate; //0x0141 
	unsigned char m_AllowDecoupledRenderUpdate; //0x0142 
	unsigned char m_UseCorrectionCache; //0x0143 
char _0x0144[0x0004];

};//Size=0x0148

class VehicleEntityData : public ControllableEntityData
{
public:
	D3DXVECTOR3 m_CriticallyDamagedEffectPosition; //0x00B0 
	char _0x00BC[0x0004];
	D3DXVECTOR3 m_PreExplosionEffectPosition; //0x00C0 
	char _0x00CC[0x0004];
	D3DXVECTOR3 m_VictimOffsetOverride; //0x00D0 
	char _0x00DC[0x0004];
	VehicleHudData m_HudData; //0x00E0 
	D3DXVECTOR3 m_FLIRKeyColor; //0x0160 
	char _0x016C[0x0004];
	D3DXVECTOR3 m_InteractionOffset; //0x0170 
	char _0x017C[0x0004];
	D3DXVECTOR3 m_StaticBoundingBoxPaddingMin; //0x0180 
	char _0x018C[0x0004];
	D3DXVECTOR3 m_StaticBoundingBoxPaddingMax; //0x0190 
	char _0x019C[0x0004];
	D3DXVECTOR3 m_BoneCollisionBoundingBoxPaddingMin; //0x01A0 
	char _0x01AC[0x0004];
	D3DXVECTOR3 m_BoneCollisionBoundingBoxPaddingMax; //0x01B0 
	char _0x01BC[0x0004];
	Array<PartLinkData*>* m_PartLinks; //0x01C0 
	CaptureTypeEnum m_CaptureType; //0x01D0 
	__int32 m_CapturePlayerLimit; //0x01D4 
	float m_DisabledDamageThreshold; //0x01D8 
	float m_ClearDisabledDamageThreshold; //0x01DC 
	float m_PreDestructionDamageThreshold; //0x01E0 
	char _0x01E4[0x0004];
	VehicleHealthZoneData m_FrontHealthZone; //0x01E8 
	VehicleHealthZoneData m_RearHealthZone; //0x0208 
	VehicleHealthZoneData m_LeftHealthZone; //0x0228 
	VehicleHealthZoneData m_RightHealthZone; //0x0248 
	VehicleHealthZoneData m_TopHealthZone; //0x0268 
	float m_TopHitHeight; //0x0288 
	float m_TopHitAngle; //0x028C 
	float m_RegenerationDelay; //0x0290 
	float m_RegenerationRate; //0x0294 
	float m_ArmorMultiplier; //0x0298 
	float m_RegenerationDelayMultiplier; //0x029C 
	float m_RegenerationRateMultiplier; //0x02A0 
	float m_EmergencyRepairHealth; //0x02A4 
	float m_DecayDelay; //0x02A8 
	float m_DecayRate; //0x02AC 
	EffectBlueprint* m_CriticallyDamagedEffect; //0x02B0 
	float m_CriticalDamageTime; //0x02B8 
	float m_ExitDirectionSpeedThreshold; //0x02BC 
	EffectBlueprint* m_PreExplosionEffect; //0x02C0 
	float m_PreExplosionTime; //0x02C8 
	float m_ExitCameraSwitchDelay; //0x02CC 
	ExplosionEntityData* m_Explosion; //0x02D0 
	CompositeMeshAsset* m_Mesh; //0x02D8 
	ObjectBlueprint* m_CockpitMesh; //0x02E0 
	char* m_NameSid; //0x02E8 
	__int32 m_MaxPlayersInVehicle; //0x02F0 
	float m_MinSpeedForMineActivation; //0x02F4 
	DamageEntityType m_DamageTypeIdentifier; //0x02F8 
	float m_UpsideDownDamage; //0x02FC 
	float m_UpsideDownDamageDelay; //0x0300 
	float m_UpsideDownAngle; //0x0304 
	float m_WaterDamage; //0x0308 
	float m_BelowWaterDamageDelay; //0x030C 
	float m_WaterDamageOffset; //0x0310 
	float m_VelocityDamageThreshold; //0x0314 
	float m_VelocityDamageMagnifier; //0x0318 
	float m_RepairRateModifier; //0x031C 
	float m_KillSoldierCollisionSpeedThreshold; //0x0320 
	float m_ExitSpeedThreshold; //0x0324 
	float m_ExitDirectionSpeedThreshold; //0x0328 
	VehicleSpawnerType m_SpawnerType; //0x032C 
	float m_FLIRValue; //0x0330 
	MPModeData m_MPMode; //0x0334 
	float m_ExitCameraSwitchDelay; //0x0338 
	AngleOfImpactData m_AngleOfImpact; //0x033C 
	float m_LockingTimeMultiplier; //0x0354 
	VehicleLockableInfoData m_VehicleLockableInfo; //0x0358 
	float m_HighAltitudeLockHeight; //0x0368 
	char _0x036C[0x0004];
	VehicleSoundData* m_Sound; //0x0370 
	EntityVoiceOverInfo* m_VoiceOverInfo; //0x0378 
	float m_NametagHeightScale; //0x0380 
	float m_SpottingFovScale; //0x0384 
	CharacterBlueprint* m_CharacterBlueprintOverride; //0x0388 
	float m_AIFleeRadius; //0x0390 
	AIVehicleSoundCategory m_AISoundCategory; //0x0394 
	unsigned char m_AllowVehicleOutsideCombatAreas; //0x0398 
	unsigned char m_UseTopZone; //0x0399 
	unsigned char m_HealthZonesShareDamage; //0x039A 
	unsigned char m_UseProtectedShields; //0x039B 
	unsigned char m_ShowPlayerHealth; //0x039C 
	unsigned char m_UseSelfForSelfDestruct; //0x039D 
	unsigned char m_RandomPreDestruction; //0x039E 
	unsigned char m_BypassPreDestruction; //0x039F 
	unsigned char m_DestroyAllComponentsOnDestroyed; //0x03A0 
	unsigned char m_ForegroundRenderCockpitMesh; //0x03A1 
	unsigned char m_MotionBlurMask; //0x03A2 
	unsigned char m_TransparentWithEmittersEnable; //0x03A3 
	unsigned char m_SuppressDamageByPassengers; //0x03A4 
	unsigned char m_AllowClientSideSimulation; //0x03A5 
	unsigned char m_TriggerVehicleDetonation; //0x03A6 
	unsigned char m_IsAffectedByEMP; //0x03A7 
	unsigned char m_CanBeRepaired; //0x03A8 
	unsigned char m_CanTakeDynamicFireDamage; //0x03A9 
	unsigned char m_AlwaysDealCollisionDamage; //0x03AA 
	unsigned char m_HasExclusiveEntries; //0x03AB 
	unsigned char m_OnlyCreatorCanEnter; //0x03AC 
	unsigned char m_AllowExclusiveEntryPassThrough; //0x03AD 
	unsigned char m_ProhibitEntrySwitching; //0x03AE 
	unsigned char m_ThrowOutSoldierInsideOnWaterDamage; //0x03AF 
	unsigned char m_DeadSoldiersCanBeThrownOut; //0x03B0 
	unsigned char m_IgnoreSoldierCollisionNormal; //0x03B1 
	unsigned char m_ChoseExitPointByDirection; //0x03B2 
	unsigned char m_EnterAllowed; //0x03B3 
	unsigned char m_SpawnAllowed; //0x03B4 
	unsigned char m_ExitAllowed; //0x03B5 
	unsigned char m_EnableGroundmapLighting; //0x03B6 
	unsigned char m_IsLockable; //0x03B7 
	unsigned char m_NeverReportVehicleAsEmpty; //0x03B8 
	unsigned char m_AITarget; //0x03B9 
	unsigned char m_UseLowAltitudeHeatSignature; //0x03BA 
	unsigned char m_UseSpottingTargetComponentForRaycast; //0x03BB 
	unsigned char m_EquipmentFakeVehicle; //0x03BC 
	unsigned char m_ExplosionPacksAttachable; //0x03BD 
	unsigned char m_DamageGiverOverrideOwnerVehicle; //0x03BE 
	unsigned char m_EnableSubRealm; //0x03BF 
	unsigned char m_UpdateWhenEmpty; //0x03C0 
	unsigned char m_UseStaticBoundingBox; //0x03C1 
	unsigned char m_StickyToEdgeInMap; //0x03C2 
	unsigned char m_CausesAIToFlee; //0x03C3 
	unsigned char m_ForceNetworkingInclusion; //0x03C4 
char _0x03C5[0x0023];

};//Size=0x03E8

class ClientSoldierBreathControlComponent : public ClientGameComponent
{
public:
	char _0x0038[0x0020];
	float m_Breath; //0x0058 
char _0x005C[0x006C];

};//Size=0x00C8

class VehicleHealthComponentData : public ControllableHealthComponentData
{
public:
	float m_ForceMinDamageAngleRadius; //0x0070 
	unsigned char m_WhenRepairingVehicleAlsoRepairAllParts; //0x0074 
char _0x0075[0x000B];

};//Size=0x0080

class ClientSoldierEntity : public ClientCharacterEntity
{
public:
	char _0x0300[0x0190];
	BFClientSoldierPhysicsComponent* m_pBFClientSoldierPhysicsComponent; //0x0490 
	char _0x0498[0x0100];
	ClientSoldierPrediction* m_ClientSoldierPrediction; //0x0598 
	char _0x05A0[0x0014];
	float m_AuthorativeYaw; //0x05B4 
	char _0x05B8[0x002C];
	float m_AuthorativePitch; //0x05E4 
	unsigned char m_PoseState; //0x05E8 
	char _0x05E9[0x005F];
	ClientSoldierWeaponsComponent* m_ClientSoldierWeaponsComponent; //0x0648 
	char _0x0650[0x0008];
	ClientSoldierBreathControlComponent* m_ClientSoldierBreathControlComponent; //0x0658 
	char _0x0660[0x0008];
	ClientAimEntity* m_ClientAimEntity; //0x0668 
	char _0x0670[0x0028];
	unsigned char m_Sprinting; //0x0698 
	char _0x0699[0x0002];
	unsigned char m_Occluded; //0x069B 
char _0x069C[0x02D4];

bool GetBonePos(unsigned int bone_id, D3DXVECTOR3& out)
{
	*reinterpret_cast< byte* >(reinterpret_cast< uintptr_t >(this) + 0x1A) = 161;
	auto ragdoll_component = *reinterpret_cast< uintptr_t* >(reinterpret_cast< uintptr_t >(this) + 0x460);

	if (!IsValidPtr((PVOID)ragdoll_component))
		return false;

	auto quat = *reinterpret_cast< uintptr_t* >(ragdoll_component + 0x20);

	if (!IsValidPtr((PVOID)quat))
		return false;

	D3DXVECTOR3 tmp;
	tmp = *reinterpret_cast< D3DXVECTOR3* >(quat + bone_id * 0x20);
	out.x = tmp.x;
	out.y = tmp.y;
	out.z = tmp.z;

	return true;
}

bool IsAlive()
{
	return IsValidPtr(m_HealthComponent) && m_HealthComponent->m_SoldierCurHealth > 0.0f;
}

bool IsVisible()
{
	return !m_Occluded;
}

ClientSoldierWeapon* GetSoldierWeapon()
{
	if (IsValidPtr(m_ClientSoldierWeaponsComponent))
	{
		auto pHandler = m_ClientSoldierWeaponsComponent->m_ActiveWeaponHandler;

		if (IsValidPtr(pHandler))
		{
			auto pWeapon = pHandler->m_ClientSoldierWeapon;

			if (IsValidPtr(pWeapon))
			{
				return pWeapon;
			}
		}
	}

	return NULL;
}
};//Size=0x0970

class ClientSoldierPrediction
{
public:
	char _0x0000[0x0040];
	D3DXVECTOR3 m_Position; //0x0040 
	char _0x004C[0x0014];
	D3DXVECTOR3 m_Velocity; //0x0060 
	char _0x006C[0x0048];
	unsigned char m_PositionState; //0x00B4 

};//Size=0x00B5

class VehicleInaccuracySettings : public DataContainer
{
public:
	float m_MinAimAngle; //0x0010 
	float m_MaxAimAngle; //0x0014 
	float m_AccuracyIncreaseSpeed; //0x0018 
	float m_AccuracyDecreaseSpeed; //0x001C 
	unsigned char m_ResetOnReTarget; //0x0020 
char _0x0021[0x0007];

};//Size=0x0028

class ClientSoldierWeapon : public ClientGameComponentEntity
{
public:
	char _0x0070[0x4930];
	ClientAimingSimulation* m_AimingSimulation; //0x49A0 
	char _0x49A8[0x0070];
	ClientWeapon* m_ClientWeapon; //0x4A18 
	char _0x4A20[0x0010];
	WeaponFiring* m_Primary; //0x4A30 
char _0x4A38[0x0098];

	float GetBulletVelocity()
	{
		if (IsValidPtr(m_pClientWeapon)
		 && IsValidPtr(m_pClientWeapon->m_pWeaponFiringData)
		 && IsValidPtr(m_pClientWeapon->m_pWeaponFiringData->m_pFiringFunctionData))
				return m_pClientWeapon->m_pWeaponFiringData->m_pFiringFunctionData->m_initialSpeed;
		else 
				return -1.0f;
		
	}
	
	float GetBulletGravity()
	{
		if (IsValidPtr(m_pClientWeapon)
		 && IsValidPtr(m_pClientWeapon->m_pWeaponFiringData)
		 && IsValidPtr(m_pClientWeapon->m_pWeaponFiringData->m_pFiringFunctionData)
		 && IsValidPtr(m_pClientWeapon->m_pWeaponFiringData->m_pFiringFunctionData->m_pBulletEntityData))
				return m_pClientWeapon->m_pWeaponFiringData->m_pFiringFunctionData->m_pBulletEntityData->m_gravity;
		else
			return -1.0f;
	}
};//Size=0x4AD0

class ClientSoldierWeaponsComponent : public ClientGameComponent
{
public:
	char _0x0038[0x00B8];
	D3DXMATRIX m_Transform; //0x00F0 
	char _0x0130[0x0778];
	ClientAnimatedSoldierWeaponHandler* m_Handler; //0x08A8 
	char _0x08B0[0x0050];
	ClientActiveWeaonHandler* m_ActiveWeaponHandler; //0x0900 
	char _0x0908[0x0058];
	__int32 m_ActiveSlot; //0x0960 
	__int32 m_LastActiveSlot; //0x0964 
	__int32 m_LastGunIndex; //0x0968 
	char _0x096C[0x0028];
	__int32 m_CurrentZoomLevel; //0x0994 
	__int32 m_MaxZoomLevel; //0x0998 
char _0x099C[0x08E4];

};//Size=0x1280

class VehiclePhysicsActionData : public PhysicsActionData
{
public:
};//Size=0x0018

class ClientStanceFilterComponent : public ClientGameComponent
{
public:
char _0x0038[0x0088];

};//Size=0x00C0

class VehicleSoundData : public DataContainer
{
public:
	SoundAsset* m_BulletImpact; //0x0010 

};//Size=0x0018

class VehicleSpawnReferenceObjectData : public SpawnReferenceObjectData
{
public:
	float m_WreckDuration; //0x0190 
	EntryEnterRestriction m_EnterRestriction; //0x0194 
	float m_BotBailWhenHealthBelow; //0x0198 
	float m_BotBailOutDelay; //0x019C 
	float m_RespawnRange; //0x01A0 
	float m_TimeUntilAbandoned; //0x01A4 
	float m_TimeUntilAbandonedIsDestroyed; //0x01A8 
	float m_KeepAliveRadius; //0x01AC 
	__int32 m_ActiveStanceEntryIndex; //0x01B0 
	__int32 m_ActiveStance; //0x01B4 
	float m_VehicleIsNearDistance; //0x01B8 
	__int32 m_VehicleType; //0x01BC 
	unsigned char m_SetTeamOnSpawn; //0x01C0 
	unsigned char m_AffectedByImpulse; //0x01C1 
	unsigned char m_AIAllowedToFollowHumanInVehicle; //0x01C2 
	unsigned char m_AIUseExitPoints; //0x01C3 
	unsigned char m_ApplyDamageToAbandonedVehicles; //0x01C4 
	unsigned char m_EnableAvailableSeatOutput; //0x01C5 
	unsigned char m_DisregardSpawnAllowedSetting; //0x01C6 
char _0x01C7[0x0009];

};//Size=0x01D0

class VeniceClientBulletEntity : public ClientBulletEntity
{
public:
};//Size=0x02F0

class VeniceClientSoldierCameraComponent : public ClientSoldierCameraComponent
{
public:
char _0x0410[0x0350];

};//Size=0x0760

class VeniceFPSCamera : public FPSCamera
{
public:
char _0x0190[0x0010];

};//Size=0x01A0

class VeniceFPSCameraData : public FPSCameraData
{
public:
	float m_SuppressionBlurAmountMultiplier; //0x00C0 
	float m_SuppressionBlurSizeMultiplier; //0x00C4 
char _0x00C8[0x0008];

};//Size=0x00D0

class VeniceUISettings : public SystemSettings
{
public:
	char* m_MetaDataAssetPath; //0x0020 
	char* m_IMSettingsAssetPath; //0x0028 
	char* m_LoadingTransitionTexturePath; //0x0030 
	char* m_SavingTransitionTexturePath; //0x0038 
	char* m_PlatformOverride; //0x0040 
	char* m_PopupNoButtonAssetPath; //0x0048 
	char* m_Popup1ButtonAssetPath; //0x0050 
	char* m_Popup2ButtonAssetPath; //0x0058 
	char* m_Popup3ButtonAssetPath; //0x0060 
	char* m_PopupProgressBarAssetPath; //0x0068 
	char* m_TwinkleWidgetPath; //0x0070 
	char* m_TwinkleScreenPath; //0x0078 
	BFUIStaticBundlesAsset* m_StaticBundle; //0x0080 
	void** m_SingleplayerEpisodes; //0x0088 
	void** m_KeybindingStrings; //0x0090 
	unsigned char m_ShowBuildInfo; //0x0098 
	unsigned char m_RandomizeBuildInfoLocation; //0x0099 
	unsigned char m_HideBuildInfoOnLevel; //0x009A 
	unsigned char m_GetStatsInOnlineFlow; //0x009B 
	unsigned char m_IsDemoMode; //0x009C 
	unsigned char m_ShowConnectionHUDIcons; //0x009D 
	unsigned char m_LoadingMoviesEnabled; //0x009E 
	unsigned char m_UseRimeFrontend; //0x009F 
	unsigned char m_EnableFrontendDevMenu; //0x00A0 
	unsigned char m_EnableFrontendStartupMovies; //0x00A1 
	unsigned char m_UseSparta; //0x00A2 
	unsigned char m_UseDeploy3D; //0x00A3 
	unsigned char m_IsCustomizeEnabled; //0x00A4 
	unsigned char m_AutoDeployEnabled; //0x00A5 
	unsigned char m_QuitToFrontend; //0x00A6 
	unsigned char m_UseNewScoreboard; //0x00A7 
	unsigned char m_UseSquadboard; //0x00A8 
	unsigned char m_UsePrototypeHUD; //0x00A9 
	unsigned char m_IsCashTestEnabled; //0x00AA 
	unsigned char m_UseSquadSelectionFlow; //0x00AB 
	unsigned char m_UseNewCustomizationScreen; //0x00AC 
	unsigned char m_UseSchematicHitIndicator; //0x00AD 
	unsigned char m_UseOptionsPrototype; //0x00AE 
	unsigned char m_UseVehicleInfoHUD; //0x00AF 

};//Size=0x00B0

class VeniceVehicleCustomizationAsset : public VehicleCustomizationAsset
{
public:
	VehicleCategory m_Category; //0x0020 
	char _0x0024[0x0004];
	char* m_VehicleClassId; //0x0028 
	char* m_NameSid; //0x0030 
	char* m_ResourceName; //0x0038 
	__int32 m_SpacerIndex; //0x0040 
	char _0x0044[0x0004];
	char* m_KitOverride; //0x0048 

};//Size=0x0050

class VersionData : public Asset
{
public:
	char* m_disclaimer; //0x0018 
	__int32 m_Version; //0x0020 
	char _0x0024[0x0004];
	char* m_DateTime; //0x0028 
	char* m_BranchId; //0x0030 
	char* m_GameName; //0x0038 

};//Size=0x0040

class ViewHolder
{
public:
	char _0x0000[0x0008];
	float m_Yaw; //0x0008 
	float m_Pitch; //0x000C 
	char _0x0010[0x04B4];
	float N00DC896B; //0x04C4 
	float N00DC90AC; //0x04C8 
char _0x04CC[0x0434];

};//Size=0x0900

class VisionModifier : public DataContainer
{
public:
	float m_SensingConeRange; //0x0010 
	float m_SensingConeRangeAgainstVehicles; //0x0014 
	float m_SensingConeRangeWhenAlerted; //0x0018 
	float m_SensingConeAngle; //0x001C 
	float m_SensingConeAngleWhenAlerted; //0x0020 
	float m_SensingConeAngleAbove; //0x0024 
	float m_SensingConeAngleBelow; //0x0028 
	float m_SensingStaticTargetObjectDistance; //0x002C 
	float m_SensingMovingTargetObjectDistance; //0x0030 
	char _0x0034[0x0004];
	FlashlightModifier* m_FlashlightModifier; //0x0038 
	unsigned char m_AlwaysSeeHuman; //0x0040 
char _0x0041[0x0007];

};//Size=0x0048

class VisualEnvironmentBlueprint : public ObjectBlueprint
{
public:
	TimeDeltaType m_TimeDeltaType; //0x0048 
char _0x004C[0x0004];

};//Size=0x0050

class ClientUnlockComponent : public ClientGameComponent
{
public:
char _0x0038[0x0058];

};//Size=0x0090

class VoiceOverConversationQueueGroup : public DataContainer
{
public:
	char* m_Name; //0x0010 
	VoiceOverConversationQueueGroupPolyphony m_PolyphonyMode; //0x0018 
	DWORD m_Polyphony; //0x001C 

};//Size=0x0020

class ClientVehicleAimingSimulation
{
public:
	char _0x0000[0x0028];
	FPSAimer* m_pFPSAimer; //0x0028 
	char _0x0030[0x0148];
	DummyClass* m_rayObject; //0x0178 
	D3DXVECTOR3 m_rayVec; //0x0180 
	float m_rayLength; //0x018C 

};//Size=0x0190

class VoiceOverObject : public VoiceOverNamedValue
{
public:
	Array<VoiceOverNamedValue*>* m_Properties; //0x0020 

};//Size=0x0028

class VoiceOverPronunciation : public DataContainer
{
public:
	char* m_Name; //0x0010 
	AudioLanguage* m_PrimaryLanguage; //0x0018 
	AudioLanguage* m_SecondaryLanguage; //0x0020 
	VoiceOverPronunciationFallback m_SecondaryFallback; //0x0028 
char _0x002C[0x0004];

};//Size=0x0030

class VoiceOverSystemAsset : public Asset
{
public:
	Array<VoiceOverInterval*>* m_Intervals; //0x0018 
	Array<VoiceOverLabel*>* m_Labels; //0x0020 
	Array<VoiceOverObject*>* m_Types; //0x0028 
	Array<VoiceOverObject*>* m_Objects; //0x0030 
	Array<VoiceOverGlobalConstantValue*>* m_Constants; //0x0038 
	AudioLanguage* m_MasterLanguage; //0x0040 
	VoiceOverPronunciation* m_DefaultPronunciation; //0x0048 
	Array<VoiceOverPronunciation*>* m_Pronunciations; //0x0050 
	Array<VoiceOverConversationQueueGroup*>* m_QueueGroups; //0x0058 
	VoiceOverConversationQueueGroup* m_DefaultPositionedQueueGroup; //0x0060 
	VoiceOverConversationQueueGroup* m_DefaultUnpositionedQueueGroup; //0x0068 

};//Size=0x0070

class ClientVehicleEntity : public ClientControllableEntity
{
public:
	char _0x0200[0x0110];
	D3DXVECTOR3 m_Velocity; //0x0310 
	char _0x031C[0x015C];
	ClientChassisComponent* m_ClientChassisComponent; //0x0478 
char _0x0480[0x00E0];

	VehicleEntityData* GetVehicleData()
	{
		return (VehicleEntityData*)m_Data;
	}

	VeniceVehicleCustomizationAsset* GetVehicleCustomization()
	{
		VehicleEntityData* pVehicleData = GetVehicleData();

		if (IsValidPtr(pVehicleData))		
			return pVehicleData->m_HudData.m_VeniceVehicleCustomizationAsset;		

		return NULL;
	}

	const char* GetVehicleClassId()
	{
		VeniceVehicleCustomizationAsset* pVehicleCustomization = GetVehicleCustomization();
		
		if (IsValidPtr(pVehicleCustomization))	
			return pVehicleCustomization->m_VehicleClassId;		

		return NULL;
	}

	VehicleCategory GetVehicleCategory()
	{
		VeniceVehicleCustomizationAsset* pVehicleCustomization = GetVehicleCustomization();

		if (IsValidPtr(pVehicleCustomization))		
			return pVehicleCustomization->m_Category;		

		return VehicleCategory::VehicleCategory_Land;
	}
};//Size=0x0560

class WeakData
{
public:
char _0x0000[0x0040];

};//Size=0x0040

class WeakPtr
{
public:
	ClientSoldierEntity* m_Data; //0x0000 

};//Size=0x0008

class ClientVehicleSpawnEntity : public ClientSpawnEntity
{
public:
};//Size=0x0160

class ClientWeapon : public Weapon
{
public:
	char _0x01B0[0x0130];
	Firing* m_Firing; //0x02E0 
	char _0x02E8[0x0008];
	D3DXMATRIX m_Matrix; //0x02F0 
	float m_CameraFOV; //0x0330 
	float m_WeaponFOV; //0x0334 
	float m_FOVScaleFactor; //0x0338 
char _0x033C[0x0BB4];

};//Size=0x0EF0

class WeaponComponentData : public BoneComponentData
{
public:
	D3DXVECTOR3 m_ProjectileSpawnOffset; //0x0070 
	char _0x007C[0x0004];
	D3DXVECTOR3 m_TargetPositionOverride; //0x0080 
	char _0x008C[0x0004];
	LinearTransform m_Shootspace; //0x0090 
	LinearTransform m_BulletSpawnTransform; //0x00D0 
	WeaponFiringData* m_WeaponFiring; //0x0110 
	WeaponUnlockAsset* m_WeaponUnlock; //0x0118 
	char* m_DamageGiverName; //0x0120 
	GameAIWeaponData* m_AIData; //0x0128 
	WeaponData* m_CustomWeaponType; //0x0130 
	float m_ImpulseStrength; //0x0138 
	WeaponClassification m_Classification; //0x013C 
	float m_ReloadTimeMultiplier; //0x0140 
	float m_DamageMultiplier; //0x0144 
	float m_ExplosionDamageMultiplier; //0x0148 
	float m_OverheatDropPerSecondMultiplier; //0x014C 
	float m_LockTimeMultiplier; //0x0150 
	float m_LockingAcceptanceAngleMultiplier; //0x0154 
	DWORD m_WeaponItemHash; //0x0158 
	unsigned char m_SequentialFiring; //0x015C 
	unsigned char m_OverrideShootspace; //0x015D 
	unsigned char m_OverrideBulletSpawnTransform; //0x015E 
	unsigned char m_UseFirstPersonSounds; //0x015F 
	unsigned char m_SoundsEnabledTunguskaHack; //0x0160 
char _0x0161[0x000F];

};//Size=0x0170

class WeaponData : public ToolData
{
public:
	unsigned char m_ShowLaserPaintedVehicles; //0x0018 
char _0x0019[0x0007];

};//Size=0x0020

class ClientWeaponComponent : public ClientBoneComponent
{
public:
	char _0x0038[0x1D80];
	ClientWeapon* m_ClientWeapon; //0x1DB8 
	char _0x1DC0[0x0028];
	ClientPlayer* m_WeaponOwner; //0x1DE8 
	WeaponInfo* m_WeaponInfo; //0x1DF0 
	char _0x1DF8[0x0008];
	ClientDiceShooterVehicleEntryComponent* m_ClientDiceShooterVehicleEntryComponent; //0x1E00 
char _0x1E08[0x0058];

};//Size=0x1E60

class ClientWeaponHolder
{
public:
	char _0x0000[0x0008];
	ClientWeapon* m_ClientWeapon; //0x0008 
	char _0x0010[0x0008];
	ClientWeaponComponent* m_ClientWeaponComponent; //0x0018 

};//Size=0x0020

class WeaponFiring : public FiringPad
{
public:
	Firing N0015D46C; //0x0120 

};//Size=0x0280

class WeaponFiringData : public GameDataContainer
{
public:
	FiringFunctionData* m_PrimaryFire; //0x0010 
	float m_DeployTime; //0x0018 
	float m_ReactivateCooldownTime; //0x001C 
	float m_DisableZoomOnDeployTime; //0x0020 
	float m_DisableZoomOnAltDeployTime; //0x0024 
	float m_DisableZoomOnAutomaticSwitchbackDeployTime; //0x0028 
	float m_AltDeployTime; //0x002C 
	float m_DeployTimeForAutomaticSwitchback; //0x0030 
	__int32 m_AltDeployId; //0x0034 
	GunSwayData* m_GunSwayData; //0x0038 
	RumbleFiringData m_Rumble; //0x0040 
	float m_SupportDelayStand; //0x004C 
	float m_SupportDelayProne; //0x0050 
	unsigned char m_UseAutoAiming; //0x0054 
	unsigned char m_InflictSelfDamage; //0x0055 
	unsigned char m_ShowEnemyNametagOnAim; //0x0056 
	unsigned char m_ReloadWholeMags; //0x0057 
	unsigned char m_AbortReloadOnSprint; //0x0058 
	unsigned char m_UseRemoteDamageGiverInfo; //0x0059 
char _0x005A[0x0006];

};//Size=0x0060

class WeaponFiringHolder
{
public:
	char _0x0000[0x0008];
	WeaponFiring* m_WeaponFiring; //0x0008 

};//Size=0x0010

class WeaponHitProbability : public DataContainer
{
public:
	Array<Float32*>* m_DistanceToTarget; //0x0010 
	Array<Float32*>* m_DistanceProbability; //0x0018 
	Array<Float32*>* m_TargetVisibility; //0x0020 
	Array<Float32*>* m_VisibleProbability; //0x0028 

};//Size=0x0030

class WeaponInfo
{
public:
	virtual void Function0(); //
	virtual void Function1(); //
	virtual void Function2(); //
	virtual void Function3(); //
	virtual WeaponFiring* GetWeaponFiring(); //
	virtual ClientWeapon* GetWeapon(); //
	virtual WeaponComponent* GetWeaponComponent(); //
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
	virtual void Function24(); //
	virtual void Function25(); //
	virtual void Function26(); //
	virtual void Function27(); //
	virtual void Function28(); //
	virtual void Function29(); //
	virtual void Function30(); //
	virtual void Function31(); //
	virtual void Function32(); //
	virtual void Function33(); //
	virtual void Function34(); //
	virtual void Function35(); //
	virtual void Function36(); //
	virtual void Function37(); //
	virtual void Function38(); //
	virtual void Function39(); //
	virtual void Function40(); //
	virtual void Function41(); //
	virtual void Function42(); //
	virtual void Function43(); //
	virtual void Function44(); //
	virtual void Function45(); //
	virtual void Function46(); //
	virtual void Function47(); //
	virtual void Function48(); //
	virtual void Function49(); //
	virtual void Function50(); //
	virtual void Function51(); //
	virtual void Function52(); //
	virtual void Function53(); //
	virtual void Function54(); //
	virtual void Function55(); //
	virtual void Function56(); //
	virtual void Function57(); //
	virtual void Function58(); //
	virtual void Function59(); //
	virtual void Function60(); //
	virtual void Function61(); //
	virtual void Function62(); //
	virtual void Function63(); //
	virtual void Function64(); //
	virtual void Function65(); //
	virtual void Function66(); //
	virtual void Function67(); //
	virtual void Function68(); //
	virtual void Function69(); //
	virtual void Function70(); //
	virtual void Function71(); //
	virtual void Function72(); //
	virtual void Function73(); //
	virtual void Function74(); //
	virtual void Function75(); //
	virtual void Function76(); //
	virtual void Function77(); //
	virtual void Function78(); //
	virtual void Function79(); //
	virtual void Function80(); //
	virtual void Function81(); //
	virtual void Function82(); //
	virtual void Function83(); //
	virtual void Function84(); //
	virtual void Function85(); //
	virtual void Function86(); //
	virtual void Function87(); //
	virtual void Function88(); //
	virtual void Function89(); //
	virtual void Function90(); //
	virtual void Function91(); //
	virtual void Function92(); //
	virtual void Function93(); //
	virtual void Function94(); //
	virtual void Function95(); //
	virtual void Function96(); //
	virtual void Function97(); //
	virtual void Function98(); //
	virtual void Function99(); //
	virtual void Function100(); //
	virtual void Function101(); //
	virtual void Function102(); //
	virtual void Function103(); //
	virtual void Function104(); //
	virtual void Function105(); //
	virtual void Function106(); //
	virtual void Function107(); //
	virtual void Function108(); //
	virtual void Function109(); //
	virtual void Function110(); //
	virtual void Function111(); //
	virtual void Function112(); //
	virtual void Function113(); //
	virtual void Function114(); //
	virtual void Function115(); //
	virtual void Function116(); //
	virtual void Function117(); //
	virtual void Function118(); //
	virtual void Function119(); //
	virtual void Function120(); //
	virtual void Function121(); //
	virtual void Function122(); //
	virtual void Function123(); //
	virtual void Function124(); //
	virtual void Function125(); //
	virtual void Function126(); //
	virtual void Function127(); //
	virtual void Function128(); //
	virtual void Function129(); //
	virtual void Function130(); //
	virtual void Function131(); //
	virtual void Function132(); //
	virtual void Function133(); //
	virtual void Function134(); //
	virtual void Function135(); //
	virtual void Function136(); //
	virtual void Function137(); //
	virtual void Function138(); //
	virtual void Function139(); //
	virtual void Function140(); //
	virtual void Function141(); //
	virtual void Function142(); //
	virtual void Function143(); //
	virtual void Function144(); //
	virtual void Function145(); //
	virtual void Function146(); //
	virtual void Function147(); //
	virtual void Function148(); //
	virtual void Function149(); //
	virtual void Function150(); //
	virtual void Function151(); //
	virtual void Function152(); //
	virtual void Function153(); //
	virtual void Function154(); //
	virtual void Function155(); //
	virtual void Function156(); //
	virtual void Function157(); //
	virtual void Function158(); //
	virtual void Function159(); //
	virtual void Function160(); //
	virtual void Function161(); //
	virtual void Function162(); //
	virtual void Function163(); //
	virtual void Function164(); //
	virtual void Function165(); //
	virtual void Function166(); //
	virtual void Function167(); //
	virtual void Function168(); //
	virtual void Function169(); //
	virtual void Function170(); //
	virtual void Function171(); //
	virtual void Function172(); //
	virtual void Function173(); //
	virtual void Function174(); //
	virtual void Function175(); //
	virtual void Function176(); //
	virtual void Function177(); //
	virtual void Function178(); //
	virtual void Function179(); //
	virtual void Function180(); //
	virtual void Function181(); //
	virtual void Function182(); //
	virtual void Function183(); //
	virtual void Function184(); //
	virtual void Function185(); //
	virtual void Function186(); //
	virtual void Function187(); //
	virtual void Function188(); //
	virtual void Function189(); //
	virtual void Function190(); //
	virtual void Function191(); //
	virtual void Function192(); //
	virtual void Function193(); //
	virtual void Function194(); //
	virtual void Function195(); //
	virtual void Function196(); //
	virtual void Function197(); //
	virtual void Function198(); //
	virtual void Function199(); //
	virtual void Function200(); //
	virtual void Function201(); //
	virtual void Function202(); //
	virtual void Function203(); //
	virtual void Function204(); //
	virtual void Function205(); //
	virtual void Function206(); //
	virtual void Function207(); //
	virtual void Function208(); //
	virtual void Function209(); //
	virtual void Function210(); //
	virtual void Function211(); //
	virtual void Function212(); //
	virtual void Function213(); //
	virtual void Function214(); //
	virtual void Function215(); //
	virtual void Function216(); //
	virtual void Function217(); //
	virtual void Function218(); //
	virtual void Function219(); //
	virtual void Function220(); //
	virtual void Function221(); //
	virtual void Function222(); //
	virtual void Function223(); //
	virtual void Function224(); //
	virtual void Function225(); //
	virtual void Function226(); //
	virtual void Function227(); //
	virtual void Function228(); //
	virtual void Function229(); //
	virtual void Function230(); //
	virtual void Function231(); //
	virtual void Function232(); //
	virtual void Function233(); //
	virtual void Function234(); //
	virtual void Function235(); //
	virtual void Function236(); //
	virtual void Function237(); //
	virtual void Function238(); //
	virtual void Function239(); //
	virtual void Function240(); //
	virtual void Function241(); //
	virtual void Function242(); //
	virtual void Function243(); //
	virtual void Function244(); //
	virtual void Function245(); //
	virtual void Function246(); //
	virtual void Function247(); //
	virtual void Function248(); //
	virtual void Function249(); //
	virtual void Function250(); //
	virtual void Function251(); //
	virtual void Function252(); //
	virtual void Function253(); //
	virtual void Function254(); //
	virtual void Function255(); //
	virtual void Function256(); //
	virtual void Function257(); //
	virtual void Function258(); //
	virtual void Function259(); //
	virtual void Function260(); //
	virtual void Function261(); //
	virtual void Function262(); //
	virtual void Function263(); //
	virtual void Function264(); //
	virtual void Function265(); //
	virtual void Function266(); //
	virtual ClientStanceFilterComponent* GetStanceFilterComponent(); //
	virtual void Function268(); //
	virtual void Function269(); //
	virtual void Function270(); //
	virtual void Function271(); //
	virtual void Function272(); //
	virtual void Function273(); //
	virtual void Function274(); //
	virtual void Function275(); //
	virtual void Function276(); //
	virtual void Function277(); //
	virtual void Function278(); //
	virtual void Function279(); //
	virtual void Function280(); //
	virtual void Function281(); //
	virtual void Function282(); //
	virtual void Function283(); //
	virtual void Function284(); //
	virtual void Function285(); //
	virtual void Function286(); //
	virtual void Function287(); //
	virtual void Function288(); //
	virtual void Function289(); //
	virtual void Function290(); //
	virtual void Function291(); //
	virtual void Function292(); //
	virtual void Function293(); //
	virtual void Function294(); //
	virtual void Function295(); //
	virtual void Function296(); //
	virtual void Function297(); //
	virtual void Function298(); //
	virtual void Function299(); //
	virtual void Function300(); //
	virtual void Function301(); //
	virtual void Function302(); //
	virtual void Function303(); //
	virtual void Function304(); //
	virtual void Function305(); //
	virtual void Function306(); //
	virtual void Function307(); //
	virtual PlayerFilterEntityData* GetFilterEntityData(); //
	virtual void Function309(); //
	virtual void Function310(); //
	virtual void Function311(); //
	virtual void Function312(); //
	virtual void Function313(); //
	virtual void Function314(); //
	virtual void Function315(); //
	virtual void Function316(); //
	virtual void Function317(); //
	virtual void Function318(); //
	virtual void Function319(); //
	virtual void Function320(); //
	virtual void Function321(); //
	virtual void Function322(); //
	virtual void Function323(); //
	virtual void Function324(); //
	virtual void Function325(); //
	virtual void Function326(); //
	virtual void Function327(); //
	virtual void Function328(); //
	virtual void Function329(); //
	virtual void Function330(); //
	virtual void Function331(); //
	virtual void Function332(); //
	virtual void Function333(); //
	virtual void Function334(); //
	virtual void Function335(); //
	virtual void Function336(); //
	virtual void Function337(); //
	virtual void Function338(); //
	virtual void Function339(); //
	virtual void Function340(); //
	virtual void Function341(); //
	virtual void Function342(); //
	virtual void Function343(); //
	virtual void Function344(); //
	virtual void Function345(); //
	virtual void Function346(); //
	virtual void Function347(); //
	virtual void Function348(); //
	virtual void Function349(); //
	virtual void Function350(); //
	virtual void Function351(); //
	virtual void Function352(); //
	virtual void Function353(); //
	virtual void Function354(); //
	virtual void Function355(); //

	ClientWeaponComponent* m_ClientWeaponComponent; //0x0008 
	ClientWeaponHolder* m_ClientWeaponHolder; //0x0010 
	WeaponFiringHolder* m_WeaponFiringHolder; //0x0018 
	ClientStanceFilterComponent* m_ClientStanceFilterComponent; //0x0020 
char _0x0028[0x0008];

};//Size=0x0030

class WeaponMagazineModifier : public WeaponModifierBase
{
public:
	__int32 m_MagazineCapacity; //0x0018 
	__int32 m_NumberOfMagazines; //0x001C 

};//Size=0x0020

class WeaponModifier
{
public:
char _0x0000[0x0040];

};//Size=0x0040

class CollisionData : public DataContainer
{
public:
	Array<ValueAtX*>* m_DamageAtVerticalVelocity; //0x0010 
	Array<ValueAtX*>* m_DamageAtHorizVelocity; //0x0018 

};//Size=0x0020

class ColorCorrectionComponentData : public VisualEnvironmentComponentData
{
public:
	D3DXVECTOR3 m_Brightness; //0x0080 
	char _0x008C[0x0004];
	D3DXVECTOR3 m_Contrast; //0x0090 
	char _0x009C[0x0004];
	D3DXVECTOR3 m_Saturation; //0x00A0 
	char _0x00AC[0x0004];
	Realm m_Realm; //0x00B0 
	float m_Hue; //0x00B4 
	TextureAsset* m_ColorGradingTexture; //0x00B8 
	float m_ColorGradingMaxHdrValue; //0x00C0 
	char _0x00C4[0x0004];
	TextureAsset* m_HdrColorGradingLut; //0x00C8 
	unsigned char m_Enable; //0x00D0 
	unsigned char m_ColorGradingEnable; //0x00D1 
char _0x00D2[0x000E];

};//Size=0x00E0

class WeaponProjectileModifier : public WeaponModifierDynamicBase
{
public:
	ProjectileEntityData* m_ProjectileData; //0x0018 
	ProjectileBlueprint* m_Projectile; //0x0020 
	__int32 m_MaxCount; //0x0028 
char _0x002C[0x0004];

};//Size=0x0030

class WeaponRestrictions : public DataContainer
{
public:
	float m_FireDelayMin; //0x0010 
	float m_FireDelayMax; //0x0014 

};//Size=0x0018

class WeaponSettings : public SystemSettings
{
public:
	float m_ProjectileCullingHeightPadding; //0x0020 
	unsigned char m_EnableProjectileCulling; //0x0024 
char _0x0025[0x0003];

};//Size=0x0028

class WeaponSuppressionData : public DataContainer
{
public:
	float m_MaxMultiplier; //0x0010 
	float m_MinMultiplier; //0x0014 
	float m_MinDistance; //0x0018 
	float m_MaxDistance; //0x001C 

};//Size=0x0020

class ComponentTable
{
public:
	ClientVehicleEntity* m_Entity; //0x0000 
	unsigned char m_Count; //0x0008 
	unsigned char N0107B3AF; //0x0009 
	unsigned char m_Unknown; //0x000A 
	char _0x000B[0x0005];
	ComponentTulpe m_Components[0x0095]; //0x0010 

};//Size=0x12B0

class ComponentTulpe
{
public:
	char _0x0000[0x0008];
	DWORD m_Flag; //0x0008 &8 == active
	char _0x000C[0x0004];
	ClientAimRotationBoneComponent* m_ClientAimRotationBoneComponent; //0x0010 
char _0x0018[0x0008];

};//Size=0x0020

class WeaponZoomLevelData : public DataContainer
{
public:
	float m_RenderFov; //0x0010 
	char _0x0014[0x0004];
	FOVTransitionData* m_RenderFovTransition; //0x0018 
	Array<Float32*>* m_ZoomInOutMeshTransitionFactors; //0x0020 
	float m_ZoomDisabledTransitionTimer; //0x0028 
	SightType m_SightType; //0x002C 
	WeaponAnimationSettingsData m_AnimationSettings; //0x0030 
	char _0x0064[0x0004];
	VisualEnvironmentBlueprint* m_ZoomLevelVisualEnvironment; //0x0068 

};//Size=0x0070

class WeaponZoomLevelModifier : public WeaponModifierBase
{
public:
	__int32 m_ZoomLevelIndex; //0x0018 
	char _0x001C[0x0004];
	ZoomLevelData* m_ZoomLevel; //0x0020 
	WeaponZoomLevelData* m_WeaponZoomLevel; //0x0028 

};//Size=0x0030

class CompositeMeshAsset : public MeshAsset
{
public:
	unsigned char m_PartGrouping; //0x0080 
char _0x0081[0x0007];

};//Size=0x0088

class WindowSettings : public SystemSettings
{
public:
	__int32 m_PosX; //0x0020 
	__int32 m_PosY; //0x0024 
	DWORD m_Width; //0x0028 
	DWORD m_Height; //0x002C 
	unsigned char m_AutoSize; //0x0030 
	unsigned char m_FullscreenAutoSize; //0x0031 
	unsigned char m_EnableEscape; //0x0032 
	unsigned char m_EnableInputOnActivate; //0x0033 
	unsigned char m_HibernateOnClose; //0x0034 
	unsigned char m_Hidden; //0x0035 
	unsigned char m_Minimized; //0x0036 
	unsigned char m_AllowWindowsLargerThanDesktop; //0x0037 
	unsigned char m_Borderless; //0x0038 
	unsigned char m_Layered; //0x0039 
	unsigned char m_ClipChildren; //0x003A 
char _0x003B[0x0005];

};//Size=0x0040

class ConsoleCommandTriggerEntityData : public EntityData
{
public:
	char* m_CommandName; //0x0018 
	char* m_GroupName; //0x0020 
	Realm m_Realm; //0x0028 
char _0x002C[0x0004];

};//Size=0x0030

class ZoomLevelData : public DataContainer
{
public:
	float m_FieldOfView; //0x0010 
	float m_FieldOfViewSP; //0x0014 
	FOVTransitionData* m_FieldOfViewTransition; //0x0018 
	float m_LookSpeedMultiplier; //0x0020 
	float m_SprintLookSpeedMultiplier; //0x0024 
	ProfileOptionDataFloat* m_LookSpeedSensitivityProfileOption; //0x0028 
	float m_MoveSpeedMultiplier; //0x0030 
	float m_SwayPitchMagnitude; //0x0034 
	float m_SwayYawMagnitude; //0x0038 
	float m_SupportedSwayPitchMagnitude; //0x003C 
	float m_SupportedSwayYawMagnitude; //0x0040 
	float m_SuppressedSwayPitchMagnitude; //0x0044 
	float m_SuppressedSwayYawMagnitude; //0x0048 
	float m_SuppressedSwayMinFactor; //0x004C 
	float m_TimePitchMultiplier; //0x0050 
	float m_TimeYawMultiplier; //0x0054 
	float m_DispersionMultiplier; //0x0058 
	float m_DispersionRotation; //0x005C 
	float m_RecoilMultiplier; //0x0060 
	float m_RecoilFovMultiplier; //0x0064 
	float m_CameraImpulseMultiplier; //0x0068 
	float m_StartFadeToBlackAtTime; //0x006C 
	float m_FadeToBlackDuration; //0x0070 
	float m_StartFadeFromBlackAtTime; //0x0074 
	float m_FadeFromBlackDuration; //0x0078 
	float m_ScreenExposureAreaScale; //0x007C 
	ZoomLevelActivateEventType m_OnActivateEventType; //0x0080 
	float m_AttractYawStrength; //0x0084 
	float m_AttractPitchStrength; //0x0088 
	unsigned char m_AllowFieldOfViewScaling; //0x008C 
	unsigned char m_FadeToBlackInZoomTransition; //0x008D 
	unsigned char m_UseFovSpecialisation; //0x008E 
	unsigned char m_UseWeaponMeshZoom1p; //0x008F 

};//Size=0x0090