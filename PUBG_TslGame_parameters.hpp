#pragma once

// PLAYERUNKNOWN'S BATTLEGROUNDS (2.4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TslGame.TslPopupInterface.SetPopup
struct UTslPopupInterface_SetPopup_Params
{
	struct FText                                       Message;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FScriptDelegate                             PressedDelegate;                                          // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function TslGame.TslBaseHUD.WidgetToggle
struct ATslBaseHUD_WidgetToggle_Params
{
	struct FString                                     WidgetName;                                               // (CPF_Parm, CPF_ZeroConstructor)
};

// Function TslGame.TslBaseHUD.WidgetShow
struct ATslBaseHUD_WidgetShow_Params
{
	struct FString                                     WidgetName;                                               // (CPF_Parm, CPF_ZeroConstructor)
	class UObject*                                     OptionalParam;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslBaseHUD.WidgetCreate
struct ATslBaseHUD_WidgetCreate_Params
{
	struct FString                                     WidgetName;                                               // (CPF_Parm, CPF_ZeroConstructor)
	struct FTslWidgetConfig                            Config;                                                   // (CPF_Parm)
};

// Function TslGame.TslBaseHUD.UpdateKillcamDisplayCode
struct ATslBaseHUD_UpdateKillcamDisplayCode_Params
{
};

// Function TslGame.TslBaseHUD.UnbindActionKeyDelegateEvent
struct ATslBaseHUD_UnbindActionKeyDelegateEvent_Params
{
	struct FName                                       ActionName;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EInputEvent>                           InputEvent;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslBaseHUD.ShowPopupDialog
struct ATslBaseHUD_ShowPopupDialog_Params
{
	struct FString                                     PopupWidgetName;                                          // (CPF_Parm, CPF_ZeroConstructor)
	struct FText                                       Message;                                                  // (CPF_Parm)
	struct FScriptDelegate                             PressedDelegate;                                          // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function TslGame.TslBaseHUD.OnClickedKillcamPlay
struct ATslBaseHUD_OnClickedKillcamPlay_Params
{
};

// Function TslGame.TslBaseHUD.IsWidgetShow
struct ATslBaseHUD_IsWidgetShow_Params
{
	struct FString                                     WidgetName;                                               // (CPF_Parm, CPF_ZeroConstructor)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslBaseHUD.IsMouseUse
struct ATslBaseHUD_IsMouseUse_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslBaseHUD.HideWidgetByEscape
struct ATslBaseHUD_HideWidgetByEscape_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslBaseHUD.HidePopupDialog
struct ATslBaseHUD_HidePopupDialog_Params
{
	struct FString                                     PopupWidgetName;                                          // (CPF_Parm, CPF_ZeroConstructor)
};

// Function TslGame.TslBaseHUD.GetWidget
struct ATslBaseHUD_GetWidget_Params
{
	struct FString                                     WidgetName;                                               // (CPF_Parm, CPF_ZeroConstructor)
	class UUserWidget*                                 ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function TslGame.TslBaseHUD.GetMainUMGHud
struct ATslBaseHUD_GetMainUMGHud_Params
{
	class UUserWidget*                                 ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function TslGame.TslBaseHUD.GetLastKillcamDisplayCode
struct ATslBaseHUD_GetLastKillcamDisplayCode_Params
{
};

// Function TslGame.TslBaseHUD.GetKillcamCountingText
struct ATslBaseHUD_GetKillcamCountingText_Params
{
	struct FText                                       InCountingTextFormat;                                     // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function TslGame.TslBaseHUD.DestroyAllWidgets
struct ATslBaseHUD_DestroyAllWidgets_Params
{
};

// Function TslGame.TslBaseHUD.BindActionKeyDelegateEvent
struct ATslBaseHUD_BindActionKeyDelegateEvent_Params
{
	struct FName                                       ActionName;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EInputEvent>                           InputEvent;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FScriptDelegate                             ActionKeyDelegate;                                        // (CPF_Parm, CPF_ZeroConstructor)
};

// Function TslGame.AnimDB.GetBlendSpaceRelaxed
struct UAnimDB_GetBlendSpaceRelaxed_Params
{
	TEnumAsByte<EAnimStanceType>                       AnimStance;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsFPP;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UBlendSpace*                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.AnimDB.GetBlendSpace
struct UAnimDB_GetBlendSpace_Params
{
	TEnumAsByte<EAnimStanceType>                       AnimStance;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsFPP;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UBlendSpace*                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.AnimDB.GetAnimSpeed
struct UAnimDB_GetAnimSpeed_Params
{
	TEnumAsByte<EAnimStanceType>                       AnimStance;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Direction;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              InSpeed;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PlayRate;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SprintAlpha;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.AsyncStaticMeshComponent.SetStaticMeshAsset
struct UAsyncStaticMeshComponent_SetStaticMeshAsset_Params
{
	TAssetPtr<class UStaticMesh>                       Asset;                                                    // (CPF_Parm)
};

// Function TslGame.AsyncStaticMeshComponent.IsSameMesh
struct UAsyncStaticMeshComponent_IsSameMesh_Params
{
	TAssetPtr<class UStaticMesh>                       Asset;                                                    // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.AsyncStaticMeshComponent.GetStaticMeshAsset
struct UAsyncStaticMeshComponent_GetStaticMeshAsset_Params
{
	TAssetPtr<class UStaticMesh>                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function TslGame.AsyncStaticMeshComponent.ClearStaticMeshAsset
struct UAsyncStaticMeshComponent_ClearStaticMeshAsset_Params
{
};

// Function TslGame.TslBuff.TickBuff
struct ATslBuff_TickBuff_Params
{
};

// Function TslGame.TslBuff.StopBuffBlueprint
struct ATslBuff_StopBuffBlueprint_Params
{
	bool                                               bCanceled;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslBuff.StartBuffBlueprint
struct ATslBuff_StartBuffBlueprint_Params
{
};

// Function TslGame.TslBuff.GetOwnerPawn
struct ATslBuff_GetOwnerPawn_Params
{
	class APawn*                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslBuff.GetOwnerCharacter
struct ATslBuff_GetOwnerCharacter_Params
{
	class ATslCharacter*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslBuff.GetAttackId
struct ATslBuff_GetAttackId_Params
{
	struct FAttackId                                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function TslGame.TslBuff.CanApplyBuff
struct ATslBuff_CanApplyBuff_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.BuffComponet.RemoveBuff
struct UBuffComponet_RemoveBuff_Params
{
	struct FName                                       OverlapId;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.BuffComponet.FindBuffWithOverlapId
struct UBuffComponet_FindBuffWithOverlapId_Params
{
	struct FName                                       BuffOverlapId;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ATslBuff*                                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.BuffComponet.AddBuff
struct UBuffComponet_AddBuff_Params
{
	class UClass*                                      TslBuffClass;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ATslBuff*                                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.CastableInterface.IsCastable
struct UCastableInterface_IsCastable_Params
{
	class ATslCharacter*                               Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.CastableInterface.GetCastFailMessage
struct UCastableInterface_GetCastFailMessage_Params
{
	class ATslCharacter*                               Character;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function TslGame.CastableInterface.GetCastConfig
struct UCastableInterface_GetCastConfig_Params
{
	struct FCastConfig                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function TslGame.CastComponent.StartCast
struct UCastComponent_StartCast_Params
{
	TScriptInterface<class UCastableInterface>         CastableInterface;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.CastComponent.GetTotalCastTime
struct UCastComponent_GetTotalCastTime_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.CastComponent.GetElapsedCastTime
struct UCastComponent_GetElapsedCastTime_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.CastComponent.GetCastPriority
struct UCastComponent_GetCastPriority_Params
{
};

// Function TslGame.CastComponent.GetCastObject
struct UCastComponent_GetCastObject_Params
{
	class UObject*                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.CastComponent.GetCastName
struct UCastComponent_GetCastName_Params
{
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function TslGame.CastComponent.GetCastLevel
struct UCastComponent_GetCastLevel_Params
{
};

// Function TslGame.CastComponent.GetCastAnim
struct UCastComponent_GetCastAnim_Params
{
};

// Function TslGame.CastComponent.CancelCast
struct UCastComponent_CancelCast_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.CharacterBreathComponent.OnRep_Breath
struct UCharacterBreathComponent_OnRep_Breath_Params
{
	float                                              LastBreath;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.CharacterBreathComponent.IsInApnea
struct UCharacterBreathComponent_IsInApnea_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.CharacterBreathComponent.IsConsuming
struct UCharacterBreathComponent_IsConsuming_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.CharacterBreathComponent.GetBreathRatio
struct UCharacterBreathComponent_GetBreathRatio_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.CharacterBreathComponent.GetBreathMax
struct UCharacterBreathComponent_GetBreathMax_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.CharacterBreathComponent.GetBreath
struct UCharacterBreathComponent_GetBreath_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.CharacterBreathComponent.CanStartSprinting
struct UCharacterBreathComponent_CanStartSprinting_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.CharacterBreathComponent.CanStartHoldingBreath
struct UCharacterBreathComponent_CanStartHoldingBreath_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.CharacterBreathComponent.AddBreath
struct UCharacterBreathComponent_AddBreath_Params
{
	float                                              Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.CharacterStudio.Update
struct ACharacterStudio_Update_Params
{
};

// Function TslGame.CharacterStudio.SetSceneCaptureMaterial
struct ACharacterStudio_SetSceneCaptureMaterial_Params
{
	class UMaterialInstanceDynamic*                    Mid;                                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.CharacterStudio.SetCharacter
struct ACharacterStudio_SetCharacter_Params
{
	class ATslCharacter*                               Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.CharacterStudio.IsUsingDynamicResolution
struct ACharacterStudio_IsUsingDynamicResolution_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.CharacterStudio.IsCharacterValid
struct ACharacterStudio_IsCharacterValid_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.CharacterStudio.GetSceneCaptureMaterial
struct ACharacterStudio_GetSceneCaptureMaterial_Params
{
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.CharacterStudio.GetCharacter
struct ACharacterStudio_GetCharacter_Params
{
	class ATslCharacter*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.CharacterStudio.AddYaw
struct ACharacterStudio_AddYaw_Params
{
	float                                              Yaw;                                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.CoherentCommonBinder.Test
struct UCoherentCommonBinder_Test_Params
{
};

// Function TslGame.CoherentCommonBinder.OnWebPageOnPlatformFailed
struct UCoherentCommonBinder_OnWebPageOnPlatformFailed_Params
{
};

// Function TslGame.CoherentCommonBinder.BindUI
struct UCoherentCommonBinder_BindUI_Params
{
};

// Function TslGame.CoherentCommonBinder.BindDelegate
struct UCoherentCommonBinder_BindDelegate_Params
{
};

// Function TslGame.TslPlayerController.UnreliablePong
struct ATslPlayerController_UnreliablePong_Params
{
	int                                                SeqID;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int64_t                                            DateTimeTickFromServer;                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerController.UnreliablePing
struct ATslPlayerController_UnreliablePing_Params
{
	int                                                SeqID;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int64_t                                            DateTimeTick;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerController.ToggleInventory
struct ATslPlayerController_ToggleInventory_Params
{
};

// Function TslGame.TslPlayerController.Suicide
struct ATslPlayerController_Suicide_Params
{
};

// Function TslGame.TslPlayerController.SimulateInputKey
struct ATslPlayerController_SimulateInputKey_Params
{
	struct FKey                                        Key;                                                      // (CPF_Parm)
	bool                                               bPressed;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerController.ShowTslDebugInfomation
struct ATslPlayerController_ShowTslDebugInfomation_Params
{
};

// Function TslGame.TslPlayerController.ShowTeamDeathPopup
struct ATslPlayerController_ShowTeamDeathPopup_Params
{
};

// Function TslGame.TslPlayerController.ShowPlayerControllerBindActions_Admin
struct ATslPlayerController_ShowPlayerControllerBindActions_Admin_Params
{
};

// Function TslGame.TslPlayerController.ShowMatchResult
struct ATslPlayerController_ShowMatchResult_Params
{
};

// Function TslGame.TslPlayerController.ShowInGameMenu_Gamepad
struct ATslPlayerController_ShowInGameMenu_Gamepad_Params
{
};

// Function TslGame.TslPlayerController.ShowInGameMenu
struct ATslPlayerController_ShowInGameMenu_Params
{
};

// Function TslGame.TslPlayerController.ShowGotoLobbyPopUp
struct ATslPlayerController_ShowGotoLobbyPopUp_Params
{
};

// Function TslGame.TslPlayerController.SetDefaultFOV
struct ATslPlayerController_SetDefaultFOV_Params
{
	float                                              NewFOV;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerController.SetCustomDepth
struct ATslPlayerController_SetCustomDepth_Params
{
	bool                                               bOn;                                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerController.SetCanSeeTerrainThroughFogInTheAir
struct ATslPlayerController_SetCanSeeTerrainThroughFogInTheAir_Params
{
	bool                                               bCanSee;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerController.ServerViewTargetReplicateUpdate
struct ATslPlayerController_ServerViewTargetReplicateUpdate_Params
{
};

// Function TslGame.TslPlayerController.ServerTryInteractByComponent
struct ATslPlayerController_ServerTryInteractByComponent_Params
{
	class UActorComponent*                             TargetComponent;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerController.ServerTryInteract
struct ATslPlayerController_ServerTryInteract_Params
{
	class AActor*                                      TargetObject;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerController.ServerSystemInfo
struct ATslPlayerController_ServerSystemInfo_Params
{
	struct FString                                     OsLanguage;                                               // (CPF_Parm, CPF_ZeroConstructor)
	struct FString                                     GameLanguage;                                             // (CPF_Parm, CPF_ZeroConstructor)
	struct FString                                     OsVersion;                                                // (CPF_Parm, CPF_ZeroConstructor)
	struct FString                                     CpuName;                                                  // (CPF_Parm, CPF_ZeroConstructor)
	struct FString                                     GpuName;                                                  // (CPF_Parm, CPF_ZeroConstructor)
	uint32_t                                           RamInGB;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerController.ServerSuicide
struct ATslPlayerController_ServerSuicide_Params
{
};

// Function TslGame.TslPlayerController.ServerStopHoldRotation
struct ATslPlayerController_ServerStopHoldRotation_Params
{
	class Rotator                                      DeltaRotation;                                            // (CPF_Parm, CPF_IsPlainOldData)
	bool                                               bUseInterp;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerController.ServerStartInteractionByComponent
struct ATslPlayerController_ServerStartInteractionByComponent_Params
{
	class UActorComponent*                             InteractionComponent;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerController.ServerStartInteraction
struct ATslPlayerController_ServerStartInteraction_Params
{
	class UInteractionComponent*                       InteractionComponent;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerController.ServerStartHoldRotation
struct ATslPlayerController_ServerStartHoldRotation_Params
{
	class Rotator                                      Current;                                                  // (CPF_Parm, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerController.ServerSpawnVehicle
struct ATslPlayerController_ServerSpawnVehicle_Params
{
};

// Function TslGame.TslPlayerController.ServerSetViewTarget
struct ATslPlayerController_ServerSetViewTarget_Params
{
	class AActor*                                      NewViewTarget;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerController.ServerSetThirdPerson
struct ATslPlayerController_ServerSetThirdPerson_Params
{
	bool                                               bNewThirdPerson;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerController.ServerSetIsReviving
struct ATslPlayerController_ServerSetIsReviving_Params
{
	bool                                               InbIsReviving;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerController.ServerSetControlRotation
struct ATslPlayerController_ServerSetControlRotation_Params
{
	class Rotator                                      Rotation;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerController.ServerSetClientFps
struct ATslPlayerController_ServerSetClientFps_Params
{
	float                                              Fps;                                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerController.ServerSetAccumViewRotation
struct ATslPlayerController_ServerSetAccumViewRotation_Params
{
	class Vector3D                                     InAccumViewRotation;                                      // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm)
};

// Function TslGame.TslPlayerController.ServerSendTPPacketReliable
struct ATslPlayerController_ServerSendTPPacketReliable_Params
{
	TArray<unsigned char>                              Packet;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function TslGame.TslPlayerController.ServerSendPacketUnreliable
struct ATslPlayerController_ServerSendPacketUnreliable_Params
{
	TArray<unsigned char>                              Packet;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function TslGame.TslPlayerController.ServerSendPacketReliable
struct ATslPlayerController_ServerSendPacketReliable_Params
{
	TArray<unsigned char>                              Packet;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function TslGame.TslPlayerController.ServerSay
struct ATslPlayerController_ServerSay_Params
{
	struct FString                                     Msg;                                                      // (CPF_Parm, CPF_ZeroConstructor)
};

// Function TslGame.TslPlayerController.ServerPickUpItemFromPackage
struct ATslPlayerController_ServerPickUpItemFromPackage_Params
{
	class UItem*                                       Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AItemPackage*                                Package;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       TargetContainer;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     Options;                                                  // (CPF_Parm, CPF_ZeroConstructor)
};

// Function TslGame.TslPlayerController.ServerPickUpDroppedItem
struct ATslPlayerController_ServerPickUpDroppedItem_Params
{
	class UObject*                                     DroppedItemObject;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       TargetContainer;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     Options;                                                  // (CPF_Parm, CPF_ZeroConstructor)
};

// Function TslGame.TslPlayerController.ServerNotifyHitToGlassWindowInst
struct ATslPlayerController_ServerNotifyHitToGlassWindowInst_Params
{
	class UTslInstancedGlassWindowComponent*           GlassWindowInstComponent;                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerController.ServerNotifyHitToGlassWindow
struct ATslPlayerController_ServerNotifyHitToGlassWindow_Params
{
	class UTslGlassWindowComponent*                    GlassWindowComponent;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerController.ServerNextSetViewTarget
struct ATslPlayerController_ServerNextSetViewTarget_Params
{
	bool                                               bIsPrev;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerController.ServerMoveToVehicleSeat
struct ATslPlayerController_ServerMoveToVehicleSeat_Params
{
	int                                                SeatIndex;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerController.ServerMapLoadFinishedOnClient
struct ATslPlayerController_ServerMapLoadFinishedOnClient_Params
{
};

// Function TslGame.TslPlayerController.ServerLeaveMatchIntentionally
struct ATslPlayerController_ServerLeaveMatchIntentionally_Params
{
};

// Function TslGame.TslPlayerController.ServerKickCharacter
struct ATslPlayerController_ServerKickCharacter_Params
{
	class ATslCharacter*                               TslCharacter;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       Reason;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm)
};

// Function TslGame.TslPlayerController.ServerCheat
struct ATslPlayerController_ServerCheat_Params
{
	struct FString                                     Msg;                                                      // (CPF_Parm, CPF_ZeroConstructor)
};

// Function TslGame.TslPlayerController.ServerCancelInteraction
struct ATslPlayerController_ServerCancelInteraction_Params
{
	class UActorComponent*                             InteractionComponent;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerController.ServerBroadCastUpdateCameraInfo
struct ATslPlayerController_ServerBroadCastUpdateCameraInfo_Params
{
	bool                                               InbFirstPerson;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               InbIsInVehicle;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               InbIsScoping;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerController.ServerBroadCastCastingBar
struct ATslPlayerController_ServerBroadCastCastingBar_Params
{
	float                                              CastTime;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       CastName;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm)
	bool                                               OnOff;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerController.ServerBEServerCommand
struct ATslPlayerController_ServerBEServerCommand_Params
{
	struct FString                                     Command;                                                  // (CPF_Parm, CPF_ZeroConstructor)
	struct FString                                     Arg0;                                                     // (CPF_Parm, CPF_ZeroConstructor)
	struct FString                                     Arg1;                                                     // (CPF_Parm, CPF_ZeroConstructor)
	struct FString                                     Arg2;                                                     // (CPF_Parm, CPF_ZeroConstructor)
};

// Function TslGame.TslPlayerController.ServerAdmin
struct ATslPlayerController_ServerAdmin_Params
{
	struct FString                                     AdminCommand;                                             // (CPF_Parm, CPF_ZeroConstructor)
};

// Function TslGame.TslPlayerController.SendSystemMessage
struct ATslPlayerController_SendSystemMessage_Params
{
	struct FText                                       Message;                                                  // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm)
	float                                              MessageDuration;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerController.Say
struct ATslPlayerController_Say_Params
{
	struct FString                                     Msg;                                                      // (CPF_Parm, CPF_ZeroConstructor)
};

// Function TslGame.TslPlayerController.SaveGearProfile
struct ATslPlayerController_SaveGearProfile_Params
{
	int                                                ProfileIndex;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UClass*>                              inArray;                                                  // (CPF_Parm, CPF_ZeroConstructor)
};

// Function TslGame.TslPlayerController.ReliablePong
struct ATslPlayerController_ReliablePong_Params
{
	int                                                SeqID;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int64_t                                            DateTimeTickFromServer;                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerController.ReliablePing
struct ATslPlayerController_ReliablePing_Params
{
	int                                                SeqID;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int64_t                                            DateTimeTick;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerController.OnShowCastingBarWidget
struct ATslPlayerController_OnShowCastingBarWidget_Params
{
	float                                              CastTime;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       CastName;                                                 // (CPF_Parm)
	bool                                               OnOff;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerController.OnRep_Team
struct ATslPlayerController_OnRep_Team_Params
{
};

// Function TslGame.TslPlayerController.OnRep_CameraViewBehaviour
struct ATslPlayerController_OnRep_CameraViewBehaviour_Params
{
};

// Function TslGame.TslPlayerController.OnRep_bUseTPAntibotClient
struct ATslPlayerController_OnRep_bUseTPAntibotClient_Params
{
};

// Function TslGame.TslPlayerController.OnMoveToVehicleSeat
struct ATslPlayerController_OnMoveToVehicleSeat_Params
{
	unsigned char                                      idx;                                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerController.OnItemStackCountHandlingMode
struct ATslPlayerController_OnItemStackCountHandlingMode_Params
{
};

// Function TslGame.TslPlayerController.OnFinishInteractionCast
struct ATslPlayerController_OnFinishInteractionCast_Params
{
	class UObject*                                     CastObject;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerController.OnExecuteExitCommand
struct ATslPlayerController_OnExecuteExitCommand_Params
{
};

// Function TslGame.TslPlayerController.OnClickedReportButton
struct ATslPlayerController_OnClickedReportButton_Params
{
};

// Function TslGame.TslPlayerController.OnCancelInteractionCast
struct ATslPlayerController_OnCancelInteractionCast_Params
{
	class UObject*                                     CastObject;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerController.OffItemStackCountHandlingMode
struct ATslPlayerController_OffItemStackCountHandlingMode_Params
{
};

// Function TslGame.TslPlayerController.ObserverTeleportTo
struct ATslPlayerController_ObserverTeleportTo_Params
{
	class Vector3D                                     Location;                                                 // (CPF_Parm, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerController.NextSetViewTarget
struct ATslPlayerController_NextSetViewTarget_Params
{
};

// Function TslGame.TslPlayerController.KickCharacter
struct ATslPlayerController_KickCharacter_Params
{
	class ATslCharacter*                               TslCharacter;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       Reason;                                                   // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function TslGame.TslPlayerController.IsSpectatorState
struct ATslPlayerController_IsSpectatorState_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerController.IsSpectating
struct ATslPlayerController_IsSpectating_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerController.IsSameObservingCameraMode
struct ATslPlayerController_IsSameObservingCameraMode_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerController.IsReplayingKillcam
struct ATslPlayerController_IsReplayingKillcam_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerController.IsReplaying
struct ATslPlayerController_IsReplaying_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerController.IsObserving
struct ATslPlayerController_IsObserving_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerController.IsItemStackCountHandlingMode
struct ATslPlayerController_IsItemStackCountHandlingMode_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerController.IsHighPing
struct ATslPlayerController_IsHighPing_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerController.IsGroggying
struct ATslPlayerController_IsGroggying_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerController.IsGamepadHoldProcessing
struct ATslPlayerController_IsGamepadHoldProcessing_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerController.IsGameInputAllowed
struct ATslPlayerController_IsGameInputAllowed_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerController.HideTslDebugInfomation
struct ATslPlayerController_HideTslDebugInfomation_Params
{
};

// Function TslGame.TslPlayerController.HideMatchResult
struct ATslPlayerController_HideMatchResult_Params
{
};

// Function TslGame.TslPlayerController.GetVivoxComponent
struct ATslPlayerController_GetVivoxComponent_Params
{
	class UVivoxComponent*                             ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerController.GetViewTargetTslCharacter
struct ATslPlayerController_GetViewTargetTslCharacter_Params
{
	class ATslCharacter*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerController.GetViewTargetTeam
struct ATslPlayerController_GetViewTargetTeam_Params
{
	class ATeam*                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerController.GetTslZombieMatchResultInfos
struct ATslPlayerController_GetTslZombieMatchResultInfos_Params
{
	TArray<struct FTslPlayerMatchResultInfo>           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function TslGame.TslPlayerController.GetTslPlayerMatchResultInfos
struct ATslPlayerController_GetTslPlayerMatchResultInfos_Params
{
	TArray<struct FTslPlayerMatchResultInfo>           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function TslGame.TslPlayerController.GetTslHumanMatchResultInfos
struct ATslPlayerController_GetTslHumanMatchResultInfos_Params
{
	TArray<struct FTslPlayerMatchResultInfo>           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function TslGame.TslPlayerController.GetTslCharacter
struct ATslPlayerController_GetTslCharacter_Params
{
	class ATslCharacter*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerController.GetTeamOverallKillCountAtObserving
struct ATslPlayerController_GetTeamOverallKillCountAtObserving_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerController.GetTeamMemberCount
struct ATslPlayerController_GetTeamMemberCount_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerController.GetTargetViewRotation
struct ATslPlayerController_GetTargetViewRotation_Params
{
	class Rotator                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerController.GetSpectatingPlayerName
struct ATslPlayerController_GetSpectatingPlayerName_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function TslGame.TslPlayerController.GetReplicateTeamMembers
struct ATslPlayerController_GetReplicateTeamMembers_Params
{
	TArray<class ATslCharacter*>                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function TslGame.TslPlayerController.GetReplicateCharacters
struct ATslPlayerController_GetReplicateCharacters_Params
{
	TArray<class ATslCharacter*>                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function TslGame.TslPlayerController.GetReplicateCarePackageItems
struct ATslPlayerController_GetReplicateCarePackageItems_Params
{
	TArray<class ACarePackageItem*>                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function TslGame.TslPlayerController.GetOtherElapsedCastTime
struct ATslPlayerController_GetOtherElapsedCastTime_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerController.GetOtherCastTime
struct ATslPlayerController_GetOtherCastTime_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerController.GetOtherCastingName
struct ATslPlayerController_GetOtherCastingName_Params
{
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function TslGame.TslPlayerController.GetObserverCameraMode
struct ATslPlayerController_GetObserverCameraMode_Params
{
};

// Function TslGame.TslPlayerController.GetObserverAuthorityType
struct ATslPlayerController_GetObserverAuthorityType_Params
{
};

// Function TslGame.TslPlayerController.GetKillerName
struct ATslPlayerController_GetKillerName_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function TslGame.TslPlayerController.GetHudDebugText
struct ATslPlayerController_GetHudDebugText_Params
{
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function TslGame.TslPlayerController.GetGearProfile
struct ATslPlayerController_GetGearProfile_Params
{
	int                                                ProfileIndex;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UClass*>                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function TslGame.TslPlayerController.GetCurrentHoldProgressRate
struct ATslPlayerController_GetCurrentHoldProgressRate_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerController.GetClientTeam
struct ATslPlayerController_GetClientTeam_Params
{
	bool                                               IncludeSelf;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class ATeam*>                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function TslGame.TslPlayerController.GetCanAllSpectate
struct ATslPlayerController_GetCanAllSpectate_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerController.GetAliveTeamMemberCount
struct ATslPlayerController_GetAliveTeamMemberCount_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerController.DumpActorDetailByRaycast
struct ATslPlayerController_DumpActorDetailByRaycast_Params
{
};

// Function TslGame.TslPlayerController.DropItem
struct ATslPlayerController_DropItem_Params
{
	struct FString                                     ItemTypeName;                                             // (CPF_Parm, CPF_ZeroConstructor)
};

// Function TslGame.TslPlayerController.CompleteReportKiller
struct ATslPlayerController_CompleteReportKiller_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerController.ClientWasWarnedTobeKicked
struct ATslPlayerController_ClientWasWarnedTobeKicked_Params
{
	struct FText                                       KickReason;                                               // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm)
};

// Function TslGame.TslPlayerController.ClientWasKickedAndExit
struct ATslPlayerController_ClientWasKickedAndExit_Params
{
	struct FText                                       KickReason;                                               // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm)
};

// Function TslGame.TslPlayerController.ClientUpdateSpectatorCameraMode
struct ATslPlayerController_ClientUpdateSpectatorCameraMode_Params
{
	struct FName                                       InCameraName;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               InbFirstPerson;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               InbIsInVehicle;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               InbIsScoping;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerController.ClientStartOnlineGame
struct ATslPlayerController_ClientStartOnlineGame_Params
{
};

// Function TslGame.TslPlayerController.ClientShowMatchResult
struct ATslPlayerController_ClientShowMatchResult_Params
{
};

// Function TslGame.TslPlayerController.ClientShowCastingBar
struct ATslPlayerController_ClientShowCastingBar_Params
{
	float                                              CastTime;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       CastName;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm)
	bool                                               OnOff;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerController.ClientSetTslPlayerMatchResultInfos
struct ATslPlayerController_ClientSetTslPlayerMatchResultInfos_Params
{
	TArray<struct FTslPlayerMatchResultInfo>           InTslPlayerMatchResultInfos;                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function TslGame.TslPlayerController.ClientSetCanAllSpectate
struct ATslPlayerController_ClientSetCanAllSpectate_Params
{
	bool                                               InbCanSpectate;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerController.ClientSendTPPacketReliable
struct ATslPlayerController_ClientSendTPPacketReliable_Params
{
	TArray<unsigned char>                              Packet;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function TslGame.TslPlayerController.ClientSendRoundEndEvent
struct ATslPlayerController_ClientSendRoundEndEvent_Params
{
	bool                                               bIsWinner;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ExpendedTimeInSeconds;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerController.ClientSendPacketUnreliable
struct ATslPlayerController_ClientSendPacketUnreliable_Params
{
	TArray<unsigned char>                              Packet;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function TslGame.TslPlayerController.ClientSendPacketReliable
struct ATslPlayerController_ClientSendPacketReliable_Params
{
	TArray<unsigned char>                              Packet;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function TslGame.TslPlayerController.ClientOnCharacterRestart
struct ATslPlayerController_ClientOnCharacterRestart_Params
{
};

// Function TslGame.TslPlayerController.ClientOnCharacterDeath
struct ATslPlayerController_ClientOnCharacterDeath_Params
{
	bool                                               bIsTeamMatch;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bHasAliveTeamMember;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FTslReportUserInfo                          InKillerInfo;                                             // (CPF_Parm)
	bool                                               InbCanReport;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerController.ClientNotifyStartBuff
struct ATslPlayerController_ClientNotifyStartBuff_Params
{
	struct FName                                       BuffName;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bStart;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerController.ClientNotifySpeedBoost
struct ATslPlayerController_ClientNotifySpeedBoost_Params
{
	float                                              Boost;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerController.ClientNotifyRestrictingPlayArea
struct ATslPlayerController_ClientNotifyRestrictingPlayArea_Params
{
};

// Function TslGame.TslPlayerController.ClientNotifyPlayerEndWithoutHitInfo
struct ATslPlayerController_ClientNotifyPlayerEndWithoutHitInfo_Params
{
	int                                                Ranking;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FTslPlayerStatistics                        Statistics;                                               // (CPF_Parm)
	struct FTslPlayerStatisticsForOwner                StatisticsForOwner;                                       // (CPF_Parm)
};

// Function TslGame.TslPlayerController.ClientNotifyPlayerEnd
struct ATslPlayerController_ClientNotifyPlayerEnd_Params
{
	int                                                Ranking;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FTslPlayerStatistics                        Statistics;                                               // (CPF_Parm)
	struct FTslPlayerStatisticsForOwner                StatisticsForOwner;                                       // (CPF_Parm)
	struct FTakeHitInfo                                LastTakeHitInfo;                                          // (CPF_Parm)
};

// Function TslGame.TslPlayerController.ClientNotifyNextGasIn
struct ATslPlayerController_ClientNotifyNextGasIn_Params
{
	class Vector3D                                     PoisonGasWarningPosition;                                 // (CPF_Parm)
	float                                              PoisonGasWarningRadius;                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerController.ClientNotifyHealAmount_Unreliable
struct ATslPlayerController_ClientNotifyHealAmount_Unreliable_Params
{
	float                                              Heal;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerController.ClientNotifyHealAmount_Reliable
struct ATslPlayerController_ClientNotifyHealAmount_Reliable_Params
{
	float                                              Heal;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerController.ClientNotifyHealAmount
struct ATslPlayerController_ClientNotifyHealAmount_Params
{
	float                                              Heal;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerController.ClientNotifyHeal_Unreliable
struct ATslPlayerController_ClientNotifyHeal_Unreliable_Params
{
	float                                              HealthStart;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Health;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxHealth;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerController.ClientNotifyHeal_Reliable
struct ATslPlayerController_ClientNotifyHeal_Reliable_Params
{
	float                                              HealthStart;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Health;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxHealth;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerController.ClientNotifyHeal
struct ATslPlayerController_ClientNotifyHeal_Params
{
	float                                              HealthStart;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Health;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxHealth;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerController.ClientInteractByComponent
struct ATslPlayerController_ClientInteractByComponent_Params
{
	class UActorComponent*                             TargetComponent;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerController.ClientInteract
struct ATslPlayerController_ClientInteract_Params
{
	class AActor*                                      TargetObject;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerController.ClientGameStarted
struct ATslPlayerController_ClientGameStarted_Params
{
};

// Function TslGame.TslPlayerController.ClientEndOnlineGame
struct ATslPlayerController_ClientEndOnlineGame_Params
{
};

// Function TslGame.TslPlayerController.ClientAdminCopyString
struct ATslPlayerController_ClientAdminCopyString_Params
{
	struct FString                                     inString;                                                 // (CPF_Parm, CPF_ZeroConstructor)
};

// Function TslGame.TslPlayerController.Cheat_ServerSpawnVehicle
struct ATslPlayerController_Cheat_ServerSpawnVehicle_Params
{
	int                                                VehicleIndex;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerController.CanSeeTerrainThroughFogInTheAir
struct ATslPlayerController_CanSeeTerrainThroughFogInTheAir_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerController.CanReport
struct ATslPlayerController_CanReport_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerController.BP_Test_SpawnVehicle
struct ATslPlayerController_BP_Test_SpawnVehicle_Params
{
	int                                                VehicleIndex;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerController.BEServer
struct ATslPlayerController_BEServer_Params
{
	struct FString                                     Command;                                                  // (CPF_Parm, CPF_ZeroConstructor)
	struct FString                                     Arg0;                                                     // (CPF_Parm, CPF_ZeroConstructor)
	struct FString                                     Arg1;                                                     // (CPF_Parm, CPF_ZeroConstructor)
	struct FString                                     Arg2;                                                     // (CPF_Parm, CPF_ZeroConstructor)
};

// Function TslGame.TslPlayerController.BEClient
struct ATslPlayerController_BEClient_Params
{
	struct FString                                     Command;                                                  // (CPF_Parm, CPF_ZeroConstructor)
};

// Function TslGame.TslPlayerController.Admin
struct ATslPlayerController_Admin_Params
{
	struct FString                                     ServerAdminCommand;                                       // (CPF_Parm, CPF_ZeroConstructor)
};

// Function TslGame.ConsoleCommandExecutor.ExecuteConsoleCommands
struct AConsoleCommandExecutor_ExecuteConsoleCommands_Params
{
	TArray<struct FString>                             Commands;                                                 // (CPF_Parm, CPF_ZeroConstructor)
};

// Function TslGame.SlotInterface.IsWeapon
struct USlotInterface_IsWeapon_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.SlotInterface.IsStackable
struct USlotInterface_IsStackable_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.SlotInterface.IsPackageItem
struct USlotInterface_IsPackageItem_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.SlotInterface.IsEquipable
struct USlotInterface_IsEquipable_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.SlotInterface.IsCastableItem
struct USlotInterface_IsCastableItem_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.SlotInterface.IsAttachment
struct USlotInterface_IsAttachment_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.SlotInterface.GetUnitSpace
struct USlotInterface_GetUnitSpace_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.SlotInterface.GetToolTipIconTexture
struct USlotInterface_GetToolTipIconTexture_Params
{
	class UTexture*                                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.SlotInterface.GetToolTipIconSizeRatio
struct USlotInterface_GetToolTipIconSizeRatio_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.SlotInterface.GetStackCountMax
struct USlotInterface_GetStackCountMax_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.SlotInterface.GetStackCount
struct USlotInterface_GetStackCount_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.SlotInterface.GetSpace
struct USlotInterface_GetSpace_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.SlotInterface.GetSortPriority
struct USlotInterface_GetSortPriority_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.SlotInterface.GetSlotName
struct USlotInterface_GetSlotName_Params
{
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function TslGame.SlotInterface.GetSlotDetailedName
struct USlotInterface_GetSlotDetailedName_Params
{
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function TslGame.SlotInterface.GetSlotDescription
struct USlotInterface_GetSlotDescription_Params
{
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function TslGame.SlotInterface.GetSlotCategory
struct USlotInterface_GetSlotCategory_Params
{
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function TslGame.SlotInterface.GetIconTexture
struct USlotInterface_GetIconTexture_Params
{
	class UTexture*                                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.SlotInterface.GetIconSizeRatio
struct USlotInterface_GetIconSizeRatio_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.SlotInterface.GetDropSound
struct USlotInterface_GetDropSound_Params
{
	class UAkAudioEvent*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.SlotContainerInterface.ShowSlotContextMenu
struct USlotContainerInterface_ShowSlotContextMenu_Params
{
	TScriptInterface<class USlotInterface>             Slot;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.SlotContainerInterface.IsEnableAction
struct USlotContainerInterface_IsEnableAction_Params
{
	TScriptInterface<class USlotInterface>             Slot;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TScriptInterface<class USlotContainerInterface>    OtherContainer;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     Options;                                                  // (CPF_Parm, CPF_ZeroConstructor)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.SlotContainerInterface.HideSlotContextMenu
struct USlotContainerInterface_HideSlotContextMenu_Params
{
};

// Function TslGame.SlotContainerInterface.GetSlotContext
struct USlotContainerInterface_GetSlotContext_Params
{
	TScriptInterface<class USlotInterface>             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.SlotContainerInterface.GetSlotContainerOwner
struct USlotContainerInterface_GetSlotContainerOwner_Params
{
	class AActor*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.SlotContainerInterface.GetSlotContainerName
struct USlotContainerInterface_GetSlotContainerName_Params
{
	struct FName                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.SlotContainerInterface.GetDefaultActionName
struct USlotContainerInterface_GetDefaultActionName_Params
{
	TScriptInterface<class USlotInterface>             Slot;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.SlotContainerInterface.GetAvailableSlotActions
struct USlotContainerInterface_GetAvailableSlotActions_Params
{
	TScriptInterface<class USlotInterface>             Slot;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FName>                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function TslGame.SlotContainerInterface.GetAllSlots
struct USlotContainerInterface_GetAllSlots_Params
{
	TArray<TScriptInterface<class USlotInterface>>     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function TslGame.SlotContainerInterface.GetActionName
struct USlotContainerInterface_GetActionName_Params
{
	TScriptInterface<class USlotInterface>             Slot;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TScriptInterface<class USlotContainerInterface>    OtherContainer;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     Options;                                                  // (CPF_Parm, CPF_ZeroConstructor)
	struct FName                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.SlotContainerInterface.DropSlotOnOtherContainer
struct USlotContainerInterface_DropSlotOnOtherContainer_Params
{
	TScriptInterface<class USlotInterface>             Slot;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TScriptInterface<class USlotContainerInterface>    OtherContainer;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     Options;                                                  // (CPF_Parm, CPF_ZeroConstructor)
};

// Function TslGame.SlotContainerInterface.DoSlotActionDefault
struct USlotContainerInterface_DoSlotActionDefault_Params
{
	TScriptInterface<class USlotInterface>             Slot;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.SlotContainerInterface.DoSlotAction
struct USlotContainerInterface_DoSlotAction_Params
{
	struct FName                                       ActionName;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     Options;                                                  // (CPF_Parm, CPF_ZeroConstructor)
};

// Function TslGame.SlotContainerInterface.DoActionWithSlot
struct USlotContainerInterface_DoActionWithSlot_Params
{
	TScriptInterface<class USlotInterface>             Slot;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       ActionName;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     Options;                                                  // (CPF_Parm, CPF_ZeroConstructor)
};

// Function TslGame.ItemExplorerInterface.UpdateItemList
struct UItemExplorerInterface_UpdateItemList_Params
{
};

// Function TslGame.ItemExplorerInterface.GetExplorableItemSlotList
struct UItemExplorerInterface_GetExplorableItemSlotList_Params
{
	TArray<TScriptInterface<class USlotInterface>>     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function TslGame.ExplorableItemInterface.IsValidExplorableItem
struct UExplorableItemInterface_IsValidExplorableItem_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.ExplorableItemInterface.GetInteractiveActionName
struct UExplorableItemInterface_GetInteractiveActionName_Params
{
	struct FName                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.ExplorableItemInterface.GetExplorationDistance
struct UExplorableItemInterface_GetExplorationDistance_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.Item.UseBy
struct UItem_UseBy_Params
{
	class ATslCharacter*                               Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.Item.PickUpBy
struct UItem_PickUpBy_Params
{
	class ATslCharacter*                               Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       TargetContainer;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     Options;                                                  // (CPF_Parm, CPF_ZeroConstructor)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.Item.IsWeapon
struct UItem_IsWeapon_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.Item.IsToy
struct UItem_IsToy_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.Item.IsPackageItem
struct UItem_IsPackageItem_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.Item.IsEquipable
struct UItem_IsEquipable_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.Item.IsCastableItem
struct UItem_IsCastableItem_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.Item.IsAttachment
struct UItem_IsAttachment_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.Item.GetIconTexture
struct UItem_GetIconTexture_Params
{
	class UTexture*                                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.ItemPackage.Items_RepNotify
struct AItemPackage_Items_RepNotify_Params
{
};

// Function TslGame.ItemPackage.IsOpenedBy
struct AItemPackage_IsOpenedBy_Params
{
	class ATslCharacter*                               Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.ItemPackage.ClientOnInteractBy
struct AItemPackage_ClientOnInteractBy_Params
{
	class ATslCharacter*                               OtherCharacter;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.ItemPackage.AllowInteract
struct AItemPackage_AllowInteract_Params
{
	class ATslCharacter*                               OtherCharacter;                                           // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.DoorFrameComponent.GetDoorStaticMesh
struct UDoorFrameComponent_GetDoorStaticMesh_Params
{
	class UStaticMesh*                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.DoorFrameComponent.DisableSubComponents
struct UDoorFrameComponent_DisableSubComponents_Params
{
	bool                                               bDisable;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.DroppedItem.Item_RepNotify
struct ADroppedItem_Item_RepNotify_Params
{
};

// Function TslGame.DroppedItemGroup.OnItemEndPlay
struct ADroppedItemGroup_OnItemEndPlay_Params
{
};

// Function TslGame.DroppedItemGroup.OnItemBeginPlay
struct ADroppedItemGroup_OnItemBeginPlay_Params
{
};

// Function TslGame.DroppedItemGroup.AddItem
struct ADroppedItemGroup_AddItem_Params
{
	class UItem*                                       NewItem;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     NewWorldLocation;                                         // (CPF_Parm, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.DroppedItemInterface.GetDroppedItem
struct UDroppedItemInterface_GetDroppedItem_Params
{
	class UItem*                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.FlashBangCaptureActor.CaptureScreen
struct AFlashBangCaptureActor_CaptureScreen_Params
{
};

// Function TslGame.FlashBangCaptureActor.CaptureINIT
struct AFlashBangCaptureActor_CaptureINIT_Params
{
	bool                                               bDoDelay;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CaptureDelay;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class APawn*                                       PlayerRef;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTextureRenderTarget2D*                      RenderTexture;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FPostProcessSettings                        PP_Settings;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	bool                                               bHidePawn;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.GeneralItemSpawner.CreateItems
struct UGeneralItemSpawner_CreateItems_Params
{
	TArray<class UItem*>                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function TslGame.GeneralItemSpawner.CreateItemInitiators
struct UGeneralItemSpawner_CreateItemInitiators_Params
{
	TArray<struct FItemInitiator>                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function TslGame.HackReporterComponent.ServerOnWallHackDetected
struct UHackReporterComponent_ServerOnWallHackDetected_Params
{
	class ATslCharacter*                               Victim;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Distance;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.HighlightSession.RecordRemainEvents
struct UHighlightSession_RecordRemainEvents_Params
{
};

// Function TslGame.HighlightSession.MatchEnded
struct UHighlightSession_MatchEnded_Params
{
};

// Function TslGame.HighlightSession.KillOtherPlayer
struct UHighlightSession_KillOtherPlayer_Params
{
	bool                                               bGroggy;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.HighlightSession.Die
struct UHighlightSession_Die_Params
{
	bool                                               bGroggy;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.InteractionInterface.GetInteractiveObjectName
struct UInteractionInterface_GetInteractiveObjectName_Params
{
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function TslGame.InteractionInterface.GetInteractionVerb
struct UInteractionInterface_GetInteractionVerb_Params
{
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function TslGame.InteractionInterface.AllowInteractBy
struct UInteractionInterface_AllowInteractBy_Params
{
	class ATslCharacter*                               Character;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.InteractionComponent.GetInteractiveObjectName
struct UInteractionComponent_GetInteractiveObjectName_Params
{
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function TslGame.InteractionComponent.GetInteractionVerb
struct UInteractionComponent_GetInteractionVerb_Params
{
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function TslGame.InteractionComponent.AllowInteractBy
struct UInteractionComponent_AllowInteractBy_Params
{
	class ATslCharacter*                               Character;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.DroppedItemActorComponent.OnInteractDelegate
struct UDroppedItemActorComponent_OnInteractDelegate_Params
{
	class ATslCharacter*                               OtherCharacter;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.DroppedItemActorComponent.AllowInteractDelegate
struct UDroppedItemActorComponent_AllowInteractDelegate_Params
{
	class ATslCharacter*                               OtherCharacter;                                           // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.AttachableItem.GetAttachmentSlotID
struct UAttachableItem_GetAttachmentSlotID_Params
{
	struct FName                                       WeaponTag;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.AttachableItem.GetAttachmentData
struct UAttachableItem_GetAttachmentData_Params
{
	struct FName                                       WeaponTag;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FWeaponAttachmentData                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function TslGame.HealItem.GetHealLimit
struct UHealItem_GetHealLimit_Params
{
	class ATslCharacter*                               TslCharacter;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.SkinItem.CheckSkin
struct USkinItem_CheckSkin_Params
{
	TScriptInterface<class USkinnableInterface>        SkinnableInterface;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.SkinItem.ApplySkin
struct USkinItem_ApplySkin_Params
{
	TScriptInterface<class USkinnableInterface>        SkinnableInterface;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.EquipableItem.UnequipBy
struct UEquipableItem_UnequipBy_Params
{
	class ATslCharacter*                               Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.EquipableItem.EquipBy
struct UEquipableItem_EquipBy_Params
{
	class ATslCharacter*                               Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FEquipPosition                              Position;                                                 // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.EquipableItem.CanEquipTo
struct UEquipableItem_CanEquipTo_Params
{
	class ATslCharacter*                               Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.CustomEquipableItem.GetOffset_Thrown
struct UCustomEquipableItem_GetOffset_Thrown_Params
{
	struct FTransform                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.CustomEquipableItem.GetOffset_SideArm
struct UCustomEquipableItem_GetOffset_SideArm_Params
{
	struct FTransform                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.CustomEquipableItem.GetOffset_Secondary
struct UCustomEquipableItem_GetOffset_Secondary_Params
{
	struct FTransform                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.CustomEquipableItem.GetOffset_Primary
struct UCustomEquipableItem_GetOffset_Primary_Params
{
	struct FTransform                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.CustomEquipableItem.GetOffset_Melee
struct UCustomEquipableItem_GetOffset_Melee_Params
{
	struct FTransform                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.CustomEquipableItem.GetItemLevel
struct UCustomEquipableItem_GetItemLevel_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.ThrowableItem.GetEquippedWeapon
struct UThrowableItem_GetEquippedWeapon_Params
{
	class ATslWeapon*                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.ThrowableItem.GetDefaultWeaponObject
struct UThrowableItem_GetDefaultWeaponObject_Params
{
	class ATslWeapon*                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.SkinnableInterface.HasSkin
struct USkinnableInterface_HasSkin_Params
{
	struct FSkinData                                   InSkinData;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.SkinnableInterface.ClearSkin
struct USkinnableInterface_ClearSkin_Params
{
};

// Function TslGame.TslWeapon.Weapon_AttachShoulder
struct ATslWeapon_Weapon_AttachShoulder_Params
{
};

// Function TslGame.TslWeapon.Weapon_AttachHand
struct ATslWeapon_Weapon_AttachHand_Params
{
};

// Function TslGame.TslWeapon.SimulatePhysicalBodyHit
struct ATslWeapon_SimulatePhysicalBodyHit_Params
{
	struct FHitResult                                  Impact;                                                   // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	class Vector3D                                     ShotDirection;                                            // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon.ServerLogFireWeapon
struct ATslWeapon_ServerLogFireWeapon_Params
{
	struct FAttackId                                   AttackId;                                                 // (CPF_Parm)
};

// Function TslGame.TslWeapon.OnRep_SkinData
struct ATslWeapon_OnRep_SkinData_Params
{
};

// Function TslGame.TslWeapon.OnRep_MyPawn
struct ATslWeapon_OnRep_MyPawn_Params
{
};

// Function TslGame.TslWeapon.OnRep_AttachedItemClasses
struct ATslWeapon_OnRep_AttachedItemClasses_Params
{
	TArray<class UClass*>                              OldVal;                                                   // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function TslGame.TslWeapon.OnAnimationNotify
struct ATslWeapon_OnAnimationNotify_Params
{
	struct FName                                       NotifyName;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon.IsWeaponAttachedToShoulder
struct ATslWeapon_IsWeaponAttachedToShoulder_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon.IsCustomSightAttached
struct ATslWeapon_IsCustomSightAttached_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon.GetWeaponReadyDuration
struct ATslWeapon_GetWeaponReadyDuration_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon.GetWeaponMesh
struct ATslWeapon_GetWeaponMesh_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon.GetWeaponGripTypeLeft
struct ATslWeapon_GetWeaponGripTypeLeft_Params
{
};

// Function TslGame.TslWeapon.GetWeaponEquipDuration
struct ATslWeapon_GetWeaponEquipDuration_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon.GetWeaponDamage
struct ATslWeapon_GetWeaponDamage_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon.GetWeaponConfig
struct ATslWeapon_GetWeaponConfig_Params
{
	struct FWeaponData                                 ReturnValue;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_ReferenceParm)
};

// Function TslGame.TslWeapon.GetWeaponClassEnum
struct ATslWeapon_GetWeaponClassEnum_Params
{
};

// Function TslGame.TslWeapon.GetWeaponAttachmentPoint
struct ATslWeapon_GetWeaponAttachmentPoint_Params
{
	struct FName                                       Tag;                                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon.GetWeaponAttachmentData
struct ATslWeapon_GetWeaponAttachmentData_Params
{
	struct FWeaponAttachmentData                       ReturnValue;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function TslGame.TslWeapon.GetWeaponAttachmentAssetDatas
struct ATslWeapon_GetWeaponAttachmentAssetDatas_Params
{
	TArray<struct FWeaponAttachmentAssetData>          ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function TslGame.TslWeapon.GetWeaponAttachmentAsset
struct ATslWeapon_GetWeaponAttachmentAsset_Params
{
	struct FWeaponAttachmentAssetData                  ReturnValue;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function TslGame.TslWeapon.GetWeaponAnimationKick
struct ATslWeapon_GetWeaponAnimationKick_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon.GetThrownType
struct ATslWeapon_GetThrownType_Params
{
};

// Function TslGame.TslWeapon.GetSwayModifier
struct ATslWeapon_GetSwayModifier_Params
{
	class Vector3D                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon.GetStanceSwayModifier
struct ATslWeapon_GetStanceSwayModifier_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon.GetRecoilMontage
struct ATslWeapon_GetRecoilMontage_Params
{
	class UAnimMontage*                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon.GetPawnOwner
struct ATslWeapon_GetPawnOwner_Params
{
	class ATslCharacter*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon.GetLowerRailOffset
struct ATslWeapon_GetLowerRailOffset_Params
{
	class Vector3D                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon.GetItemName
struct ATslWeapon_GetItemName_Params
{
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function TslGame.TslWeapon.GetDoGripPose
struct ATslWeapon_GetDoGripPose_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon.GetAttachedMesh
struct ATslWeapon_GetAttachedMesh_Params
{
	TArray<class UAsyncStaticMeshComponent*>           ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function TslGame.TslWeapon.GetAnimWeaponType
struct ATslWeapon_GetAnimWeaponType_Params
{
};

// Function TslGame.TslWeapon.GetAllWeaponAttachmentData
struct ATslWeapon_GetAllWeaponAttachmentData_Params
{
	TArray<struct FWeaponAttachmentData>               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function TslGame.TslWeapon.GetAllWeaponAttachmentAssets
struct ATslWeapon_GetAllWeaponAttachmentAssets_Params
{
	TArray<struct FWeaponAttachmentAssetData>          ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function TslGame.TslWeapon.ClientInitByReconnection
struct ATslWeapon_ClientInitByReconnection_Params
{
	bool                                               bIsArmed;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon.AttachWeaponToSlot
struct ATslWeapon_AttachWeaponToSlot_Params
{
	int                                                SlotIndex;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon.AttachWeaponToMesh
struct ATslWeapon_AttachWeaponToMesh_Params
{
};

// Function TslGame.WeaponItem.SetFiringMode
struct UWeaponItem_SetFiringMode_Params
{
};

// Function TslGame.WeaponItem.IsAttachable
struct UWeaponItem_IsAttachable_Params
{
	class UAttachableItem*                             Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.WeaponItem.HasAttachmentSlot
struct UWeaponItem_HasAttachmentSlot_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.WeaponItem.GetFiringMode
struct UWeaponItem_GetFiringMode_Params
{
};

// Function TslGame.WeaponItem.GetEquippedWeapon
struct UWeaponItem_GetEquippedWeapon_Params
{
	class ATslWeapon*                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.WeaponItem.GetDefaultWeaponObject
struct UWeaponItem_GetDefaultWeaponObject_Params
{
	class ATslWeapon*                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.WeaponItem.GetAttachedItem
struct UWeaponItem_GetAttachedItem_Params
{
	class UAttachableItem*                             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.WeaponItem.GetAttachableItemCount
struct UWeaponItem_GetAttachableItemCount_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.WeaponItem.GetAllAttachedItems
struct UWeaponItem_GetAllAttachedItems_Params
{
	TArray<class UAttachableItem*>                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function TslGame.WeaponItem.DetachItem
struct UWeaponItem_DetachItem_Params
{
	class UAttachableItem*                             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.WeaponItem.AttachItem
struct UWeaponItem_AttachItem_Params
{
	class UAttachableItem*                             Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.ItemSpawnProcessor.ProcessSpawnItem
struct UItemSpawnProcessor_ProcessSpawnItem_Params
{
	class UItemSpotGroupComponent*                     Spawner;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function TslGame.ItemSpawnProcessor.ProcessGroup
struct UItemSpawnProcessor_ProcessGroup_Params
{
	class UItemSpotGroupComponent*                     SpotGroup;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	TArray<class UItemSpotComponent*>                  Spots;                                                    // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function TslGame.ItemSpawnProcessor.CheckItemGroup
struct UItemSpawnProcessor_CheckItemGroup_Params
{
	class UItemSpotGroupComponent*                     SpotGroup;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.ItemStudio.UpdateComponentToWorld
struct AItemStudio_UpdateComponentToWorld_Params
{
	class UMeshComponent*                              Mesh;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function TslGame.ItemStudio.SetTextureRenderTarget
struct AItemStudio_SetTextureRenderTarget_Params
{
	class UTextureRenderTarget2D*                      NewTextureTarget;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.ItemStudio.SetItem
struct AItemStudio_SetItem_Params
{
	class UItem*                                       Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.ItemStudio.AddYaw
struct AItemStudio_AddYaw_Params
{
	float                                              Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.ItemToolTipWidget.UpdateVicinityOrInventorySlotItemToolTip
struct UItemToolTipWidget_UpdateVicinityOrInventorySlotItemToolTip_Params
{
	class UEquipableItem*                              EquipableItem;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UEquipableItem*                              EquipmentSlotItem;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.ItemToolTipWidget.UpdateToolTipBySlotInterface
struct UItemToolTipWidget_UpdateToolTipBySlotInterface_Params
{
	TScriptInterface<class USlotInterface>             SlotInterface;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TScriptInterface<class USlotContainerInterface>    Container;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.ItemToolTipWidget.UpdateSlotInfo
struct UItemToolTipWidget_UpdateSlotInfo_Params
{
	TScriptInterface<class USlotInterface>             SlotInterface;                                            // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function TslGame.ItemToolTipWidget.UpdateEquipmentSlotItemToolTip
struct UItemToolTipWidget_UpdateEquipmentSlotItemToolTip_Params
{
	class UEquipableItem*                              EquipableItem;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.LobbyWidget.GameStateChanging
struct ULobbyWidget_GameStateChanging_Params
{
	struct FName                                       NewState;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       OldState;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.MatchPreparer.TimerGameStartCountDown
struct UMatchPreparer_TimerGameStartCountDown_Params
{
};

// Function TslGame.AirborneMatchPreparer.AllowDealDamage
struct UAirborneMatchPreparer_AllowDealDamage_Params
{
};

// Function TslGame.ModeController.SendSystemMessageToAll
struct AModeController_SendSystemMessageToAll_Params
{
	struct FText                                       Message;                                                  // (CPF_Parm)
	float                                              MessageDuration;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.ModeController.IsPlayInEditor
struct AModeController_IsPlayInEditor_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.ModeController.HandleServerAdminBlueprint
struct AModeController_HandleServerAdminBlueprint_Params
{
	struct FString                                     AdminCommand;                                             // (CPF_Parm, CPF_ZeroConstructor)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.ModeController.GetGameState
struct AModeController_GetGameState_Params
{
	class ATslGameState*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.ModeController.GetGameMode
struct AModeController_GetGameMode_Params
{
	class ATslGameMode*                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.ModeController.CanDealDamage
struct AModeController_CanDealDamage_Params
{
	class ATslPlayerState*                             DamageInstigator;                                         // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ATslPlayerState*                             DamagedPlayer;                                            // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.BattleRoyaleModeController.SetNextGasInBlackboard
struct ABattleRoyaleModeController_SetNextGasInBlackboard_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.BattleRoyaleModeController.InitRadius
struct ABattleRoyaleModeController_InitRadius_Params
{
};

// Function TslGame.BattleRoyaleModeController.GetPoisonGasDamagePerSecond
struct ABattleRoyaleModeController_GetPoisonGasDamagePerSecond_Params
{
	float                                              CharaterToCenterDistance;                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SafetyZoneRadius;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PoisonGasWarningRadius;                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.BattleRoyaleModeController.GetMaxPhaseCount
struct ABattleRoyaleModeController_GetMaxPhaseCount_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.CarePackageController.SpawnAircraftCarePackageCustom
struct ACarePackageController_SpawnAircraftCarePackageCustom_Params
{
	class Vector3D                                     DropLocation;                                             // (CPF_Parm, CPF_IsPlainOldData)
	class Vector3D                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.CarePackageController.SpawnAircraftCarePackage
struct ACarePackageController_SpawnAircraftCarePackage_Params
{
	bool                                               CopyIntersectionInfo;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.CarePackageController.SetNextCarePackageInBlackboard
struct ACarePackageController_SetNextCarePackageInBlackboard_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.CarePackageController.InitCarePackageSetting
struct ACarePackageController_InitCarePackageSetting_Params
{
};

// Function TslGame.CarePackageController.GetSpawnInterval
struct ACarePackageController_GetSpawnInterval_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.RedZoneController.SpawnBombProjectile
struct ARedZoneController_SpawnBombProjectile_Params
{
};

// Function TslGame.RedZoneController.SetNextRedZoneInBlackboard
struct ARedZoneController_SetNextRedZoneInBlackboard_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.RedZoneController.OnBombingStart
struct ARedZoneController_OnBombingStart_Params
{
	class Vector3D                                     RedZonePosition;                                          // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function TslGame.RedZoneController.InitRedZoneSetting
struct ARedZoneController_InitRedZoneSetting_Params
{
};

// Function TslGame.RedZoneController.GetRandomBombingInterval
struct ARedZoneController_GetRandomBombingInterval_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.MutableCharacter.UpdateAppearence
struct AMutableCharacter_UpdateAppearence_Params
{
};

// Function TslGame.MutableCharacter.OnRep_InstanceDescriptor
struct AMutableCharacter_OnRep_InstanceDescriptor_Params
{
};

// Function TslGame.MutableCharacter.GetGender
struct AMutableCharacter_GetGender_Params
{
};

// Function TslGame.LobbyCharacter.GetSlotId
struct ALobbyCharacter_GetSlotId_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.LobbyCharacter.GetNickName
struct ALobbyCharacter_GetNickName_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function TslGame.LobbyCharacter.GetNetId
struct ALobbyCharacter_GetNetId_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function TslGame.TslVaultingHelper.GetActorAttachScene
struct ATslVaultingHelper_GetActorAttachScene_Params
{
	class Vector3D                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.WeaponCycleDone
struct ATslWeapon_Gun_WeaponCycleDone_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.StopReloadAnimByOne
struct ATslWeapon_Gun_StopReloadAnimByOne_Params
{
};

// Function TslGame.TslWeapon_Gun.StartManualFireCycle
struct ATslWeapon_Gun_StartManualFireCycle_Params
{
};

// Function TslGame.TslWeapon_Gun.SimulateWeaponReload
struct ATslWeapon_Gun_SimulateWeaponReload_Params
{
};

// Function TslGame.TslWeapon_Gun.SetWeaponReloadInterrupted
struct ATslWeapon_Gun_SetWeaponReloadInterrupted_Params
{
	bool                                               bIsInterrupted;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.SetSpawnBulletFromBarrel
struct ATslWeapon_Gun_SetSpawnBulletFromBarrel_Params
{
	bool                                               DoSpawnBulletFromBarrel;                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.SetFiringMode
struct ATslWeapon_Gun_SetFiringMode_Params
{
};

// Function TslGame.TslWeapon_Gun.ServerStopReload
struct ATslWeapon_Gun_ServerStopReload_Params
{
};

// Function TslGame.TslWeapon_Gun.ServerStopFire
struct ATslWeapon_Gun_ServerStopFire_Params
{
};

// Function TslGame.TslWeapon_Gun.ServerStartReload
struct ATslWeapon_Gun_ServerStartReload_Params
{
};

// Function TslGame.TslWeapon_Gun.ServerStartFire
struct ATslWeapon_Gun_ServerStartFire_Params
{
};

// Function TslGame.TslWeapon_Gun.ServerSetHip
struct ATslWeapon_Gun_ServerSetHip_Params
{
	bool                                               bNewIsHipped;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.ServerSetCurrentZeroLevel
struct ATslWeapon_Gun_ServerSetCurrentZeroLevel_Params
{
	int                                                ZeroLevel;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.ServerHandleFiring
struct ATslWeapon_Gun_ServerHandleFiring_Params
{
	struct FHitResult                                  ExceptTrajectoryHitResult;                                // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.ServerCancelReload
struct ATslWeapon_Gun_ServerCancelReload_Params
{
};

// Function TslGame.TslWeapon_Gun.Server_StartManualFireCycle
struct ATslWeapon_Gun_Server_StartManualFireCycle_Params
{
};

// Function TslGame.TslWeapon_Gun.ProcessBoltAction
struct ATslWeapon_Gun_ProcessBoltAction_Params
{
};

// Function TslGame.TslWeapon_Gun.PlayWeaponCycleCameraAnim
struct ATslWeapon_Gun_PlayWeaponCycleCameraAnim_Params
{
};

// Function TslGame.TslWeapon_Gun.PlayLongTailSound
struct ATslWeapon_Gun_PlayLongTailSound_Params
{
};

// Function TslGame.TslWeapon_Gun.OnRep_TimeBetweenShots
struct ATslWeapon_Gun_OnRep_TimeBetweenShots_Params
{
	float                                              LastTimeBetweenShots;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.OnRep_MyPawn
struct ATslWeapon_Gun_OnRep_MyPawn_Params
{
};

// Function TslGame.TslWeapon_Gun.OnRep_CurrentZeroLevel
struct ATslWeapon_Gun_OnRep_CurrentZeroLevel_Params
{
	int                                                LastCurrentZeroLevel;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.OnRep_AttachedItemClasses
struct ATslWeapon_Gun_OnRep_AttachedItemClasses_Params
{
	TArray<class UClass*>                              OldVal;                                                   // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function TslGame.TslWeapon_Gun.OnRep_AmmoCount
struct ATslWeapon_Gun_OnRep_AmmoCount_Params
{
	int                                                LastCurrentAmmoInClip;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.OnInventoryUpdated
struct ATslWeapon_Gun_OnInventoryUpdated_Params
{
};

// Function TslGame.TslWeapon_Gun.OnAttachmentScopeLoaded
struct ATslWeapon_Gun_OnAttachmentScopeLoaded_Params
{
};

// Function TslGame.TslWeapon_Gun.OnAnimationNotify
struct ATslWeapon_Gun_OnAnimationNotify_Params
{
	struct FName                                       NotifyName;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.ManualFireCycleFinished
struct ATslWeapon_Gun_ManualFireCycleFinished_Params
{
};

// Function TslGame.TslWeapon_Gun.IsWeaponCycleInProgress
struct ATslWeapon_Gun_IsWeaponCycleInProgress_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.IsReloadInterrupted
struct ATslWeapon_Gun_IsReloadInterrupted_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.IsReloading
struct ATslWeapon_Gun_IsReloading_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.GetWeaponTacticalReload
struct ATslWeapon_Gun_GetWeaponTacticalReload_Params
{
	class UAnimMontage*                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.GetWeaponPostprocessSettings
struct ATslWeapon_Gun_GetWeaponPostprocessSettings_Params
{
	struct FWeaponPPSettings                           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function TslGame.TslWeapon_Gun.GetWeaponOrScopePostprocessSettings
struct ATslWeapon_Gun_GetWeaponOrScopePostprocessSettings_Params
{
	struct FWeaponPPSettings                           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function TslGame.TslWeapon_Gun.GetWeaponHandOffsetFPP
struct ATslWeapon_Gun_GetWeaponHandOffsetFPP_Params
{
	class Vector3D                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.GetWeaponHandOffset
struct ATslWeapon_Gun_GetWeaponHandOffset_Params
{
	class Vector3D                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.GetWeaponGunConfig
struct ATslWeapon_Gun_GetWeaponGunConfig_Params
{
	struct FWeaponGunData                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function TslGame.TslWeapon_Gun.GetWeaponGunAnimConfig
struct ATslWeapon_Gun_GetWeaponGunAnimConfig_Params
{
	struct FWeaponGunAnim                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function TslGame.TslWeapon_Gun.GetWeaponFullReloadTime
struct ATslWeapon_Gun_GetWeaponFullReloadTime_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.GetWeaponFullRealoadTimeWithAttachments
struct ATslWeapon_Gun_GetWeaponFullRealoadTimeWithAttachments_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.GetWeaponCurrentRecoilValue
struct ATslWeapon_Gun_GetWeaponCurrentRecoilValue_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.GetWeaponCurrentDeviationValue
struct ATslWeapon_Gun_GetWeaponCurrentDeviationValue_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.GetWeaponChargeReload
struct ATslWeapon_Gun_GetWeaponChargeReload_Params
{
	class UAnimMontage*                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.GetReloadAnimationPlayRate
struct ATslWeapon_Gun_GetReloadAnimationPlayRate_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.GetRecoilADSSocketOffsetScale
struct ATslWeapon_Gun_GetRecoilADSSocketOffsetScale_Params
{
	class Vector3D                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.GetNumOfFiringMode
struct ATslWeapon_Gun_GetNumOfFiringMode_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.GetMovementModifierScope
struct ATslWeapon_Gun_GetMovementModifierScope_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.GetMovementModifierAim
struct ATslWeapon_Gun_GetMovementModifierAim_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.GetMaxAmmo
struct ATslWeapon_Gun_GetMaxAmmo_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.GetMagOutDuration
struct ATslWeapon_Gun_GetMagOutDuration_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.GetMagDropLinearVelocity
struct ATslWeapon_Gun_GetMagDropLinearVelocity_Params
{
	class Vector3D                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.GetMagDropAngularVelocity
struct ATslWeapon_Gun_GetMagDropAngularVelocity_Params
{
	class Vector3D                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.GetGripTypeIndex
struct ATslWeapon_Gun_GetGripTypeIndex_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.GetFiringMode
struct ATslWeapon_Gun_GetFiringMode_Params
{
};

// Function TslGame.TslWeapon_Gun.GetDefaultAmmoObject
struct ATslWeapon_Gun_GetDefaultAmmoObject_Params
{
	class UAmmoItem*                                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.GetCurrentDeviation
struct ATslWeapon_Gun_GetCurrentDeviation_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.GetCurrentAmmoInInventory
struct ATslWeapon_Gun_GetCurrentAmmoInInventory_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.GetCurrentAmmoInClip
struct ATslWeapon_Gun_GetCurrentAmmoInClip_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.GetCurrentAmmo
struct ATslWeapon_Gun_GetCurrentAmmo_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.GetCharacterTacticalReloadFromAttach
struct ATslWeapon_Gun_GetCharacterTacticalReloadFromAttach_Params
{
	class UAnimMontage*                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.GetCharacterReloadTacticalMontage
struct ATslWeapon_Gun_GetCharacterReloadTacticalMontage_Params
{
	class UAnimMontage*                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.GetCharacterReloadChargeMontage
struct ATslWeapon_Gun_GetCharacterReloadChargeMontage_Params
{
	class UAnimMontage*                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.GetCharacterReloadByOneStopMontage
struct ATslWeapon_Gun_GetCharacterReloadByOneStopMontage_Params
{
	class UAnimMontage*                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.GetCharacterReloadByOneStartMontage
struct ATslWeapon_Gun_GetCharacterReloadByOneStartMontage_Params
{
	class UAnimMontage*                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.GetCharacterReloadByOneSingleMontage
struct ATslWeapon_Gun_GetCharacterReloadByOneSingleMontage_Params
{
	class UAnimMontage*                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.GetCharacterLHGripBlendspace
struct ATslWeapon_Gun_GetCharacterLHGripBlendspace_Params
{
	class UBlendSpaceBase*                             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.GetCharacterGripBlendspace
struct ATslWeapon_Gun_GetCharacterGripBlendspace_Params
{
	class UBlendSpace1D*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.GetCharacterFireSelectorMontage
struct ATslWeapon_Gun_GetCharacterFireSelectorMontage_Params
{
	class UAnimMontage*                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.GetCharacterFireMontage
struct ATslWeapon_Gun_GetCharacterFireMontage_Params
{
	class UAnimMontage*                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.GetCharacterFireCycle
struct ATslWeapon_Gun_GetCharacterFireCycle_Params
{
	class UAnimMontage*                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.GetCharacterChargeReloadFromAttach
struct ATslWeapon_Gun_GetCharacterChargeReloadFromAttach_Params
{
	class UAnimMontage*                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.GetAmmoPerClip
struct ATslWeapon_Gun_GetAmmoPerClip_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.GetAmmoItemClass
struct ATslWeapon_Gun_GetAmmoItemClass_Params
{
	class UClass*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.GetADSRecoilKick
struct ATslWeapon_Gun_GetADSRecoilKick_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.ClientStopSimulatingWeaponFire
struct ATslWeapon_Gun_ClientStopSimulatingWeaponFire_Params
{
};

// Function TslGame.TslWeapon_Gun.ClientSimulateWeaponFire
struct ATslWeapon_Gun_ClientSimulateWeaponFire_Params
{
	struct FHitResult                                  ExceptTrajectoryHitResult;                                // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.ClientNotifyStopReloadByOne
struct ATslWeapon_Gun_ClientNotifyStopReloadByOne_Params
{
};

// Function TslGame.TslWeapon_Gun.ClientNotifyOutOfAmmo
struct ATslWeapon_Gun_ClientNotifyOutOfAmmo_Params
{
};

// Function TslGame.TslWeapon_Gun.ClientNotifyAmmo
struct ATslWeapon_Gun_ClientNotifyAmmo_Params
{
	int                                                InCurrentAmmoInClip;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.ClientCancelReload
struct ATslWeapon_Gun_ClientCancelReload_Params
{
};

// Function TslGame.TslWeapon_Gun.Client_StartManualFireCycle
struct ATslWeapon_Gun_Client_StartManualFireCycle_Params
{
};

// Function TslGame.TslWeapon_Gun.CheckMiddlePointCollision
struct ATslWeapon_Gun_CheckMiddlePointCollision_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun.CancelReloadImpl
struct ATslWeapon_Gun_CancelReloadImpl_Params
{
};

// Function TslGame.TslWeapon_Gun.BroadcastOutOfAmmo
struct ATslWeapon_Gun_BroadcastOutOfAmmo_Params
{
};

// Function TslGame.TslWeapon_Gun.AnimCall_ToggleFireMode
struct ATslWeapon_Gun_AnimCall_ToggleFireMode_Params
{
};

// Function TslGame.TslWeapon_Gun.AnimCall_ReloadTacticalWeapon
struct ATslWeapon_Gun_AnimCall_ReloadTacticalWeapon_Params
{
};

// Function TslGame.TslWeapon_Gun.AnimCall_ReloadChargeWeapon
struct ATslWeapon_Gun_AnimCall_ReloadChargeWeapon_Params
{
};

// Function TslGame.TslWeapon_Gun.AnimCall_ReloadByOneStop
struct ATslWeapon_Gun_AnimCall_ReloadByOneStop_Params
{
};

// Function TslGame.TslWeapon_Gun.AnimCall_FireWeaponCycle
struct ATslWeapon_Gun_AnimCall_FireWeaponCycle_Params
{
};

// Function TslGame.TslWeapon_Gun.AnimCall_FireWeapon
struct ATslWeapon_Gun_AnimCall_FireWeapon_Params
{
};

// Function TslGame.VehicleSeatActor.OnRep_Rider
struct AVehicleSeatActor_OnRep_Rider_Params
{
};

// Function TslGame.VehicleSeatActor.IsWeaponClassAllowed
struct AVehicleSeatActor_IsWeaponClassAllowed_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.VehicleSeatActor.IsEntryAllowedByVelocity
struct AVehicleSeatActor_IsEntryAllowedByVelocity_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.VehicleSeatActor.GetVehicleSeatComponent
struct AVehicleSeatActor_GetVehicleSeatComponent_Params
{
	class UTslVehicleSeatComponent*                    ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function TslGame.VehicleSeatActor.GetVehiclePawn
struct AVehicleSeatActor_GetVehiclePawn_Params
{
	class APawn*                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.VehicleSeatActor.GetVehicleInterface
struct AVehicleSeatActor_GetVehicleInterface_Params
{
	TScriptInterface<class UTslVehicleInterface>       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.VehicleSeatActor.GetVehicleAnimType
struct AVehicleSeatActor_GetVehicleAnimType_Params
{
};

// Function TslGame.VehicleSeatActor.GetTransitionOutBlendspace
struct AVehicleSeatActor_GetTransitionOutBlendspace_Params
{
	class UBlendSpaceBase*                             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.VehicleSeatActor.GetTransitionInBlendspace
struct AVehicleSeatActor_GetTransitionInBlendspace_Params
{
	class UBlendSpaceBase*                             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.VehicleSeatActor.GetSeatIdleAO
struct AVehicleSeatActor_GetSeatIdleAO_Params
{
	class UAimOffsetBlendSpace*                        ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.VehicleSeatActor.GetSeatIdleAnimation
struct AVehicleSeatActor_GetSeatIdleAnimation_Params
{
	class UAnimSequenceBase*                           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.VehicleSeatActor.GetSeatAimingBlendspace
struct AVehicleSeatActor_GetSeatAimingBlendspace_Params
{
	class UBlendSpaceBase*                             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.VehicleSeatActor.GetRider
struct AVehicleSeatActor_GetRider_Params
{
	class ATslCharacter*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.VehicleSeatActor.GetMinPitchByYaw
struct AVehicleSeatActor_GetMinPitchByYaw_Params
{
	float                                              CurrentYaw;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.VehicleSeatActor.GetMaxPitchByYaw
struct AVehicleSeatActor_GetMaxPitchByYaw_Params
{
	float                                              CurrentYaw;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.VehicleSeatActor.GetCanFireOnlyWhileAimed
struct AVehicleSeatActor_GetCanFireOnlyWhileAimed_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.VehicleSeatActor.GetAdditionalMessage
struct AVehicleSeatActor_GetAdditionalMessage_Params
{
	class ATslCharacter*                               Character;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function TslGame.VehicleSeatActor.AllowInteract
struct AVehicleSeatActor_AllowInteract_Params
{
	class ATslCharacter*                               OtherCharacter;                                           // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.WeaponProcessor.SimulateUnArmWeapon
struct AWeaponProcessor_SimulateUnArmWeapon_Params
{
	int                                                WeaponIndex;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bNeedAnimation;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.WeaponProcessor.SimulateArmWeapon
struct AWeaponProcessor_SimulateArmWeapon_Params
{
	int                                                WeaponIndex;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bNeedAnimation;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.WeaponProcessor.ServerUnarmCurrentWeapon
struct AWeaponProcessor_ServerUnarmCurrentWeapon_Params
{
	bool                                               bNeedAnimation;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.WeaponProcessor.ServerArmWeapon
struct AWeaponProcessor_ServerArmWeapon_Params
{
	int                                                WeaponIndex;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bNeedAnimation;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.WeaponProcessor.OnRep_EquippedWeapons
struct AWeaponProcessor_OnRep_EquippedWeapons_Params
{
	TArray<class ATslWeapon*>                          LastEquippedWeapons;                                      // (CPF_Parm, CPF_ZeroConstructor)
};

// Function TslGame.WeaponProcessor.OnRep_CurrentWeaponIndex
struct AWeaponProcessor_OnRep_CurrentWeaponIndex_Params
{
};

// Function TslGame.WeaponProcessor.NotifyWeaponUpdate
struct AWeaponProcessor_NotifyWeaponUpdate_Params
{
};

// Function TslGame.WeaponProcessor.IsUnarmedWeapon
struct AWeaponProcessor_IsUnarmedWeapon_Params
{
	int                                                WeaponIndex;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.WeaponProcessor.IsUnarmed
struct AWeaponProcessor_IsUnarmed_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.WeaponProcessor.GetWeaponThrowable
struct AWeaponProcessor_GetWeaponThrowable_Params
{
	class ATslWeapon_Throwable*                        ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.WeaponProcessor.GetWeaponIndex
struct AWeaponProcessor_GetWeaponIndex_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.WeaponProcessor.GetWeaponGun
struct AWeaponProcessor_GetWeaponGun_Params
{
	class ATslWeapon_Gun*                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.WeaponProcessor.GetWeaponByIndex
struct AWeaponProcessor_GetWeaponByIndex_Params
{
	int                                                Index;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ATslWeapon*                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.WeaponProcessor.GetWeapon
struct AWeaponProcessor_GetWeapon_Params
{
	class ATslWeapon*                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.WeaponProcessor.GetUnarmedWeaponIndex
struct AWeaponProcessor_GetUnarmedWeaponIndex_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.WeaponProcessor.GetCurrentWeapon
struct AWeaponProcessor_GetCurrentWeapon_Params
{
	class ATslWeapon*                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.WeaponProcessor.FindWeapon
struct AWeaponProcessor_FindWeapon_Params
{
	class UClass*                                      WeaponClass;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ATslWeapon*                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.WeaponProcessor.ClientSetWeaponIndex
struct AWeaponProcessor_ClientSetWeaponIndex_Params
{
	int                                                WeaponIndex;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.WeaponProcessor.ClientInitByReconnection
struct AWeaponProcessor_ClientInitByReconnection_Params
{
	int                                                InitWeaponIndex;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.WeaponProcessor.ClientForceRemoveWeapon
struct AWeaponProcessor_ClientForceRemoveWeapon_Params
{
	int                                                WeaponIndex;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.VaultingData.GetVaultAnimation
struct UVaultingData_GetVaultAnimation_Params
{
	bool                                               bHasRifle;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimSequenceBase*                           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.VaultingData.GetBlendSpeedByDistance
struct UVaultingData_GetBlendSpeedByDistance_Params
{
	float                                              InDistance;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.VaultingData.GetAnimationLength
struct UVaultingData_GetAnimationLength_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.VaultingData.GetAnimationCurve
struct UVaultingData_GetAnimationCurve_Params
{
	class UCurveFloat*                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.UpdateWeaponAttachPoint
struct ATslCharacter_UpdateWeaponAttachPoint_Params
{
};

// Function TslGame.TslCharacter.UnBindCallbackToHUD
struct ATslCharacter_UnBindCallbackToHUD_Params
{
	class ATslPlayerController*                        InController;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.ToggleInvincibility
struct ATslCharacter_ToggleInvincibility_Params
{
};

// Function TslGame.TslCharacter.ToggleFreeMode
struct ATslCharacter_ToggleFreeMode_Params
{
};

// Function TslGame.TslCharacter.ToggleAnimDynamics
struct ATslCharacter_ToggleAnimDynamics_Params
{
};

// Function TslGame.TslCharacter.TickOptimization_ShouldRunMovementUpdate
struct ATslCharacter_TickOptimization_ShouldRunMovementUpdate_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.TickOptimization_ShouldRunAnimUpdate
struct ATslCharacter_TickOptimization_ShouldRunAnimUpdate_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.TickOptimization_IsOverMinimumDistance
struct ATslCharacter_TickOptimization_IsOverMinimumDistance_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.TickOptimization_Eval
struct ATslCharacter_TickOptimization_Eval_Params
{
};

// Function TslGame.TslCharacter.StopAllAnimMontages
struct ATslCharacter_StopAllAnimMontages_Params
{
};

// Function TslGame.TslCharacter.STAT_TickEnd
struct ATslCharacter_STAT_TickEnd_Params
{
};

// Function TslGame.TslCharacter.STAT_TickBegin
struct ATslCharacter_STAT_TickBegin_Params
{
};

// Function TslGame.TslCharacter.SpawnPunchImpact_Reliable
struct ATslCharacter_SpawnPunchImpact_Reliable_Params
{
	class Vector3D                                     InLocation;                                               // (CPF_Parm, CPF_IsPlainOldData)
	class Rotator                                      InRotation;                                               // (CPF_Parm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.SpawnPunchImpact
struct ATslCharacter_SpawnPunchImpact_Params
{
	class Vector3D                                     InLocation;                                               // (CPF_Parm, CPF_IsPlainOldData)
	class Rotator                                      InRotation;                                               // (CPF_Parm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.SpawnBulletPassByEffect
struct ATslCharacter_SpawnBulletPassByEffect_Params
{
	class Vector3D                                     Location;                                                 // (CPF_Parm, CPF_IsPlainOldData)
	float                                              BulletVelocity;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.SimulatePhysicalHitRecovery
struct ATslCharacter_SimulatePhysicalHitRecovery_Params
{
};

// Function TslGame.TslCharacter.SimulateHeadShot
struct ATslCharacter_SimulateHeadShot_Params
{
	struct FTransform                                  SpawnTransform;                                           // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	struct FTransform                                  ImpactTransform;                                          // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.ShowDynamicCrosshair
struct ATslCharacter_ShowDynamicCrosshair_Params
{
	bool                                               bShow;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.ShowCharacterInformation
struct ATslCharacter_ShowCharacterInformation_Params
{
	bool                                               bFullInfo;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.SetWorldTransformIdentity
struct ATslCharacter_SetWorldTransformIdentity_Params
{
};

// Function TslGame.TslCharacter.SetWeaponInertia
struct ATslCharacter_SetWeaponInertia_Params
{
	class Rotator                                      InInertia;                                                // (CPF_Parm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.SetupWeaponBlueprint
struct ATslCharacter_SetupWeaponBlueprint_Params
{
};

// Function TslGame.TslCharacter.SetTPPSpringarmOffset
struct ATslCharacter_SetTPPSpringarmOffset_Params
{
	float                                              VerticalOffset;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.SetTickOptimization_Movement
struct ATslCharacter_SetTickOptimization_Movement_Params
{
	bool                                               bActivate;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.SetTickOptimization_Anim
struct ATslCharacter_SetTickOptimization_Anim_Params
{
	bool                                               bActivate;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.SetTickOptimization_Actor
struct ATslCharacter_SetTickOptimization_Actor_Params
{
	bool                                               bActivate;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.SetSwayDebuffParameters
struct ATslCharacter_SetSwayDebuffParameters_Params
{
	float                                              SwaySpeed;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SwayVerticalMultiplier;                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SwayHorizontalMultiplier;                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.SetServerVaultFinished
struct ATslCharacter_SetServerVaultFinished_Params
{
	bool                                               InFinished;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.SetParachuteLandingAssist
struct ATslCharacter_SetParachuteLandingAssist_Params
{
	bool                                               bAssistActive;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.SetMovementEnabled
struct ATslCharacter_SetMovementEnabled_Params
{
	bool                                               IsEnabled;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.SetLaunchEvent
struct ATslCharacter_SetLaunchEvent_Params
{
	struct FAttackId                                   AttackId;                                                 // (CPF_Parm)
	class ATslPlayerState*                             InPlayerState;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      Causer;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      DamageTypeClass;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.SetJumpStartLocationAndFallheight
struct ATslCharacter_SetJumpStartLocationAndFallheight_Params
{
	class Vector3D                                     JumpStartLoc;                                             // (CPF_Parm, CPF_IsPlainOldData)
	float                                              FallHeight;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.SetCustomDepth
struct ATslCharacter_SetCustomDepth_Params
{
	bool                                               bOn;                                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.SetCharacterVaultingData
struct ATslCharacter_SetCharacterVaultingData_Params
{
	float                                              InVaultTimer;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               InIsVaulting;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               InIsClimbing;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               InEndVaultToFall;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              InDirection;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.SetCanGroggyDamage
struct ATslCharacter_SetCanGroggyDamage_Params
{
	bool                                               bInCanGroggyDamage;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.SetBulletSpawnOverride
struct ATslCharacter_SetBulletSpawnOverride_Params
{
	bool                                               InOverride;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.SetBuffFinalSpreadFactor
struct ATslCharacter_SetBuffFinalSpreadFactor_Params
{
	float                                              FinalSpreadFactor;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.SetBoostGauge
struct ATslCharacter_SetBoostGauge_Params
{
	float                                              NewBoostGauge;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.SetAnimationAkSwitch
struct ATslCharacter_SetAnimationAkSwitch_Params
{
	struct FString                                     SwitchGroup;                                              // (CPF_Parm, CPF_ZeroConstructor)
	struct FString                                     SwitchState;                                              // (CPF_Parm, CPF_ZeroConstructor)
};

// Function TslGame.TslCharacter.SetAnimationAkRTPC
struct ATslCharacter_SetAnimationAkRTPC_Params
{
	struct FString                                     RTPCName;                                                 // (CPF_Parm, CPF_ZeroConstructor)
	float                                              RTPCValue;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.SetAimStateActive
struct ATslCharacter_SetAimStateActive_Params
{
	bool                                               IsActive;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.SetADSSocketOffset
struct ATslCharacter_SetADSSocketOffset_Params
{
	class Vector3D                                     NewOffset;                                                // (CPF_Parm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.SetActiveRagdoll
struct ATslCharacter_SetActiveRagdoll_Params
{
	bool                                               bIsActive;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.SetAccessorySlot_Thrown
struct ATslCharacter_SetAccessorySlot_Thrown_Params
{
	class UTslAccessoryComponent*                      AccessoryComponent;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.SetAccessorySlot_SideArm
struct ATslCharacter_SetAccessorySlot_SideArm_Params
{
	class UTslAccessoryComponent*                      AccessoryComponent;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.SetAccessorySlot_Secondary
struct ATslCharacter_SetAccessorySlot_Secondary_Params
{
	class UTslAccessoryComponent*                      AccessoryComponent;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.SetAccessorySlot_Primary
struct ATslCharacter_SetAccessorySlot_Primary_Params
{
	class UTslAccessoryComponent*                      AccessoryComponent;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.SetAccessorySlot_Melee
struct ATslCharacter_SetAccessorySlot_Melee_Params
{
	class UTslAccessoryComponent*                      AccessoryComponent;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.SetAccessorySlot
struct ATslCharacter_SetAccessorySlot_Params
{
	class UTslAccessoryComponent*                      AccessoryComponent;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.ServerSetVariableZoomLevel
struct ATslCharacter_ServerSetVariableZoomLevel_Params
{
	int                                                ZoomLevel;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.ServerSetTargeting
struct ATslCharacter_ServerSetTargeting_Params
{
};

// Function TslGame.TslCharacter.ServerSetSprintingAuto
struct ATslCharacter_ServerSetSprintingAuto_Params
{
	bool                                               bNewSprintingAuto;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.ServerSetSprinting
struct ATslCharacter_ServerSetSprinting_Params
{
	bool                                               bNewSprinting;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.ServerSetRunning
struct ATslCharacter_ServerSetRunning_Params
{
	bool                                               bNewRunning;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.ServerSetRolling
struct ATslCharacter_ServerSetRolling_Params
{
	bool                                               bNewRolling;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsLeft;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.ServerSetPeekRight
struct ATslCharacter_ServerSetPeekRight_Params
{
	bool                                               bNewPeekRight;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               InbUseRightShoulderAiming;                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.ServerSetPeekLeft
struct ATslCharacter_ServerSetPeekLeft_Params
{
	bool                                               bNewPeekLeft;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               InbUseRightShoulderAiming;                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.ServerSetHoldingBreath
struct ATslCharacter_ServerSetHoldingBreath_Params
{
	bool                                               bNewHoldingBreath;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.ServerSetGunDirectionSway
struct ATslCharacter_ServerSetGunDirectionSway_Params
{
	class Rotator                                      InGunDirectionSway;                                       // (CPF_Parm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.ServerSetAimOffsets
struct ATslCharacter_ServerSetAimOffsets_Params
{
	class Vector3D                                     NewAimOffsets;                                            // (CPF_Parm)
};

// Function TslGame.TslCharacter.ServerBroadCastAimingRemote
struct ATslCharacter_ServerBroadCastAimingRemote_Params
{
	bool                                               InbIsAming;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.Server_UnarmedHitNotify
struct ATslCharacter_Server_UnarmedHitNotify_Params
{
	struct FHitResult                                  Hit;                                                      // (CPF_Parm, CPF_IsPlainOldData)
	TEnumAsByte<EPunchDamageType>                      PunchDamageType;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<float>                                      AimSpeeds;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm)
	uint32_t                                           HitSeq;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.Server_SetWeaponObstruction
struct ATslCharacter_Server_SetWeaponObstruction_Params
{
	bool                                               bNewObstruction;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.Server_SetVaultCancel
struct ATslCharacter_Server_SetVaultCancel_Params
{
	bool                                               InCancel;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.Server_SetThrowMode
struct ATslCharacter_Server_SetThrowMode_Params
{
	bool                                               bNewVal;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.Server_SetParachuteLandingAssist
struct ATslCharacter_Server_SetParachuteLandingAssist_Params
{
	bool                                               bAssistActive;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.Server_SetFiringMode
struct ATslCharacter_Server_SetFiringMode_Params
{
};

// Function TslGame.TslCharacter.Server_SetCoatEquipped
struct ATslCharacter_Server_SetCoatEquipped_Params
{
	bool                                               IsEquipped;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.Server_SetCastAnim
struct ATslCharacter_Server_SetCastAnim_Params
{
};

// Function TslGame.TslCharacter.Server_SetCanGroggyDamage
struct ATslCharacter_Server_SetCanGroggyDamage_Params
{
	bool                                               bInCanGroggyDamage;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.Server_SetAimState
struct ATslCharacter_Server_SetAimState_Params
{
	bool                                               IsActive;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.Server_PlayUnarmedAttack
struct ATslCharacter_Server_PlayUnarmedAttack_Params
{
	int                                                AnimationIndex;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.Server_CastFinishNotify
struct ATslCharacter_Server_CastFinishNotify_Params
{
};

// Function TslGame.TslCharacter.Server_CastCancelNotify
struct ATslCharacter_Server_CastCancelNotify_Params
{
};

// Function TslGame.TslCharacter.SendSystemMessage
struct ATslCharacter_SendSystemMessage_Params
{
	struct FText                                       Message;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function TslGame.TslCharacter.RunVaultCheck_BP
struct ATslCharacter_RunVaultCheck_BP_Params
{
};

// Function TslGame.TslCharacter.ResetUnarmedAttack
struct ATslCharacter_ResetUnarmedAttack_Params
{
};

// Function TslGame.TslCharacter.ResetParachute
struct ATslCharacter_ResetParachute_Params
{
};

// Function TslGame.TslCharacter.RemoveCrosshair
struct ATslCharacter_RemoveCrosshair_Params
{
};

// Function TslGame.TslCharacter.ReevaluaeTargetingState
struct ATslCharacter_ReevaluaeTargetingState_Params
{
};

// Function TslGame.TslCharacter.PunchStart
struct ATslCharacter_PunchStart_Params
{
	TEnumAsByte<EPunchDamageType>                      PunchDamageType;                                          // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
	float                                              PunchDistance;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PunchRadius;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<float>                                      InAimSpeeds;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function TslGame.TslCharacter.ProcessRevive
struct ATslCharacter_ProcessRevive_Params
{
	float                                              RemainGroggyHealthPercent;                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.ProcessDBNO
struct ATslCharacter_ProcessDBNO_Params
{
	float                                              GroggyHealthPercent;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.PrepareParachute
struct ATslCharacter_PrepareParachute_Params
{
	class UClass*                                      ParachuteType;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.PlayCameraAnim
struct ATslCharacter_PlayCameraAnim_Params
{
	class UCameraAnim*                                 CameraAnim;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.PickUpItem
struct ATslCharacter_PickUpItem_Params
{
	class UItem*                                       Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       TargetContainer;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     Options;                                                  // (CPF_Parm, CPF_ZeroConstructor)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.OnWeaponChanged
struct ATslCharacter_OnWeaponChanged_Params
{
};

// Function TslGame.TslCharacter.OnWeapon_6
struct ATslCharacter_OnWeapon_6_Params
{
};

// Function TslGame.TslCharacter.OnWeapon_5
struct ATslCharacter_OnWeapon_5_Params
{
};

// Function TslGame.TslCharacter.OnWeapon_4
struct ATslCharacter_OnWeapon_4_Params
{
};

// Function TslGame.TslCharacter.OnWeapon_3
struct ATslCharacter_OnWeapon_3_Params
{
};

// Function TslGame.TslCharacter.OnWeapon_2
struct ATslCharacter_OnWeapon_2_Params
{
};

// Function TslGame.TslCharacter.OnUnarmPad
struct ATslCharacter_OnUnarmPad_Params
{
};

// Function TslGame.TslCharacter.OnUnarm
struct ATslCharacter_OnUnarm_Params
{
};

// Function TslGame.TslCharacter.OnThrowWeaponPad
struct ATslCharacter_OnThrowWeaponPad_Params
{
};

// Function TslGame.TslCharacter.OnTest_SetupWeapon
struct ATslCharacter_OnTest_SetupWeapon_Params
{
};

// Function TslGame.TslCharacter.OnTest_InspectObject
struct ATslCharacter_OnTest_InspectObject_Params
{
};

// Function TslGame.TslCharacter.OnStopTargeting
struct ATslCharacter_OnStopTargeting_Params
{
};

// Function TslGame.TslCharacter.OnStopFire
struct ATslCharacter_OnStopFire_Params
{
};

// Function TslGame.TslCharacter.OnStartInteractBy
struct ATslCharacter_OnStartInteractBy_Params
{
	class ATslCharacter*                               OtherCharacter;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.OnShowDynamicCrosshair
struct ATslCharacter_OnShowDynamicCrosshair_Params
{
	bool                                               bShow;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.OnRep_WeaponProcessor
struct ATslCharacter_OnRep_WeaponProcessor_Params
{
};

// Function TslGame.TslCharacter.OnRep_VariableZoomLevel
struct ATslCharacter_OnRep_VariableZoomLevel_Params
{
};

// Function TslGame.TslCharacter.OnRep_TargetingType
struct ATslCharacter_OnRep_TargetingType_Params
{
};

// Function TslGame.TslCharacter.OnRep_ShoesSoundType
struct ATslCharacter_OnRep_ShoesSoundType_Params
{
};

// Function TslGame.TslCharacter.OnRep_ReviveCastingTime
struct ATslCharacter_OnRep_ReviveCastingTime_Params
{
};

// Function TslGame.TslCharacter.OnRep_LastTakeHitInfo
struct ATslCharacter_OnRep_LastTakeHitInfo_Params
{
};

// Function TslGame.TslCharacter.OnRep_IsWeaponObstructed
struct ATslCharacter_OnRep_IsWeaponObstructed_Params
{
};

// Function TslGame.TslCharacter.OnRep_IsThrowHigh
struct ATslCharacter_OnRep_IsThrowHigh_Params
{
};

// Function TslGame.TslCharacter.OnRep_IsThirdPerson
struct ATslCharacter_OnRep_IsThirdPerson_Params
{
};

// Function TslGame.TslCharacter.OnRep_IsScopingRemote
struct ATslCharacter_OnRep_IsScopingRemote_Params
{
};

// Function TslGame.TslCharacter.OnRep_IsReviving
struct ATslCharacter_OnRep_IsReviving_Params
{
};

// Function TslGame.TslCharacter.OnRep_IsPeekRight
struct ATslCharacter_OnRep_IsPeekRight_Params
{
};

// Function TslGame.TslCharacter.OnRep_IsPeekLeft
struct ATslCharacter_OnRep_IsPeekLeft_Params
{
};

// Function TslGame.TslCharacter.OnRep_IsInVehicleRemote
struct ATslCharacter_OnRep_IsInVehicleRemote_Params
{
};

// Function TslGame.TslCharacter.OnRep_IsGroggying
struct ATslCharacter_OnRep_IsGroggying_Params
{
};

// Function TslGame.TslCharacter.OnRep_IsFirstPersonRemote
struct ATslCharacter_OnRep_IsFirstPersonRemote_Params
{
};

// Function TslGame.TslCharacter.OnRep_IsDemoVaulting
struct ATslCharacter_OnRep_IsDemoVaulting_Params
{
};

// Function TslGame.TslCharacter.OnRep_IsCrouched
struct ATslCharacter_OnRep_IsCrouched_Params
{
};

// Function TslGame.TslCharacter.OnRep_IsCoatEquipped
struct ATslCharacter_OnRep_IsCoatEquipped_Params
{
};

// Function TslGame.TslCharacter.OnRep_IsAimingRemote
struct ATslCharacter_OnRep_IsAimingRemote_Params
{
};

// Function TslGame.TslCharacter.OnRep_IgnoreRotation
struct ATslCharacter_OnRep_IgnoreRotation_Params
{
};

// Function TslGame.TslCharacter.OnRep_Health
struct ATslCharacter_OnRep_Health_Params
{
	float                                              LastHealth;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.OnRep_GroggyHealth
struct ATslCharacter_OnRep_GroggyHealth_Params
{
	float                                              LastGroggyHealth;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.OnRep_CharacterState
struct ATslCharacter_OnRep_CharacterState_Params
{
};

// Function TslGame.TslCharacter.OnRep_CastAnim
struct ATslCharacter_OnRep_CastAnim_Params
{
};

// Function TslGame.TslCharacter.OnRep_BoostGauge
struct ATslCharacter_OnRep_BoostGauge_Params
{
	float                                              LastBoostGauge;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.OnRep_AimStateActive
struct ATslCharacter_OnRep_AimStateActive_Params
{
};

// Function TslGame.TslCharacter.OnRep_AimOffsets
struct ATslCharacter_OnRep_AimOffsets_Params
{
	class Vector3D                                     PrevAimOffsets;                                           // (CPF_Parm)
};

// Function TslGame.TslCharacter.OnReloadGamepad
struct ATslCharacter_OnReloadGamepad_Params
{
};

// Function TslGame.TslCharacter.OnMeleeWeaponPad
struct ATslCharacter_OnMeleeWeaponPad_Params
{
};

// Function TslGame.TslCharacter.OnInvulnerable
struct ATslCharacter_OnInvulnerable_Params
{
};

// Function TslGame.TslCharacter.OnInteractBy
struct ATslCharacter_OnInteractBy_Params
{
	class ATslCharacter*                               OtherCharacter;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.OnIncreaseMaxFlyAccerleration
struct ATslCharacter_OnIncreaseMaxFlyAccerleration_Params
{
};

// Function TslGame.TslCharacter.OnFreeMoveMode
struct ATslCharacter_OnFreeMoveMode_Params
{
};

// Function TslGame.TslCharacter.OnDecreaseMaxFlyAccerleration
struct ATslCharacter_OnDecreaseMaxFlyAccerleration_Params
{
};

// Function TslGame.TslCharacter.OnChangeBreath
struct ATslCharacter_OnChangeBreath_Params
{
	float                                              Breath;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LastBreath;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BreathMax;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.OnCancelInteractBy
struct ATslCharacter_OnCancelInteractBy_Params
{
	class ATslCharacter*                               OtherCharacter;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.OnBlockingWidgetOpened
struct ATslCharacter_OnBlockingWidgetOpened_Params
{
	class UWidget*                                     Widget;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.NotHaveThrowItemNotifyMessage
struct ATslCharacter_NotHaveThrowItemNotifyMessage_Params
{
	struct FText                                       ItemName;                                                 // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function TslGame.TslCharacter.NotHaveHealItemNotifyMessage
struct ATslCharacter_NotHaveHealItemNotifyMessage_Params
{
	struct FText                                       ItemName;                                                 // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function TslGame.TslCharacter.NotHaveBoostItemNotifyMessage
struct ATslCharacter_NotHaveBoostItemNotifyMessage_Params
{
};

// Function TslGame.TslCharacter.NativeOnWeaponChanged
struct ATslCharacter_NativeOnWeaponChanged_Params
{
};

// Function TslGame.TslCharacter.LocalMagazineDrop
struct ATslCharacter_LocalMagazineDrop_Params
{
	class Vector3D                                     InitialVelocity;                                          // (CPF_Parm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.LocalHandleVault_CP
struct ATslCharacter_LocalHandleVault_CP_Params
{
	class Vector3D                                     V_Start;                                                  // (CPF_Parm, CPF_IsPlainOldData)
	class Vector3D                                     V_Apex;                                                   // (CPF_Parm, CPF_IsPlainOldData)
	class Vector3D                                     V_ApexAdditive;                                           // (CPF_Parm, CPF_IsPlainOldData)
	class Vector3D                                     V_End;                                                    // (CPF_Parm, CPF_IsPlainOldData)
	bool                                               bIsClimb;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bEndToFall;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Direction;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PlayerVelocity;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DistanceFromObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.IsZooming
struct ATslCharacter_IsZooming_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.IsZombie
struct ATslCharacter_IsZombie_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.IsWeaponUsingHighMagnificationScope
struct ATslCharacter_IsWeaponUsingHighMagnificationScope_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.IsVehiclePassenger
struct ATslCharacter_IsVehiclePassenger_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.IsVehicleDriver
struct ATslCharacter_IsVehicleDriver_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.IsVaultingEnabled
struct ATslCharacter_IsVaultingEnabled_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.IsVaultingDebugEnabled
struct ATslCharacter_IsVaultingDebugEnabled_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.IsVaulting
struct ATslCharacter_IsVaulting_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.IsVaultCancelled
struct ATslCharacter_IsVaultCancelled_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.IsUsingRightShoulderAiming
struct ATslCharacter_IsUsingRightShoulderAiming_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.IsUpperCollision
struct ATslCharacter_IsUpperCollision_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.IsUnderwater
struct ATslCharacter_IsUnderwater_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.IsUnderRoof
struct ATslCharacter_IsUnderRoof_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.IsTeamMatch
struct ATslCharacter_IsTeamMatch_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.IsTargeting
struct ATslCharacter_IsTargeting_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.IsSwimming
struct ATslCharacter_IsSwimming_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.IsSprinting
struct ATslCharacter_IsSprinting_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.IsSpectatingCharacter
struct ATslCharacter_IsSpectatingCharacter_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.IsSitting
struct ATslCharacter_IsSitting_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.IsScoping
struct ATslCharacter_IsScoping_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.IsRunning
struct ATslCharacter_IsRunning_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.IsRolling
struct ATslCharacter_IsRolling_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.IsReviving
struct ATslCharacter_IsReviving_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.IsQuitter
struct ATslCharacter_IsQuitter_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.IsQuickThrowHigh
struct ATslCharacter_IsQuickThrowHigh_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.IsPlayingPickUpAnimation
struct ATslCharacter_IsPlayingPickUpAnimation_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.IsPeekRight
struct ATslCharacter_IsPeekRight_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.IsPeekLeft
struct ATslCharacter_IsPeekLeft_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.IsParachuting
struct ATslCharacter_IsParachuting_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.IsMoving
struct ATslCharacter_IsMoving_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.IsMouseUse
struct ATslCharacter_IsMouseUse_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.IsMeleeAttacking
struct ATslCharacter_IsMeleeAttacking_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.IsMagazineHandAttached
struct ATslCharacter_IsMagazineHandAttached_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.IsMagazineGunAttached
struct ATslCharacter_IsMagazineGunAttached_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.IsLocalOrSpectating
struct ATslCharacter_IsLocalOrSpectating_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.IsInWaterVolume
struct ATslCharacter_IsInWaterVolume_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.IsInVehicle
struct ATslCharacter_IsInVehicle_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.IsInteracting
struct ATslCharacter_IsInteracting_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.IsIndoor
struct ATslCharacter_IsIndoor_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.IsInAircraft
struct ATslCharacter_IsInAircraft_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.IsHoldingBreath
struct ATslCharacter_IsHoldingBreath_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.IsHitted
struct ATslCharacter_IsHitted_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.IsHipped
struct ATslCharacter_IsHipped_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.IsGroggying
struct ATslCharacter_IsGroggying_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.IsFreelooking
struct ATslCharacter_IsFreelooking_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.IsForcingFall
struct ATslCharacter_IsForcingFall_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.IsForceRotation
struct ATslCharacter_IsForceRotation_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.IsForcedProneAfterFall
struct ATslCharacter_IsForcedProneAfterFall_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.IsFollowingCharacter
struct ATslCharacter_IsFollowingCharacter_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.IsFloating
struct ATslCharacter_IsFloating_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.IsFirstPerson
struct ATslCharacter_IsFirstPerson_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.IsFiring
struct ATslCharacter_IsFiring_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.IsFallingWithParachute
struct ATslCharacter_IsFallingWithParachute_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.IsFallingFromHighAltitude
struct ATslCharacter_IsFallingFromHighAltitude_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.IsDying
struct ATslCharacter_IsDying_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.IsCycleInProgress
struct ATslCharacter_IsCycleInProgress_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.IsCoatEquipped
struct ATslCharacter_IsCoatEquipped_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.IsCasting
struct ATslCharacter_IsCasting_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.IsCameraUnderwater
struct ATslCharacter_IsCameraUnderwater_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.IsAudioTestEnabled
struct ATslCharacter_IsAudioTestEnabled_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.IsAttacked
struct ATslCharacter_IsAttacked_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.IsAnimDynamicsEnabled
struct ATslCharacter_IsAnimDynamicsEnabled_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.IsAlive
struct ATslCharacter_IsAlive_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.IsActiveRagdoll
struct ATslCharacter_IsActiveRagdoll_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.HaveNotAnyHealItemNotifyMessage
struct ATslCharacter_HaveNotAnyHealItemNotifyMessage_Params
{
};

// Function TslGame.TslCharacter.HasWeaponLeftHandIKSocket
struct ATslCharacter_HasWeaponLeftHandIKSocket_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.HasWeapon
struct ATslCharacter_HasWeapon_Params
{
	class UClass*                                      WeaponClass;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.HasAnimatableObject
struct ATslCharacter_HasAnimatableObject_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.HandleVaulting_BP
struct ATslCharacter_HandleVaulting_BP_Params
{
	class Vector3D                                     ImpactLocation;                                           // (CPF_Parm, CPF_IsPlainOldData)
	class Vector3D                                     CapsulePredictedLocation;                                 // (CPF_Parm, CPF_IsPlainOldData)
	class Vector3D                                     Normal2D;                                                 // (CPF_Parm, CPF_IsPlainOldData)
	class Vector3D                                     DirectionVecotor;                                         // (CPF_Parm, CPF_IsPlainOldData)
	bool                                               bForceVault;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              JumpDistance;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bBlockVault;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bBlockClimb;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.HandleVaultEnd_CP
struct ATslCharacter_HandleVaultEnd_CP_Params
{
	class Vector3D                                     InVaultEndVelocity;                                       // (CPF_Parm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.HandleCapsuleCollision
struct ATslCharacter_HandleCapsuleCollision_Params
{
};

// Function TslGame.TslCharacter.GiveWeapon
struct ATslCharacter_GiveWeapon_Params
{
	class UClass*                                      WeaponClass;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.GetWeaponThrowable
struct ATslCharacter_GetWeaponThrowable_Params
{
	class ATslWeapon_Throwable*                        ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.GetWeaponReloadPlayRate
struct ATslCharacter_GetWeaponReloadPlayRate_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.GetWeaponProcessor
struct ATslCharacter_GetWeaponProcessor_Params
{
	class AWeaponProcessor*                            ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.GetWeaponObstructionRemote
struct ATslCharacter_GetWeaponObstructionRemote_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.GetWeaponMovementModifierScope
struct ATslCharacter_GetWeaponMovementModifierScope_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.GetWeaponMovementModifierAim
struct ATslCharacter_GetWeaponMovementModifierAim_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.GetWeaponLeftHandIKTransform
struct ATslCharacter_GetWeaponLeftHandIKTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.GetWeaponInertia
struct ATslCharacter_GetWeaponInertia_Params
{
	class Rotator                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.GetWeaponHandIK_Right
struct ATslCharacter_GetWeaponHandIK_Right_Params
{
	struct FTransform                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.GetWeaponHandIK_Left
struct ATslCharacter_GetWeaponHandIK_Left_Params
{
	struct FTransform                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.GetWeaponGunCollisionAlpha
struct ATslCharacter_GetWeaponGunCollisionAlpha_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.GetWeaponGun
struct ATslCharacter_GetWeaponGun_Params
{
	class ATslWeapon_Gun*                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.GetWeaponADSTimeModifier
struct ATslCharacter_GetWeaponADSTimeModifier_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.GetWeapon
struct ATslCharacter_GetWeapon_Params
{
	class ATslWeapon*                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.GetWantsToJump
struct ATslCharacter_GetWantsToJump_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.GetVehicleSeatComponent
struct ATslCharacter_GetVehicleSeatComponent_Params
{
	class UTslVehicleSeatComponent*                    ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.GetVehicleSeat
struct ATslCharacter_GetVehicleSeat_Params
{
	class UVehicleSeatInteractionComponent*            ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.GetVehicleRiderComponent
struct ATslCharacter_GetVehicleRiderComponent_Params
{
	class UVehicleRiderComponent*                      ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.GetVehiclePawn
struct ATslCharacter_GetVehiclePawn_Params
{
	class APawn*                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.GetVehicleInterface
struct ATslCharacter_GetVehicleInterface_Params
{
	TScriptInterface<class UTslVehicleInterface>       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.GetVaultTimer
struct ATslCharacter_GetVaultTimer_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.GetVaultingDirection
struct ATslCharacter_GetVaultingDirection_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.GetVaultingDebugType
struct ATslCharacter_GetVaultingDebugType_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.GetVaultingDataByEnum
struct ATslCharacter_GetVaultingDataByEnum_Params
{
	class UVaultingData*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.GetTslPlayerState
struct ATslCharacter_GetTslPlayerState_Params
{
	class ATslPlayerState*                             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.GetTslPlayerController
struct ATslCharacter_GetTslPlayerController_Params
{
	class ATslPlayerController*                        ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.GetTslCharacterMovement
struct ATslCharacter_GetTslCharacterMovement_Params
{
	class UTslCharacterMovement*                       ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.GetTPPSpringarmOffset
struct ATslCharacter_GetTPPSpringarmOffset_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.GetTPPCameraCurve
struct ATslCharacter_GetTPPCameraCurve_Params
{
	class UCurveFloat*                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.GetTeam
struct ATslCharacter_GetTeam_Params
{
	class ATeam*                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.GetTargetingSpeedModifier
struct ATslCharacter_GetTargetingSpeedModifier_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.GetStance
struct ATslCharacter_GetStance_Params
{
	TEnumAsByte<EStanceMode>                           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.GetSprintingSpeedModifier_Stand
struct ATslCharacter_GetSprintingSpeedModifier_Stand_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.GetSprintingSpeedModifier_Prone
struct ATslCharacter_GetSprintingSpeedModifier_Prone_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.GetSprintingSpeedModifier_Crouch
struct ATslCharacter_GetSprintingSpeedModifier_Crouch_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.GetSprintCurrentValue
struct ATslCharacter_GetSprintCurrentValue_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.GetSpeedModifierByWeaponClass
struct ATslCharacter_GetSpeedModifierByWeaponClass_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.GetSpeedKmPerHour2D
struct ATslCharacter_GetSpeedKmPerHour2D_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.GetShortPlayerName
struct ATslCharacter_GetShortPlayerName_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function TslGame.TslCharacter.GetServerVaultFinished
struct ATslCharacter_GetServerVaultFinished_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.GetRunningSpeedModifier_Stand
struct ATslCharacter_GetRunningSpeedModifier_Stand_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.GetRunningSpeedModifier_Prone
struct ATslCharacter_GetRunningSpeedModifier_Prone_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.GetRunningSpeedModifier_Crouch
struct ATslCharacter_GetRunningSpeedModifier_Crouch_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.GetReactionBone
struct ATslCharacter_GetReactionBone_Params
{
	struct FName                                       BoneName;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.GetPlayerName
struct ATslCharacter_GetPlayerName_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function TslGame.TslCharacter.GetParachuteLandingAssist
struct ATslCharacter_GetParachuteLandingAssist_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.GetParachute
struct ATslCharacter_GetParachute_Params
{
	class AParachuteVehicle*                           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.GetObjectCanInteract
struct ATslCharacter_GetObjectCanInteract_Params
{
	TScriptInterface<class UInteractionInterface>      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.GetMaxSprintSpeed
struct ATslCharacter_GetMaxSprintSpeed_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.GetMaxGroundSpeedOnSlope
struct ATslCharacter_GetMaxGroundSpeedOnSlope_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.GetLocationString
struct ATslCharacter_GetLocationString_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function TslGame.TslCharacter.GetLeanRightAlpha
struct ATslCharacter_GetLeanRightAlpha_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.GetLeanLeftAlpha
struct ATslCharacter_GetLeanLeftAlpha_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.GetLastMoveRotation
struct ATslCharacter_GetLastMoveRotation_Params
{
	class Rotator                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.GetInventoryFacade
struct ATslCharacter_GetInventoryFacade_Params
{
	class AInventoryFacade*                            ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.GetInteractObjectLocation
struct ATslCharacter_GetInteractObjectLocation_Params
{
	class Vector3D                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.GetInteractionString
struct ATslCharacter_GetInteractionString_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function TslGame.TslCharacter.GetIndoorFactor
struct ATslCharacter_GetIndoorFactor_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.GetFreelookSavedRotation
struct ATslCharacter_GetFreelookSavedRotation_Params
{
	class Rotator                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.GetFreelookDeltaRotation
struct ATslCharacter_GetFreelookDeltaRotation_Params
{
	class Rotator                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.GetDynamicCrosshairHidden
struct ATslCharacter_GetDynamicCrosshairHidden_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.GetDropPackageType
struct ATslCharacter_GetDropPackageType_Params
{
	class UClass*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.GetDirectionString
struct ATslCharacter_GetDirectionString_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function TslGame.TslCharacter.GetDirectionalSpeedModifier
struct ATslCharacter_GetDirectionalSpeedModifier_Params
{
	TEnumAsByte<EMovementType>                         StanceType;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.GetDesiredRotation
struct ATslCharacter_GetDesiredRotation_Params
{
	class Rotator                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.GetCurrentWeapon
struct ATslCharacter_GetCurrentWeapon_Params
{
	class ATslWeapon*                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.GetCurrentWaterSurfaceZ
struct ATslCharacter_GetCurrentWaterSurfaceZ_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.GetCurrentWaterSurfaceBaseZ
struct ATslCharacter_GetCurrentWaterSurfaceBaseZ_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.GetCurrentWaterDepth
struct ATslCharacter_GetCurrentWaterDepth_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.GetCurrentSway
struct ATslCharacter_GetCurrentSway_Params
{
	class Rotator                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.GetCurrentMagazineMesh
struct ATslCharacter_GetCurrentMagazineMesh_Params
{
	class UStaticMesh*                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.GetCurrentMagazineLocation
struct ATslCharacter_GetCurrentMagazineLocation_Params
{
	struct FTransform                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.GetCurrentHeightFromWaterFloor
struct ATslCharacter_GetCurrentHeightFromWaterFloor_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.GetCtrlShortCutOnOff
struct ATslCharacter_GetCtrlShortCutOnOff_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.GetComponentCanInteract
struct ATslCharacter_GetComponentCanInteract_Params
{
	TScriptInterface<class UInteractionInterface>      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.GetClientTslPlayerState
struct ATslCharacter_GetClientTslPlayerState_Params
{
	class ATslPlayerState*                             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.GetCharacterNetId
struct ATslCharacter_GetCharacterNetId_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function TslGame.TslCharacter.GetCastObject
struct ATslCharacter_GetCastObject_Params
{
	class UObject*                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.GetCameraDOF
struct ATslCharacter_GetCameraDOF_Params
{
	class Vector3D                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.GetCameraAnimOverrideAlpha
struct ATslCharacter_GetCameraAnimOverrideAlpha_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.GetBulletSpawnOverride
struct ATslCharacter_GetBulletSpawnOverride_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.GetBuffComponent
struct ATslCharacter_GetBuffComponent_Params
{
	class UBuffComponet*                               ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.GetBreathComponent
struct ATslCharacter_GetBreathComponent_Params
{
	class UCharacterBreathComponent*                   ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.GetAnimWeaponType
struct ATslCharacter_GetAnimWeaponType_Params
{
};

// Function TslGame.TslCharacter.GetAnimStance
struct ATslCharacter_GetAnimStance_Params
{
};

// Function TslGame.TslCharacter.GetAimStateTimer
struct ATslCharacter_GetAimStateTimer_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.GetAimStateAlpha
struct ATslCharacter_GetAimStateAlpha_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.GetAimOffsets
struct ATslCharacter_GetAimOffsets_Params
{
	class Rotator                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.GetADSSocketOffset
struct ATslCharacter_GetADSSocketOffset_Params
{
	class Vector3D                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.GetActorCanInteract
struct ATslCharacter_GetActorCanInteract_Params
{
	class AActor*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.GetActiveCamera
struct ATslCharacter_GetActiveCamera_Params
{
	class UCameraComponent*                            ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.GetAccessorySlot
struct ATslCharacter_GetAccessorySlot_Params
{
	class UTslAccessoryComponent*                      ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.FixupCamera
struct ATslCharacter_FixupCamera_Params
{
};

// Function TslGame.TslCharacter.FindWeapon
struct ATslCharacter_FindWeapon_Params
{
	class UClass*                                      WeaponClass;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ATslWeapon*                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.EnableScopeOutsideBlur
struct ATslCharacter_EnableScopeOutsideBlur_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.EnableAudioTest
struct ATslCharacter_EnableAudioTest_Params
{
};

// Function TslGame.TslCharacter.DisableCollision
struct ATslCharacter_DisableCollision_Params
{
};

// Function TslGame.TslCharacter.DelayedFire
struct ATslCharacter_DelayedFire_Params
{
};

// Function TslGame.TslCharacter.ClientSoundPlayMulticast
struct ATslCharacter_ClientSoundPlayMulticast_Params
{
	class UAkAudioEvent*                               SoundAk;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.ClientSoundPlay
struct ATslCharacter_ClientSoundPlay_Params
{
	class UAkAudioEvent*                               SoundAk;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.ClientSimulationArmorDestruction
struct ATslCharacter_ClientSimulationArmorDestruction_Params
{
	struct FTransform                                  Impact;                                                   // (CPF_Parm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.ClientSetTargeting
struct ATslCharacter_ClientSetTargeting_Params
{
};

// Function TslGame.TslCharacter.ClientSendGroggyMessage
struct ATslCharacter_ClientSendGroggyMessage_Params
{
	class ATslPlayerState*                             GroggyCauserPlayerState;                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ATslPlayerState*                             VictimPlayerState;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDamageType*                                 GroggyCauserDamageType;                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       DamageCauserName;                                         // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm)
	class UClass*                                      DamageCauserClass;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.ClientRevivedCastingWidgetShow
struct ATslCharacter_ClientRevivedCastingWidgetShow_Params
{
	bool                                               bVisible;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.ClientProcessRevive
struct ATslCharacter_ClientProcessRevive_Params
{
	float                                              RemainGroggyHealth;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.ClientPlayPickUpAnimation
struct ATslCharacter_ClientPlayPickUpAnimation_Params
{
	class Vector3D                                     InteractionObject;                                        // (CPF_ConstParm, CPF_Parm)
};

// Function TslGame.TslCharacter.ClientNotifyCrack
struct ATslCharacter_ClientNotifyCrack_Params
{
	class Vector3D                                     LocationRelative;                                         // (CPF_Parm)
	float                                              BulletVelocity;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.ClientMyCharacterPlayPickUpAnimation
struct ATslCharacter_ClientMyCharacterPlayPickUpAnimation_Params
{
	class Vector3D                                     InteractionObject;                                        // (CPF_ConstParm, CPF_Parm)
	float                                              Duration;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.ClientForceInitStance
struct ATslCharacter_ClientForceInitStance_Params
{
	TEnumAsByte<EStanceMode>                           ToStance;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.ClientDrawDamageInfo
struct ATslCharacter_ClientDrawDamageInfo_Params
{
	float                                              Damage;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTslDamageType*                              DamageType;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.Client_PlayUnarmedAttack
struct ATslCharacter_Client_PlayUnarmedAttack_Params
{
	int                                                AnimationIndex;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.Client_CastFinishNotify
struct ATslCharacter_Client_CastFinishNotify_Params
{
};

// Function TslGame.TslCharacter.Client_CastCancelNotify
struct ATslCharacter_Client_CastCancelNotify_Params
{
};

// Function TslGame.TslCharacter.CheckScopePP
struct ATslCharacter_CheckScopePP_Params
{
};

// Function TslGame.TslCharacter.CheckMuzzleCollision
struct ATslCharacter_CheckMuzzleCollision_Params
{
};

// Function TslGame.TslCharacter.CheckMuzzleBulletSpawn
struct ATslCharacter_CheckMuzzleBulletSpawn_Params
{
};

// Function TslGame.TslCharacter.CheckJumpAndVault
struct ATslCharacter_CheckJumpAndVault_Params
{
	bool                                               bForceVelocity;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     InForcedVelocity;                                         // (CPF_Parm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.CheckForCoat
struct ATslCharacter_CheckForCoat_Params
{
};

// Function TslGame.TslCharacter.CheckEquipmentSlot
struct ATslCharacter_CheckEquipmentSlot_Params
{
	struct FEquipPosition                              InSlotData;                                               // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.CanSwim
struct ATslCharacter_CanSwim_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.Camera_AimoffsetFix_TppToFpp
struct ATslCharacter_Camera_AimoffsetFix_TppToFpp_Params
{
};

// Function TslGame.TslCharacter.Camera_AimoffsetFix_FppToTpp
struct ATslCharacter_Camera_AimoffsetFix_FppToTpp_Params
{
};

// Function TslGame.TslCharacter.BindCallbackToHUD
struct ATslCharacter_BindCallbackToHUD_Params
{
	class ATslPlayerController*                        InController;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.ApplyRagdollPhysicsForce
struct ATslCharacter_ApplyRagdollPhysicsForce_Params
{
};

// Function TslGame.TslCharacter.Anim_MagazineShow
struct ATslCharacter_Anim_MagazineShow_Params
{
	bool                                               bShow;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.Anim_MagazineHandAttach
struct ATslCharacter_Anim_MagazineHandAttach_Params
{
	bool                                               bAttach;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.Anim_IsMagazineVisible
struct ATslCharacter_Anim_IsMagazineVisible_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.AllowInteract
struct ATslCharacter_AllowInteract_Params
{
	class ATslCharacter*                               OtherCharacter;                                           // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacter.AdminSetUpWeapon
struct ATslCharacter_AdminSetUpWeapon_Params
{
};

// Function TslGame.TslCharacter.AdminInvulnerable
struct ATslCharacter_AdminInvulnerable_Params
{
};

// Function TslGame.TslCharacter.AdminFreeMoveMode
struct ATslCharacter_AdminFreeMoveMode_Params
{
};

// Function TslGame.TslCharacter.AddBuffMoveSpeedFactor
struct ATslCharacter_AddBuffMoveSpeedFactor_Params
{
	float                                              MoveSpeedFactor;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.ObserverTagWidget.SetTeamNumber
struct UObserverTagWidget_SetTeamNumber_Params
{
	int                                                TeamNumber;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                teamColor;                                                // (CPF_Parm, CPF_IsPlainOldData)
};

// Function TslGame.ObserverTagWidget.SetPlayerNameTag
struct UObserverTagWidget_SetPlayerNameTag_Params
{
	struct FName                                       PlayerName;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.ObserverTagWidget.SetIndicatorColor
struct UObserverTagWidget_SetIndicatorColor_Params
{
	struct FLinearColor                                teamColor;                                                // (CPF_Parm, CPF_IsPlainOldData)
};

// Function TslGame.ObserverTagWidget.SetCharacterIconPosition_UC
struct UObserverTagWidget_SetCharacterIconPosition_UC_Params
{
	class Vector2D                                     Pos_UC;                                                   // (CPF_Parm, CPF_IsPlainOldData)
	bool                                               IsHidden;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.ObserverTagWidget.OnUpdateWidgetTransform
struct UObserverTagWidget_OnUpdateWidgetTransform_Params
{
	class UWidget*                                     CharacterNameWidget;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UWidget*                                     IndicatorWidget;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class Vector2D                                     Pos_UC;                                                   // (CPF_Parm, CPF_IsPlainOldData)
	bool                                               IsHidden;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.ObserverTagWidget.IsTeamMember
struct UObserverTagWidget_IsTeamMember_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.ObserverTagWidget.IsLastSpectatedCharacter
struct UObserverTagWidget_IsLastSpectatedCharacter_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.ObserverTagWidget.HandleWidgetPrepass
struct UObserverTagWidget_HandleWidgetPrepass_Params
{
	class UWidget*                                     Widget;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function TslGame.ObserverTagWidget.HandleTeamNumberPrepass
struct UObserverTagWidget_HandleTeamNumberPrepass_Params
{
	class UWidget*                                     Widget;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function TslGame.ObserverTagWidget.GetTeamId
struct UObserverTagWidget_GetTeamId_Params
{
	class ATslCharacter*                               TslCharacter;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.ObserverTagWidget.GetTeamColor
struct UObserverTagWidget_GetTeamColor_Params
{
	class ATslCharacter*                               TslCharacter;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.ObserverTagManagerBaseWidget.UpdateReplicateCharacter
struct UObserverTagManagerBaseWidget_UpdateReplicateCharacter_Params
{
};

// Function TslGame.ObserverTagManagerBaseWidget.RemoveReplicateCharacter
struct UObserverTagManagerBaseWidget_RemoveReplicateCharacter_Params
{
	TArray<class ATslCharacter*>                       Characters;                                               // (CPF_Parm, CPF_ZeroConstructor)
};

// Function TslGame.ObserverTagManagerBaseWidget.AddReplicateCharacter
struct UObserverTagManagerBaseWidget_AddReplicateCharacter_Params
{
	TArray<class ATslCharacter*>                       Characters;                                               // (CPF_Parm, CPF_ZeroConstructor)
};

// Function TslGame.TslVehicleInterface.GetVehicleMeshComponent
struct UTslVehicleInterface_GetVehicleMeshComponent_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function TslGame.TslVehicleInterface.GetTslPlayerController
struct UTslVehicleInterface_GetTslPlayerController_Params
{
	class ATslPlayerController*                        ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.ParachuteVehicle.ServerRelease
struct AParachuteVehicle_ServerRelease_Params
{
};

// Function TslGame.ParachuteVehicle.PhysicsVolumeChanged
struct AParachuteVehicle_PhysicsVolumeChanged_Params
{
	class APhysicsVolume*                              NewVolume;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.ParachuteVehicle.OnSecondInteractBy
struct AParachuteVehicle_OnSecondInteractBy_Params
{
	class ATslCharacter*                               Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.ParachuteVehicle.OnRide
struct AParachuteVehicle_OnRide_Params
{
	class ATslCharacter*                               Rider;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function TslGame.ParachuteVehicle.OnRep_SkinData
struct AParachuteVehicle_OnRep_SkinData_Params
{
};

// Function TslGame.ParachuteVehicle.OnRep_IsReleased
struct AParachuteVehicle_OnRep_IsReleased_Params
{
};

// Function TslGame.ParachuteVehicle.OnRep_IsDriven
struct AParachuteVehicle_OnRep_IsDriven_Params
{
};

// Function TslGame.ParachuteVehicle.OnPostDriverLeave
struct AParachuteVehicle_OnPostDriverLeave_Params
{
};

// Function TslGame.ParachuteVehicle.OnInteractBy
struct AParachuteVehicle_OnInteractBy_Params
{
	class ATslCharacter*                               Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.ParachuteVehicle.OnDriverRide
struct AParachuteVehicle_OnDriverRide_Params
{
};

// Function TslGame.ParachuteVehicle.OnDriverLeave
struct AParachuteVehicle_OnDriverLeave_Params
{
};

// Function TslGame.ParachuteVehicle.Land
struct AParachuteVehicle_Land_Params
{
};

// Function TslGame.ParachuteVehicle.IsStuck
struct AParachuteVehicle_IsStuck_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.ParachuteVehicle.IsReleased
struct AParachuteVehicle_IsReleased_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.ParachuteVehicle.IsDriven
struct AParachuteVehicle_IsDriven_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.ParachuteVehicle.GetAltitudeFromFloor
struct AParachuteVehicle_GetAltitudeFromFloor_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.ParachuteVehicle.CanReleaseByInput
struct AParachuteVehicle_CanReleaseByInput_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.ParachuteVehicle.CanRelease
struct AParachuteVehicle_CanRelease_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.ParachuteVehicle.AllowSecondInteractBy
struct AParachuteVehicle_AllowSecondInteractBy_Params
{
	class ATslCharacter*                               Character;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.ParachuteVehicle.AllowInteractBy
struct AParachuteVehicle_AllowInteractBy_Params
{
	class ATslCharacter*                               Character;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.ReplicationTrigger.EnableReplicationGroup
struct AReplicationTrigger_EnableReplicationGroup_Params
{
};

// Function TslGame.SceneInteractionComponent.GetInteractiveObjectName
struct USceneInteractionComponent_GetInteractiveObjectName_Params
{
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function TslGame.SceneInteractionComponent.GetInteractionVerb
struct USceneInteractionComponent_GetInteractionVerb_Params
{
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function TslGame.SceneInteractionComponent.AllowInteractBy
struct USceneInteractionComponent_AllowInteractBy_Params
{
	class ATslCharacter*                               Character;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.DoorInteractionComponent.OnRep_DoorState
struct UDoorInteractionComponent_OnRep_DoorState_Params
{
};

// Function TslGame.DoorInteractionComponent.AllowInteract
struct UDoorInteractionComponent_AllowInteract_Params
{
	class ATslCharacter*                               OtherCharacter;                                           // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.DroppedItemInteractionComponent.OnRep_Item
struct UDroppedItemInteractionComponent_OnRep_Item_Params
{
};

// Function TslGame.DroppedItemInteractionComponent.AllowInteractBy
struct UDroppedItemInteractionComponent_AllowInteractBy_Params
{
	class ATslCharacter*                               Character;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.VehicleSeatInteractionComponent.OnRep_Rider
struct UVehicleSeatInteractionComponent_OnRep_Rider_Params
{
};

// Function TslGame.VehicleSeatInteractionComponent.OnInteractDelegate
struct UVehicleSeatInteractionComponent_OnInteractDelegate_Params
{
	class ATslCharacter*                               OtherCharacter;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.VehicleSeatInteractionComponent.IsWeaponClassAllowed
struct UVehicleSeatInteractionComponent_IsWeaponClassAllowed_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.VehicleSeatInteractionComponent.IsEntryAllowedByVelocity
struct UVehicleSeatInteractionComponent_IsEntryAllowedByVelocity_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.VehicleSeatInteractionComponent.GetVehicleSeatComponent
struct UVehicleSeatInteractionComponent_GetVehicleSeatComponent_Params
{
	class UTslVehicleSeatComponent*                    ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function TslGame.VehicleSeatInteractionComponent.GetVehiclePawn
struct UVehicleSeatInteractionComponent_GetVehiclePawn_Params
{
	class APawn*                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.VehicleSeatInteractionComponent.GetVehicleInterface
struct UVehicleSeatInteractionComponent_GetVehicleInterface_Params
{
	TScriptInterface<class UTslVehicleInterface>       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.VehicleSeatInteractionComponent.GetVehicleAnimType
struct UVehicleSeatInteractionComponent_GetVehicleAnimType_Params
{
};

// Function TslGame.VehicleSeatInteractionComponent.GetTransitionOutBlendspace
struct UVehicleSeatInteractionComponent_GetTransitionOutBlendspace_Params
{
	class UBlendSpaceBase*                             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.VehicleSeatInteractionComponent.GetTransitionInBlendspace
struct UVehicleSeatInteractionComponent_GetTransitionInBlendspace_Params
{
	class UBlendSpaceBase*                             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.VehicleSeatInteractionComponent.GetSeatIdleAO
struct UVehicleSeatInteractionComponent_GetSeatIdleAO_Params
{
	class UAimOffsetBlendSpace*                        ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.VehicleSeatInteractionComponent.GetSeatIdleAnimation_Unarmed
struct UVehicleSeatInteractionComponent_GetSeatIdleAnimation_Unarmed_Params
{
	class UAnimSequenceBase*                           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.VehicleSeatInteractionComponent.GetSeatIdleAnimation_Rifle
struct UVehicleSeatInteractionComponent_GetSeatIdleAnimation_Rifle_Params
{
	class UAnimSequenceBase*                           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.VehicleSeatInteractionComponent.GetSeatIdleAnimation_Melee
struct UVehicleSeatInteractionComponent_GetSeatIdleAnimation_Melee_Params
{
	class UAnimSequenceBase*                           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.VehicleSeatInteractionComponent.GetSeatIdleAnimation_Grenade
struct UVehicleSeatInteractionComponent_GetSeatIdleAnimation_Grenade_Params
{
	class UAnimSequenceBase*                           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.VehicleSeatInteractionComponent.GetSeatAimingFPPBlendspace
struct UVehicleSeatInteractionComponent_GetSeatAimingFPPBlendspace_Params
{
	class UBlendSpaceBase*                             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.VehicleSeatInteractionComponent.GetSeatAimingBlendspace
struct UVehicleSeatInteractionComponent_GetSeatAimingBlendspace_Params
{
	class UBlendSpaceBase*                             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.VehicleSeatInteractionComponent.GetRider
struct UVehicleSeatInteractionComponent_GetRider_Params
{
	class ATslCharacter*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.VehicleSeatInteractionComponent.GetMinPitchByYaw
struct UVehicleSeatInteractionComponent_GetMinPitchByYaw_Params
{
	float                                              CurrentYaw;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.VehicleSeatInteractionComponent.GetMaxPitchByYaw
struct UVehicleSeatInteractionComponent_GetMaxPitchByYaw_Params
{
	float                                              CurrentYaw;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.VehicleSeatInteractionComponent.GetCanFireOnlyWhileAimed
struct UVehicleSeatInteractionComponent_GetCanFireOnlyWhileAimed_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.VehicleSeatInteractionComponent.GetAdditionalMessage
struct UVehicleSeatInteractionComponent_GetAdditionalMessage_Params
{
	class ATslCharacter*                               Character;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function TslGame.VehicleSeatInteractionComponent.AllowInteractDelegate
struct UVehicleSeatInteractionComponent_AllowInteractDelegate_Params
{
	class ATslCharacter*                               OtherCharacter;                                           // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.MotorbikeVehicleSeatInteraction.IsEntryAllowed
struct UMotorbikeVehicleSeatInteraction_IsEntryAllowed_Params
{
	class ATslCharacter*                               InCharacter;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.MotorbikeVehicleSeatInteraction.HandleFlipAndKickstand
struct UMotorbikeVehicleSeatInteraction_HandleFlipAndKickstand_Params
{
};

// Function TslGame.FreeFallMovement.ServerUpdateInput
struct UFreeFallMovement_ServerUpdateInput_Params
{
	float                                              InForwardInput;                                           // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              InRightInput;                                             // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              InDesiredPitchRotation;                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              InDesiredYawRotation;                                     // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.FreeFallMovement.GetRightInput
struct UFreeFallMovement_GetRightInput_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.FreeFallMovement.GetForwardInput
struct UFreeFallMovement_GetForwardInput_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.ParachuteVehicleMovement.ServerUpdateInput
struct UParachuteVehicleMovement_ServerUpdateInput_Params
{
	float                                              InForwardInput;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              InRotationInput;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.ParachuteVehicleMovement.GetRotationYawRate
struct UParachuteVehicleMovement_GetRotationYawRate_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.ParachuteVehicleMovement.GetRotationInput
struct UParachuteVehicleMovement_GetRotationInput_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.ParachuteVehicleMovement.GetForwardInput
struct UParachuteVehicleMovement_GetForwardInput_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.ParachuteVehicleMovement.GetClientRotation
struct UParachuteVehicleMovement_GetClientRotation_Params
{
	class Rotator                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.StanceComponent.ServerForceInitStance
struct UStanceComponent_ServerForceInitStance_Params
{
};

// Function TslGame.StanceComponent.ServerChangeStance
struct UStanceComponent_ServerChangeStance_Params
{
	TEnumAsByte<EStanceMode>                           ToStance;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.StanceComponent.OnRep_CurrentStance
struct UStanceComponent_OnRep_CurrentStance_Params
{
};

// Function TslGame.StanceComponent.ClientInitByReconnection
struct UStanceComponent_ClientInitByReconnection_Params
{
	TEnumAsByte<EStanceMode>                           InitStance;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerStart.GetRandomStartYawRotation
struct ATslPlayerStart_GetRandomStartYawRotation_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerStart.GetRandomStartLocation
struct ATslPlayerStart_GetRandomStartLocation_Params
{
	class Vector3D                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.InventoryFacade.IsAutoSwappable
struct AInventoryFacade_IsAutoSwappable_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.InventoryFacade.HasItemByClass
struct AInventoryFacade_HasItemByClass_Params
{
	class UClass*                                      ItemClass;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.InventoryFacade.GiveItem_Admin
struct AInventoryFacade_GiveItem_Admin_Params
{
	class UClass*                                      ItemClass;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.InventoryFacade.GetOwnerCharacter
struct AInventoryFacade_GetOwnerCharacter_Params
{
	class ATslCharacter*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.InventoryFacade.GetInventory
struct AInventoryFacade_GetInventory_Params
{
	class AInventory*                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.InventoryFacade.GetEquipment
struct AInventoryFacade_GetEquipment_Params
{
	class AEquipment*                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.Equipment.WeaponIndexToEquipPosition
struct AEquipment_WeaponIndexToEquipPosition_Params
{
	int                                                WeaponIndex;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FEquipPosition                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function TslGame.Equipment.WeaponAttachmentSwap
struct AEquipment_WeaponAttachmentSwap_Params
{
	struct FEquipPosition                              SourceWeapon;                                             // (CPF_Parm)
	struct FEquipPosition                              TargetWeapon;                                             // (CPF_Parm)
	struct FName                                       ItemClassForVerify;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bSoundPlay;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.Equipment.UnequipItem
struct AEquipment_UnequipItem_Params
{
	struct FEquipPosition                              Position;                                                 // (CPF_Parm)
	struct FName                                       ItemClassForVerify;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bSoundPlay;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.Equipment.TryEquipItem
struct AEquipment_TryEquipItem_Params
{
	class UItem*                                       Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bSoundPlay;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bSwap;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.Equipment.PrimaryWeaponSwap
struct AEquipment_PrimaryWeaponSwap_Params
{
	struct FEquipPosition                              EquipPosition;                                            // (CPF_Parm)
	struct FString                                     Options;                                                  // (CPF_Parm, CPF_ZeroConstructor)
};

// Function TslGame.Equipment.Items_RepNotify
struct AEquipment_Items_RepNotify_Params
{
};

// Function TslGame.Equipment.IsSwapablePrimaryWeapon
struct AEquipment_IsSwapablePrimaryWeapon_Params
{
	struct FEquipPosition                              EquipPosition;                                            // (CPF_Parm)
	struct FString                                     Options;                                                  // (CPF_Parm, CPF_ZeroConstructor)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.Equipment.IsAttachableToWeapon
struct AEquipment_IsAttachableToWeapon_Params
{
	int                                                WeaponIndex;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAttachableItem*                             AttachableItem;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bOnlyFree;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.Equipment.GetOwnerCharacter
struct AEquipment_GetOwnerCharacter_Params
{
	class ATslCharacter*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.Equipment.GetItemCountByClass
struct AEquipment_GetItemCountByClass_Params
{
	class UClass*                                      ItemClass;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.Equipment.GetItem
struct AEquipment_GetItem_Params
{
	struct FEquipPosition                              Position;                                                 // (CPF_Parm)
	class UEquipableItem*                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.Equipment.GetInventoryFacade
struct AEquipment_GetInventoryFacade_Params
{
	class AInventoryFacade*                            ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.Equipment.FindPosition
struct AEquipment_FindPosition_Params
{
	class UItem*                                       Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FEquipPosition                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function TslGame.Equipment.FindEquipPosition
struct AEquipment_FindEquipPosition_Params
{
	bool                                               bOnlyFree;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FEquipPosition                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function TslGame.Equipment.FindEquipableWeaponPosition
struct AEquipment_FindEquipableWeaponPosition_Params
{
	class UEquipableItem*                              EquipableItem;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     Options;                                                  // (CPF_Parm, CPF_ZeroConstructor)
	struct FEquipPosition                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function TslGame.Equipment.FindAttachableWeaponIndex
struct AEquipment_FindAttachableWeaponIndex_Params
{
	class UAttachableItem*                             AttachableItem;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     Options;                                                  // (CPF_Parm, CPF_ZeroConstructor)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.Equipment.EquipPositionToWeaponIndex
struct AEquipment_EquipPositionToWeaponIndex_Params
{
	struct FEquipPosition                              Position;                                                 // (CPF_Parm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.Equipment.EquipItem
struct AEquipment_EquipItem_Params
{
	struct FEquipPosition                              Position;                                                 // (CPF_Parm)
	class UEquipableItem*                              Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bCheckViaCanEquipTo;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bSoundPlay;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.Equipment.DropItem
struct AEquipment_DropItem_Params
{
	struct FEquipPosition                              Position;                                                 // (CPF_Parm)
	struct FName                                       ItemClassForVerify;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsForce;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bSoundPlay;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.Equipment.DropAttachedItemAll
struct AEquipment_DropAttachedItemAll_Params
{
	struct FEquipPosition                              EquipPosition;                                            // (CPF_Parm)
	struct FName                                       ItemClassForVerify;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bSoundPlay;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.Equipment.DropAttachedItem
struct AEquipment_DropAttachedItem_Params
{
	struct FEquipPosition                              EquipPosition;                                            // (CPF_Parm)
	struct FName                                       ItemClassForVerify;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bSoundPlay;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.Equipment.DetachItemAll
struct AEquipment_DetachItemAll_Params
{
	struct FEquipPosition                              EquipPosition;                                            // (CPF_Parm)
	struct FName                                       ItemClassForVerify;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bSoundPlay;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.Equipment.DetachItem
struct AEquipment_DetachItem_Params
{
	struct FEquipPosition                              EquipPosition;                                            // (CPF_Parm)
	struct FName                                       ItemClassForVerify;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bSoundPlay;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.Inventory.UseItem
struct AInventory_UseItem_Params
{
	int                                                Index;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       ItemClassForVerify;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.Inventory.OnFinishUseCast
struct AInventory_OnFinishUseCast_Params
{
	class UObject*                                     CastObject;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.Inventory.Items_RepNotify
struct AInventory_Items_RepNotify_Params
{
};

// Function TslGame.Inventory.GetOwnerCharacter
struct AInventory_GetOwnerCharacter_Params
{
	class ATslCharacter*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.Inventory.GetMaxSpace
struct AInventory_GetMaxSpace_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.Inventory.GetItemCountByClass
struct AInventory_GetItemCountByClass_Params
{
	class UClass*                                      ItemClass;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.Inventory.GetItemCount
struct AInventory_GetItemCount_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.Inventory.GetInventoryFacade
struct AInventory_GetInventoryFacade_Params
{
	class AInventoryFacade*                            ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.Inventory.GetCurrentSpace
struct AInventory_GetCurrentSpace_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.Inventory.GetAllItemsByType
struct AInventory_GetAllItemsByType_Params
{
	class UClass*                                      ItemSuperClass;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FInventoryItem>                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function TslGame.Inventory.GetAllItems
struct AInventory_GetAllItems_Params
{
	TArray<struct FInventoryItem>                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function TslGame.Inventory.GetAdditionalMaxCount
struct AInventory_GetAdditionalMaxCount_Params
{
	class UItem*                                       Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.Inventory.FindItemIndex
struct AInventory_FindItemIndex_Params
{
	class UItem*                                       Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.Inventory.FindItemHasMinStack
struct AInventory_FindItemHasMinStack_Params
{
	class UClass*                                      ItemClass;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UItem*                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.Inventory.FindItem
struct AInventory_FindItem_Params
{
	class UClass*                                      ItemClass;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UItem*                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.Inventory.EquipOrDropItem
struct AInventory_EquipOrDropItem_Params
{
	int                                                Index;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       ItemClassForVerify;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bSoundPlay;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.Inventory.EquipItem
struct AInventory_EquipItem_Params
{
	int                                                Index;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       ItemClassForVerify;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bSoundPlay;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.Inventory.DropItem
struct AInventory_DropItem_Params
{
	int                                                Index;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       ItemClassForVerify;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     Options;                                                  // (CPF_Parm, CPF_ZeroConstructor)
	bool                                               bSoundPlay;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.Inventory.ConsumeItemByClass
struct AInventory_ConsumeItemByClass_Params
{
	class UClass*                                      ItemClass;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Count;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.Inventory.ClientBroadcastNoBagSpaceEvent
struct AInventory_ClientBroadcastNoBagSpaceEvent_Params
{
};

// Function TslGame.Inventory.AttachOrDropItem
struct AInventory_AttachOrDropItem_Params
{
	int                                                Index;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       ItemClassForVerify;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bSoundPlay;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.Inventory.AttachItem
struct AInventory_AttachItem_Params
{
	int                                                Index;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       ItemClassForVerify;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FEquipPosition                              EquipPosition;                                            // (CPF_Parm)
	bool                                               bSoundPlay;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.ItemExplorerProxy.PropagateUpdateItemList
struct AItemExplorerProxy_PropagateUpdateItemList_Params
{
};

// Function TslGame.ItemExplorerProxy.PropagateDestroyContextMenuWidget
struct AItemExplorerProxy_PropagateDestroyContextMenuWidget_Params
{
};

// Function TslGame.ItemExplorerProxy.PropagateCreateAndShowContextMenuWidget
struct AItemExplorerProxy_PropagateCreateAndShowContextMenuWidget_Params
{
	TScriptInterface<class USlotContainerInterface>    Param;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.ItemExplorerProxy.Pop
struct AItemExplorerProxy_Pop_Params
{
};

// Function TslGame.ItemExplorerProxy.IsBaseExplorer
struct AItemExplorerProxy_IsBaseExplorer_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.CarePackageItem.IsPickupedItem
struct ACarePackageItem_IsPickupedItem_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.CarePackageItem.IsFalling
struct ACarePackageItem_IsFalling_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.Team.ServerSetShowMapMarker
struct ATeam_ServerSetShowMapMarker_Params
{
	bool                                               bNewShowMapMarker;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.Team.ServerSetMapMarkerPosition
struct ATeam_ServerSetMapMarkerPosition_Params
{
	class Vector2D                                     NewMapMarkerPosition;                                     // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function TslGame.Team.OnRep_Dying
struct ATeam_OnRep_Dying_Params
{
	bool                                               bLastDying;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.Team.IsShowMapMarker
struct ATeam_IsShowMapMarker_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.Team.IsQuitter
struct ATeam_IsQuitter_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.Team.IsGroggying
struct ATeam_IsGroggying_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.Team.IsDying
struct ATeam_IsDying_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.Team.GetTslCharacter
struct ATeam_GetTslCharacter_Params
{
	class ATslCharacter*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.Team.GetRideVehicle
struct ATeam_GetRideVehicle_Params
{
};

// Function TslGame.Team.GetPlayerUniqueId
struct ATeam_GetPlayerUniqueId_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function TslGame.Team.GetPlayerRotation
struct ATeam_GetPlayerRotation_Params
{
	class Rotator                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.Team.GetPlayerName
struct ATeam_GetPlayerName_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function TslGame.Team.GetPlayerLocation
struct ATeam_GetPlayerLocation_Params
{
	class Vector3D                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.Team.GetMemberNumber
struct ATeam_GetMemberNumber_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.Team.GetMapMarkerPosition
struct ATeam_GetMapMarkerPosition_Params
{
	class Vector2D                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.Team.GetHealthMax
struct ATeam_GetHealthMax_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.Team.GetHealth
struct ATeam_GetHealth_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.Team.GetGroggyHealthMax
struct ATeam_GetGroggyHealthMax_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.Team.GetGroggyHealth
struct ATeam_GetGroggyHealth_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslAccessoryComponent.SetPhysicsSimulation
struct UTslAccessoryComponent_SetPhysicsSimulation_Params
{
	bool                                               bSimulatePhysics;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslAccessoryComponent.InitSetupComponent
struct UTslAccessoryComponent_InitSetupComponent_Params
{
	bool                                               bSimulatePhysics;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslAIController.ShootEnemy
struct ATslAIController_ShootEnemy_Params
{
};

// Function TslGame.TslAIController.FindClosestEnemyWithLOS
struct ATslAIController_FindClosestEnemyWithLOS_Params
{
	class ATslCharacter*                               ExcludeEnemy;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslAIController.FindClosestEnemy
struct ATslAIController_FindClosestEnemy_Params
{
};

// Function TslGame.AircraftCarePackage.IsPlayInEditor
struct AAircraftCarePackage_IsPlayInEditor_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TransportAircraftVehicle.OnRide
struct ATransportAircraftVehicle_OnRide_Params
{
	class ATslCharacter*                               Rider;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function TslGame.TransportAircraftVehicle.OnRep_IsVisible
struct ATransportAircraftVehicle_OnRep_IsVisible_Params
{
};

// Function TslGame.TransportAircraftVehicle.OnLocalPlayerRide
struct ATransportAircraftVehicle_OnLocalPlayerRide_Params
{
};

// Function TslGame.TransportAircraftVehicle.OnLocalPlayerLeave
struct ATransportAircraftVehicle_OnLocalPlayerLeave_Params
{
};

// Function TslGame.TransportAircraftVehicle.OnLeave
struct ATransportAircraftVehicle_OnLeave_Params
{
	class ATslCharacter*                               Rider;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function TslGame.TransportAircraftVehicle.OnInteractBy
struct ATransportAircraftVehicle_OnInteractBy_Params
{
	class ATslCharacter*                               Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TransportAircraftVehicle.IsInEjectionArea
struct ATransportAircraftVehicle_IsInEjectionArea_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TransportAircraftVehicle.EnterAtEjectionArea
struct ATransportAircraftVehicle_EnterAtEjectionArea_Params
{
};

// Function TslGame.TransportAircraftVehicle.EjectAll
struct ATransportAircraftVehicle_EjectAll_Params
{
};

// Function TslGame.TransportAircraftVehicle.AllowInteractBy
struct ATransportAircraftVehicle_AllowInteractBy_Params
{
	class ATslCharacter*                               Character;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWheeledVehicle.UpdateWheelSound
struct ATslWheeledVehicle_UpdateWheelSound_Params
{
};

// Function TslGame.TslWheeledVehicle.UpdateWheelCaching
struct ATslWheeledVehicle_UpdateWheelCaching_Params
{
};

// Function TslGame.TslWheeledVehicle.UpdateBasicInfoCaching
struct ATslWheeledVehicle_UpdateBasicInfoCaching_Params
{
};

// Function TslGame.TslWheeledVehicle.UnBindCallbackToHUD
struct ATslWheeledVehicle_UnBindCallbackToHUD_Params
{
	class ATslPlayerController*                        InController;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslWheeledVehicle.SetAirControlPitchInput
struct ATslWheeledVehicle_SetAirControlPitchInput_Params
{
	float                                              InInput;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslWheeledVehicle.ServerSetBoosting
struct ATslWheeledVehicle_ServerSetBoosting_Params
{
	bool                                               bNewBoosting;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslWheeledVehicle.OnVehicleEjected
struct ATslWheeledVehicle_OnVehicleEjected_Params
{
};

// Function TslGame.TslWheeledVehicle.OnRide
struct ATslWheeledVehicle_OnRide_Params
{
	class ATslCharacter*                               Rider;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function TslGame.TslWheeledVehicle.OnPostDriverRide
struct ATslWheeledVehicle_OnPostDriverRide_Params
{
};

// Function TslGame.TslWheeledVehicle.OnPostDriverLeave
struct ATslWheeledVehicle_OnPostDriverLeave_Params
{
};

// Function TslGame.TslWheeledVehicle.OnLeave
struct ATslWheeledVehicle_OnLeave_Params
{
	class ATslCharacter*                               Rider;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function TslGame.TslWheeledVehicle.OnCharacterHit
struct ATslWheeledVehicle_OnCharacterHit_Params
{
	class ATslCharacter*                               HitCharacter;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HitDamage;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslWheeledVehicle.OnBreak
struct ATslWheeledVehicle_OnBreak_Params
{
};

// Function TslGame.TslWheeledVehicle.OnBlockingWidgetOpened
struct ATslWheeledVehicle_OnBlockingWidgetOpened_Params
{
	class UWidget*                                     Widget;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function TslGame.TslWheeledVehicle.MulticastCharacterHitEffects
struct ATslWheeledVehicle_MulticastCharacterHitEffects_Params
{
	class ATslCharacter*                               CharacterHit;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HitDamage;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslWheeledVehicle.IsSunken
struct ATslWheeledVehicle_IsSunken_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWheeledVehicle.IsStablizeOverrideActive
struct ATslWheeledVehicle_IsStablizeOverrideActive_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWheeledVehicle.IsStabilizeOverrideEnabled
struct ATslWheeledVehicle_IsStabilizeOverrideEnabled_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWheeledVehicle.IsInWaterVolume
struct ATslWheeledVehicle_IsInWaterVolume_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWheeledVehicle.IsEnabledOptimizeTick
struct ATslWheeledVehicle_IsEnabledOptimizeTick_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWheeledVehicle.IsBoosting
struct ATslWheeledVehicle_IsBoosting_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWheeledVehicle.GetTslVehicleMovement
struct ATslWheeledVehicle_GetTslVehicleMovement_Params
{
	class UTslWheeledVehicleMovement*                  ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function TslGame.TslWheeledVehicle.GetSteeringInput
struct ATslWheeledVehicle_GetSteeringInput_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWheeledVehicle.GetCurrentWaterSurfaceZ
struct ATslWheeledVehicle_GetCurrentWaterSurfaceZ_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWheeledVehicle.GetBuffComponent
struct ATslWheeledVehicle_GetBuffComponent_Params
{
	class UBuffComponet*                               ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function TslGame.TslWheeledVehicle.GetAirControlPitchInput
struct ATslWheeledVehicle_GetAirControlPitchInput_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWheeledVehicle.BindCallbackToHUD
struct ATslWheeledVehicle_BindCallbackToHUD_Params
{
	class ATslPlayerController*                        InController;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslWheeledVehicle.ActivationTriggerEndOverlap
struct ATslWheeledVehicle_ActivationTriggerEndOverlap_Params
{
	class AActor*                                      Other;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslWheeledVehicle.ActivationTriggerBeginOverlap
struct ATslWheeledVehicle_ActivationTriggerBeginOverlap_Params
{
	class AActor*                                      Other;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bFromSweep;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  OverlapInfo;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function TslGame.TslFloatingVehicle.UnBindCallbackToHUD
struct ATslFloatingVehicle_UnBindCallbackToHUD_Params
{
	class ATslPlayerController*                        InController;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslFloatingVehicle.OnRide
struct ATslFloatingVehicle_OnRide_Params
{
	class ATslCharacter*                               Rider;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function TslGame.TslFloatingVehicle.OnPostDriverRide
struct ATslFloatingVehicle_OnPostDriverRide_Params
{
};

// Function TslGame.TslFloatingVehicle.OnPostDriverLeave
struct ATslFloatingVehicle_OnPostDriverLeave_Params
{
};

// Function TslGame.TslFloatingVehicle.OnLeave
struct ATslFloatingVehicle_OnLeave_Params
{
	class ATslCharacter*                               Rider;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function TslGame.TslFloatingVehicle.OnBlockingWidgetOpened
struct ATslFloatingVehicle_OnBlockingWidgetOpened_Params
{
	class UWidget*                                     Widget;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function TslGame.TslFloatingVehicle.IsBoosting
struct ATslFloatingVehicle_IsBoosting_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslFloatingVehicle.GetVehicleEngineImmersionDepth
struct ATslFloatingVehicle_GetVehicleEngineImmersionDepth_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslFloatingVehicle.GetVehicleAcceleration
struct ATslFloatingVehicle_GetVehicleAcceleration_Params
{
	class Vector3D                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslFloatingVehicle.GetSteerYawAngle
struct ATslFloatingVehicle_GetSteerYawAngle_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslFloatingVehicle.GetMaxSteerYawAngle
struct ATslFloatingVehicle_GetMaxSteerYawAngle_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslFloatingVehicle.BindCallbackToHUD
struct ATslFloatingVehicle_BindCallbackToHUD_Params
{
	class ATslPlayerController*                        InController;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslWheeledVehicleMovement.SetSimulateVehicle
struct UTslWheeledVehicleMovement_SetSimulateVehicle_Params
{
	bool                                               bSimulate;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslWheeledVehicleMovement.ServerUpdateAdditionalState
struct UTslWheeledVehicleMovement_ServerUpdateAdditionalState_Params
{
	int                                                TargetGear;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslWheeledVehicleMovement.Server_SetMovementParameters
struct UTslWheeledVehicleMovement_Server_SetMovementParameters_Params
{
	float                                              InThrottle;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              InSteer;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              InBreak;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              InHandbrake;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Gear;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslWheeledVehicleMovement.ProcessCustomTransmission
struct UTslWheeledVehicleMovement_ProcessCustomTransmission_Params
{
	float                                              InVelocity;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslWheeledVehicleMovement.OnDriverRide
struct UTslWheeledVehicleMovement_OnDriverRide_Params
{
};

// Function TslGame.TslWheeledVehicleMovement.OnDriverLeave
struct UTslWheeledVehicleMovement_OnDriverLeave_Params
{
};

// Function TslGame.TslWheeledVehicleMovement.OnBreak
struct UTslWheeledVehicleMovement_OnBreak_Params
{
};

// Function TslGame.TslWheeledVehicleMovement.IsSimulatingVehicle
struct UTslWheeledVehicleMovement_IsSimulatingVehicle_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWheeledVehicleMovement.GetWheelWaterDepth
struct UTslWheeledVehicleMovement_GetWheelWaterDepth_Params
{
	int                                                Index;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWheeledVehicleMovement.GetWheelSuspensionMaxRaise
struct UTslWheeledVehicleMovement_GetWheelSuspensionMaxRaise_Params
{
	int                                                Index;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWheeledVehicleMovement.GetWheelSuspensionMaxDrop
struct UTslWheeledVehicleMovement_GetWheelSuspensionMaxDrop_Params
{
	int                                                Index;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWheeledVehicleMovement.GetWheelRotationSpeed
struct UTslWheeledVehicleMovement_GetWheelRotationSpeed_Params
{
	int                                                Index;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWheeledVehicleMovement.GetWheelHealthPercentages
struct UTslWheeledVehicleMovement_GetWheelHealthPercentages_Params
{
	TArray<float>                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function TslGame.TslWheeledVehicleMovement.GetWheelContactType
struct UTslWheeledVehicleMovement_GetWheelContactType_Params
{
	int                                                Index;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinVelocity;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinSkid;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinSpin;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SuspOffsetForContact;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EWheelContactType>                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWheeledVehicleMovement.GetWheelContactSurfaceMaterial
struct UTslWheeledVehicleMovement_GetWheelContactSurfaceMaterial_Params
{
	int                                                Index;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPhysicalMaterial*                           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWheeledVehicleMovement.GetWheelContactData
struct UTslWheeledVehicleMovement_GetWheelContactData_Params
{
	int                                                Index;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinVelocity;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinSkid;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinSpin;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SuspOffsetForContact;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinBrake;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinRotationSpeed;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FWheelContactData                           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function TslGame.TslWheeledVehicleMovement.GetThrottleInput
struct UTslWheeledVehicleMovement_GetThrottleInput_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWheeledVehicleMovement.GetSteeringInputClamped
struct UTslWheeledVehicleMovement_GetSteeringInputClamped_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWheeledVehicleMovement.GetSteeringInput
struct UTslWheeledVehicleMovement_GetSteeringInput_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWheeledVehicleMovement.GetHandbrakeInput
struct UTslWheeledVehicleMovement_GetHandbrakeInput_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWheeledVehicleMovement.GetBrakeInput
struct UTslWheeledVehicleMovement_GetBrakeInput_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWheeledVehicleMovement.ClientPunctureTire
struct UTslWheeledVehicleMovement_ClientPunctureTire_Params
{
	int                                                WheelIndex;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslFloatingVehicleMovement.ServerUpdateInput
struct UTslFloatingVehicleMovement_ServerUpdateInput_Params
{
	float                                              InForwardInput;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              InRotationInput;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bInIsBoosting;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslFloatingVehicleMovement.OnDriverLeave
struct UTslFloatingVehicleMovement_OnDriverLeave_Params
{
};

// Function TslGame.TslFloatingVehicleMovement.IsBoosting
struct UTslFloatingVehicleMovement_IsBoosting_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslFloatingVehicleMovement.GetRotationYawAngle
struct UTslFloatingVehicleMovement_GetRotationYawAngle_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslFloatingVehicleMovement.GetMaxRotationYawAngle
struct UTslFloatingVehicleMovement_GetMaxRotationYawAngle_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslFloatingVehicleMovement.GetMaxAcceleration
struct UTslFloatingVehicleMovement_GetMaxAcceleration_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslFloatingVehicleMovement.GetCalculatedAcceleration
struct UTslFloatingVehicleMovement_GetCalculatedAcceleration_Params
{
	class Vector3D                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslFloatingVehicleMovement.GetAcceleration
struct UTslFloatingVehicleMovement_GetAcceleration_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacterMovement.TraceSphereForVaulting
struct UTslCharacterMovement_TraceSphereForVaulting_Params
{
	class Vector3D                                     Start;                                                    // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	class Vector3D                                     End;                                                      // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	float                                              Radius;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  OutHit;                                                   // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	struct FLinearColor                                TraceColor;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FLinearColor                                TraceHitColor;                                            // (CPF_Parm, CPF_IsPlainOldData)
	float                                              DrawTime;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacterMovement.TraceLineForVaulting
struct UTslCharacterMovement_TraceLineForVaulting_Params
{
	class Vector3D                                     Start;                                                    // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	class Vector3D                                     End;                                                      // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  OutHit;                                                   // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	struct FLinearColor                                TraceColor;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FLinearColor                                TraceHitColor;                                            // (CPF_Parm, CPF_IsPlainOldData)
	float                                              DrawTime;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacterMovement.TraceCapsuleForVaulting
struct UTslCharacterMovement_TraceCapsuleForVaulting_Params
{
	class Vector3D                                     Start;                                                    // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	class Vector3D                                     End;                                                      // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  OutHit;                                                   // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	struct FLinearColor                                TraceColor;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FLinearColor                                TraceHitColor;                                            // (CPF_Parm, CPF_IsPlainOldData)
	float                                              DrawTime;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacterMovement.StartVaultingTask
struct UTslCharacterMovement_StartVaultingTask_Params
{
	struct FVaultingTask                               InVaultTask;                                              // (CPF_Parm)
};

// Function TslGame.TslCharacterMovement.PredictCapsulePathForVaulting
struct UTslCharacterMovement_PredictCapsulePathForVaulting_Params
{
	struct FHitResult                                  OutHit;                                                   // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	TArray<class Vector3D>                             OutPathPositions;                                         // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
	class Vector3D                                     OutLastTraceDestination;                                  // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	class Vector3D                                     StartPos;                                                 // (CPF_Parm, CPF_IsPlainOldData)
	class Vector3D                                     LaunchVelocity;                                           // (CPF_Parm, CPF_IsPlainOldData)
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DrawDebugTime;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CapsuleRadiusOverride;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CapsuleHalfHeightOverride;                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SimFrequency;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxSimTime;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacterMovement.LocalHandleVault_CP
struct UTslCharacterMovement_LocalHandleVault_CP_Params
{
	class Vector3D                                     VaultStart;                                               // (CPF_Parm, CPF_IsPlainOldData)
	class Vector3D                                     VaultApex;                                                // (CPF_Parm, CPF_IsPlainOldData)
	class Vector3D                                     VaultApexAdditive;                                        // (CPF_Parm, CPF_IsPlainOldData)
	class Vector3D                                     VaultEnd;                                                 // (CPF_Parm, CPF_IsPlainOldData)
	bool                                               bIsClimb;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bEndToFall;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Direction;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PlayerVelocity;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DistanceFromObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacterMovement.IsVaulting
struct UTslCharacterMovement_IsVaulting_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacterMovement.HandleVaultPreEvaluation
struct UTslCharacterMovement_HandleVaultPreEvaluation_Params
{
	bool                                               bForceVelocity;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     InForcedVelocity;                                         // (CPF_Parm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacterMovement.HandleVaulting
struct UTslCharacterMovement_HandleVaulting_Params
{
	struct FVaultingHandleInput                        Input;                                                    // (CPF_Parm)
	struct FVaultingHandleResult                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function TslGame.TslCharacterMovement.GetVTimer
struct UTslCharacterMovement_GetVTimer_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacterMovement.GetVaultingDataFromAnim
struct UTslCharacterMovement_GetVaultingDataFromAnim_Params
{
	class UVaultingData*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacterMovement.GetMaxVaultDistanceBySpeed
struct UTslCharacterMovement_GetMaxVaultDistanceBySpeed_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacterMovement.GetGlobalVaultingSpeedMultiplier
struct UTslCharacterMovement_GetGlobalVaultingSpeedMultiplier_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacterMovement.GetCurrentVaultType
struct UTslCharacterMovement_GetCurrentVaultType_Params
{
};

// Function TslGame.TslCharacterMovement.EvaluateVaultAnimType
struct UTslCharacterMovement_EvaluateVaultAnimType_Params
{
	int                                                FirstRow;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ApexAdditiveStepCounter;                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AverageCellCount;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bForceVault;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bForceClimb;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CharVelocity;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacterMovement.EndCurrentTaskToFall
struct UTslCharacterMovement_EndCurrentTaskToFall_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslAnimInstance.SetWeaponStatesEvaluationCooldown
struct UTslAnimInstance_SetWeaponStatesEvaluationCooldown_Params
{
	float                                              Time;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslAnimInstance.SetLandPredictionVector
struct UTslAnimInstance_SetLandPredictionVector_Params
{
	class Vector3D                                     newLandVector;                                            // (CPF_Parm, CPF_IsPlainOldData)
};

// Function TslGame.TslAnimInstance.SetJumpStartLocation
struct UTslAnimInstance_SetJumpStartLocation_Params
{
	class Vector3D                                     NewLocation;                                              // (CPF_Parm, CPF_IsPlainOldData)
	float                                              DefaultFallHeight;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslAnimInstance.ResetRecoilRoll
struct UTslAnimInstance_ResetRecoilRoll_Params
{
};

// Function TslGame.TslAnimInstance.ResetIdle
struct UTslAnimInstance_ResetIdle_Params
{
};

// Function TslGame.TslAnimInstance.RandomizeIdleIndex_CP
struct UTslAnimInstance_RandomizeIdleIndex_CP_Params
{
	bool                                               ExludeLastIndex;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslAnimInstance.ProcessCodePaths
struct UTslAnimInstance_ProcessCodePaths_Params
{
};

// Function TslGame.TslAnimInstance.PreEvaluatePawnState
struct UTslAnimInstance_PreEvaluatePawnState_Params
{
};

// Function TslGame.TslAnimInstance.OnHitReaction
struct UTslAnimInstance_OnHitReaction_Params
{
	struct FName                                       BoneName;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     Direction;                                                // (CPF_Parm, CPF_IsPlainOldData)
};

// Function TslGame.TslAnimInstance.HandleSpeedAndDirection_CP
struct UTslAnimInstance_HandleSpeedAndDirection_CP_Params
{
};

// Function TslGame.TslAnimInstance.HandleItemOffsets_CP
struct UTslAnimInstance_HandleItemOffsets_CP_Params
{
};

// Function TslGame.TslAnimInstance.HandleCardinalDirection90
struct UTslAnimInstance_HandleCardinalDirection90_Params
{
	float                                              InDirection;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslAnimInstance.HandleAnimCurves
struct UTslAnimInstance_HandleAnimCurves_Params
{
};

// Function TslGame.TslAnimInstance.HandleADSSocketOffset
struct UTslAnimInstance_HandleADSSocketOffset_Params
{
};

// Function TslGame.TslAnimInstance.GetVehicleAO
struct UTslAnimInstance_GetVehicleAO_Params
{
	float                                              Yaw;                                                      // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Pitch;                                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslAnimInstance.GetBlendSpaceRelaxed_TS
struct UTslAnimInstance_GetBlendSpaceRelaxed_TS_Params
{
	TEnumAsByte<EAnimStanceType>                       AnimStance;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsFPP;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimDB*                                     InAnimDB;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UBlendSpace*                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslAnimInstance.GetBlendSpace_TS
struct UTslAnimInstance_GetBlendSpace_TS_Params
{
	TEnumAsByte<EAnimStanceType>                       AnimStance;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsFPP;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimDB*                                     InAnimDB;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UBlendSpace*                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslAnimInstance.GetAnimSpeed_TS
struct UTslAnimInstance_GetAnimSpeed_TS_Params
{
	TEnumAsByte<EAnimStanceType>                       AnimStance;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Direction;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              InSpeed;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PlayRate;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SprintAlpha;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimDB*                                     InAnimDB;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsSprinting;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslAnimInstance.GetAbsActorToBaseRotation
struct UTslAnimInstance_GetAbsActorToBaseRotation_Params
{
	bool                                               bInUseMin;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              InAngle;                                                  // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslAnimInstance.FindPositionFromDistanceCurve
struct UTslAnimInstance_FindPositionFromDistanceCurve_Params
{
	float                                              Distance;                                                 // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
	class UAnimSequenceBase*                           InAnimSequence;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslAnimInstance.EvaluateWeaponStates
struct UTslAnimInstance_EvaluateWeaponStates_Params
{
};

// Function TslGame.TslAnimInstance.EvaluateWeaponStability
struct UTslAnimInstance_EvaluateWeaponStability_Params
{
};

// Function TslGame.TslAnimInstance.EvaluateWeaponInertia
struct UTslAnimInstance_EvaluateWeaponInertia_Params
{
};

// Function TslGame.TslAnimInstance.EvaluateWeaponCollision
struct UTslAnimInstance_EvaluateWeaponCollision_Params
{
};

// Function TslGame.TslAnimInstance.EvaluateVehicle
struct UTslAnimInstance_EvaluateVehicle_Params
{
};

// Function TslGame.TslAnimInstance.EvaluateVaulting
struct UTslAnimInstance_EvaluateVaulting_Params
{
};

// Function TslGame.TslAnimInstance.EvaluateSwimming
struct UTslAnimInstance_EvaluateSwimming_Params
{
};

// Function TslGame.TslAnimInstance.EvaluateRotations
struct UTslAnimInstance_EvaluateRotations_Params
{
};

// Function TslGame.TslAnimInstance.EvaluateRecoilRoll
struct UTslAnimInstance_EvaluateRecoilRoll_Params
{
};

// Function TslGame.TslAnimInstance.EvaluatePawnStates
struct UTslAnimInstance_EvaluatePawnStates_Params
{
};

// Function TslGame.TslAnimInstance.EvaluateMeleeAttack
struct UTslAnimInstance_EvaluateMeleeAttack_Params
{
};

// Function TslGame.TslAnimInstance.EvaluateLocalPawnStates
struct UTslAnimInstance_EvaluateLocalPawnStates_Params
{
};

// Function TslGame.TslAnimInstance.EvaluateLeaning
struct UTslAnimInstance_EvaluateLeaning_Params
{
};

// Function TslGame.TslAnimInstance.EvaluateJumping
struct UTslAnimInstance_EvaluateJumping_Params
{
};

// Function TslGame.TslAnimInstance.EvaluateJumpCamera
struct UTslAnimInstance_EvaluateJumpCamera_Params
{
};

// Function TslGame.TslAnimInstance.EvaluateItemOffsets
struct UTslAnimInstance_EvaluateItemOffsets_Params
{
};

// Function TslGame.TslAnimInstance.EvaluateIdle
struct UTslAnimInstance_EvaluateIdle_Params
{
};

// Function TslGame.TslAnimInstance.EvaluateFreelook
struct UTslAnimInstance_EvaluateFreelook_Params
{
};

// Function TslGame.TslAnimInstance.EvaluateFreefallAndParachute
struct UTslAnimInstance_EvaluateFreefallAndParachute_Params
{
};

// Function TslGame.TslAnimInstance.EvaluateFallingAndLanding
struct UTslAnimInstance_EvaluateFallingAndLanding_Params
{
};

// Function TslGame.TslAnimInstance.EvaluateCoatExternalForce
struct UTslAnimInstance_EvaluateCoatExternalForce_Params
{
};

// Function TslGame.TslAnimInstance.EvaluateCharacterStates
struct UTslAnimInstance_EvaluateCharacterStates_Params
{
};

// Function TslGame.TslAnimInstance.EvaluateCasting
struct UTslAnimInstance_EvaluateCasting_Params
{
};

// Function TslGame.TslAnimInstance.EvaluateAnimDynamics
struct UTslAnimInstance_EvaluateAnimDynamics_Params
{
};

// Function TslGame.TslAnimInstance.EvaluateAimStates
struct UTslAnimInstance_EvaluateAimStates_Params
{
};

// Function TslGame.TslAnimInstance.EvaluateAimOffsets
struct UTslAnimInstance_EvaluateAimOffsets_Params
{
};

// Function TslGame.TslAnimInstance.CacheCharacterReference
struct UTslAnimInstance_CacheCharacterReference_Params
{
	class ATslCharacter*                               InCharacter;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslHUD.TestSendSystemMessage
struct ATslHUD_TestSendSystemMessage_Params
{
	struct FText                                       Message;                                                  // (CPF_Parm)
	float                                              Duration;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslHUD.TestSendImportantMessage
struct ATslHUD_TestSendImportantMessage_Params
{
	struct FText                                       Message;                                                  // (CPF_Parm)
	float                                              Duration;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslHUD.TestKillMessage
struct ATslHUD_TestKillMessage_Params
{
	struct FString                                     KillerName;                                               // (CPF_Parm, CPF_ZeroConstructor)
	struct FString                                     VictimName;                                               // (CPF_Parm, CPF_ZeroConstructor)
	bool                                               bKillerIsOwner;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bVictimIsOwner;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslHUD.TestGameEvent_MatchEnded
struct ATslHUD_TestGameEvent_MatchEnded_Params
{
};

// Function TslGame.TslHUD.TestGameEvent_KillOtherPlayer
struct ATslHUD_TestGameEvent_KillOtherPlayer_Params
{
	bool                                               bGroggy;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslHUD.TestGameEvent_Die
struct ATslHUD_TestGameEvent_Die_Params
{
	bool                                               bGroggy;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslHUD.SpawnActorInSceneCaptureWorld
struct ATslHUD_SpawnActorInSceneCaptureWorld_Params
{
	class UClass*                                      ActorClass;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FTransform                                  SpawnTransform;                                           // (CPF_ConstParm, CPF_Parm, CPF_IsPlainOldData)
	struct FScriptDelegate                             DelegateToCall;                                           // (CPF_Parm, CPF_ZeroConstructor)
};

// Function TslGame.TslHUD.SetHighlightProvider
struct ATslHUD_SetHighlightProvider_Params
{
	struct FString                                     Provider;                                                 // (CPF_Parm, CPF_ZeroConstructor)
};

// Function TslGame.TslHUD.RecordReplayHighlightSession
struct ATslHUD_RecordReplayHighlightSession_Params
{
	float                                              timeLength;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslHUD.NotifyDropSlotOnOtherContainer
struct ATslHUD_NotifyDropSlotOnOtherContainer_Params
{
	TScriptInterface<class USlotContainerInterface>    Container;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TScriptInterface<class USlotInterface>             Slot;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TScriptInterface<class USlotContainerInterface>    OtherContainer;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslHUD.IsGameEnded
struct ATslHUD_IsGameEnded_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslHUD.InitCaptureWorld
struct ATslHUD_InitCaptureWorld_Params
{
};

// Function TslGame.TslHUD.GoToLobby
struct ATslHUD_GoToLobby_Params
{
};

// Function TslGame.TslHUD.GetPossessPawn
struct ATslHUD_GetPossessPawn_Params
{
	class APawn*                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslHUD.GetPossessCharacter
struct ATslHUD_GetPossessCharacter_Params
{
	class ATslCharacter*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslHUD.GetHealAmount
struct ATslHUD_GetHealAmount_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslSettings.SetCharacterStudioRenderTarget
struct UTslSettings_SetCharacterStudioRenderTarget_Params
{
	class UTextureRenderTarget2D*                      rt;                                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslSettings.IsForKoreanRating
struct UTslSettings_IsForKoreanRating_Params
{
	bool                                               ReturnValue;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslSettings.IsForChineseLicensing
struct UTslSettings_IsForChineseLicensing_Params
{
	bool                                               ReturnValue;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslSettings.IsESports
struct UTslSettings_IsESports_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslSettings.GetTslSettings
struct UTslSettings_GetTslSettings_Params
{
	class UTslSettings*                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslSettings.GetNotifyMaxDistanceByName
struct UTslSettings_GetNotifyMaxDistanceByName_Params
{
	struct FName                                       InName;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslSettings.GetCharacterStudioRenderTarget
struct UTslSettings_GetCharacterStudioRenderTarget_Params
{
	class UTextureRenderTarget2D*                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameInstance.UseLobbyWidget
struct UTslGameInstance_UseLobbyWidget_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameInstance.UpdateReplayShouldKeepBP
struct UTslGameInstance_UpdateReplayShouldKeepBP_Params
{
	struct FString                                     RegionOrLocal;                                            // (CPF_Parm, CPF_ZeroConstructor)
	struct FString                                     SessionName;                                              // (CPF_Parm, CPF_ZeroConstructor)
	bool                                               bShouldKeep;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameInstance.UnPause
struct UTslGameInstance_UnPause_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameInstance.StopIfReplaying
struct UTslGameInstance_StopIfReplaying_Params
{
};

// Function TslGame.TslGameInstance.ShowYesNoMessage
struct UTslGameInstance_ShowYesNoMessage_Params
{
	struct FString                                     strTitle;                                                 // (CPF_Parm, CPF_ZeroConstructor)
	struct FString                                     strMsg;                                                   // (CPF_Parm, CPF_ZeroConstructor)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameInstance.ShowSystemMessage
struct UTslGameInstance_ShowSystemMessage_Params
{
	struct FString                                     strTitle;                                                 // (CPF_Parm, CPF_ZeroConstructor)
	struct FString                                     strMsg;                                                   // (CPF_Parm, CPF_ZeroConstructor)
};

// Function TslGame.TslGameInstance.ShowOkCancelMessage
struct UTslGameInstance_ShowOkCancelMessage_Params
{
	struct FString                                     strTitle;                                                 // (CPF_Parm, CPF_ZeroConstructor)
	struct FString                                     strMsg;                                                   // (CPF_Parm, CPF_ZeroConstructor)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameInstance.ShowLoadingScreen
struct UTslGameInstance_ShowLoadingScreen_Params
{
};

// Function TslGame.TslGameInstance.SetStartedFromReplayListMap
struct UTslGameInstance_SetStartedFromReplayListMap_Params
{
	bool                                               bSet;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslGameInstance.SetReplayTimeSpeed
struct UTslGameInstance_SetReplayTimeSpeed_Params
{
	float                                              TimeSpeed;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslGameInstance.SetReplayBusy
struct UTslGameInstance_SetReplayBusy_Params
{
	bool                                               bBusy;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslGameInstance.SetMaxReplaysForNullStreamer
struct UTslGameInstance_SetMaxReplaysForNullStreamer_Params
{
};

// Function TslGame.TslGameInstance.ResetReplayStreamer
struct UTslGameInstance_ResetReplayStreamer_Params
{
};

// Function TslGame.TslGameInstance.RequestReplayAKillEvent
struct UTslGameInstance_RequestReplayAKillEvent_Params
{
	struct FString                                     EventID;                                                  // (CPF_Parm, CPF_ZeroConstructor)
};

// Function TslGame.TslGameInstance.RequestReplayAGroggyEvent
struct UTslGameInstance_RequestReplayAGroggyEvent_Params
{
	struct FString                                     EventID;                                                  // (CPF_Parm, CPF_ZeroConstructor)
};

// Function TslGame.TslGameInstance.ReplayJump
struct UTslGameInstance_ReplayJump_Params
{
	float                                              TimelinePercentage;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslGameInstance.RemoveAllKillEvents
struct UTslGameInstance_RemoveAllKillEvents_Params
{
};

// Function TslGame.TslGameInstance.RemoveAllGroggyEvents
struct UTslGameInstance_RemoveAllGroggyEvents_Params
{
};

// DelegateFunction TslGame.TslGameInstance.RecordStartedDelegate__DelegateSignature
struct UTslGameInstance_RecordStartedDelegate__DelegateSignature_Params
{
};

// Function TslGame.TslGameInstance.QuitApplication
struct UTslGameInstance_QuitApplication_Params
{
	bool                                               bShowMessage;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslGameInstance.PlayReplayCommand
struct UTslGameInstance_PlayReplayCommand_Params
{
	struct FString                                     RegionOrLocal;                                            // (CPF_Parm, CPF_ZeroConstructor)
	struct FString                                     SessionName;                                              // (CPF_Parm, CPF_ZeroConstructor)
};

// Function TslGame.TslGameInstance.PlayReplayBPByRegionOrLocal
struct UTslGameInstance_PlayReplayBPByRegionOrLocal_Params
{
	struct FString                                     Region;                                                   // (CPF_Parm, CPF_ZeroConstructor)
	struct FString                                     SessionName;                                              // (CPF_Parm, CPF_ZeroConstructor)
};

// Function TslGame.TslGameInstance.PlayReplayBP
struct UTslGameInstance_PlayReplayBP_Params
{
	struct FString                                     SessionName;                                              // (CPF_Parm, CPF_ZeroConstructor)
};

// Function TslGame.TslGameInstance.Pause
struct UTslGameInstance_Pause_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameInstance.OnPressedPopupConfirmInvite
struct UTslGameInstance_OnPressedPopupConfirmInvite_Params
{
};

// Function TslGame.TslGameInstance.OnPressedPopupCommon
struct UTslGameInstance_OnPressedPopupCommon_Params
{
};

// Function TslGame.TslGameInstance.KeepMaxReplaysAndDeleteOldestReplaysForNullStreamer
struct UTslGameInstance_KeepMaxReplaysAndDeleteOldestReplaysForNullStreamer_Params
{
};

// Function TslGame.TslGameInstance.KeepAndDeleteOldestReplaysForNullStreamer
struct UTslGameInstance_KeepAndDeleteOldestReplaysForNullStreamer_Params
{
	int                                                nReplaysToKeep;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// DelegateFunction TslGame.TslGameInstance.KeepAndDeleteOldestReplaysDoneDelegate__DelegateSignature
struct UTslGameInstance_KeepAndDeleteOldestReplaysDoneDelegate__DelegateSignature_Params
{
	int                                                nRemains;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslGameInstance.IsReplaying
struct UTslGameInstance_IsReplaying_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameInstance.IsRecording
struct UTslGameInstance_IsRecording_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameInstance.IsPaused
struct UTslGameInstance_IsPaused_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameInstance.IsLive
struct UTslGameInstance_IsLive_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameInstance.IsKillcamPlayback
struct UTslGameInstance_IsKillcamPlayback_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// DelegateFunction TslGame.TslGameInstance.GotoTimelineDoneDelegate__DelegateSignature
struct UTslGameInstance_GotoTimelineDoneDelegate__DelegateSignature_Params
{
};

// Function TslGame.TslGameInstance.GotoReplayList
struct UTslGameInstance_GotoReplayList_Params
{
};

// Function TslGame.TslGameInstance.GetStartParameterStringValue
struct UTslGameInstance_GetStartParameterStringValue_Params
{
	struct FString                                     Key;                                                      // (CPF_Parm, CPF_ZeroConstructor)
	struct FString                                     NotFoundValue;                                            // (CPF_Parm, CPF_ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function TslGame.TslGameInstance.GetStartParameter
struct UTslGameInstance_GetStartParameter_Params
{
	struct FTslStartParameter                          ReturnValue;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_ReferenceParm)
};

// Function TslGame.TslGameInstance.GetStartedFromReplayListMap
struct UTslGameInstance_GetStartedFromReplayListMap_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameInstance.GetReplayTotalTime
struct UTslGameInstance_GetReplayTotalTime_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// DelegateFunction TslGame.TslGameInstance.GetReplaySummaryDoneDelegate__DelegateSignature
struct UTslGameInstance_GetReplaySummaryDoneDelegate__DelegateSignature_Params
{
	struct FTslReplaySummary                           aTslReplaySummary;                                        // (CPF_Parm)
};

// Function TslGame.TslGameInstance.GetReplaySummary
struct UTslGameInstance_GetReplaySummary_Params
{
	struct FString                                     RegionOrLocal;                                            // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor)
	struct FString                                     SessionName;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor)
};

// Function TslGame.TslGameInstance.GetReplayListLocal
struct UTslGameInstance_GetReplayListLocal_Params
{
	int                                                PageIndex;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                PageSize;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// DelegateFunction TslGame.TslGameInstance.GetReplayListDoneDelegate__DelegateSignature
struct UTslGameInstance_GetReplayListDoneDelegate__DelegateSignature_Params
{
};

// Function TslGame.TslGameInstance.GetReplayListByRegionOrLocal
struct UTslGameInstance_GetReplayListByRegionOrLocal_Params
{
	struct FString                                     RegionOrLocal;                                            // (CPF_Parm, CPF_ZeroConstructor)
	int                                                PageIndex;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                PageSize;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslGameInstance.GetReplayList
struct UTslGameInstance_GetReplayList_Params
{
};

// DelegateFunction TslGame.TslGameInstance.GetReplayKill__DelegateSignature
struct UTslGameInstance_GetReplayKill__DelegateSignature_Params
{
};

// Function TslGame.TslGameInstance.GetReplayCurrentTime
struct UTslGameInstance_GetReplayCurrentTime_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameInstance.GetReplayBusy
struct UTslGameInstance_GetReplayBusy_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameInstance.GetRecordUserFromReplaySummary
struct UTslGameInstance_GetRecordUserFromReplaySummary_Params
{
	struct FTslReplaySummary                           inReplaySummary;                                          // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FTslPlayerStateSummary                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function TslGame.TslGameInstance.GetRecorderTeamMembersFromReplaySummary
struct UTslGameInstance_GetRecorderTeamMembersFromReplaySummary_Params
{
	struct FTslReplaySummary                           inReplaySummary;                                          // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	TArray<struct FTslPlayerStateSummary>              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function TslGame.TslGameInstance.GetNumTotalReplays
struct UTslGameInstance_GetNumTotalReplays_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameInstance.GetNumReplaysForNullStreamer
struct UTslGameInstance_GetNumReplaysForNullStreamer_Params
{
};

// Function TslGame.TslGameInstance.GetGameEventObserver
struct UTslGameInstance_GetGameEventObserver_Params
{
	class UGameEventObserver*                          ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameInstance.GetDemoDiskFreeSpace
struct UTslGameInstance_GetDemoDiskFreeSpace_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameInstance.GetCurrentGameState
struct UTslGameInstance_GetCurrentGameState_Params
{
	struct FName                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameInstance.FindRecorderCharacterForPlayback
struct UTslGameInstance_FindRecorderCharacterForPlayback_Params
{
	TArray<class ATslCharacter*>                       ReplicatedCharacterList;                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	class ATslCharacter*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameInstance.EnumerateReplayKillEvents
struct UTslGameInstance_EnumerateReplayKillEvents_Params
{
};

// Function TslGame.TslGameInstance.EnumerateReplayGroggyEvents
struct UTslGameInstance_EnumerateReplayGroggyEvents_Params
{
};

// DelegateFunction TslGame.TslGameInstance.DownloadZippedReplayProgressDelegate__DelegateSignature
struct UTslGameInstance_DownloadZippedReplayProgressDelegate__DelegateSignature_Params
{
	struct FString                                     strFileName;                                              // (CPF_Parm, CPF_ZeroConstructor)
	int                                                nReceived;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                nTotal;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// DelegateFunction TslGame.TslGameInstance.DownloadZippedReplayCompleteDelegate__DelegateSignature
struct UTslGameInstance_DownloadZippedReplayCompleteDelegate__DelegateSignature_Params
{
	struct FString                                     strFullPath;                                              // (CPF_Parm, CPF_ZeroConstructor)
	struct FString                                     strDirToExtract;                                          // (CPF_Parm, CPF_ZeroConstructor)
};

// Function TslGame.TslGameInstance.DownloadZippedReplayBPByRegion
struct UTslGameInstance_DownloadZippedReplayBPByRegion_Params
{
	struct FString                                     Region;                                                   // (CPF_Parm, CPF_ZeroConstructor)
	struct FString                                     SessionName;                                              // (CPF_Parm, CPF_ZeroConstructor)
	int                                                nTotalSize;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameInstance.DeleteZippedReplayBP
struct UTslGameInstance_DeleteZippedReplayBP_Params
{
	struct FString                                     ArchiveName;                                              // (CPF_Parm, CPF_ZeroConstructor)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameInstance.DeleteReplayBPByRegionOrLocal
struct UTslGameInstance_DeleteReplayBPByRegionOrLocal_Params
{
	struct FString                                     RegionOrLocal;                                            // (CPF_Parm, CPF_ZeroConstructor)
	struct FString                                     SessionName;                                              // (CPF_Parm, CPF_ZeroConstructor)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameInstance.CancelDownloadingZippedReplay
struct UTslGameInstance_CancelDownloadingZippedReplay_Params
{
	struct FString                                     SessionName;                                              // (CPF_Parm, CPF_ZeroConstructor)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameInstance.AddPlayerStateToReplaySummary
struct UTslGameInstance_AddPlayerStateToReplaySummary_Params
{
	struct FTslReplaySummary                           inReplaySummary;                                          // (CPF_Parm, CPF_OutParm)
	class ATslPlayerState*                             pPlayerState;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.LobbyHUD.TickFadeInOutEffect
struct ALobbyHUD_TickFadeInOutEffect_Params
{
	float                                              DeltaTime;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.LobbyHUD.TickCameraTransition
struct ALobbyHUD_TickCameraTransition_Params
{
	float                                              DeltaTime;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.LobbyHUD.TestLobbyCharacterReady
struct ALobbyHUD_TestLobbyCharacterReady_Params
{
	uint32_t                                           SlotIndex;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bReady;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.LobbyHUD.TestLobbyCharacterHost
struct ALobbyHUD_TestLobbyCharacterHost_Params
{
	uint32_t                                           SlotIndex;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.LobbyHUD.TestLobbyCharacterAddAngle
struct ALobbyHUD_TestLobbyCharacterAddAngle_Params
{
	int                                                SlotIndex;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              InYawInDegree;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.LobbyHUD.TestLobbyCamera_TeleportTo
struct ALobbyHUD_TestLobbyCamera_TeleportTo_Params
{
	int                                                Index;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.LobbyHUD.TestLobbyCamera_StartTransitionTo
struct ALobbyHUD_TestLobbyCamera_StartTransitionTo_Params
{
	int                                                ToIndex;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.LobbyHUD.TestLobbyCamera_StartTransitionFromTo
struct ALobbyHUD_TestLobbyCamera_StartTransitionFromTo_Params
{
	int                                                FromIndex;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ToIndex;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.LobbyHUD.TestLobbyCamera_SpawnCharacters
struct ALobbyHUD_TestLobbyCamera_SpawnCharacters_Params
{
	int                                                Num;                                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.LobbyHUD.TestLobbyCamera_Init
struct ALobbyHUD_TestLobbyCamera_Init_Params
{
};

// Function TslGame.LobbyHUD.TeleportCameraTo
struct ALobbyHUD_TeleportCameraTo_Params
{
};

// Function TslGame.LobbyHUD.StopFadeInOutEffect
struct ALobbyHUD_StopFadeInOutEffect_Params
{
};

// Function TslGame.LobbyHUD.StopCameraTransition
struct ALobbyHUD_StopCameraTransition_Params
{
};

// Function TslGame.LobbyHUD.StartFadeInOutEffect
struct ALobbyHUD_StartFadeInOutEffect_Params
{
};

// Function TslGame.LobbyHUD.StartCameraTransitionTo
struct ALobbyHUD_StartCameraTransitionTo_Params
{
};

// Function TslGame.LobbyHUD.StartCameraTransitionFromTo
struct ALobbyHUD_StartCameraTransitionFromTo_Params
{
};

// Function TslGame.LobbyHUD.SetWidgetForBinding
struct ALobbyHUD_SetWidgetForBinding_Params
{
	int                                                ViewIndex;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCoherentUIGTWidget*                         Widget;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function TslGame.LobbyHUD.SetLobbyCharacterHiddenInGame
struct ALobbyHUD_SetLobbyCharacterHiddenInGame_Params
{
	uint32_t                                           SlotIndex;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bNewHidden;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.LobbyHUD.RequestSystemMenu
struct ALobbyHUD_RequestSystemMenu_Params
{
};

// Function TslGame.LobbyHUD.OnReplaySummary
struct ALobbyHUD_OnReplaySummary_Params
{
	struct FTslReplaySummary                           ReplaySummary;                                            // (CPF_Parm)
};

// Function TslGame.LobbyHUD.OnReplayList
struct ALobbyHUD_OnReplayList_Params
{
};

// Function TslGame.LobbyHUD.OnDeleteOldReplays
struct ALobbyHUD_OnDeleteOldReplays_Params
{
	int                                                RemainedReplayNum;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.LobbyHUD.NotifyLobbySceneChanged
struct ALobbyHUD_NotifyLobbySceneChanged_Params
{
	bool                                               bIsCustomizationScene;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.LobbyHUD.NotifyLobbyCharacterCreated
struct ALobbyHUD_NotifyLobbyCharacterCreated_Params
{
	int                                                InSlotIndex;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.LobbyHUD.LeaveCustomizationMenu
struct ALobbyHUD_LeaveCustomizationMenu_Params
{
};

// Function TslGame.LobbyHUD.IsCameraHasBlurEffect
struct ALobbyHUD_IsCameraHasBlurEffect_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.LobbyHUD.InitLobbyTransition
struct ALobbyHUD_InitLobbyTransition_Params
{
};

// Function TslGame.LobbyHUD.InitFadeInOutEffect
struct ALobbyHUD_InitFadeInOutEffect_Params
{
};

// Function TslGame.LobbyHUD.InitCameraTransition
struct ALobbyHUD_InitCameraTransition_Params
{
};

// Function TslGame.LobbyHUD.GetStartUrl
struct ALobbyHUD_GetStartUrl_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function TslGame.LobbyHUD.GetLobbyCharacterNum
struct ALobbyHUD_GetLobbyCharacterNum_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.LobbyHUD.GetLobbyCharacter
struct ALobbyHUD_GetLobbyCharacter_Params
{
	int                                                SlotIndex;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ALobbyCharacter*                             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.LobbyHUD.GetLobbyCameraState
struct ALobbyHUD_GetLobbyCameraState_Params
{
};

// Function TslGame.LobbyHUD.GetLobbyCamera
struct ALobbyHUD_GetLobbyCamera_Params
{
	class ACameraActor*                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.LobbyHUD.GetCurveDuration
struct ALobbyHUD_GetCurveDuration_Params
{
	class UCurveFloat*                                 InCurve;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.LobbyHUD.EnterCustomizationMenu
struct ALobbyHUD_EnterCustomizationMenu_Params
{
};

// Function TslGame.LobbyHUD.DecideBlurChangingState
struct ALobbyHUD_DecideBlurChangingState_Params
{
};

// Function TslGame.LobbyHUD.ClearAllWidget
struct ALobbyHUD_ClearAllWidget_Params
{
};

// Function TslGame.LobbyHUD.CacheSubLevelNames
struct ALobbyHUD_CacheSubLevelNames_Params
{
};

// Function TslGame.LobbyHUD.CachePostProcessEffectFromLevel
struct ALobbyHUD_CachePostProcessEffectFromLevel_Params
{
};

// Function TslGame.LobbyHUD.CacheMainCameraFromLevel
struct ALobbyHUD_CacheMainCameraFromLevel_Params
{
};

// Function TslGame.LobbyHUD.CacheLobbyCharacterTransforms
struct ALobbyHUD_CacheLobbyCharacterTransforms_Params
{
};

// Function TslGame.LobbyHUD.CacheLobbyCamarasFromLevel
struct ALobbyHUD_CacheLobbyCamarasFromLevel_Params
{
};

// Function TslGame.LobbyHUD.AddLobbyCharacterAngle
struct ALobbyHUD_AddLobbyCharacterAngle_Params
{
	int                                                SlotIndex;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AngleInDegree;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslWelcomeBaseHUD.OnPressedPopupCommon
struct ATslWelcomeBaseHUD_OnPressedPopupCommon_Params
{
};

// Function TslGame.TslEntryPlayerController.LoadReplay
struct ATslEntryPlayerController_LoadReplay_Params
{
	struct FString                                     SessionName;                                              // (CPF_Parm, CPF_ZeroConstructor)
};

// Function TslGame.TslEntryPlayerController.HandleLobbySystemMenu
struct ATslEntryPlayerController_HandleLobbySystemMenu_Params
{
};

// Function TslGame.TslEntryPlayerController.HandleClipboard
struct ATslEntryPlayerController_HandleClipboard_Params
{
};

// Function TslGame.PerfBotPlayerController.ServerMoveToLocation
struct APerfBotPlayerController_ServerMoveToLocation_Params
{
	class Vector3D                                     Location;                                                 // (CPF_Parm, CPF_IsPlainOldData)
};

// Function TslGame.PerfBotPlayerController.ClientQuit
struct APerfBotPlayerController_ClientQuit_Params
{
};

// Function TslGame.CharacterBreathBuff.GetCharacter
struct ACharacterBreathBuff_GetCharacter_Params
{
	class ATslCharacter*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.CharacterBreathBuff.GetBreathComponent
struct ACharacterBreathBuff_GetBreathComponent_Params
{
	class UCharacterBreathComponent*                   ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacterProxy.UpdateEquippedWeapons
struct ATslCharacterProxy_UpdateEquippedWeapons_Params
{
};

// Function TslGame.TslCharacterProxy.UpdateCharacterAppearance
struct ATslCharacterProxy_UpdateCharacterAppearance_Params
{
};

// Function TslGame.TslCharacterProxy.UpdateArmedWeapons
struct ATslCharacterProxy_UpdateArmedWeapons_Params
{
};

// Function TslGame.TslCharacterProxy.SetAccessorySlot
struct ATslCharacterProxy_SetAccessorySlot_Params
{
	class UTslAccessoryComponent*                      AccessoryComponent;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function TslGame.TslCharacterProxy.GetAccessorySlot
struct ATslCharacterProxy_GetAccessorySlot_Params
{
	class UTslAccessoryComponent*                      ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function TslGame.TslCheatManager.ToggleVisibilityOfDestructibleComponents
struct UTslCheatManager_ToggleVisibilityOfDestructibleComponents_Params
{
};

// Function TslGame.TslCheatManager.ToggleMatchTimer
struct UTslCheatManager_ToggleMatchTimer_Params
{
};

// Function TslGame.TslCheatManager.ToggleII
struct UTslCheatManager_ToggleII_Params
{
	float                                              Interval;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslCheatManager.ToggleFreeMode
struct UTslCheatManager_ToggleFreeMode_Params
{
};

// Function TslGame.TslCheatManager.ToggleCollisionOfDestructibleComponents
struct UTslCheatManager_ToggleCollisionOfDestructibleComponents_Params
{
};

// Function TslGame.TslCheatManager.TestVoiceAccessToken
struct UTslCheatManager_TestVoiceAccessToken_Params
{
};

// Function TslGame.TslCheatManager.SpawnBot
struct UTslCheatManager_SpawnBot_Params
{
};

// Function TslGame.TslCheatManager.SetVehicleRepRotCorrection
struct UTslCheatManager_SetVehicleRepRotCorrection_Params
{
	float                                              AngularDeltaThreshold;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AngularInterpAlpha;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AngularRecipFixTime;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslCheatManager.SetVehicleRepPosCorrection
struct UTslCheatManager_SetVehicleRepPosCorrection_Params
{
	float                                              LinearDeltaThresholdSq;                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LinearInterpAlpha;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LinearRecipFixTime;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BodySpeedThresholdSq;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslCheatManager.SetSpectatorYawAndPitch
struct UTslCheatManager_SetSpectatorYawAndPitch_Params
{
	float                                              Yaw;                                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Pitch;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RevertSmoothSpeed;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslCheatManager.SetClientConnectionTimeout
struct UTslCheatManager_SetClientConnectionTimeout_Params
{
	float                                              TimeoutSeconds;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslCheatManager.ReturnLookAt
struct UTslCheatManager_ReturnLookAt_Params
{
};

// Function TslGame.TslCheatManager.OnInteract
struct UTslCheatManager_OnInteract_Params
{
};

// Function TslGame.TslCheatManager.OnFullMapSequenceStop
struct UTslCheatManager_OnFullMapSequenceStop_Params
{
};

// Function TslGame.TslCheatManager.MoveVehicleOnClient
struct UTslCheatManager_MoveVehicleOnClient_Params
{
	float                                              X;                                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Y;                                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Z;                                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslCheatManager.LookAt
struct UTslCheatManager_LookAt_Params
{
	float                                              Pitch;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Yaw;                                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Roll;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslCheatManager.InsertCrashMeCommand
struct UTslCheatManager_InsertCrashMeCommand_Params
{
};

// Function TslGame.TslCheatManager.ForceMatchStart
struct UTslCheatManager_ForceMatchStart_Params
{
};

// Function TslGame.TslCheatManager.DumpVoiceDevices
struct UTslCheatManager_DumpVoiceDevices_Params
{
};

// Function TslGame.TslCheatManager.DumpReplicatedItems
struct UTslCheatManager_DumpReplicatedItems_Params
{
};

// Function TslGame.TslCheatManager.DumpDestructibleComponents
struct UTslCheatManager_DumpDestructibleComponents_Params
{
};

// Function TslGame.TslCheatManager.DrawVehicleCenterOfMass
struct UTslCheatManager_DrawVehicleCenterOfMass_Params
{
};

// Function TslGame.TslCheatManager.DelayCrash
struct UTslCheatManager_DelayCrash_Params
{
	float                                              DelaySeconds;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslCheatManager.CtrlShortCutOnOff
struct UTslCheatManager_CtrlShortCutOnOff_Params
{
	bool                                               OnOff;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslCheatManager.CopyDebugInfoRotation
struct UTslCheatManager_CopyDebugInfoRotation_Params
{
};

// Function TslGame.TslCheatManager.CopyDebugInfoLocation
struct UTslCheatManager_CopyDebugInfoLocation_Params
{
};

// Function TslGame.TslCheatManager.CopyDebugInfo
struct UTslCheatManager_CopyDebugInfo_Params
{
};

// Function TslGame.TslCheatManager.Cheat
struct UTslCheatManager_Cheat_Params
{
	struct FString                                     Msg;                                                      // (CPF_Parm, CPF_ZeroConstructor)
};

// Function TslGame.TslCheatManager.ChangeTeam
struct UTslCheatManager_ChangeTeam_Params
{
	int                                                NewTeamNumber;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslCheatManager.ActivatePakOrderingMode
struct UTslCheatManager_ActivatePakOrderingMode_Params
{
};

// Function TslGame.TslCoherentWidget.GoBack
struct UTslCoherentWidget_GoBack_Params
{
};

// Function TslGame.TslDestructibleComponent.ClientReceiveComponentDamage
struct UTslDestructibleComponent_ClientReceiveComponentDamage_Params
{
	float                                              DamageAmount;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm)
	class AController*                                 EventInstigator;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslDestructibleContainer.OnRep_Flag
struct ATslDestructibleContainer_OnRep_Flag_Params
{
};

// Function TslGame.TslDoor.OnRep_DoorOpened
struct ATslDoor_OnRep_DoorOpened_Params
{
};

// Function TslGame.TslDoor.OnRep_DoorBreakingState
struct ATslDoor_OnRep_DoorBreakingState_Params
{
};

// Function TslGame.TslDoor.OnInteractBy
struct ATslDoor_OnInteractBy_Params
{
	class ATslCharacter*                               OtherCharacter;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslDoor.ClientTakeDamage
struct ATslDoor_ClientTakeDamage_Params
{
	float                                              Damage;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     HitLocation;                                              // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm)
	float                                              DamageRadius;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Impulse;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslExplosionEffect.OnParticleCollide
struct ATslExplosionEffect_OnParticleCollide_Params
{
	struct FName                                       EventName;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              EmitterTime;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ParticleTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     Location;                                                 // (CPF_Parm, CPF_IsPlainOldData)
	class Vector3D                                     Velocity;                                                 // (CPF_Parm, CPF_IsPlainOldData)
	class Vector3D                                     Direction;                                                // (CPF_Parm, CPF_IsPlainOldData)
	class Vector3D                                     Normal;                                                   // (CPF_Parm, CPF_IsPlainOldData)
	struct FName                                       BoneName;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslExplosionReactionInterface.OnExplode
struct UTslExplosionReactionInterface_OnExplode_Params
{
	float                                              DamageAmout;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     Origin;                                                   // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	TArray<struct FHitResult>                          ComponentHits;                                            // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	class AController*                                 EventInstigator;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslFence.GetSplineComponent
struct ATslFence_GetSplineComponent_Params
{
	class USplineComponent*                            ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function TslGame.TslReactionComponent.OnRep_PendingDestroy
struct UTslReactionComponent_OnRep_PendingDestroy_Params
{
	bool                                               PrevPendingDestroy;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslReactionComponent.Client_ReactByVehicle
struct UTslReactionComponent_Client_ReactByVehicle_Params
{
	class Vector3D                                     Impact;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
	class Vector3D                                     ImpulseDir;                                               // (CPF_ConstParm, CPF_Parm, CPF_IsPlainOldData)
	class Vector3D                                     Velocity;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function TslGame.TslReactionComponent.Client_ReactByRadialDamage
struct UTslReactionComponent_Client_ReactByRadialDamage_Params
{
	float                                              DamageAmount;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     Origin;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
	class Vector3D                                     Impact;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
	class Vector3D                                     ImpulseDir;                                               // (CPF_ConstParm, CPF_Parm, CPF_IsPlainOldData)
	float                                              OuterRadius;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslReactionComponent.Client_ReactByPointDamage
struct UTslReactionComponent_Client_ReactByPointDamage_Params
{
	float                                              DamageAmount;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     Impact;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
	class Vector3D                                     ImpulseDir;                                               // (CPF_ConstParm, CPF_Parm, CPF_IsPlainOldData)
};

// Function TslGame.TslFocusableWidgetInterface.Up
struct UTslFocusableWidgetInterface_Up_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslFocusableWidgetInterface.SetFocus
struct UTslFocusableWidgetInterface_SetFocus_Params
{
	bool                                               NewFocus;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslFocusableWidgetInterface.Right
struct UTslFocusableWidgetInterface_Right_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslFocusableWidgetInterface.Left
struct UTslFocusableWidgetInterface_Left_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslFocusableWidgetInterface.IsFocusable
struct UTslFocusableWidgetInterface_IsFocusable_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslFocusableWidgetInterface.IsFocus
struct UTslFocusableWidgetInterface_IsFocus_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslFocusableWidgetInterface.InputY
struct UTslFocusableWidgetInterface_InputY_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslFocusableWidgetInterface.InputX
struct UTslFocusableWidgetInterface_InputX_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslFocusableWidgetInterface.InputRT
struct UTslFocusableWidgetInterface_InputRT_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslFocusableWidgetInterface.InputRB
struct UTslFocusableWidgetInterface_InputRB_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslFocusableWidgetInterface.InputLT
struct UTslFocusableWidgetInterface_InputLT_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslFocusableWidgetInterface.InputLB
struct UTslFocusableWidgetInterface_InputLB_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslFocusableWidgetInterface.InputB
struct UTslFocusableWidgetInterface_InputB_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslFocusableWidgetInterface.InputA
struct UTslFocusableWidgetInterface_InputA_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslFocusableWidgetInterface.GetUpWidget
struct UTslFocusableWidgetInterface_GetUpWidget_Params
{
	class UUserWidget*                                 ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function TslGame.TslFocusableWidgetInterface.GetRightWidget
struct UTslFocusableWidgetInterface_GetRightWidget_Params
{
	class UUserWidget*                                 ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function TslGame.TslFocusableWidgetInterface.GetLeftWidget
struct UTslFocusableWidgetInterface_GetLeftWidget_Params
{
	class UUserWidget*                                 ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function TslGame.TslFocusableWidgetInterface.GetFocusingChildWidget
struct UTslFocusableWidgetInterface_GetFocusingChildWidget_Params
{
	class UUserWidget*                                 ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function TslGame.TslFocusableWidgetInterface.GetDownWidget
struct UTslFocusableWidgetInterface_GetDownWidget_Params
{
	class UUserWidget*                                 ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function TslGame.TslFocusableWidgetInterface.Down
struct UTslFocusableWidgetInterface_Down_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameMode.SendSystemMessageToAll
struct ATslGameMode_SendSystemMessageToAll_Params
{
	struct FText                                       Message;                                                  // (CPF_Parm)
	float                                              MessageDuration;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslGameMode.NotifyRestrictingPlayAreaToAll
struct ATslGameMode_NotifyRestrictingPlayAreaToAll_Params
{
};

// Function TslGame.TslGameMode.NotifyNextGasInToAll
struct ATslGameMode_NotifyNextGasInToAll_Params
{
	class Vector3D                                     PoisonGasWarningPosition;                                 // (CPF_Parm, CPF_IsPlainOldData)
	float                                              PoisonGasWarningRadius;                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslGameMode.IsPreventFinishMatch
struct ATslGameMode_IsPreventFinishMatch_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameMode.IsPlayInEditor
struct ATslGameMode_IsPlayInEditor_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameMode.GetVivoxManager
struct ATslGameMode_GetVivoxManager_Params
{
	class UVivoxManager*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameMode.GetThingSpawnProcessor
struct ATslGameMode_GetThingSpawnProcessor_Params
{
	class UThingSpawnProcessor*                        ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameMode.GetLobbyLink
struct ATslGameMode_GetLobbyLink_Params
{
	class ULobbyLink*                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameMode.GetItemSpawnProcessor
struct ATslGameMode_GetItemSpawnProcessor_Params
{
	class UItemSpawnProcessor*                         ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameMode.GetAllPawns
struct ATslGameMode_GetAllPawns_Params
{
	TArray<class APawn*>                               OutPawns;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
};

// Function TslGame.TslGameMode.FinishMatch
struct ATslGameMode_FinishMatch_Params
{
};

// Function TslGame.TslGameMode.FindCharacterByPlayerState
struct ATslGameMode_FindCharacterByPlayerState_Params
{
	class APlayerState*                                State;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ATslCharacter*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameMode.CanDealDamage
struct ATslGameMode_CanDealDamage_Params
{
	class ATslPlayerState*                             DamageInstigator;                                         // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ATslPlayerState*                             DamagedPlayer;                                            // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameMode.BroadcastGameModeEvent
struct ATslGameMode_BroadcastGameModeEvent_Params
{
	struct FName                                       EventName;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     Parameter;                                                // (CPF_Parm, CPF_ZeroConstructor)
};

// Function TslGame.TslGameMode.BenchmarkFinished
struct ATslGameMode_BenchmarkFinished_Params
{
};

// Function TslGame.TslGameOption.WheelAxisNameToWheelActionName
struct UTslGameOption_WheelAxisNameToWheelActionName_Params
{
	struct FTslInputKey                                Key;                                                      // (CPF_Parm)
	float                                              InAxisScale;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function TslGame.TslGameOption.SetWorldMapZoomLevel
struct UTslGameOption_SetWorldMapZoomLevel_Params
{
	int                                                NewZoomLevel;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.SetVSyncEnabled
struct UTslGameOption_SetVSyncEnabled_Params
{
	bool                                               bEnable;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.SetVoiceOutputVolume
struct UTslGameOption_SetVoiceOutputVolume_Params
{
	int                                                Volume;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.SetVoiceOutputMute
struct UTslGameOption_SetVoiceOutputMute_Params
{
	bool                                               bIsMute;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.SetVoiceInputVolume
struct UTslGameOption_SetVoiceInputVolume_Params
{
	int                                                Volume;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.SetVoiceInputMute
struct UTslGameOption_SetVoiceInputMute_Params
{
	bool                                               bIsMute;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.SetUseTeamVoice
struct UTslGameOption_SetUseTeamVoice_Params
{
	bool                                               bUse;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.SetUsePushToTalk
struct UTslGameOption_SetUsePushToTalk_Params
{
	bool                                               bUse;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.SetUseGlobalVoice
struct UTslGameOption_SetUseGlobalVoice_Params
{
	bool                                               bUse;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.SetUseCharacterCapture
struct UTslGameOption_SetUseCharacterCapture_Params
{
	bool                                               bUseCharacterCapture;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.SetUISoundVolume
struct UTslGameOption_SetUISoundVolume_Params
{
	float                                              Volume;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.SetUISoundMute
struct UTslGameOption_SetUISoundMute_Params
{
	bool                                               bIsMute;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.SetTslInputMode
struct UTslGameOption_SetTslInputMode_Params
{
};

// Function TslGame.TslGameOption.SetTpsWeaponIconShowType
struct UTslGameOption_SetTpsWeaponIconShowType_Params
{
};

// Function TslGame.TslGameOption.SetSelectMinimapTypeIndex
struct UTslGameOption_SetSelectMinimapTypeIndex_Params
{
	int                                                Index;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.SetScreenScale
struct UTslGameOption_SetScreenScale_Params
{
	float                                              Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.SetScreenResoultion
struct UTslGameOption_SetScreenResoultion_Params
{
	struct FScreenResolution                           ScreenResolution;                                         // (CPF_Parm)
};

// Function TslGame.TslGameOption.SetQualityLevel
struct UTslGameOption_SetQualityLevel_Params
{
	int                                                QualityLevel;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.SetOverallScalabilityLevel
struct UTslGameOption_SetOverallScalabilityLevel_Params
{
	int                                                Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.SetMouseSensitivity
struct UTslGameOption_SetMouseSensitivity_Params
{
	struct FName                                       InMouseSensitiveName;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              InMouseSensitivity;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.SetMotionBlur
struct UTslGameOption_SetMotionBlur_Params
{
	bool                                               bEnabled;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.SetMasterSoundVolume
struct UTslGameOption_SetMasterSoundVolume_Params
{
	float                                              Volume;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.SetMasterSoundMute
struct UTslGameOption_SetMasterSoundMute_Params
{
	bool                                               bIsMute;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.SetInvertMouse
struct UTslGameOption_SetInvertMouse_Params
{
	bool                                               bInvert;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.SetInvertGamePadY
struct UTslGameOption_SetInvertGamePadY_Params
{
	bool                                               bInvert;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.SetInvertGamePadX
struct UTslGameOption_SetInvertGamePadX_Params
{
	bool                                               bInvert;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.SetInputKey_Internal
struct UTslGameOption_SetInputKey_Internal_Params
{
	TArray<struct FTslInputKey>                        OutKeyList;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
	struct FTslInputKey                                NewKey;                                                   // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	bool                                               bGamepad;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.SetIconKillfeedEnabled
struct UTslGameOption_SetIconKillfeedEnabled_Params
{
	bool                                               bEnable;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.SetGamma
struct UTslGameOption_SetGamma_Params
{
	float                                              Gamma;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.SetGamePadSensitivity
struct UTslGameOption_SetGamePadSensitivity_Params
{
	struct FName                                       InGamePadSensitiveName;                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              InGamePadSensitivity;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.SetGamePadDeadZone
struct UTslGameOption_SetGamePadDeadZone_Params
{
	float                                              InGamePadDeadZone;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.SetFullScreen
struct UTslGameOption_SetFullScreen_Params
{
	TEnumAsByte<EWindowMode>                           InFullscreenMode;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.SetFpsWeaponSlotShow
struct UTslGameOption_SetFpsWeaponSlotShow_Params
{
	bool                                               bNewShow;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.SetFpsCameraFov
struct UTslGameOption_SetFpsCameraFov_Params
{
	float                                              NewFovValue;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.SetFppWeaponIconShowType
struct UTslGameOption_SetFppWeaponIconShowType_Params
{
};

// Function TslGame.TslGameOption.SetFppEquipableItemIconShowType
struct UTslGameOption_SetFppEquipableItemIconShowType_Params
{
};

// Function TslGame.TslGameOption.SetForceFeedbackEffectEnabled
struct UTslGameOption_SetForceFeedbackEffectEnabled_Params
{
	bool                                               bEnabled;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.SetEquipableIteIconShow
struct UTslGameOption_SetEquipableIteIconShow_Params
{
	bool                                               bNewShow;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.SetEnablePreloadingMap
struct UTslGameOption_SetEnablePreloadingMap_Params
{
	bool                                               bEnabled;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.SetEnableFunctionality
struct UTslGameOption_SetEnableFunctionality_Params
{
	bool                                               bValue;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.SetEnableClientReplay
struct UTslGameOption_SetEnableClientReplay_Params
{
	bool                                               bValue;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.SetEffectSoundVolume
struct UTslGameOption_SetEffectSoundVolume_Params
{
	float                                              Volume;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.SetEffectSoundMute
struct UTslGameOption_SetEffectSoundMute_Params
{
	bool                                               bIsMute;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.SetCurrentProvider
struct UTslGameOption_SetCurrentProvider_Params
{
	struct FString                                     ProviderName;                                             // (CPF_Parm, CPF_ZeroConstructor)
};

// Function TslGame.TslGameOption.SetCurrentCultureName
struct UTslGameOption_SetCurrentCultureName_Params
{
	struct FString                                     InCultureName;                                            // (CPF_Parm, CPF_ZeroConstructor)
};

// Function TslGame.TslGameOption.SetCurrentCrosshairColorString
struct UTslGameOption_SetCurrentCrosshairColorString_Params
{
	struct FString                                     CrosshairColorStr;                                        // (CPF_Parm, CPF_ZeroConstructor)
};

// Function TslGame.TslGameOption.SetCurrentColorBlindKeyByInt
struct UTslGameOption_SetCurrentColorBlindKeyByInt_Params
{
	int                                                ColorBlindKey;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.SetCurrentColorBlindKey
struct UTslGameOption_SetCurrentColorBlindKey_Params
{
};

// Function TslGame.TslGameOption.SetBGMSoundVolume
struct UTslGameOption_SetBGMSoundVolume_Params
{
	float                                              Volume;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.SetBGMSoundMute
struct UTslGameOption_SetBGMSoundMute_Params
{
	bool                                               bIsMute;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.SetAxisKeysToDefault
struct UTslGameOption_SetAxisKeysToDefault_Params
{
	struct FName                                       AxisName;                                                 // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
	float                                              Scale;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.SetAxisKeys
struct UTslGameOption_SetAxisKeys_Params
{
	struct FName                                       AxisName;                                                 // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
	float                                              Scale;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FTslInputKey>                        NewKeys;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function TslGame.TslGameOption.SetAxisKey
struct UTslGameOption_SetAxisKey_Params
{
	struct FName                                       AxisName;                                                 // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
	float                                              Scale;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FTslInputKey                                NewKey;                                                   // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	bool                                               bGamepad;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.SetActionKeysToDefault
struct UTslGameOption_SetActionKeysToDefault_Params
{
	struct FName                                       ActionName;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.SetActionKeys
struct UTslGameOption_SetActionKeys_Params
{
	struct FName                                       ActionName;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
	TArray<struct FTslInputKey>                        NewKeys;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function TslGame.TslGameOption.SetActionKey
struct UTslGameOption_SetActionKey_Params
{
	struct FName                                       ActionName;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
	struct FTslInputKey                                NewKey;                                                   // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	bool                                               bGamepad;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.NotDuplicateCategoryNames
struct UTslGameOption_NotDuplicateCategoryNames_Params
{
	struct FName                                       CatecoryName;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FName>                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function TslGame.TslGameOption.IsVSyncEnabled
struct UTslGameOption_IsVSyncEnabled_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.IsVoiceOutputMute
struct UTslGameOption_IsVoiceOutputMute_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.IsVoiceInputMute
struct UTslGameOption_IsVoiceInputMute_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.IsUISoundMute
struct UTslGameOption_IsUISoundMute_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.IsMouseWheelInput
struct UTslGameOption_IsMouseWheelInput_Params
{
	struct FTslInputKey                                InInputedKey;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.IsModifierKey
struct UTslGameOption_IsModifierKey_Params
{
	struct FTslInputKey                                Key;                                                      // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.IsMasterSoundMute
struct UTslGameOption_IsMasterSoundMute_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.IsKeyValid
struct UTslGameOption_IsKeyValid_Params
{
	struct FTslInputKey                                Key;                                                      // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.IsKeyUsed
struct UTslGameOption_IsKeyUsed_Params
{
	struct FTslInputKey                                Key;                                                      // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.IsInvertMouse
struct UTslGameOption_IsInvertMouse_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.IsInvertGamePadY
struct UTslGameOption_IsInvertGamePadY_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.IsInvertGamePadX
struct UTslGameOption_IsInvertGamePadX_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.IsIconKillfeedEnabled
struct UTslGameOption_IsIconKillfeedEnabled_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.IsGamepadKey
struct UTslGameOption_IsGamepadKey_Params
{
	struct FTslInputKey                                Key;                                                      // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.IsFunctionalityEnabled
struct UTslGameOption_IsFunctionalityEnabled_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.IsForceFeedbackEffectEnabled
struct UTslGameOption_IsForceFeedbackEffectEnabled_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.IsEnabledPreloadingMap
struct UTslGameOption_IsEnabledPreloadingMap_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.IsEnabledMotionBlur
struct UTslGameOption_IsEnabledMotionBlur_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.IsEffectSoundMute
struct UTslGameOption_IsEffectSoundMute_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.IsDoubleTapSupported
struct UTslGameOption_IsDoubleTapSupported_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.IsDefaultFunctionalityEnabled
struct UTslGameOption_IsDefaultFunctionalityEnabled_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.IsDefaultClientReplayEnabled
struct UTslGameOption_IsDefaultClientReplayEnabled_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.IsClientReplayEnabled
struct UTslGameOption_IsClientReplayEnabled_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.IsBGMSoundMute
struct UTslGameOption_IsBGMSoundMute_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.GetWorldMapZoomSpeedLevel
struct UTslGameOption_GetWorldMapZoomSpeedLevel_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.GetVoiceOutputVolume
struct UTslGameOption_GetVoiceOutputVolume_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.GetVoiceInputVolume
struct UTslGameOption_GetVoiceInputVolume_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.GetUseTeamVoice
struct UTslGameOption_GetUseTeamVoice_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.GetUsePushToTalk
struct UTslGameOption_GetUsePushToTalk_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.GetUseGlobalVoice
struct UTslGameOption_GetUseGlobalVoice_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.GetUseCharacterCapture
struct UTslGameOption_GetUseCharacterCapture_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.GetUISoundVolume
struct UTslGameOption_GetUISoundVolume_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.GetTslInputMode
struct UTslGameOption_GetTslInputMode_Params
{
};

// Function TslGame.TslGameOption.GetTpsWeaponIconShowType
struct UTslGameOption_GetTpsWeaponIconShowType_Params
{
};

// Function TslGame.TslGameOption.GetSupportedScreenResolutions
struct UTslGameOption_GetSupportedScreenResolutions_Params
{
	TArray<struct FScreenResolution>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function TslGame.TslGameOption.GetSupportedQualityLevels
struct UTslGameOption_GetSupportedQualityLevels_Params
{
	TArray<struct FSurportQualityLevel>                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function TslGame.TslGameOption.GetSupportedKillcam
struct UTslGameOption_GetSupportedKillcam_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.GetSupportedFpsCameraFovRangeMin
struct UTslGameOption_GetSupportedFpsCameraFovRangeMin_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.GetSupportedFpsCameraFovRangeMax
struct UTslGameOption_GetSupportedFpsCameraFovRangeMax_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.GetSupportedClientReplay
struct UTslGameOption_GetSupportedClientReplay_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.GetSelectMiniMapTypeIndex
struct UTslGameOption_GetSelectMiniMapTypeIndex_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.GetScreenScale
struct UTslGameOption_GetScreenScale_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.GetScreenResolution
struct UTslGameOption_GetScreenResolution_Params
{
	struct FScreenResolution                           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function TslGame.TslGameOption.GetReplayOptionEditable
struct UTslGameOption_GetReplayOptionEditable_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.GetQualityLevel
struct UTslGameOption_GetQualityLevel_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.GetOverallScalabilityLevel
struct UTslGameOption_GetOverallScalabilityLevel_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.GetNativeName
struct UTslGameOption_GetNativeName_Params
{
	struct FString                                     InCultureName;                                            // (CPF_Parm, CPF_ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function TslGame.TslGameOption.GetNativeLanguage
struct UTslGameOption_GetNativeLanguage_Params
{
	struct FString                                     InCultureName;                                            // (CPF_Parm, CPF_ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function TslGame.TslGameOption.GetMouseSensitivity
struct UTslGameOption_GetMouseSensitivity_Params
{
	struct FName                                       InMouseSensitiveName;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.GetMiniMapTypes
struct UTslGameOption_GetMiniMapTypes_Params
{
	TArray<struct FUiType>                             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function TslGame.TslGameOption.GetMasterSoundVolume
struct UTslGameOption_GetMasterSoundVolume_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.GetKeyName
struct UTslGameOption_GetKeyName_Params
{
	struct FTslInputKey                                Key;                                                      // (CPF_Parm)
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function TslGame.TslGameOption.GetKeyInputModeNames
struct UTslGameOption_GetKeyInputModeNames_Params
{
	TArray<struct FKeyInputModeName>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function TslGame.TslGameOption.GetGamma
struct UTslGameOption_GetGamma_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.GetGamePadSensitivity
struct UTslGameOption_GetGamePadSensitivity_Params
{
	struct FName                                       InGamePadSensitiveName;                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.GetGamePadDeadZone
struct UTslGameOption_GetGamePadDeadZone_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.GetFullscreenMode
struct UTslGameOption_GetFullscreenMode_Params
{
	TEnumAsByte<EWindowMode>                           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.GetFpsCameraFov
struct UTslGameOption_GetFpsCameraFov_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.GetFppWeaponIconShowType
struct UTslGameOption_GetFppWeaponIconShowType_Params
{
};

// Function TslGame.TslGameOption.GetFppEquipableItemIconShowType
struct UTslGameOption_GetFppEquipableItemIconShowType_Params
{
};

// Function TslGame.TslGameOption.GetEffectSoundVolume
struct UTslGameOption_GetEffectSoundVolume_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.GetDefaultInputModeSetting
struct UTslGameOption_GetDefaultInputModeSetting_Params
{
};

// Function TslGame.TslGameOption.GetDefaultCultureName
struct UTslGameOption_GetDefaultCultureName_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function TslGame.TslGameOption.GetCurrentProvider
struct UTslGameOption_GetCurrentProvider_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function TslGame.TslGameOption.GetCurrentCultureName
struct UTslGameOption_GetCurrentCultureName_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function TslGame.TslGameOption.GetCurrentCrosshairColorStr
struct UTslGameOption_GetCurrentCrosshairColorStr_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function TslGame.TslGameOption.GetCurrentColorBlindKey
struct UTslGameOption_GetCurrentColorBlindKey_Params
{
};

// Function TslGame.TslGameOption.GetCrosshairColors
struct UTslGameOption_GetCrosshairColors_Params
{
	TArray<struct FPresetColor>                        ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function TslGame.TslGameOption.GetConvertedMouseSensitivity
struct UTslGameOption_GetConvertedMouseSensitivity_Params
{
	struct FName                                       InMouseSensitiveName;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.GetConvertedGamePadSensitivity
struct UTslGameOption_GetConvertedGamePadSensitivity_Params
{
	struct FName                                       InGamePadSensitiveName;                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.GetColorBlindTypes
struct UTslGameOption_GetColorBlindTypes_Params
{
	TArray<struct FColorBlindType>                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function TslGame.TslGameOption.GetBGMSoundVolume
struct UTslGameOption_GetBGMSoundVolume_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.GetAxisKeys
struct UTslGameOption_GetAxisKeys_Params
{
	struct FName                                       AxisName;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Scale;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bDefault;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FTslInputKey>                        ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function TslGame.TslGameOption.GetAxisKey
struct UTslGameOption_GetAxisKey_Params
{
	struct FName                                       AxisName;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Scale;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bGamepad;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bDefault;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bWantAnyKey;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FTslInputKey                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function TslGame.TslGameOption.GetAvailableProviderNames
struct UTslGameOption_GetAvailableProviderNames_Params
{
	TArray<struct FString>                             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function TslGame.TslGameOption.GetAvailableProviderDisplayNames
struct UTslGameOption_GetAvailableProviderDisplayNames_Params
{
	TArray<struct FText>                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function TslGame.TslGameOption.GetAutoQualityLevels
struct UTslGameOption_GetAutoQualityLevels_Params
{
	int                                                WorkScale;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CPUMultiplier;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              GPUMultiplier;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FQualityLevelInfo>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function TslGame.TslGameOption.GetActionKeys
struct UTslGameOption_GetActionKeys_Params
{
	struct FName                                       ActionName;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bDefault;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FTslInputKey>                        ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function TslGame.TslGameOption.GetActionKey
struct UTslGameOption_GetActionKey_Params
{
	struct FName                                       ActionName;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bGamepad;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bDefault;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bWantAnyKey;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FTslInputKey                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function TslGame.TslGameOption.DefaultGamePadInnerDeadZone
struct UTslGameOption_DefaultGamePadInnerDeadZone_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.CustomizableMouseSensitiveNames
struct UTslGameOption_CustomizableMouseSensitiveNames_Params
{
	TArray<struct FCustomizableMouseSensitiveName>     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function TslGame.TslGameOption.CustomizableGamePadSensitiveNames
struct UTslGameOption_CustomizableGamePadSensitiveNames_Params
{
	TArray<struct FCustomizableGamePadSensitiveName>   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function TslGame.TslGameOption.CustomizableCategoryData
struct UTslGameOption_CustomizableCategoryData_Params
{
	TArray<struct FTslGame_FCustomizableCategoryData>  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function TslGame.TslGameOption.CustomizableAxisName
struct UTslGameOption_CustomizableAxisName_Params
{
	TArray<struct FTslGame_FCustomizableAxisName>      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function TslGame.TslGameOption.CustomizableActionNames
struct UTslGameOption_CustomizableActionNames_Params
{
	TArray<struct FCustomizableActionName>             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function TslGame.TslGameOption.CultureNames
struct UTslGameOption_CultureNames_Params
{
	TArray<struct FString>                             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function TslGame.TslGameOption.CastTslInputModeFromName
struct UTslGameOption_CastTslInputModeFromName_Params
{
	struct FName                                       InputModeName;                                            // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.ApplyMouseSensitivity
struct UTslGameOption_ApplyMouseSensitivity_Params
{
};

// Function TslGame.TslGameOption.ApplyGameUserSettings
struct UTslGameOption_ApplyGameUserSettings_Params
{
	bool                                               bCheckForCommandLineOverrides;                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOption.ApplyGamePadSensitivity
struct UTslGameOption_ApplyGamePadSensitivity_Params
{
};

// Function TslGame.TslGameOption.ApplyGamePadDeadZone
struct UTslGameOption_ApplyGamePadDeadZone_Params
{
};

// Function TslGame.TslGameOption.ApplyAutoQualitySetting
struct UTslGameOption_ApplyAutoQualitySetting_Params
{
};

// Function TslGame.TslGameState.UpdateWorldTimeSecondsDelta
struct ATslGameState_UpdateWorldTimeSecondsDelta_Params
{
	float                                              DeltaSeconds;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslGameState.ShowPlayerStateList
struct ATslGameState_ShowPlayerStateList_Params
{
};

// Function TslGame.TslGameState.OnStartGasRelease
struct ATslGameState_OnStartGasRelease_Params
{
	bool                                               InbIsGasRelease;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslGameState.OnRep_NumAlivePlayers
struct ATslGameState_OnRep_NumAlivePlayers_Params
{
};

// Function TslGame.TslGameState.OnRep_MatchShortGuid
struct ATslGameState_OnRep_MatchShortGuid_Params
{
};

// Function TslGame.TslGameState.OnRep_MatchId
struct ATslGameState_OnRep_MatchId_Params
{
};

// Function TslGame.TslGameState.OnRep_GasRelease
struct ATslGameState_OnRep_GasRelease_Params
{
	bool                                               bLastIsGasRelease;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslGameState.IsMatchInProgressBP
struct ATslGameState_IsMatchInProgressBP_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGameState.GetLevelAttribute
struct ATslGameState_GetLevelAttribute_Params
{
	class ALevelAttribute*                             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslGlassWindowComponent.OnRep_ReplicatedOnClient
struct UTslGlassWindowComponent_OnRep_ReplicatedOnClient_Params
{
	bool                                               bLastReplicatedOnClient;                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslGlassWindowComponent.OnRep_Destroyed
struct UTslGlassWindowComponent_OnRep_Destroyed_Params
{
	bool                                               bLastDestroyed;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslGlassWindowComponent.ClientNotifyHit
struct UTslGlassWindowComponent_ClientNotifyHit_Params
{
	bool                                               bBlockingHit;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     Location;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm)
	class Vector3D                                     ImpactNormal;                                             // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm)
};

// Function TslGame.TslGunAnimInstance.HandleFiremodeMontage
struct UTslGunAnimInstance_HandleFiremodeMontage_Params
{
	class UAnimMontage*                                FireModeMontage;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslHealthGaugeData.GetGaugeColor
struct UTslHealthGaugeData_GetGaugeColor_Params
{
	float                                              HealthPercent;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslHornComponent.TickHorn
struct UTslHornComponent_TickHorn_Params
{
	float                                              DeltaSeconds;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslHornComponent.ServerSetHorn
struct UTslHornComponent_ServerSetHorn_Params
{
	struct FHornPlayInfo                               InHornPlayInfo;                                           // (CPF_Parm, CPF_IsPlainOldData)
};

// Function TslGame.TslHornComponent.PlayInstantHorn
struct UTslHornComponent_PlayInstantHorn_Params
{
};

// Function TslGame.TslHornComponent.PlayHorn
struct UTslHornComponent_PlayHorn_Params
{
	bool                                               bIsLocalPlay;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslHornComponent.OnRep_SetHornPlayInfo
struct UTslHornComponent_OnRep_SetHornPlayInfo_Params
{
};

// Function TslGame.TslHornComponent.OnPostDriverLeave
struct UTslHornComponent_OnPostDriverLeave_Params
{
};

// Function TslGame.TslHornComponent.OnHornKeyUp
struct UTslHornComponent_OnHornKeyUp_Params
{
};

// Function TslGame.TslHornComponent.OnHornKeyDown
struct UTslHornComponent_OnHornKeyDown_Params
{
};

// Function TslGame.TslHornComponent.OnHornEnd
struct UTslHornComponent_OnHornEnd_Params
{
};

// Function TslGame.TslHornComponent.MulticastSetInstantHorn
struct UTslHornComponent_MulticastSetInstantHorn_Params
{
	struct FHornPlayInfo                               InHornPlayInfo;                                           // (CPF_Parm, CPF_IsPlainOldData)
};

// Function TslGame.TslInstancedGlassWindowComponent.OnRep_ReplicatedOnClient
struct UTslInstancedGlassWindowComponent_OnRep_ReplicatedOnClient_Params
{
	bool                                               bLastReplicatedOnClient;                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslInstancedGlassWindowComponent.OnRep_PendingDestroy
struct UTslInstancedGlassWindowComponent_OnRep_PendingDestroy_Params
{
};

// Function TslGame.TslInstancedGlassWindowComponent.OnRep_Destroyed
struct UTslInstancedGlassWindowComponent_OnRep_Destroyed_Params
{
};

// Function TslGame.TslInstancedGlassWindowComponent.ClientNotifyHit
struct UTslInstancedGlassWindowComponent_ClientNotifyHit_Params
{
	bool                                               bBlockingHit;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     Location;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm)
	class Vector3D                                     ImpactNormal;                                             // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm)
	int                                                InstanceIndex;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslInstancedReactionComponent.OnRep_PendingDestroy
struct UTslInstancedReactionComponent_OnRep_PendingDestroy_Params
{
};

// Function TslGame.TslInstancedReactionComponent.Client_ReactByVehicle
struct UTslInstancedReactionComponent_Client_ReactByVehicle_Params
{
	int                                                InstanceIndex;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     Impact;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
	class Vector3D                                     ImpulseDir;                                               // (CPF_ConstParm, CPF_Parm, CPF_IsPlainOldData)
	class Vector3D                                     Velocity;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function TslGame.TslInstancedReactionComponent.Client_ReactByRadialDamage
struct UTslInstancedReactionComponent_Client_ReactByRadialDamage_Params
{
	int                                                InstanceIndex;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DamageAmount;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     Origin;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
	class Vector3D                                     Impact;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
	class Vector3D                                     ImpulseDir;                                               // (CPF_ConstParm, CPF_Parm, CPF_IsPlainOldData)
	float                                              OuterRadius;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslInstancedReactionComponent.Client_ReactByPointDamage
struct UTslInstancedReactionComponent_Client_ReactByPointDamage_Params
{
	int                                                InstanceIndex;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DamageAmount;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     Impact;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
	class Vector3D                                     ImpulseDir;                                               // (CPF_ConstParm, CPF_Parm, CPF_IsPlainOldData)
};

// Function TslGame.TslLevelScriptActor.RequestReplayALevelWeatherEvent
struct ATslLevelScriptActor_RequestReplayALevelWeatherEvent_Params
{
	struct FString                                     EventID;                                                  // (CPF_Parm, CPF_ZeroConstructor)
};

// Function TslGame.TslLevelScriptActor.RecordWeatherAsCustomEvent
struct ATslLevelScriptActor_RecordWeatherAsCustomEvent_Params
{
};

// Function TslGame.TslLevelScriptActor.OnRep_SelectedWeatherIndex
struct ATslLevelScriptActor_OnRep_SelectedWeatherIndex_Params
{
};

// Function TslGame.TslLevelScriptActor.EnumerateReplayLevelEvents
struct ATslLevelScriptActor_EnumerateReplayLevelEvents_Params
{
};

// Function TslGame.TslLobbyLevelScriptActor.LatentLoadCustomizationLevel
struct ATslLobbyLevelScriptActor_LatentLoadCustomizationLevel_Params
{
};

// Function TslGame.TslModularBuilding.PassSeparatedFloors
struct ATslModularBuilding_PassSeparatedFloors_Params
{
	TArray<class UChildActorComponent*>                Floors;                                                   // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function TslGame.TslModularBuilding.GetMeshOnSapartedFloor
struct ATslModularBuilding_GetMeshOnSapartedFloor_Params
{
	int                                                SepartedFloor;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     Keyword;                                                  // (CPF_Parm, CPF_ZeroConstructor)
	TArray<class UStaticMeshComponent*>                ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function TslGame.TslModularBuilding.GetBuildingModuleFromTable
struct ATslModularBuilding_GetBuildingModuleFromTable_Params
{
	struct FString                                     Keyword;                                                  // (CPF_Parm, CPF_ZeroConstructor)
	TArray<class UStaticMeshComponent*>                ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function TslGame.TslModularBuilding.GetAttachmentsFromTable
struct ATslModularBuilding_GetAttachmentsFromTable_Params
{
	struct FString                                     Keyword;                                                  // (CPF_Parm, CPF_ZeroConstructor)
	TArray<class UStaticMeshComponent*>                ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function TslGame.TslModularBuilding.ClearBuildingModuleTable
struct ATslModularBuilding_ClearBuildingModuleTable_Params
{
};

// Function TslGame.TslModularBuilding.ClearAttachmentTable
struct ATslModularBuilding_ClearAttachmentTable_Params
{
};

// Function TslGame.TslModularBuilding.AddBuildingModuleToTable
struct ATslModularBuilding_AddBuildingModuleToTable_Params
{
	struct FString                                     Keyword;                                                  // (CPF_Parm, CPF_ZeroConstructor)
	class UStaticMeshComponent*                        Building;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function TslGame.TslModularBuilding.AddAttachmentToTable
struct ATslModularBuilding_AddAttachmentToTable_Params
{
	struct FString                                     Keyword;                                                  // (CPF_Parm, CPF_ZeroConstructor)
	class UStaticMeshComponent*                        Attachment;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function TslGame.TslParticle.SetParticleParameter
struct ATslParticle_SetParticleParameter_Params
{
	struct FString                                     Name;                                                     // (CPF_Parm, CPF_ZeroConstructor)
	float                                              Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bEnableRTPC;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslParticle.OnParticleFinish
struct ATslParticle_OnParticleFinish_Params
{
	class UParticleSystemComponent*                    PSystem;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function TslGame.TslParticle.OnParticleCollide
struct ATslParticle_OnParticleCollide_Params
{
	struct FName                                       EventName;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              EmitterTime;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ParticleTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     Location;                                                 // (CPF_Parm, CPF_IsPlainOldData)
	class Vector3D                                     Velocity;                                                 // (CPF_Parm, CPF_IsPlainOldData)
	class Vector3D                                     Direction;                                                // (CPF_Parm, CPF_IsPlainOldData)
	class Vector3D                                     Normal;                                                   // (CPF_Parm, CPF_IsPlainOldData)
	struct FName                                       BoneName;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPhysicalMaterial*                           PhysMat;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslParticle.OnParameterUpdated
struct ATslParticle_OnParameterUpdated_Params
{
};

// Function TslGame.TslParticle.GetParticleParamter
struct ATslParticle_GetParticleParamter_Params
{
	struct FString                                     Name;                                                     // (CPF_Parm, CPF_ZeroConstructor)
	float                                              DefaultValue;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslParticle.GetEmitterGlobalSpawnRateScale
struct ATslParticle_GetEmitterGlobalSpawnRateScale_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslParticle.ForceSpawn
struct ATslParticle_ForceSpawn_Params
{
	int                                                emitterIndex;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     InLocation;                                               // (CPF_ConstParm, CPF_Parm, CPF_IsPlainOldData)
};

// Function TslGame.TslParticle.AttachToParent
struct ATslParticle_AttachToParent_Params
{
};

// Function TslGame.TslPawnInputBindingComponent.NotifyOwnerUnPossessed
struct UTslPawnInputBindingComponent_NotifyOwnerUnPossessed_Params
{
	class ATslPlayerController*                        InController;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslPawnInputBindingComponent.NotifyOwnerPossessed
struct UTslPawnInputBindingComponent_NotifyOwnerPossessed_Params
{
	class ATslPlayerController*                        InController;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslPawnInputBindingComponent.MoveVehicleNextSeat_Gamepad
struct UTslPawnInputBindingComponent_MoveVehicleNextSeat_Gamepad_Params
{
};

// Function TslGame.TslPawnInputBindingComponent.MoveVehicleDriverSeat_Gamepad
struct UTslPawnInputBindingComponent_MoveVehicleDriverSeat_Gamepad_Params
{
};

// Function TslGame.TslPlayerState.OnRep_Ranking
struct ATslPlayerState_OnRep_Ranking_Params
{
	int                                                OldRanking;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerState.OnRep_PlayerStatistics
struct ATslPlayerState_OnRep_PlayerStatistics_Params
{
	struct FTslPlayerStatistics                        OldPlayerStatistics;                                      // (CPF_Parm)
};

// Function TslGame.TslPlayerState.OnRep_LastHitTime
struct ATslPlayerState_OnRep_LastHitTime_Params
{
};

// Function TslGame.TslPlayerState.IsZombie
struct ATslPlayerState_IsZombie_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerState.IsQuitter
struct ATslPlayerState_IsQuitter_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerState.IsObserver
struct ATslPlayerState_IsObserver_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerState.InformAboutKill
struct ATslPlayerState_InformAboutKill_Params
{
};

// Function TslGame.TslPlayerState.GetTeamNum
struct ATslPlayerState_GetTeamNum_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerState.GetShortPlayerName
struct ATslPlayerState_GetShortPlayerName_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function TslGame.TslPlayerState.GetPlayerScores
struct ATslPlayerState_GetPlayerScores_Params
{
	struct FTslPlayerScores                            ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerState.GetPing
struct ATslPlayerState_GetPing_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerState.GetOwningTslPlayerController
struct ATslPlayerState_GetOwningTslPlayerController_Params
{
	class ATslPlayerController*                        ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerState.GetObserverAuthorityType
struct ATslPlayerState_GetObserverAuthorityType_Params
{
};

// Function TslGame.TslPlayerState.GetKills
struct ATslPlayerState_GetKills_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerState.ClientUpdateRankingOnlineEvent
struct ATslPlayerState_ClientUpdateRankingOnlineEvent_Params
{
	int                                                InRanking;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslPlayerState.BroadcastDeath
struct ATslPlayerState_BroadcastDeath_Params
{
	class ATslPlayerState*                             KillerPlayerState;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ATslPlayerState*                             GroggyPlayerInstigator;                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDamageType*                                 KillerDamageType;                                         // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       DamageCauserName;                                         // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm)
	class UClass*                                      DamageCauserClass;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                AlivePlayerNum;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                AliveTeamNum;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               InbIsStealKilled;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslPostProcessEffect.SetMaterialVectorParameter
struct ATslPostProcessEffect_SetMaterialVectorParameter_Params
{
	int                                                idx;                                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       ParameterName;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                Value;                                                    // (CPF_Parm, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslPostProcessEffect.SetMaterialParameter
struct ATslPostProcessEffect_SetMaterialParameter_Params
{
	int                                                idx;                                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       ParameterName;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslPostProcessEffect.SetMaterialBlendWeight
struct ATslPostProcessEffect_SetMaterialBlendWeight_Params
{
	int                                                idx;                                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslPostProcessEffect.SetEffectParameter
struct ATslPostProcessEffect_SetEffectParameter_Params
{
	struct FString                                     ParameterName;                                            // (CPF_Parm, CPF_ZeroConstructor)
	float                                              Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslPostProcessEffect.SetDepthOfFieldFarBlurSize
struct ATslPostProcessEffect_SetDepthOfFieldFarBlurSize_Params
{
	float                                              NewBlurSize;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslPostProcessEffect.OnSetEffectParameter
struct ATslPostProcessEffect_OnSetEffectParameter_Params
{
	struct FString                                     ParameterName;                                            // (CPF_Parm, CPF_ZeroConstructor)
	float                                              Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslPostProcessEffect.GetEffectParameter
struct ATslPostProcessEffect_GetEffectParameter_Params
{
	struct FString                                     ParameterName;                                            // (CPF_Parm, CPF_ZeroConstructor)
	float                                              DefaultValue;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslPostProcessEffect.GetDepthOfFieldFarBlurSize
struct ATslPostProcessEffect_GetDepthOfFieldFarBlurSize_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Projectile.ServerFireProjectile
struct ATslWeapon_Projectile_ServerFireProjectile_Params
{
	class Vector3D                                     Origin;                                                   // (CPF_Parm, CPF_IsPlainOldData)
	class Vector3D                                     ShootDir;                                                 // (CPF_Parm)
};

// Function TslGame.TslWeapon_Throwable.ServerStartPinOff
struct ATslWeapon_Throwable_ServerStartPinOff_Params
{
};

// Function TslGame.TslWeapon_Throwable.ServerStartCooking
struct ATslWeapon_Throwable_ServerStartCooking_Params
{
};

// Function TslGame.TslWeapon_Throwable.ServerRequestCancelThrow
struct ATslWeapon_Throwable_ServerRequestCancelThrow_Params
{
};

// Function TslGame.TslWeapon_Throwable.ServerFireProjectile
struct ATslWeapon_Throwable_ServerFireProjectile_Params
{
	class Vector3D                                     RelativeLocation;                                         // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
	class Vector3D                                     AimDirection;                                             // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Throwable.OnRep_ThrowableState
struct ATslWeapon_Throwable_OnRep_ThrowableState_Params
{
};

// Function TslGame.TslWeapon_Throwable.OnAnimationNotify
struct ATslWeapon_Throwable_OnAnimationNotify_Params
{
	struct FName                                       NotifyName;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Throwable.GetThrowableState
struct ATslWeapon_Throwable_GetThrowableState_Params
{
};

// Function TslGame.TslWeapon_Throwable.GetThrowableCountInInventory
struct ATslWeapon_Throwable_GetThrowableCountInInventory_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Throwable.GetThrowableCount
struct ATslWeapon_Throwable_GetThrowableCount_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Throwable.ClientNotifyReset
struct ATslWeapon_Throwable_ClientNotifyReset_Params
{
};

// Function TslGame.TslWeapon_Throwable.CalculateFinalThrowVelocity
struct ATslWeapon_Throwable_CalculateFinalThrowVelocity_Params
{
	class Vector3D                                     AimDirection;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	class Vector3D                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslProjectile.SetMeshRotationFromServer
struct ATslProjectile_SetMeshRotationFromServer_Params
{
};

// Function TslGame.TslProjectile.PropagateEffectActor_BP
struct ATslProjectile_PropagateEffectActor_BP_Params
{
};

// Function TslGame.TslProjectile.PropagateEffectActor
struct ATslProjectile_PropagateEffectActor_Params
{
};

// Function TslGame.TslProjectile.OnRep_Exploded
struct ATslProjectile_OnRep_Exploded_Params
{
};

// Function TslGame.TslProjectile.OnRep_ClientActivate
struct ATslProjectile_OnRep_ClientActivate_Params
{
};

// Function TslGame.TslProjectile.OnRep_ActiveParticle
struct ATslProjectile_OnRep_ActiveParticle_Params
{
};

// Function TslGame.TslProjectile.OnImpact
struct ATslProjectile_OnImpact_Params
{
	struct FHitResult                                  ImpactResult;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	class Vector3D                                     ImpactVelocity;                                           // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function TslGame.TslProjectile.OnHit
struct ATslProjectile_OnHit_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class Vector3D                                     NormalImpulse;                                            // (CPF_Parm, CPF_IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function TslGame.TslProjectile.ExplodeBP
struct ATslProjectile_ExplodeBP_Params
{
	class Vector3D                                     Location;                                                 // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	class Rotator                                      Rotation;                                                 // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	struct FHitResult                                  Impact;                                                   // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	float                                              Radius;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslProjectile.CheckVelocityForStart
struct ATslProjectile_CheckVelocityForStart_Params
{
};

// Function TslGame.TslProjectile_Flare.Server_SpawnCarePackageCustom
struct ATslProjectile_Flare_Server_SpawnCarePackageCustom_Params
{
	class Vector3D                                     InLocation;                                               // (CPF_Parm, CPF_IsPlainOldData)
};

// Function TslGame.TslProjectile_Flare.ApplyBurn
struct ATslProjectile_Flare_ApplyBurn_Params
{
	class Vector3D                                     InLocation;                                               // (CPF_Parm, CPF_IsPlainOldData)
};

// Function TslGame.TslReactionDoorComponent.OnRep_DoorBreakingState
struct UTslReactionDoorComponent_OnRep_DoorBreakingState_Params
{
};

// Function TslGame.TslReactionDoorComponent.ClientTakeDamage
struct UTslReactionDoorComponent_ClientTakeDamage_Params
{
	float                                              Damage;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     HitLocation;                                              // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm)
	float                                              DamageRadius;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Impulse;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslSceneCaptureComponent2D.CaptureScene
struct UTslSceneCaptureComponent2D_CaptureScene_Params
{
};

// Function TslGame.TslSceneCaptureWorld.InitWorld
struct UTslSceneCaptureWorld_InitWorld_Params
{
	class UGameInstance*                               GameInstance;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     SceneCapturePackageName;                                  // (CPF_Parm, CPF_ZeroConstructor)
};

// Function TslGame.TslSceneCaptureWorld.DestroyWorld
struct UTslSceneCaptureWorld_DestroyWorld_Params
{
};

// Function TslGame.TslServerParticle.StopParticleMulticast
struct ATslServerParticle_StopParticleMulticast_Params
{
};

// Function TslGame.TslServerParticle.OnParticleFinish
struct ATslServerParticle_OnParticleFinish_Params
{
	class UParticleSystemComponent*                    PSystem;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function TslGame.TslSmokeParticleSystemComponent.ForceSpawn
struct UTslSmokeParticleSystemComponent_ForceSpawn_Params
{
	int                                                InEmitterIndex;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     InLocation;                                               // (CPF_ConstParm, CPF_Parm, CPF_IsPlainOldData)
	class Vector3D                                     InVelocity;                                               // (CPF_ConstParm, CPF_Parm, CPF_IsPlainOldData)
};

// Function TslGame.TslSmokePropagationComponent.InitScan
struct UTslSmokePropagationComponent_InitScan_Params
{
};

// Function TslGame.TslSpectatorPawn.TickMonitoring
struct ATslSpectatorPawn_TickMonitoring_Params
{
};

// Function TslGame.TslSpectatorPawn.SetShowPlayerInfoDistance
struct ATslSpectatorPawn_SetShowPlayerInfoDistance_Params
{
	float                                              Distance;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslSpectatorPawn.SetPlayerCamera
struct ATslSpectatorPawn_SetPlayerCamera_Params
{
	class AActor*                                      NewViewTarget;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslSpectatorPawn.SetObserverCameraMode
struct ATslSpectatorPawn_SetObserverCameraMode_Params
{
	class AActor*                                      NewViewTarget;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslSpectatorPawn.SetKillerOrVictimCamera
struct ATslSpectatorPawn_SetKillerOrVictimCamera_Params
{
	struct FString                                     strKillerID;                                              // (CPF_Parm, CPF_ZeroConstructor)
	struct FString                                     strKillerName;                                            // (CPF_Parm, CPF_ZeroConstructor)
	struct FString                                     strVictimID;                                              // (CPF_Parm, CPF_ZeroConstructor)
	struct FString                                     strVictimName;                                            // (CPF_Parm, CPF_ZeroConstructor)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslSpectatorPawn.SetFreeCamBattleLocation
struct ATslSpectatorPawn_SetFreeCamBattleLocation_Params
{
	class Vector3D                                     HitterLoc;                                                // (CPF_Parm, CPF_IsPlainOldData)
	class Vector3D                                     AttackedLoc;                                              // (CPF_Parm, CPF_IsPlainOldData)
};

// Function TslGame.TslSpectatorPawn.RestoreTargetCharacter
struct ATslSpectatorPawn_RestoreTargetCharacter_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslSpectatorPawn.OnViewTargetUpdate
struct ATslSpectatorPawn_OnViewTargetUpdate_Params
{
	class AActor*                                      NewViewTarget;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslSpectatorPawn.OnToggleShowObseverTagWeapon
struct ATslSpectatorPawn_OnToggleShowObseverTagWeapon_Params
{
};

// Function TslGame.TslSpectatorPawn.OnToggleObseverTagWidget
struct ATslSpectatorPawn_OnToggleObseverTagWidget_Params
{
};

// Function TslGame.TslSpectatorPawn.OnSwitchCameraSpectator
struct ATslSpectatorPawn_OnSwitchCameraSpectator_Params
{
};

// Function TslGame.TslSpectatorPawn.OnSwitchCameraFollow
struct ATslSpectatorPawn_OnSwitchCameraFollow_Params
{
};

// Function TslGame.TslSpectatorPawn.OnStopSlowMove
struct ATslSpectatorPawn_OnStopSlowMove_Params
{
};

// Function TslGame.TslSpectatorPawn.OnStopFastMove
struct ATslSpectatorPawn_OnStopFastMove_Params
{
};

// Function TslGame.TslSpectatorPawn.OnStartSlowMove
struct ATslSpectatorPawn_OnStartSlowMove_Params
{
};

// Function TslGame.TslSpectatorPawn.OnStartFastMove
struct ATslSpectatorPawn_OnStartFastMove_Params
{
};

// Function TslGame.TslSpectatorPawn.OnSetLocation
struct ATslSpectatorPawn_OnSetLocation_Params
{
	unsigned char                                      idx;                                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslSpectatorPawn.OnSetFree
struct ATslSpectatorPawn_OnSetFree_Params
{
};

// Function TslGame.TslSpectatorPawn.OnSetCharacterSpec
struct ATslSpectatorPawn_OnSetCharacterSpec_Params
{
	unsigned char                                      idx;                                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslSpectatorPawn.OnSetCharacter
struct ATslSpectatorPawn_OnSetCharacter_Params
{
	unsigned char                                      idx;                                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslSpectatorPawn.OnSaveLocation
struct ATslSpectatorPawn_OnSaveLocation_Params
{
	unsigned char                                      idx;                                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslSpectatorPawn.OnSaveCharacter
struct ATslSpectatorPawn_OnSaveCharacter_Params
{
	unsigned char                                      idx;                                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslSpectatorPawn.OnPlayerInfoDistanceUpHold
struct ATslSpectatorPawn_OnPlayerInfoDistanceUpHold_Params
{
};

// Function TslGame.TslSpectatorPawn.OnPlayerInfoDistanceUp
struct ATslSpectatorPawn_OnPlayerInfoDistanceUp_Params
{
};

// Function TslGame.TslSpectatorPawn.OnPlayerInfoDistanceDownHold
struct ATslSpectatorPawn_OnPlayerInfoDistanceDownHold_Params
{
};

// Function TslGame.TslSpectatorPawn.OnPlayerInfoDistanceDown
struct ATslSpectatorPawn_OnPlayerInfoDistanceDown_Params
{
};

// Function TslGame.TslSpectatorPawn.OnGotoTimelineDone
struct ATslSpectatorPawn_OnGotoTimelineDone_Params
{
};

// Function TslGame.TslSpectatorPawn.IsObserverTagWeaponShow
struct ATslSpectatorPawn_IsObserverTagWeaponShow_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslSpectatorPawn.HandleClipboard
struct ATslSpectatorPawn_HandleClipboard_Params
{
};

// Function TslGame.TslSpectatorPawn.GetSpectatableCharacter
struct ATslSpectatorPawn_GetSpectatableCharacter_Params
{
	class ATslCharacter*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslSpectatorPawn.GetSpectableCarePackageItem
struct ATslSpectatorPawn_GetSpectableCarePackageItem_Params
{
	class ACarePackageItem*                            ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslSpectatorPawn.GetShowPlayerInfoDistance
struct ATslSpectatorPawn_GetShowPlayerInfoDistance_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslSpectatorPawn.GetObserverTagShow
struct ATslSpectatorPawn_GetObserverTagShow_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslSpectatorPawn.GetLastSpectatedCharacter
struct ATslSpectatorPawn_GetLastSpectatedCharacter_Params
{
	class ATslCharacter*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslSpectatorPawn.GetCameraMode
struct ATslSpectatorPawn_GetCameraMode_Params
{
};

// Function TslGame.TslSpectatorPawn.BackupTargetCharacter
struct ATslSpectatorPawn_BackupTargetCharacter_Params
{
	class AActor*                                      ViewTarget;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslStatics.UseHighPrecisionMouseMovement
struct UTslStatics_UseHighPrecisionMouseMovement_Params
{
	class APlayerController*                           PlayerController;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslStatics.UnloadTextureByPtr
struct UTslStatics_UnloadTextureByPtr_Params
{
	TAssetPtr<class UTexture>                          TexturePtr;                                               // (CPF_Parm)
};

// Function TslGame.TslStatics.SetWorldOriginByDistance
struct UTslStatics_SetWorldOriginByDistance_Params
{
	class APlayerController*                           Controller;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              XYDistanceToShift;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslStatics.SetWorldOrigin
struct UTslStatics_SetWorldOrigin_Params
{
	class APlayerController*                           Controller;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslStatics.SetReportUserInfo
struct UTslStatics_SetReportUserInfo_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FTslReportUserInfo                          UserInfo;                                                 // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function TslGame.TslStatics.SetAnimationAkSwitch
struct UTslStatics_SetAnimationAkSwitch_Params
{
	class ACharacter*                                  Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     SwitchGroup;                                              // (CPF_Parm, CPF_ZeroConstructor)
	struct FString                                     SwitchState;                                              // (CPF_Parm, CPF_ZeroConstructor)
};

// Function TslGame.TslStatics.SetAnimationAkRTPC
struct UTslStatics_SetAnimationAkRTPC_Params
{
	class ACharacter*                                  Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     RTPCName;                                                 // (CPF_Parm, CPF_ZeroConstructor)
	float                                              RTPCValue;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslStatics.ServerPositionToLocal
struct UTslStatics_ServerPositionToLocal_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     Server;                                                   // (CPF_Parm, CPF_IsPlainOldData)
	class Vector3D                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslStatics.SafeDivide_IntInt
struct UTslStatics_SafeDivide_IntInt_Params
{
	int                                                A;                                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                B;                                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                DivideByZeroValue;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslStatics.SafeDivide_FloatFloat
struct UTslStatics_SafeDivide_FloatFloat_Params
{
	float                                              A;                                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              B;                                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DivideByZeroValue;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslStatics.ReleaseMouseCaptureFromPlayerController
struct UTslStatics_ReleaseMouseCaptureFromPlayerController_Params
{
	class APlayerController*                           PlayerController;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslStatics.ProjectPointToFloor
struct UTslStatics_ProjectPointToFloor_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     Origin;                                                   // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	bool                                               bOutHit;                                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Length;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslStatics.ProjectPointsToHighFloor
struct UTslStatics_ProjectPointsToHighFloor_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     Origin;                                                   // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	bool                                               bOutHit;                                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AroundLength;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RayLength;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslStatics.PredictProjectilePathBox
struct UTslStatics_PredictProjectilePathBox_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  OutHit;                                                   // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	TArray<class Vector3D>                             OutPathPositions;                                         // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
	class Vector3D                                     OutLastTraceDestination;                                  // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	class Vector3D                                     StartPos;                                                 // (CPF_Parm, CPF_IsPlainOldData)
	class Vector3D                                     LaunchVelocity;                                           // (CPF_Parm, CPF_IsPlainOldData)
	bool                                               bTracePath;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     ProjectileBox;                                            // (CPF_Parm, CPF_IsPlainOldData)
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectTypes;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	bool                                               bTraceComplex;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class AActor*>                              ActorsToIgnore;                                           // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DrawDebugTime;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SimFrequency;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxSimTime;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              OverrideGravityZ;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslStatics.PhysicalSurfaceToString
struct UTslStatics_PhysicalSurfaceToString_Params
{
	TEnumAsByte<EPhysicalSurface>                      Type;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function TslGame.TslStatics.PhysicalSurfaceToName
struct UTslStatics_PhysicalSurfaceToName_Params
{
	TEnumAsByte<EPhysicalSurface>                      Type;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslStatics.LocalPositionToServer
struct UTslStatics_LocalPositionToServer_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     Local;                                                    // (CPF_Parm, CPF_IsPlainOldData)
	class Vector3D                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslStatics.LoadTextureByPtr
struct UTslStatics_LoadTextureByPtr_Params
{
	TAssetPtr<class UTexture>                          TexturePtr;                                               // (CPF_Parm)
	class UTexture*                                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslStatics.LineSphereIntersection
struct UTslStatics_LineSphereIntersection_Params
{
	class Vector3D                                     Intersection1;                                            // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	class Vector3D                                     Intersection2;                                            // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	class Vector3D                                     Center;                                                   // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	class Vector3D                                     Origion;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	class Vector3D                                     Direction;                                                // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	float                                              Radius;                                                   // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslStatics.IsShipping
struct UTslStatics_IsShipping_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslStatics.IsServerActor
struct UTslStatics_IsServerActor_Params
{
	class AActor*                                      Actor;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslStatics.IsReportUserValid
struct UTslStatics_IsReportUserValid_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslStatics.IsReportUserApplied
struct UTslStatics_IsReportUserApplied_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslStatics.IsNextPlayzoneOnTheMap
struct UTslStatics_IsNextPlayzoneOnTheMap_Params
{
	class UUserWidget*                                 Widget;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslStatics.IsMapFullyLoaded
struct UTslStatics_IsMapFullyLoaded_Params
{
	class UWorld*                                      World;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslStatics.IsLastInputGamepad
struct UTslStatics_IsLastInputGamepad_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslStatics.IsKoreaRegion
struct UTslStatics_IsKoreaRegion_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslStatics.IsGamepadConnected
struct UTslStatics_IsGamepadConnected_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslStatics.IsForKoreanRating
struct UTslStatics_IsForKoreanRating_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslStatics.IsForChineseLicensing
struct UTslStatics_IsForChineseLicensing_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslStatics.IsESports
struct UTslStatics_IsESports_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslStatics.IsEditor
struct UTslStatics_IsEditor_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslStatics.IsClientActor
struct UTslStatics_IsClientActor_Params
{
	class AActor*                                      Actor;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslStatics.GetWaterVolumeAtLocation
struct UTslStatics_GetWaterVolumeAtLocation_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     Point;                                                    // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	class APhysicsVolume*                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslStatics.GetWaterSurfaceHeight
struct UTslStatics_GetWaterSurfaceHeight_Params
{
	class APhysicsVolume*                              PhysicsVolume;                                            // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     CurLocation;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslStatics.GetVehicleSeatComponent
struct UTslStatics_GetVehicleSeatComponent_Params
{
	class AActor*                                      Actor;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTslVehicleSeatComponent*                    ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function TslGame.TslStatics.GetVehicleCommonComponent
struct UTslStatics_GetVehicleCommonComponent_Params
{
	class AActor*                                      Actor;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTslVehicleCommonComponent*                  ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function TslGame.TslStatics.GetTslPlayerController
struct UTslStatics_GetTslPlayerController_Params
{
	class APawn*                                       Pawn;                                                     // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ATslPlayerController*                        ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslStatics.GetTslPlatformName
struct UTslStatics_GetTslPlatformName_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function TslGame.TslStatics.GetTslGameState
struct UTslStatics_GetTslGameState_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ATslGameState*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslStatics.GetTslCharacter
struct UTslStatics_GetTslCharacter_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ATslCharacter*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslStatics.GetSimplePhysicalMaterial
struct UTslStatics_GetSimplePhysicalMaterial_Params
{
	class UPrimitiveComponent*                         PrimitiveComponent;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UPhysicalMaterial*                           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslStatics.GetServerLocation
struct UTslStatics_GetServerLocation_Params
{
	class UObject*                                     ActorOrComponent;                                         // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslStatics.GetReportUserInfo
struct UTslStatics_GetReportUserInfo_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FTslReportUserInfo                          ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function TslGame.TslStatics.GetRecoilControlScale
struct UTslStatics_GetRecoilControlScale_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslStatics.GetRecoilAnimScale
struct UTslStatics_GetRecoilAnimScale_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslStatics.GetNextPlayzoneRadius
struct UTslStatics_GetNextPlayzoneRadius_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslStatics.GetNextPlayzonePosition
struct UTslStatics_GetNextPlayzonePosition_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslStatics.GetMOAScale
struct UTslStatics_GetMOAScale_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslStatics.GetGameVersion
struct UTslStatics_GetGameVersion_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function TslGame.TslStatics.GetGamepadTabMaximumDelay
struct UTslStatics_GetGamepadTabMaximumDelay_Params
{
	class ATslPlayerController*                        TslPlayerController;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslStatics.GetFullGameVersion
struct UTslStatics_GetFullGameVersion_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function TslGame.TslStatics.GetConsoleValue
struct UTslStatics_GetConsoleValue_Params
{
	struct FString                                     ConsloeName;                                              // (CPF_Parm, CPF_ZeroConstructor)
	float                                              OutValueFloat;                                            // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                OutValueInt;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     OutValueString;                                           // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslStatics.GetBluezoneRadius
struct UTslStatics_GetBluezoneRadius_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslStatics.GetBluezonePosition
struct UTslStatics_GetBluezonePosition_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslStatics.GetBallisticDropScale
struct UTslStatics_GetBallisticDropScale_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslStatics.GetBallisticDragScale
struct UTslStatics_GetBallisticDragScale_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslStatics.ConeVolumeLineTraceSingle
struct UTslStatics_ConeVolumeLineTraceSingle_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     OutHitPoint;                                              // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	class Vector3D                                     Origin;                                                   // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	float                                              HalfConeAngle;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RayLength;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslStatics.ConeVolumeLineTraceMulti
struct UTslStatics_ConeVolumeLineTraceMulti_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class Vector3D>                             OutHitPoints;                                             // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
	class Vector3D                                     Origin;                                                   // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	int                                                SamplingNum;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HalfConeAngle;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RayLength;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslStatics.CanVehicleSeatInteraction
struct UTslStatics_CanVehicleSeatInteraction_Params
{
	class ATslCharacter*                               InTslCharacter;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslStatics.CanCancelCasting
struct UTslStatics_CanCancelCasting_Params
{
	class ATslCharacter*                               InTslCharacter;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslStatics.ApplyRadialDamageWithFalloff
struct UTslStatics_ApplyRadialDamageWithFalloff_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BaseDamage;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinimumDamage;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     Origin;                                                   // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	float                                              DamageInnerRadius;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DamageOuterRadius;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DamageFalloff;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      DamageTypeClass;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class AActor*>                              IgnoreActors;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	struct FAttackId                                   AttackId;                                                 // (CPF_Parm)
	bool                                               bIsTargetDestructible;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AController*                                 InstigatedByController;                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     DamagePreventionChannel;                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bExplode;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslStatics.ApplyRadialDamageWithCurve
struct UTslStatics_ApplyRadialDamageWithCurve_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BaseDamage;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     Origin;                                                   // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	float                                              DamageRadius;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveFloat*                                 DamageCurve;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      DamageTypeClass;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class AActor*>                              IgnoreActors;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	struct FAttackId                                   AttackId;                                                 // (CPF_Parm)
	bool                                               bIsTargetDestructible;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AController*                                 InstigatedByController;                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     DamagePreventionChannel;                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bExplode;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslStatics.ApplyRadialDamage
struct UTslStatics_ApplyRadialDamage_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BaseDamage;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     Origin;                                                   // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	float                                              DamageRadius;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      DamageTypeClass;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class AActor*>                              IgnoreActors;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	struct FAttackId                                   AttackId;                                                 // (CPF_Parm)
	bool                                               bIsTargetDestructible;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AController*                                 InstigatedByController;                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bDoFullDamage;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     DamagePreventionChannel;                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bExplode;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslStatics.ApplyDamage
struct UTslStatics_ApplyDamage_Params
{
	class AActor*                                      DamagedActor;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BaseDamage;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AController*                                 EventInstigator;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      DamageTypeClass;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FAttackId                                   AttackId;                                                 // (CPF_Parm)
};

// Function TslGame.TslStreamer.OnOriginShiftedInternal
struct UTslStreamer_OnOriginShiftedInternal_Params
{
	class UWorld*                                      InWorld;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FIntVector                                  From;                                                     // (CPF_Parm, CPF_IsPlainOldData)
	struct FIntVector                                  To;                                                       // (CPF_Parm, CPF_IsPlainOldData)
};

// Function TslGame.TslStreamer.OnLevelChangedInternal
struct UTslStreamer_OnLevelChangedInternal_Params
{
};

// Function TslGame.TslThrowableTrajectoryViewComponent.AttachToThrowable
struct UTslThrowableTrajectoryViewComponent_AttachToThrowable_Params
{
	class ATslWeapon_Throwable*                        ThrowableIn;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslUserWidget.TransferUserFocusThroughReply
struct UTslUserWidget_TransferUserFocusThroughReply_Params
{
	struct FFocusEvent                                 AcceptedFocusEvent;                                       // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FEventReply                                 Reply;                                                    // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	class UWidget*                                     FocusWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	bool                                               bInAllUsers;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function TslGame.TslUserWidget.StopListeningForAllInputAxises
struct UTslUserWidget_StopListeningForAllInputAxises_Params
{
};

// Function TslGame.TslUserWidget.NavigateUserFocus
struct UTslUserWidget_NavigateUserFocus_Params
{
	class ULocalPlayer*                                Player;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UWidget*                                     Widget;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslUserWidget.ListenForInputAxis
struct UTslUserWidget_ListenForInputAxis_Params
{
	struct FName                                       AxisName;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Scale;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bConsume;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FScriptDelegate                             Callback;                                                 // (CPF_Parm, CPF_ZeroConstructor)
};

// Function TslGame.TslUserWidget.IsReplaying
struct UTslUserWidget_IsReplaying_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslUserWidget.GetDemoPlayerState
struct UTslUserWidget_GetDemoPlayerState_Params
{
	bool                                               IsForMatchResult;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ATslPlayerState*                             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslUserWidget.GetCachedViewTargetTslCharacter
struct UTslUserWidget_GetCachedViewTargetTslCharacter_Params
{
	class ATslCharacter*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslUserWidget.GetCachedGameState
struct UTslUserWidget_GetCachedGameState_Params
{
	class ATslGameState*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslUserWidget.GetCachedCharacter
struct UTslUserWidget_GetCachedCharacter_Params
{
	class ATslCharacter*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslUserWidget.ContainUserFocus
struct UTslUserWidget_ContainUserFocus_Params
{
	class ULocalPlayer*                                Player;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UWidget*                                     Widget;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslUserWidget.ContainOwnerUserFocus
struct UTslUserWidget_ContainOwnerUserFocus_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslUserWidget.ClearUserFocus
struct UTslUserWidget_ClearUserFocus_Params
{
	class ULocalPlayer*                                Player;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.UmgBaseWidget.IsMouseOn
struct UUmgBaseWidget_IsMouseOn_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.UmgBaseWidget.HandleMainPrepass
struct UUmgBaseWidget_HandleMainPrepass_Params
{
	class UWidget*                                     Widget;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function TslGame.TslXboxTeamManageWidget.ToggleVoiceChat
struct UTslXboxTeamManageWidget_ToggleVoiceChat_Params
{
	int                                                MemberNumber;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslXboxTeamManageWidget.TeamMemberMuteChanged
struct UTslXboxTeamManageWidget_TeamMemberMuteChanged_Params
{
	struct FString                                     PlayerId;                                                 // (CPF_Parm, CPF_ZeroConstructor)
	struct FString                                     ChannelId;                                                // (CPF_Parm, CPF_ZeroConstructor)
	bool                                               bIsMuted;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslXboxTeamManageWidget.ShowGamerCard
struct UTslXboxTeamManageWidget_ShowGamerCard_Params
{
	int                                                MemberNumber;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslXboxTeamManageWidget.GetTeamManageInfoWidgetBySlot
struct UTslXboxTeamManageWidget_GetTeamManageInfoWidgetBySlot_Params
{
	int                                                SlotIndex;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTslXboxTeamManageInfoWidget*                ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function TslGame.TslXboxTeamManageWidget.GetTeamManageInfoWidgetByMemberNum
struct UTslXboxTeamManageWidget_GetTeamManageInfoWidgetByMemberNum_Params
{
	int                                                MemberNum;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTslXboxTeamManageInfoWidget*                ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function TslGame.BluezoneGpsBaseWidget.UpdateBluezoneGpsWidget
struct UBluezoneGpsBaseWidget_UpdateBluezoneGpsWidget_Params
{
};

// Function TslGame.BluezoneGpsBaseWidget.OnNotifyNextGasIn
struct UBluezoneGpsBaseWidget_OnNotifyNextGasIn_Params
{
	class Vector3D                                     PoisonGasWarningPosition;                                 // (CPF_Parm, CPF_IsPlainOldData)
	float                                              PoisonGasWarningRadius;                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.EquipableItemIconBaseWidget.OnNoBagSpaceEvent
struct UEquipableItemIconBaseWidget_OnNoBagSpaceEvent_Params
{
};

// Function TslGame.HudMainBaseWidget.OnInit_Widget
struct UHudMainBaseWidget_OnInit_Widget_Params
{
	class ATslBaseHUD*                                 TslBaseHUD;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.HudMainBaseWidget.OnInit_Replay
struct UHudMainBaseWidget_OnInit_Replay_Params
{
	class ATslBaseHUD*                                 TslBaseHUD;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.HudMainBaseWidget.OnInit_Input
struct UHudMainBaseWidget_OnInit_Input_Params
{
	class ATslBaseHUD*                                 TslBaseHUD;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.HudMainBaseWidget.OnInit_Delegate
struct UHudMainBaseWidget_OnInit_Delegate_Params
{
	class ATslBaseHUD*                                 TslBaseHUD;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.InteractionBaseWidget.OnNotifyInteractionItemChanged
struct UInteractionBaseWidget_OnNotifyInteractionItemChanged_Params
{
	bool                                               bIsInteractEnable;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.KillCountBaseWidget.GetLastKillCount
struct UKillCountBaseWidget_GetLastKillCount_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.LifeGaugeBaseWidget.OnNotifyHit
struct ULifeGaugeBaseWidget_OnNotifyHit_Params
{
	float                                              Damage;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.LifeGaugeBaseWidget.OnNotifyHeal
struct ULifeGaugeBaseWidget_OnNotifyHeal_Params
{
	float                                              StartHealth;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              GoalHealth;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxHealth;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.LifeGaugeTemplateBaseWidget.Update
struct ULifeGaugeTemplateBaseWidget_Update_Params
{
	float                                              Life;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxLife;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsGroggy;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HealAmount;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bDisableEffect;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.LifeGaugeTemplateBaseWidget.OnDestoryHealEffect
struct ULifeGaugeTemplateBaseWidget_OnDestoryHealEffect_Params
{
	class ULifeGaugeEffectBaseWidget*                  HealEffect;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function TslGame.LifeGaugeTemplateBaseWidget.OnDestoryDamageEffect
struct ULifeGaugeTemplateBaseWidget_OnDestoryDamageEffect_Params
{
	class ULifeGaugeEffectBaseWidget*                  DamageEffect;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function TslGame.MapCarePackageItemIconBaseWidget.OnButtonDown
struct UMapCarePackageItemIconBaseWidget_OnButtonDown_Params
{
	struct FGeometry                                   Geometry;                                                 // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function TslGame.MapCharacterIconBaseWidget.OnButtonDown
struct UMapCharacterIconBaseWidget_OnButtonDown_Params
{
	struct FGeometry                                   Geometry;                                                 // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function TslGame.MapGridWidget.UpdateZoomAndWidgetSize
struct UMapGridWidget_UpdateZoomAndWidgetSize_Params
{
	float                                              Zoom;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector2D                                     WidgetSize;                                               // (CPF_Parm, CPF_IsPlainOldData)
};

// Function TslGame.MapGridWidget.UpdateWidgetSize_UC
struct UMapGridWidget_UpdateWidgetSize_UC_Params
{
	class Vector2D                                     WidgetSize;                                               // (CPF_Parm, CPF_IsPlainOldData)
};

// Function TslGame.MapGridWidget.UpdateReplicatedCharacterList
struct UMapGridWidget_UpdateReplicatedCharacterList_Params
{
};

// Function TslGame.MapGridWidget.UpdateReplicatedCarePackageItemList
struct UMapGridWidget_UpdateReplicatedCarePackageItemList_Params
{
};

// Function TslGame.MapGridWidget.UpdateRectangleViewByWidgetSize
struct UMapGridWidget_UpdateRectangleViewByWidgetSize_Params
{
	class Vector2D                                     WidgetSize;                                               // (CPF_Parm, CPF_IsPlainOldData)
};

// Function TslGame.MapGridWidget.UpdateRectangleView
struct UMapGridWidget_UpdateRectangleView_Params
{
};

// Function TslGame.MapGridWidget.UCtoMC
struct UMapGridWidget_UCtoMC_Params
{
	class Vector2D                                     UC;                                                       // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	class Vector2D                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.MapGridWidget.SetZoomLevel
struct UMapGridWidget_SetZoomLevel_Params
{
	float                                              NewZoomLevel;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.MapGridWidget.SetImageBrush
struct UMapGridWidget_SetImageBrush_Params
{
	class UMaterialInstanceDynamic*                    NewMatInst;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.MapGridWidget.SetCharacterIconPositionAndRotation_UC
struct UMapGridWidget_SetCharacterIconPositionAndRotation_UC_Params
{
	class Vector2D                                     Pos_UC;                                                   // (CPF_Parm, CPF_IsPlainOldData)
	float                                              Angle;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.MapGridWidget.SetCenter_MC
struct UMapGridWidget_SetCenter_MC_Params
{
	class Vector2D                                     Center;                                                   // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function TslGame.MapGridWidget.OnMapIconClicked
struct UMapGridWidget_OnMapIconClicked_Params
{
	class UMapCharacterIconBaseWidget*                 MapIconWidget;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function TslGame.MapGridWidget.OnMapCarePackageItemIconClicked
struct UMapGridWidget_OnMapCarePackageItemIconClicked_Params
{
	class UMapCarePackageItemIconBaseWidget*           MapIconWidget;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function TslGame.MapGridWidget.OnGotoTimelineDone
struct UMapGridWidget_OnGotoTimelineDone_Params
{
};

// Function TslGame.MapGridWidget.MCtoUC
struct UMapGridWidget_MCtoUC_Params
{
	class Vector2D                                     MapCoord;                                                 // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	class Vector2D                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.MapGridWidget.IsMouseInMarker
struct UMapGridWidget_IsMouseInMarker_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.MapGridWidget.GetZoomLevel
struct UMapGridWidget_GetZoomLevel_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.MapGridWidget.GetWidgetSize
struct UMapGridWidget_GetWidgetSize_Params
{
	class Vector2D                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.MapGridWidget.GetWidgetPosition
struct UMapGridWidget_GetWidgetPosition_Params
{
	class Vector2D                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.MapGridWidget.GetScreenOffset
struct UMapGridWidget_GetScreenOffset_Params
{
	class Vector2D                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.MapGridWidget.GetMapImageWigetSizeAndImageOffset
struct UMapGridWidget_GetMapImageWigetSizeAndImageOffset_Params
{
	class Vector2D                                     WidgetSize;                                               // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	class Vector2D                                     ImageOffset;                                              // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
};

// Function TslGame.MapGridWidget.GetLocalMousePosition
struct UMapGridWidget_GetLocalMousePosition_Params
{
	class Vector2D                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.MapGridWidget.GetCharacterGridVertical
struct UMapGridWidget_GetCharacterGridVertical_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function TslGame.MapGridWidget.GetCharacterGridTextHorizental
struct UMapGridWidget_GetCharacterGridTextHorizental_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function TslGame.MapGridWidget.GetAlignment
struct UMapGridWidget_GetAlignment_Params
{
	class Vector2D                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.MapGridWidget.DrawRedZone_UC
struct UMapGridWidget_DrawRedZone_UC_Params
{
	class Vector2D                                     Center_UC;                                                // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	float                                              Radius_UC;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.MapGridWidget.DrawMarker_UC
struct UMapGridWidget_DrawMarker_UC_Params
{
	class Vector2D                                     MarkerCenter_UC;                                          // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function TslGame.MapGridWidget.CursorUCtoCenterMC
struct UMapGridWidget_CursorUCtoCenterMC_Params
{
	class Vector2D                                     UC;                                                       // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	class Vector2D                                     Offest_MC;                                                // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	bool                                               bUpdate;                                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.MapGridWidget.ClampPositionByWidgetSize_UC
struct UMapGridWidget_ClampPositionByWidgetSize_UC_Params
{
	class Vector2D                                     Positon;                                                  // (CPF_Parm, CPF_IsPlainOldData)
	class Vector2D                                     WidgetSize;                                               // (CPF_Parm, CPF_IsPlainOldData)
	class Vector2D                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.MapGridWidget.ClampPosition_UC
struct UMapGridWidget_ClampPosition_UC_Params
{
	class Vector2D                                     Positon;                                                  // (CPF_Parm, CPF_IsPlainOldData)
	class Vector2D                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.MapGridWidget.AddCenter_UC
struct UMapGridWidget_AddCenter_UC_Params
{
	class Vector2D                                     Offset_UC;                                                // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function TslGame.TeamMarkWidget.InitializeTeamMarkGrid
struct UTeamMarkWidget_InitializeTeamMarkGrid_Params
{
};

// Function TslGame.TeamOverallKillCountBaseWidget.GetLastTeamOverallKillCount
struct UTeamOverallKillCountBaseWidget_GetLastTeamOverallKillCount_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslAdaptiveCrosshairWidget.SetShowCrosshairWidget
struct UTslAdaptiveCrosshairWidget_SetShowCrosshairWidget_Params
{
	bool                                               bShow;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslAdaptiveCrosshairWidget.SetCenterCrosshairVisibility
struct UTslAdaptiveCrosshairWidget_SetCenterCrosshairVisibility_Params
{
	bool                                               bVisible;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslAdaptiveCrosshairWidget.SetCenterCrosshairDeviation
struct UTslAdaptiveCrosshairWidget_SetCenterCrosshairDeviation_Params
{
	float                                              InDeviation;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslAdaptiveCrosshairWidget.SetCenterCrosshairClass
struct UTslAdaptiveCrosshairWidget_SetCenterCrosshairClass_Params
{
	bool                                               bHasWeapon;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslAdaptiveCrosshairWidget.SetAdaptiveCrosshairVisibility
struct UTslAdaptiveCrosshairWidget_SetAdaptiveCrosshairVisibility_Params
{
	bool                                               bVisible;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslAdaptiveCrosshairWidget.SetAdaptiveCrosshairPosition
struct UTslAdaptiveCrosshairWidget_SetAdaptiveCrosshairPosition_Params
{
	class Vector2D                                     ScreenPosition;                                           // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	float                                              Distance;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslAdaptiveCrosshairWidget.HandleGameUserSettingApplied
struct UTslAdaptiveCrosshairWidget_HandleGameUserSettingApplied_Params
{
};

// Function TslGame.TslAdaptiveCrosshairWidget.DecideAdaptiveCrosshairColor
struct UTslAdaptiveCrosshairWidget_DecideAdaptiveCrosshairColor_Params
{
};

// Function TslGame.TslBaseOptionWidget.OnReset
struct UTslBaseOptionWidget_OnReset_Params
{
};

// Function TslGame.TslBaseOptionWidget.OnDefault
struct UTslBaseOptionWidget_OnDefault_Params
{
};

// Function TslGame.TslBaseOptionWidget.OnApply
struct UTslBaseOptionWidget_OnApply_Params
{
};

// Function TslGame.TslBaseOptionWidget.IsKeyUp
struct UTslBaseOptionWidget_IsKeyUp_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslBaseOptionWidget.IsEnableApply
struct UTslBaseOptionWidget_IsEnableApply_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslBaseOptionWidget.IsChanged
struct UTslBaseOptionWidget_IsChanged_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslKeyDisplayWidget.TransferInputEvent
struct UTslKeyDisplayWidget_TransferInputEvent_Params
{
	struct FTslInputKey                                TslInputKey;                                              // (CPF_Parm)
};

// Function TslGame.TslKeyDisplayWidget.SetupKeyDisplayWidget
struct UTslKeyDisplayWidget_SetupKeyDisplayWidget_Params
{
	struct FName                                       InInputName;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
	struct FText                                       InDisplayName;                                            // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FName                                       InCategoryName;                                           // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
	bool                                               InbAxisInput;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              InAxisScale;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               InbGamepad;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslKeyDisplayWidget.InitializeKeyDisplayWidget
struct UTslKeyDisplayWidget_InitializeKeyDisplayWidget_Params
{
	bool                                               bDefault;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslKeyDisplayWidget.ApplyKey
struct UTslKeyDisplayWidget_ApplyKey_Params
{
};

// Function TslGame.TslKeyOptionWidget.OnKeyChanged
struct UTslKeyOptionWidget_OnKeyChanged_Params
{
	class UTslKeyDisplayWidget*                        InKeyDisplayWidget;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FTslInputKey                                InInputedKey;                                             // (CPF_Parm)
};

// Function TslGame.TslKeyOptionWidget.InitializeKeyAndMouseSetting
struct UTslKeyOptionWidget_InitializeKeyAndMouseSetting_Params
{
};

// Function TslGame.TslKeySettingWidget.TransferInputEvent
struct UTslKeySettingWidget_TransferInputEvent_Params
{
	class UTslKeyDisplayWidget*                        KeyDisplayWidget;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FTslInputKey                                TslInputKey;                                              // (CPF_Parm)
};

// Function TslGame.TslKeySettingWidget.StartupKeySettingWidget
struct UTslKeySettingWidget_StartupKeySettingWidget_Params
{
	struct FName                                       InCategoryName;                                           // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
	struct FText                                       InDisplayText;                                            // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function TslGame.TslKeySettingWidget.SetToDefault
struct UTslKeySettingWidget_SetToDefault_Params
{
};

// Function TslGame.TslKeySettingWidget.InitializeKeySettingWidget
struct UTslKeySettingWidget_InitializeKeySettingWidget_Params
{
};

// Function TslGame.TslBreatheBarWidget.OnStartBuff
struct UTslBreatheBarWidget_OnStartBuff_Params
{
	struct FName                                       BuffName;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bStart;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslBuffIconListWidget.UpdateRunBuffIconVisibility
struct UTslBuffIconListWidget_UpdateRunBuffIconVisibility_Params
{
	float                                              InBoostPercentage;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslBuffIconListWidget.UpdateRunBuffIcon
struct UTslBuffIconListWidget_UpdateRunBuffIcon_Params
{
	float                                              InBoostPercentage;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslBuffIconListWidget.UpdateHealBuffIconVisibility
struct UTslBuffIconListWidget_UpdateHealBuffIconVisibility_Params
{
	float                                              InBoostPercentage;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslBuffIconListWidget.UpdateHealBuffIcon
struct UTslBuffIconListWidget_UpdateHealBuffIcon_Params
{
	float                                              InBoostPercentage;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslBuffIconListWidget.GetRunBuffIconOpacity
struct UTslBuffIconListWidget_GetRunBuffIconOpacity_Params
{
	float                                              InBoostPercentage;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslBuffIconListWidget.GetHealBuffIconOpacity
struct UTslBuffIconListWidget_GetHealBuffIconOpacity_Params
{
	float                                              InBoostPercentage;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslCastableItemIconWidget.GetCastableItemCount
struct UTslCastableItemIconWidget_GetCastableItemCount_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslConfirmationDialogWidget.OnButtonClick
struct UTslConfirmationDialogWidget_OnButtonClick_Params
{
};

// Function TslGame.TslHealItemSelectorWidget.OnTapAction
struct UTslHealItemSelectorWidget_OnTapAction_Params
{
};

// Function TslGame.TslHealItemSelectorWidget.OnHoldAction
struct UTslHealItemSelectorWidget_OnHoldAction_Params
{
};

// Function TslGame.TslHealItemSelectorWidget.OnHideWidget
struct UTslHealItemSelectorWidget_OnHideWidget_Params
{
};

// Function TslGame.TslHealItemSelectorWidget.NotifyHealItemSelectorInput
struct UTslHealItemSelectorWidget_NotifyHealItemSelectorInput_Params
{
	bool                                               bPressed;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslInventoryCapacityWidget.GetInventoryCached
struct UTslInventoryCapacityWidget_GetInventoryCached_Params
{
	class AInventory*                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslInventoryCapacityWidget.GetFeedbackParamsFromVicinityItem
struct UTslInventoryCapacityWidget_GetFeedbackParamsFromVicinityItem_Params
{
	float                                              CurrMaxSpace;                                             // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CurrSpace;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ItemSpace;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              OutFeedbackStart;                                         // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              OutFeedbackEnd;                                           // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               OutIsPositive;                                            // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslInventoryCapacityWidget.GetFeedbackParamsFromVicinityEquipment
struct UTslInventoryCapacityWidget_GetFeedbackParamsFromVicinityEquipment_Params
{
	float                                              CurrMaxSpace;                                             // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CurrSpace;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UEquipableItem*                              EquipableItem;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              OutFeedbackStart;                                         // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              OutFeedbackEnd;                                           // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               OutIsPositive;                                            // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslInventoryCapacityWidget.GetFeedbackParamsFromInventoryItem
struct UTslInventoryCapacityWidget_GetFeedbackParamsFromInventoryItem_Params
{
	float                                              CurrMaxSpace;                                             // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CurrSpace;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ItemSpace;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              OutFeedbackStart;                                         // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              OutFeedbackEnd;                                           // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               OutIsPositive;                                            // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslInventoryCapacityWidget.GetFeedbackParamsFromEquipmentSlot
struct UTslInventoryCapacityWidget_GetFeedbackParamsFromEquipmentSlot_Params
{
	float                                              CurrMaxSpace;                                             // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CurrSpace;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UEquipableItem*                              EquipableItem;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              OutFeedbackStart;                                         // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              OutFeedbackEnd;                                           // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               OutIsPositive;                                            // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslInventoryCapacityWidget.GetCapacityParams
struct UTslInventoryCapacityWidget_GetCapacityParams_Params
{
	float                                              CurrMaxSpace;                                             // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CurrSpace;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              OutCurrMaxSpaceStart;                                     // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              OutCurrSpaceStart;                                        // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslKeyGuideWidget.ShowKeyGuideWidget
struct UTslKeyGuideWidget_ShowKeyGuideWidget_Params
{
};

// Function TslGame.TslKeyGuideWidget.HideKeyGuideWidget
struct UTslKeyGuideWidget_HideKeyGuideWidget_Params
{
};

// Function TslGame.TslKeyReceiverWidget.UpdateKeyUp
struct UTslKeyReceiverWidget_UpdateKeyUp_Params
{
	struct FKey                                        InKey;                                                    // (CPF_Parm)
};

// Function TslGame.TslKeyReceiverWidget.UpdateKeyDown
struct UTslKeyReceiverWidget_UpdateKeyDown_Params
{
	struct FKey                                        InKey;                                                    // (CPF_Parm)
};

// Function TslGame.TslKeyReceiverWidget.KeyUp
struct UTslKeyReceiverWidget_KeyUp_Params
{
	struct FKey                                        InKey;                                                    // (CPF_Parm)
};

// Function TslGame.TslKeyReceiverWidget.KeyDown
struct UTslKeyReceiverWidget_KeyDown_Params
{
	struct FKey                                        InKey;                                                    // (CPF_Parm)
};

// Function TslGame.TslKeyReceiverWidget.IsInputKeyDown
struct UTslKeyReceiverWidget_IsInputKeyDown_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslKeyReceiverWidget.GetLastDownedKeyName
struct UTslKeyReceiverWidget_GetLastDownedKeyName_Params
{
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function TslGame.TslKillMessageListWidget.UpdateMessageListWidget
struct UTslKillMessageListWidget_UpdateMessageListWidget_Params
{
};

// Function TslGame.TslKillMessageListWidget.OnVanishAnimationFinished
struct UTslKillMessageListWidget_OnVanishAnimationFinished_Params
{
	class UWidget*                                     Widget;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function TslGame.TslKillMessageListWidget.EnqueueDeathMessage
struct UTslKillMessageListWidget_EnqueueDeathMessage_Params
{
	struct FDeathMessage                               DeathMessage;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function TslGame.TslKillMessageListWidget.DequeueDeathMessage
struct UTslKillMessageListWidget_DequeueDeathMessage_Params
{
	class UWidget*                                     Widget;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function TslGame.TslKillMessageWidget.SetVanishTimer
struct UTslKillMessageWidget_SetVanishTimer_Params
{
	float                                              TimeDelay;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslKillMessageWidget.SetDeathMessage
struct UTslKillMessageWidget_SetDeathMessage_Params
{
	struct FDeathMessage                               InDeathMessage;                                           // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function TslGame.TslKillMessageWidget.PlayVanishAnimation
struct UTslKillMessageWidget_PlayVanishAnimation_Params
{
};

// Function TslGame.TslKillMessageWidget.GetTextureFromDamageTypeCategory
struct UTslKillMessageWidget_GetTextureFromDamageTypeCategory_Params
{
	class UTexture*                                    OutTexture;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              OutRatio;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslKillMessageWidget.GetTextureFromConditionOfDeathCategory
struct UTslKillMessageWidget_GetTextureFromConditionOfDeathCategory_Params
{
	class UTexture*                                    OutTexture;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              OutRatio;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslLobbyNameTagWidget.UpdateWidgetsVisibilities
struct UTslLobbyNameTagWidget_UpdateWidgetsVisibilities_Params
{
};

// Function TslGame.TslLobbyNameTagWidget.SetSpeaking
struct UTslLobbyNameTagWidget_SetSpeaking_Params
{
	bool                                               InbSpeaking;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslLobbyNameTagWidget.SetReady
struct UTslLobbyNameTagWidget_SetReady_Params
{
	bool                                               InbReady;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslLobbyNameTagWidget.SetNickName
struct UTslLobbyNameTagWidget_SetNickName_Params
{
	struct FString                                     InNickName;                                               // (CPF_Parm, CPF_ZeroConstructor)
};

// Function TslGame.TslLobbyNameTagWidget.SetHost
struct UTslLobbyNameTagWidget_SetHost_Params
{
	bool                                               InbHost;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslLobbyNameTagWidget.SetBinding
struct UTslLobbyNameTagWidget_SetBinding_Params
{
};

// Function TslGame.TslLobbyNameTagWidget.OnVoiceChatUpdated
struct UTslLobbyNameTagWidget_OnVoiceChatUpdated_Params
{
	struct FString                                     InUniqueId;                                               // (CPF_Parm, CPF_ZeroConstructor)
	bool                                               InbTeamChannel;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               InbSpeaking;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              InEnergy;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslLobbyNameTagWidget.IsAlone
struct UTslLobbyNameTagWidget_IsAlone_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslLobbyNameTagWidget.InitWidget
struct UTslLobbyNameTagWidget_InitWidget_Params
{
	struct FString                                     InNickName;                                               // (CPF_Parm, CPF_ZeroConstructor)
};

// Function TslGame.TslTeamInfoWidget.UpdateVoiceImage
struct UTslTeamInfoWidget_UpdateVoiceImage_Params
{
};

// Function TslGame.TslTeamInfoWidget.UpdateVivoxChat
struct UTslTeamInfoWidget_UpdateVivoxChat_Params
{
	struct FString                                     UniqueId;                                                 // (CPF_Parm, CPF_ZeroConstructor)
	bool                                               bIsTeamChannel;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               InbSpeaking;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              InMeterEnergy;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslTeamInfoWidget.UpdateTeamMemberName
struct UTslTeamInfoWidget_UpdateTeamMemberName_Params
{
};

// Function TslGame.TslTeamInfoWidget.UpdateTeamMemberIcon
struct UTslTeamInfoWidget_UpdateTeamMemberIcon_Params
{
};

// Function TslGame.TslTeamInfoWidget.UpdateTeamMemberColor
struct UTslTeamInfoWidget_UpdateTeamMemberColor_Params
{
};

// Function TslGame.TslTeamInfoWidget.UpdateTeamMarkerBorder
struct UTslTeamInfoWidget_UpdateTeamMarkerBorder_Params
{
};

// Function TslGame.TslTeamInfoWidget.UpdateTeamMarker
struct UTslTeamInfoWidget_UpdateTeamMarker_Params
{
};

// Function TslGame.TslTeamInfoWidget.UpdateTeamInfoIcon
struct UTslTeamInfoWidget_UpdateTeamInfoIcon_Params
{
};

// Function TslGame.TslTeamInfoWidget.UpdateTeamInfoArea
struct UTslTeamInfoWidget_UpdateTeamInfoArea_Params
{
};

// Function TslGame.TslTeamInfoWidget.UpdatePlayerIcon
struct UTslTeamInfoWidget_UpdatePlayerIcon_Params
{
};

// Function TslGame.TslTeamInfoWidget.UpdateHealthGaugeAndVisibility
struct UTslTeamInfoWidget_UpdateHealthGaugeAndVisibility_Params
{
};

// Function TslGame.TslTeamInfoWidget.UpdateBoostGauge
struct UTslTeamInfoWidget_UpdateBoostGauge_Params
{
};

// Function TslGame.TslTeamInfoWidget.SetTeam
struct UTslTeamInfoWidget_SetTeam_Params
{
	class ATeam*                                       InTeam;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslTeamInfoWidget.OnVoiceChat
struct UTslTeamInfoWidget_OnVoiceChat_Params
{
	bool                                               InbSpeaking;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              InMeterEnergy;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslTeamInfoWidget.OnParticipantRestrictionChanged
struct UTslTeamInfoWidget_OnParticipantRestrictionChanged_Params
{
	class ATeam*                                       Team;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     UniqueId;                                                 // (CPF_Parm, CPF_ZeroConstructor)
	bool                                               bIsRestricted;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslTeamInfoWidget.OnParticipantMuteChanged
struct UTslTeamInfoWidget_OnParticipantMuteChanged_Params
{
	class ATeam*                                       Team;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     ParticipantId;                                            // (CPF_Parm, CPF_ZeroConstructor)
	struct FString                                     ChannelId;                                                // (CPF_Parm, CPF_ZeroConstructor)
	bool                                               bIsMuted;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslTeamInfoWidget.OnNativeParticipantRestrictionChanged
struct UTslTeamInfoWidget_OnNativeParticipantRestrictionChanged_Params
{
	struct FString                                     UniqueId;                                                 // (CPF_Parm, CPF_ZeroConstructor)
	bool                                               bIsRestricted;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslTeamInfoWidget.OnNativeParticipantMuteChanged
struct UTslTeamInfoWidget_OnNativeParticipantMuteChanged_Params
{
	struct FString                                     ParticipantId;                                            // (CPF_Parm, CPF_ZeroConstructor)
	struct FString                                     ChannelId;                                                // (CPF_Parm, CPF_ZeroConstructor)
	bool                                               bIsMuted;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslTeamInfoWidget.DecideTeamNameColor
struct UTslTeamInfoWidget_DecideTeamNameColor_Params
{
};

// Function TslGame.TslTeamInfoWidget.BindVoiceChatIfNeed
struct UTslTeamInfoWidget_BindVoiceChatIfNeed_Params
{
};

// Function TslGame.TslXboxTeamManageInfoWidget.UpdateVoiceIcon
struct UTslXboxTeamManageInfoWidget_UpdateVoiceIcon_Params
{
	bool                                               InbVoiceMute;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslXboxTeamManageInfoWidget.UpdateUserNameText
struct UTslXboxTeamManageInfoWidget_UpdateUserNameText_Params
{
	struct FName                                       InUserName;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.WeaponSlotHudBaseWidget.OnNotifyWeaponUnarm
struct UWeaponSlotHudBaseWidget_OnNotifyWeaponUnarm_Params
{
	bool                                               bIsUnarmed;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.WeaponSlotHudBaseWidget.OnNotifyWeaponChange
struct UWeaponSlotHudBaseWidget_OnNotifyWeaponChange_Params
{
	int                                                WeaponIndex;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Duration;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.WeaponSlotHudBaseWidget.OnNotifyWeaponArmed
struct UWeaponSlotHudBaseWidget_OnNotifyWeaponArmed_Params
{
};

// Function TslGame.WeaponSlotHudBaseWidget.OnMovingStarted
struct UWeaponSlotHudBaseWidget_OnMovingStarted_Params
{
};

// Function TslGame.WeaponSlotHudBaseWidget.OnMovingFinished
struct UWeaponSlotHudBaseWidget_OnMovingFinished_Params
{
};

// Function TslGame.TslVehicleCommonComponent.SetVehicleHealth
struct UTslVehicleCommonComponent_SetVehicleHealth_Params
{
	float                                              NewHealth;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslVehicleCommonComponent.SetVehicleFuelPercent
struct UTslVehicleCommonComponent_SetVehicleFuelPercent_Params
{
	float                                              Percent;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslVehicleCommonComponent.SetVehicleFuel
struct UTslVehicleCommonComponent_SetVehicleFuel_Params
{
	float                                              NewFuel;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslVehicleCommonComponent.Repair
struct UTslVehicleCommonComponent_Repair_Params
{
};

// Function TslGame.TslVehicleCommonComponent.OnRep_Health
struct UTslVehicleCommonComponent_OnRep_Health_Params
{
	float                                              LastHealth;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslVehicleCommonComponent.OnRep_Fuel
struct UTslVehicleCommonComponent_OnRep_Fuel_Params
{
	float                                              LastFuel;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslVehicleCommonComponent.OnRep_Dying
struct UTslVehicleCommonComponent_OnRep_Dying_Params
{
};

// Function TslGame.TslVehicleCommonComponent.OnRep_Broken
struct UTslVehicleCommonComponent_OnRep_Broken_Params
{
};

// Function TslGame.TslVehicleCommonComponent.IsDying
struct UTslVehicleCommonComponent_IsDying_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslVehicleCommonComponent.IsBroken
struct UTslVehicleCommonComponent_IsBroken_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslVehicleCommonComponent.GetVehicleUI
struct UTslVehicleCommonComponent_GetVehicleUI_Params
{
	class UClass*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslVehicleCommonComponent.GetVehicleHealthPercent
struct UTslVehicleCommonComponent_GetVehicleHealthPercent_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslVehicleCommonComponent.GetVehicleHealth
struct UTslVehicleCommonComponent_GetVehicleHealth_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslVehicleCommonComponent.GetVehicleFuelPercent
struct UTslVehicleCommonComponent_GetVehicleFuelPercent_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslVehicleCommonComponent.GetVehicleFuel
struct UTslVehicleCommonComponent_GetVehicleFuel_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslVehicleCommonComponent.GetVehicleBaseHealth
struct UTslVehicleCommonComponent_GetVehicleBaseHealth_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslVehicleCommonComponent.GetVehicleBaseFuel
struct UTslVehicleCommonComponent_GetVehicleBaseFuel_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslVehicleCommonComponent.CanIgnoreCharacterDamage
struct UTslVehicleCommonComponent_CanIgnoreCharacterDamage_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslVehicleCommonComponent.Break
struct UTslVehicleCommonComponent_Break_Params
{
};

// Function TslGame.TslVehicleCommonComponent.AddVehicleFuel
struct UTslVehicleCommonComponent_AddVehicleFuel_Params
{
	float                                              Delta;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslVehicleEffectComponent.SetVehicleMaterialsToDestroyed
struct UTslVehicleEffectComponent_SetVehicleMaterialsToDestroyed_Params
{
};

// Function TslGame.TslVehicleEffectComponent.SetEngineSoundRTPC
struct UTslVehicleEffectComponent_SetEngineSoundRTPC_Params
{
	struct FString                                     RTPC;                                                     // (CPF_Parm, CPF_ZeroConstructor)
	float                                              Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslVehicleEffectComponent.OnHit
struct UTslVehicleEffectComponent_OnHit_Params
{
	class AActor*                                      SelfActor;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     NormalImpulse;                                            // (CPF_Parm, CPF_IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function TslGame.TslVehicleEffectComponent.OnHealthChange
struct UTslVehicleEffectComponent_OnHealthChange_Params
{
	float                                              CurrentHealth;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LastHealth;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HealthMax;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsDying;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslVehicleEffectComponent.OnDestroyedImpactEffect
struct UTslVehicleEffectComponent_OnDestroyedImpactEffect_Params
{
	class AActor*                                      DestroyedActor;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslVehicleEffectComponent.OnDeath
struct UTslVehicleEffectComponent_OnDeath_Params
{
	float                                              KillingDamage;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	class ATslPlayerState*                             PlayerInstigator;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslVehicleEffectComponent.GetEngineSoundComponent
struct UTslVehicleEffectComponent_GetEngineSoundComponent_Params
{
	class UAkComponent*                                ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function TslGame.TslVehicleEffectComponent.ApplyDestoyedMaterialWithDelay
struct UTslVehicleEffectComponent_ApplyDestoyedMaterialWithDelay_Params
{
};

// Function TslGame.TslVehicleHitComponent.OnSyncHit
struct UTslVehicleHitComponent_OnSyncHit_Params
{
	class Vector3D                                     NormalImpulse;                                            // (CPF_Parm, CPF_IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function TslGame.TslVehicleHitComponent.OnHit
struct UTslVehicleHitComponent_OnHit_Params
{
	class AActor*                                      SelfActor;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     NormalImpulse;                                            // (CPF_Parm, CPF_IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function TslGame.TslVehicleHitComponent.OnDeath
struct UTslVehicleHitComponent_OnDeath_Params
{
	float                                              KillingDamage;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	class ATslPlayerState*                             PlayerInstigator;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslVehicleReactionInterface.OnImpactedByVehicle
struct UTslVehicleReactionInterface_OnImpactedByVehicle_Params
{
	struct FHitResult                                  Hit;                                                      // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	class Vector3D                                     Velocity;                                                 // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function TslGame.TslVehicleSeatComponent.TryToStabilize
struct UTslVehicleSeatComponent_TryToStabilize_Params
{
};

// Function TslGame.TslVehicleSeatComponent.TryToRide
struct UTslVehicleSeatComponent_TryToRide_Params
{
	class ATslCharacter*                               Rider;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function TslGame.TslVehicleSeatComponent.TryToLeave
struct UTslVehicleSeatComponent_TryToLeave_Params
{
	class ATslCharacter*                               Rider;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bForce;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslVehicleSeatComponent.TryToFlip
struct UTslVehicleSeatComponent_TryToFlip_Params
{
};

// Function TslGame.TslVehicleSeatComponent.Ride
struct UTslVehicleSeatComponent_Ride_Params
{
	class ATslCharacter*                               Rider;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function TslGame.TslVehicleSeatComponent.PostDriverRide
struct UTslVehicleSeatComponent_PostDriverRide_Params
{
};

// Function TslGame.TslVehicleSeatComponent.PostDriverLeave
struct UTslVehicleSeatComponent_PostDriverLeave_Params
{
};

// Function TslGame.TslVehicleSeatComponent.OnFuelChange
struct UTslVehicleSeatComponent_OnFuelChange_Params
{
	float                                              CurrentFuel;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LastFuel;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FuelMax;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslVehicleSeatComponent.Leave
struct UTslVehicleSeatComponent_Leave_Params
{
	class ATslCharacter*                               Rider;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	bool                                               bForce;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslVehicleSeatComponent.KillAllRiders
struct UTslVehicleSeatComponent_KillAllRiders_Params
{
	float                                              KillingDamage;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	class ATslPlayerState*                             PlayerInstigator;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslVehicleSeatComponent.GetVehicleSeatIndex
struct UTslVehicleSeatComponent_GetVehicleSeatIndex_Params
{
	class UVehicleSeatInteractionComponent*            Seat;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslVehicleSeatComponent.GetSeats
struct UTslVehicleSeatComponent_GetSeats_Params
{
	TArray<class UVehicleSeatInteractionComponent*>    ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function TslGame.TslVehicleSeatComponent.GetSeat
struct UTslVehicleSeatComponent_GetSeat_Params
{
	int                                                SeatIndex;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UVehicleSeatInteractionComponent*            ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function TslGame.TslVehicleSeatComponent.GetRiders
struct UTslVehicleSeatComponent_GetRiders_Params
{
	TArray<class ATslCharacter*>                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function TslGame.TslVehicleSeatComponent.GetLastDriver
struct UTslVehicleSeatComponent_GetLastDriver_Params
{
	float                                              LastDuration;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ATslCharacter*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslVehicleSeatComponent.GetDriver
struct UTslVehicleSeatComponent_GetDriver_Params
{
	class ATslCharacter*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslVehicleSyncComponent.SendServerMoveToClient
struct UTslVehicleSyncComponent_SendServerMoveToClient_Params
{
	int                                                InCorrectionId;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector_NetQuantize100                      ServerLocation;                                           // (CPF_Parm)
	struct FVector_NetQuantize100                      ServerLinearVelocity;                                     // (CPF_Parm)
	class Vector3D                                     ServerRotator;                                            // (CPF_Parm)
	struct FVector_NetQuantize100                      ServerAngularVelocity;                                    // (CPF_Parm)
	bool                                               bIsSnap;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslVehicleSyncComponent.SendClientMoveToServerUnreliably
struct UTslVehicleSyncComponent_SendClientMoveToServerUnreliably_Params
{
	int                                                InCorrectionId;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector_NetQuantize100                      ClientLocation;                                           // (CPF_Parm)
	struct FVector_NetQuantize100                      ClientLinearVelocity;                                     // (CPF_Parm)
	class Vector3D                                     ClientRotator;                                            // (CPF_Parm)
	struct FVector_NetQuantize100                      ClientAngularVelocity;                                    // (CPF_Parm)
};

// Function TslGame.TslVehicleSyncComponent.SendClientMoveToServerReliably
struct UTslVehicleSyncComponent_SendClientMoveToServerReliably_Params
{
	int                                                InCorrectionId;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector_NetQuantize100                      ClientLocation;                                           // (CPF_Parm)
	struct FVector_NetQuantize100                      ClientLinearVelocity;                                     // (CPF_Parm)
	class Vector3D                                     ClientRotator;                                            // (CPF_Parm)
	struct FVector_NetQuantize100                      ClientAngularVelocity;                                    // (CPF_Parm)
};

// Function TslGame.TslVehicleSyncComponent.SendClientHitToServerUnreliably
struct UTslVehicleSyncComponent_SendClientHitToServerUnreliably_Params
{
	int                                                InCorrectionId;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector_NetQuantize100                      ClientLocation;                                           // (CPF_Parm)
	struct FVector_NetQuantize100                      ClientLinearVelocity;                                     // (CPF_Parm)
	class Vector3D                                     ClientRotator;                                            // (CPF_Parm)
	struct FVector_NetQuantize100                      ClientAngularVelocity;                                    // (CPF_Parm)
	struct FVector_NetQuantize100                      NormalImpulse;                                            // (CPF_Parm)
	struct FHitResult                                  Hit;                                                      // (CPF_Parm, CPF_IsPlainOldData)
};

// Function TslGame.TslVehicleSyncComponent.SendClientHitToServerReliably
struct UTslVehicleSyncComponent_SendClientHitToServerReliably_Params
{
	int                                                InCorrectionId;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector_NetQuantize100                      ClientLocation;                                           // (CPF_Parm)
	struct FVector_NetQuantize100                      ClientLinearVelocity;                                     // (CPF_Parm)
	class Vector3D                                     ClientRotator;                                            // (CPF_Parm)
	struct FVector_NetQuantize100                      ClientAngularVelocity;                                    // (CPF_Parm)
	struct FVector_NetQuantize100                      NormalImpulse;                                            // (CPF_Parm)
	struct FHitResult                                  Hit;                                                      // (CPF_Parm, CPF_IsPlainOldData)
};

// Function TslGame.TslVehicleSyncComponent.OnHitAtServer
struct UTslVehicleSyncComponent_OnHitAtServer_Params
{
	class AActor*                                      SelfActor;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     NormalImpulse;                                            // (CPF_Parm, CPF_IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function TslGame.TslVehicleSyncComponent.OnHitAtClient
struct UTslVehicleSyncComponent_OnHitAtClient_Params
{
	class AActor*                                      SelfActor;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     NormalImpulse;                                            // (CPF_Parm, CPF_IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function TslGame.TslVehicleSyncComponent.OnDriverRide
struct UTslVehicleSyncComponent_OnDriverRide_Params
{
};

// Function TslGame.TslViewTargetTempComponent.AddTempComponentWithDelegate
struct UTslViewTargetTempComponent_AddTempComponentWithDelegate_Params
{
	class USceneComponent*                             TempComponent;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FScriptDelegate                             DelegateToCall;                                           // (CPF_Parm, CPF_ZeroConstructor)
};

// Function TslGame.TslViewTargetTempComponent.AddTempComponent
struct UTslViewTargetTempComponent_AddTempComponent_Params
{
	class USceneComponent*                             TempComponent;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Gun_Projectile.SimulateFire_BP
struct ATslWeapon_Gun_Projectile_SimulateFire_BP_Params
{
};

// Function TslGame.TslWeapon_Trajectory.SimulateUnderwaterTrail
struct ATslWeapon_Trajectory_SimulateUnderwaterTrail_Params
{
	class Vector3D                                     SurfaceImpactPoint;                                       // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
	class Vector3D                                     ShootDirection;                                           // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
	float                                              TravelDistance;                                           // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Trajectory.SimulateUnderwaterHit
struct ATslWeapon_Trajectory_SimulateUnderwaterHit_Params
{
	class Vector3D                                     UnderwaterImpactPoint;                                    // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
	class Vector3D                                     ShootOrigin;                                              // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Trajectory.SimulateHit_UnReliable
struct ATslWeapon_Trajectory_SimulateHit_UnReliable_Params
{
	struct FHitResult                                  Impact;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
	class Vector3D                                     RelLocation;                                              // (CPF_ConstParm, CPF_Parm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Trajectory.SimulateHit_Reliable
struct ATslWeapon_Trajectory_SimulateHit_Reliable_Params
{
	struct FHitResult                                  Impact;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
	class Vector3D                                     RelLocation;                                              // (CPF_ConstParm, CPF_Parm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Trajectory.Simulate_CreateAmmoInstance
struct ATslWeapon_Trajectory_Simulate_CreateAmmoInstance_Params
{
	class Vector3D                                     ServerStartTrace;                                         // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
	class Vector3D                                     Dir;                                                      // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
	struct FAttackId                                   AttackId;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm)
};

// Function TslGame.TslWeapon_Trajectory.ServerWallCheckTest
struct ATslWeapon_Trajectory_ServerWallCheckTest_Params
{
	class Vector3D                                     TraceStart;                                               // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
	class Vector3D                                     TraceEnd;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Trajectory.ServerNotifyHit
struct ATslWeapon_Trajectory_ServerNotifyHit_Params
{
	class Vector3D                                     ClientImpactLocation;                                     // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
	class Vector3D                                     RelativeImpact;                                           // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
	float                                              HandOffsetValue;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  Impact;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
	TArray<uint32_t>                                   Checksums;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm)
	class Vector3D                                     Origin;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm)
	class Vector3D                                     TraceStart;                                               // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
	class Vector3D                                     PreLocation;                                              // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
	class Vector3D                                     ShootDir;                                                 // (CPF_Parm)
	float                                              TravelDistance;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FAttackId                                   AttackId;                                                 // (CPF_Parm)
	uint32_t                                           HitSeq;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     RelLocation;                                              // (CPF_ConstParm, CPF_Parm, CPF_IsPlainOldData)
	float                                              SpeedLoss;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Trajectory.ServerNotifyCrack
struct ATslWeapon_Trajectory_ServerNotifyCrack_Params
{
	class ATslCharacter*                               TargetCharacter;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     LocationRelative;                                         // (CPF_Parm)
	float                                              BulletVelocity;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Trajectory.ServerNotifyAmmoSpawned
struct ATslWeapon_Trajectory_ServerNotifyAmmoSpawned_Params
{
	class Vector3D                                     ServerStartTrace;                                         // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
	class Vector3D                                     Dir;                                                      // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
	struct FAttackId                                   AttackId;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm)
};

// Function TslGame.TslWeapon_Trajectory.OnRep_WeaponSpread
struct ATslWeapon_Trajectory_OnRep_WeaponSpread_Params
{
	float                                              LastWeaponSpread;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Trajectory.IsBulletInAir
struct ATslWeapon_Trajectory_IsBulletInAir_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Trajectory.GetTrajectoryConfig
struct ATslWeapon_Trajectory_GetTrajectoryConfig_Params
{
	struct FTrajectoryWeaponData                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function TslGame.TslWeapon_Trajectory.GetRecoilInfo
struct ATslWeapon_Trajectory_GetRecoilInfo_Params
{
	struct FRecoilInfo                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function TslGame.TslWeapon_Trajectory.GetCurrentStabilityVar
struct ATslWeapon_Trajectory_GetCurrentStabilityVar_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Trajectory.GetCurrentReoveryTarget
struct ATslWeapon_Trajectory_GetCurrentReoveryTarget_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Trajectory.GetCurrentRecoilValue
struct ATslWeapon_Trajectory_GetCurrentRecoilValue_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Trajectory.GetCurrentRecoilTarget
struct ATslWeapon_Trajectory_GetCurrentRecoilTarget_Params
{
	class Vector2D                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Trajectory.GetBulletRotation
struct ATslWeapon_Trajectory_GetBulletRotation_Params
{
	class Rotator                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Trajectory.GetBulletLocation
struct ATslWeapon_Trajectory_GetBulletLocation_Params
{
	class Vector3D                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Trajectory.ClientWallCheckFail
struct ATslWeapon_Trajectory_ClientWallCheckFail_Params
{
	class Vector3D                                     TraceStart;                                               // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
	class Vector3D                                     TraceEnd;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
	class Vector3D                                     Impact;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Melee.ServerNotifyHit
struct ATslWeapon_Melee_ServerNotifyHit_Params
{
	TArray<float>                                      AimSpeeds;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm)
	TArray<struct FHitResult>                          Impacts;                                                  // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm)
	struct FAttackId                                   AttackId;                                                 // (CPF_Parm)
	uint32_t                                           HitSeq;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Melee.ServerAttack
struct ATslWeapon_Melee_ServerAttack_Params
{
	int                                                AnimIndex;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Melee.OnMontageEnded
struct ATslWeapon_Melee_OnMontageEnded_Params
{
	class UAnimMontage*                                Montage;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bInterrupted;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Melee.OnAnimationNotify
struct ATslWeapon_Melee_OnAnimationNotify_Params
{
	struct FName                                       NotifyName;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Melee.ClientHit_Confirmed
struct ATslWeapon_Melee_ClientHit_Confirmed_Params
{
	struct FHitResult                                  Impact;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Melee.ClientAttack
struct ATslWeapon_Melee_ClientAttack_Params
{
	int                                                AnimIndex;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslWebPopupInterface.ShowWebPopup
struct UTslWebPopupInterface_ShowWebPopup_Params
{
	struct FWebPopupParam                              Param;                                                    // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function TslGame.TslMotorbikeVehicle.VehicleHasDriver
struct ATslMotorbikeVehicle_VehicleHasDriver_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslMotorbikeVehicle.SetAirControlR
struct ATslMotorbikeVehicle_SetAirControlR_Params
{
	float                                              inFloat;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslMotorbikeVehicle.SetAirControlQ
struct ATslMotorbikeVehicle_SetAirControlQ_Params
{
	float                                              inFloat;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslMotorbikeVehicle.SetAirControlL
struct ATslMotorbikeVehicle_SetAirControlL_Params
{
	float                                              inFloat;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslMotorbikeVehicle.SetAirControlF
struct ATslMotorbikeVehicle_SetAirControlF_Params
{
	float                                              inFloat;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslMotorbikeVehicle.SetAirControlE
struct ATslMotorbikeVehicle_SetAirControlE_Params
{
	float                                              inFloat;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslMotorbikeVehicle.SetAirControlB
struct ATslMotorbikeVehicle_SetAirControlB_Params
{
	float                                              inFloat;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslMotorbikeVehicle.ProcessFlipAndStabilize
struct ATslMotorbikeVehicle_ProcessFlipAndStabilize_Params
{
};

// Function TslGame.TslMotorbikeVehicle.OnVehicleEjected
struct ATslMotorbikeVehicle_OnVehicleEjected_Params
{
};

// Function TslGame.TslMotorbikeVehicle.OnPostDriverRide
struct ATslMotorbikeVehicle_OnPostDriverRide_Params
{
};

// Function TslGame.TslMotorbikeVehicle.OnPostDriverLeave
struct ATslMotorbikeVehicle_OnPostDriverLeave_Params
{
};

// Function TslGame.TslMotorbikeVehicle.OnMeshHit
struct ATslMotorbikeVehicle_OnMeshHit_Params
{
	class UPrimitiveComponent*                         HitComp;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class Vector3D                                     NormalImpulse;                                            // (CPF_Parm, CPF_IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function TslGame.TslMotorbikeVehicle.IsUsingActiveStabilize
struct ATslMotorbikeVehicle_IsUsingActiveStabilize_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslMotorbikeVehicle.IsKickstandActive
struct ATslMotorbikeVehicle_IsKickstandActive_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslMotorbikeVehicle.IsFlippingEnabled
struct ATslMotorbikeVehicle_IsFlippingEnabled_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslMotorbikeVehicle.HasContact
struct ATslMotorbikeVehicle_HasContact_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslMotorbikeVehicle.GetCOMSteerOffset
struct ATslMotorbikeVehicle_GetCOMSteerOffset_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.SortWidgetFormPositionY
struct UUiHelperFunctions_SortWidgetFormPositionY_Params
{
	TArray<class UWidget*>                             Widgets;                                                  // (CPF_Parm, CPF_ZeroConstructor)
	bool                                               bDescendingOrder;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UWidget*>                             ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function TslGame.UiHelperFunctions.SortWidgetFormPositionX
struct UUiHelperFunctions_SortWidgetFormPositionX_Params
{
	TArray<class UWidget*>                             Widgets;                                                  // (CPF_Parm, CPF_ZeroConstructor)
	bool                                               bDescendingOrder;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UWidget*>                             ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function TslGame.UiHelperFunctions.SortPlayerMatchResultInfosByRanking
struct UUiHelperFunctions_SortPlayerMatchResultInfosByRanking_Params
{
	TArray<struct FTslPlayerMatchResultInfo>           PlayerMatchResultInfos;                                   // (CPF_Parm, CPF_ZeroConstructor)
	TArray<struct FTslPlayerMatchResultInfo>           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function TslGame.UiHelperFunctions.SortItem
struct UUiHelperFunctions_SortItem_Params
{
	TArray<TScriptInterface<class USlotInterface>>     InItemList;                                               // (CPF_Parm, CPF_ZeroConstructor)
	TArray<TScriptInterface<class USlotInterface>>     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function TslGame.UiHelperFunctions.SetTslBlur
struct UUiHelperFunctions_SetTslBlur_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BlurLevel;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DepthBlurBlackPoint;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DepthBlurWhitePoint;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.IsWarning
struct UUiHelperFunctions_IsWarning_Params
{
	class UUserWidget*                                 Widget;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.IsThereAnyPlayingAnimation
struct UUiHelperFunctions_IsThereAnyPlayingAnimation_Params
{
	class UUserWidget*                                 Widget;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	TArray<class UWidgetAnimation*>                    AnimationArray;                                           // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.IsReplayingKillcam
struct UUiHelperFunctions_IsReplayingKillcam_Params
{
	class UUserWidget*                                 Widget;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.IsReplaying
struct UUiHelperFunctions_IsReplaying_Params
{
	class UUserWidget*                                 Widget;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.IsObserverSpectating
struct UUiHelperFunctions_IsObserverSpectating_Params
{
	class UUserWidget*                                 Widget;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.IsNavigateKey
struct UUiHelperFunctions_IsNavigateKey_Params
{
	struct FKey                                        InKey;                                                    // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.IsLastSpectatorTeam
struct UUiHelperFunctions_IsLastSpectatorTeam_Params
{
	class UUserWidget*                                 Widget;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class ATslCharacter*                               Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.IsLastSpectatedCharacter
struct UUiHelperFunctions_IsLastSpectatedCharacter_Params
{
	class UUserWidget*                                 Widget;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class ATslCharacter*                               Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.IsKickEnableCharacter
struct UUiHelperFunctions_IsKickEnableCharacter_Params
{
	class ATslCharacter*                               Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.IsInNextPlayzone
struct UUiHelperFunctions_IsInNextPlayzone_Params
{
	class UUserWidget*                                 Widget;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.IsHitted
struct UUiHelperFunctions_IsHitted_Params
{
	int                                                State;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.IsGroggyByTeam
struct UUiHelperFunctions_IsGroggyByTeam_Params
{
	class ATeam*                                       Team;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.IsGamepadY
struct UUiHelperFunctions_IsGamepadY_Params
{
	struct FKey                                        InKey;                                                    // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.IsGamepadX
struct UUiHelperFunctions_IsGamepadX_Params
{
	struct FKey                                        InKey;                                                    // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.IsGamepadUp
struct UUiHelperFunctions_IsGamepadUp_Params
{
	struct FKey                                        InKey;                                                    // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.IsGamepadRight
struct UUiHelperFunctions_IsGamepadRight_Params
{
	struct FKey                                        InKey;                                                    // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.IsGamepadLeft
struct UUiHelperFunctions_IsGamepadLeft_Params
{
	struct FKey                                        InKey;                                                    // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.IsGamepadDown
struct UUiHelperFunctions_IsGamepadDown_Params
{
	struct FKey                                        InKey;                                                    // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.IsGamepadB
struct UUiHelperFunctions_IsGamepadB_Params
{
	struct FKey                                        InKey;                                                    // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.IsGamepadA
struct UUiHelperFunctions_IsGamepadA_Params
{
	struct FKey                                        InKey;                                                    // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.IsBluezoneGpsReset
struct UUiHelperFunctions_IsBluezoneGpsReset_Params
{
	class UUserWidget*                                 Widget;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.IsAttacked
struct UUiHelperFunctions_IsAttacked_Params
{
	int                                                State;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.HaveDurability
struct UUiHelperFunctions_HaveDurability_Params
{
	TScriptInterface<class USlotInterface>             ItemSlot;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.GetWeaponProcessor
struct UUiHelperFunctions_GetWeaponProcessor_Params
{
	class UUserWidget*                                 Widget;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class AWeaponProcessor*                            ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.GetViewTargetTslCharacter
struct UUiHelperFunctions_GetViewTargetTslCharacter_Params
{
	class UUserWidget*                                 Widget;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class ATslCharacter*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.GetVehicleUI
struct UUiHelperFunctions_GetVehicleUI_Params
{
	class APawn*                                       VehiclePawn;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.GetUpWidgetByTslFocusableWidget
struct UUiHelperFunctions_GetUpWidgetByTslFocusableWidget_Params
{
	class UWidget*                                     Widget;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UWidget*                                     ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.GetTslSpectatorPawn
struct UUiHelperFunctions_GetTslSpectatorPawn_Params
{
	class UUserWidget*                                 Widget;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class ATslSpectatorPawn*                           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.GetTslPlayerState
struct UUiHelperFunctions_GetTslPlayerState_Params
{
	class ATslCharacter*                               Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ATslPlayerState*                             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.GetTslHUD
struct UUiHelperFunctions_GetTslHUD_Params
{
	class UUserWidget*                                 Widget;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class ATslHUD*                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.GetTslCharacterByNetId
struct UUiHelperFunctions_GetTslCharacterByNetId_Params
{
	class UUserWidget*                                 Widget;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FString                                     NetId;                                                    // (CPF_Parm, CPF_ZeroConstructor)
	class ATslCharacter*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.GetTeamId
struct UUiHelperFunctions_GetTeamId_Params
{
	class ATslCharacter*                               Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.GetTeamColors
struct UUiHelperFunctions_GetTeamColors_Params
{
	int                                                TeamCount;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FLinearColor>                        ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function TslGame.UiHelperFunctions.GetTeamColor
struct UUiHelperFunctions_GetTeamColor_Params
{
	class ATslCharacter*                               TslCharacter;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.GetSubjectToReportType
struct UUiHelperFunctions_GetSubjectToReportType_Params
{
	class UUserWidget*                                 Widget;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.GetSubjectToReport
struct UUiHelperFunctions_GetSubjectToReport_Params
{
	TArray<struct FSubjectToReport>                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function TslGame.UiHelperFunctions.GetSortedReplicateCharactersBySpectatorPawnDistance
struct UUiHelperFunctions_GetSortedReplicateCharactersBySpectatorPawnDistance_Params
{
	class UUserWidget*                                 Widget;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	TArray<class ATslCharacter*>                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function TslGame.UiHelperFunctions.GetSortedReplicateCharactersByLastHitTime
struct UUiHelperFunctions_GetSortedReplicateCharactersByLastHitTime_Params
{
	class UUserWidget*                                 Widget;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	TArray<class ATslCharacter*>                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function TslGame.UiHelperFunctions.GetRightWidgetByTslFocusableWidget
struct UUiHelperFunctions_GetRightWidgetByTslFocusableWidget_Params
{
	class UWidget*                                     Widget;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UWidget*                                     ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.GetReportCauses
struct UUiHelperFunctions_GetReportCauses_Params
{
	TArray<struct FReportCauseData>                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function TslGame.UiHelperFunctions.GetPlayerNetID
struct UUiHelperFunctions_GetPlayerNetID_Params
{
	class ATslCharacter*                               Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function TslGame.UiHelperFunctions.GetPlayerName
struct UUiHelperFunctions_GetPlayerName_Params
{
	class ATslCharacter*                               Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function TslGame.UiHelperFunctions.GetPlayerIcon
struct UUiHelperFunctions_GetPlayerIcon_Params
{
	int                                                MarkerNum;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTexture*                                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.GetOwningTslPlayerController
struct UUiHelperFunctions_GetOwningTslPlayerController_Params
{
	class UUserWidget*                                 Widget;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class ATslPlayerController*                        ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.GetOwningTslCharacter
struct UUiHelperFunctions_GetOwningTslCharacter_Params
{
	class UUserWidget*                                 Widget;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class ATslCharacter*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.GetNextPlayzoneRadius_BluezoneGPS
struct UUiHelperFunctions_GetNextPlayzoneRadius_BluezoneGPS_Params
{
	class UUserWidget*                                 Widget;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.GetNextPlayzonePosition_BluezoneGPS
struct UUiHelperFunctions_GetNextPlayzonePosition_BluezoneGPS_Params
{
	class UUserWidget*                                 Widget;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class Vector3D                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.GetMarkerIcon
struct UUiHelperFunctions_GetMarkerIcon_Params
{
	int                                                MarkerNum;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTexture*                                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.GetMarkerColor
struct UUiHelperFunctions_GetMarkerColor_Params
{
	int                                                MarkerNum;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.GetMapDeathIcon
struct UUiHelperFunctions_GetMapDeathIcon_Params
{
	int                                                MarkerNum;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTexture*                                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.GetLeftWidgetByTslFocusableWidget
struct UUiHelperFunctions_GetLeftWidgetByTslFocusableWidget_Params
{
	class UWidget*                                     Widget;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UWidget*                                     ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.GetLastSpectatedCharacter
struct UUiHelperFunctions_GetLastSpectatedCharacter_Params
{
	class UUserWidget*                                 Widget;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class ATslCharacter*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.GetInventoryFacade
struct UUiHelperFunctions_GetInventoryFacade_Params
{
	class UUserWidget*                                 Widget;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class AInventoryFacade*                            ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.GetInventory
struct UUiHelperFunctions_GetInventory_Params
{
	class UUserWidget*                                 Widget;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class AInventory*                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.GetIndicatorIcon
struct UUiHelperFunctions_GetIndicatorIcon_Params
{
	int                                                MarkerNum;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTexture*                                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.GetHealthRatioByTeam
struct UUiHelperFunctions_GetHealthRatioByTeam_Params
{
	class ATeam*                                       Team;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.GetHealLimit
struct UUiHelperFunctions_GetHealLimit_Params
{
	class UUserWidget*                                 Widget;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.GetGroggyHealthRatioByTeam
struct UUiHelperFunctions_GetGroggyHealthRatioByTeam_Params
{
	class ATeam*                                       Team;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.GetEquipment
struct UUiHelperFunctions_GetEquipment_Params
{
	class UUserWidget*                                 Widget;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class AEquipment*                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.GetDurabilityRatio
struct UUiHelperFunctions_GetDurabilityRatio_Params
{
	TScriptInterface<class USlotInterface>             ItemSlot;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.GetDownWidgetByTslFocusableWidget
struct UUiHelperFunctions_GetDownWidgetByTslFocusableWidget_Params
{
	class UWidget*                                     Widget;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UWidget*                                     ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.GetDistanceFromSpectatorPawn
struct UUiHelperFunctions_GetDistanceFromSpectatorPawn_Params
{
	class UUserWidget*                                 Widget;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class ATslCharacter*                               Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.GetCurrentPlayzoneRadius_BluezoneGPS
struct UUiHelperFunctions_GetCurrentPlayzoneRadius_BluezoneGPS_Params
{
	class UUserWidget*                                 Widget;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.GetCurrentPlayzonePosition_BluezoneGPS
struct UUiHelperFunctions_GetCurrentPlayzonePosition_BluezoneGPS_Params
{
	class UUserWidget*                                 Widget;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class Vector3D                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.GetCompassIcon
struct UUiHelperFunctions_GetCompassIcon_Params
{
	int                                                MarkerNum;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTexture*                                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.GetChildrenOfPanel
struct UUiHelperFunctions_GetChildrenOfPanel_Params
{
	class UPanelWidget*                                PanelWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	TArray<class UWidget*>                             ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function TslGame.UiHelperFunctions.GetCharacterStateByTeam
struct UUiHelperFunctions_GetCharacterStateByTeam_Params
{
	class ATeam*                                       Team;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.GetBluezoneWarningTime
struct UUiHelperFunctions_GetBluezoneWarningTime_Params
{
	class UUserWidget*                                 Widget;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.GetBluezoneReleaseTime
struct UUiHelperFunctions_GetBluezoneReleaseTime_Params
{
	class UUserWidget*                                 Widget;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.GetBluezoneGpsState
struct UUiHelperFunctions_GetBluezoneGpsState_Params
{
	class UUserWidget*                                 Widget;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.FindNextWidgetIndexInPanel
struct UUiHelperFunctions_FindNextWidgetIndexInPanel_Params
{
	class UPanelWidget*                                PanelWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UWidget*                                     StartWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	bool                                               bReverseDir;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.DrawDottedLine
struct UUiHelperFunctions_DrawDottedLine_Params
{
	struct FPaintContext                               Context;                                                  // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FBox2D                                      Rect;                                                     // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	class Vector2D                                     PositionA;                                                // (CPF_Parm, CPF_IsPlainOldData)
	class Vector2D                                     PositionB;                                                // (CPF_Parm, CPF_IsPlainOldData)
	float                                              DottedLength;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DottedInterval;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                Tint;                                                     // (CPF_Parm, CPF_IsPlainOldData)
	bool                                               bAntiAlias;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.CastWeaponItem
struct UUiHelperFunctions_CastWeaponItem_Params
{
	TScriptInterface<class USlotInterface>             ItemSlot;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UWeaponItem*                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.CastEquipableItem
struct UUiHelperFunctions_CastEquipableItem_Params
{
	TScriptInterface<class USlotInterface>             ItemSlot;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UEquipableItem*                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.CastAttachableItem
struct UUiHelperFunctions_CastAttachableItem_Params
{
	TScriptInterface<class USlotInterface>             ItemSlot;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAttachableItem*                             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.UiHelperFunctions.CalculateWeightGaugeUpParamsByItem
struct UUiHelperFunctions_CalculateWeightGaugeUpParamsByItem_Params
{
	float                                              TotalMaxSpace;                                            // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CurrMaxSpace;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CurrSpace;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FocusedItemWeight;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              OutCurrMaxSpaceStart;                                     // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              OutCurrSpaceStart;                                        // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              OutFeedbackStart;                                         // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               OutIsPositive;                                            // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslMotoSeatActor.IsEntryAllowed
struct ATslMotoSeatActor_IsEntryAllowed_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslMotoSeatActor.HandleFlipAndKickstand
struct ATslMotoSeatActor_HandleFlipAndKickstand_Params
{
};

// Function TslGame.VivoxBaseComponent.UpdatePosition
struct UVivoxBaseComponent_UpdatePosition_Params
{
};

// Function TslGame.VivoxBaseComponent.SetVoiceChannelType
struct UVivoxBaseComponent_SetVoiceChannelType_Params
{
};

// Function TslGame.VivoxBaseComponent.SetParticipantMute
struct UVivoxBaseComponent_SetParticipantMute_Params
{
	struct FString                                     TargetUniqueId;                                           // (CPF_Parm, CPF_ZeroConstructor)
	bool                                               bIsMuted;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.VivoxBaseComponent.SetLocalVoiceOutputVolume
struct UVivoxBaseComponent_SetLocalVoiceOutputVolume_Params
{
	int                                                UserSettingVolume;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.VivoxBaseComponent.SetLocalVoiceOutputMuted
struct UVivoxBaseComponent_SetLocalVoiceOutputMuted_Params
{
	bool                                               bIsMuted;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.VivoxBaseComponent.SetLocalVoiceInputVolume
struct UVivoxBaseComponent_SetLocalVoiceInputVolume_Params
{
	int                                                UserSettingVolume;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.VivoxBaseComponent.SetLocalVoiceInputMuted
struct UVivoxBaseComponent_SetLocalVoiceInputMuted_Params
{
	bool                                               bIsMuted;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.VivoxBaseComponent.ServerLogin
struct UVivoxBaseComponent_ServerLogin_Params
{
};

// Function TslGame.VivoxBaseComponent.ServerJoinTeamChannel
struct UVivoxBaseComponent_ServerJoinTeamChannel_Params
{
};

// Function TslGame.VivoxBaseComponent.ServerJoinGlobalChannel
struct UVivoxBaseComponent_ServerJoinGlobalChannel_Params
{
};

// Function TslGame.VivoxBaseComponent.ResetTeamChannelJoinState
struct UVivoxBaseComponent_ResetTeamChannelJoinState_Params
{
};

// Function TslGame.VivoxBaseComponent.ResetLoginState
struct UVivoxBaseComponent_ResetLoginState_Params
{
};

// Function TslGame.VivoxBaseComponent.ResetGlobalChannelJoinState
struct UVivoxBaseComponent_ResetGlobalChannelJoinState_Params
{
};

// Function TslGame.VivoxBaseComponent.ResetConnectionState
struct UVivoxBaseComponent_ResetConnectionState_Params
{
};

// Function TslGame.VivoxBaseComponent.RefreshDevices
struct UVivoxBaseComponent_RefreshDevices_Params
{
};

// Function TslGame.VivoxBaseComponent.GetVoiceChannelType
struct UVivoxBaseComponent_GetVoiceChannelType_Params
{
};

// Function TslGame.VivoxBaseComponent.GetLocalVoiceOutputVolume
struct UVivoxBaseComponent_GetLocalVoiceOutputVolume_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.VivoxBaseComponent.GetLocalVoiceOutputMuted
struct UVivoxBaseComponent_GetLocalVoiceOutputMuted_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.VivoxBaseComponent.GetLocalVoiceInputVolume
struct UVivoxBaseComponent_GetLocalVoiceInputVolume_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.VivoxBaseComponent.GetLocalVoiceInputMuted
struct UVivoxBaseComponent_GetLocalVoiceInputMuted_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.VivoxBaseComponent.ClientLogin
struct UVivoxBaseComponent_ClientLogin_Params
{
	struct FString                                     AccessToken;                                              // (CPF_Parm, CPF_ZeroConstructor)
};

// Function TslGame.VivoxBaseComponent.ClientLeaveTeamChannel
struct UVivoxBaseComponent_ClientLeaveTeamChannel_Params
{
};

// Function TslGame.VivoxBaseComponent.ClientLeaveGlobalChannel
struct UVivoxBaseComponent_ClientLeaveGlobalChannel_Params
{
};

// Function TslGame.VivoxBaseComponent.ClientJoinTeamChannel
struct UVivoxBaseComponent_ClientJoinTeamChannel_Params
{
	struct FString                                     AccessToken;                                              // (CPF_Parm, CPF_ZeroConstructor)
};

// Function TslGame.VivoxBaseComponent.ClientJoinGlobalChannel
struct UVivoxBaseComponent_ClientJoinGlobalChannel_Params
{
	struct FString                                     AccessToken;                                              // (CPF_Parm, CPF_ZeroConstructor)
};

// Function TslGame.VivoxBaseComponent.CalculateOutputVolumeFromModifiers
struct UVivoxBaseComponent_CalculateOutputVolumeFromModifiers_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.VivoxBaseComponent.CalculateInputVolumeFromModifiers
struct UVivoxBaseComponent_CalculateInputVolumeFromModifiers_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.VivoxComponent.ServerTestAccessToken
struct UVivoxComponent_ServerTestAccessToken_Params
{
};

// Function TslGame.VivoxComponent.ServerSetObserverTeamNum
struct UVivoxComponent_ServerSetObserverTeamNum_Params
{
	int                                                NewTeamNum;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.VivoxComponent.ApplyTimedVolumeModifier
struct UVivoxComponent_ApplyTimedVolumeModifier_Params
{
	float                                              NewModifier;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Duration;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RestoreDuration;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.VivoxManager.OnRevokeKeySuccess
struct UVivoxManager_OnRevokeKeySuccess_Params
{
	class UVivoxResponse*                              Response;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.VivoxManager.OnRevokeKeyFail
struct UVivoxManager_OnRevokeKeyFail_Params
{
	class UVivoxResponse*                              Response;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.VivoxManager.OnChannelSuccess
struct UVivoxManager_OnChannelSuccess_Params
{
	class UVivoxResponse*                              Response;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.VivoxManager.OnChannelFail
struct UVivoxManager_OnChannelFail_Params
{
	class UVivoxResponse*                              Response;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.VivoxManager.OnAddKeySuccess
struct UVivoxManager_OnAddKeySuccess_Params
{
	class UVivoxResponse*                              Response;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.VivoxManager.OnAddKeyFail
struct UVivoxManager_OnAddKeyFail_Params
{
	class UVivoxResponse*                              Response;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.WeaponAnimInfoComponent.SetAccessorySlot
struct UWeaponAnimInfoComponent_SetAccessorySlot_Params
{
	class UTslAccessoryComponent*                      NewAccessoryComponent;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function TslGame.WeaponAnimInfoComponent.HasWeaponLeftHandIKSocket
struct UWeaponAnimInfoComponent_HasWeaponLeftHandIKSocket_Params
{
	class ATslWeapon*                                  Weapon;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.WeaponAnimInfoComponent.GetWeaponLeftHandIKTransform
struct UWeaponAnimInfoComponent_GetWeaponLeftHandIKTransform_Params
{
	class ATslWeapon*                                  Weapon;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.WeaponAnimInfoComponent.GetWeaponHandIK_Right
struct UWeaponAnimInfoComponent_GetWeaponHandIK_Right_Params
{
	class ATslWeapon*                                  Weapon;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.WeaponAnimInfoComponent.GetWeaponHandIK_Left
struct UWeaponAnimInfoComponent_GetWeaponHandIK_Left_Params
{
	class ATslWeapon*                                  Weapon;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.WeaponAnimInfoComponent.GetCurrentWeapon
struct UWeaponAnimInfoComponent_GetCurrentWeapon_Params
{
	class ATslWeapon*                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.WeaponAnimInfoComponent.GetAccessorySlot
struct UWeaponAnimInfoComponent_GetAccessorySlot_Params
{
	class UTslAccessoryComponent*                      ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function TslGame.WeaponClone.Update
struct UWeaponClone_Update_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
