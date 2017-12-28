#pragma once

// PLAYERUNKNOWN'S BATTLEGROUNDS (2.4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum TslGame.EPopupButtonID
enum class EPopupButtonID
{
	EPopupButtonID__Cancel_Or_No   = 0,
	EPopupButtonID__Yes_Or_OK      = 1,
	EPopupButtonID__EPopupButtonID_MAX = 2
};


// Enum TslGame.ESystemMessageType
enum class ESystemMessageType
{
	ESystemMessageType__Debug      = 0,
	ESystemMessageType__Notify     = 1,
	ESystemMessageType__Warning    = 2,
	ESystemMessageType__Error      = 3,
	ESystemMessageType__Important  = 4,
	ESystemMessageType__ESystemMessageType_MAX = 5
};


// Enum TslGame.EDamageReason
enum class EDamageReason
{
	EDamageReason__None            = 0,
	EDamageReason__HeadShot        = 1,
	EDamageReason__TorsoShot       = 2,
	EDamageReason__PelvisShot      = 3,
	EDamageReason__ArmShot         = 4,
	EDamageReason__LegShot         = 5,
	EDamageReason__NonSpecific     = 6,
	EDamageReason__EDamageReason_MAX = 7
};


// Enum TslGame.EDamageTypeCategory
enum class EDamageTypeCategory
{
	EDamageTypeCategory__Damage_None = 0,
	EDamageTypeCategory__Damage_Instant = 1,
	EDamageTypeCategory__Damage_Gun = 2,
	EDamageTypeCategory__Damage_Melee = 3,
	EDamageTypeCategory__Damage_ZombieMelee = 4,
	EDamageTypeCategory__Damage_Groggy = 5,
	EDamageTypeCategory__Damage_BlueZone = 6,
	EDamageTypeCategory__Damage_VehicleHit = 7,
	EDamageTypeCategory__Damage_Molotov = 8,
	EDamageTypeCategory__Damage_Explosion = 9,
	EDamageTypeCategory__Damage_Explosion_Grenade = 10,
	EDamageTypeCategory__Damage_Explosion_RedZone = 11,
	EDamageTypeCategory__Damage_Explosion_Vehicle = 12,
	EDamageTypeCategory__Damage_Instant_Fall = 13,
	EDamageTypeCategory__Damage_Drown = 14,
	EDamageTypeCategory__Damage_MAX = 15
};


// Enum TslGame.EThrownWeaponType
enum class EThrownWeaponType
{
	EThrownWeaponType__Thrown_Grenade = 0,
	EThrownWeaponType__Thrown_Molotov = 1,
	EThrownWeaponType__Thrown_Other = 2,
	EThrownWeaponType__Thrown_MAX  = 3
};


// Enum TslGame.EPowerUpType
enum class EPowerUpType
{
	PowerUp_None                   = 0,
	Powerup_Bandage                = 1,
	PowerUp_FirstAid               = 2,
	Powerup_Medkit                 = 3,
	PowerUp_EnergyDrink            = 4,
	Powerup_Painkillers            = 5,
	PowerUp_Adrenaline             = 6,
	PowerUp_MAX                    = 7,
	EPowerUpType_MAX               = 8
};


// Enum TslGame.ECastAnim
enum class ECastAnim
{
	ECastAnim__None                = 0,
	ECastAnim__Bandage             = 1,
	ECastAnim__FirstAid            = 2,
	ECastAnim__Medkit              = 3,
	ECastAnim__EnergyDrink         = 4,
	ECastAnim__Painkiller          = 5,
	ECastAnim__Adrenaline          = 6,
	ECastAnim__Door                = 7,
	ECastAnim__ECastAnim_MAX       = 8
};


// Enum TslGame.EServerStatType
enum class EServerStatType
{
	UE                             = 0,
	NET                            = 1,
	EServerStatType_MAX            = 2
};


// Enum TslGame.EWelcomeState
enum class EWelcomeState
{
	EWelcomeState__CopyrightAndWarning = 0,
	EWelcomeState__PressAKey       = 1,
	EWelcomeState__NowLoading      = 2,
	EWelcomeState__EWelcomeState_MAX = 3
};


// Enum TslGame.EPopupStyle
enum class EPopupStyle
{
	EPopupStyle__Ok_Cancel         = 0,
	EPopupStyle__Ok                = 1,
	EPopupStyle__Yes_No            = 2,
	EPopupStyle__EPopupStyle_MAX   = 3
};


// Enum TslGame.EAnimatableCustomizableTypes
enum class EAnimatableCustomizableTypes
{
	EAnimatableCustomizableTypes__Hair = 0,
	EAnimatableCustomizableTypes__Outer = 1,
	EAnimatableCustomizableTypes__Legs = 2,
	EAnimatableCustomizableTypes__EAnimatableCustomizableTypes_MAX = 3
};


// Enum TslGame.ELobbyBlurChangingStates
enum class ELobbyBlurChangingStates
{
	ELobbyBlurChangingStates__AlwaysOff = 0,
	ELobbyBlurChangingStates__AlwaysOn = 1,
	ELobbyBlurChangingStates__ELobbyBlurChangingStates_MAX = 2
};


// Enum TslGame.ELobbyCameraStates
enum class ELobbyCameraStates
{
	ELobbyCameraStates__XBox_Home  = 0,
	ELobbyCameraStates__Main       = 1,
	ELobbyCameraStates__Main01     = 2,
	ELobbyCameraStates__Menu       = 3,
	ELobbyCameraStates__Custom     = 4,
	ELobbyCameraStates__Custom01   = 5,
	ELobbyCameraStates__None       = 6,
	ELobbyCameraStates__ELobbyCameraStates_MAX = 7
};


// Enum TslGame.EUiShowType
enum class EUiShowType
{
	EUiShowType__AlwaysShow        = 0,
	EUiShowType__TpsOnlyShow       = 1,
	EUiShowType__FpsOnlyShow       = 2,
	EUiShowType__AlwaysHide        = 3,
	EUiShowType__EUiShowType_MAX   = 4
};


// Enum TslGame.EKeyGuideShowCases
enum class EKeyGuideShowCases
{
	EKeyGuideShowCases__Reload     = 0,
	EKeyGuideShowCases__ExitVehicle = 1,
	EKeyGuideShowCases__EKeyGuideShowCases_MAX = 2
};


// Enum TslGame.ETslInputModes
enum class ETslInputModes
{
	ETslInputModes__Toggle         = 0,
	ETslInputModes__Hold           = 1,
	ETslInputModes__DoubleTap      = 2,
	ETslInputModes__ETslInputModes_MAX = 3
};


// Enum TslGame.EGameplayClientReplay
enum class EGameplayClientReplay
{
	EGameplayClientReplay__Replay  = 0,
	EGameplayClientReplay__Killcam = 1,
	EGameplayClientReplay__EGameplayClientReplay_MAX = 2
};


// Enum TslGame.EGameplayFunctionalities
enum class EGameplayFunctionalities
{
	EGameplayFunctionalities__FreeLookInterp = 0,
	EGameplayFunctionalities__EGameplayFunctionalities_MAX = 1
};


// Enum TslGame.EInputModeSettingActions
enum class EInputModeSettingActions
{
	EInputModeSettingActions__Crouch = 0,
	EInputModeSettingActions__Prone = 1,
	EInputModeSettingActions__Walk = 2,
	EInputModeSettingActions__Sprint = 3,
	EInputModeSettingActions__HoldRotation = 4,
	EInputModeSettingActions__HoldBreath = 5,
	EInputModeSettingActions__Peek = 6,
	EInputModeSettingActions__Map  = 7,
	EInputModeSettingActions__ADS  = 8,
	EInputModeSettingActions__Aim  = 9,
	EInputModeSettingActions__EInputModeSettingActions_MAX = 10
};


// Enum TslGame.EKeyBindingSlot
enum class EKeyBindingSlot
{
	EKeyBindingSlot__FirstKey      = 0,
	EKeyBindingSlot__SecondKey     = 1,
	EKeyBindingSlot__EKeyBindingSlot_MAX = 2
};


// Enum TslGame.EReportCause
enum class EReportCause
{
	EReportCause__Default          = 0,
	EReportCause__Cheat            = 1,
	EReportCause__TeamKill         = 2,
	EReportCause__Teaming          = 3,
	EReportCause__InappropriateID  = 4,
	EReportCause__EReportCause_MAX = 5
};


// Enum TslGame.ESubjectToReport
enum class ESubjectToReport
{
	ESubjectToReport__Killer       = 0,
	ESubjectToReport__Spectating_Player = 1,
	ESubjectToReport__ESubjectToReport_MAX = 2
};


// Enum TslGame.ECarePackageIconType
enum class ECarePackageIconType
{
	ECarePackageIconType__Normal   = 0,
	ECarePackageIconType__Flying   = 1,
	ECarePackageIconType__Opened   = 2,
	ECarePackageIconType__ECarePackageIconType_MAX = 3
};


// Enum TslGame.ECharacterIconType
enum class ECharacterIconType
{
	ECharacterIconType__Normal     = 0,
	ECharacterIconType__Vehicle    = 1,
	ECharacterIconType__Parachute  = 2,
	ECharacterIconType__Die        = 3,
	ECharacterIconType__Groggy     = 4,
	ECharacterIconType__Quitter    = 5,
	ECharacterIconType__Observer   = 6,
	ECharacterIconType__ECharacterIconType_MAX = 7
};


// Enum TslGame.EObserverCameraMode
enum class EObserverCameraMode
{
	EObserverCameraMode__FixedCamera = 0,
	EObserverCameraMode__FreeCamera = 1,
	EObserverCameraMode__PlayerCamera = 2,
	EObserverCameraMode__FollowCamera = 3,
	EObserverCameraMode__EObserverCameraMode_MAX = 4
};


// Enum TslGame.EObserverAuthorityType
enum class EObserverAuthorityType
{
	EObserverAuthorityType__None   = 0,
	EObserverAuthorityType__FromBeginning = 1,
	EObserverAuthorityType__AfterDeath = 2,
	EObserverAuthorityType__AfterExtermination = 3,
	EObserverAuthorityType__EObserverAuthorityType_MAX = 4
};


// Enum TslGame.EValueType
enum class EValueType
{
	EValueType__Float              = 0,
	EValueType__Int                = 1,
	EValueType__String             = 2,
	EValueType__Bool               = 3,
	EValueType__EValueType_MAX     = 4
};


// Enum TslGame.EQualityType
enum class EQualityType
{
	EQualityType__EMainQuality     = 0,
	EQualityType__EViewDistanceQuality = 1,
	EQualityType__EShadowQuality   = 2,
	EQualityType__EAntiAliasingQuality = 3,
	EQualityType__ETextureQuality  = 4,
	EQualityType__EVisualEffectQuality = 5,
	EQualityType__EPostProcessingQuality = 6,
	EQualityType__EFoliageQuality  = 7,
	EQualityType__EQualityType_MAX = 8
};


// Enum TslGame.ENearClippingLevel
enum class ENearClippingLevel
{
	ENearClippingLevel__Default    = 0,
	ENearClippingLevel__Low        = 1,
	ENearClippingLevel__Middle     = 2,
	ENearClippingLevel__High       = 3,
	ENearClippingLevel__ENearClippingLevel_MAX = 4
};


// Enum TslGame.EThingSpotGroupType
enum class EThingSpotGroupType
{
	EThingSpotGroupType__GroupA    = 0,
	EThingSpotGroupType__GroupB    = 1,
	EThingSpotGroupType__GroupC    = 2,
	EThingSpotGroupType__GroupD    = 3,
	EThingSpotGroupType__GroupE    = 4,
	EThingSpotGroupType__GroupF    = 5,
	EThingSpotGroupType__GroupG    = 6,
	EThingSpotGroupType__GroupH    = 7,
	EThingSpotGroupType__GroupI    = 8,
	EThingSpotGroupType__GroupJ    = 9,
	EThingSpotGroupType__GroupK    = 10,
	EThingSpotGroupType__GroupL    = 11,
	EThingSpotGroupType__GroupM    = 12,
	EThingSpotGroupType__GroupN    = 13,
	EThingSpotGroupType__EThingSpotGroupType_MAX = 14
};


// Enum TslGame.EPhysMaterialType
enum class EPhysMaterialType
{
	EPhysMaterialType__Unknown     = 0,
	EPhysMaterialType__Asphalt     = 1,
	EPhysMaterialType__Dirt        = 2,
	EPhysMaterialType__Water       = 3,
	EPhysMaterialType__Wood        = 4,
	EPhysMaterialType__Stone       = 5,
	EPhysMaterialType__Metal       = 6,
	EPhysMaterialType__EPhysMaterialType_MAX = 7
};


// Enum TslGame.EEquipableItemSoundType
enum class EEquipableItemSoundType
{
	EEquipableItemSoundType__None  = 0,
	EEquipableItemSoundType__Vest  = 1,
	EEquipableItemSoundType__LongCoat = 2,
	EEquipableItemSoundType__HipSack = 3,
	EEquipableItemSoundType__Cloth = 4,
	EEquipableItemSoundType__BackPack = 5,
	EEquipableItemSoundType__MilitaryShoes = 6,
	EEquipableItemSoundType__Sneakers = 7,
	EEquipableItemSoundType__EEquipableItemSoundType_MAX = 8
};


// Enum TslGame.EEquipableItemSoundGroup
enum class EEquipableItemSoundGroup
{
	EEquipableItemSoundGroup__Default = 0,
	EEquipableItemSoundGroup__Shoes = 1,
	EEquipableItemSoundGroup__EEquipableItemSoundGroup_MAX = 2
};


// Enum TslGame.EColorBlindType
enum class EColorBlindType
{
	EColorBlindType__Normal        = 0,
	EColorBlindType__Deuteranopia  = 1,
	EColorBlindType__Protanopia    = 2,
	EColorBlindType__Tritanopia    = 3,
	EColorBlindType__EColorBlindType_MAX = 4
};


// Enum TslGame.ETslPhysMaterialType
enum class ETslPhysMaterialType
{
	ETslPhysMaterialType__Unknown  = 0,
	ETslPhysMaterialType__Concrete = 1,
	ETslPhysMaterialType__Dirt     = 2,
	ETslPhysMaterialType__Water    = 3,
	ETslPhysMaterialType__Metal    = 4,
	ETslPhysMaterialType__Wood     = 5,
	ETslPhysMaterialType__Grass    = 6,
	ETslPhysMaterialType__Glass    = 7,
	ETslPhysMaterialType__Flesh    = 8,
	ETslPhysMaterialType__ETslPhysMaterialType_MAX = 9
};


// Enum TslGame.ETargetingType
enum class ETargetingType
{
	ETargetingType__Targeting_None = 0,
	ETargetingType__Targeting_Aiming = 1,
	ETargetingType__Targeting_Scoping = 2,
	ETargetingType__Targeting_MAX  = 3
};


// Enum TslGame.EAccessorySlot
enum class EAccessorySlot
{
	EAccessorySlot__Slot_Primary   = 0,
	EAccessorySlot__Slot_Secondary = 1,
	EAccessorySlot__Slot_SideArm   = 2,
	EAccessorySlot__Slot_Melee     = 3,
	EAccessorySlot__Slot_Thrown    = 4,
	EAccessorySlot__Slot_MAX       = 5
};


// Enum TslGame.EWeaponClass
enum class EWeaponClass
{
	EWeaponClass__Class_Pistol     = 0,
	EWeaponClass__Class_SMG        = 1,
	EWeaponClass__Class_Rifle      = 2,
	EWeaponClass__Class_Carbine    = 3,
	EWeaponClass__Class_Shotgun    = 4,
	EWeaponClass__Class_Sniper     = 5,
	EWeaponClass__Class_DMR        = 6,
	EWeaponClass__Class_LMG        = 7,
	EWeaponClass__Class_Melee      = 8,
	EWeaponClass__Class_Throwable  = 9,
	EWeaponClass__Class_MAX        = 10
};


// Enum TslGame.EAttachmentCalculateType
enum class EAttachmentCalculateType
{
	EAttachmentCalculateType__Addition = 0,
	EAttachmentCalculateType__Multiply = 1,
	EAttachmentCalculateType__EAttachmentCalculateType_MAX = 2
};


// Enum TslGame.EFiringMode
enum class EFiringMode
{
	EFiringMode__Normal            = 0,
	EFiringMode__Burst             = 1,
	EFiringMode__FullAuto          = 2,
	EFiringMode__EFiringMode_MAX   = 3
};


// Enum TslGame.EWeaponHand
enum class EWeaponHand
{
	EWeaponHand__Left              = 0,
	EWeaponHand__Right             = 1,
	EWeaponHand__EWeaponHand_MAX   = 2
};


// Enum TslGame.EAnimWeaponType
enum class EAnimWeaponType
{
	EAnimWeaponType__None          = 0,
	EAnimWeaponType__Rifle         = 1,
	EAnimWeaponType__Pistol        = 2,
	EAnimWeaponType__Throwable     = 3,
	EAnimWeaponType__Melee         = 4,
	EAnimWeaponType__EAnimWeaponType_MAX = 5
};


// Enum TslGame.ECameraViewBehaviour
enum class ECameraViewBehaviour
{
	ECameraViewBehaviour__FpsAndTps = 0,
	ECameraViewBehaviour__FpsOnly  = 1,
	ECameraViewBehaviour__TpsOnly  = 2,
	ECameraViewBehaviour__ECameraViewBehaviour_MAX = 3
};


// Enum TslGame.EMatchStartType
enum class EMatchStartType
{
	EMatchStartType__Normal        = 0,
	EMatchStartType__Airborne      = 1,
	EMatchStartType__EMatchStartType_MAX = 2
};


// Enum TslGame.EGender
enum class EGender
{
	EGender__Male                  = 0,
	EGender__Female                = 1,
	EGender__EGender_MAX           = 2
};


// Enum TslGame.EKillcamDisplayCode
enum class EKillcamDisplayCode
{
	EKillcamDisplayCode__NotVisible = 0,
	EKillcamDisplayCode__OptionDisabled = 1,
	EKillcamDisplayCode__Recording = 2,
	EKillcamDisplayCode__Playable  = 3,
	EKillcamDisplayCode__Replay    = 4,
	EKillcamDisplayCode__FailToLoad = 5,
	EKillcamDisplayCode__DemoFailure = 6,
	EKillcamDisplayCode__DetectedUnusualMovement = 7,
	EKillcamDisplayCode__EKillcamDisplayCode_MAX = 8
};


// Enum TslGame.EWidgetShowType
enum class EWidgetShowType
{
	EWidgetShowType__Show          = 0,
	EWidgetShowType__Hide          = 1,
	EWidgetShowType__Toggle        = 2,
	EWidgetShowType__EWidgetShowType_MAX = 3
};


// Enum TslGame.EMovementDirection
enum class EMovementDirection
{
	EMovementDirection__F_Direction = 0,
	EMovementDirection__L_Direction = 1,
	EMovementDirection__R_Direction = 2,
	EMovementDirection__B_Direction = 3,
	EMovementDirection__FL_Direction = 4,
	EMovementDirection__FR_Direction = 5,
	EMovementDirection__BL_Direction = 6,
	EMovementDirection__BR_Direction = 7,
	EMovementDirection__EMovementDirection_MAX = 8
};


// Enum TslGame.EAnimStanceType
enum class EAnimStanceType
{
	AnimType_Stand                 = 0,
	AnimType_Crouch                = 1,
	AnimType_Prone                 = 2,
	AnimType_MAX                   = 3
};


// Enum TslGame.EBuffOverlapSolveMethod
enum class EBuffOverlapSolveMethod
{
	EBuffOverlapSolveMethod__IgnoreLater = 0,
	EBuffOverlapSolveMethod__Overwrite = 1,
	EBuffOverlapSolveMethod__RestartTimer = 2,
	EBuffOverlapSolveMethod__EBuffOverlapSolveMethod_MAX = 3
};


// Enum TslGame.ECastableItemType
enum class ECastableItemType
{
	ECastableItemType__None        = 0,
	ECastableItemType__Bandage     = 1,
	ECastableItemType__FirstAid    = 2,
	ECastableItemType__Medkit      = 3,
	ECastableItemType__EnergyDrink = 4,
	ECastableItemType__Painkiller  = 5,
	ECastableItemType__Adrenaline  = 6,
	ECastableItemType__GasCan      = 7,
	ECastableItemType__ECastableItemType_MAX = 8
};


// Enum TslGame.ECastLevel
enum class ECastLevel
{
	ECastLevel__None               = 0,
	ECastLevel__NoRestriction      = 1,
	ECastLevel__Restriction        = 2,
	ECastLevel__ECastLevel_MAX     = 3
};


// Enum TslGame.ECastPriority
enum class ECastPriority
{
	ECastPriority__None            = 0,
	ECastPriority__Low             = 1,
	ECastPriority__Normal          = 2,
	ECastPriority__High            = 3,
	ECastPriority__Max             = 4,
	ECastPriority__ECastPriority_MAX = 5
};


// Enum TslGame.ELandingSoundSwitchState
enum class ELandingSoundSwitchState
{
	ELandingSoundSwitchState__None = 0,
	ELandingSoundSwitchState__Light = 1,
	ELandingSoundSwitchState__Heavy = 2,
	ELandingSoundSwitchState__VeryHeavy = 3,
	ELandingSoundSwitchState__ELandingSoundSwitchState_MAX = 4
};


// Enum TslGame.EAttackType
enum class EAttackType
{
	EAttackType__None              = 0,
	EAttackType__Weapon            = 1,
	EAttackType__VehicleCrash      = 2,
	EAttackType__VehicleExplosion  = 3,
	EAttackType__Fall              = 4,
	EAttackType__BlueZone          = 5,
	EAttackType__RedZone           = 6,
	EAttackType__EAttackType_MAX   = 7
};


// Enum TslGame.EPlayerMoveType
enum class EPlayerMoveType
{
	EPlayerMoveType__OnFoot        = 0,
	EPlayerMoveType__OnVehicle     = 1,
	EPlayerMoveType__EPlayerMoveType_MAX = 2
};


// Enum TslGame.ELobbyItemPointSellingType
enum class ELobbyItemPointSellingType
{
	ELobbyItemPointSellingType__Normal = 0,
	ELobbyItemPointSellingType__WeeklyDouble = 1,
	ELobbyItemPointSellingType__ELobbyItemPointSellingType_MAX = 2
};


// Enum TslGame.ELobbyItemPlatform
enum class ELobbyItemPlatform
{
	ELobbyItemPlatform__PC_Steam   = 0,
	ELobbyItemPlatform__PC_NonSteam = 1,
	ELobbyItemPlatform__Xbox       = 2,
	ELobbyItemPlatform__ELobbyItemPlatform_MAX = 3
};


// Enum TslGame.ELobbyItemTier
enum class ELobbyItemTier
{
	ELobbyItemTier__Basic          = 0,
	ELobbyItemTier__Common         = 1,
	ELobbyItemTier__Classic        = 2,
	ELobbyItemTier__Special        = 3,
	ELobbyItemTier__Rare           = 4,
	ELobbyItemTier__Elite          = 5,
	ELobbyItemTier__Epic           = 6,
	ELobbyItemTier__Legendary      = 7,
	ELobbyItemTier__Ultimate       = 8,
	ELobbyItemTier__Event          = 9,
	ELobbyItemTier__ELobbyItemTier_MAX = 10
};


// Enum TslGame.ELobbyItemCategory
enum class ELobbyItemCategory
{
	ELobbyItemCategory__Belt       = 0,
	ELobbyItemCategory__Body       = 1,
	ELobbyItemCategory__Eyes       = 2,
	ELobbyItemCategory__Feet       = 3,
	ELobbyItemCategory__Head       = 4,
	ELobbyItemCategory__Jacket     = 5,
	ELobbyItemCategory__Legs       = 6,
	ELobbyItemCategory__Mask       = 7,
	ELobbyItemCategory__Hands      = 8,
	ELobbyItemCategory__Box        = 9,
	ELobbyItemCategory__Key        = 10,
	ELobbyItemCategory__ELobbyItemCategory_MAX = 11
};


// Enum TslGame.EItemCategory
enum class EItemCategory
{
	EItemCategory__None            = 0,
	EItemCategory__Equipment       = 1,
	EItemCategory__Weapon          = 2,
	EItemCategory__Attachment      = 3,
	EItemCategory__Ammunition      = 4,
	EItemCategory__Use             = 5,
	EItemCategory__Skin            = 6,
	EItemCategory__EItemCategory_MAX = 7
};


// Enum TslGame.EForceRefreshDummy
enum class EForceRefreshDummy
{
	EForceRefreshDummy__Refresh1   = 0,
	EForceRefreshDummy__Refresh2   = 1,
	EForceRefreshDummy__EForceRefreshDummy_MAX = 2
};


// Enum TslGame.EHackDetectionType
enum class EHackDetectionType
{
	WEAPON_INVALID_IMPACT          = 0,
	WEAPON_INVALID_ORIGIN          = 1,
	WEAPON_INVALID_RANGE           = 2,
	WEAPON_INVALID_SEQUENCE        = 3,
	WEAPON_INVALID_HITLAG          = 4,
	WEAPON_INVALID_AMMO            = 5,
	WEAPON_INVALID_CHKSUM          = 6,
	WEAPON_WALL_CHECK              = 7,
	IGNORE_WALL                    = 8,
	SPEED_HACK_TIME                = 9,
	SPEED_HACK                     = 10,
	ITEM_PACKAGE                   = 11,
	WEAPON_HIT                     = 12,
	EHackDetectionType_MAX         = 13
};


// Enum TslGame.EInteractionPhase
enum class EInteractionPhase
{
	EInteractionPhase__First       = 0,
	EInteractionPhase__Second      = 1,
	EInteractionPhase__EInteractionPhase_MAX = 2
};


// Enum TslGame.EWeaponGripLeftHand
enum class EWeaponGripLeftHand
{
	EWeaponGripLeftHand__NormalRifle = 0,
	EWeaponGripLeftHand__Foregrip1 = 1,
	EWeaponGripLeftHand__Foregrip2 = 2,
	EWeaponGripLeftHand__Thompson  = 3,
	EWeaponGripLeftHand__EWeaponGripLeftHand_MAX = 4
};


// Enum TslGame.EWeaponAttachmentSlotID
enum class EWeaponAttachmentSlotID
{
	EWeaponAttachmentSlotID__None  = 0,
	EWeaponAttachmentSlotID__Muzzle = 1,
	EWeaponAttachmentSlotID__LowerRail = 2,
	EWeaponAttachmentSlotID__UpperRail = 3,
	EWeaponAttachmentSlotID__Magazine = 4,
	EWeaponAttachmentSlotID__Stock = 5,
	EWeaponAttachmentSlotID__EWeaponAttachmentSlotID_MAX = 6
};


// Enum TslGame.ESkinCategory
enum class ESkinCategory
{
	ESkinCategory__Skin_Equipment  = 0,
	ESkinCategory__Skin_Weapon     = 1,
	ESkinCategory__Skin_Vehicle    = 2,
	ESkinCategory__Skin_Parachute  = 3,
	ESkinCategory__Skin_MAX        = 4
};


// Enum TslGame.ESkinApplicationType
enum class ESkinApplicationType
{
	ESkinApplicationType__Application_InOrder = 0,
	ESkinApplicationType__Application_Slot = 1,
	ESkinApplicationType__Application_MAX = 2
};


// Enum TslGame.ESlotOffsetType
enum class ESlotOffsetType
{
	ESlotOffsetType__NoOffset      = 0,
	ESlotOffsetType__BagLevel1     = 1,
	ESlotOffsetType__BagLevel2     = 2,
	ESlotOffsetType__BagLevel3     = 3,
	ESlotOffsetType__ESlotOffsetType_MAX = 4
};


// Enum TslGame.EItemSpotGroupType
enum class EItemSpotGroupType
{
	EItemSpotGroupType__GroupA     = 0,
	EItemSpotGroupType__GroupB     = 1,
	EItemSpotGroupType__GroupC     = 2,
	EItemSpotGroupType__GroupD     = 3,
	EItemSpotGroupType__GroupE     = 4,
	EItemSpotGroupType__GroupF     = 5,
	EItemSpotGroupType__GroupG     = 6,
	EItemSpotGroupType__GroupH     = 7,
	EItemSpotGroupType__GroupI     = 8,
	EItemSpotGroupType__GroupJ     = 9,
	EItemSpotGroupType__EItemSpotGroupType_MAX = 10
};


// Enum TslGame.EItemSpotType
enum class EItemSpotType
{
	EItemSpotType__TypeA           = 0,
	EItemSpotType__TypeB           = 1,
	EItemSpotType__TypeC           = 2,
	EItemSpotType__TypeD           = 3,
	EItemSpotType__TypeE           = 4,
	EItemSpotType__TypeF           = 5,
	EItemSpotType__EItemSpotType_MAX = 6
};


// Enum TslGame.EEquipSlotID
enum class EEquipSlotID
{
	EEquipSlotID__Head             = 0,
	EEquipSlotID__Eyes             = 1,
	EEquipSlotID__Mask             = 2,
	EEquipSlotID__Torso            = 3,
	EEquipSlotID__TorsoArmor       = 4,
	EEquipSlotID__Outer            = 5,
	EEquipSlotID__Backpack         = 6,
	EEquipSlotID__Hands            = 7,
	EEquipSlotID__Legs             = 8,
	EEquipSlotID__Feet             = 9,
	EEquipSlotID__Belt             = 10,
	EEquipSlotID__WeaponPrimary    = 11,
	EEquipSlotID__WeaponSecondary  = 12,
	EEquipSlotID__WeaponMelee      = 13,
	EEquipSlotID__WeaponThrowable  = 14,
	EEquipSlotID__MaxOrNone        = 15,
	EEquipSlotID__EEquipSlotID_MAX = 16
};


// Enum TslGame.EDurabilityConsumeType
enum class EDurabilityConsumeType
{
	EDurabilityConsumeType__TotalDamage = 0,
	EDurabilityConsumeType__AbsorbDamage = 1,
	EDurabilityConsumeType__EDurabilityConsumeType_MAX = 2
};


// Enum TslGame.EAnimStance
enum class EAnimStance
{
	EAnimStance__Stand             = 0,
	EAnimStance__Crouch            = 1,
	EAnimStance__Prone             = 2,
	EAnimStance__Groggy            = 3,
	EAnimStance__EAnimStance_MAX   = 4
};


// Enum TslGame.ELobbyItemBundleType
enum class ELobbyItemBundleType
{
	ELobbyItemBundleType__Bundle   = 0,
	ELobbyItemBundleType__Generator = 1,
	ELobbyItemBundleType__ELobbyItemBundleType_MAX = 2
};


// Enum TslGame.ELobbyLinkState
enum class ELobbyLinkState
{
	ELobbyLinkState__Disconnect    = 0,
	ELobbyLinkState__WaitInitialize = 1,
	ELobbyLinkState__WaitStart     = 2,
	ELobbyLinkState__Gaming        = 3,
	ELobbyLinkState__Finished      = 4,
	ELobbyLinkState__ELobbyLinkState_MAX = 5
};


// Enum TslGame.EParameterLUTChannel
enum class EParameterLUTChannel
{
	EParameterLUTChannel__R        = 0,
	EParameterLUTChannel__G        = 1,
	EParameterLUTChannel__B        = 2,
	EParameterLUTChannel__A        = 3,
	EParameterLUTChannel__RGBA     = 4,
	EParameterLUTChannel__Undefined = 5,
	EParameterLUTChannel__EParameterLUTChannel_MAX = 6
};


// Enum TslGame.EMaterialParameterType
enum class EMaterialParameterType
{
	EMaterialParameterType__Bool   = 0,
	EMaterialParameterType__Scalar = 1,
	EMaterialParameterType__Vector = 2,
	EMaterialParameterType__Texture = 3,
	EMaterialParameterType__Undefined = 4,
	EMaterialParameterType__EMaterialParameterType_MAX = 5
};


// Enum TslGame.EWeaponReloadAnimExec
enum class EWeaponReloadAnimExec
{
	EWeaponReloadAnimExec__Tactical = 0,
	EWeaponReloadAnimExec__Charge  = 1,
	EWeaponReloadAnimExec__Single  = 2,
	EWeaponReloadAnimExec__Loop    = 3,
	EWeaponReloadAnimExec__EWeaponReloadAnimExec_MAX = 4
};


// Enum TslGame.EWeaponReloadMethod
enum class EWeaponReloadMethod
{
	EWeaponReloadMethod__Magazine  = 0,
	EWeaponReloadMethod__OneByOne  = 1,
	EWeaponReloadMethod__OneByOneAndClip = 2,
	EWeaponReloadMethod__EWeaponReloadMethod_MAX = 3
};


// Enum TslGame.EHornSoundType
enum class EHornSoundType
{
	EHornSoundType__HornOn         = 0,
	EHornSoundType__HornOff        = 1,
	EHornSoundType__InstantHorn    = 2,
	EHornSoundType__EHornSoundType_MAX = 3
};


// Enum TslGame.EVehicleAnimType
enum class EVehicleAnimType
{
	EVehicleAnimType__DefaultDriver = 0,
	EVehicleAnimType__DefaultPassenger = 1,
	EVehicleAnimType__BuggyDriver  = 2,
	EVehicleAnimType__BuggyPassenger = 3,
	EVehicleAnimType__DaciaDriver  = 4,
	EVehicleAnimType__DaciaPassengerFR = 5,
	EVehicleAnimType__DaciaPassengerBL = 6,
	EVehicleAnimType__DaciaPassengerBC = 7,
	EVehicleAnimType__DaciaPassengerBR = 8,
	EVehicleAnimType__UazDriver    = 9,
	EVehicleAnimType__UazPassengerFR = 10,
	EVehicleAnimType__UazPassengerBL = 11,
	EVehicleAnimType__UazPassengerBC = 12,
	EVehicleAnimType__UazPassengerBR = 13,
	EVehicleAnimType__BoatDriver   = 14,
	EVehicleAnimType__BoatPassengerFR = 15,
	EVehicleAnimType__BoatPassengerBL = 16,
	EVehicleAnimType__BoatPassengerBC = 17,
	EVehicleAnimType__BoatPassengerBR = 18,
	EVehicleAnimType__MotoDriver   = 19,
	EVehicleAnimType__MotoPassenger = 20,
	EVehicleAnimType__MotoSidecar  = 21,
	EVehicleAnimType__MotoDriverSidecar = 22,
	EVehicleAnimType__MotoPassengerSidecar = 23,
	EVehicleAnimType__AircraftPassenger = 24,
	EVehicleAnimType__JetskiDriver = 25,
	EVehicleAnimType__JetskiPassenger = 26,
	EVehicleAnimType__PickupTruckDriver = 27,
	EVehicleAnimType__PickupTruckPassengerFR = 28,
	EVehicleAnimType__PickupTruckPassengerBL_Open = 29,
	EVehicleAnimType__PickupTruckPassengerBR_Open = 30,
	EVehicleAnimType__PickupTruckPassengerBL_Closed = 31,
	EVehicleAnimType__PickupTruckPassengerBR_Closed = 32,
	EVehicleAnimType__MinibusDriver = 33,
	EVehicleAnimType__MinibusPassengerFR = 34,
	EVehicleAnimType__MinibusPassengerML = 35,
	EVehicleAnimType__MinibusPassengerMR = 36,
	EVehicleAnimType__MinibusPassengerBL = 37,
	EVehicleAnimType__MinibusPassengerBR = 38,
	EVehicleAnimType__EVehicleAnimType_MAX = 39
};


// Enum TslGame.ERiderType
enum class ERiderType
{
	ERiderType__Driver             = 0,
	ERiderType__Passenger          = 1,
	ERiderType__ERiderType_MAX     = 2
};


// Enum TslGame.EVaultAnimType
enum class EVaultAnimType
{
	EVaultAnimType__VaultNone      = 0,
	EVaultAnimType__Vault200_Stationary = 1,
	EVaultAnimType__Vault200_Mobile = 2,
	EVaultAnimType__Vault200_Narrow = 3,
	EVaultAnimType__Vault160_Stationary = 4,
	EVaultAnimType__Vault160_Mobile = 5,
	EVaultAnimType__Vault160_Narrow = 6,
	EVaultAnimType__Vault120_Stationary = 7,
	EVaultAnimType__Vault120_Mobile = 8,
	EVaultAnimType__Vault120_Slide = 9,
	EVaultAnimType__Vault120_Narrow = 10,
	EVaultAnimType__Vault90_Stationary = 11,
	EVaultAnimType__Vault90_Mobile = 12,
	EVaultAnimType__Vault90_Slide  = 13,
	EVaultAnimType__Vault90_Narrow = 14,
	EVaultAnimType__Climb200_Stationary = 15,
	EVaultAnimType__Climb200_Mobile = 16,
	EVaultAnimType__Climb200_Slide = 17,
	EVaultAnimType__Climb200_Narrow = 18,
	EVaultAnimType__Climb160_Stationary = 19,
	EVaultAnimType__Climb160_Mobile = 20,
	EVaultAnimType__Climb160_Slide = 21,
	EVaultAnimType__Climb160_Narrow = 22,
	EVaultAnimType__Climb120_Stationary = 23,
	EVaultAnimType__Climb120_Mobile = 24,
	EVaultAnimType__Climb120_Slide = 25,
	EVaultAnimType__Climb120_Narrow = 26,
	EVaultAnimType__Climb90_Stationary = 27,
	EVaultAnimType__Climb90_Mobile = 28,
	EVaultAnimType__Climb90_Slide  = 29,
	EVaultAnimType__Climb90_Narrow = 30,
	EVaultAnimType__Vault90Roll    = 31,
	EVaultAnimType__Vault120Window = 32,
	EVaultAnimType__Vault60_Stationary = 33,
	EVaultAnimType__Vault60_Mobile = 34,
	EVaultAnimType__Vault60_Slide  = 35,
	EVaultAnimType__Vault60_Narrow = 36,
	EVaultAnimType__Climb60_Stationary = 37,
	EVaultAnimType__Climb60_Mobile = 38,
	EVaultAnimType__Climb60_Narrow = 39,
	EVaultAnimType__EVaultAnimType_MAX = 40
};


// Enum TslGame.EPunchDamageType
enum class EPunchDamageType
{
	PunchDamage_Light              = 0,
	PunchDamage_Heavy              = 1,
	PunchDamage_MAX                = 2
};


// Enum TslGame.EMovementType
enum class EMovementType
{
	M_StandWalk                    = 0,
	M_StandRun                     = 1,
	M_StandSprint                  = 2,
	M_CrouchWalk                   = 3,
	M_CrouchRun                    = 4,
	M_CrouchSprint                 = 5,
	M_ProneWalk                    = 6,
	M_ProneRun                     = 7,
	M_ProneSprint                  = 8,
	M_StandScope                   = 9,
	M_CrouchScope                  = 10,
	M_ProneScope                   = 11,
	M_StandAim                     = 12,
	M_CrouchAim                    = 13,
	M_ProneAim                     = 14,
	M_Swim                         = 15,
	M_UnderwaterSwim               = 16,
	M_DBNO                         = 17,
	M_MAX                          = 18
};


// Enum TslGame.EDoorState
enum class EDoorState
{
	EDoorState__Closed             = 0,
	EDoorState__Closing            = 1,
	EDoorState__Opened             = 2,
	EDoorState__Opening            = 3,
	EDoorState__EDoorState_MAX     = 4
};


// Enum TslGame.EThingGroupSpawnType
enum class EThingGroupSpawnType
{
	EThingGroupSpawnType__None     = 0,
	EThingGroupSpawnType__Probability = 1,
	EThingGroupSpawnType__TotalCount = 2,
	EThingGroupSpawnType__EThingGroupSpawnType_MAX = 3
};


// Enum TslGame.ETeamVehicleType
enum class ETeamVehicleType
{
	ETeamVehicleType__Team_None    = 0,
	ETeamVehicleType__Team_Vehicle = 1,
	ETeamVehicleType__Team_Parachute = 2,
	ETeamVehicleType__Team_MAX     = 3
};


// Enum TslGame.EWheelContactType
enum class EWheelContactType
{
	WCT_Static                     = 0,
	WCT_Roll                       = 1,
	WCT_LatSlip                    = 2,
	WCT_LongSlip                   = 3,
	WCT_MAX                        = 4
};


// Enum TslGame.EAnimPawnState
enum class EAnimPawnState
{
	EAnimPawnState__PS_OnFoot      = 0,
	EAnimPawnState__PS_VehicleDriver = 1,
	EAnimPawnState__PS_VehiclePassenger = 2,
	EAnimPawnState__PS_Freefall    = 3,
	EAnimPawnState__PS_Parachute   = 4,
	EAnimPawnState__PS_Swim        = 5,
	EAnimPawnState__PS_DBNO        = 6,
	EAnimPawnState__PS_Reviving    = 7,
	EAnimPawnState__PS_Flying      = 8,
	EAnimPawnState__PS_ActiveRagdoll = 9,
	EAnimPawnState__PS_MAX         = 10
};


// Enum TslGame.EDamageVictimActorType
enum class EDamageVictimActorType
{
	EDamageVictimActorType__Character = 0,
	EDamageVictimActorType__Vehicle = 1,
	EDamageVictimActorType__Wheel  = 2,
	EDamageVictimActorType__DestructibleActor = 3,
	EDamageVictimActorType__EDamageVictimActorType_MAX = 4
};


// Enum TslGame.ETslFenceSelector
enum class ETslFenceSelector
{
	ETslFenceSelector__None        = 0,
	ETslFenceSelector__Use         = 1,
	ETslFenceSelector__Use01       = 2,
	ETslFenceSelector__Use02       = 3,
	ETslFenceSelector__Use03       = 4,
	ETslFenceSelector__ETslFenceSelector_MAX = 5
};


// Enum TslGame.EReactionType
enum class EReactionType
{
	EReactionType__Reaciton_None   = 0,
	EReactionType__Reaction_Physics = 1,
	EReactionType__Reaction_Destructible = 2,
	EReactionType__EReactionType_MAX = 3
};


// Enum TslGame.EPlayerAuthState
enum class EPlayerAuthState
{
	EPlayerAuthState__None         = 0,
	EPlayerAuthState__Login        = 1,
	EPlayerAuthState__Logout       = 2,
	EPlayerAuthState__EPlayerAuthState_MAX = 3
};


// Enum TslGame.EAttachParent
enum class EAttachParent
{
	EAttachParent__None            = 0,
	EAttachParent__Character       = 1,
	EAttachParent__WeaponGun       = 2,
	EAttachParent__EAttachParent_MAX = 3
};


// Enum TslGame.EDamageZoneType
enum class EDamageZoneType
{
	EDamageZoneType__Head          = 0,
	EDamageZoneType__Torso         = 1,
	EDamageZoneType__Arm           = 2,
	EDamageZoneType__Pelvis        = 3,
	EDamageZoneType__Leg           = 4,
	EDamageZoneType__EDamageZoneType_MAX = 5
};


// Enum TslGame.EThrowableState
enum class EThrowableState
{
	EThrowableState__Idle          = 0,
	EThrowableState__PinOff        = 1,
	EThrowableState__Cooking       = 2,
	EThrowableState__Throw         = 3,
	EThrowableState__Dropped       = 4,
	EThrowableState__EThrowableState_MAX = 5
};


// Enum TslGame.EProjectileExplosionStartType
enum class EProjectileExplosionStartType
{
	EProjectileExplosionStartType__NotStart = 0,
	EProjectileExplosionStartType__Impact = 1,
	EProjectileExplosionStartType__Delay = 2,
	EProjectileExplosionStartType__ImpactOrDelay = 3,
	EProjectileExplosionStartType__EProjectileExplosionStartType_MAX = 4
};


// Enum TslGame.EProjectileExplodeState
enum class EProjectileExplodeState
{
	EProjectileExplodeState__NotExplode = 0,
	EProjectileExplodeState__ImpactExplode = 1,
	EProjectileExplodeState__TimerExplode = 2,
	EProjectileExplodeState__EProjectileExplodeState_MAX = 3
};


// Enum TslGame.EProjectileExplosionRotationType
enum class EProjectileExplosionRotationType
{
	EProjectileExplosionRotationType__ProjectileUpVector = 0,
	EProjectileExplosionRotationType__WorldUpVector = 1,
	EProjectileExplosionRotationType__EProjectileExplosionRotationType_MAX = 2
};


// Enum TslGame.EMolotovSimulationType
enum class EMolotovSimulationType
{
	EMolotovSimulationType__Molotov_SimulationImpact = 0,
	EMolotovSimulationType__Molotov_SimulationProjectile = 1,
	EMolotovSimulationType__Molotov_SimulationFragment = 2,
	EMolotovSimulationType__Molotov_MAX = 3
};


// Enum TslGame.EBluezoneState
enum class EBluezoneState
{
	EBluezoneState__None           = 0,
	EBluezoneState__Wait           = 1,
	EBluezoneState__Release        = 2,
	EBluezoneState__EBluezoneState_MAX = 3
};


// Enum TslGame.EEquipableItemIconVisibility
enum class EEquipableItemIconVisibility
{
	EEquipableItemIconVisibility__Always = 0,
	EEquipableItemIconVisibility__WhenEquipped = 1,
	EEquipableItemIconVisibility__EEquipableItemIconVisibility_MAX = 2
};


// Enum TslGame.EMarkStates
enum class EMarkStates
{
	EMarkStates__Normal            = 0,
	EMarkStates__Groggy            = 1,
	EMarkStates__Dead              = 2,
	EMarkStates__Vehicle           = 3,
	EMarkStates__Parachute         = 4,
	EMarkStates__Quitter           = 5,
	EMarkStates__EMarkStates_MAX   = 6
};


// Enum TslGame.EConditionOfDeath
enum class EConditionOfDeath
{
	EConditionOfDeath__HeatShot    = 0,
	EConditionOfDeath__DBNO        = 1,
	EConditionOfDeath__DBNOByHeadShot = 2,
	EConditionOfDeath__None        = 3,
	EConditionOfDeath__EConditionOfDeath_MAX = 4
};


// Enum TslGame.ENoReloadGuideType
enum class ENoReloadGuideType
{
	ENoReloadGuideType__Alwyas     = 0,
	ENoReloadGuideType__WhenCurrentWeapon = 1,
	ENoReloadGuideType__ENoReloadGuideType_MAX = 2
};


// Enum TslGame.ESurfaceEffect
enum class ESurfaceEffect
{
	ESurfaceEffect__S_None         = 0,
	ESurfaceEffect__S_Concrete_Roll = 1,
	ESurfaceEffect__S_Concrete_Skid = 2,
	ESurfaceEffect__S_Concrete_Spin = 3,
	ESurfaceEffect__S_Dirt_Roll    = 4,
	ESurfaceEffect__S_Dirt_Skid    = 5,
	ESurfaceEffect__S_Dirt_Spin    = 6,
	ESurfaceEffect__S_Water_Roll   = 7,
	ESurfaceEffect__S_Water_Skid   = 8,
	ESurfaceEffect__S_Water_Spin   = 9,
	ESurfaceEffect__S_Metal_Roll   = 10,
	ESurfaceEffect__S_Metal_Skid   = 11,
	ESurfaceEffect__S_Metal_Spin   = 12,
	ESurfaceEffect__S_Wood_Roll    = 13,
	ESurfaceEffect__S_Wood_Skid    = 14,
	ESurfaceEffect__S_Wood_Spin    = 15,
	ESurfaceEffect__S_Rock_Roll    = 16,
	ESurfaceEffect__S_Rock_Skid    = 17,
	ESurfaceEffect__S_Rock_Spin    = 18,
	ESurfaceEffect__S_Grass_Roll   = 19,
	ESurfaceEffect__S_Grass_Skid   = 20,
	ESurfaceEffect__S_Grass_Spin   = 21,
	ESurfaceEffect__S_Sand_Roll    = 22,
	ESurfaceEffect__S_Sand_Skid    = 23,
	ESurfaceEffect__S_Sand_Spin    = 24,
	ESurfaceEffect__S_Concrete_Brake = 25,
	ESurfaceEffect__S_Dirt_Brake   = 26,
	ESurfaceEffect__S_Water_Brake  = 27,
	ESurfaceEffect__S_Metal_Brake  = 28,
	ESurfaceEffect__S_Wood_Brake   = 29,
	ESurfaceEffect__S_Rock_Brake   = 30,
	ESurfaceEffect__S_Grass_Brake  = 31,
	ESurfaceEffect__S_Sand_Brake   = 32,
	ESurfaceEffect__S_Common_BrakeDisc = 33,
	ESurfaceEffect__S_Concrete_Punctured_Roll = 34,
	ESurfaceEffect__S_Concrete_Punctured_Skid = 35,
	ESurfaceEffect__S_Concrete_Punctured_Spin = 36,
	ESurfaceEffect__S_Concrete_Punctured_Brake = 37,
	ESurfaceEffect__S_MAX          = 38
};


// Enum TslGame.EHitCheckType
enum class EHitCheckType
{
	EHitCheckType__HitCheck_Once   = 0,
	EHitCheckType__HitCheck_Multi  = 1,
	EHitCheckType__HitCheck_MAX    = 2
};


// Enum TslGame.EVoiceTransmissionType
enum class EVoiceTransmissionType
{
	EVoiceTransmissionType__None   = 0,
	EVoiceTransmissionType__ToAll  = 1,
	EVoiceTransmissionType__ToChannel = 2,
	EVoiceTransmissionType__EVoiceTransmissionType_MAX = 3
};


// Enum TslGame.EVivoxResponseState
enum class EVivoxResponseState
{
	EVivoxResponseState__NotRequested = 0,
	EVivoxResponseState__Requested = 1,
	EVivoxResponseState__Fail      = 2,
	EVivoxResponseState__Success   = 3,
	EVivoxResponseState__EVivoxResponseState_MAX = 4
};


// Enum TslGame.EVivoxChannelType
enum class EVivoxChannelType
{
	EVivoxChannelType__None        = 0,
	EVivoxChannelType__All         = 1,
	EVivoxChannelType__GlobalOnly  = 2,
	EVivoxChannelType__TeamOnly    = 3,
	EVivoxChannelType__EVivoxChannelType_MAX = 4
};


// Enum TslGame.EVivoxChannelJoinState
enum class EVivoxChannelJoinState
{
	EVivoxChannelJoinState__NotJoined = 0,
	EVivoxChannelJoinState__Joining = 1,
	EVivoxChannelJoinState__Leaving = 2,
	EVivoxChannelJoinState__Joined = 3,
	EVivoxChannelJoinState__EVivoxChannelJoinState_MAX = 4
};


// Enum TslGame.EVivoxLoginState
enum class EVivoxLoginState
{
	EVivoxLoginState__NotLoggedin  = 0,
	EVivoxLoginState__Loggingin    = 1,
	EVivoxLoginState__Loggedin     = 2,
	EVivoxLoginState__EVivoxLoginState_MAX = 3
};


// Enum TslGame.EVivoxConnectionState
enum class EVivoxConnectionState
{
	EVivoxConnectionState__NotConnected = 0,
	EVivoxConnectionState__Connecting = 1,
	EVivoxConnectionState__Connected = 2,
	EVivoxConnectionState__EVivoxConnectionState_MAX = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct TslGame.TslWidgetConfig
// 0x0010
struct FTslWidgetConfig
{
	class UClass*                                      WidgetClass;                                              // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bDefaultShow : 1;                                         // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bUseMouse : 1;                                            // 0x0009(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bCloseByEscape : 1;                                       // 0x000A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ZOrder;                                                   // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.TslWidgetState
// 0x0020
struct FTslWidgetState
{
	struct FTslWidgetConfig                            Config;                                                   // 0x0000(0x0010)
	class UUserWidget*                                 Widget;                                                   // 0x0010(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
};

// ScriptStruct TslGame.AnimSpeedInfo
// 0x0020
struct FAnimSpeedInfo
{
	float                                              F;                                                        // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              L;                                                        // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              R;                                                        // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              B;                                                        // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FL;                                                       // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FR;                                                       // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              BL;                                                       // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              BR;                                                       // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.AnimInfo
// 0x0068
struct FAnimInfo
{
	class UBlendSpace*                                 BlendSpaceRef;                                            // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UBlendSpace*                                 BlendSpaceFPPRef;                                         // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UBlendSpace*                                 BlendSpaceRelaxedRef;                                     // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UBlendSpace*                                 BlendSpaceRelaxedFPPRef;                                  // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FAnimSpeedInfo                              AnimSpeed_Walk;                                           // 0x0020(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FAnimSpeedInfo                              AnimSpeed_Run;                                            // 0x0040(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AnimSpeed_Sprint;                                         // 0x0060(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.NearClippingLevelOverZ
// 0x0008
struct FNearClippingLevelOverZ
{
	float                                              Z;                                                        // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0004(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.NearClippingLevelOverZ.Level
};

// ScriptStruct TslGame.LobbyItemDesc
// 0x0058
struct FLobbyItemDesc
{
	unsigned char                                      bCashSellable : 1;                                        // 0x0000(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      bPointSellable : 1;                                       // 0x0000(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      bMarketable : 1;                                          // 0x0000(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      bPointRefundable : 1;                                     // 0x0000(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FString                                     XboxConsumableId;                                         // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0018(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.LobbyItemDesc.Tier
	unsigned char                                      UnknownData01[0x1];                                       // 0x0019(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.LobbyItemDesc.Category
	struct FText                                       Description;                                              // 0x0020(0x0018) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0038(0x0010) UNKNOWN PROPERTY: ArrayProperty TslGame.LobbyItemDesc.Platforms
	float                                              CashSellingPrice;                                         // 0x0048(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x004C(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.LobbyItemDesc.PointSellingType
	int                                                PointSellingPrice;                                        // 0x0050(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                PointRefundingPrice;                                      // 0x0054(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.PackagedItemInfo
// 0x0010
struct FPackagedItemInfo
{
	class UClass*                                      ItemType;                                                 // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Count;                                                    // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.LobbyFaceElementDetail
// 0x0048
struct FLobbyFaceElementDetail
{
	int                                                ColorIndex;                                               // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FColor                                      Color;                                                    // 0x0004(0x0004) (CPF_Edit, CPF_IsPlainOldData)
	TAssetPtr<class UCustomizableObject>               BodyAsset;                                                // 0x0008(0x0020) (CPF_Edit)
	TAssetPtr<class UCustomizableObject>               FaceAsset;                                                // 0x0028(0x0020) (CPF_Edit)
};

// ScriptStruct TslGame.LobbyFaceElement
// 0x0028
struct FLobbyFaceElement
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.LobbyFaceElement.Gender
	struct FString                                     FaceType;                                                 // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FLobbyFaceElementDetail>             ColorData;                                                // 0x0018(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct TslGame.LobbyHairElementDetail
// 0x0028
struct FLobbyHairElementDetail
{
	int                                                ColorIndex;                                               // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FColor                                      Color;                                                    // 0x0004(0x0004) (CPF_Edit, CPF_IsPlainOldData)
	TAssetPtr<class UCustomizableObject>               HairAsset;                                                // 0x0008(0x0020) (CPF_Edit)
};

// ScriptStruct TslGame.LobbyHairElement
// 0x0028
struct FLobbyHairElement
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.LobbyHairElement.Gender
	struct FString                                     HairType;                                                 // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FLobbyHairElementDetail>             ColorData;                                                // 0x0018(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct TslGame.GeneralItemSpawnProb
// 0x0018
struct FGeneralItemSpawnProb
{
	float                                              ProbabilityPercent;                                       // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       ValueFilter;                                              // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       CategoryFilter;                                           // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.HighlightRecordConfig
// 0x000C
struct FHighlightRecordConfig
{
	float                                              BeforeDurationSec;                                        // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AfterDurationSec;                                         // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LinkWaitDurationSec;                                      // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.CastConfig
// 0x0038
struct FCastConfig
{
	struct FText                                       CastName;                                                 // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	float                                              CastTime;                                                 // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x001C(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.CastConfig.CastPriority
	unsigned char                                      UnknownData01[0x1];                                       // 0x001D(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.CastConfig.CastLevel
	float                                              CastMaxDistance;                                          // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CasterAndCastObjectMaxDistance;                           // 0x0024(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bCanCastInsideMovingVehicle : 1;                          // 0x0028(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MaxLinAcceleration;                                       // 0x002C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CastMaxSpeed;                                             // 0x0030(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bNeedUnarm : 1;                                           // 0x0034(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0035(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.CastConfig.CastAnim
};

// ScriptStruct TslGame.BrightnessConfig
// 0x0020
struct FBrightnessConfig
{
	class UCurveVector*                                ReticleBrightnessSettingsCurve;                           // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       ReticleBrightnessParamX;                                  // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       ReticleBrightnessParamY;                                  // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       ReticleBrightnessParamZ;                                  // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WeaponPPSettings
// 0x0050
struct FWeaponPPSettings
{
	float                                              BlurLevel;                                                // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ScopeRadiusNear;                                          // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ScopeRadiusFar;                                           // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ReticleAngularSize;                                       // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector3D                                     ScopeCenterNear;                                          // 0x0010(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector3D                                     ScopeCenterFar;                                           // 0x001C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ScopeRadiusFade;                                          // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DepthBlurPower;                                           // 0x002C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DepthBlurWhitePoint;                                      // 0x0030(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DepthBlurBlackPoint;                                      // 0x0034(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UTexture*                                    ReticleTexture;                                           // 0x0038(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector2D                                     RelativeOffsetMap;                                        // 0x0040(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              BloomIntensity;                                           // 0x0048(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WeaponAttachmentData
// 0x01F0
struct FWeaponAttachmentData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.WeaponAttachmentData.AttachmentSlotID
	struct FName                                       AttachmentTag;                                            // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       Name;                                                     // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       MouseSensitiveName;                                       // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MagnificationFOVMaxIncrement;                             // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                MagnificationFOVSteps;                                    // 0x0024(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MagnificationFOV;                                         // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FBrightnessConfig                           ReticleBrightnessConfig;                                  // 0x0030(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	TArray<float>                                      ZeroingDistances;                                         // 0x0050(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TMap<class UClass*, class UMaterialInstance*>      ReticleMaterialOverrides;                                 // 0x0060(0x0050) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TMap<class UClass*, class UTexture*>               ReticleTextureOverrides;                                  // 0x00B0(0x0050) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	struct FWeaponPPSettings                           SightPostprocessSettings;                                 // 0x0100(0x0050) (CPF_Edit, CPF_DisableEditOnInstance)
	float                                              DecreaseRecoilPatternScale;                               // 0x0150(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                AmmoPerClip;                                              // 0x0154(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ReloadAnimationPlayRate;                                  // 0x0158(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MultipleFiringBulletsSpread;                              // 0x015C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MultipleFiringSpreadBase;                                 // 0x0160(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MultipleAmmoSpeed;                                        // 0x0164(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RecoilMultiplierHorizontal;                               // 0x0168(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RecoilMultiplierVertical;                                 // 0x016C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RecoilRecoveryMultiplier;                                 // 0x0170(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SwayMultiplier;                                           // 0x0174(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AnimationKickMultiplier;                                  // 0x0178(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DeviationMultiplier;                                      // 0x017C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ADSSpeedMultiplier;                                       // 0x0180(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector3D                                     FPPSocketOffset;                                          // 0x0184(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                GripType_MN;                                              // 0x0190(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              BarrelLengthAdditive;                                     // 0x0194(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             MuzzleFx;                                                 // 0x0198(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       MuzzleAttachPoint;                                        // 0x01A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector3D                                     IKHandOffset;                                             // 0x01A8(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Rotator                                      IKHandRotation;                                           // 0x01B4(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x01C0(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.WeaponAttachmentData.WeaponGripLeft
	class UAkAudioEvent*                               MuzzleSound;                                              // 0x01C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimMontage*                                CharacterReloadTactical;                                  // 0x01D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimMontage*                                WeaponReloadTactical;                                     // 0x01D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimMontage*                                CharacterReloadCharge;                                    // 0x01E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimMontage*                                WeaponReloadCharge;                                       // 0x01E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WeaponAttachmentWeaponTagData
// 0x0218
struct FWeaponAttachmentWeaponTagData
{
	struct FName                                       WeaponTag;                                                // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TAssetPtr<class UStaticMesh>                       AttachmentMeshAsset;                                      // 0x0008(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FWeaponAttachmentData                       AttachmentData;                                           // 0x0028(0x01F0) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
};

// ScriptStruct TslGame.SkinMaterialData
// 0x0010
struct FSkinMaterialData
{
	struct FName                                       MaterialSlotName;                                         // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UMaterialInstance*                           Material;                                                 // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.SkinData
// 0x0020
struct FSkinData
{
	struct FName                                       SkinName;                                                 // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0008(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.SkinData.SkinApplicationType
	TArray<struct FSkinMaterialData>                   SkinMaterials;                                            // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
};

// ScriptStruct TslGame.WeaponData
// 0x0098
struct FWeaponData
{
	float                                              TargetingFOV;                                             // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              HoldBreathFOV;                                            // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       Rarity;                                                   // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector3D                                     SocketOffset_Shoulder;                                    // 0x0010(0x000C) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector3D                                     SocketOffset_Hand;                                        // 0x001C(0x000C) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bApplyGripPoseLeft : 1;                                   // 0x0028(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0029(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.WeaponData.WeaponGripLeft
	unsigned char                                      UnknownData01[0x1];                                       // 0x002A(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.WeaponData.WeaponClass
	unsigned char                                      bUseDefaultScoreMultiplier : 1;                           // 0x002B(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ScoreMultiplierByDamage;                                  // 0x002C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ScoreMultiplierByKill;                                    // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SwayModifier_Pitch;                                       // 0x0034(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SwayModifier_YawOffset;                                   // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SwayModifier_Movement;                                    // 0x003C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SwayModifier_Stand;                                       // 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SwayModifier_Crouch;                                      // 0x0044(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SwayModifier_Prone;                                       // 0x0048(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CameraDOF_Range;                                          // 0x004C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CameraDOF_NearRange;                                      // 0x0050(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CameraDOF_Power;                                          // 0x0054(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bUseDynamicReverbAK : 1;                                  // 0x0058(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<float>                                      IronSightZeroingDistances;                                // 0x0060(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	float                                              AnimationKick;                                            // 0x0070(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimMontage*                                RecoilMontage;                                            // 0x0078(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      DestructibleDoor : 1;                                     // 0x0080(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0081(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.WeaponData.ThrownType
	float                                              WeaponEquipDuration;                                      // 0x0084(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              WeaponReadyDuration;                                      // 0x0088(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bForceFireAfterEquip : 1;                                 // 0x008C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PhysicalBodyHitImpactPower;                               // 0x0090(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WeaponAttachmentTagPositionData
// 0x0010
struct FWeaponAttachmentTagPositionData
{
	struct FName                                       AttachmentTag;                                            // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       AttachmentPoint;                                          // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WeaponAttachmentPositionData
// 0x0020
struct FWeaponAttachmentPositionData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.WeaponAttachmentPositionData.AttachmentSlotID
	struct FName                                       AttachmentPoint;                                          // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<struct FWeaponAttachmentTagPositionData>    AttachmentPointByTag;                                     // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
};

// ScriptStruct TslGame.WeaponAttachmentAssetData
// 0x0030
struct FWeaponAttachmentAssetData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.WeaponAttachmentAssetData.AttachmentSlotID
	struct FName                                       AttachmentTag;                                            // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TAssetPtr<class UStaticMesh>                       AttachmentMeshAsset;                                      // 0x0010(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
};

// ScriptStruct TslGame.WeaponBasicAnim
// 0x0018
struct FWeaponBasicAnim
{
	class UAnimMontage*                                PullOut;                                                  // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimMontage*                                PutIn;                                                    // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimMontage*                                Pickup;                                                   // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WeaponRollAnim
// 0x0010
struct FWeaponRollAnim
{
	class UAnimMontage*                                RollLeft;                                                 // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimMontage*                                RollRight;                                                // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WeaponAttachmentTagData
// 0x0018
struct FWeaponAttachmentTagData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.WeaponAttachmentTagData.AttachmentSlotID
	TArray<struct FName>                               AttachableTags;                                           // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
};

// ScriptStruct TslGame.LobbyItemBundleElement
// 0x0028
struct FLobbyItemBundleElement
{
	TAssetPtr<class UClass>                            ItemAsset;                                                // 0x0000(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	int                                                BundleId;                                                 // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                Quantity;                                                 // 0x0024(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.LobbyItemBundle
// 0x0030
struct FLobbyItemBundle
{
	int                                                BundleId;                                                 // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_IsPlainOldData)
	struct FString                                     BundleName;                                               // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0018(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.LobbyItemBundle.Type
	TArray<struct FLobbyItemBundleElement>             ItemList;                                                 // 0x0020(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
};

// ScriptStruct TslGame.NameWeight
// 0x0010
struct FNameWeight
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Weight;                                                   // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.ItemSpotTypeProperty
// 0x0038
struct FItemSpotTypeProperty
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.ItemSpotTypeProperty.SpotType
	float                                              SpotPercentMin;                                           // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SpotPercentMax;                                           // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                ItemsPerSpotMin;                                          // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                ItemsPerSpotMax;                                          // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<struct FNameWeight>                         WeightsPerValue;                                          // 0x0018(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<struct FNameWeight>                         WeightsPerCategory;                                       // 0x0028(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
};

// ScriptStruct TslGame.ItemSpotGroupTypeProperty
// 0x0168
struct FItemSpotGroupTypeProperty
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.ItemSpotGroupTypeProperty.SpotGroupType
	float                                              SpotGroupPercent;                                         // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<struct FItemSpotTypeProperty>               SpotTypeProperties;                                       // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x150];                                     // 0x0018(0x0150) MISSED OFFSET
};

// ScriptStruct TslGame.MaterialMergerParameters
// 0x0018
struct FMaterialMergerParameters
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0008(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.MaterialMergerParameters.Type
	unsigned char                                      bStoreToLUT : 1;                                          // 0x0009(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                LUTIndex;                                                 // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0010(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.MaterialMergerParameters.LUTChannel
};

// ScriptStruct TslGame.BattleRoyalePoisionGasData
// 0x0030
struct FBattleRoyalePoisionGasData
{
	float                                              StartDelay;                                               // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              WarningDuration;                                          // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReleaseDuration;                                          // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RadiusRate;                                               // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RandomRadiusRate;                                         // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PoisonGasDamagePerSecond;                                 // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SpreadRatio;                                              // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DamageMagnifierForDistance;                               // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DamageMagnifier;                                          // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 DamageMagnifierCurve;                                     // 0x0028(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WeaponGunData
// 0x0090
struct FWeaponGunData
{
	class UClass*                                      AmmoItemClass;                                            // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             TracerClass;                                              // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                AmmoPerClip;                                              // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              TimeBetweenShots;                                         // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              NoAnimReloadDuration;                                     // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x001C(0x0010) UNKNOWN PROPERTY: ArrayProperty TslGame.WeaponGunData.FiringModes
	int                                                BurstShots;                                               // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              BurstDelay;                                               // 0x0034(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                BulletPerFiring;                                          // 0x0038(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FiringBulletsSpread;                                      // 0x003C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bIsArrowProjectile : 1;                                   // 0x0040(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bRotationFromBarrelWhenScoped : 1;                        // 0x0041(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0042(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.WeaponGunData.ReloadMethod
	float                                              ReloadDurationByOneInitial;                               // 0x0044(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ReloadDurationByOneLoop;                                  // 0x0048(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MovementModifierAim;                                      // 0x004C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MovementModifierScope;                                    // 0x0050(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              WeaponLength;                                             // 0x0054(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ShoulderLength;                                           // 0x0058(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              WeaponSuppressorLength;                                   // 0x005C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              TraceRadius;                                              // 0x0060(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              TraceAdditiveZ;                                           // 0x0064(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      DebugWeaponCollision : 1;                                 // 0x0068(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector3D                                     HandWeaponOffset;                                         // 0x006C(0x000C) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector3D                                     HandWeaponOffsetFPP;                                      // 0x0078(0x000C) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bManualCycleAfterShot : 1;                                // 0x0084(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bManualCycleInitialStateReady : 1;                        // 0x0085(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              LongTailDelay;                                            // 0x0088(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bUseConstScope : 1;                                       // 0x008C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WeaponDeviationData
// 0x0044
struct FWeaponDeviationData
{
	float                                              DeviationBase;                                            // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DeviationBaseAim;                                         // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DeviationBaseADS;                                         // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MOA;                                                      // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DeviationRecoilGain;                                      // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DeviationRecoilGainAim;                                   // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DeviationRecoilGainADS;                                   // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DeviationMax;                                             // 0x001C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DeviationMinMove;                                         // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DeviationMaxMove;                                         // 0x0024(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DeviationMoveMultiplier;                                  // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DeviationMoveMinReferenceVelocity;                        // 0x002C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DeviationMoveMaxReferenceVelocity;                        // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DeviationStanceStand;                                     // 0x0034(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DeviationStanceCrouch;                                    // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DeviationStanceProne;                                     // 0x003C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DeviationStanceJump;                                      // 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WeaponGunAnim
// 0x00F0
struct FWeaponGunAnim
{
	class UAnimMontage*                                Fire;                                                     // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bLoopedFire : 1;                                          // 0x0008(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
	class UAnimMontage*                                Reload;                                                   // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UBlendSpace1D*                               CharacterGripBlendspace;                                  // 0x0018(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UBlendSpaceBase*                             CharacterLHGripBlendspace;                                // 0x0020(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimMontage*                                CharacterFire;                                            // 0x0028(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimMontage*                                CharacterFireCycle;                                       // 0x0030(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimMontage*                                CharacterFireSelector;                                    // 0x0038(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimMontage*                                CharacterReloadTactical;                                  // 0x0040(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimMontage*                                CharacterReloadCharge;                                    // 0x0048(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimMontage*                                CharacterReloadByOneStart;                                // 0x0050(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimMontage*                                CharacterReloadByOneStop;                                 // 0x0058(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimMontage*                                CharacterReloadByOneSingle;                               // 0x0060(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimMontage*                                WeaponReloadTactical;                                     // 0x0068(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimMontage*                                WeaponReloadCharge;                                       // 0x0070(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ReloadDurationTactical;                                   // 0x0078(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ReloadDurationCharge;                                     // 0x007C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ReloadDurationStart;                                      // 0x0080(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ReloadDurationLoop;                                       // 0x0084(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ReloadDurationMagOut;                                     // 0x0088(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bUseBoltAction : 1;                                       // 0x008C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FireCycleDelay;                                           // 0x0090(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FireCycleDuration;                                        // 0x0094(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CycleAfterReloadDelay;                                    // 0x0098(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bCycleAfterLastShot : 1;                                  // 0x009C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bCycleDuringReload : 1;                                   // 0x009D(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      ShotCameraShake;                                          // 0x00A0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      ShotCameraShakeIronsight;                                 // 0x00A8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      ShotCameraShakeADS;                                       // 0x00B0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCameraAnim*                                 CycleCameraAnim;                                          // 0x00B8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RecoilKickADS;                                            // 0x00C0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector3D                                     RecoilADSSocketOffsetScale;                               // 0x00C4(0x000C) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector3D                                     MagDropLinearVelocity;                                    // 0x00D0(0x000C) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector3D                                     MagDropAngularVelocity;                                   // 0x00DC(0x000C) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              InertiaInterpMultiplier;                                  // 0x00E8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              InertiaClampMultiplier;                                   // 0x00EC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.TakeHitInfo
// 0x0040
struct FTakeHitInfo
{
	float                                              ActualDamage;                                             // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      DamageType;                                               // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TWeakObjectPtr<class ATslPlayerState>              PlayerInstigator;                                         // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     DamageOrigin;                                             // 0x0018(0x000C)
	class Vector3D                                     RelHitLocation;                                           // 0x0024(0x000C)
	struct FName                                       BoneName;                                                 // 0x0030(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DamageMaxRadius;                                          // 0x0038(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      ShotDirPitch;                                             // 0x003C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      ShotDirYaw;                                               // 0x003D(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bPointDamage : 1;                                         // 0x003E(0x0001)
	unsigned char                                      bRadialDamage : 1;                                        // 0x003E(0x0001)
	unsigned char                                      bKilled : 1;                                              // 0x003E(0x0001)
	unsigned char                                      EnsureReplicationByte;                                    // 0x003F(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.CharacterAnim
// 0x0010
struct FCharacterAnim
{
	class UAnimMontage*                                PickUpAnim;                                               // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimMontage*                                DeathAnim;                                                // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.ZombieCustomizationData
// 0x0028
struct FZombieCustomizationData
{
	struct FString                                     StringOptionKey;                                          // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0010(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.ZombieCustomizationData.Gender
	TArray<struct FString>                             ZombieOptionValues;                                       // 0x0018(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
};

// ScriptStruct TslGame.BuffWithBoostGauge
// 0x0018
struct FBuffWithBoostGauge
{
	float                                              BoostGauge;                                               // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      Buff;                                                     // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       OverlapId;                                                // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.AnimUpdateRateSettings
// 0x0078
struct FAnimUpdateRateSettings
{
	unsigned char                                      bUseLookAheadMode : 1;                                    // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bShouldUseLodMap : 1;                                     // 0x0001(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TMap<int, int>                                     LODToFrameSkipMap;                                        // 0x0008(0x0050) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	int                                                BaseNonRenderedUpdateRate;                                // 0x0058(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<float>                                      BaseVisibleDistanceFactorThesholds;                       // 0x0060(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	int                                                MaxEvalRateForInterpolation;                              // 0x0070(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.StanceTransition
// 0x0010
struct FStanceTransition
{
	class UAnimMontage*                                TransitionAnim;                                           // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      CanPlayInMoving : 1;                                      // 0x0008(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.StanceTransitionData
// 0x0060
struct FStanceTransitionData
{
	struct FStanceTransition                           StandToCrouch;                                            // 0x0000(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FStanceTransition                           CrouchToStand;                                            // 0x0010(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FStanceTransition                           StandToProne;                                             // 0x0020(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FStanceTransition                           ProneToStand;                                             // 0x0030(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FStanceTransition                           CrouchToProne;                                            // 0x0040(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FStanceTransition                           ProneToCrouch;                                            // 0x0050(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
};

// ScriptStruct TslGame.GeneralSpotGroupProperty
// 0x0020
struct FGeneralSpotGroupProperty
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.GeneralSpotGroupProperty.GroupType
	unsigned char                                      bActiveByStartVolume : 1;                                 // 0x0001(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0002(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.GeneralSpotGroupProperty.SpawnType
	struct FFloatRange                                 TotalCountRange;                                          // 0x0004(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	float                                              TotalCountMultiplierWithPlayerCount;                      // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ProbabilityPercent;                                       // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ProbabilityPercentMultiplierWithPlayerCount;              // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.PackageSpawnProb
// 0x0018
struct FPackageSpawnProb
{
	float                                              ProbabilityPercent;                                       // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       ValueFilter;                                              // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       CategoryFilter;                                           // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.PackageSpotGroupProperty
// 0x0018 (0x0038 - 0x0020)
struct FPackageSpotGroupProperty : public FGeneralSpotGroupProperty
{
	class UClass*                                      ItemPackageClass;                                         // 0x0020(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<struct FPackageSpawnProb>                   PackageSpawnProbArray;                                    // 0x0028(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
};

// ScriptStruct TslGame.VehicleSpotGroupProperty
// 0x0020 (0x0040 - 0x0020)
struct FVehicleSpotGroupProperty : public FGeneralSpotGroupProperty
{
	TArray<struct FNameWeight>                         WeightsPerCategory;                                       // 0x0020(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	struct FFloatRange                                 FuelPercentRange;                                         // 0x0030(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
};

// ScriptStruct TslGame.AircraftParticle
// 0x0010
struct FAircraftParticle
{
	class UClass*                                      ParticleClass;                                            // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       AttachSocket;                                             // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.DropCarePackageTableData
// 0x0008
struct FDropCarePackageTableData
{
	int                                                DropCount;                                                // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DropPercent;                                              // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.TslImpactSoundInfo
// 0x0060
struct FTslImpactSoundInfo
{
	class UAkAudioEvent*                               DefaultSoundAk;                                           // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               ConcreteSoundAk;                                          // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               DirtSoundAk;                                              // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               WaterSoundAk;                                             // 0x0018(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               MetalSoundAk;                                             // 0x0020(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               WoodSoundAk;                                              // 0x0028(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               GrassSoundAk;                                             // 0x0030(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               GlassSoundAk;                                             // 0x0038(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               FleshSoundAk;                                             // 0x0040(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               RockSoundAk;                                              // 0x0048(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               SandSoundAk;                                              // 0x0050(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               MudSoundAk;                                               // 0x0058(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.VelocityGearData
// 0x0008
struct FVelocityGearData
{
	float                                              DownSpeed;                                                // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              UpSpeed;                                                  // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.CustomTransmissionData
// 0x0020
struct FCustomTransmissionData
{
	unsigned char                                      bUseVelocityTransmission : 1;                             // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CustomTransmissionMaxSpeed;                               // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bDownShiftingOnly : 1;                                    // 0x0008(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FVelocityGearData>                   VelocityGears;                                            // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct TslGame.VaultingTask
// 0x0040
struct FVaultingTask
{
	class Vector3D                                     V_Start;                                                  // 0x0000(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector3D                                     V_Apex;                                                   // 0x000C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector3D                                     V_ApexAdditive;                                           // 0x0018(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector3D                                     V_End;                                                    // 0x0024(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0030(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.VaultingTask.InVaultType
	unsigned char                                      bEndToFall : 1;                                           // 0x0031(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Direction;                                                // 0x0034(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PlayerSpeed;                                              // 0x0038(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DistanceFromObject;                                       // 0x003C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.DamageRatioInfo
// 0x0008
struct FDamageRatioInfo
{
	float                                              DamageRatio;                                              // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0004(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.DamageRatioInfo.DamageVictimActorType
};

// ScriptStruct TslGame.BoneBinding
// 0x0010
struct FBoneBinding
{
	struct FName                                       ImpactBone;                                               // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       ReactionBone;                                             // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.ChineseLicensingDefaultCustomizeData
// 0x0018
struct FChineseLicensingDefaultCustomizeData
{
	struct FString                                     CustomizableObjectGroupName;                              // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	class UClass*                                      EquipableItem;                                            // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.InteractionCollisionData
// 0x0014
struct FInteractionCollisionData
{
	float                                              CapsuleHalfHeight;                                        // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CapsuleRadius;                                            // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     CapsuleOffset;                                            // 0x0008(0x000C) (CPF_Edit, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.LevelLoadingBoostParameters
// 0x0010
struct FLevelLoadingBoostParameters
{
	float                                              AsyncLoadingTimeLimit;                                    // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PriorityAsyncLoadingExtraTime;                            // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LevelStreamingActorsUpdateTimeLimit;                      // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                LevelStreamingComponentsRegistrationGranularity;          // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.NearClippingValue
// 0x0008
struct FNearClippingValue
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.NearClippingValue.Level
	float                                              Value;                                                    // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.CustomizableCategoryData
// 0x0030
struct FTslGame_FCustomizableCategoryData
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FName                                       Category;                                                 // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<struct FName>                               NotDuplicateCategoryNames;                                // 0x0020(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
};

// ScriptStruct TslGame.CustomizableActionName
// 0x0028
struct FCustomizableActionName
{
	struct FName                                       Category;                                                 // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       ActionName;                                               // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FText                                       DisplayName;                                              // 0x0010(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
};

// ScriptStruct TslGame.CustomizableAxisName
// 0x0030
struct FTslGame_FCustomizableAxisName
{
	struct FName                                       Category;                                                 // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       AxisName;                                                 // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FText                                       DisplayName;                                              // 0x0010(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	float                                              Scale;                                                    // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.CustomizableMouseSensitiveName
// 0x0028
struct FCustomizableMouseSensitiveName
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FName                                       MouseSensitiveName;                                       // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MouseSensitivity;                                         // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.CustomizableGamePadSensitiveName
// 0x0030
struct FCustomizableGamePadSensitiveName
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FName                                       GamePadSensitiveName;                                     // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              GamePadSensitivity;                                       // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 GamePadCurve;                                             // 0x0028(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.SurportQualityLevel
// 0x0020
struct FSurportQualityLevel
{
	int                                                QualityLevel;                                             // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       DisplayQualityLevelName;                                  // 0x0008(0x0018) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct TslGame.ScreenResolution
// 0x0008
struct FScreenResolution
{
	int                                                Width;                                                    // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Height;                                                   // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.ColorBlindType
// 0x0020
struct FColorBlindType
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.ColorBlindType.Key
	struct FText                                       DisplayName;                                              // 0x0008(0x0018) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct TslGame.PresetColor
// 0x0038
struct FPresetColor
{
	struct FLinearColor                                Color;                                                    // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FText                                       DisplayName;                                              // 0x0010(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FString                                     ColorString;                                              // 0x0028(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
};

// ScriptStruct TslGame.KeyInputModeName
// 0x0020
struct FKeyInputModeName
{
	struct FName                                       ModeName;                                                 // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FText                                       DisplayName;                                              // 0x0008(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
};

// ScriptStruct TslGame.UiType
// 0x0028
struct FUiType
{
	struct FText                                       DisplayUiName;                                            // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FString                                     UiKey;                                                    // 0x0018(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
};

// ScriptStruct TslGame.ColorBlindColorData
// 0x0014
struct FColorBlindColorData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.ColorBlindColorData.Type
	struct FLinearColor                                Color;                                                    // 0x0004(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.ColorBlindColorSet
// 0x0010
struct FColorBlindColorSet
{
	TArray<struct FColorBlindColorData>                ColorSet;                                                 // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
};

// ScriptStruct TslGame.TeamColorAndIcon
// 0x0038
struct FTeamColorAndIcon
{
	struct FColorBlindColorSet                         TeamMemberColor;                                          // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class UTexture*                                    MarkerIcon;                                               // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UTexture*                                    PlayerIcon;                                               // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UTexture*                                    CompassIcon;                                              // 0x0020(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UTexture*                                    IndicatorIcon;                                            // 0x0028(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UTexture*                                    MapDeathIcon;                                             // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.OverrideScalabilityValue
// 0x0028
struct FOverrideScalabilityValue
{
	struct FString                                     ConsoleName;                                              // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0010(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.OverrideScalabilityValue.ValueType
	TArray<struct FString>                             Values;                                                   // 0x0018(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
};

// ScriptStruct TslGame.OverrideScalability
// 0x0018
struct FOverrideScalability
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.OverrideScalability.QualityType
	TArray<struct FOverrideScalabilityValue>           OverrideScalabilityValues;                                // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
};

// ScriptStruct TslGame.ReportCauseData
// 0x0020
struct FReportCauseData
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0018(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.ReportCauseData.ReportCauseType
};

// ScriptStruct TslGame.SubjectToReport
// 0x0020
struct FSubjectToReport
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0018(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.SubjectToReport.SubjectToReportType
};

// ScriptStruct TslGame.AimAssistData
// 0x0030
struct FAimAssistData
{
	float                                              MinDistance;                                              // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MaxDistance;                                              // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              TrackingModifier;                                         // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AdhesionSpeed;                                            // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DeadZoneValue;                                            // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bUseTrackingModifierCurve : 1;                            // 0x0014(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 TrackingModifierCurve;                                    // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bUseAdhesionSpeedCurve : 1;                               // 0x0020(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 AdhesionSpeedCurve;                                       // 0x0028(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.AnimatableCustomizableObjectData
// 0x0018
struct FAnimatableCustomizableObjectData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.AnimatableCustomizableObjectData.ParamType
	TArray<struct FName>                               AnimatableCustomizableObjectNames;                        // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
};

// ScriptStruct TslGame.TslStartParameter
// 0x0080
struct FTslStartParameter
{
	unsigned char                                      bIsCustomGame : 1;                                        // 0x0000(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     MapName;                                                  // 0x0008(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     MatchId;                                                  // 0x0018(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	int                                                MinPlayerCount;                                           // 0x0028(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxPlayerCount;                                           // 0x002C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TMap<struct FString, struct FString>               StringParameter;                                          // 0x0030(0x0050) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
};

// ScriptStruct TslGame.ReplayKillEventItem
// 0x0078
struct FReplayKillEventItem
{
	struct FString                                     ID;                                                       // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     Group;                                                    // 0x0010(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     MetaData;                                                 // 0x0020(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	int                                                Time1;                                                    // 0x0030(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Time2;                                                    // 0x0034(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     KillerName;                                               // 0x0038(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     KillerNetId;                                              // 0x0048(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     VictimName;                                               // 0x0058(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     VictimNetId;                                              // 0x0068(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
};

// ScriptStruct TslGame.ReplayGroggyEventItem
// 0x0078
struct FReplayGroggyEventItem
{
	struct FString                                     ID;                                                       // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     Group;                                                    // 0x0010(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     MetaData;                                                 // 0x0020(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	int                                                Time1;                                                    // 0x0030(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Time2;                                                    // 0x0034(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     InstigatorName;                                           // 0x0038(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     InstigatorNetId;                                          // 0x0048(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     VictimName;                                               // 0x0058(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     VictimNetId;                                              // 0x0068(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
};

// ScriptStruct TslGame.ReplayItem
// 0x0090
struct FReplayItem
{
	struct FString                                     FriendlyName;                                             // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FString                                     Name;                                                     // 0x0010(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
	unsigned char                                      bIsLive : 1;                                              // 0x0020(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FDateTime                                   Date;                                                     // 0x0028(0x0008) (CPF_BlueprintVisible)
	int                                                SizeInBytes;                                              // 0x0030(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                LengthInMS;                                               // 0x0034(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumViewers;                                               // 0x0038(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIncomplete : 1;                                          // 0x003C(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsVersionCompatible : 1;                                 // 0x003D(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsCorrupted : 1;                                         // 0x003E(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsServerRecording : 1;                                   // 0x003F(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bShouldKeep : 1;                                          // 0x0040(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bArchived : 1;                                            // 0x0041(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     Mode;                                                     // 0x0048(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FString                                     RecordUserId;                                             // 0x0058(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FString                                     RecordUserNickName;                                       // 0x0068(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FString                                     MapName;                                                  // 0x0078(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
	int                                                ArchiveSizeInBytes;                                       // 0x0088(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.TslPlayerStateSummary
// 0x0040
struct FTslPlayerStateSummary
{
	struct FString                                     UniqueId;                                                 // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     PlayerName;                                               // 0x0010(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	int                                                TeamNumber;                                               // 0x0020(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Ranking;                                                  // 0x0024(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                HeadShots;                                                // 0x0028(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumKills;                                                 // 0x002C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TotalGivenDamages;                                        // 0x0030(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LongestDistanceKill;                                      // 0x0034(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TotalMovedDistanceMeter;                                  // 0x0038(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.TslReplaySummary
// 0x0080
struct FTslReplaySummary
{
	struct FString                                     MatchId;                                                  // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	unsigned char                                      bIsServerRecording : 1;                                   // 0x0010(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     RecordUserId;                                             // 0x0018(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     RecordUserNickName;                                       // 0x0028(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     MapName;                                                  // 0x0038(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     WeatherName;                                              // 0x0048(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     RegionName;                                               // 0x0058(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	int                                                NumPlayers;                                               // 0x0068(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumTeams;                                                 // 0x006C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FTslPlayerStateSummary>              PlayerStateSummaries;                                     // 0x0070(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
};

// ScriptStruct TslGame.TslChatStyle
// 0x0980 (0x0988 - 0x0008)
struct FTslChatStyle : public FSlateWidgetStyle
{
	struct FEditableTextBoxStyle                       TextEntryStyle;                                           // 0x0008(0x0870) (CPF_Edit)
	struct FSlateBrush                                 BackingBrush;                                             // 0x0878(0x0090) (CPF_Edit)
	struct FSlateColor                                 BoxBorderColor;                                           // 0x0908(0x0028) (CPF_Edit)
	struct FSlateColor                                 TextColor;                                                // 0x0930(0x0028) (CPF_Edit)
	struct FSlateSound                                 RxMessgeSound;                                            // 0x0958(0x0018) (CPF_Edit)
	struct FSlateSound                                 TxMessgeSound;                                            // 0x0970(0x0018) (CPF_Edit)
};

// ScriptStruct TslGame.AutoCompleteVehiclePaths
// 0x0020
struct FAutoCompleteVehiclePaths
{
	struct FString                                     Kind;                                                     // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FString                                     path;                                                     // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
};

// ScriptStruct TslGame.DamageFieldLayout
// 0x0018
struct FDamageFieldLayout
{
	float                                              CreationDelay;                                            // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector2D                                     LocationOffset;                                           // 0x0004(0x0008) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x000C(0x000C) MISSED OFFSET
};

// ScriptStruct TslGame.DoorBreakingStateLegacy
// 0x0001
struct FDoorBreakingStateLegacy
{
	unsigned char                                      bIsBrokenTop : 1;                                         // 0x0000(0x0001)
	unsigned char                                      bIsBrokenCenter : 1;                                      // 0x0000(0x0001)
	unsigned char                                      bIsBrokenBottom : 1;                                      // 0x0000(0x0001)
	unsigned char                                      bIsDM : 1;                                                // 0x0000(0x0001)
};

// ScriptStruct TslGame.DecalEffectData
// 0x0028
struct FDecalEffectData
{
	class UMaterial*                                   Material;                                                 // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FFloatRange                                 Size;                                                     // 0x0008(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
	float                                              FadeScreenSize;                                           // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FadeStartDelay;                                           // 0x001C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FadeDuration;                                             // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bUseRandomInput : 1;                                      // 0x0024(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bUseRandomRoll : 1;                                       // 0x0025(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bReversal : 1;                                            // 0x0026(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.DecalEffectDataSet
// 0x0168
struct FDecalEffectDataSet
{
	struct FDecalEffectData                            DefaultDecal;                                             // 0x0000(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FDecalEffectData                            ConcreteDecal;                                            // 0x0028(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FDecalEffectData                            DirtDecal;                                                // 0x0050(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FDecalEffectData                            WaterDecal;                                               // 0x0078(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FDecalEffectData                            MetalDecal;                                               // 0x00A0(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FDecalEffectData                            WoodDecal;                                                // 0x00C8(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FDecalEffectData                            GlassDecal;                                               // 0x00F0(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FDecalEffectData                            GrassDecal;                                               // 0x0118(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FDecalEffectData                            FleshDecal;                                               // 0x0140(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
};

// ScriptStruct TslGame.VehicleReactionData
// 0x000C
struct FVehicleReactionData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.VehicleReactionData.ReactionType
	float                                              ReactionForceFactor;                                      // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReactionMinSpeed;                                         // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.RadialDamageReactionData
// 0x000C
struct FRadialDamageReactionData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.RadialDamageReactionData.ReactionType
	float                                              ReactionForceFactor;                                      // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReactionMinDamage;                                        // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.PointDamageReactionData
// 0x0010
struct FPointDamageReactionData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.PointDamageReactionData.ReactionType
	float                                              ReactionForceFactor;                                      // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReactionMinDamage;                                        // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DamageAccumulateTimeout;                                  // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.MatchPreparerClass
// 0x0010
struct FMatchPreparerClass
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.MatchPreparerClass.Type
	class UClass*                                      Class;                                                    // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.CustomGameUpdateCharacterInfo
// 0x0014
struct FCustomGameUpdateCharacterInfo
{
	unsigned char                                      bIsZombie : 1;                                            // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsGroggyMode : 1;                                        // 0x0001(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReviveCastingTime;                                        // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MultiplierGroggyDamagePerSecond;                          // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MultiplierPunchDamage;                                    // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MultiplierZombieToZombieDamage;                           // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.LimitCustomStringParameter
// 0x0018
struct FLimitCustomStringParameter
{
	struct FString                                     CustomStringParameter;                                    // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	float                                              MinLimit;                                                 // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxLimit;                                                 // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.RedZoneCustomOption
// 0x001C
struct FRedZoneCustomOption
{
	unsigned char                                      bIsActive : 1;                                            // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MultiplierRedZoneExplosionDensity;                        // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MultiplierRedZoneStartTime;                               // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MultiplierRedZoneEndTime;                                 // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MultiplierRedZoneExplosionDelay;                          // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MultiplierRedZoneDuration;                                // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MultiplierRedZoneArea;                                    // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.BlueZoneCustomOption
// 0x0014
struct FBlueZoneCustomOption
{
	int                                                PhaseNum;                                                 // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              WarningDuration;                                          // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReleaseDuration;                                          // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PoisonGasDamagePerSecond;                                 // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RadiusRate;                                               // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.Teams
// 0x0018
struct FTeams
{
	int                                                TeamNum;                                                  // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class ATeam*>                               Members;                                                  // 0x0008(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.TslInputKey
// 0x0020
struct FTslInputKey
{
	struct FKey                                        Key;                                                      // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bShift : 1;                                               // 0x0018(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bCtrl : 1;                                                // 0x0018(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bAlt : 1;                                                 // 0x0018(0x0001) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct TslGame.CustomActionKeyData
// 0x0018
struct FCustomActionKeyData
{
	struct FName                                       ActionName;                                               // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FTslInputKey>                        Keys;                                                     // 0x0008(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.CustomAxisKeyData
// 0x0020
struct FCustomAxisKeyData
{
	struct FName                                       AxisName;                                                 // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Scale;                                                    // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FTslInputKey>                        Keys;                                                     // 0x0010(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.CustomMouseSensitiveData
// 0x0010
struct FCustomMouseSensitiveData
{
	struct FName                                       MouseSensitiveName;                                       // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MouseSensitivity;                                         // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LastConvertedMouseSensitivity;                            // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.CustomGamePadSensitiveData
// 0x0010
struct FCustomGamePadSensitiveData
{
	struct FName                                       GamePadSensitiveName;                                     // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              GamePadSensitivity;                                       // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LastConvertedGamePadSensitivity;                          // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.CustomInputSettings
// 0x0058
struct FCustomInputSettings
{
	TArray<struct FCustomActionKeyData>                ActionKeyList;                                            // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_Config)
	TArray<struct FCustomAxisKeyData>                  AxisKeyList;                                              // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_Config)
	TArray<struct FCustomMouseSensitiveData>           MouseSensitiveList;                                       // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_Config)
	TArray<struct FCustomGamePadSensitiveData>         GamePadSensitiveList;                                     // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_Config)
	unsigned char                                      bInvertMouse : 1;                                         // 0x0040(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bInvertGamePadY : 1;                                      // 0x0041(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bInvertGamePadX : 1;                                      // 0x0042(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              GamePadDeadZone;                                          // 0x0044(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0048(0x0010) MISSED OFFSET
};

// ScriptStruct TslGame.HealthColorData
// 0x0018
struct FHealthColorData
{
	struct FFloatInterval                              HealthPercentRange;                                       // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FLinearColor                                Color;                                                    // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.HornPlayInfo
// 0x0008
struct FHornPlayInfo
{
	unsigned char                                      bMakeSureDirty : 1;                                       // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0001(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.HornPlayInfo.HornSoundType
	float                                              KeyPressedTime;                                           // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.HornSoundInfo
// 0x0010
struct FHornSoundInfo
{
	class UAkAudioEvent*                               HornOnSound;                                              // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               HornOffSound;                                             // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WeatherLevelInfo
// 0x0020
struct FWeatherLevelInfo
{
	struct FString                                     WeatherId;                                                // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	int                                                Weight;                                                   // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       WeatherLevel;                                             // 0x0018(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.TslMenuItemStyle
// 0x01B0 (0x01B8 - 0x0008)
struct FTslMenuItemStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 BackgroundBrush;                                          // 0x0008(0x0090) (CPF_Edit)
	struct FSlateBrush                                 LeftArrowImage;                                           // 0x0098(0x0090) (CPF_Edit)
	struct FSlateBrush                                 RightArrowImage;                                          // 0x0128(0x0090) (CPF_Edit)
};

// ScriptStruct TslGame.TslMenuSoundsStyle
// 0x0030 (0x0038 - 0x0008)
struct FTslMenuSoundsStyle : public FSlateWidgetStyle
{
	struct FSlateSound                                 StartGameSound;                                           // 0x0008(0x0018) (CPF_Edit)
	struct FSlateSound                                 ExitGameSound;                                            // 0x0020(0x0018) (CPF_Edit)
};

// ScriptStruct TslGame.TslMenuStyle
// 0x0210 (0x0218 - 0x0008)
struct FTslMenuStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 HeaderBackgroundBrush;                                    // 0x0008(0x0090) (CPF_Edit)
	struct FSlateBrush                                 LeftBackgroundBrush;                                      // 0x0098(0x0090) (CPF_Edit)
	struct FSlateBrush                                 RightBackgroundBrush;                                     // 0x0128(0x0090) (CPF_Edit)
	struct FSlateSound                                 MenuEnterSound;                                           // 0x01B8(0x0018) (CPF_Edit)
	struct FSlateSound                                 MenuBackSound;                                            // 0x01D0(0x0018) (CPF_Edit)
	struct FSlateSound                                 OptionChangeSound;                                        // 0x01E8(0x0018) (CPF_Edit)
	struct FSlateSound                                 MenuItemChangeSound;                                      // 0x0200(0x0018) (CPF_Edit)
};

// ScriptStruct TslGame.ParticleParameter
// 0x0018
struct FParticleParameter
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	float                                              Value;                                                    // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bEnableRTPC : 1;                                          // 0x0014(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.ReplicatedCastableItem
// 0x0010
struct FReplicatedCastableItem
{
	class UClass*                                      CastableItemClass;                                        // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0008(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.ReplicatedCastableItem.ItemType
	int                                                ItemCount;                                                // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.TslPlayerScores
// 0x000C
struct FTslPlayerScores
{
	float                                              ScoreByDamage;                                            // 0x0000(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ScoreByKill;                                              // 0x0004(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ScoreByRanking;                                           // 0x0008(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.TslPlayerStatistics
// 0x0004
struct FTslPlayerStatistics
{
	int                                                NumKills;                                                 // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.TslPlayerStatisticsForOwner
// 0x0010
struct FTslPlayerStatisticsForOwner
{
	float                                              TotalMovedDistanceMeter;                                  // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TotalGivenDamages;                                        // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LongestDistanceKill;                                      // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                HeadShots;                                                // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.ReplicatedEquipableItem
// 0x0010
struct FReplicatedEquipableItem
{
	class UClass*                                      EquipableItemClass;                                       // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              Durability;                                               // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.PostProcessMaterial
// 0x0010
struct FPostProcessMaterial
{
	class UMaterialInterface*                          EffectMaterial;                                           // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BlendWeight;                                              // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.PostProcessEffectParameter
// 0x0018
struct FPostProcessEffectParameter
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	float                                              Value;                                                    // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.PostProcessEffectDynamicMaterialState
// 0x0010
struct FPostProcessEffectDynamicMaterialState
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct TslGame.ProjectileWeaponData
// 0x0008
struct FProjectileWeaponData
{
	class UClass*                                      ProjectileClass;                                          // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.ThrowableAnim
// 0x0018
struct FThrowableAnim
{
	class UAnimMontage*                                PinOff;                                                   // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimMontage*                                Cooking;                                                  // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimMontage*                                Release;                                                  // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.ThrowableWeaponData
// 0x00A0
struct FThrowableWeaponData
{
	class UClass*                                      ProjectileClass;                                          // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       CookingSocketName;                                        // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      CookingEffectClass;                                       // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      Ring;                                                     // 0x0018(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       RingAttachSocket;                                         // 0x0020(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0028(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.ThrowableWeaponData.ExplosionStartType
	float                                              ExplosionDelay;                                           // 0x002C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FireDelay;                                                // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ActivationTimeLimit;                                      // 0x0034(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FThrowableAnim                              StandAnim;                                                // 0x0038(0x0018) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FThrowableAnim                              CrouchAnim;                                               // 0x0050(0x0018) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FThrowableAnim                              ProneAnim;                                                // 0x0068(0x0018) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 SpeedCurve;                                               // 0x0080(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 PitchCurve;                                               // 0x0088(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ThrowTime;                                                // 0x0090(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ThrowCooldownDuration;                                    // 0x0094(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bCanBeCooked : 1;                                         // 0x0098(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.ProjectileData
// 0x0030
struct FProjectileData
{
	float                                              ProjectileLife;                                           // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                ExplosionDamage;                                          // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ExplosionRadius;                                          // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 DamageCurve;                                              // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MinImpactVelocityForSound;                                // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              TimeBetweenImpactSound;                                   // 0x001C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      DamageType;                                               // 0x0020(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      DestroyAtExplosion : 1;                                   // 0x0028(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.DoorBreakingState
// 0x0001
struct FDoorBreakingState
{
	unsigned char                                      bIsBrokenTop : 1;                                         // 0x0000(0x0001)
	unsigned char                                      bIsBrokenCenter : 1;                                      // 0x0000(0x0001)
	unsigned char                                      bIsBrokenBottom : 1;                                      // 0x0000(0x0001)
};

// ScriptStruct TslGame.SavedObPos
// 0x0018
struct FSavedObPos
{
	class Vector3D                                     Loc;                                                      // 0x0000(0x000C) (CPF_IsPlainOldData)
	class Rotator                                      Rot;                                                      // 0x000C(0x000C) (CPF_IsPlainOldData)
};

// ScriptStruct TslGame.BlockAction
// 0x0010
struct FBlockAction
{
	struct FName                                       ActionName;                                               // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TEnumAsByte<EInputEvent>                           KeyEvent;                                                 // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.UmgWidgetBinder
// 0x0018
struct FUmgWidgetBinder
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FName                                       Name;                                                     // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UUserWidget*                                 Parent;                                                   // 0x0010(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.UmgWidgetBinder_Animation
// 0x0008 (0x0020 - 0x0018)
struct FUmgWidgetBinder_Animation : public FUmgWidgetBinder
{
	class UWidgetAnimation*                            CachedAnimation;                                          // 0x0018(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.UmgWidgetBinder_Gerneral
// 0x0008 (0x0020 - 0x0018)
struct FUmgWidgetBinder_Gerneral : public FUmgWidgetBinder
{
	class UWidget*                                     CachedWidget;                                             // 0x0018(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.UmgWidgetBinder_Image
// 0x0010 (0x0028 - 0x0018)
struct FUmgWidgetBinder_Image : public FUmgWidgetBinder
{
	class UImage*                                      CachedImage;                                              // 0x0018(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    CachedMaterial;                                           // 0x0020(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.UmgWidgetBinder_TextBlock
// 0x0008 (0x0020 - 0x0018)
struct FUmgWidgetBinder_TextBlock : public FUmgWidgetBinder
{
	class UTextBlock*                                  CachedTextBlock;                                          // 0x0018(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.SequenceBase
// 0x0098
struct FSequenceBase
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
	class UUserWidget*                                 Widget;                                                   // 0x0018(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x78];                                      // 0x0020(0x0078) MISSED OFFSET
};

// ScriptStruct TslGame.Sequence_Float
// 0x0008 (0x00A0 - 0x0098)
struct FSequence_Float : public FSequenceBase
{
	class UCurveFloat*                                 FloatCurve;                                               // 0x0098(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.DurabilityColor
// 0x0018
struct FDurabilityColor
{
	struct FFloatInterval                              DurabilityRatioRange;                                     // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FLinearColor                                Color;                                                    // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.DurabilityColorSet
// 0x0010
struct FDurabilityColorSet
{
	TArray<struct FDurabilityColor>                    Colors;                                                   // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
};

// ScriptStruct TslGame.HudUiConfig
// 0x0020
struct FHudUiConfig
{
	struct FString                                     WidgetName;                                               // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FTslWidgetConfig                            WidgetConfig;                                             // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct TslGame.UmgWidgetBinder_Border
// 0x0008 (0x0020 - 0x0018)
struct FUmgWidgetBinder_Border : public FUmgWidgetBinder
{
	class UBorder*                                     CachedBorder;                                             // 0x0018(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.UmgWidgetBinder_WidgetSwitcher
// 0x0008 (0x0020 - 0x0018)
struct FUmgWidgetBinder_WidgetSwitcher : public FUmgWidgetBinder
{
	class UWidgetSwitcher*                             CachedWidgetSwitcher;                                     // 0x0018(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.UmgWidgetBinder_Overlay
// 0x0008 (0x0020 - 0x0018)
struct FUmgWidgetBinder_Overlay : public FUmgWidgetBinder
{
	class UOverlay*                                    CachedOverlay;                                            // 0x0018(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.UiEffectAnimation_FloatCurve
// 0x00B0
struct FUiEffectAnimation_FloatCurve
{
	struct FSequence_Float                             FloatCurve;                                               // 0x0000(0x00A0) (CPF_Edit, CPF_BlueprintVisible)
	TArray<struct FName>                               ParamNames;                                               // 0x00A0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
};

// ScriptStruct TslGame.Sequence_Vector
// 0x0008 (0x00A0 - 0x0098)
struct FSequence_Vector : public FSequenceBase
{
	class UCurveVector*                                VectorCurve;                                              // 0x0098(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.UiEffectAnimation_VectorCurve
// 0x00B0
struct FUiEffectAnimation_VectorCurve
{
	struct FSequence_Vector                            VectorCurve;                                              // 0x0000(0x00A0) (CPF_Edit, CPF_BlueprintVisible)
	TArray<struct FName>                               ParamNames;                                               // 0x00A0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
};

// ScriptStruct TslGame.GaugeAlphaCurveType
// 0x0010
struct FGaugeAlphaCurveType
{
	struct FFloatInterval                              DamageRange;                                              // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	class UCurveVector*                                ColorCurve;                                               // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.UmgWidgetBinder_UserWidget
// 0x0008 (0x0020 - 0x0018)
struct FUmgWidgetBinder_UserWidget : public FUmgWidgetBinder
{
	class UUserWidget*                                 CachedWidget;                                             // 0x0018(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.UmgWidgetBinder_CanvasPanel
// 0x0008 (0x0020 - 0x0018)
struct FUmgWidgetBinder_CanvasPanel : public FUmgWidgetBinder
{
	class UCanvasPanel*                                CachedCanvasPanel;                                        // 0x0018(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.UmgWidgetBinder_SizeBox
// 0x0008 (0x0020 - 0x0018)
struct FUmgWidgetBinder_SizeBox : public FUmgWidgetBinder
{
	class USizeBox*                                    CachedSizeBox;                                            // 0x0018(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.DirectionTextData
// 0x0028
struct FDirectionTextData
{
	struct FText                                       DirectionText;                                            // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FLinearColor                                TextColor;                                                // 0x0018(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.HealItemSelectorData
// 0x0018
struct FHealItemSelectorData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.HealItemSelectorData.ItemType
	class UClass*                                      ItemClass;                                                // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UTexture2D*                                  ItemTexture;                                              // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.CauseOfDeathData
// 0x0018
struct FCauseOfDeathData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.CauseOfDeathData.DamageTypeCategory
	class UTexture*                                    CauseOfDeathIcon;                                         // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              IconRatio;                                                // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.ConditionOfDeathData
// 0x0018
struct FConditionOfDeathData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.ConditionOfDeathData.ConditionOfDeathCategory
	class UTexture*                                    ConditionOfDeathIcon;                                     // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              IconRatio;                                                // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.UmgWidgetBinder_VerticalBox
// 0x0008 (0x0020 - 0x0018)
struct FUmgWidgetBinder_VerticalBox : public FUmgWidgetBinder
{
	class UVerticalBox*                                CachedVerticalBox;                                        // 0x0018(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.UmgWidgetBinder_HorizontalBox
// 0x0008 (0x0020 - 0x0018)
struct FUmgWidgetBinder_HorizontalBox : public FUmgWidgetBinder
{
	class UHorizontalBox*                              CachedHorizontalBox;                                      // 0x0018(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.VehicleEffectInfo
// 0x00F0
struct FVehicleEffectInfo
{
	class UClass*                                      Explosion;                                                // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DamagedPercentMax;                                        // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      Damaged;                                                  // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      Destroyed;                                                // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               EngineSound;                                              // 0x0020(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               EngineSound_Remote;                                       // 0x0028(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      Muffler;                                                  // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      Muffler2;                                                 // 0x0038(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      Boost;                                                    // 0x0040(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      Boost2;                                                   // 0x0048(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      FrontTrail;                                               // 0x0050(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      RearTrail;                                                // 0x0058(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      Thruster;                                                 // 0x0060(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      Thruster2;                                                // 0x0068(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      FrontFoamLeft;                                            // 0x0070(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      FrontFoamRight;                                           // 0x0078(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FFloatRange                                 ImpactNormalForceRange;                                   // 0x0080(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	class UClass*                                      ImpactDefault;                                            // 0x0090(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      ImpactConcrete;                                           // 0x0098(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      ImpactDirt;                                               // 0x00A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      ImpactWater;                                              // 0x00A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      ImpactMetal;                                              // 0x00B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      ImpactWood;                                               // 0x00B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      ImpactGlass;                                              // 0x00C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      ImpactGrass;                                              // 0x00C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      ImpactRock;                                               // 0x00D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      ImpactSand;                                               // 0x00D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      ImpactFlesh;                                              // 0x00E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                MaxImpactCount;                                           // 0x00E8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.VehicleDebugHit
// 0x0028
struct FVehicleDebugHit
{
	class Vector3D                                     RelativeNormalImpulse;                                    // 0x0000(0x000C) (CPF_IsPlainOldData)
	class Vector3D                                     RelativeImpactPoint;                                      // 0x000C(0x000C) (CPF_IsPlainOldData)
	class Vector3D                                     AbsoluteImpactPoint;                                      // 0x0018(0x000C) (CPF_IsPlainOldData)
	struct FColor                                      Color;                                                    // 0x0024(0x0004) (CPF_IsPlainOldData)
};

// ScriptStruct TslGame.VehicleSeatInfo
// 0x0018
struct FVehicleSeatInfo
{
	class UClass*                                      SeatClass;                                                // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       RideSocketName;                                           // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       LeaveSocketName;                                          // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.TempComponentInfo
// 0x0028
struct FTempComponentInfo
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
	class USceneComponent*                             ParentComponent;                                          // 0x0018(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class USceneComponent*                             CurrentComponent;                                         // 0x0020(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.RecoilPatternData
// 0x0008
struct FRecoilPatternData
{
	float                                              Magnitude;                                                // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Angle;                                                    // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.TrajectoryWeaponData
// 0x0080
struct FTrajectoryWeaponData
{
	float                                              WeaponSpread;                                             // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AimingSpreadModifier;                                     // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ScopingSpreadModifier;                                    // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FiringSpreadBase;                                         // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              StandRecoveryTime;                                        // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CrouchRecoveryTime;                                       // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ProneRecoveryTime;                                        // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RecoveryInterval;                                         // 0x001C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RecoilSpeed;                                              // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RecoilRecoverySpeed;                                      // 0x0024(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RecoilPatternScale;                                       // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              InitialSpeed;                                             // 0x002C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                HitDamage;                                                // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveVector*                                BallisticCurve;                                           // 0x0038(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RangeModifier;                                            // 0x0040(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ReferenceDistance;                                        // 0x0044(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              TravelDistanceMax;                                        // 0x0048(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SimulationSubstepTime;                                    // 0x004C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              VDragCoefficient;                                         // 0x0050(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              BDS;                                                      // 0x0054(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bUseAdvancedBallistics : 1;                               // 0x0058(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      IsPenetrable : 1;                                         // 0x0059(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      DamageType;                                               // 0x0060(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<struct FRecoilPatternData>                  RecoilPatterns;                                           // 0x0068(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	unsigned char                                      bIsTrajectoryReplicationEnabled : 1;                      // 0x0078(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
};

// ScriptStruct TslGame.RecoilInfo
// 0x0068
struct FRecoilInfo
{
	float                                              VerticalRecoilMin;                                        // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              VerticalRecoilMax;                                        // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              VerticalRecoilVariation;                                  // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              VerticalRecoveryModifier;                                 // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              VerticalRecoveryClamp;                                    // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              VerticalRecoveryMax;                                      // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              LeftMax;                                                  // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RightMax;                                                 // 0x001C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              HorizontalTendency;                                       // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveVector*                                RecoilCurve;                                              // 0x0028(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                BulletsPerSwitch;                                         // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              TimePerSwitch;                                            // 0x0034(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bSwitchOnTime : 1;                                        // 0x0038(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RecoilSpeed_Vertical;                                     // 0x003C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RecoilSpeed_Horizontal;                                   // 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RecoverySpeed_Vertical;                                   // 0x0044(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RecoilValue_Climb;                                        // 0x0048(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RecoilValue_Fall;                                         // 0x004C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RecoilModifier_Stand;                                     // 0x0050(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RecoilModifier_Crouch;                                    // 0x0054(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RecoilModifier_Prone;                                     // 0x0058(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RecoilHorizontalMinScalar;                                // 0x005C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0060(0x0008) MISSED OFFSET
};

// ScriptStruct TslGame.MeleeWeaponAnim
// 0x0170
struct FMeleeWeaponAnim
{
	class UAnimMontage*                                AttackAnim;                                               // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FDecalEffectDataSet                         AttackDecalEffectDataSet;                                 // 0x0008(0x0168) (CPF_Edit, CPF_DisableEditOnInstance)
};

// ScriptStruct TslGame.VivoxConnectionInfo
// 0x0020
struct FVivoxConnectionInfo
{
	struct FString                                     ServerURL;                                                // 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FString                                     Domain;                                                   // 0x0010(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.PhysicalMaterialPenetrationConfig
// 0x0008
struct FPhysicalMaterialPenetrationConfig
{
	float                                              Resistanse;                                               // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Deflection;                                               // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WeaponPenetrationConfig
// 0x0050
struct FWeaponPenetrationConfig
{
	TMap<TEnumAsByte<EPhysicalSurface>, float>         PowerMultipliers;                                         // 0x0000(0x0050) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct TslGame.DeathMessage
// 0x0098
struct FDeathMessage
{
	struct FText                                       KillerName;                                               // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_EditConst)
	struct FText                                       VictimName;                                               // 0x0018(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_EditConst)
	unsigned char                                      bKillerIsOwner : 1;                                       // 0x0030(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_EditConst)
	unsigned char                                      bVictimIsOwner : 1;                                       // 0x0030(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_EditConst)
	int                                                KillerTeamNum;                                            // 0x0034(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	int                                                VictimTeamNum;                                            // 0x0038(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	class UTslDamageType*                              DamageType;                                               // 0x0040(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	struct FText                                       InsertMessage;                                            // 0x0048(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_EditConst)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0060(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.DeathMessage.DamageReason
	unsigned char                                      bGroggy : 1;                                              // 0x0061(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	int                                                AlivePlayerNum;                                           // 0x0064(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	int                                                AliveTeamNum;                                             // 0x0068(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	struct FText                                       DamageCauserName;                                         // 0x0070(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_EditConst)
	class UTexture*                                    DamageCauserIcon;                                         // 0x0088(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	float                                              DamageCauserIconRatio;                                    // 0x0090(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      bIsKillerExist : 1;                                       // 0x0094(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      bIsStealKilled : 1;                                       // 0x0095(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      bIsObserver : 1;                                          // 0x0096(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.TslReportUserInfo
// 0x0038
struct FTslReportUserInfo
{
	struct FString                                     PlayerName;                                               // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FString                                     NetId;                                                    // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FString                                     AccountId;                                                // 0x0020(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	int                                                TeamId;                                                   // 0x0030(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.TslReportedInfo
// 0x0058
struct FTslReportedInfo
{
	struct FString                                     MatchId;                                                  // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FTslReportUserInfo                          UserInfo;                                                 // 0x0010(0x0038) (CPF_Edit, CPF_BlueprintVisible)
	struct FString                                     Cause;                                                    // 0x0048(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
};

// ScriptStruct TslGame.TslPlayerMatchResultInfo
// 0x0028
struct FTslPlayerMatchResultInfo
{
	struct FString                                     PlayerName;                                               // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	int                                                NumKills;                                                 // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Ranking;                                                  // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                TeamId;                                                   // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumStartTeamMember;                                       // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsZombie : 1;                                            // 0x0020(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.TslFriendPresence
// 0x0005
struct FTslFriendPresence
{
	unsigned char                                      IsOnline : 1;                                             // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsPlaying : 1;                                            // 0x0001(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsPlayingThisGame : 1;                                    // 0x0002(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsJoinable : 1;                                           // 0x0003(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Status;                                                   // 0x0004(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.TslFriend
// 0x0038
struct FTslFriend
{
	struct FString                                     UserSerial;                                               // 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FString                                     UserRealName;                                             // 0x0010(0x0010) (CPF_ZeroConstructor)
	struct FString                                     UserDisplayName;                                          // 0x0020(0x0010) (CPF_ZeroConstructor)
	struct FTslFriendPresence                          Presence;                                                 // 0x0030(0x0005)
};

// ScriptStruct TslGame.TslClientAuthData
// 0x0060
struct FTslClientAuthData
{
	struct FString                                     PlatformType;                                             // 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FString                                     AppID;                                                    // 0x0010(0x0010) (CPF_ZeroConstructor)
	struct FString                                     UserSerial;                                               // 0x0020(0x0010) (CPF_ZeroConstructor)
	struct FString                                     AccessToken;                                              // 0x0030(0x0010) (CPF_ZeroConstructor)
	struct FString                                     UserDisplayName;                                          // 0x0040(0x0010) (CPF_ZeroConstructor)
	struct FString                                     PlayerNetId;                                              // 0x0050(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.PlayerAttackInfo
// 0x0058
struct FPlayerAttackInfo
{
	int                                                Shots;                                                    // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0004(0x0050) UNKNOWN PROPERTY: MapProperty TslGame.PlayerAttackInfo.HitInfoMap
};

// ScriptStruct TslGame.TslPlayerStatisticsNotReplicated
// 0x00A8
struct FTslPlayerStatisticsNotReplicated
{
	float                                              MovedDistanceOnFeetMeter;                                 // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MovedDistanceOnVehicleMeter;                              // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TMap<struct FString, struct FPlayerAttackInfo>     AttacksGivenInfos;                                        // 0x0008(0x0050) (CPF_ZeroConstructor)
	TMap<struct FString, struct FPlayerAttackInfo>     AttacksTakenInfos;                                        // 0x0058(0x0050) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.PlayerHitInfo
// 0x000C
struct FPlayerHitInfo
{
	int                                                Hits;                                                     // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Damages;                                                  // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Kills;                                                    // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.PingPongSummary
// 0x000C
struct FPingPongSummary
{
	float                                              UnreliableAverageDelayMsec;                               // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReliableAverageDelayMsec;                                 // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int8_t                                             UnreliableSentCount;                                      // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int8_t                                             UnreliableMissCount;                                      // 0x0009(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int8_t                                             ReliableCount;                                            // 0x000A(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.DroppedItemInfo
// 0x0018
struct FDroppedItemInfo
{
	class UItem*                                       Item;                                                     // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct TslGame.ItemInitiator
// 0x0010
struct FItemInitiator
{
	class UClass*                                      ItemClass;                                                // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                StackCount;                                               // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.ItemSpawnCountElement
// 0x0018
struct FItemSpawnCountElement
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct TslGame.ItemSpawnWeightElement
// 0x0010
struct FItemSpawnWeightElement
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct TslGame.ItemSpawnTogetherDataRow
// 0x0030 (0x0038 - 0x0008)
struct FItemSpawnTogetherDataRow : public FTableRowBase
{
	struct FName                                       ValueFilter;                                              // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       CategoryFilter;                                           // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      SpawnedItem;                                              // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      TogetherItem;                                             // 0x0020(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                StackCount;                                               // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                CountMin;                                                 // 0x002C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                CountMax;                                                 // 0x0030(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.ItemSpawnDataRow
// 0x0020 (0x0028 - 0x0008)
struct FItemSpawnDataRow : public FTableRowBase
{
	struct FName                                       ValueFilter;                                              // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       CategoryFilter;                                           // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      Item;                                                     // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                StackCount;                                               // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                Weight;                                                   // 0x0024(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.ItemOffsetData
// 0x0118
struct FItemOffsetData
{
	class Vector3D                                     SlotOffset_Primary_Location;                              // 0x0000(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector3D                                     SlotOffset_Secondary_Location;                            // 0x000C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector3D                                     SlotOffset_SideArm_Location;                              // 0x0018(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector3D                                     SlotOffset_Melee_Location;                                // 0x0024(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector3D                                     SlotOffset_Thrown_Location;                               // 0x0030(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Rotator                                      SlotOffset_Primary_Rotation;                              // 0x003C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Rotator                                      SlotOffset_Secondary_Rotation;                            // 0x0048(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Rotator                                      SlotOffset_SideArm_Rotation;                              // 0x0054(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Rotator                                      SlotOffset_Melee_Rotation;                                // 0x0060(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Rotator                                      SlotOffset_Thrown_Rotation;                               // 0x006C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TMap<class UClass*, struct FTransform>             SlotOffset_Primary_PerWeapon;                             // 0x0078(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TMap<class UClass*, struct FTransform>             SlotOffset_Secondary_PerWeapon;                           // 0x00C8(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
};

// ScriptStruct TslGame.EquipPosition
// 0x0008
struct FEquipPosition
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.EquipPosition.SlotID
	int                                                Index;                                                    // 0x0004(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WeaponAnim
// 0x0010
struct FWeaponAnim
{
	class UAnimMontage*                                Pawn1P;                                                   // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimMontage*                                Pawn3P;                                                   // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.PathPair
// 0x0010
struct FPathPair
{
	class Vector2D                                     StartPosition;                                            // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector2D                                     EndPosition;                                              // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.MaterialParametersData
// 0x0020
struct FMaterialParametersData
{
	TArray<struct FLinearColor>                        Vectors;                                                  // 0x0000(0x0010) (CPF_ZeroConstructor)
	TArray<class UTexture*>                            Textures;                                                 // 0x0010(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.ReplayGroggyEvent
// 0x0040
struct FReplayGroggyEvent
{
	struct FString                                     InstigatorNetId;                                          // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     InstigatorName;                                           // 0x0010(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     VictimNetId;                                              // 0x0020(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     VictimName;                                               // 0x0030(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
};

// ScriptStruct TslGame.ReplayKillEvent
// 0x0040
struct FReplayKillEvent
{
	struct FString                                     KillerNetId;                                              // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     KillerName;                                               // 0x0010(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     VictimNetId;                                              // 0x0020(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     VictimName;                                               // 0x0030(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
};

// ScriptStruct TslGame.InventoryItem
// 0x0010
struct FInventoryItem
{
	int                                                Index;                                                    // 0x0000(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UItem*                                       Item;                                                     // 0x0008(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.VehicleSpawnDataRow
// 0x0018 (0x0020 - 0x0008)
struct FVehicleSpawnDataRow : public FTableRowBase
{
	struct FName                                       CategoryFilter;                                           // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      Vehicle;                                                  // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                Weight;                                                   // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bSnapToFloor : 1;                                         // 0x001C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.TslSplinePoint
// 0x001C
struct FTslSplinePoint
{
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0000(0x001C) MISSED OFFSET
};

// ScriptStruct TslGame.WheelContactData
// 0x0006
struct FWheelContactData
{

};

// ScriptStruct TslGame.VaultingHandleResult
// 0x0040
struct FVaultingHandleResult
{
	class Vector3D                                     Start;                                                    // 0x0000(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	class Vector3D                                     End;                                                      // 0x000C(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	class Vector3D                                     Apex;                                                     // 0x0018(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	class Vector3D                                     ApexAdditive;                                             // 0x0024(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	float                                              Direction;                                                // 0x0030(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PlayerSpeed2D;                                            // 0x0034(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DistanceFromObject;                                       // 0x0038(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x003C(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.VaultingHandleResult.VaultType
	unsigned char                                      bIsPassed : 1;                                            // 0x003D(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      bIsClimbing : 1;                                          // 0x003D(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      bIsEndToFall : 1;                                         // 0x003D(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
};

// ScriptStruct TslGame.VaultingHandleInput
// 0x0038
struct FVaultingHandleInput
{
	class Vector3D                                     ImpactLocation;                                           // 0x0000(0x000C) (CPF_BlueprintVisible, CPF_IsPlainOldData)
	class Vector3D                                     CapsulePredictedLocation;                                 // 0x000C(0x000C) (CPF_BlueprintVisible, CPF_IsPlainOldData)
	class Vector3D                                     Normal2D;                                                 // 0x0018(0x000C) (CPF_BlueprintVisible, CPF_IsPlainOldData)
	class Vector3D                                     DirectionVector;                                          // 0x0024(0x000C) (CPF_BlueprintVisible, CPF_IsPlainOldData)
	float                                              JumpDistance;                                             // 0x0030(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsForceVault : 1;                                        // 0x0034(0x0001) (CPF_BlueprintVisible)
	unsigned char                                      bIsBlockVault : 1;                                        // 0x0034(0x0001) (CPF_BlueprintVisible)
	unsigned char                                      bIsBlockClimb : 1;                                        // 0x0034(0x0001) (CPF_BlueprintVisible)
};

// ScriptStruct TslGame.TslPointDamageEvent
// 0x0008 (0x00B8 - 0x00B0)
struct FTslPointDamageEvent : public FPointDamageEvent
{
	unsigned char                                      bDestructibleDoor : 1;                                    // 0x00B0(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuLogCharacter
// 0x0048
struct FWuLogCharacter
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FString                                     NetId;                                                    // 0x0010(0x0010) (CPF_ZeroConstructor)
	int                                                TeamId;                                                   // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Health;                                                   // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     Location;                                                 // 0x0028(0x000C) (CPF_IsPlainOldData)
	int                                                Ranking;                                                  // 0x0034(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     AccountId;                                                // 0x0038(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.WuLogHackDetection_SimilarHit
// 0x00B0 (0x00D8 - 0x0028)
struct FWuLogHackDetection_SimilarHit : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0028(0x0048)
	struct FString                                     WeaponName;                                               // 0x0070(0x0010) (CPF_ZeroConstructor)
	int                                                AttackId;                                                 // 0x0080(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     ImpactLocation;                                           // 0x0084(0x000C) (CPF_IsPlainOldData)
	class Vector3D                                     ImpactRelativeLocation;                                   // 0x0090(0x000C) (CPF_IsPlainOldData)
	float                                              ElapsedTime;                                              // 0x009C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              VictimSpeed;                                              // 0x00A0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     VictimName;                                               // 0x00A8(0x0010) (CPF_ZeroConstructor)
	struct FString                                     VictimNetId;                                              // 0x00B8(0x0010) (CPF_ZeroConstructor)
	struct FString                                     VictimAccountId;                                          // 0x00C8(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.WuLogHackDetection_Kill
// 0x0080 (0x00A8 - 0x0028)
struct FWuLogHackDetection_Kill : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0028(0x0048)
	struct FString                                     WeaponName;                                               // 0x0070(0x0010) (CPF_ZeroConstructor)
	struct FString                                     WeaponState;                                              // 0x0080(0x0010) (CPF_ZeroConstructor)
	float                                              Reason_DistVictims;                                       // 0x0090(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Reason_DistVictim1;                                       // 0x0094(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Reason_DistVictim2;                                       // 0x0098(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Reason_DeltaYaw;                                          // 0x009C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Reason_DeltaPitch;                                        // 0x00A0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsBanned : 1;                                             // 0x00A4(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuLogHackDetection_CHKSUM
// 0x0080 (0x00A8 - 0x0028)
struct FWuLogHackDetection_CHKSUM : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0028(0x0048)
	struct FString                                     WeaponName;                                               // 0x0070(0x0010) (CPF_ZeroConstructor)
	class Vector3D                                     Location;                                                 // 0x0080(0x000C) (CPF_IsPlainOldData)
	float                                              Reason_client1;                                           // 0x008C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Reason_client2;                                           // 0x0090(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Reason_client3;                                           // 0x0094(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Reason_client4;                                           // 0x0098(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Reason_client5;                                           // 0x009C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsBanned : 1;                                             // 0x00A0(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuLogHackDetection_SpeedHackDetection
// 0x0060 (0x0088 - 0x0028)
struct FWuLogHackDetection_SpeedHackDetection : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0028(0x0048)
	float                                              Reason_DetectionTotalTime;                                // 0x0070(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Reason_MaxContinuousTime;                                 // 0x0074(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Reason_OverAvgSpeed;                                      // 0x0078(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Reason_Ping;                                              // 0x007C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Reason_MovementMode;                                      // 0x0080(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsBanned : 1;                                             // 0x0084(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuLogHackDetection_Hit
// 0x0090 (0x00B8 - 0x0028)
struct FWuLogHackDetection_Hit : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0028(0x0048)
	struct FString                                     WeaponName;                                               // 0x0070(0x0010) (CPF_ZeroConstructor)
	struct FString                                     WeaponType;                                               // 0x0080(0x0010) (CPF_ZeroConstructor)
	int                                                AttackId;                                                 // 0x0090(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     ImpactLocation;                                           // 0x0094(0x000C) (CPF_IsPlainOldData)
	class Vector3D                                     ImpactRelativeLocation;                                   // 0x00A0(0x000C) (CPF_IsPlainOldData)
	float                                              ElapsedTime;                                              // 0x00AC(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              VictimSpeed;                                              // 0x00B0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuLogHackDetection_InvalidKick
// 0x0070 (0x0098 - 0x0028)
struct FWuLogHackDetection_InvalidKick : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0028(0x0048)
	struct FString                                     RequestReason;                                            // 0x0070(0x0010) (CPF_ZeroConstructor)
	struct FString                                     AuthorityType;                                            // 0x0080(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      IsBanned : 1;                                             // 0x0090(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuLogHackDetection_ESPDetection
// 0x0068 (0x0090 - 0x0028)
struct FWuLogHackDetection_ESPDetection : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0028(0x0048)
	struct FString                                     WeaponState;                                              // 0x0070(0x0010) (CPF_ZeroConstructor)
	float                                              Reason_Distance;                                          // 0x0080(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Reason_Speed;                                             // 0x0084(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsBanned : 1;                                             // 0x0088(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuLogHackDetection_ItemPackage
// 0x0060 (0x0088 - 0x0028)
struct FWuLogHackDetection_ItemPackage : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0028(0x0048)
	struct FString                                     ItemSource;                                               // 0x0070(0x0010) (CPF_ZeroConstructor)
	float                                              Reason_Distance;                                          // 0x0080(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsBanned : 1;                                             // 0x0084(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsBlockedHit : 1;                                         // 0x0085(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuLogHackDetection_ESP
// 0x0060 (0x0088 - 0x0028)
struct FWuLogHackDetection_ESP : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0028(0x0048)
	struct FString                                     WeaponState;                                              // 0x0070(0x0010) (CPF_ZeroConstructor)
	float                                              Reason_Distance;                                          // 0x0080(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsBanned : 1;                                             // 0x0084(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuLogHackDetection_OddKill
// 0x0078 (0x00A0 - 0x0028)
struct FWuLogHackDetection_OddKill : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0028(0x0048)
	struct FString                                     WeaponName;                                               // 0x0070(0x0010) (CPF_ZeroConstructor)
	struct FString                                     WeaponState;                                              // 0x0080(0x0010) (CPF_ZeroConstructor)
	float                                              Reason_DistVics;                                          // 0x0090(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Reason_DistKiller;                                        // 0x0094(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsBanned : 1;                                             // 0x0098(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuLogHackDetection_Package
// 0x0050 (0x0078 - 0x0028)
struct FWuLogHackDetection_Package : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0028(0x0048)
	float                                              Reason_Distance;                                          // 0x0070(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsBanned : 1;                                             // 0x0074(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsBlockedHit : 1;                                         // 0x0075(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuLogHackDetection_Common
// 0x0060 (0x0088 - 0x0028)
struct FWuLogHackDetection_Common : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0028(0x0048)
	struct FString                                     CommonType;                                               // 0x0070(0x0010) (CPF_ZeroConstructor)
	float                                              CommonValue;                                              // 0x0080(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsBanned : 1;                                             // 0x0084(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsBlockedHit : 1;                                         // 0x0085(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuLogHackDetection_Aimbot
// 0x0060 (0x0088 - 0x0028)
struct FWuLogHackDetection_Aimbot : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0028(0x0048)
	TArray<float>                                      AimSpeeds;                                                // 0x0070(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      IsBanned : 1;                                             // 0x0080(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuLogHackDetection_CheckSum
// 0x0070 (0x0098 - 0x0028)
struct FWuLogHackDetection_CheckSum : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0028(0x0048)
	struct FString                                     WeaponName;                                               // 0x0070(0x0010) (CPF_ZeroConstructor)
	float                                              Reason_client1;                                           // 0x0080(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Reason_client2;                                           // 0x0084(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Reason_Server1;                                           // 0x0088(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Reason_Server2;                                           // 0x008C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsBanned : 1;                                             // 0x0090(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuLogHackDetection_DoubleKill
// 0x0068 (0x0090 - 0x0028)
struct FWuLogHackDetection_DoubleKill : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0028(0x0048)
	struct FString                                     WeaponName;                                               // 0x0070(0x0010) (CPF_ZeroConstructor)
	float                                              Reason_DistVics;                                          // 0x0080(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Reason_DistKiller;                                        // 0x0084(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsBanned : 1;                                             // 0x0088(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuLogHackDetection_SpeedHack
// 0x0060 (0x0088 - 0x0028)
struct FWuLogHackDetection_SpeedHack : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0028(0x0048)
	int                                                Reason_Count;                                             // 0x0070(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Reason_Velocity;                                          // 0x0074(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Reason_Ping;                                              // 0x0078(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Reason_MovementMode;                                      // 0x007C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsBanned : 1;                                             // 0x0080(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuLogHackDetection_SpeedHackTime
// 0x0060 (0x0088 - 0x0028)
struct FWuLogHackDetection_SpeedHackTime : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0028(0x0048)
	int                                                Reason_Count;                                             // 0x0070(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Reason_TimeDiscrepancy;                                   // 0x0074(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Reason_RawTimeDiscrepancy;                                // 0x0078(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Reason_Lifetime;                                          // 0x007C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Reason_CurrentMoveError;                                  // 0x0080(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsBanned : 1;                                             // 0x0084(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuLogHackDetection_SpeedHackVelocity
// 0x0058 (0x0080 - 0x0028)
struct FWuLogHackDetection_SpeedHackVelocity : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0028(0x0048)
	int                                                Reason_Count;                                             // 0x0070(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Reason_Velocity;                                          // 0x0074(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsBanned : 1;                                             // 0x0078(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuLogHackDetection_ContinuousKill
// 0x0058 (0x0080 - 0x0028)
struct FWuLogHackDetection_ContinuousKill : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0028(0x0048)
	float                                              Reason_DistVics;                                          // 0x0070(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Reason_DistKiller;                                        // 0x0074(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsBanned : 1;                                             // 0x0078(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuLogHackDetection_IgnoreWall
// 0x0050 (0x0078 - 0x0028)
struct FWuLogHackDetection_IgnoreWall : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0028(0x0048)
	float                                              Reason_Distance;                                          // 0x0070(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsBanned : 1;                                             // 0x0074(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsBlockedHit : 1;                                         // 0x0075(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuLogHackDetection_Ammo
// 0x0080 (0x00A8 - 0x0028)
struct FWuLogHackDetection_Ammo : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0028(0x0048)
	struct FString                                     WeaponName;                                               // 0x0070(0x0010) (CPF_ZeroConstructor)
	struct FString                                     WeaponType;                                               // 0x0080(0x0010) (CPF_ZeroConstructor)
	struct FString                                     DetectionType;                                            // 0x0090(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      IsBanned : 1;                                             // 0x00A0(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsBlockedHit : 1;                                         // 0x00A1(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuLogHackDetection_AttackRange
// 0x00A0 (0x00C8 - 0x0028)
struct FWuLogHackDetection_AttackRange : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0028(0x0048)
	struct FString                                     WeaponName;                                               // 0x0070(0x0010) (CPF_ZeroConstructor)
	struct FString                                     WeaponType;                                               // 0x0080(0x0010) (CPF_ZeroConstructor)
	struct FString                                     DetectionType;                                            // 0x0090(0x0010) (CPF_ZeroConstructor)
	float                                              Reason_Distance;                                          // 0x00A0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Reason_TravelDistance;                                    // 0x00A4(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     Reason_ImpactLocation;                                    // 0x00A8(0x000C) (CPF_IsPlainOldData)
	class Vector3D                                     Reason_FireLocation;                                      // 0x00B4(0x000C) (CPF_IsPlainOldData)
	unsigned char                                      IsBanned : 1;                                             // 0x00C0(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsBlockedHit : 1;                                         // 0x00C1(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuLogHackDetection_Attacker
// 0x00A0 (0x00C8 - 0x0028)
struct FWuLogHackDetection_Attacker : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0028(0x0048)
	struct FString                                     WeaponName;                                               // 0x0070(0x0010) (CPF_ZeroConstructor)
	struct FString                                     WeaponType;                                               // 0x0080(0x0010) (CPF_ZeroConstructor)
	struct FString                                     DetectionType;                                            // 0x0090(0x0010) (CPF_ZeroConstructor)
	float                                              Reason_Distance;                                          // 0x00A0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     Reason_AttakerLocation;                                   // 0x00A4(0x000C) (CPF_IsPlainOldData)
	class Vector3D                                     Reason_FireLocation;                                      // 0x00B0(0x000C) (CPF_IsPlainOldData)
	float                                              Reason_CarVelocity;                                       // 0x00BC(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Reason_IsInCar : 1;                                       // 0x00C0(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsBanned : 1;                                             // 0x00C1(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsBlockedHit : 1;                                         // 0x00C2(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuLogHackDetection_Victim
// 0x00A0 (0x00C8 - 0x0028)
struct FWuLogHackDetection_Victim : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0028(0x0048)
	struct FString                                     WeaponName;                                               // 0x0070(0x0010) (CPF_ZeroConstructor)
	struct FString                                     WeaponType;                                               // 0x0080(0x0010) (CPF_ZeroConstructor)
	struct FString                                     DetectionType;                                            // 0x0090(0x0010) (CPF_ZeroConstructor)
	float                                              Reason_Distance;                                          // 0x00A0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     Reason_VictimLocation;                                    // 0x00A4(0x000C) (CPF_IsPlainOldData)
	class Vector3D                                     Reason_ImpactLocation;                                    // 0x00B0(0x000C) (CPF_IsPlainOldData)
	float                                              Reason_CarVelocity;                                       // 0x00BC(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Reason_IsInCar : 1;                                       // 0x00C0(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsBanned : 1;                                             // 0x00C1(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsBlockedHit : 1;                                         // 0x00C2(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuLogHackDetection_Wall
// 0x0088 (0x00B0 - 0x0028)
struct FWuLogHackDetection_Wall : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0028(0x0048)
	struct FString                                     WeaponName;                                               // 0x0070(0x0010) (CPF_ZeroConstructor)
	struct FString                                     WeaponType;                                               // 0x0080(0x0010) (CPF_ZeroConstructor)
	struct FString                                     DetectionType;                                            // 0x0090(0x0010) (CPF_ZeroConstructor)
	class Vector3D                                     Reason_ImpactLocation;                                    // 0x00A0(0x000C) (CPF_IsPlainOldData)
	unsigned char                                      IsBanned : 1;                                             // 0x00AC(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsBlockedHit : 1;                                         // 0x00AD(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuLogHackDetection_Ping
// 0x0080 (0x00A8 - 0x0028)
struct FWuLogHackDetection_Ping : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0028(0x0048)
	struct FString                                     WeaponName;                                               // 0x0070(0x0010) (CPF_ZeroConstructor)
	struct FString                                     WeaponType;                                               // 0x0080(0x0010) (CPF_ZeroConstructor)
	struct FString                                     DetectionType;                                            // 0x0090(0x0010) (CPF_ZeroConstructor)
	float                                              Reason_Ping;                                              // 0x00A0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsBanned : 1;                                             // 0x00A4(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsBlockedHit : 1;                                         // 0x00A5(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuLogHackDetection_Seq
// 0x0088 (0x00B0 - 0x0028)
struct FWuLogHackDetection_Seq : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0028(0x0048)
	struct FString                                     WeaponName;                                               // 0x0070(0x0010) (CPF_ZeroConstructor)
	struct FString                                     WeaponType;                                               // 0x0080(0x0010) (CPF_ZeroConstructor)
	struct FString                                     DetectionType;                                            // 0x0090(0x0010) (CPF_ZeroConstructor)
	int                                                Reason_ServerHitSeq;                                      // 0x00A0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Reason_ClientHitSeq;                                      // 0x00A4(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsBanned : 1;                                             // 0x00A8(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IsBlockedHit : 1;                                         // 0x00A9(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuLogHackDetection
// 0x0080 (0x00A8 - 0x0028)
struct FWuLogHackDetection : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0028(0x0048)
	struct FString                                     WeaponName;                                               // 0x0070(0x0010) (CPF_ZeroConstructor)
	struct FString                                     DetectionType;                                            // 0x0080(0x0010) (CPF_ZeroConstructor)
	struct FString                                     Reason;                                                   // 0x0090(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      IsBanned : 1;                                             // 0x00A0(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuLogVehicle
// 0x0028
struct FWuLogVehicle
{
	struct FString                                     VehicleType;                                              // 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FString                                     VehicleId;                                                // 0x0010(0x0010) (CPF_ZeroConstructor)
	float                                              HealthPercent;                                            // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FeulPercent;                                              // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuLogVehicleDestroy
// 0x00A0 (0x00C8 - 0x0028)
struct FWuLogVehicleDestroy : public FLogBase
{
	int                                                AttackId;                                                 // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FWuLogCharacter                             Attacker;                                                 // 0x0030(0x0048)
	struct FWuLogVehicle                               Vehicle;                                                  // 0x0078(0x0028)
	struct FString                                     DamageTypeCategory;                                       // 0x00A0(0x0010) (CPF_ZeroConstructor)
	struct FString                                     DamageCauserName;                                         // 0x00B0(0x0010) (CPF_ZeroConstructor)
	float                                              Distance;                                                 // 0x00C0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuLogVehicleLeave
// 0x0070 (0x0098 - 0x0028)
struct FWuLogVehicleLeave : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0028(0x0048)
	struct FWuLogVehicle                               Vehicle;                                                  // 0x0070(0x0028)
};

// ScriptStruct TslGame.WuLogVehicleRide
// 0x0070 (0x0098 - 0x0028)
struct FWuLogVehicleRide : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0028(0x0048)
	struct FWuLogVehicle                               Vehicle;                                                  // 0x0070(0x0028)
};

// ScriptStruct TslGame.WuLogVehicleSpawn
// 0x0020 (0x0048 - 0x0028)
struct FWuLogVehicleSpawn : public FLogBase
{
	struct FString                                     VehicleId;                                                // 0x0028(0x0010) (CPF_ZeroConstructor)
	class Vector3D                                     Location;                                                 // 0x0038(0x000C) (CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuLogItem
// 0x0048
struct FWuLogItem
{
	struct FString                                     ItemId;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor)
	int                                                StackCount;                                               // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     Category;                                                 // 0x0018(0x0010) (CPF_ZeroConstructor)
	struct FString                                     SubCategory;                                              // 0x0028(0x0010) (CPF_ZeroConstructor)
	TArray<struct FString>                             AttachedItems;                                            // 0x0038(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.WuLogItemPackage
// 0x0030
struct FWuLogItemPackage
{
	struct FString                                     ItemPackageId;                                            // 0x0000(0x0010) (CPF_ZeroConstructor)
	class Vector3D                                     Location;                                                 // 0x0010(0x000C) (CPF_IsPlainOldData)
	TArray<struct FWuLogItem>                          Items;                                                    // 0x0020(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.WuLogCarePackageLand
// 0x0030 (0x0058 - 0x0028)
struct FWuLogCarePackageLand : public FLogBase
{
	struct FWuLogItemPackage                           ItemPackage;                                              // 0x0028(0x0030)
};

// ScriptStruct TslGame.WuLogCarePackageSpawn
// 0x0030 (0x0058 - 0x0028)
struct FWuLogCarePackageSpawn : public FLogBase
{
	struct FWuLogItemPackage                           ItemPackage;                                              // 0x0028(0x0030)
};

// ScriptStruct TslGame.WuLogLanguage
// 0x0068 (0x0090 - 0x0028)
struct FWuLogLanguage : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0028(0x0048)
	struct FString                                     WindowsLanguage;                                          // 0x0070(0x0010) (CPF_ZeroConstructor)
	struct FString                                     GameLanguage;                                             // 0x0080(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.WuSystemInfo
// 0x00A0 (0x00C8 - 0x0028)
struct FWuSystemInfo : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0028(0x0048)
	struct FString                                     OsLanguage;                                               // 0x0070(0x0010) (CPF_ZeroConstructor)
	struct FString                                     GameLanguage;                                             // 0x0080(0x0010) (CPF_ZeroConstructor)
	struct FString                                     OsVersion;                                                // 0x0090(0x0010) (CPF_ZeroConstructor)
	struct FString                                     CpuName;                                                  // 0x00A0(0x0010) (CPF_ZeroConstructor)
	struct FString                                     GpuName;                                                  // 0x00B0(0x0010) (CPF_ZeroConstructor)
	int                                                RamInGB;                                                  // 0x00C0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuLogItemUse
// 0x0090 (0x00B8 - 0x0028)
struct FWuLogItemUse : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0028(0x0048)
	struct FWuLogItem                                  Item;                                                     // 0x0070(0x0048)
};

// ScriptStruct TslGame.WuLogItemDetach
// 0x00D8 (0x0100 - 0x0028)
struct FWuLogItemDetach : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0028(0x0048)
	struct FWuLogItem                                  ParentItem;                                               // 0x0070(0x0048)
	struct FWuLogItem                                  ChildItem;                                                // 0x00B8(0x0048)
};

// ScriptStruct TslGame.WuLogItemAttach
// 0x00D8 (0x0100 - 0x0028)
struct FWuLogItemAttach : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0028(0x0048)
	struct FWuLogItem                                  ParentItem;                                               // 0x0070(0x0048)
	struct FWuLogItem                                  ChildItem;                                                // 0x00B8(0x0048)
};

// ScriptStruct TslGame.WuLogItemUnequip
// 0x0090 (0x00B8 - 0x0028)
struct FWuLogItemUnequip : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0028(0x0048)
	struct FWuLogItem                                  Item;                                                     // 0x0070(0x0048)
};

// ScriptStruct TslGame.WuLogItemEquip
// 0x0090 (0x00B8 - 0x0028)
struct FWuLogItemEquip : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0028(0x0048)
	struct FWuLogItem                                  Item;                                                     // 0x0070(0x0048)
};

// ScriptStruct TslGame.WuLogItemDrop
// 0x0090 (0x00B8 - 0x0028)
struct FWuLogItemDrop : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0028(0x0048)
	struct FWuLogItem                                  Item;                                                     // 0x0070(0x0048)
};

// ScriptStruct TslGame.WuLogItemPickup
// 0x0090 (0x00B8 - 0x0028)
struct FWuLogItemPickup : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0028(0x0048)
	struct FWuLogItem                                  Item;                                                     // 0x0070(0x0048)
};

// ScriptStruct TslGame.WuLogItemSpawn
// 0x0018 (0x0040 - 0x0028)
struct FWuLogItemSpawn : public FLogBase
{
	struct FString                                     ItemId;                                                   // 0x0028(0x0010) (CPF_ZeroConstructor)
	int                                                SpawnCount;                                               // 0x0038(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                StackCount;                                               // 0x003C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuLogReportInfo
// 0x00A0 (0x00C8 - 0x0028)
struct FWuLogReportInfo : public FLogBase
{
	struct FWuLogCharacter                             Reporter;                                                 // 0x0028(0x0048)
	struct FWuLogCharacter                             ReportedPlayer;                                           // 0x0070(0x0048)
	struct FString                                     ReportCauseType;                                          // 0x00B8(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.WuLogPlayerKill
// 0x00C0 (0x00E8 - 0x0028)
struct FWuLogPlayerKill : public FLogBase
{
	int                                                AttackId;                                                 // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FWuLogCharacter                             Killer;                                                   // 0x0030(0x0048)
	struct FWuLogCharacter                             Victim;                                                   // 0x0078(0x0048)
	struct FString                                     DamageTypeCategory;                                       // 0x00C0(0x0010) (CPF_ZeroConstructor)
	struct FString                                     DamageCauserName;                                         // 0x00D0(0x0010) (CPF_ZeroConstructor)
	float                                              Distance;                                                 // 0x00E0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuLogPlayerRevive
// 0x0090 (0x00B8 - 0x0028)
struct FWuLogPlayerRevive : public FLogBase
{
	struct FWuLogCharacter                             Reviver;                                                  // 0x0028(0x0048)
	struct FWuLogCharacter                             Victim;                                                   // 0x0070(0x0048)
};

// ScriptStruct TslGame.WuLogPlayerMakeGroggy
// 0x00C0 (0x00E8 - 0x0028)
struct FWuLogPlayerMakeGroggy : public FLogBase
{
	int                                                AttackId;                                                 // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FWuLogCharacter                             Attacker;                                                 // 0x0030(0x0048)
	struct FWuLogCharacter                             Victim;                                                   // 0x0078(0x0048)
	struct FString                                     DamageTypeCategory;                                       // 0x00C0(0x0010) (CPF_ZeroConstructor)
	struct FString                                     DamageCauserName;                                         // 0x00D0(0x0010) (CPF_ZeroConstructor)
	float                                              Distance;                                                 // 0x00E0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuLogPlayerTakeDamage
// 0x00D0 (0x00F8 - 0x0028)
struct FWuLogPlayerTakeDamage : public FLogBase
{
	int                                                AttackId;                                                 // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FWuLogCharacter                             Attacker;                                                 // 0x0030(0x0048)
	struct FWuLogCharacter                             Victim;                                                   // 0x0078(0x0048)
	struct FString                                     DamageTypeCategory;                                       // 0x00C0(0x0010) (CPF_ZeroConstructor)
	struct FString                                     DamageReason;                                             // 0x00D0(0x0010) (CPF_ZeroConstructor)
	float                                              Damage;                                                   // 0x00E0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     DamageCauserName;                                         // 0x00E8(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.WuLogPlayerAttack
// 0x00D0 (0x00F8 - 0x0028)
struct FWuLogPlayerAttack : public FLogBase
{
	int                                                AttackId;                                                 // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FWuLogCharacter                             Attacker;                                                 // 0x0030(0x0048)
	struct FString                                     AttackType;                                               // 0x0078(0x0010) (CPF_ZeroConstructor)
	struct FWuLogItem                                  Weapon;                                                   // 0x0088(0x0048)
	struct FWuLogVehicle                               Vehicle;                                                  // 0x00D0(0x0028)
};

// ScriptStruct TslGame.WuLogPlayerPosition
// 0x0058 (0x0080 - 0x0028)
struct FWuLogPlayerPosition : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0028(0x0048)
	float                                              ElapsedTime;                                              // 0x0070(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumAlivePlayers;                                          // 0x0074(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ClientFPS;                                                // 0x0078(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuLogPlayerKicked
// 0x0058 (0x0080 - 0x0028)
struct FWuLogPlayerKicked : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0028(0x0048)
	struct FString                                     Reason;                                                   // 0x0070(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.WuLogPlayerLogout
// 0x0020 (0x0048 - 0x0028)
struct FWuLogPlayerLogout : public FLogBase
{
	struct FString                                     NetId;                                                    // 0x0028(0x0010) (CPF_ZeroConstructor)
	struct FString                                     AccountId;                                                // 0x0038(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.WuLogPlayerLogin
// 0x0038 (0x0060 - 0x0028)
struct FWuLogPlayerLogin : public FLogBase
{
	struct FString                                     NetId;                                                    // 0x0028(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      Result : 1;                                               // 0x0038(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     ErrorMessage;                                             // 0x0040(0x0010) (CPF_ZeroConstructor)
	struct FString                                     AccountId;                                                // 0x0050(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.WuLogPlayerCreate
// 0x0048 (0x0070 - 0x0028)
struct FWuLogPlayerCreate : public FLogBase
{
	struct FWuLogCharacter                             Character;                                                // 0x0028(0x0048)
};

// ScriptStruct TslGame.WuLogServerStat
// 0x0030 (0x0058 - 0x0028)
struct FWuLogServerStat : public FLogBase
{
	int                                                ElapsedTime;                                              // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumAliveTeams;                                            // 0x002C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumJoinPlayers;                                           // 0x0030(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumStartPlayers;                                          // 0x0034(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumAlivePlayers;                                          // 0x0038(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PingMin;                                                  // 0x003C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PingMax;                                                  // 0x0040(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PingAvg;                                                  // 0x0044(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FrameRateMin;                                             // 0x0048(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FrameRateMax;                                             // 0x004C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FrameRateAvg;                                             // 0x0050(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuLogGameState
// 0x0044
struct FWuLogGameState
{
	int                                                ElapsedTime;                                              // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumAliveTeams;                                            // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumJoinPlayers;                                           // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumStartPlayers;                                          // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumAlivePlayers;                                          // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     SafetyZonePosition;                                       // 0x0014(0x000C) (CPF_IsPlainOldData)
	float                                              SafetyZoneRadius;                                         // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     PoisonGasWarningPosition;                                 // 0x0024(0x000C) (CPF_IsPlainOldData)
	float                                              PoisonGasWarningRadius;                                   // 0x0030(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     RedZonePosition;                                          // 0x0034(0x000C) (CPF_IsPlainOldData)
	float                                              RedZoneRadius;                                            // 0x0040(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuLogGameStatePeriodic
// 0x0048 (0x0070 - 0x0028)
struct FWuLogGameStatePeriodic : public FLogBase
{
	struct FWuLogGameState                             GameState;                                                // 0x0028(0x0044)
};

// ScriptStruct TslGame.WuLogMatchEnd
// 0x0010 (0x0038 - 0x0028)
struct FWuLogMatchEnd : public FLogBase
{
	TArray<struct FWuLogCharacter>                     Characters;                                               // 0x0028(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.WuLogMatchStart
// 0x0030 (0x0058 - 0x0028)
struct FWuLogMatchStart : public FLogBase
{
	struct FString                                     MapName;                                                  // 0x0028(0x0010) (CPF_ZeroConstructor)
	struct FString                                     WeatherId;                                                // 0x0038(0x0010) (CPF_ZeroConstructor)
	TArray<struct FWuLogCharacter>                     Characters;                                               // 0x0048(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.WuLogCharacterRating
// 0x0030
struct FWuLogCharacterRating
{
	struct FString                                     AccountId;                                                // 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FString                                     NetId;                                                    // 0x0010(0x0010) (CPF_ZeroConstructor)
	int                                                WinPoints;                                                // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                KillPoints;                                               // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MMR;                                                      // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuLogMatchDefinition
// 0x0020 (0x0048 - 0x0028)
struct FWuLogMatchDefinition : public FLogBase
{
	struct FString                                     MatchId;                                                  // 0x0028(0x0010) (CPF_ZeroConstructor)
	TArray<struct FWuLogCharacterRating>               Ratings;                                                  // 0x0038(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.WuGameResultStatsPerPlayer
// 0x0008
struct FWuGameResultStatsPerPlayer
{
	int                                                KillCount;                                                // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Score;                                                    // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuGameResultPerPlayer
// 0x0048
struct FWuGameResultPerPlayer
{
	struct FString                                     PlayerNetId;                                              // 0x0000(0x0010) (CPF_ZeroConstructor)
	int                                                Rank;                                                     // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     GameResult;                                               // 0x0018(0x0010) (CPF_ZeroConstructor)
	int                                                TeamId;                                                   // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FWuGameResultStatsPerPlayer                 Stats;                                                    // 0x002C(0x0008)
	struct FString                                     AccountId;                                                // 0x0038(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.WuGameFinishedResult
// 0x0010
struct FWuGameFinishedResult
{
	TArray<struct FWuGameResultPerPlayer>              Results;                                                  // 0x0000(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.WuGameStartInfoPerPlayer
// 0x0020
struct FWuGameStartInfoPerPlayer
{
	struct FString                                     PlayerNetId;                                              // 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FString                                     AccountId;                                                // 0x0010(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.WuGameStartInfo
// 0x0010
struct FWuGameStartInfo
{
	TArray<struct FWuGameStartInfoPerPlayer>           Players;                                                  // 0x0000(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.WuGameInitializedResult
// 0x0008
struct FWuGameInitializedResult
{
	unsigned char                                      IsSuccess : 1;                                            // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Port;                                                     // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuStringStringPair
// 0x0020
struct FWuStringStringPair
{
	struct FString                                     First;                                                    // 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FString                                     second;                                                   // 0x0010(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.WuGameStartRequest
// 0x0010
struct FWuGameStartRequest
{
	TArray<struct FWuStringStringPair>                 StringParameters;                                         // 0x0000(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.WuGameOverrideParameterRequest
// 0x0020
struct FWuGameOverrideParameterRequest
{
	struct FString                                     MatchId;                                                  // 0x0000(0x0010) (CPF_ZeroConstructor)
	TArray<struct FWuStringStringPair>                 StringParameters;                                         // 0x0010(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.WuGameInitializeRequest
// 0x0038
struct FWuGameInitializeRequest
{
	unsigned char                                      IsCustomGame : 1;                                         // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     MapName;                                                  // 0x0008(0x0010) (CPF_ZeroConstructor)
	int                                                TeamCount;                                                // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MinPlayerCount;                                           // 0x001C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxPlayerCount;                                           // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FWuStringStringPair>                 StringParameters;                                         // 0x0028(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.WuMatchRating
// 0x0010
struct FWuMatchRating
{
	int                                                Rating;                                                   // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                WinPoints;                                                // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                KillPoints;                                               // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MMR;                                                      // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuStringBoolPair
// 0x0018
struct FWuStringBoolPair
{
	struct FString                                     First;                                                    // 0x0000(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      second : 1;                                               // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuStringFloatPair
// 0x0018
struct FWuStringFloatPair
{
	struct FString                                     First;                                                    // 0x0000(0x0010) (CPF_ZeroConstructor)
	float                                              second;                                                   // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslGame.WuCharacterCustomizationOptions
// 0x0040
struct FWuCharacterCustomizationOptions
{
	TArray<struct FWuStringBoolPair>                   BoolOptions;                                              // 0x0000(0x0010) (CPF_ZeroConstructor)
	TArray<struct FWuStringFloatPair>                  FloatOptions;                                             // 0x0010(0x0010) (CPF_ZeroConstructor)
	TArray<struct FWuStringStringPair>                 StringOptions;                                            // 0x0020(0x0010) (CPF_ZeroConstructor)
	TArray<struct FString>                             ItemIds;                                                  // 0x0030(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.WuCharacterInfo
// 0x0058
struct FWuCharacterInfo
{
	struct FString                                     Nickname;                                                 // 0x0000(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      Gender : 1;                                               // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FWuCharacterCustomizationOptions            CustomizationOptions;                                     // 0x0018(0x0040)
};

// ScriptStruct TslGame.WuUdpEncryptionKey
// 0x0030
struct FWuUdpEncryptionKey
{
	struct FString                                     Key;                                                      // 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FString                                     ServerIV;                                                 // 0x0010(0x0010) (CPF_ZeroConstructor)
	struct FString                                     ClientIV;                                                 // 0x0020(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.WuUserAuthInfo
// 0x00C8
struct FWuUserAuthInfo
{
	struct FString                                     PlayerNetId;                                              // 0x0000(0x0010) (CPF_ZeroConstructor)
	int                                                TeamId;                                                   // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FWuMatchRating                              Rating;                                                   // 0x0014(0x0010)
	unsigned char                                      IsZombie : 1;                                             // 0x0024(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FWuCharacterInfo                            CharacterInfo;                                            // 0x0028(0x0058)
	int                                                ObserverAuthorityType;                                    // 0x0080(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      BattlEyeDisabled : 1;                                     // 0x0084(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      TPAntibotDisabled : 1;                                    // 0x0085(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     AccountId;                                                // 0x0088(0x0010) (CPF_ZeroConstructor)
	struct FWuUdpEncryptionKey                         UdpEncryptionKey;                                         // 0x0098(0x0030)
};

// ScriptStruct TslGame.WuCustomizableObjectIdPair
// 0x0020
struct FWuCustomizableObjectIdPair
{
	struct FString                                     CustomizableObjectKey;                                    // 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FString                                     CustomizableObjectValue;                                  // 0x0010(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.TslKillcamMetadata
// 0x0068
struct FTslKillcamMetadata
{
	float                                              LastUpdateTime;                                           // 0x0000(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     KillerUniqueId;                                           // 0x0008(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     KillerName;                                               // 0x0018(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     PlayerUniqueId;                                           // 0x0028(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     PlayerName;                                               // 0x0038(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0048(0x0020) MISSED OFFSET
};

// ScriptStruct TslGame.QualityLevelInfo
// 0x0020
struct FQualityLevelInfo
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.QualityLevelInfo.QualityType
	struct FText                                       DisplayQualityLevelName;                                  // 0x0008(0x0018) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct TslGame.SplashObject
// 0x000C
struct FSplashObject
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct TslGame.PlayerDamageZoneDesc
// 0x00B0
struct FPlayerDamageZoneDesc
{
	float                                              GlobalMultiplier;                                         // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TMap<struct FName, float>                          BonesMultipliers;                                         // 0x0008(0x0050) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0058(0x0050) UNKNOWN PROPERTY: MapProperty TslGame.PlayerDamageZoneDesc.WeaponClassMultipliers
	float                                              PunchMultiplier;                                          // 0x00A8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x00AC(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.PlayerDamageZoneDesc.ArmorSlot
	unsigned char                                      UnknownData02[0x1];                                       // 0x00AD(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.PlayerDamageZoneDesc.DamageReason
};

// ScriptStruct TslGame.AnimationPlayData
// 0x0010
struct FAnimationPlayData
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct TslGame.VehicleRiderData
// 0x0020
struct FVehicleRiderData
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct TslGame.MapIconUpdateData
// 0x0080
struct FMapIconUpdateData
{
	class UMapCharacterIconBaseWidget*                 Icon;                                                     // 0x0000(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FLinearColor                                IconColor;                                                // 0x0008(0x0010) (CPF_IsPlainOldData)
	unsigned char                                      bShowMemberNumber : 1;                                    // 0x0018(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MemberNumber;                                             // 0x001C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0020(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.MapIconUpdateData.IconType
	float                                              Rotation;                                                 // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                CharacterState;                                           // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bShowPlayerName : 1;                                      // 0x002C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       PlayerName;                                               // 0x0030(0x0018)
	struct FLinearColor                                NameTagColor;                                             // 0x0048(0x0010) (CPF_IsPlainOldData)
	unsigned char                                      bIsMine : 1;                                              // 0x0058(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bShowTeamNumber : 1;                                      // 0x0059(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                TeamNumber;                                               // 0x005C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector2D                                     Position;                                                 // 0x0060(0x0008) (CPF_IsPlainOldData)
	unsigned char                                      bIsSpectated : 1;                                         // 0x0068(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bHasTeamMember : 1;                                       // 0x0069(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FVehicleRiderData>                   RiderDatas;                                               // 0x0070(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct TslGame.WebPopupParam
// 0x0038
struct FWebPopupParam
{
	struct FString                                     PopupId;                                                  // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FString                                     Uri;                                                      // 0x0010(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
	float                                              X;                                                        // 0x0020(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Y;                                                        // 0x0024(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Width;                                                    // 0x0028(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Height;                                                   // 0x002C(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FColor                                      BackgroundColor;                                          // 0x0030(0x0004) (CPF_BlueprintVisible, CPF_IsPlainOldData)
	unsigned char                                      UseBackgroundColor : 1;                                   // 0x0034(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
