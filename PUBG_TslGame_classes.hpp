#pragma once

// PLAYERUNKNOWN'S BATTLEGROUNDS (2.4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------

// Class TslGame.TslPopupInterface
// 0x0000 (0x0028 - 0x0028)
class UTslPopupInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslPopupInterface");
		return ptr;
	}


	void SetPopup(const struct FText& Message, const struct FScriptDelegate& PressedDelegate);
};


// Class TslGame.ActionInputEventHolder
// 0x0028 (0x0050 - 0x0028)
class UActionInputEventHolder : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ActionInputEventHolder");
		return ptr;
	}

};


// Class TslGame.TslBaseHUD
// 0x00B0 (0x0548 - 0x0498)
class ATslBaseHUD : public AHUD
{
public:
	class UClass*                                      MainUMGHudClass;                                          // 0x0498(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UAkAudioBank*>                        AutoLoadAudioBanks;                                       // 0x04A0(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x04B0(0x0008) MISSED OFFSET
	TArray<class UActionInputEventHolder*>             ActionInputEventHolderArray;                              // 0x04B8(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	TMap<struct FString, struct FTslWidgetState>       WidgetStateMap;                                           // 0x04C8(0x0050) (CPF_ZeroConstructor, CPF_Transient)
	class UUserWidget*                                 MainUMGHud;                                               // 0x0518(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	TArray<class UBlockInputUserWidget*>               BlockInputWidgetList;                                     // 0x0520(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient)
	TArray<struct FString>                             UseMouseWidgetStack;                                      // 0x0530(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient)
	unsigned char                                      IsTimelineMaximize : 1;                                   // 0x0540(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslBaseHUD");
		return ptr;
	}


	void WidgetToggle(const struct FString& WidgetName);
	void WidgetShow(const struct FString& WidgetName, class UObject* OptionalParam);
	void WidgetCreate(const struct FString& WidgetName, const struct FTslWidgetConfig& Config);
	void UpdateKillcamDisplayCode();
	void UnbindActionKeyDelegateEvent(const struct FName& ActionName, TEnumAsByte<EInputEvent> InputEvent);
	void ShowPopupDialog(const struct FString& PopupWidgetName, const struct FText& Message, const struct FScriptDelegate& PressedDelegate);
	void OnClickedKillcamPlay();
	bool IsWidgetShow(const struct FString& WidgetName);
	bool IsMouseUse();
	bool HideWidgetByEscape();
	void HidePopupDialog(const struct FString& PopupWidgetName);
	class UUserWidget* GetWidget(const struct FString& WidgetName);
	class UUserWidget* GetMainUMGHud();
	void GetLastKillcamDisplayCode();
	struct FText GetKillcamCountingText(const struct FText& InCountingTextFormat);
	void DestroyAllWidgets();
	void BindActionKeyDelegateEvent(const struct FName& ActionName, TEnumAsByte<EInputEvent> InputEvent, const struct FScriptDelegate& ActionKeyDelegate);
};


// Class TslGame.AirborneEjectionArea
// 0x0010 (0x03C0 - 0x03B0)
class AAirborneEjectionArea : public AActor
{
public:
	class USphereComponent*                            SphereComponent;                                          // 0x03B0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              Radius;                                                   // 0x03B8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.AirborneEjectionArea");
		return ptr;
	}

};


// Class TslGame.AnimDB
// 0x0148 (0x0178 - 0x0030)
class UAnimDB : public UDataAsset
{
public:
	struct FAnimInfo                                   Stand_Info;                                               // 0x0030(0x0068) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FAnimInfo                                   Crouch_Info;                                              // 0x0098(0x0068) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FAnimInfo                                   Prone_Info;                                               // 0x0100(0x0068) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              BlendSpaceSpeed_Walk;                                     // 0x0168(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              BlendSpaceSpeed_Run;                                      // 0x016C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              BlendSpaceSpeed_Sprint;                                   // 0x0170(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.AnimDB");
		return ptr;
	}


	class UBlendSpace* GetBlendSpaceRelaxed(TEnumAsByte<EAnimStanceType> AnimStance, bool bIsFPP);
	class UBlendSpace* GetBlendSpace(TEnumAsByte<EAnimStanceType> AnimStance, bool bIsFPP);
	float GetAnimSpeed(TEnumAsByte<EAnimStanceType> AnimStance, float Direction, float InSpeed, float* PlayRate, float* SprintAlpha);
};


// Class TslGame.AnimNotify_AkEvent_Advanced
// 0x0050 (0x0088 - 0x0038)
class UAnimNotify_AkEvent_Advanced : public UAnimNotify
{
public:
	class UAkAudioEvent*                               AkAudioEvent;                                             // 0x0038(0x0008) (CPF_Edit, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     EventName;                                                // 0x0040(0x0010) (CPF_Edit, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FName                                       AttachName;                                               // 0x0050(0x0008) (CPF_Edit, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     CustomRelativeLocation;                                   // 0x0058(0x000C) (CPF_Edit, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	unsigned char                                      bFollow : 1;                                              // 0x0064(0x0001) (CPF_Edit, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bUseMinActivationDistance : 1;                            // 0x0065(0x0001) (CPF_Edit, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bUseActivationDistanceByAttenuation : 1;                  // 0x0066(0x0001) (CPF_Edit, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinActivationDistance;                                    // 0x0068(0x0004) (CPF_Edit, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bPlayCameraShake : 1;                                     // 0x006C(0x0001) (CPF_Edit, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      CameraShake;                                              // 0x0070(0x0008) (CPF_Edit, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FName>                               AffectedCameras;                                          // 0x0078(0x0010) (CPF_Edit, CPF_BlueprintReadOnly, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.AnimNotify_AkEvent_Advanced");
		return ptr;
	}

};


// Class TslGame.AnimNotify_CharacterAnimationNotify
// 0x0008 (0x0040 - 0x0038)
class UAnimNotify_CharacterAnimationNotify : public UAnimNotify
{
public:
	struct FName                                       NotifyName;                                               // 0x0038(0x0008) (CPF_Edit, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.AnimNotify_CharacterAnimationNotify");
		return ptr;
	}

};


// Class TslGame.AnimNotify_UnarmedAttack
// 0x0008 (0x0040 - 0x0038)
class UAnimNotify_UnarmedAttack : public UAnimNotify
{
public:
	struct FName                                       NotifyName;                                               // 0x0038(0x0008) (CPF_Edit, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.AnimNotify_UnarmedAttack");
		return ptr;
	}

};


// Class TslGame.AnimNotify_WeaponAnimationNotify
// 0x0008 (0x0040 - 0x0038)
class UAnimNotify_WeaponAnimationNotify : public UAnimNotify
{
public:
	struct FName                                       NotifyName;                                               // 0x0038(0x0008) (CPF_Edit, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.AnimNotify_WeaponAnimationNotify");
		return ptr;
	}

};


// Class TslGame.AsyncStaticMeshComponent
// 0x0070 (0x0A50 - 0x09E0)
class UAsyncStaticMeshComponent : public UStaticMeshComponent
{
public:
	struct FScriptMulticastDelegate                    OnStaticMeshLoaded;                                       // 0x09E0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	TAssetPtr<class UStaticMesh>                       StaticMeshAsset;                                          // 0x09F0(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0A10(0x0008) MISSED OFFSET
	class UStaticMesh*                                 ErrorStaticMesh;                                          // 0x0A18(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       ClientCollisionProfileNameOverride;                       // 0x0A20(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TAssetPtr<class UStaticMesh>                       PendingStaticMeshAsset;                                   // 0x0A28(0x0020) (CPF_Transient)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0A48(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.AsyncStaticMeshComponent");
		return ptr;
	}


	void SetStaticMeshAsset(TAssetPtr<class UStaticMesh> Asset);
	bool IsSameMesh(TAssetPtr<class UStaticMesh> Asset);
	TAssetPtr<class UStaticMesh> GetStaticMeshAsset();
	void ClearStaticMeshAsset();
};


// Class TslGame.BluezoneInOutComponent
// 0x00E0 (0x02C0 - 0x01E0)
class UBluezoneInOutComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x01E0(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.BluezoneInOutComponent");
		return ptr;
	}

};


// Class TslGame.BluezoneInOutSoundEffectComponent
// 0x0010 (0x01F0 - 0x01E0)
class UBluezoneInOutSoundEffectComponent : public UActorComponent
{
public:
	class UAkAudioEvent*                               BluezoneInSoundAk;                                        // 0x01E0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               BluezoneOutSoundAk;                                       // 0x01E8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.BluezoneInOutSoundEffectComponent");
		return ptr;
	}

};


// Class TslGame.BTDecorator_HasLoSTo
// 0x0028 (0x0090 - 0x0068)
class UBTDecorator_HasLoSTo : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                      EnemyKey;                                                 // 0x0068(0x0028) (CPF_Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.BTDecorator_HasLoSTo");
		return ptr;
	}

};


// Class TslGame.BTTask_FindPointNearEnemy
// 0x0000 (0x0098 - 0x0098)
class UBTTask_FindPointNearEnemy : public UBTTask_BlackboardBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.BTTask_FindPointNearEnemy");
		return ptr;
	}

};


// Class TslGame.TslBuff
// 0x0060 (0x0410 - 0x03B0)
class ATslBuff : public AActor
{
public:
	struct FName                                       OverlapId;                                                // 0x03B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x03B8(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.TslBuff.OverlapSolveMethod
	float                                              BuffTickInterval;                                         // 0x03BC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              BuffTickFirstDelay;                                       // 0x03C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              BuffDuration;                                             // 0x03C4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      Infinite : 1;                                             // 0x03C8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       AttachSocket;                                             // 0x03D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      AttachServerPaticleClass;                                 // 0x03D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      IsDebuff : 1;                                             // 0x03E0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UBuffComponet*                               OwnerBuffComponent;                                       // 0x03E8(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x03F0(0x0010) MISSED OFFSET
	class ATslServerParticle*                          AttachedServerPaticle;                                    // 0x0400(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      bClientNotifyStartBuff : 1;                               // 0x040C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bClientNotifyStopBuff : 1;                                // 0x040D(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslBuff");
		return ptr;
	}


	void TickBuff();
	void StopBuffBlueprint(bool bCanceled);
	void StartBuffBlueprint();
	class APawn* GetOwnerPawn();
	class ATslCharacter* GetOwnerCharacter();
	struct FAttackId GetAttackId();
	bool CanApplyBuff();
};


// Class TslGame.BuffComponet
// 0x0010 (0x01F0 - 0x01E0)
class UBuffComponet : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x01E0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.BuffComponet");
		return ptr;
	}


	void RemoveBuff(const struct FName& OverlapId);
	class ATslBuff* FindBuffWithOverlapId(const struct FName& BuffOverlapId);
	class ATslBuff* AddBuff(class UClass* TslBuffClass);
};


// Class TslGame.CameraSettings
// 0x0070 (0x0098 - 0x0028)
class UCameraSettings : public UObject
{
public:
	float                                              CameraPitchMinStand;                                      // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              CameraPitchMaxStand;                                      // 0x002C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              CameraYawMinStand;                                        // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              CameraYawMaxStand;                                        // 0x0034(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              CameraPitchMinProne;                                      // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              CameraPitchMaxProne;                                      // 0x003C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              CameraYawMinProne;                                        // 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              CameraYawMaxProne;                                        // 0x0044(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              FPSShowOnHighScopingFOV;                                  // 0x0048(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              TPSShowOnHighScopingFOV;                                  // 0x004C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              CameraPitchMinInVehicle;                                  // 0x0050(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              CameraPitchMaxInVehicle;                                  // 0x0054(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              CameraYawMinInVehicle;                                    // 0x0058(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              CameraYawMaxInVehicle;                                    // 0x005C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	struct FName                                       HeadBoneName;                                             // 0x0060(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	TArray<struct FString>                             HideMaterialsWhenCameraIsInHead;                          // 0x0068(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	TArray<struct FString>                             HideMaterialsOnScopeMode;                                 // 0x0078(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	TArray<struct FString>                             HideMaterialsOnHighScopeMode;                             // 0x0088(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.CameraSettings");
		return ptr;
	}

};


// Class TslGame.CastableInterface
// 0x0000 (0x0028 - 0x0028)
class UCastableInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.CastableInterface");
		return ptr;
	}


	bool IsCastable(class ATslCharacter* Character);
	struct FText GetCastFailMessage(class ATslCharacter* Character);
	struct FCastConfig GetCastConfig();
};


// Class TslGame.TslWheelSuspensionAudioData
// 0x0050 (0x0080 - 0x0030)
class UTslWheelSuspensionAudioData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0030(0x0050) UNKNOWN PROPERTY: MapProperty TslGame.TslWheelSuspensionAudioData.LandingSoundSwitchesPerHorVelocity

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslWheelSuspensionAudioData");
		return ptr;
	}

};


// Class TslGame.CastComponent
// 0x0030 (0x0210 - 0x01E0)
class UCastComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01E0(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnCancelCast;                                             // 0x01E8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData01[0x18];                                      // 0x01F8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.CastComponent");
		return ptr;
	}


	bool StartCast(const TScriptInterface<class UCastableInterface>& CastableInterface);
	float GetTotalCastTime();
	float GetElapsedCastTime();
	void GetCastPriority();
	class UObject* GetCastObject();
	struct FText GetCastName();
	void GetCastLevel();
	void GetCastAnim();
	bool CancelCast();
};


// Class TslGame.CharacterBreathComponent
// 0x0090 (0x0270 - 0x01E0)
class UCharacterBreathComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01E0(0x0008) MISSED OFFSET
	float                                              Breath;                                                   // 0x01E8(0x0004) (CPF_Edit, CPF_Net, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	float                                              BreathMax;                                                // 0x01EC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector3D                                     BreathPointOffsetAtStand;                                 // 0x01F0(0x000C) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector3D                                     BreathPointOffsetAtCrouch;                                // 0x01FC(0x000C) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector3D                                     BreathPointOffsetAtProne;                                 // 0x0208(0x000C) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector3D                                     BreathPointOffsetAtGroggy;                                // 0x0214(0x000C) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      RestorationBuff;                                          // 0x0220(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      ApneaDebuff;                                              // 0x0228(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      HoldBreathDebuff;                                         // 0x0230(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MinimumBreathStartHoldingBreath;                          // 0x0238(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      SprintDebuff;                                             // 0x0240(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MinimumBreathStartSprinting;                              // 0x0248(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x24];                                      // 0x024C(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.CharacterBreathComponent");
		return ptr;
	}


	void OnRep_Breath(float LastBreath);
	bool IsInApnea();
	bool IsConsuming();
	float GetBreathRatio();
	float GetBreathMax();
	float GetBreath();
	bool CanStartSprinting();
	bool CanStartHoldingBreath();
	void AddBreath(float Value);
};


// Class TslGame.CharacterStudio
// 0x0090 (0x0440 - 0x03B0)
class ACharacterStudio : public AActor
{
public:
	class USpringArmComponent*                         SpringArmComponent;                                       // 0x03B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UCameraComponent*                            CameraComponent;                                          // 0x03B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class USceneCaptureComponent2D*                    SceneCaptureComponent;                                    // 0x03C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTextureRenderTarget2D*                      TextureTarget;                                            // 0x03C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bUseDynamicResolution : 1;                                // 0x03D0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MaxViewDistance;                                          // 0x03D4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      MaleCharacterProxyClass;                                  // 0x03D8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      FemaleCharacterProxyClass;                                // 0x03E0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x03E8(0x0008) MISSED OFFSET
	struct FTransform                                  CharacterInitialTransform;                                // 0x03F0(0x0030) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class ATslCharacterProxy*                          CharacterProxy;                                           // 0x0420(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class USceneComponent*                             CharacterRotationPivot;                                   // 0x0428(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    SceneCaptureMaterial;                                     // 0x0430(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0438(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.CharacterStudio");
		return ptr;
	}


	void Update();
	void SetSceneCaptureMaterial(class UMaterialInstanceDynamic* Mid);
	void SetCharacter(class ATslCharacter* Character);
	bool IsUsingDynamicResolution();
	bool IsCharacterValid();
	class UMaterialInstanceDynamic* GetSceneCaptureMaterial();
	class ATslCharacter* GetCharacter();
	void AddYaw(float Yaw);
};


// Class TslGame.CoherentCommonBinder
// 0x0078 (0x00A0 - 0x0028)
class UCoherentCommonBinder : public UObject
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0028(0x0060) MISSED OFFSET
	struct FString                                     DefaultLobbyUrl;                                          // 0x0088(0x0010) (CPF_ZeroConstructor, CPF_Config)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0098(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.CoherentCommonBinder");
		return ptr;
	}


	void Test();
	void OnWebPageOnPlatformFailed();
	void BindUI();
	void BindDelegate();
};


// Class TslGame.CoherentWidgetBinder
// 0x0010 (0x00B0 - 0x00A0)
class UCoherentWidgetBinder : public UCoherentCommonBinder
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00A0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.CoherentWidgetBinder");
		return ptr;
	}

};


// Class TslGame.LobbyCoherentWidgetBinder
// 0x0000 (0x00B0 - 0x00B0)
class ULobbyCoherentWidgetBinder : public UCoherentWidgetBinder
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.LobbyCoherentWidgetBinder");
		return ptr;
	}

};


// Class TslGame.TslBasePlayerController
// 0x0000 (0x06F0 - 0x06F0)
class ATslBasePlayerController : public APlayerController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslBasePlayerController");
		return ptr;
	}


	void HandleClipboard();
};


// Class TslGame.TslPlayerController
// 0x0450 (0x0B40 - 0x06F0)
class ATslPlayerController : public ATslBasePlayerController
{
public:
	struct FScriptMulticastDelegate                    OnShowReplayTimeline;                                     // 0x06F0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x148];                                     // 0x0700(0x0148) MISSED OFFSET
	unsigned char                                      bIsSpectated : 1;                                         // 0x0848(0x0001) (CPF_Net, CPF_Transient)
	class Vector3D                                     CameraPeekLeftMove;                                       // 0x084C(0x000C) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector3D                                     CameraPeekRightMove;                                      // 0x0858(0x000C) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0864(0x0010) MISSED OFFSET
	unsigned char                                      UnknownData02[0x1];                                       // 0x0864(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.TslPlayerController.CameraViewBehaviour
	unsigned char                                      UnknownData03[0xF];                                       // 0x0875(0x000F) MISSED OFFSET
	class Vector3D                                     SpectatorAccumViewRotation;                               // 0x0884(0x000C) (CPF_Net, CPF_Transient)
	unsigned char                                      UnknownData04[0x1];                                       // 0x0890(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.TslPlayerController.ObserverAuthorityType
	unsigned char                                      UnknownData05[0x37];                                      // 0x0891(0x0037) MISSED OFFSET
	class UActorComponent*                             InteractionTargetComponent;                               // 0x08C8(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	class ATslCharacter*                               SpectatorViewCharacter;                                   // 0x08D0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData06[0x10];                                      // 0x08D8(0x0010) MISSED OFFSET
	class ATslAchievement*                             Achievement;                                              // 0x08E8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMeshComponent*                              SpectatorScopeMesh;                                       // 0x08F0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData07[0x60];                                      // 0x08F8(0x0060) MISSED OFFSET
	TArray<struct FNearClippingLevelOverZ>             NearClippingLevelsOverZ;                                  // 0x0958(0x0010) (CPF_ZeroConstructor, CPF_Config)
	float                                              MaxValidPing;                                             // 0x0968(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              DefaultFOV;                                               // 0x096C(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              InteractGamepadHoldTime;                                  // 0x0970(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	class UVivoxComponent*                             VivoxComponent;                                           // 0x0978(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	TArray<class ATeam*>                               Teams;                                                    // 0x0980(0x0010) (CPF_Net, CPF_ZeroConstructor)
	TArray<TWeakObjectPtr<class ATslCharacter>>        ReplicateTeamMembers;                                     // 0x0990(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData08[0x50];                                      // 0x09A0(0x0050) MISSED OFFSET
	TArray<TWeakObjectPtr<class ATslCharacter>>        ReplicateCharacter;                                       // 0x09F0(0x0010) (CPF_ZeroConstructor)
	TArray<TWeakObjectPtr<class ACarePackageItem>>     ReplicateCarePackageItemList;                             // 0x0A00(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData09[0x20];                                      // 0x0A10(0x0020) MISSED OFFSET
	float                                              DeathResultDelaySeconds;                                  // 0x0A30(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData10[0xFC];                                      // 0x0A34(0x00FC) MISSED OFFSET
	unsigned char                                      bUseTPAntibotClient : 1;                                  // 0x0B30(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData11[0xF];                                       // 0x0B31(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslPlayerController");
		return ptr;
	}


	void UnreliablePong(int SeqID, int64_t DateTimeTickFromServer);
	void UnreliablePing(int SeqID, int64_t DateTimeTick);
	void ToggleInventory();
	void Suicide();
	void SimulateInputKey(const struct FKey& Key, bool bPressed);
	void ShowTslDebugInfomation();
	void ShowTeamDeathPopup();
	void ShowPlayerControllerBindActions_Admin();
	void ShowMatchResult();
	void ShowInGameMenu_Gamepad();
	void ShowInGameMenu();
	void ShowGotoLobbyPopUp();
	void SetDefaultFOV(float NewFOV);
	void SetCustomDepth(bool bOn);
	void SetCanSeeTerrainThroughFogInTheAir(bool bCanSee);
	void ServerViewTargetReplicateUpdate();
	void ServerTryInteractByComponent(class UActorComponent* TargetComponent);
	void ServerTryInteract(class AActor* TargetObject);
	void ServerSystemInfo(const struct FString& OsLanguage, const struct FString& GameLanguage, const struct FString& OsVersion, const struct FString& CpuName, const struct FString& GpuName, uint32_t RamInGB);
	void ServerSuicide();
	void ServerStopHoldRotation(const class Rotator& DeltaRotation, bool bUseInterp);
	void ServerStat(TEnumAsByte<EServerStatType> StatType, const struct FString& Password);
	void ServerStartInteractionByComponent(class UActorComponent* InteractionComponent);
	void ServerStartInteraction(class UInteractionComponent* InteractionComponent);
	void ServerStartHoldRotation(const class Rotator& Current);
	void ServerSpawnVehicle();
	void ServerSetViewTarget(class AActor* NewViewTarget);
	void ServerSetThirdPerson(bool bNewThirdPerson);
	void ServerSetIsReviving(bool InbIsReviving);
	void ServerSetControlRotation(const class Rotator& Rotation);
	void ServerSetClientFps(float Fps);
	void ServerSetAccumViewRotation(const class Vector3D& InAccumViewRotation);
	void ServerSendTPPacketReliable(TArray<unsigned char> Packet);
	void ServerSendPacketUnreliable(TArray<unsigned char> Packet);
	void ServerSendPacketReliable(TArray<unsigned char> Packet);
	void ServerSay(const struct FString& Msg);
	void ServerPickUpItemFromPackage(class UItem* Item, class AItemPackage* Package, const struct FName& TargetContainer, const struct FString& Options);
	void ServerPickUpDroppedItem(class UObject* DroppedItemObject, const struct FName& TargetContainer, const struct FString& Options);
	void ServerNotifyHitToGlassWindowInst(class UTslInstancedGlassWindowComponent* GlassWindowInstComponent, const struct FHitResult& Hit);
	void ServerNotifyHitToGlassWindow(class UTslGlassWindowComponent* GlassWindowComponent, const struct FHitResult& Hit);
	void ServerNextSetViewTarget(bool bIsPrev);
	void ServerMoveToVehicleSeat(int SeatIndex);
	void ServerMapLoadFinishedOnClient();
	void ServerLeaveMatchIntentionally();
	void ServerKickCharacter(class ATslCharacter* TslCharacter, const struct FText& Reason);
	void ServerCheat(const struct FString& Msg);
	void ServerCancelInteraction(class UActorComponent* InteractionComponent);
	void ServerBroadCastUpdateCameraInfo(bool InbFirstPerson, bool InbIsInVehicle, bool InbIsScoping);
	void ServerBroadCastCastingBar(float CastTime, const struct FText& CastName, bool OnOff);
	void ServerBEServerCommand(const struct FString& Command, const struct FString& Arg0, const struct FString& Arg1, const struct FString& Arg2);
	void ServerAdmin(const struct FString& AdminCommand);
	void SendSystemMessage(const struct FText& Message, float MessageDuration);
	void Say(const struct FString& Msg);
	void SaveGearProfile(int ProfileIndex, TArray<class UClass*> inArray);
	void ReliablePong(int SeqID, int64_t DateTimeTickFromServer);
	void ReliablePing(int SeqID, int64_t DateTimeTick);
	void OnShowCastingBarWidget(float CastTime, const struct FText& CastName, bool OnOff);
	void OnRep_Team();
	void OnRep_CameraViewBehaviour();
	void OnRep_bUseTPAntibotClient();
	void OnMoveToVehicleSeat(unsigned char idx);
	void OnItemStackCountHandlingMode();
	void OnFinishInteractionCast(class UObject* CastObject);
	void OnExecuteExitCommand();
	void OnClickedReportButton();
	void OnCancelInteractionCast(class UObject* CastObject);
	void OffItemStackCountHandlingMode();
	void ObserverTeleportTo(const class Vector3D& Location);
	void NextSetViewTarget();
	void KickCharacter(class ATslCharacter* TslCharacter, const struct FText& Reason);
	bool IsSpectatorState();
	bool IsSpectating();
	bool IsSameObservingCameraMode();
	bool IsReplayingKillcam();
	bool IsReplaying();
	bool IsObserving();
	bool IsItemStackCountHandlingMode();
	bool IsHighPing();
	bool IsGroggying();
	bool IsGamepadHoldProcessing();
	bool IsGameInputAllowed();
	void HideTslDebugInfomation();
	void HideMatchResult();
	class UVivoxComponent* GetVivoxComponent();
	class ATslCharacter* GetViewTargetTslCharacter();
	class ATeam* GetViewTargetTeam();
	TArray<struct FTslPlayerMatchResultInfo> GetTslZombieMatchResultInfos();
	TArray<struct FTslPlayerMatchResultInfo> GetTslPlayerMatchResultInfos();
	TArray<struct FTslPlayerMatchResultInfo> GetTslHumanMatchResultInfos();
	class ATslCharacter* GetTslCharacter();
	int GetTeamOverallKillCountAtObserving();
	int GetTeamMemberCount();
	class Rotator GetTargetViewRotation();
	struct FString GetSpectatingPlayerName();
	TArray<class ATslCharacter*> GetReplicateTeamMembers();
	TArray<class ATslCharacter*> GetReplicateCharacters();
	TArray<class ACarePackageItem*> GetReplicateCarePackageItems();
	float GetOtherElapsedCastTime();
	float GetOtherCastTime();
	struct FText GetOtherCastingName();
	void GetObserverCameraMode();
	void GetObserverAuthorityType();
	struct FString GetKillerName();
	struct FText GetHudDebugText();
	TArray<class UClass*> GetGearProfile(int ProfileIndex);
	float GetCurrentHoldProgressRate();
	TArray<class ATeam*> GetClientTeam(bool IncludeSelf);
	bool GetCanAllSpectate();
	int GetAliveTeamMemberCount();
	void DumpActorDetailByRaycast();
	void DropItem(const struct FString& ItemTypeName);
	bool CompleteReportKiller();
	void ClientWasWarnedTobeKicked(const struct FText& KickReason);
	void ClientWasKickedAndExit(const struct FText& KickReason);
	void ClientUpdateSpectatorCameraMode(const struct FName& InCameraName, bool InbFirstPerson, bool InbIsInVehicle, bool InbIsScoping);
	void ClientStartOnlineGame();
	void ClientShowMatchResult();
	void ClientShowCastingBar(float CastTime, const struct FText& CastName, bool OnOff);
	void ClientSetTslPlayerMatchResultInfos(TArray<struct FTslPlayerMatchResultInfo> InTslPlayerMatchResultInfos);
	void ClientSetCanAllSpectate(bool InbCanSpectate);
	void ClientSendTPPacketReliable(TArray<unsigned char> Packet);
	void ClientSendRoundEndEvent(bool bIsWinner, int ExpendedTimeInSeconds);
	void ClientSendPacketUnreliable(TArray<unsigned char> Packet);
	void ClientSendPacketReliable(TArray<unsigned char> Packet);
	void ClientOnCharacterRestart();
	void ClientOnCharacterDeath(bool bIsTeamMatch, bool bHasAliveTeamMember, const struct FTslReportUserInfo& InKillerInfo, bool InbCanReport);
	void ClientNotifyStartBuff(const struct FName& BuffName, bool bStart);
	void ClientNotifySpeedBoost(float Boost);
	void ClientNotifyRestrictingPlayArea();
	void ClientNotifyPlayerEndWithoutHitInfo(int Ranking, const struct FTslPlayerStatistics& Statistics, const struct FTslPlayerStatisticsForOwner& StatisticsForOwner);
	void ClientNotifyPlayerEnd(int Ranking, const struct FTslPlayerStatistics& Statistics, const struct FTslPlayerStatisticsForOwner& StatisticsForOwner, const struct FTakeHitInfo& LastTakeHitInfo);
	void ClientNotifyNextGasIn(const class Vector3D& PoisonGasWarningPosition, float PoisonGasWarningRadius);
	void ClientNotifyHealAmount_Unreliable(float Heal);
	void ClientNotifyHealAmount_Reliable(float Heal);
	void ClientNotifyHealAmount(float Heal);
	void ClientNotifyHeal_Unreliable(float HealthStart, float Health, float MaxHealth);
	void ClientNotifyHeal_Reliable(float HealthStart, float Health, float MaxHealth);
	void ClientNotifyHeal(float HealthStart, float Health, float MaxHealth);
	void ClientInteractByComponent(class UActorComponent* TargetComponent);
	void ClientInteract(class AActor* TargetObject);
	void ClientGameStarted();
	void ClientEndOnlineGame();
	void ClientAdminCopyString(const struct FString& inString);
	void Cheat_ServerSpawnVehicle(int VehicleIndex);
	bool CanSeeTerrainThroughFogInTheAir();
	bool CanReport();
	void BP_Test_SpawnVehicle(int VehicleIndex);
	void BEServer(const struct FString& Command, const struct FString& Arg0, const struct FString& Arg1, const struct FString& Arg2);
	void BEClient(const struct FString& Command);
	void Admin(const struct FString& ServerAdminCommand);
};


// Class TslGame.ConnectionHandlerInterface
// 0x0000 (0x0028 - 0x0028)
class UConnectionHandlerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ConnectionHandlerInterface");
		return ptr;
	}

};


// Class TslGame.ConsoleCommandExecutor
// 0x0000 (0x03B0 - 0x03B0)
class AConsoleCommandExecutor : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ConsoleCommandExecutor");
		return ptr;
	}


	void ExecuteConsoleCommands(TArray<struct FString> Commands);
};


// Class TslGame.DeployedItem
// 0x0018 (0x03C8 - 0x03B0)
class ADeployedItem : public AActor
{
public:
	class UClass*                                      ItemType;                                                 // 0x03B0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                StackCount;                                               // 0x03B8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USceneComponent*                             SceneComponent;                                           // 0x03C0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.DeployedItem");
		return ptr;
	}

};


// Class TslGame.SubActor
// 0x0008 (0x03B8 - 0x03B0)
class ASubActor : public AActor
{
public:
	class ATslCharacter*                               NetOwnerCharacter;                                        // 0x03B0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.SubActor");
		return ptr;
	}

};


// Class TslGame.SlotInterface
// 0x0000 (0x0028 - 0x0028)
class USlotInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.SlotInterface");
		return ptr;
	}


	bool IsWeapon();
	bool IsStackable();
	bool IsPackageItem();
	bool IsEquipable();
	bool IsCastableItem();
	bool IsAttachment();
	float GetUnitSpace();
	class UTexture* GetToolTipIconTexture();
	float GetToolTipIconSizeRatio();
	int GetStackCountMax();
	int GetStackCount();
	float GetSpace();
	int GetSortPriority();
	struct FText GetSlotName();
	struct FText GetSlotDetailedName();
	struct FText GetSlotDescription();
	struct FText GetSlotCategory();
	class UTexture* GetIconTexture();
	float GetIconSizeRatio();
	class UAkAudioEvent* GetDropSound();
};


// Class TslGame.SlotContainerInterface
// 0x0000 (0x0028 - 0x0028)
class USlotContainerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.SlotContainerInterface");
		return ptr;
	}


	void ShowSlotContextMenu(const TScriptInterface<class USlotInterface>& Slot);
	bool IsEnableAction(const TScriptInterface<class USlotInterface>& Slot, const TScriptInterface<class USlotContainerInterface>& OtherContainer, const struct FString& Options);
	void HideSlotContextMenu();
	TScriptInterface<class USlotInterface> GetSlotContext();
	class AActor* GetSlotContainerOwner();
	struct FName GetSlotContainerName();
	struct FName GetDefaultActionName(const TScriptInterface<class USlotInterface>& Slot);
	TArray<struct FName> GetAvailableSlotActions(const TScriptInterface<class USlotInterface>& Slot);
	TArray<TScriptInterface<class USlotInterface>> GetAllSlots();
	struct FName GetActionName(const TScriptInterface<class USlotInterface>& Slot, const TScriptInterface<class USlotContainerInterface>& OtherContainer, const struct FString& Options);
	void DropSlotOnOtherContainer(const TScriptInterface<class USlotInterface>& Slot, const TScriptInterface<class USlotContainerInterface>& OtherContainer, const struct FString& Options);
	void DoSlotActionDefault(const TScriptInterface<class USlotInterface>& Slot);
	void DoSlotAction(const struct FName& ActionName, const struct FString& Options);
	void DoActionWithSlot(const TScriptInterface<class USlotInterface>& Slot, const struct FName& ActionName, const struct FString& Options);
};


// Class TslGame.ItemSlotContainer
// 0x0030 (0x03E8 - 0x03B8)
class AItemSlotContainer : public ASubActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03B8(0x0008) MISSED OFFSET
	struct FScriptDelegate                             OnCreateAndShowContextMenuWidget;                         // 0x03C0(0x0014) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference)
	struct FScriptDelegate                             OnDestroyContextMenuWidget;                               // 0x03D0(0x0014) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference)
	unsigned char                                      UnknownData01[0x8];                                       // 0x03E0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ItemSlotContainer");
		return ptr;
	}

};


// Class TslGame.ItemExplorerInterface
// 0x0000 (0x0028 - 0x0028)
class UItemExplorerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ItemExplorerInterface");
		return ptr;
	}


	void UpdateItemList();
	TArray<TScriptInterface<class USlotInterface>> GetExplorableItemSlotList();
};


// Class TslGame.ItemExplorer
// 0x0030 (0x0418 - 0x03E8)
class AItemExplorer : public AItemSlotContainer
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03E8(0x0008) MISSED OFFSET
	struct FScriptDelegate                             OnUpdateItemList;                                         // 0x03F0(0x0014) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference)
	struct FScriptDelegate                             OnClearItemList;                                          // 0x0400(0x0014) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0410(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ItemExplorer");
		return ptr;
	}

};


// Class TslGame.ExplorableItemInterface
// 0x0000 (0x0028 - 0x0028)
class UExplorableItemInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ExplorableItemInterface");
		return ptr;
	}


	bool IsValidExplorableItem();
	struct FName GetInteractiveActionName();
	float GetExplorationDistance();
};


// Class TslGame.Item
// 0x0198 (0x01C0 - 0x0028)
class UItem : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
	unsigned char                                      bStackable : 1;                                           // 0x0038(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	unsigned char                                      bUsable : 1;                                              // 0x0038(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	unsigned char                                      bIsConsumable : 1;                                        // 0x0038(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	unsigned char                                      bDisableSpawnInGame : 1;                                  // 0x0038(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	int                                                StackCount;                                               // 0x003C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       ItemName;                                                 // 0x0040(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FText                                       ItemCategory;                                             // 0x0058(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FText                                       ItemDetailedName;                                         // 0x0070(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FText                                       ItemDescription;                                          // 0x0088(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	float                                              ItemMaxInteractableDistance;                              // 0x00A0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                StackCountMax;                                            // 0x00A4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SpacePerItem;                                             // 0x00A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TAssetPtr<class UStaticMesh>                       DroppedMesh;                                              // 0x00B0(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	float                                              DroppedMeshScale;                                         // 0x00D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TAssetPtr<class UTexture>                          Icon;                                                     // 0x00D8(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	TAssetPtr<class UTexture>                          ToolTipIcon;                                              // 0x00F8(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	float                                              IconSizeRatio;                                            // 0x0118(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ToolTipIconSizeRatio;                                     // 0x011C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               DropSoundAk;                                              // 0x0120(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               PickUpSoundAk;                                            // 0x0128(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               InventoryPutSoundAk;                                      // 0x0130(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                SortPriority;                                             // 0x0138(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                LobbyItemID;                                              // 0x013C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FLobbyItemDesc                              LobbyItemDesc;                                            // 0x0140(0x0058) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0198(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.Item.Category
	struct FName                                       SubCategory;                                              // 0x01A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bIsToy : 1;                                               // 0x01A8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FString                                     Note;                                                     // 0x01B0(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.Item");
		return ptr;
	}


	bool UseBy(class ATslCharacter* Character);
	bool PickUpBy(class ATslCharacter* Character, const struct FName& TargetContainer, const struct FString& Options);
	bool IsWeapon();
	bool IsToy();
	bool IsPackageItem();
	bool IsEquipable();
	bool IsCastableItem();
	bool IsAttachment();
	class UTexture* GetIconTexture();
};


// Class TslGame.ItemPackage
// 0x00F8 (0x0510 - 0x0418)
class AItemPackage : public AItemExplorer
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0418(0x0010) MISSED OFFSET
	struct FText                                       PackageName;                                              // 0x0428(0x0018) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FText                                       PackageCategory;                                          // 0x0440(0x0018) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FText                                       PackageDetailedName;                                      // 0x0458(0x0018) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FText                                       PackageDescription;                                       // 0x0470(0x0018) (CPF_Edit, CPF_DisableEditOnInstance)
	class UTexture*                                    PackageIcon;                                              // 0x0488(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PackageIconSizeRatio;                                     // 0x0490(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UTexture*                                    PackageToolTipIcon;                                       // 0x0498(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PackageToolTipIconSizeRatio;                              // 0x04A0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TAssetPtr<class UStaticMesh>                       PackageMesh;                                              // 0x04A8(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	class UBoxComponent*                               BoxComponent;                                             // 0x04C8(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UOnceInteractionComponent*                   InteractionComponent;                                     // 0x04D0(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      DestroyByEmptyItem : 1;                                   // 0x04D8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<class UItem*>                               Items;                                                    // 0x04E0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_EditConst)
	struct FString                                     CreatorName;                                              // 0x04F0(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor)
	int                                                SortPriority;                                             // 0x0500(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0504(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ItemPackage");
		return ptr;
	}


	void Items_RepNotify();
	bool IsOpenedBy(class ATslCharacter* Character);
	void ClientOnInteractBy(class ATslCharacter* OtherCharacter);
	bool AllowInteract(class ATslCharacter* OtherCharacter);
};


// Class TslGame.DeployedItemPackage
// 0x0018 (0x03C8 - 0x03B0)
class ADeployedItemPackage : public AActor
{
public:
	class UClass*                                      ItemPackageType;                                          // 0x03B0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FPackagedItemInfo>                   ItemInfos;                                                // 0x03B8(0x0010) (CPF_Edit, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.DeployedItemPackage");
		return ptr;
	}

};


// Class TslGame.DoorDataAsset
// 0x0038 (0x0068 - 0x0030)
class UDoorDataAsset : public UDataAsset
{
public:
	float                                              OpenAngle;                                                // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveFloat*                                 OpenCurve;                                                // 0x0038(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              OpenCurveDuration;                                        // 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveFloat*                                 CloseCurve;                                               // 0x0048(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CloseCurveDuration;                                       // 0x0050(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               OpenSound;                                                // 0x0058(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               CloseSound;                                               // 0x0060(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.DoorDataAsset");
		return ptr;
	}

};


// Class TslGame.TslReactionDoorData
// 0x0040 (0x0070 - 0x0030)
class UTslReactionDoorData : public UDataAsset
{
public:
	float                                              PointDamageImpulse;                                       // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PointDamageRadius;                                        // 0x0034(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BreakingRadius;                                           // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BreakingImpulse;                                          // 0x003C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BreakingMinDamage;                                        // 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DamageAccumulateTimeout;                                  // 0x0044(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ZombieDamageAccumulateTimeout;                            // 0x0048(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       TopImpactSoketName;                                       // 0x0050(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       CenterImpactSoketName;                                    // 0x0058(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       BottomImpactSoketName;                                    // 0x0060(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               DestructibleSoundAk;                                      // 0x0068(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslReactionDoorData");
		return ptr;
	}

};


// Class TslGame.DoorFrameComponent
// 0x0070 (0x0A50 - 0x09E0)
class UDoorFrameComponent : public UStaticMeshComponent
{
public:
	struct FTransform                                  DoorTransform;                                            // 0x09E0(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	class Vector3D                                     SoundOffsetFromDoor;                                      // 0x0A10(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	class UStaticMesh*                                 DoorStaticMesh;                                           // 0x0A20(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDestructibleMesh*                           DoorDestructibleMesh;                                     // 0x0A28(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDoorDataAsset*                              DoorDataAsset;                                            // 0x0A30(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTslReactionDoorData*                        ReactionDoorData;                                         // 0x0A38(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bDisableSubComponents : 1;                                // 0x0A40(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0A41(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.DoorFrameComponent");
		return ptr;
	}


	class UStaticMesh* GetDoorStaticMesh();
	void DisableSubComponents(bool bDisable);
};


// Class TslGame.DroppedItem
// 0x0008 (0x03B8 - 0x03B0)
class ADroppedItem : public AActor
{
public:
	class UItem*                                       Item;                                                     // 0x03B0(0x0008) (CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.DroppedItem");
		return ptr;
	}


	void Item_RepNotify();
};


// Class TslGame.DroppedItemGridManager
// 0x00B0 (0x0460 - 0x03B0)
class ADroppedItemGridManager : public AInfo
{
public:
	float                                              MaxGridSize;                                              // 0x03B0(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	int                                                MaxGridLayerNum;                                          // 0x03B4(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	int                                                MaxItemNumPerGroup;                                       // 0x03B8(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xA4];                                      // 0x03BC(0x00A4) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.DroppedItemGridManager");
		return ptr;
	}

};


// Class TslGame.DroppedItemGroup
// 0x0010 (0x03C0 - 0x03B0)
class ADroppedItemGroup : public AActor
{
public:
	float                                              RandomSpawnRadius;                                        // 0x03B4(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	int                                                MaxRandomSpawnCount;                                      // 0x03B8(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.DroppedItemGroup");
		return ptr;
	}


	void OnItemEndPlay();
	void OnItemBeginPlay();
	bool AddItem(class UItem* NewItem, const class Vector3D& NewWorldLocation);
};


// Class TslGame.DroppedItemInterface
// 0x0000 (0x0028 - 0x0028)
class UDroppedItemInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.DroppedItemInterface");
		return ptr;
	}


	class UItem* GetDroppedItem();
};


// Class TslGame.ExportableDataAsset
// 0x0020 (0x0050 - 0x0030)
class UExportableDataAsset : public UDataAsset
{
public:
	struct FDirectoryPath                              JsonSaveDirectory;                                        // 0x0030(0x0010) (CPF_Edit)
	struct FString                                     JsonSaveFileName;                                         // 0x0040(0x0010) (CPF_Edit, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ExportableDataAsset");
		return ptr;
	}

};


// Class TslGame.LobbyCustomizableData
// 0x0020 (0x0070 - 0x0050)
class ULobbyCustomizableData : public UExportableDataAsset
{
public:
	TArray<struct FLobbyFaceElement>                   Faces;                                                    // 0x0050(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FLobbyHairElement>                   Hairs;                                                    // 0x0060(0x0010) (CPF_Edit, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.LobbyCustomizableData");
		return ptr;
	}

};


// Class TslGame.LobbyItemExporter
// 0x0010 (0x0060 - 0x0050)
class ULobbyItemExporter : public UExportableDataAsset
{
public:
	struct FString                                     LocJsonSaveFileName;                                      // 0x0050(0x0010) (CPF_Edit, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.LobbyItemExporter");
		return ptr;
	}

};


// Class TslGame.FlashBangCaptureActor
// 0x0030 (0x03E0 - 0x03B0)
class AFlashBangCaptureActor : public AActor
{
public:
	class USceneComponent*                             SceneRootComponent;                                       // 0x03B0(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class USceneCaptureComponent2D*                    SceneCapture;                                             // 0x03B8(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class APawn*                                       PlayerPawnReference;                                      // 0x03C0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_IsPlainOldData)
	class UTextureRenderTarget2D*                      CaptureTexture;                                           // 0x03C8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x03D0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.FlashBangCaptureActor");
		return ptr;
	}


	void CaptureScreen();
	void CaptureINIT(bool bDoDelay, float CaptureDelay, class APawn* PlayerRef, class UTextureRenderTarget2D* RenderTexture, const struct FPostProcessSettings& PP_Settings, bool bHidePawn);
};


// Class TslGame.GameEventObserver
// 0x0050 (0x0078 - 0x0028)
class UGameEventObserver : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnMatchStarted;                                           // 0x0028(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference)
	struct FScriptMulticastDelegate                    OnMatchEnded;                                             // 0x0038(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference)
	struct FScriptMulticastDelegate                    OnKillOtherPlayer;                                        // 0x0048(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference)
	struct FScriptMulticastDelegate                    OnDie;                                                    // 0x0058(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference)
	struct FScriptMulticastDelegate                    OnDamage;                                                 // 0x0068(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.GameEventObserver");
		return ptr;
	}

};


// Class TslGame.GamePadInputAixsComponent
// 0x0020 (0x0200 - 0x01E0)
class UGamePadInputAixsComponent : public UActorComponent
{
public:
	float                                              YawAccelPct;                                              // 0x01E4(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PitchAccelPct;                                            // 0x01E8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LastYawAccelDir;                                          // 0x01EC(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LastPitchAccelDir;                                        // 0x01F0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LastYawInput;                                             // 0x01F4(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LastPitchInput;                                           // 0x01F8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.GamePadInputAixsComponent");
		return ptr;
	}

};


// Class TslGame.GameStateListenerComponent
// 0x0020 (0x0200 - 0x01E0)
class UGameStateListenerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01E0(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnGameModeEvent;                                          // 0x01E8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData01[0x8];                                       // 0x01F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.GameStateListenerComponent");
		return ptr;
	}

};


// Class TslGame.GeneralItemSpawner
// 0x0000 (0x0028 - 0x0028)
class UGeneralItemSpawner : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.GeneralItemSpawner");
		return ptr;
	}


	TArray<class UItem*> CreateItems();
	TArray<struct FItemInitiator> CreateItemInitiators();
};


// Class TslGame.TableGeneralItemSpawner
// 0x00C0 (0x00E8 - 0x0028)
class UTableGeneralItemSpawner : public UGeneralItemSpawner
{
public:
	class UDataTable*                                  RawItemSpawnDataTable;                                    // 0x0028(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UDataTable*                                  RawItemSpawnTogetherDataTable;                            // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<struct FGeneralItemSpawnProb>               SpawnProbArray;                                           // 0x0038(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0048(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TableGeneralItemSpawner");
		return ptr;
	}

};


// Class TslGame.HackReporterComponent
// 0x01B0 (0x0390 - 0x01E0)
class UHackReporterComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x1B0];                                     // 0x01E0(0x01B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.HackReporterComponent");
		return ptr;
	}


	void ServerOnWallHackDetected(class ATslCharacter* Victim, float Distance);
};


// Class TslGame.HighlightSession
// 0x0070 (0x0098 - 0x0028)
class UHighlightSession : public UObject
{
public:
	struct FHighlightRecordConfig                      Config_Kill;                                              // 0x0028(0x000C) (CPF_Config)
	struct FHighlightRecordConfig                      Config_KillGroggy;                                        // 0x0034(0x000C) (CPF_Config)
	struct FHighlightRecordConfig                      Config_Die;                                               // 0x0040(0x000C) (CPF_Config)
	struct FHighlightRecordConfig                      Config_DieGroggy;                                         // 0x004C(0x000C) (CPF_Config)
	struct FHighlightRecordConfig                      Config_EndMatch;                                          // 0x0058(0x000C) (CPF_Config)
	class UTslGameInstance*                            TslGameInstance;                                          // 0x0068(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0070(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.HighlightSession");
		return ptr;
	}


	void RecordRemainEvents();
	void MatchEnded();
	void KillOtherPlayer(bool bGroggy);
	void Die(bool bGroggy);
};


// Class TslGame.InteractionInterface
// 0x0000 (0x0028 - 0x0028)
class UInteractionInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.InteractionInterface");
		return ptr;
	}


	struct FText GetInteractiveObjectName();
	struct FText GetInteractionVerb();
	bool AllowInteractBy(class ATslCharacter* Character);
};


// Class TslGame.InteractionComponent
// 0x0180 (0x0360 - 0x01E0)
class UInteractionComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01E0(0x0008) MISSED OFFSET
	float                                              MaxInteractableDistance;                                  // 0x01E8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FText                                       InteractionVerb;                                          // 0x01F0(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FText                                       InteractiveObjectName;                                    // 0x0208(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FCastConfig                                 CastConfig;                                               // 0x0220(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	unsigned char                                      bUseTraceCheck : 1;                                       // 0x0258(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FScriptMulticastDelegate                    OnInteractBy;                                             // 0x0260(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    ClientOnInteractBy;                                       // 0x0270(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData01[0xE0];                                      // 0x0280(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.InteractionComponent");
		return ptr;
	}


	struct FText GetInteractiveObjectName();
	struct FText GetInteractionVerb();
	bool AllowInteractBy(class ATslCharacter* Character);
};


// Class TslGame.DoublePhaseInteractionComponent
// 0x00D0 (0x0430 - 0x0360)
class UDoublePhaseInteractionComponent : public UInteractionComponent
{
public:
	struct FText                                       FirstInteractionVerb;                                     // 0x0360(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FText                                       FirstInteractiveObjectName;                               // 0x0378(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FText                                       SecondInteractionVerb;                                    // 0x0390(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FText                                       SecondInteractiveObjectName;                              // 0x03A8(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnSecondInteractBy;                                       // 0x03C0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    ClientOnSecondInteractBy;                                 // 0x03D0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x50];                                      // 0x03E0(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.DoublePhaseInteractionComponent");
		return ptr;
	}

};


// Class TslGame.DroppedItemActorComponent
// 0x0020 (0x0380 - 0x0360)
class UDroppedItemActorComponent : public UInteractionComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0360(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.DroppedItemActorComponent");
		return ptr;
	}


	void OnInteractDelegate(class ATslCharacter* OtherCharacter);
	bool AllowInteractDelegate(class ATslCharacter* OtherCharacter);
};


// Class TslGame.OnceInteractionComponent
// 0x0010 (0x0370 - 0x0360)
class UOnceInteractionComponent : public UInteractionComponent
{
public:
	TArray<struct FName>                               CharacterHistory;                                         // 0x0360(0x0010) (CPF_Net, CPF_ZeroConstructor, CPF_Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.OnceInteractionComponent");
		return ptr;
	}

};


// Class TslGame.InteractorComponent
// 0x0000 (0x01E0 - 0x01E0)
class UInteractorComponent : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.InteractorComponent");
		return ptr;
	}

};


// Class TslGame.AmmoItem
// 0x0010 (0x01D0 - 0x01C0)
class UAmmoItem : public UItem
{
public:
	class UTexture*                                    AmmoIcon;                                                 // 0x01C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AmmoIconRatio;                                            // 0x01C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.AmmoItem");
		return ptr;
	}

};


// Class TslGame.AttachableItem
// 0x0230 (0x03F0 - 0x01C0)
class UAttachableItem : public UItem
{
public:
	struct FWeaponAttachmentData                       AttachmentData;                                           // 0x01C0(0x01F0) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	TAssetPtr<class UStaticMesh>                       AttachmentMeshAsset;                                      // 0x03B0(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	TArray<struct FWeaponAttachmentWeaponTagData>      AttachmentWeaponTagData;                                  // 0x03D0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	unsigned char                                      EquipOnPickUp : 1;                                        // 0x03E0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               AttachedSoundAk;                                          // 0x03E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.AttachableItem");
		return ptr;
	}


	void GetAttachmentSlotID(const struct FName& WeaponTag);
	struct FWeaponAttachmentData GetAttachmentData(const struct FName& WeaponTag);
};


// Class TslGame.CastableItem
// 0x0040 (0x0200 - 0x01C0)
class UCastableItem : public UItem
{
public:
	struct FCastConfig                                 CastConfig;                                               // 0x01C0(0x0038) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      bCanUseInWater : 1;                                       // 0x01F8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x01F9(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.CastableItem.CastableItemType

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.CastableItem");
		return ptr;
	}

};


// Class TslGame.HealItem
// 0x0000 (0x0200 - 0x0200)
class UHealItem : public UCastableItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.HealItem");
		return ptr;
	}


	float GetHealLimit(class ATslCharacter* TslCharacter);
};


// Class TslGame.HealOverTimeItem
// 0x0008 (0x0208 - 0x0200)
class UHealOverTimeItem : public UHealItem
{
public:
	class UClass*                                      HealOverTimeBuffClass;                                    // 0x0200(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.HealOverTimeItem");
		return ptr;
	}

};


// Class TslGame.InstantHealItem
// 0x0008 (0x0208 - 0x0200)
class UInstantHealItem : public UHealItem
{
public:
	float                                              HealLimit;                                                // 0x0200(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.InstantHealItem");
		return ptr;
	}

};


// Class TslGame.SkinItem
// 0x0028 (0x0228 - 0x0200)
class USkinItem : public UCastableItem
{
public:
	struct FSkinData                                   SkinData;                                                 // 0x0200(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	unsigned char                                      bAutoAction : 1;                                          // 0x0220(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.SkinItem");
		return ptr;
	}


	bool CheckSkin(const TScriptInterface<class USkinnableInterface>& SkinnableInterface);
	bool ApplySkin(const TScriptInterface<class USkinnableInterface>& SkinnableInterface);
};


// Class TslGame.EquipableItem
// 0x00B8 (0x0278 - 0x01C0)
class UEquipableItem : public UItem
{
public:
	unsigned char                                      UnknownData00[0x1];                                       // 0x01C0(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.EquipableItem.EquipSlotID
	float                                              SpaceExtension;                                           // 0x01C4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DamageReductionRate;                                      // 0x01C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DurabilityMax;                                            // 0x01CC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      DestroyByDurability : 1;                                  // 0x01D0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Durability;                                               // 0x01D4(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x01D8(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.EquipableItem.DurabilityConsumeType
	struct FCustomizableObjectIdentifier               CustomizableObjectIdentifierForMale;                      // 0x01E0(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FCustomizableObjectIdentifier               CustomizableObjectIdentifierForFemale;                    // 0x0210(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	class UAkAudioEvent*                               EquipedSoundAk;                                           // 0x0240(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0248(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.EquipableItem.SoundGroup
	unsigned char                                      UnknownData03[0x1];                                       // 0x0249(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.EquipableItem.SoundType
	unsigned char                                      bCanZombieEquip : 1;                                      // 0x024A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x024B(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.EquipableItem.SlotOffsetType
	unsigned char                                      bIsUnequipable : 1;                                       // 0x024C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TAssetPtr<class UTexture>                          HudDisplayEquipIcon;                                      // 0x0250(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData05[0x8];                                       // 0x0270(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.EquipableItem");
		return ptr;
	}


	void UnequipBy(class ATslCharacter* Character);
	bool EquipBy(class ATslCharacter* Character, const struct FEquipPosition& Position);
	bool CanEquipTo(class ATslCharacter* Character);
};


// Class TslGame.CustomEquipableItem
// 0x00F8 (0x0370 - 0x0278)
class UCustomEquipableItem : public UEquipableItem
{
public:
	int                                                ItemLevel;                                                // 0x0278(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FTransform                                  SlotOffset_Primary;                                       // 0x0280(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FTransform                                  SlotOffset_Secondary;                                     // 0x02B0(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FTransform                                  SlotOffset_SideArm;                                       // 0x02E0(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FTransform                                  SlotOffset_Melee;                                         // 0x0310(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FTransform                                  SlotOffset_Thrown;                                        // 0x0340(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.CustomEquipableItem");
		return ptr;
	}


	struct FTransform GetOffset_Thrown();
	struct FTransform GetOffset_SideArm();
	struct FTransform GetOffset_Secondary();
	struct FTransform GetOffset_Primary();
	struct FTransform GetOffset_Melee();
	int GetItemLevel();
};


// Class TslGame.ParachuteItem
// 0x0008 (0x0280 - 0x0278)
class UParachuteItem : public UEquipableItem
{
public:
	class UClass*                                      ParachuteType;                                            // 0x0278(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ParachuteItem");
		return ptr;
	}

};


// Class TslGame.ThrowableItem
// 0x0018 (0x0290 - 0x0278)
class UThrowableItem : public UEquipableItem
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0278(0x0008) MISSED OFFSET
	class UClass*                                      WeaponType;                                               // 0x0280(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class ATslWeapon*                                  EquippedWeapon;                                           // 0x0288(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ThrowableItem");
		return ptr;
	}


	class ATslWeapon* GetEquippedWeapon();
	class ATslWeapon* GetDefaultWeaponObject();
};


// Class TslGame.SkinnableInterface
// 0x0000 (0x0028 - 0x0028)
class USkinnableInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.SkinnableInterface");
		return ptr;
	}


	bool HasSkin(const struct FSkinData& InSkinData);
	void ClearSkin();
};


// Class TslGame.TslWeapon
// 0x0430 (0x07E0 - 0x03B0)
class ATslWeapon : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03B0(0x0010) MISSED OFFSET
	class UTexture*                                    WeaponIcon;                                               // 0x03C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              WeaponIconRatio;                                          // 0x03C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FCanvasIcon                                 PrimaryIcon;                                              // 0x03D0(0x0018) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FCanvasIcon                                 SecondaryIcon;                                            // 0x03E8(0x0018) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FCanvasIcon                                 PrimaryClipIcon;                                          // 0x0400(0x0018) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FCanvasIcon                                 SecondaryClipIcon;                                        // 0x0418(0x0018) (CPF_Edit, CPF_DisableEditOnInstance)
	float                                              AmmoIconsCount;                                           // 0x0430(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                PrimaryClipIconOffset;                                    // 0x0434(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                SecondaryClipIconOffset;                                  // 0x0438(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FCanvasIcon                                 Crosshair[0x5];                                           // 0x0440(0x0018) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FCanvasIcon                                 AimingCrosshair[0x5];                                     // 0x04B8(0x0018) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      UseLaserDot : 1;                                          // 0x0530(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UseCustomCrosshair : 1;                                   // 0x0531(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UseCustomAimingCrosshair : 1;                             // 0x0532(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bHideCrosshairWhileNotAiming : 1;                         // 0x0533(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FScriptMulticastDelegate                    OnUpdatedAttachment;                                      // 0x0538(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	class ATslCharacter*                               MyPawn;                                                   // 0x0548(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FWeaponData                                 WeaponConfig;                                             // 0x0550(0x0098) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x1];                                       // 0x05E8(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.TslWeapon.WeaponHand
	class USkeletalMeshComponent*                      Mesh3P;                                                   // 0x05F0(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class USceneComponent*                             RootScene;                                                // 0x05F8(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0600(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.TslWeapon.AttachmentAniRateCalculateType
	unsigned char                                      UnknownData03[0x1];                                       // 0x0602(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.TslWeapon.AttachmentRecoilPatternScaleCalculateType
	TArray<struct FWeaponAttachmentPositionData>       AttachmentPositionData;                                   // 0x0608(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<struct FWeaponAttachmentAssetData>          DefaultAttachedItemAssets;                                // 0x0618(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<class UClass*>                              AttachedItemClasses;                                      // 0x0628(0x0010) (CPF_Net, CPF_ZeroConstructor, CPF_Transient)
	struct FName                                       WeaponTag;                                                // 0x0638(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x18];                                      // 0x0640(0x0018) MISSED OFFSET
	unsigned char                                      UnknownData05[0x50];                                      // 0x0640(0x0050) UNKNOWN PROPERTY: MapProperty TslGame.TslWeapon.AttachedStaticComponentMap
	class UAkComponent*                                AkComponent;                                              // 0x06A8(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FName                                       MuzzleAttachPoint;                                        // 0x06B0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       FiringAttachPoint;                                        // 0x06B8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             MuzzleFx;                                                 // 0x06C0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       ShellFxAttachPoint;                                       // 0x06C8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      ShellFxClass;                                             // 0x06D0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    MuzzlePSC;                                                // 0x06D8(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    MuzzlePSCSecondary;                                       // 0x06E0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	class UClass*                                      FireCameraShake;                                          // 0x06E8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UForceFeedbackEffect*                        FireForceFeedback;                                        // 0x06F0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               FireSoundAk;                                              // 0x06F8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               FireLoopSoundAk;                                          // 0x0700(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               FireFinishSoundAk;                                        // 0x0708(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               OutOfAmmoSoundAk;                                         // 0x0710(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               ReloadSoundAk;                                            // 0x0718(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               EquipSoundAk;                                             // 0x0720(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               UnequipSoundAk;                                           // 0x0728(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               AimingStartSoundAk;                                       // 0x0730(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               AimingFinishSoundAk;                                      // 0x0738(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               ScopingStartSoundAk;                                      // 0x0740(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               ScopingFinishSoundAk;                                     // 0x0748(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData06[0x1];                                       // 0x0750(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.TslWeapon.AnimWeaponType
	struct FWeaponBasicAnim                            WeaponAnim;                                               // 0x0758(0x0018) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FWeaponRollAnim                             ProneRollAnim;                                            // 0x0770(0x0010) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              HipDuration;                                              // 0x0780(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bLoopedMuzzleFX : 1;                                      // 0x0784(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      bLoopedFireSound : 1;                                     // 0x0784(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData07[0x33];                                      // 0x0785(0x0033) MISSED OFFSET
	struct FSkinData                                   SkinData;                                                 // 0x07B8(0x0020) (CPF_Net, CPF_Transient)
	class AWeaponProcessor*                            TemporaryWeaponProcessor;                                 // 0x07D8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslWeapon");
		return ptr;
	}


	void Weapon_AttachShoulder();
	void Weapon_AttachHand();
	void SimulatePhysicalBodyHit(const struct FHitResult& Impact, const class Vector3D& ShotDirection);
	void ServerLogFireWeapon(const struct FAttackId& AttackId);
	void OnRep_SkinData();
	void OnRep_MyPawn();
	void OnRep_AttachedItemClasses(TArray<class UClass*> OldVal);
	void OnAnimationNotify(const struct FName& NotifyName);
	bool IsWeaponAttachedToShoulder();
	bool IsCustomSightAttached();
	float GetWeaponReadyDuration();
	class USkeletalMeshComponent* GetWeaponMesh();
	void GetWeaponGripTypeLeft();
	float GetWeaponEquipDuration();
	float GetWeaponDamage();
	struct FWeaponData GetWeaponConfig();
	void GetWeaponClassEnum();
	struct FName GetWeaponAttachmentPoint(const struct FName& Tag);
	struct FWeaponAttachmentData GetWeaponAttachmentData();
	TArray<struct FWeaponAttachmentAssetData> GetWeaponAttachmentAssetDatas();
	struct FWeaponAttachmentAssetData GetWeaponAttachmentAsset();
	float GetWeaponAnimationKick();
	void GetThrownType();
	class Vector3D GetSwayModifier();
	float GetStanceSwayModifier();
	class UAnimMontage* GetRecoilMontage();
	class ATslCharacter* GetPawnOwner();
	class Vector3D GetLowerRailOffset();
	struct FText GetItemName();
	bool GetDoGripPose();
	TArray<class UAsyncStaticMeshComponent*> GetAttachedMesh();
	void GetAnimWeaponType();
	TArray<struct FWeaponAttachmentData> GetAllWeaponAttachmentData();
	TArray<struct FWeaponAttachmentAssetData> GetAllWeaponAttachmentAssets();
	void ClientInitByReconnection(bool bIsArmed);
	void AttachWeaponToSlot(int SlotIndex);
	void AttachWeaponToMesh();
};


// Class TslGame.WeaponItem
// 0x0050 (0x02C8 - 0x0278)
class UWeaponItem : public UEquipableItem
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0278(0x0008) MISSED OFFSET
	class UClass*                                      WeaponType;                                               // 0x0280(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                AmmoCount;                                                // 0x0288(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                AmmoPerClip;                                              // 0x028C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<struct FWeaponAttachmentTagData>            AttachmentTagData;                                        // 0x0290(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	struct FName                                       WeaponTag;                                                // 0x02A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<class UAttachableItem*>                     AttachedItems;                                            // 0x02A8(0x0010) (CPF_Net, CPF_ZeroConstructor, CPF_Transient)
	unsigned char                                      UnknownData01[0x1];                                       // 0x02B8(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.WeaponItem.FiringMode
	class ATslWeapon*                                  EquippedWeapon;                                           // 0x02C0(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.WeaponItem");
		return ptr;
	}


	void SetFiringMode();
	bool IsAttachable(class UAttachableItem* Item);
	bool HasAttachmentSlot();
	void GetFiringMode();
	class ATslWeapon* GetEquippedWeapon();
	class ATslWeapon* GetDefaultWeaponObject();
	class UAttachableItem* GetAttachedItem();
	int GetAttachableItemCount();
	TArray<class UAttachableItem*> GetAllAttachedItems();
	class UAttachableItem* DetachItem();
	bool AttachItem(class UAttachableItem* Item);
};


// Class TslGame.RandomlyGeneratableItem
// 0x0068 (0x0228 - 0x01C0)
class URandomlyGeneratableItem : public UItem
{
public:
	struct FString                                     RandomExpression;                                         // 0x01C0(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	unsigned char                                      bOpenByKey : 1;                                           // 0x01D0(0x0001) (CPF_Edit)
	unsigned char                                      bOpenByPoint : 1;                                         // 0x01D0(0x0001) (CPF_Edit)
	TAssetPtr<class UClass>                            OpenKeyItem;                                              // 0x01D8(0x0020) (CPF_Edit)
	int                                                OpenKeyItemCount;                                         // 0x01F8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                PointOpenPrice;                                           // 0x01FC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ExchangeBundleId;                                         // 0x0200(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<struct FLobbyItemBundle>                    BundleList;                                               // 0x0208(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<TAssetPtr<class UClass>>                    ReferenceItems;                                           // 0x0218(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.RandomlyGeneratableItem");
		return ptr;
	}

};


// Class TslGame.UseByPickupItem
// 0x0000 (0x01C0 - 0x01C0)
class UUseByPickupItem : public UItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.UseByPickupItem");
		return ptr;
	}

};


// Class TslGame.ItemSpawnProcessor
// 0x0010 (0x0038 - 0x0028)
class UItemSpawnProcessor : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ItemSpawnProcessor");
		return ptr;
	}


	void ProcessSpawnItem(class UItemSpotGroupComponent* Spawner);
	void ProcessGroup(class UItemSpotGroupComponent* SpotGroup, TArray<class UItemSpotComponent*> Spots);
	bool CheckItemGroup(class UItemSpotGroupComponent* SpotGroup);
};


// Class TslGame.SpawnTableItemSpawnProcessor
// 0x0F30 (0x0F68 - 0x0038)
class USpawnTableItemSpawnProcessor : public UItemSpawnProcessor
{
public:
	TArray<struct FItemSpotGroupTypeProperty>          RawSpotGroupProperties;                                   // 0x0038(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	class UDataTable*                                  RawItemSpawnDataTable;                                    // 0x0048(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UDataTable*                                  RawItemSpawnTogetherDataTable;                            // 0x0050(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xEB8];                                     // 0x0058(0x0EB8) MISSED OFFSET
	unsigned char                                      bUseActorSpawn : 1;                                       // 0x0F10(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x57];                                      // 0x0F11(0x0057) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.SpawnTableItemSpawnProcessor");
		return ptr;
	}

};


// Class TslGame.ItemSpot
// 0x0008 (0x03B8 - 0x03B0)
class AItemSpot : public AActor
{
public:
	class UItemSpotGroupComponent*                     SpotGroupComponent;                                       // 0x03B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ItemSpot");
		return ptr;
	}

};


// Class TslGame.ItemSpotComponent
// 0x0010 (0x0400 - 0x03F0)
class UItemSpotComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x1];                                       // 0x03F0(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.ItemSpotComponent.ItemSpotType
	unsigned char                                      UnknownData01[0xF];                                       // 0x03F1(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ItemSpotComponent");
		return ptr;
	}

};


// Class TslGame.ItemSpotGroupComponent
// 0x0010 (0x0400 - 0x03F0)
class UItemSpotGroupComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x1];                                       // 0x03F0(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.ItemSpotGroupComponent.SpotGroupType
	unsigned char                                      UnknownData01[0xF];                                       // 0x03F1(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ItemSpotGroupComponent");
		return ptr;
	}

};


// Class TslGame.ItemStudio
// 0x0060 (0x0410 - 0x03B0)
class AItemStudio : public AActor
{
public:
	struct FName                                       CameraSocketName;                                         // 0x03B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UTextureRenderTarget2D*                      TextureTarget;                                            // 0x03B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxViewDistance;                                          // 0x03C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCameraComponent*                            CameraComponent;                                          // 0x03C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class USceneCaptureComponent2D*                    SceneCaptureComponent;                                    // 0x03D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x03D8(0x0008) MISSED OFFSET
	struct FTransform                                  DefaultCameraSocketTransform;                             // 0x03E0(0x0030) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ItemStudio");
		return ptr;
	}


	void UpdateComponentToWorld(class UMeshComponent* Mesh);
	void SetTextureRenderTarget(class UTextureRenderTarget2D* NewTextureTarget);
	void SetItem(class UItem* Item);
	void AddYaw(float Value);
};


// Class TslGame.ItemToolTipWidget
// 0x0000 (0x0240 - 0x0240)
class UItemToolTipWidget : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ItemToolTipWidget");
		return ptr;
	}


	void UpdateVicinityOrInventorySlotItemToolTip(class UEquipableItem* EquipableItem, class UEquipableItem* EquipmentSlotItem);
	void UpdateToolTipBySlotInterface(const TScriptInterface<class USlotInterface>& SlotInterface, const TScriptInterface<class USlotContainerInterface>& Container);
	void UpdateSlotInfo(const TScriptInterface<class USlotInterface>& SlotInterface);
	void UpdateEquipmentSlotItemToolTip(class UEquipableItem* EquipableItem);
};


// Class TslGame.LevelAttribute
// 0x0028 (0x03D8 - 0x03B0)
class ALevelAttribute : public AInfo
{
public:
	int                                                NumMapBlock;                                              // 0x03B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FBox2D                                      MapRect2D;                                                // 0x03B4(0x0014) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net)
	class UMaterialInterface*                          MapImageMaterial;                                         // 0x03C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x03D0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.LevelAttribute");
		return ptr;
	}

};


// Class TslGame.LobbyItemBundleIdPublisher
// 0x0028 (0x0050 - 0x0028)
class ULobbyItemBundleIdPublisher : public UObject
{
public:
	struct FString                                     LobbyItemPath;                                            // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_Config)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.LobbyItemBundleIdPublisher");
		return ptr;
	}

};


// Class TslGame.LobbyLink
// 0x00A8 (0x00D0 - 0x0028)
class ULobbyLink : public UObject
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0028(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.LobbyLink");
		return ptr;
	}

};


// Class TslGame.LobbyWidget
// 0x0000 (0x0240 - 0x0240)
class ULobbyWidget : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.LobbyWidget");
		return ptr;
	}


	void GameStateChanging(const struct FName& NewState, const struct FName& OldState);
};


// Class TslGame.MatchPreparer
// 0x0030 (0x0058 - 0x0028)
class UMatchPreparer : public UObject
{
public:
	int                                                WarmupTime;                                               // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	int                                                WarmupTimeInPIE;                                          // 0x002C(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0030(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.MatchPreparer");
		return ptr;
	}


	void TimerGameStartCountDown();
};


// Class TslGame.AirborneMatchPreparer
// 0x0048 (0x00A0 - 0x0058)
class UAirborneMatchPreparer : public UMatchPreparer
{
public:
	class UClass*                                      AircraftClass;                                            // 0x0058(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<class ATransportAircraftVehicle*>           Aircrafts;                                                // 0x0060(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	int                                                AircraftCount;                                            // 0x0070(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                AircraftCapacityOverride;                                 // 0x0074(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              AircraftAltitude;                                         // 0x0078(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              EndThetaDegree;                                           // 0x007C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AircraftIntervalDistance;                                 // 0x0080(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0084(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.AirborneMatchPreparer");
		return ptr;
	}


	void AllowDealDamage();
};


// Class TslGame.NormalMatchPreparer
// 0x0018 (0x0070 - 0x0058)
class UNormalMatchPreparer : public UMatchPreparer
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0058(0x0010) MISSED OFFSET
	int                                                AvailablePlayerStartCount;                                // 0x0068(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.NormalMatchPreparer");
		return ptr;
	}

};


// Class TslGame.MaterialMergeSettings
// 0x0080 (0x00A8 - 0x0028)
class UMaterialMergeSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0028(0x0058) MISSED OFFSET
	class UMaterial*                                   MasterMaterial;                                           // 0x0080(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterial*                                   MergedMaterial;                                           // 0x0088(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FMaterialMergerParameters>           ParameterList;                                            // 0x0090(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	unsigned char                                      bUpdateParameterList : 1;                                 // 0x00A0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.MaterialMergeSettings");
		return ptr;
	}

};


// Class TslGame.ModeController
// 0x0000 (0x04A8 - 0x04A8)
class AModeController : public AAIController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ModeController");
		return ptr;
	}


	void SendSystemMessageToAll(const struct FText& Message, float MessageDuration);
	bool IsPlayInEditor();
	bool HandleServerAdminBlueprint(const struct FString& AdminCommand);
	class ATslGameState* GetGameState();
	class ATslGameMode* GetGameMode();
	bool CanDealDamage(class ATslPlayerState* DamageInstigator, class ATslPlayerState* DamagedPlayer);
};


// Class TslGame.BattleRoyaleModeController
// 0x0090 (0x0538 - 0x04A8)
class ABattleRoyaleModeController : public AModeController
{
public:
	TArray<struct FBattleRoyalePoisionGasData>         NormalPoisonGasDataArray;                                 // 0x04A8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<struct FBattleRoyalePoisionGasData>         FastPoisonGasDataArray;                                   // 0x04B8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	int                                                FastZonePlayerCount;                                      // 0x04C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Config, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              BattleRoyaleZoneTypeCheckTime;                            // 0x04CC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<float>                                      PoisonWarningTime;                                        // 0x04D0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	float                                              WaterVolumeRayHeight;                                     // 0x04E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x04E4(0x000C) MISSED OFFSET
	TArray<class ATslPhysicsVolume*>                   OceanPhysicsVolume;                                       // 0x04F0(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	TArray<class ATslPassBluezoneArea*>                PassBluezoneAreas;                                        // 0x0500(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	TArray<class ATslPassBlueZoneAreaRectangle*>       PassBluezoneAreasRectangle;                               // 0x0510(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0520(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.BattleRoyaleModeController");
		return ptr;
	}


	bool SetNextGasInBlackboard();
	void InitRadius();
	float GetPoisonGasDamagePerSecond(float CharaterToCenterDistance, float SafetyZoneRadius, float PoisonGasWarningRadius);
	int GetMaxPhaseCount();
};


// Class TslGame.CarePackageController
// 0x0030 (0x04D8 - 0x04A8)
class ACarePackageController : public AModeController
{
public:
	class UClass*                                      AircraftCarePackageClass;                                 // 0x04A8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector2D                                     StartDelay;                                               // 0x04B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector2D                                     SpawnInterval;                                            // 0x04B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FlyingHeight;                                             // 0x04C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CarePackageLifeTime;                                      // 0x04C4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              WhiteZoneSpawnInnerRate;                                  // 0x04C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DropAreaRate;                                             // 0x04CC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x04D0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.CarePackageController");
		return ptr;
	}


	class Vector3D SpawnAircraftCarePackageCustom(const class Vector3D& DropLocation);
	class Vector3D SpawnAircraftCarePackage(bool CopyIntersectionInfo);
	bool SetNextCarePackageInBlackboard();
	void InitCarePackageSetting();
	float GetSpawnInterval();
};


// Class TslGame.RedZoneController
// 0x00A8 (0x0550 - 0x04A8)
class ARedZoneController : public AModeController
{
public:
	class UClass*                                      BombTemplateClass;                                        // 0x04A8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              StartDelay;                                               // 0x04B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector2D                                     NextCreateRedZoneInterval;                                // 0x04B4(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              BombingDelay;                                             // 0x04BC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              OuterRadius;                                              // 0x04C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector2D                                     LimitExceptExplosionRadius;                               // 0x04C4(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ExceptExplosionRadius;                                    // 0x04CC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              BombProjectileDelayTime;                                  // 0x04D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RedZoneDuration;                                          // 0x04D4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector2D                                     BombingInterval;                                          // 0x04D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RedZoneLifeTime;                                          // 0x04E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ReyStartHeight;                                           // 0x04E4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RedZoneRadiusOffsetRate;                                  // 0x04E8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FText                                       RedZoneStartText;                                         // 0x04F0(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	int                                                RedZoneProjectileCount;                                   // 0x0508(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bFGSquircularMapping : 1;                                 // 0x050C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RayCheckAroundLength;                                     // 0x0510(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      BeginServerPaticleClass;                                  // 0x0518(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class ATslServerParticle*                          BeginServerPaticle;                                       // 0x0520(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              BeginSoundDelay;                                          // 0x0528(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x052C(0x0014) MISSED OFFSET
	TArray<class ATslPhysicsVolume*>                   OceanPhysicsVolume;                                       // 0x0540(0x0010) (CPF_ZeroConstructor, CPF_Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.RedZoneController");
		return ptr;
	}


	void SpawnBombProjectile();
	bool SetNextRedZoneInBlackboard();
	void OnBombingStart(const class Vector3D& RedZonePosition);
	void InitRedZoneSetting();
	float GetRandomBombingInterval();
};


// Class TslGame.MutableCharacter
// 0x0050 (0x0830 - 0x07E0)
class AMutableCharacter : public ACharacter
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x07E0(0x0020) MISSED OFFSET
	unsigned char                                      UnknownData01[0x1];                                       // 0x07E0(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.MutableCharacter.Gender
	class UCustomizableObjectInstance*                 CustomizableObjectInstance;                               // 0x0808(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTslCustomizableSkeletalComponent*           CustomizableSkeletalComponent;                            // 0x0810(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	TArray<unsigned char>                              InstanceDescriptor;                                       // 0x0818(0x0010) (CPF_Edit, CPF_Net, CPF_ZeroConstructor, CPF_EditConst)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0828(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.MutableCharacter");
		return ptr;
	}


	void UpdateAppearence();
	void OnRep_InstanceDescriptor();
	void GetGender();
};


// Class TslGame.LobbyCharacter
// 0x0060 (0x0890 - 0x0830)
class ALobbyCharacter : public AMutableCharacter
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0830(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnHost;                                                   // 0x0838(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLobbySceneChanged;                                      // 0x0848(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      bHasJacket : 1;                                           // 0x0858(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      bIsReady : 1;                                             // 0x0858(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      bIsHost : 1;                                              // 0x0858(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      bIsInCustomizationScene : 1;                              // 0x0858(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x37];                                      // 0x0859(0x0037) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.LobbyCharacter");
		return ptr;
	}


	int GetSlotId();
	struct FString GetNickName();
	struct FString GetNetId();
};


// Class TslGame.TestMutableCharacter
// 0x0000 (0x0830 - 0x0830)
class ATestMutableCharacter : public AMutableCharacter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TestMutableCharacter");
		return ptr;
	}

};


// Class TslGame.TslVaultingHelper
// 0x0010 (0x03C0 - 0x03B0)
class ATslVaultingHelper : public AActor
{
public:
	class USceneComponent*                             RootSceneComponent;                                       // 0x03B0(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class USceneComponent*                             ActorAttachScene;                                         // 0x03B8(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslVaultingHelper");
		return ptr;
	}


	class Vector3D GetActorAttachScene();
};


// Class TslGame.TslWeapon_Gun
// 0x0310 (0x0AF0 - 0x07E0)
class ATslWeapon_Gun : public ATslWeapon
{
public:
	unsigned char                                      bSpawnBulletFromBarrel : 1;                               // 0x07E0(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               VariableZoomStepAk;                                       // 0x07E8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               ZeroingStepAk;                                            // 0x07F0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                AmmoPerClip;                                              // 0x07FC(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                CurrentAmmoInClip;                                        // 0x0800(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                CurrentZeroLevel;                                         // 0x0804(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      bIsHipped : 1;                                            // 0x0808(0x0001) (CPF_Net, CPF_Transient)
	float                                              TimeBetweenShots;                                         // 0x080C(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0810(0x0028) MISSED OFFSET
	int                                                FiringModeIndex;                                          // 0x0838(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x84];                                      // 0x083C(0x0084) MISSED OFFSET
	struct FWeaponGunData                              WeaponGunConfig;                                          // 0x08C0(0x0090) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FWeaponDeviationData                        WeaponDeviationConfig;                                    // 0x0950(0x0044) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FWeaponGunAnim                              WeaponGunAnim;                                            // 0x0998(0x00F0) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FWeaponPPSettings                           WeaponGunPostprocessSettings;                             // 0x0A88(0x0050) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FName                                       ScopingAttachPoint;                                       // 0x0AD8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       ScopingFocusPoint;                                        // 0x0AE0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bLoackLoadedAmmo : 1;                                     // 0x0AE8(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslWeapon_Gun");
		return ptr;
	}


	bool WeaponCycleDone();
	void StopReloadAnimByOne();
	void StartManualFireCycle();
	void SimulateWeaponReload();
	void SetWeaponReloadInterrupted(bool bIsInterrupted);
	void SetSpawnBulletFromBarrel(bool DoSpawnBulletFromBarrel);
	void SetFiringMode();
	void ServerStopReload();
	void ServerStopFire();
	void ServerStartReload();
	void ServerStartFire();
	void ServerSetHip(bool bNewIsHipped);
	void ServerSetCurrentZeroLevel(int ZeroLevel);
	void ServerHandleFiring(const struct FHitResult& ExceptTrajectoryHitResult);
	void ServerCancelReload();
	void Server_StartManualFireCycle();
	void ProcessBoltAction();
	void PlayWeaponCycleCameraAnim();
	void PlayLongTailSound();
	void OnRep_TimeBetweenShots(float LastTimeBetweenShots);
	void OnRep_MyPawn();
	void OnRep_CurrentZeroLevel(int LastCurrentZeroLevel);
	void OnRep_AttachedItemClasses(TArray<class UClass*> OldVal);
	void OnRep_AmmoCount(int LastCurrentAmmoInClip);
	void OnInventoryUpdated();
	void OnAttachmentScopeLoaded();
	void OnAnimationNotify(const struct FName& NotifyName);
	void ManualFireCycleFinished();
	bool IsWeaponCycleInProgress();
	bool IsReloadInterrupted();
	bool IsReloading();
	class UAnimMontage* GetWeaponTacticalReload();
	struct FWeaponPPSettings GetWeaponPostprocessSettings();
	struct FWeaponPPSettings GetWeaponOrScopePostprocessSettings();
	class Vector3D GetWeaponHandOffsetFPP();
	class Vector3D GetWeaponHandOffset();
	struct FWeaponGunData GetWeaponGunConfig();
	struct FWeaponGunAnim GetWeaponGunAnimConfig();
	float GetWeaponFullReloadTime();
	float GetWeaponFullRealoadTimeWithAttachments();
	float GetWeaponCurrentRecoilValue();
	float GetWeaponCurrentDeviationValue();
	class UAnimMontage* GetWeaponChargeReload();
	float GetReloadAnimationPlayRate();
	class Vector3D GetRecoilADSSocketOffsetScale();
	int GetNumOfFiringMode();
	float GetMovementModifierScope();
	float GetMovementModifierAim();
	int GetMaxAmmo();
	float GetMagOutDuration();
	class Vector3D GetMagDropLinearVelocity();
	class Vector3D GetMagDropAngularVelocity();
	int GetGripTypeIndex();
	void GetFiringMode();
	class UAmmoItem* GetDefaultAmmoObject();
	float GetCurrentDeviation();
	int GetCurrentAmmoInInventory();
	int GetCurrentAmmoInClip();
	int GetCurrentAmmo();
	class UAnimMontage* GetCharacterTacticalReloadFromAttach();
	class UAnimMontage* GetCharacterReloadTacticalMontage();
	class UAnimMontage* GetCharacterReloadChargeMontage();
	class UAnimMontage* GetCharacterReloadByOneStopMontage();
	class UAnimMontage* GetCharacterReloadByOneStartMontage();
	class UAnimMontage* GetCharacterReloadByOneSingleMontage();
	class UBlendSpaceBase* GetCharacterLHGripBlendspace();
	class UBlendSpace1D* GetCharacterGripBlendspace();
	class UAnimMontage* GetCharacterFireSelectorMontage();
	class UAnimMontage* GetCharacterFireMontage();
	class UAnimMontage* GetCharacterFireCycle();
	class UAnimMontage* GetCharacterChargeReloadFromAttach();
	int GetAmmoPerClip();
	class UClass* GetAmmoItemClass();
	float GetADSRecoilKick();
	void ClientStopSimulatingWeaponFire();
	void ClientSimulateWeaponFire(const struct FHitResult& ExceptTrajectoryHitResult);
	void ClientNotifyStopReloadByOne();
	void ClientNotifyOutOfAmmo();
	void ClientNotifyAmmo(int InCurrentAmmoInClip);
	void ClientCancelReload();
	void Client_StartManualFireCycle();
	bool CheckMiddlePointCollision();
	void CancelReloadImpl();
	void BroadcastOutOfAmmo();
	void AnimCall_ToggleFireMode();
	void AnimCall_ReloadTacticalWeapon();
	void AnimCall_ReloadChargeWeapon();
	void AnimCall_ReloadByOneStop();
	void AnimCall_FireWeaponCycle();
	void AnimCall_FireWeapon();
};


// Class TslGame.VehicleSeatActor
// 0x0088 (0x0438 - 0x03B0)
class AVehicleSeatActor : public AActor
{
public:
	float                                              ViewPitchMin;                                             // 0x03B0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ViewPitchMax;                                             // 0x03B4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ViewYawMin;                                               // 0x03B8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ViewYawMax;                                               // 0x03BC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveFloat*                                 CurvePitchMax;                                            // 0x03C0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 CurvePitchMin;                                            // 0x03C8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bCanOnlyFireWhileAiming : 1;                              // 0x03D0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UBlendSpaceBase*                             SeatBlendspaceAiming;                                     // 0x03D8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimSequenceBase*                           SeatAnimationIdle;                                        // 0x03E0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAimOffsetBlendSpace*                        SeatIdleAO;                                               // 0x03E8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UBlendSpaceBase*                             TransitionOutBlendspace;                                  // 0x03F0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UBlendSpaceBase*                             TransitionInBlendspace;                                   // 0x03F8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bRestricWeaponUse : 1;                                    // 0x0400(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0401(0x0010) UNKNOWN PROPERTY: ArrayProperty TslGame.VehicleSeatActor.AllowedWeaponClasses
	unsigned char                                      bUseEntryVelocityRestriction : 1;                         // 0x0418(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MaxVelocityForEntry;                                      // 0x041C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class ATslCharacter*                               Rider;                                                    // 0x0420(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0428(0x000C) MISSED OFFSET
	unsigned char                                      UnknownData02[0x1];                                       // 0x0428(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.VehicleSeatActor.SeatAnimationType

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.VehicleSeatActor");
		return ptr;
	}


	void OnRep_Rider();
	bool IsWeaponClassAllowed();
	bool IsEntryAllowedByVelocity();
	class UTslVehicleSeatComponent* GetVehicleSeatComponent();
	class APawn* GetVehiclePawn();
	TScriptInterface<class UTslVehicleInterface> GetVehicleInterface();
	void GetVehicleAnimType();
	class UBlendSpaceBase* GetTransitionOutBlendspace();
	class UBlendSpaceBase* GetTransitionInBlendspace();
	class UAimOffsetBlendSpace* GetSeatIdleAO();
	class UAnimSequenceBase* GetSeatIdleAnimation();
	class UBlendSpaceBase* GetSeatAimingBlendspace();
	class ATslCharacter* GetRider();
	float GetMinPitchByYaw(float CurrentYaw);
	float GetMaxPitchByYaw(float CurrentYaw);
	bool GetCanFireOnlyWhileAimed();
	struct FText GetAdditionalMessage(class ATslCharacter* Character);
	bool AllowInteract(class ATslCharacter* OtherCharacter);
};


// Class TslGame.WeaponProcessor
// 0x0140 (0x04F0 - 0x03B0)
class AWeaponProcessor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03B0(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnWeaponProcessorArmed;                                   // 0x03B8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData01[0xF0];                                      // 0x03C8(0x00F0) MISSED OFFSET
	TArray<class ATslWeapon*>                          EquippedWeapons;                                          // 0x04B8(0x0010) (CPF_Net, CPF_ZeroConstructor, CPF_Transient)
	int                                                CurrentWeaponIndex;                                       // 0x04C8(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x24];                                      // 0x04CC(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.WeaponProcessor");
		return ptr;
	}


	void SimulateUnArmWeapon(int WeaponIndex, bool bNeedAnimation);
	void SimulateArmWeapon(int WeaponIndex, bool bNeedAnimation);
	void ServerUnarmCurrentWeapon(bool bNeedAnimation);
	void ServerArmWeapon(int WeaponIndex, bool bNeedAnimation);
	void OnRep_EquippedWeapons(TArray<class ATslWeapon*> LastEquippedWeapons);
	void OnRep_CurrentWeaponIndex();
	void NotifyWeaponUpdate();
	bool IsUnarmedWeapon(int WeaponIndex);
	bool IsUnarmed();
	class ATslWeapon_Throwable* GetWeaponThrowable();
	int GetWeaponIndex();
	class ATslWeapon_Gun* GetWeaponGun();
	class ATslWeapon* GetWeaponByIndex(int Index);
	class ATslWeapon* GetWeapon();
	int GetUnarmedWeaponIndex();
	class ATslWeapon* GetCurrentWeapon();
	class ATslWeapon* FindWeapon(class UClass* WeaponClass);
	void ClientSetWeaponIndex(int WeaponIndex);
	void ClientInitByReconnection(int InitWeaponIndex);
	void ClientForceRemoveWeapon(int WeaponIndex);
};


// Class TslGame.VaultingData
// 0x0108 (0x0138 - 0x0030)
class UVaultingData : public UDataAsset
{
public:
	float                                              LocationStartNormalScale;                                 // 0x0030(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              LocationStartZOffset;                                     // 0x0034(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              LocationEndNormalScale;                                   // 0x0038(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              LocationEndZOffset;                                       // 0x003C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bIsClimb : 1;                                             // 0x0040(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bIsSlide : 1;                                             // 0x0041(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              VaultInitialTimer;                                        // 0x0044(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ApexAdditiveStartTime;                                    // 0x0048(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ApexAdditiveEndTime;                                      // 0x004C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PreApexSpeedScale;                                        // 0x0050(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PostApexSpeedScale;                                       // 0x0054(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              VaultEndToFallTimerCutoff;                                // 0x0058(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector2D                                     StartCutoffByDistance_InMap;                              // 0x005C(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector2D                                     StartCutoffByDistance_OutMap;                             // 0x0064(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector2D                                     StartCutoffBySpeed_InMap;                                 // 0x006C(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector2D                                     StartCutoffBySpeed_OutMap;                                // 0x0074(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector2D                                     PlayrateBySpeed_InMap_PreApex;                            // 0x007C(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector2D                                     PlayrateBySpeed_OutMap_PreApex;                           // 0x0084(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector2D                                     PlayrateBySpeed_InMap_PostApex;                           // 0x008C(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector2D                                     PlayrateBySpeed_OutMap_PostApex;                          // 0x0094(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimSequenceBase*                           AnimationSequence;                                        // 0x00A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimSequenceBase*                           AnimationSequence_Rifle;                                  // 0x00A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 AnimationCurve;                                           // 0x00B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector2D                                     CharLocationInterpSpeedInMap;                             // 0x00B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector2D                                     CharLocationInterpSpeedOutMap;                            // 0x00C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector2D                                     TimerProgressionByDistanceInMap;                          // 0x00C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector2D                                     TimerProgressionByDistanceOutMap;                         // 0x00D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              TimerProgressionVTimerMax;                                // 0x00D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              VaultEndTimerNormal;                                      // 0x00DC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              VaultEndTimerFall;                                        // 0x00E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CharacterPostVaultVelocityScalar;                         // 0x00E4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector3D                                     CharacterPostVaultVelocityScalarVector;                   // 0x00E8(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector3D                                     CharacterPostVaultVelocityScalarVector_ToFall;            // 0x00F4(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AnimBlendInTime;                                          // 0x0100(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AnimBlendOutTime;                                         // 0x0104(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bCanVaultWithWeapon : 1;                                  // 0x0108(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bIsCancellable : 1;                                       // 0x0109(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MinCancelVTimer;                                          // 0x010C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MaxCancelVTimer;                                          // 0x0110(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              TaskEndVTimer;                                            // 0x0114(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PostVaultTimerProgressionScale;                           // 0x0118(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bUseStaticVTimerDampening : 1;                            // 0x011C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bUseMappedVTimerDampening : 1;                            // 0x011D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              StaticDampeningScalar;                                    // 0x0120(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              StaticDampeningVTimerMax;                                 // 0x0124(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MappedDampeningScalar;                                    // 0x0128(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MappedDampeningVTimerMax;                                 // 0x012C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bUseCustomApexForTimer : 1;                               // 0x0130(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CustomApex;                                               // 0x0134(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.VaultingData");
		return ptr;
	}


	class UAnimSequenceBase* GetVaultAnimation(bool bHasRifle);
	float GetBlendSpeedByDistance(float InDistance);
	float GetAnimationLength();
	class UCurveFloat* GetAnimationCurve();
};


// Class TslGame.TslCharacter
// 0x0F00 (0x1730 - 0x0830)
class ATslCharacter : public AMutableCharacter
{
public:
	class UTslPawnInputBindingComponent*               TslPawnInputBindingComponent;                             // 0x0830(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      bPeekLeftToggled : 1;                                     // 0x0839(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bPeekRightToggled : 1;                                    // 0x083A(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TWeakObjectPtr<class ATslPlayerState>              CurrentAttackerPlayerState;                               // 0x083C(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TWeakObjectPtr<class ATslPlayerState>              LastAttackedPlayerState;                                  // 0x0844(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4C];                                      // 0x084C(0x004C) MISSED OFFSET
	struct FScriptMulticastDelegate                    NoBagSpaceDelgate;                                        // 0x0898(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData01[0x8];                                       // 0x08A8(0x0008) MISSED OFFSET
	unsigned char                                      UnknownData02[0x50];                                      // 0x08A8(0x0050) UNKNOWN PROPERTY: MapProperty TslGame.TslCharacter.ItemOffsetConfig
	unsigned char                                      UnknownData03[0x48];                                      // 0x0900(0x0048) MISSED OFFSET
	class AController*                                 LastPossessedController;                                  // 0x0948(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	TArray<class UAkAudioBank*>                        Banks;                                                    // 0x0950(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	class UBuffComponet*                               BuffComponent;                                            // 0x0960(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x40];                                      // 0x0968(0x0040) MISSED OFFSET
	unsigned char                                      UnknownData05[0x1];                                       // 0x0968(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.TslCharacter.Remote_CastAnim
	class ATslCharacter*                               RevivingCharacter;                                        // 0x09B0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ATslPlayerState*                             GroggyPlayerInstigator;                                   // 0x09B8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TMap<class UCameraComponent*, float>               SavedCameraFOV;                                           // 0x09C0(0x0050) (CPF_ZeroConstructor)
	class UCameraComponent*                            SavedCamera;                                              // 0x0A10(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData06[0x20];                                      // 0x0A18(0x0020) MISSED OFFSET
	int                                                CurrentVariableZoomLevel;                                 // 0x0A38(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              BuffFinalSpreadFactor;                                    // 0x0A3C(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class AInventoryFacade*                            InventoryFacade;                                          // 0x0A40(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class AWeaponProcessor*                            WeaponProcessor;                                          // 0x0A48(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      CharacterState;                                           // 0x0A50(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      bIsScopingRemote : 1;                                     // 0x0A51(0x0001) (CPF_Net, CPF_Transient)
	unsigned char                                      bIsAimingRemote : 1;                                      // 0x0A51(0x0001) (CPF_Net, CPF_Transient)
	unsigned char                                      bIsFirstPersonRemote : 1;                                 // 0x0A51(0x0001) (CPF_Net, CPF_Transient)
	unsigned char                                      bIsInVehicleRemote : 1;                                   // 0x0A51(0x0001) (CPF_Net, CPF_Transient)
	unsigned char                                      UnknownData07[0x1E];                                      // 0x0A52(0x001E) MISSED OFFSET
	class UClass*                                      DropPackageType;                                          // 0x0A70(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               SoundClearAk;                                             // 0x0A78(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               RemoteVolumeControlOn;                                    // 0x0A80(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               RemoteVolumeControlOff;                                   // 0x0A88(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 CameraFovRatioCurve;                                      // 0x0A90(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              HeavyFallVerticalVelocityThreshold;                       // 0x0A98(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ExtremeFallVerticalVelocityThreshold;                     // 0x0A9C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ProneFallVerticalVelocityThreshold;                       // 0x0AA0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              HeavyFallMovementStopTime;                                // 0x0AA4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ExtremeFallMovementStopTime;                              // 0x0AA8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Punch_Damage;                                             // 0x0AB0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PunchHeavy_Damage;                                        // 0x0AB4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      UnarmedDamageType;                                        // 0x0AB8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      ZombieDamageType;                                         // 0x0AC0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Punch_Distance;                                           // 0x0AC8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PunchHeavy_Distance;                                      // 0x0ACC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Punch_Radius;                                             // 0x0AD0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PunchHeavy_Radius;                                        // 0x0AD4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector3D                                     Punch_InitialLocation;                                    // 0x0AD8(0x000C) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector3D                                     LeanLeftTraceOffset;                                      // 0x0AE8(0x000C) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector3D                                     LeanRightTraceOffset;                                     // 0x0AF4(0x000C) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData08[0x8];                                       // 0x0B00(0x0008) MISSED OFFSET
	float                                              LeanOffset_Stand;                                         // 0x0B08(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              LeanOffset_Crouch;                                        // 0x0B0C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              LeanOffset_Prone;                                         // 0x0B10(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData09[0x10];                                      // 0x0B14(0x0010) MISSED OFFSET
	float                                              Sprint_MaxSpeed;                                          // 0x0B24(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Sprint_MinSpeed;                                          // 0x0B28(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SprintingFOV;                                             // 0x0B2C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MinimumBreathToHold;                                      // 0x0B30(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       SwimPoint;                                                // 0x0B38(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SwimableWaterDepth;                                       // 0x0B40(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CrouchWaterDepth;                                         // 0x0B44(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ProneWaterDepth;                                          // 0x0B48(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              WaterFloorDetectionLength;                                // 0x0B4C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SwimMaxControllerPitch;                                   // 0x0B50(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              UnderwaterSwimGapFromSurface;                             // 0x0B54(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      SwimTrailEffectClass;                                     // 0x0B58(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class ATslParticle*                                SwimTrailEffect;                                          // 0x0B60(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FName                                       ParticleSocket_SwimIdleRipple;                            // 0x0B68(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      SwimIdleRippleEffectClass;                                // 0x0B70(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                maxNumSwimIdleRippleEffect;                               // 0x0B78(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SwimIdleRippleOffsetFromSurface;                          // 0x0B7C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData10[0x10];                                      // 0x0B80(0x0010) MISSED OFFSET
	class UCharacterBreathComponent*                   BreathComponent;                                          // 0x0B90(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FName                                       BreathPoint;                                              // 0x0B98(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      UnderwaterChokeEffectClass;                               // 0x0BA0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class ATslParticle*                                UnderwaterChokeEffect;                                    // 0x0BA8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              IndoorCheckDistance;                                      // 0x0BB0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              IndoorCheckHalfConeAngle;                                 // 0x0BB8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              IndoorCheckSuccessRate;                                   // 0x0BBC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                IndoorCheckSamplingQueueSize;                             // 0x0BC0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                IndoorCheckAccuracyMultiplier;                            // 0x0BC4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData11[0x20];                                      // 0x0BC8(0x0020) MISSED OFFSET
	float                                              FootSoundObstructionCheckInterval;                        // 0x0BE8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FootSoundObstructionCheckMaxDistance;                     // 0x0BEC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData12[0x8];                                       // 0x0BF0(0x0008) MISSED OFFSET
	struct FName                                       ParachuteAttachPoint;                                     // 0x0BF8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ReleasingParachuteAltitude;                               // 0x0C00(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ForceReleasingParachuteAltitude;                          // 0x0C04(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MinimumParachuteAltitude;                                 // 0x0C08(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      ParachuteType;                                            // 0x0C10(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      bParachuteLandingAssist : 1;                              // 0x0C18(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCastComponent*                              CastComponent;                                            // 0x0C20(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UStanceComponent*                            StanceComponent;                                          // 0x0C28(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UHackReporterComponent*                      HackReporterComponent;                                    // 0x0C30(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      bAcceptHitsWhileNotAlive : 1;                             // 0x0C38(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SimulatedHit_Initial;                                     // 0x0C3C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SimulatedHit_RecoveryPerSecond;                           // 0x0C40(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SimulatedHit_Value;                                       // 0x0C44(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SimulatedHit_ImpulsePower;                                // 0x0C48(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SimlatedHit_PunchLightPower;                              // 0x0C4C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SimlatedHit_PunchHeavyPower;                              // 0x0C50(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      PunchImpactEffect;                                        // 0x0C58(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData13[0x28];                                      // 0x0C60(0x0028) MISSED OFFSET
	class UCharacterWeaponAnimInfoComponent*           WeaponAnimInfoComponent;                                  // 0x0C88(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTslAccessoryComponent*                      CharacterAccessory_Primary;                               // 0x0C90(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTslAccessoryComponent*                      CharacterAccessory_Secondary;                             // 0x0C98(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTslAccessoryComponent*                      CharacterAccessory_Sidearm;                               // 0x0CA0(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTslAccessoryComponent*                      CharacterAccessory_Melee;                                 // 0x0CA8(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTslAccessoryComponent*                      CharacterAccessory_Thrown;                                // 0x0CB0(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class UClass*                                      FootStepEffectClassInDirt;                                // 0x0CB8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      FootStepEffectClassInGrass;                               // 0x0CC0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      FootStepEffectClassInRock;                                // 0x0CC8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      FootStepEffectClassInSand;                                // 0x0CD0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       ParticleSocketFootLeft;                                   // 0x0CD8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       ParticleSocketFootRight;                                  // 0x0CE0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      FootStepEffectClassInWater;                               // 0x0CE8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class ATslParticle*                                FootStepEffect;                                           // 0x0CF0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class ATeam*                                       Team;                                                     // 0x0CF8(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData14[0x20];                                      // 0x0D00(0x0020) MISSED OFFSET
	class UTslViewTargetTempComponent*                 ViewTargetTempComponent;                                  // 0x0D20(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTslCharacterValidateLocationComponent*      ValidateLocationComponent;                                // 0x0D28(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTslThrowableTrajectoryViewComponent*        ThrowableTrajectoryViewComponent;                         // 0x0D30(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData15[0x20];                                      // 0x0D38(0x0020) MISSED OFFSET
	struct FString                                     CharacterNetId;                                           // 0x0D58(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	struct FString                                     CharacterName;                                            // 0x0D68(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	struct FName                                       HeadAttachPoint;                                          // 0x0D78(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CameraHeadHideDistance;                                   // 0x0D80(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData16[0xC];                                       // 0x0D84(0x000C) MISSED OFFSET
	class Vector3D                                     CrouchedCameraMove;                                       // 0x0D90(0x000C) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector3D                                     PronedCameraMove;                                         // 0x0D9C(0x000C) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector3D                                     GroggyCameraMove;                                         // 0x0DA8(0x000C) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CrouchedCameraMoveSpeed;                                  // 0x0DB4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PronedCameraMoveSpeed;                                    // 0x0DB8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              GroggyCameraMoveSpeed;                                    // 0x0DBC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData17[0x48];                                      // 0x0DC0(0x0048) MISSED OFFSET
	struct FTakeHitInfo                                LastTakeHitInfo;                                          // 0x0E08(0x0040) (CPF_Net, CPF_Transient)
	float                                              TargetingSpeedModifier;                                   // 0x0E4C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData18[0x1];                                       // 0x0E50(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.TslCharacter.TargetingType
	float                                              Stand_RunningSpeedModifier;                               // 0x0E54(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Stand_SprintingSpeedModifier;                             // 0x0E58(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Stand_SprintingBigGunModifier;                            // 0x0E5C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Stand_SprintingRifleModifier;                             // 0x0E60(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Stand_SprintingSmallGunMOdifier;                          // 0x0E64(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Crouch_RunningSpeedModifier;                              // 0x0E68(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Crouch_SprintingSpeedModifier;                            // 0x0E6C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Prone_RunningSpeedModifier;                               // 0x0E70(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Prone_SprintingSpeedModifier;                             // 0x0E74(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ReviveCastingTime;                                        // 0x0E78(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      bWantsToRun : 1;                                          // 0x0E7C(0x0001) (CPF_Net, CPF_Transient)
	unsigned char                                      bWantsToSprint : 1;                                       // 0x0E7C(0x0001) (CPF_Net, CPF_Transient)
	unsigned char                                      bWantsToSprintingAuto : 1;                                // 0x0E7C(0x0001) (CPF_Net, CPF_Transient)
	unsigned char                                      bWantsToRollingLeft : 1;                                  // 0x0E7C(0x0001) (CPF_Net, CPF_Transient)
	unsigned char                                      bWantsToRollingRight : 1;                                 // 0x0E7C(0x0001) (CPF_Net, CPF_Transient)
	unsigned char                                      bIsPeekLeft : 1;                                          // 0x0E7C(0x0001) (CPF_Net, CPF_Transient)
	unsigned char                                      bIsPeekRight : 1;                                         // 0x0E7C(0x0001) (CPF_Net, CPF_Transient)
	unsigned char                                      IgnoreRotation : 1;                                       // 0x0E7C(0x0001) (CPF_Net, CPF_Transient)
	unsigned char                                      bIsGroggying : 1;                                         // 0x0E7D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_EditConst)
	unsigned char                                      bIsThirdPerson : 1;                                       // 0x0E7D(0x0001) (CPF_Net, CPF_Transient)
	unsigned char                                      bIsReviving : 1;                                          // 0x0E7D(0x0001) (CPF_Net, CPF_Transient)
	unsigned char                                      bIsWeaponObstructed : 1;                                  // 0x0E7D(0x0001) (CPF_Net, CPF_Transient)
	unsigned char                                      bIsCoatEquipped : 1;                                      // 0x0E7D(0x0001) (CPF_Net, CPF_Transient)
	unsigned char                                      bIsZombie : 1;                                            // 0x0E7D(0x0001) (CPF_Net, CPF_Transient)
	unsigned char                                      bIsThrowHigh : 1;                                         // 0x0E7D(0x0001) (CPF_Net, CPF_Transient)
	unsigned char                                      bUseRightShoulderAiming : 1;                              // 0x0E80(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class Rotator                                      GunDirectionSway;                                         // 0x0E84(0x000C) (CPF_Net, CPF_Transient, CPF_IsPlainOldData)
	class Vector3D                                     AimOffsets;                                               // 0x0E90(0x000C) (CPF_Net, CPF_Transient)
	class Vector3D                                     LastAimOffsets;                                           // 0x0E9C(0x000C)
	float                                              AimoffsetsLastRepTime;                                    // 0x0EA8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData19[0x2C];                                      // 0x0EAC(0x002C) MISSED OFFSET
	class Rotator                                      CurrentAutoRotator;                                       // 0x0ED8(0x000C) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AutoPitchValueMax;                                        // 0x0EE4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AutoPitchBlendSpeed;                                      // 0x0EE8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData20[0xC];                                       // 0x0EEC(0x000C) MISSED OFFSET
	class UCurveFloat*                                 Curve_JumpCamera;                                         // 0x0EF8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveVector*                                Curve_FPPCameraOffsetByFOV;                               // 0x0F00(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 Curve_DBNOFadeOut;                                        // 0x0F08(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DBNOFadeOutLerpSpeed;                                     // 0x0F10(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 Curve_StandWalk;                                          // 0x0F18(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 Curve_StandRun;                                           // 0x0F20(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 Curve_StandSprint;                                        // 0x0F28(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 Curve_CrouchWalk;                                         // 0x0F30(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 Curve_CrouchRun;                                          // 0x0F38(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 Curve_CrouchSprint;                                       // 0x0F40(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 Curve_ProneWalk;                                          // 0x0F48(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 Curve_ProneRun;                                           // 0x0F50(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 Curve_ProneSprint;                                        // 0x0F58(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 Curve_Swim;                                               // 0x0F60(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 Curve_UnderwaterSwim;                                     // 0x0F68(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 Curve_StandScope;                                         // 0x0F70(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 Curve_CrouchScope;                                        // 0x0F78(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 Curve_ProneScope;                                         // 0x0F80(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 Curve_StandAim;                                           // 0x0F88(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 Curve_CrouchAim;                                          // 0x0F90(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 Curve_ProneAim;                                           // 0x0F98(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 Curve_DBNO;                                               // 0x0FA0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 Curve_GroundAngle;                                        // 0x0FA8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveVector*                                Curve_WeaponSway;                                         // 0x0FB0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 Curve_TurningLerp;                                        // 0x0FB8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 Curve_TurningLerpLocomotion;                              // 0x0FC0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DirectionalSpeedModifier;                                 // 0x0FC8(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PointDamageForceMultiplier;                               // 0x0FCC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PointDamageForce_MapMin;                                  // 0x0FD0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PointDamageForce_MapMax;                                  // 0x0FD4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RadialDamageForceMultiplier;                              // 0x0FD8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TEnumAsByte<ERadialImpulseFalloff>                 RadialDamageFalloffType;                                  // 0x0FDC(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimMontage*                                RollLeftAnim;                                             // 0x0FE0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimMontage*                                RollRightAnim;                                            // 0x0FE8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FCharacterAnim                              CharacterAnim;                                            // 0x0FF0(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
	class AController*                                 NetOwnerController;                                       // 0x1000(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              LeanAlphaSpeed;                                           // 0x1008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              TurnSpeedHip;                                             // 0x100C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              TurnSpeedAimed;                                           // 0x1010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              TurnSpeedOverLimit;                                       // 0x1014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MinTurnAngleHip;                                          // 0x1018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MinTurnAngleAim;                                          // 0x101C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              TurnLinearEndThreshold;                                   // 0x1020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bNonLinearTurn : 1;                                       // 0x1024(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              TurnNonLinearEndThreshold;                                // 0x1028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              TurnNonLinearInterpSpeed;                                 // 0x102C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CapsuleTurnInterpSpeedLocomotion;                         // 0x1030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CapsuleTurnInterpSpeedLocomotionSprint;                   // 0x1034(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CapsuleTurnInterpSpeedLocomotionProne;                    // 0x1038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CapsuleTurnInterpSpeedStationary;                         // 0x103C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData21[0x18];                                      // 0x1040(0x0018) MISSED OFFSET
	struct FName                                       FPPCameraBoneName;                                        // 0x1058(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       TPPCameraBoneName;                                        // 0x1060(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData22[0xC];                                       // 0x1068(0x000C) MISSED OFFSET
	float                                              AimStateDefaultTime;                                      // 0x1074(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AimStateReturnTime;                                       // 0x1078(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AimStateDrawTime;                                         // 0x107C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData23[0x8];                                       // 0x1080(0x0008) MISSED OFFSET
	unsigned char                                      bAimStateActive : 1;                                      // 0x1088(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bFreeMode : 1;                                            // 0x1089(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CanGroggyDamageTime;                                      // 0x1090(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FText                                       GroggyStartText;                                          // 0x1098(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FText                                       GroggyCancelText;                                         // 0x10B0(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FText                                       GroggyFinishText;                                         // 0x10C8(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	float                                              GamepadRunningValue;                                      // 0x10E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData24[0xC];                                       // 0x10E4(0x000C) MISSED OFFSET
	class Rotator                                      BlendTargetViewRotation;                                  // 0x10F0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector2D                                     DesiredDirection;                                         // 0x10FC(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	class UClass*                                      InvulnerablilityBuff;                                     // 0x1108(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bInvulnerablilityEffectVisible : 1;                       // 0x1110(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<class UClass*>                              ComponentsToDestroyOnDedicatedServer;                     // 0x1118(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<struct FZombieCustomizationData>            ZombieCustomizationData;                                  // 0x1128(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	unsigned char                                      bIsHoldingBreath : 1;                                     // 0x1138(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Health;                                                   // 0x113C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HealthMax;                                                // 0x1140(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              GroggyHealth;                                             // 0x1144(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              GroggyHealthMax;                                          // 0x1148(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DecreaseGroggyHealthPerSecond;                            // 0x114C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              GroggyDamageWeight;                                       // 0x1150(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      GroggyDamageType;                                         // 0x1158(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HealthByRevive;                                           // 0x1160(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               GroggyToDieAkEvent;                                       // 0x1168(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BoostGauge;                                               // 0x1170(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BoostGaugeMax;                                            // 0x1174(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DecreaseTimerSecond;                                      // 0x1178(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DecreaseBoostGaugeByTime;                                 // 0x117C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FBuffWithBoostGauge>                 BuffWithBoostGauge;                                       // 0x1180(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	class UClass*                                      MedKitClass;                                              // 0x1190(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      FirstAidClass;                                            // 0x1198(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      BandageClass;                                             // 0x11A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      AdrenalineClass;                                          // 0x11A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      PainKillerClass;                                          // 0x11B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      EnergyDrinkClass;                                         // 0x11B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UClass*>                              BoostItemClasses;                                         // 0x11C0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<class UClass*>                              HealItemClasses;                                          // 0x11D0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	class UClass*                                      GrenadeClass;                                             // 0x11E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      MolotovClass;                                             // 0x11E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      SmokeBombClass;                                           // 0x11F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      FlashBangClass;                                           // 0x11F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TWeakObjectPtr<class ATslPlayerState>              LaunchInstigator;                                         // 0x1204(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TWeakObjectPtr<class AActor>                       LaunchCauser;                                             // 0x120C(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      LaunchDamageTypeClass;                                    // 0x1218(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	double                                             LastLaunchTime;                                           // 0x1220(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class APlayerState*                                AuthorizedPlayerState;                                    // 0x1228(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData25[0x1];                                       // 0x1230(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.TslCharacter.ShoesSoundType
	class UInteractorComponent*                        InteractorComponent;                                      // 0x1238(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UInteractionComponent*                       InteractionComponent;                                     // 0x1240(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData26[0x18];                                      // 0x1248(0x0018) MISSED OFFSET
	class UVehicleRiderComponent*                      VehicleRiderComponent;                                    // 0x1260(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UClass*                                      OutSidePlayerAreaEffectClass;                             // 0x1268(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class ATslPostProcessEffect*                       OutSidePlayerAreaEffect;                                  // 0x1270(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class UClass*                                      DBNOEffectClass;                                          // 0x1278(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ATslPostProcessEffect*                       DBNOEffect;                                               // 0x1280(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData27[0x1E0];                                     // 0x1288(0x01E0) MISSED OFFSET
	class USkeletalMeshComponent*                      ShadowMesh;                                               // 0x1468(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              TargetingFOV;                                             // 0x1470(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              AimingDelay;                                              // 0x1474(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData28[0x8];                                       // 0x1478(0x0008) MISSED OFFSET
	float                                              AttackStateOffDelayTime;                                  // 0x1480(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HitStateOffDelayTime;                                     // 0x1484(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HitMePlayerStateOffDelayTime;                             // 0x1488(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData29[0x34];                                      // 0x148C(0x0034) MISSED OFFSET
	class UTslPlayerDamageConfig*                      DamageConfig;                                             // 0x14C0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FallDamageFactor;                                         // 0x14CC(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              FallDamageVelocityMin;                                    // 0x14D0(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bIsActiveRagdollActive : 1;                               // 0x14D4(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CorpseLifeSpan;                                           // 0x14D8(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData30[0xB4];                                      // 0x14DC(0x00B4) MISSED OFFSET
	TEnumAsByte<EStanceMode>                           PreReplicatedStanceMode;                                  // 0x1590(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     JumpStartLocation_CP;                                     // 0x1594(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector3D                                     LandPredictedLocation_CP;                                 // 0x15A0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FallHeight_CP;                                            // 0x15AC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bIsVaulting_CP : 1;                                       // 0x15B0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              VaultTimer_CP;                                            // 0x15B4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector3D                                     VaultEndVelocity_CP;                                      // 0x15B8(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector3D                                     VaultLastLocation_CP;                                     // 0x15C4(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bIsClimbing_CP : 1;                                       // 0x15D0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bEndVaultToFall_CP : 1;                                   // 0x15D1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector3D                                     VaultEndVelocityVectorMutliplier;                         // 0x15D4(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              VaultEndVelocityVectorClamp;                              // 0x15E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class ATslVaultingHelper*                          VaultingHelperRef;                                        // 0x15E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      bIsVaultingSystemEnabled : 1;                             // 0x15F0(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              VaultingDirection_CP;                                     // 0x15F4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_IsPlainOldData)
	class UVaultingData*                               CurrentVaultData_CP;                                      // 0x15F8(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bServerFinishedVault : 1;                                 // 0x1600(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              JumpDelay;                                                // 0x1604(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              JumpLastTimer;                                            // 0x1608(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bWantsToVault : 1;                                        // 0x160C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bWantsToCancelVault : 1;                                  // 0x160D(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              VaultProbeLoopTime;                                       // 0x1610(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              GamepadReloadHoldTime;                                    // 0x1614(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	struct FTimerHandle                                TimerHandle_GamepadReloadHold;                            // 0x1618(0x0008)
	struct FAnimUpdateRateSettings                     AnimationUpdateRateSettings;                              // 0x1620(0x0078) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	float                                              TO_CulledMovementTickrate;                                // 0x1698(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              TO_CulledActorTickInterval;                               // 0x169C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              TO_MinimumDistance;                                       // 0x16A0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bRunTickOptimization : 1;                                 // 0x16A4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bRunTickOptimization_Anim : 1;                            // 0x16A5(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bRunTickOptimization_Movement : 1;                        // 0x16A6(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              TO_RenderedTolerance;                                     // 0x16A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bTickOptimization_Move_Active : 1;                        // 0x16AC(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      bTickOptimization_Anim_Active : 1;                        // 0x16AD(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      bTickOptimization_Actor_Active : 1;                       // 0x16AE(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              GamepadUnarmHoldTime;                                     // 0x16B4(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              GamepadNextGunWeaponTabMaxTime;                           // 0x16B8(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData31[0x49];                                      // 0x16BC(0x0049) MISSED OFFSET
	unsigned char                                      bIsDemoVaulting_CP : 1;                                   // 0x1705(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData32[0xA];                                       // 0x1706(0x000A) MISSED OFFSET
	class UBluezoneInOutComponent*                     BluezoneInOut;                                            // 0x1710(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class UBluezoneInOutSoundEffectComponent*          BluezoneInOutSoundEffect;                                 // 0x1718(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class UGamePadInputAixsComponent*                  GamePadInputAixsComponent;                                // 0x1720(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData33[0x8];                                       // 0x1728(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslCharacter");
		return ptr;
	}


	void UpdateWeaponAttachPoint();
	void UnBindCallbackToHUD(class ATslPlayerController* InController);
	void ToggleInvincibility();
	void ToggleFreeMode();
	void ToggleAnimDynamics();
	bool TickOptimization_ShouldRunMovementUpdate();
	bool TickOptimization_ShouldRunAnimUpdate();
	bool TickOptimization_IsOverMinimumDistance();
	void TickOptimization_Eval();
	void StopAllAnimMontages();
	void STAT_TickEnd();
	void STAT_TickBegin();
	void SpawnPunchImpact_Reliable(const class Vector3D& InLocation, const class Rotator& InRotation);
	void SpawnPunchImpact(const class Vector3D& InLocation, const class Rotator& InRotation);
	void SpawnBulletPassByEffect(const class Vector3D& Location, float BulletVelocity);
	void SimulatePhysicalHitRecovery();
	void SimulateHeadShot(const struct FTransform& SpawnTransform, const struct FTransform& ImpactTransform);
	void ShowDynamicCrosshair(bool bShow);
	void ShowCharacterInformation(bool bFullInfo);
	void SetWorldTransformIdentity();
	void SetWeaponInertia(const class Rotator& InInertia);
	void SetupWeaponBlueprint();
	void SetTPPSpringarmOffset(float VerticalOffset);
	void SetTickOptimization_Movement(bool bActivate);
	void SetTickOptimization_Anim(bool bActivate);
	void SetTickOptimization_Actor(bool bActivate);
	void SetSwayDebuffParameters(float SwaySpeed, float SwayVerticalMultiplier, float SwayHorizontalMultiplier);
	void SetServerVaultFinished(bool InFinished);
	void SetParachuteLandingAssist(bool bAssistActive);
	void SetMovementEnabled(bool IsEnabled);
	void SetLaunchEvent(const struct FAttackId& AttackId, class ATslPlayerState* InPlayerState, class AActor* Causer, class UClass* DamageTypeClass);
	void SetJumpStartLocationAndFallheight(const class Vector3D& JumpStartLoc, float FallHeight);
	void SetCustomDepth(bool bOn);
	void SetCharacterVaultingData(float InVaultTimer, bool InIsVaulting, bool InIsClimbing, bool InEndVaultToFall, float InDirection);
	void SetCanGroggyDamage(bool bInCanGroggyDamage);
	void SetBulletSpawnOverride(bool InOverride);
	void SetBuffFinalSpreadFactor(float FinalSpreadFactor);
	void SetBoostGauge(float NewBoostGauge);
	void SetAnimationAkSwitch(const struct FString& SwitchGroup, const struct FString& SwitchState);
	void SetAnimationAkRTPC(const struct FString& RTPCName, float RTPCValue);
	void SetAimStateActive(bool IsActive);
	void SetADSSocketOffset(const class Vector3D& NewOffset);
	void SetActiveRagdoll(bool bIsActive);
	void SetAccessorySlot_Thrown(class UTslAccessoryComponent* AccessoryComponent);
	void SetAccessorySlot_SideArm(class UTslAccessoryComponent* AccessoryComponent);
	void SetAccessorySlot_Secondary(class UTslAccessoryComponent* AccessoryComponent);
	void SetAccessorySlot_Primary(class UTslAccessoryComponent* AccessoryComponent);
	void SetAccessorySlot_Melee(class UTslAccessoryComponent* AccessoryComponent);
	void SetAccessorySlot(class UTslAccessoryComponent* AccessoryComponent);
	void ServerSetVariableZoomLevel(int ZoomLevel);
	void ServerSetTargeting();
	void ServerSetSprintingAuto(bool bNewSprintingAuto);
	void ServerSetSprinting(bool bNewSprinting);
	void ServerSetRunning(bool bNewRunning);
	void ServerSetRolling(bool bNewRolling, bool bIsLeft);
	void ServerSetPeekRight(bool bNewPeekRight, bool InbUseRightShoulderAiming);
	void ServerSetPeekLeft(bool bNewPeekLeft, bool InbUseRightShoulderAiming);
	void ServerSetHoldingBreath(bool bNewHoldingBreath);
	void ServerSetGunDirectionSway(const class Rotator& InGunDirectionSway);
	void ServerSetAimOffsets(const class Vector3D& NewAimOffsets);
	void ServerBroadCastAimingRemote(bool InbIsAming);
	void Server_UnarmedHitNotify(const struct FHitResult& Hit, TEnumAsByte<EPunchDamageType> PunchDamageType, TArray<float> AimSpeeds, uint32_t HitSeq);
	void Server_SetWeaponObstruction(bool bNewObstruction);
	void Server_SetVaultCancel(bool InCancel);
	void Server_SetThrowMode(bool bNewVal);
	void Server_SetParachuteLandingAssist(bool bAssistActive);
	void Server_SetFiringMode();
	void Server_SetCoatEquipped(bool IsEquipped);
	void Server_SetCastAnim();
	void Server_SetCanGroggyDamage(bool bInCanGroggyDamage);
	void Server_SetAimState(bool IsActive);
	void Server_PlayUnarmedAttack(int AnimationIndex);
	void Server_CastFinishNotify();
	void Server_CastCancelNotify();
	void SendSystemMessage(const struct FText& Message);
	void RunVaultCheck_BP();
	void ResetUnarmedAttack();
	void ResetParachute();
	void RemoveCrosshair();
	void ReevaluaeTargetingState();
	void PunchStart(TEnumAsByte<EPunchDamageType> PunchDamageType, float PunchDistance, float PunchRadius, TArray<float> InAimSpeeds);
	void ProcessRevive(float RemainGroggyHealthPercent);
	void ProcessDBNO(float GroggyHealthPercent);
	void PrepareParachute(class UClass* ParachuteType);
	void PlayCameraAnim(class UCameraAnim* CameraAnim);
	bool PickUpItem(class UItem* Item, const struct FName& TargetContainer, const struct FString& Options);
	void OnWeaponChanged();
	void OnWeapon_6();
	void OnWeapon_5();
	void OnWeapon_4();
	void OnWeapon_3();
	void OnWeapon_2();
	void OnUnarmPad();
	void OnUnarm();
	void OnThrowWeaponPad();
	void OnTest_SetupWeapon();
	void OnTest_InspectObject();
	void OnStopTargeting();
	void OnStopFire();
	void OnStartInteractBy(class ATslCharacter* OtherCharacter);
	void OnShowDynamicCrosshair(bool bShow);
	void OnRep_WeaponProcessor();
	void OnRep_VariableZoomLevel();
	void OnRep_TargetingType();
	void OnRep_ShoesSoundType();
	void OnRep_ReviveCastingTime();
	void OnRep_LastTakeHitInfo();
	void OnRep_IsWeaponObstructed();
	void OnRep_IsThrowHigh();
	void OnRep_IsThirdPerson();
	void OnRep_IsScopingRemote();
	void OnRep_IsReviving();
	void OnRep_IsPeekRight();
	void OnRep_IsPeekLeft();
	void OnRep_IsInVehicleRemote();
	void OnRep_IsGroggying();
	void OnRep_IsFirstPersonRemote();
	void OnRep_IsDemoVaulting();
	void OnRep_IsCrouched();
	void OnRep_IsCoatEquipped();
	void OnRep_IsAimingRemote();
	void OnRep_IgnoreRotation();
	void OnRep_Health(float LastHealth);
	void OnRep_GroggyHealth(float LastGroggyHealth);
	void OnRep_CharacterState();
	void OnRep_CastAnim();
	void OnRep_BoostGauge(float LastBoostGauge);
	void OnRep_AimStateActive();
	void OnRep_AimOffsets(const class Vector3D& PrevAimOffsets);
	void OnReloadGamepad();
	void OnMeleeWeaponPad();
	void OnInvulnerable();
	void OnInteractBy(class ATslCharacter* OtherCharacter);
	void OnIncreaseMaxFlyAccerleration();
	void OnFreeMoveMode();
	void OnDecreaseMaxFlyAccerleration();
	void OnChangeBreath(float Breath, float LastBreath, float BreathMax);
	void OnCancelInteractBy(class ATslCharacter* OtherCharacter);
	void OnBlockingWidgetOpened(class UWidget* Widget);
	void NotHaveThrowItemNotifyMessage(const struct FText& ItemName);
	void NotHaveHealItemNotifyMessage(const struct FText& ItemName);
	void NotHaveBoostItemNotifyMessage();
	void NativeOnWeaponChanged();
	void LocalMagazineDrop(const class Vector3D& InitialVelocity);
	void LocalHandleVault_CP(const class Vector3D& V_Start, const class Vector3D& V_Apex, const class Vector3D& V_ApexAdditive, const class Vector3D& V_End, bool bIsClimb, bool bEndToFall, float Direction, float PlayerVelocity, float DistanceFromObject);
	bool IsZooming();
	bool IsZombie();
	bool IsWeaponUsingHighMagnificationScope();
	bool IsVehiclePassenger();
	bool IsVehicleDriver();
	bool IsVaultingEnabled();
	bool IsVaultingDebugEnabled();
	bool IsVaulting();
	bool IsVaultCancelled();
	bool IsUsingRightShoulderAiming();
	bool IsUpperCollision();
	bool IsUnderwater();
	bool IsUnderRoof();
	bool IsTeamMatch();
	bool IsTargeting();
	bool IsSwimming();
	bool IsSprinting();
	bool IsSpectatingCharacter();
	bool IsSitting();
	bool IsScoping();
	bool IsRunning();
	bool IsRolling();
	bool IsReviving();
	bool IsQuitter();
	bool IsQuickThrowHigh();
	bool IsPlayingPickUpAnimation();
	bool IsPeekRight();
	bool IsPeekLeft();
	bool IsParachuting();
	bool IsMoving();
	bool IsMouseUse();
	bool IsMeleeAttacking();
	bool IsMagazineHandAttached();
	bool IsMagazineGunAttached();
	bool IsLocalOrSpectating();
	bool IsInWaterVolume();
	bool IsInVehicle();
	bool IsInteracting();
	bool IsIndoor();
	bool IsInAircraft();
	bool IsHoldingBreath();
	bool IsHitted();
	bool IsHipped();
	bool IsGroggying();
	bool IsFreelooking();
	bool IsForcingFall();
	bool IsForceRotation();
	bool IsForcedProneAfterFall();
	bool IsFollowingCharacter();
	bool IsFloating();
	bool IsFirstPerson();
	bool IsFiring();
	bool IsFallingWithParachute();
	bool IsFallingFromHighAltitude();
	bool IsDying();
	bool IsCycleInProgress();
	bool IsCoatEquipped();
	bool IsCasting();
	bool IsCameraUnderwater();
	bool IsAudioTestEnabled();
	bool IsAttacked();
	bool IsAnimDynamicsEnabled();
	bool IsAlive();
	bool IsActiveRagdoll();
	void HaveNotAnyHealItemNotifyMessage();
	bool HasWeaponLeftHandIKSocket();
	bool HasWeapon(class UClass* WeaponClass);
	bool HasAnimatableObject();
	void HandleVaulting_BP(const class Vector3D& ImpactLocation, const class Vector3D& CapsulePredictedLocation, const class Vector3D& Normal2D, const class Vector3D& DirectionVecotor, bool bForceVault, float JumpDistance, bool bBlockVault, bool bBlockClimb);
	void HandleVaultEnd_CP(const class Vector3D& InVaultEndVelocity);
	void HandleCapsuleCollision();
	void GiveWeapon(class UClass* WeaponClass);
	class ATslWeapon_Throwable* GetWeaponThrowable();
	float GetWeaponReloadPlayRate();
	class AWeaponProcessor* GetWeaponProcessor();
	bool GetWeaponObstructionRemote();
	float GetWeaponMovementModifierScope();
	float GetWeaponMovementModifierAim();
	struct FTransform GetWeaponLeftHandIKTransform();
	class Rotator GetWeaponInertia();
	struct FTransform GetWeaponHandIK_Right();
	struct FTransform GetWeaponHandIK_Left();
	float GetWeaponGunCollisionAlpha();
	class ATslWeapon_Gun* GetWeaponGun();
	float GetWeaponADSTimeModifier();
	class ATslWeapon* GetWeapon();
	bool GetWantsToJump();
	class UTslVehicleSeatComponent* GetVehicleSeatComponent();
	class UVehicleSeatInteractionComponent* GetVehicleSeat();
	class UVehicleRiderComponent* GetVehicleRiderComponent();
	class APawn* GetVehiclePawn();
	TScriptInterface<class UTslVehicleInterface> GetVehicleInterface();
	float GetVaultTimer();
	float GetVaultingDirection();
	int GetVaultingDebugType();
	class UVaultingData* GetVaultingDataByEnum();
	class ATslPlayerState* GetTslPlayerState();
	class ATslPlayerController* GetTslPlayerController();
	class UTslCharacterMovement* GetTslCharacterMovement();
	float GetTPPSpringarmOffset();
	class UCurveFloat* GetTPPCameraCurve();
	class ATeam* GetTeam();
	float GetTargetingSpeedModifier();
	TEnumAsByte<EStanceMode> GetStance();
	float GetSprintingSpeedModifier_Stand();
	float GetSprintingSpeedModifier_Prone();
	float GetSprintingSpeedModifier_Crouch();
	float GetSprintCurrentValue();
	float GetSpeedModifierByWeaponClass();
	float GetSpeedKmPerHour2D();
	struct FString GetShortPlayerName();
	bool GetServerVaultFinished();
	float GetRunningSpeedModifier_Stand();
	float GetRunningSpeedModifier_Prone();
	float GetRunningSpeedModifier_Crouch();
	struct FName GetReactionBone(const struct FName& BoneName);
	struct FString GetPlayerName();
	bool GetParachuteLandingAssist();
	class AParachuteVehicle* GetParachute();
	TScriptInterface<class UInteractionInterface> GetObjectCanInteract();
	float GetMaxSprintSpeed();
	float GetMaxGroundSpeedOnSlope();
	struct FString GetLocationString();
	float GetLeanRightAlpha();
	float GetLeanLeftAlpha();
	class Rotator GetLastMoveRotation();
	class AInventoryFacade* GetInventoryFacade();
	class Vector3D GetInteractObjectLocation();
	struct FString GetInteractionString();
	float GetIndoorFactor();
	class Rotator GetFreelookSavedRotation();
	class Rotator GetFreelookDeltaRotation();
	bool GetDynamicCrosshairHidden();
	class UClass* GetDropPackageType();
	struct FString GetDirectionString();
	float GetDirectionalSpeedModifier(TEnumAsByte<EMovementType> StanceType);
	class Rotator GetDesiredRotation();
	class ATslWeapon* GetCurrentWeapon();
	float GetCurrentWaterSurfaceZ();
	float GetCurrentWaterSurfaceBaseZ();
	float GetCurrentWaterDepth();
	class Rotator GetCurrentSway();
	class UStaticMesh* GetCurrentMagazineMesh();
	struct FTransform GetCurrentMagazineLocation();
	float GetCurrentHeightFromWaterFloor();
	bool GetCtrlShortCutOnOff();
	TScriptInterface<class UInteractionInterface> GetComponentCanInteract();
	class ATslPlayerState* GetClientTslPlayerState();
	struct FString GetCharacterNetId();
	class UObject* GetCastObject();
	class Vector3D GetCameraDOF();
	float GetCameraAnimOverrideAlpha();
	bool GetBulletSpawnOverride();
	class UBuffComponet* GetBuffComponent();
	class UCharacterBreathComponent* GetBreathComponent();
	void GetAnimWeaponType();
	void GetAnimStance();
	float GetAimStateTimer();
	float GetAimStateAlpha();
	class Rotator GetAimOffsets();
	class Vector3D GetADSSocketOffset();
	class AActor* GetActorCanInteract();
	class UCameraComponent* GetActiveCamera();
	class UTslAccessoryComponent* GetAccessorySlot();
	void FixupCamera();
	class ATslWeapon* FindWeapon(class UClass* WeaponClass);
	bool EnableScopeOutsideBlur();
	void EnableAudioTest();
	void DisableCollision();
	void DelayedFire();
	void ClientSoundPlayMulticast(class UAkAudioEvent* SoundAk);
	void ClientSoundPlay(class UAkAudioEvent* SoundAk);
	void ClientSimulationArmorDestruction(const struct FTransform& Impact);
	void ClientSetTargeting();
	void ClientSendGroggyMessage(class ATslPlayerState* GroggyCauserPlayerState, class ATslPlayerState* VictimPlayerState, class UDamageType* GroggyCauserDamageType, const struct FText& DamageCauserName, class UClass* DamageCauserClass);
	void ClientRevivedCastingWidgetShow(bool bVisible);
	void ClientProcessRevive(float RemainGroggyHealth);
	void ClientPlayPickUpAnimation(const class Vector3D& InteractionObject);
	void ClientNotifyCrack(const class Vector3D& LocationRelative, float BulletVelocity);
	void ClientMyCharacterPlayPickUpAnimation(const class Vector3D& InteractionObject, float Duration);
	void ClientForceInitStance(TEnumAsByte<EStanceMode> ToStance);
	void ClientDrawDamageInfo(float Damage, class UTslDamageType* DamageType);
	void Client_PlayUnarmedAttack(int AnimationIndex);
	void Client_CastFinishNotify();
	void Client_CastCancelNotify();
	void CheckScopePP();
	void CheckMuzzleCollision();
	void CheckMuzzleBulletSpawn();
	void CheckJumpAndVault(bool bForceVelocity, const class Vector3D& InForcedVelocity);
	void CheckForCoat();
	bool CheckEquipmentSlot(const struct FEquipPosition& InSlotData);
	bool CanSwim();
	void Camera_AimoffsetFix_TppToFpp();
	void Camera_AimoffsetFix_FppToTpp();
	void BindCallbackToHUD(class ATslPlayerController* InController);
	void ApplyRagdollPhysicsForce();
	void Anim_MagazineShow(bool bShow);
	void Anim_MagazineHandAttach(bool bAttach);
	bool Anim_IsMagazineVisible();
	bool AllowInteract(class ATslCharacter* OtherCharacter);
	void AdminSetUpWeapon();
	void AdminInvulnerable();
	void AdminFreeMoveMode();
	void AddBuffMoveSpeedFactor(float MoveSpeedFactor);
};


// Class TslGame.TslBot
// 0x0000 (0x1730 - 0x1730)
class ATslBot : public ATslCharacter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslBot");
		return ptr;
	}

};


// Class TslGame.ObserverTagWidget
// 0x0040 (0x0280 - 0x0240)
class UObserverTagWidget : public UUserWidget
{
public:
	float                                              OffsetZ;                                                  // 0x0240(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DeadOffsetZ;                                              // 0x0244(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Distance;                                                 // 0x0248(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveFloat*                                 WidgetCurve;                                              // 0x0250(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveFloat*                                 AnchorCurve;                                              // 0x0258(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0260(0x0008) MISSED OFFSET
	class ATslCharacter*                               Character;                                                // 0x0268(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0270(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ObserverTagWidget");
		return ptr;
	}


	void SetTeamNumber(int TeamNumber, const struct FLinearColor& teamColor);
	void SetPlayerNameTag(const struct FName& PlayerName);
	void SetIndicatorColor(const struct FLinearColor& teamColor);
	void SetCharacterIconPosition_UC(const class Vector2D& Pos_UC, bool IsHidden);
	void OnUpdateWidgetTransform(class UWidget* CharacterNameWidget, class UWidget* IndicatorWidget, const class Vector2D& Pos_UC, bool IsHidden);
	bool IsTeamMember();
	bool IsLastSpectatedCharacter();
	void HandleWidgetPrepass(class UWidget* Widget);
	void HandleTeamNumberPrepass(class UWidget* Widget);
	int GetTeamId(class ATslCharacter* TslCharacter);
	struct FLinearColor GetTeamColor(class ATslCharacter* TslCharacter);
};


// Class TslGame.ObserverTagManagerBaseWidget
// 0x0078 (0x02B8 - 0x0240)
class UObserverTagManagerBaseWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0240(0x0070) MISSED OFFSET
	class UClass*                                      WidgetTemplate;                                           // 0x02B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ObserverTagManagerBaseWidget");
		return ptr;
	}


	void UpdateReplicateCharacter();
	void RemoveReplicateCharacter(TArray<class ATslCharacter*> Characters);
	void AddReplicateCharacter(TArray<class ATslCharacter*> Characters);
};


// Class TslGame.TslVehicleInterface
// 0x0000 (0x0028 - 0x0028)
class UTslVehicleInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslVehicleInterface");
		return ptr;
	}


	class USkeletalMeshComponent* GetVehicleMeshComponent();
	class ATslPlayerController* GetTslPlayerController();
};


// Class TslGame.ParachuteVehicle
// 0x0170 (0x0580 - 0x0410)
class AParachuteVehicle : public APawn
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0410(0x0010) MISSED OFFSET
	struct FScriptDelegate                             OnRelease;                                                // 0x0420(0x0014) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference)
	struct FScriptDelegate                             OnLand;                                                   // 0x0430(0x0014) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference)
	class UAkAudioEvent*                               ReleaseSound_Local;                                       // 0x0440(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               ReleaseSound_Remote;                                      // 0x0448(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               LandSound_Local;                                          // 0x0450(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               LandSound_Remote;                                         // 0x0458(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               FallingStartSound_Local;                                  // 0x0460(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               FallingStartSound_Remote;                                 // 0x0468(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkComponent*                                AkSoundCom;                                               // 0x0470(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTslPawnInputBindingComponent*               TslPawnInputBindingComponent;                             // 0x0478(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class USkeletalMeshComponent*                      MeshComponent;                                            // 0x0480(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UParachuteVehicleMovement*                   ParachuteMovementComponent;                               // 0x0488(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UFreeFallMovement*                           FreeFallMovementComponent;                                // 0x0490(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTslVehicleSeatComponent*                    VehicleSeatComponent;                                     // 0x0498(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UDoublePhaseInteractionComponent*            InteractionComponent;                                     // 0x04A0(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	TWeakObjectPtr<class ATslCharacter>                LastDriver;                                               // 0x04A8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x04B0(0x0008) MISSED OFFSET
	struct FName                                       FreeFallFirstPersonCameraName;                            // 0x04B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       FreeFallThirdPersonCameraName;                            // 0x04C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FreeFallCameraPitchMin;                                   // 0x04C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FreeFallCameraPitchMax;                                   // 0x04CC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReleasingAltitude;                                        // 0x04D0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ForceReleasingAltitude;                                   // 0x04D4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x18];                                      // 0x04D8(0x0018) MISSED OFFSET
	float                                              SweepMoveHeight;                                          // 0x04F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LandingHeight;                                            // 0x04F4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LandingDuration;                                          // 0x04F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      LandingBuff;                                              // 0x0500(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0xC];                                       // 0x0508(0x000C) MISSED OFFSET
	float                                              StuckCheckDistance;                                       // 0x0514(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StuckCheckDuration;                                       // 0x0518(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0xC];                                       // 0x051C(0x000C) MISSED OFFSET
	unsigned char                                      ForwardInputRepApplied : 1;                               // 0x0528(0x0001) (CPF_Net, CPF_Transient)
	unsigned char                                      ForwardInputRepIsForward : 1;                             // 0x0528(0x0001) (CPF_Net, CPF_Transient)
	unsigned char                                      RightInputRepApplied : 1;                                 // 0x0528(0x0001) (CPF_Net, CPF_Transient)
	unsigned char                                      RightInputRepIsRight : 1;                                 // 0x0528(0x0001) (CPF_Net, CPF_Transient)
	unsigned char                                      bIsReleased : 1;                                          // 0x0528(0x0001) (CPF_Net, CPF_Transient)
	unsigned char                                      bIsDriven : 1;                                            // 0x0528(0x0001) (CPF_Net, CPF_Transient)
	struct FSkinData                                   SkinData;                                                 // 0x0530(0x0020) (CPF_Net, CPF_Transient)
	class Rotator                                      InitialRotation;                                          // 0x0550(0x000C) (CPF_Transient, CPF_IsPlainOldData)
	class Vector3D                                     InitialVelocity;                                          // 0x055C(0x000C) (CPF_Transient, CPF_IsPlainOldData)
	class Vector3D                                     RideSocketOffset;                                         // 0x0568(0x000C) (CPF_Net, CPF_Transient, CPF_IsPlainOldData)
	class Vector3D                                     LeaveSocketOffset;                                        // 0x0574(0x000C) (CPF_Net, CPF_Transient, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ParachuteVehicle");
		return ptr;
	}


	void ServerRelease();
	void PhysicsVolumeChanged(class APhysicsVolume* NewVolume);
	void OnSecondInteractBy(class ATslCharacter* Character);
	void OnRide(class ATslCharacter* Rider, class UVehicleSeatInteractionComponent* Seat);
	void OnRep_SkinData();
	void OnRep_IsReleased();
	void OnRep_IsDriven();
	void OnPostDriverLeave();
	void OnInteractBy(class ATslCharacter* Character);
	void OnDriverRide();
	void OnDriverLeave();
	void Land();
	bool IsStuck();
	bool IsReleased();
	bool IsDriven();
	float GetAltitudeFromFloor();
	bool CanReleaseByInput();
	bool CanRelease();
	bool AllowSecondInteractBy(class ATslCharacter* Character);
	bool AllowInteractBy(class ATslCharacter* Character);
};


// Class TslGame.ReplicatedRootComponent
// 0x0000 (0x03F0 - 0x03F0)
class UReplicatedRootComponent : public USceneComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ReplicatedRootComponent");
		return ptr;
	}

};


// Class TslGame.ReplicationTrigger
// 0x0030 (0x03E0 - 0x03B0)
class AReplicationTrigger : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03B0(0x0008) MISSED OFFSET
	TArray<class AActor*>                              TargetReplicatedActors;                                   // 0x03B8(0x0010) (CPF_ZeroConstructor)
	int                                                ReplicationGroupCount;                                    // 0x03CC(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              ReplicationGroupIntervalSeconds;                          // 0x03D4(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x03D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ReplicationTrigger");
		return ptr;
	}


	void EnableReplicationGroup();
};


// Class TslGame.ReplicationTriggerManager
// 0x0028 (0x03D8 - 0x03B0)
class AReplicationTriggerManager : public AInfo
{
public:
	TArray<class UClass*>                              TargetReplicatedActorClasses;                             // 0x03B0(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnTemplate)
	float                                              TriggerRadius;                                            // 0x03C0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)
	float                                              TriggerInterval;                                          // 0x03C4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)
	TArray<class AReplicationTrigger*>                 Triggers;                                                 // 0x03C8(0x0010) (CPF_ZeroConstructor, CPF_Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ReplicationTriggerManager");
		return ptr;
	}

};


// Class TslGame.ReporterManager
// 0x0098 (0x00C0 - 0x0028)
class UReporterManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x0028(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ReporterManager");
		return ptr;
	}

};


// Class TslGame.RewardData
// 0x0028 (0x0058 - 0x0030)
class URewardData : public UDataAsset
{
public:
	float                                              DefaultScoreMultiplierByDamage;                           // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DefaultScoreMultiplierByKill;                             // 0x0034(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<float>                                      ScoreByReverseRanking;                                    // 0x0038(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<float>                                      ScoreMultiplierByRanking;                                 // 0x0048(0x0010) (CPF_Edit, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.RewardData");
		return ptr;
	}

};


// Class TslGame.SceneInteractionComponent
// 0x0110 (0x0500 - 0x03F0)
class USceneInteractionComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03F0(0x0010) MISSED OFFSET
	float                                              MaxInteractableDistance;                                  // 0x0400(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FText                                       InteractionVerb;                                          // 0x0408(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FText                                       InteractiveObjectName;                                    // 0x0420(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	unsigned char                                      bUseTraceCheck : 1;                                       // 0x0438(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FCastConfig                                 CastConfig;                                               // 0x0440(0x0038) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0478(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnInteractBy;                                             // 0x0480(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    ClientOnInteractBy;                                       // 0x0490(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData02[0x60];                                      // 0x04A0(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.SceneInteractionComponent");
		return ptr;
	}


	struct FText GetInteractiveObjectName();
	struct FText GetInteractionVerb();
	bool AllowInteractBy(class ATslCharacter* Character);
};


// Class TslGame.TslReplayMapDataInterface
// 0x0000 (0x0028 - 0x0028)
class UTslReplayMapDataInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslReplayMapDataInterface");
		return ptr;
	}

};


// Class TslGame.DoorInteractionComponent
// 0x0200 (0x0700 - 0x0500)
class UDoorInteractionComponent : public USceneInteractionComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0500(0x0010) MISSED OFFSET
	unsigned char                                      UnknownData01[0x1];                                       // 0x0500(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.DoorInteractionComponent.DoorState
	unsigned char                                      bReverseRotation : 1;                                     // 0x0511(0x0001) (CPF_Net)
	unsigned char                                      bIgnoreParentValidityCheck : 1;                           // 0x0511(0x0001)
	class Vector3D                                     SoundOffset;                                              // 0x0514(0x000C) (CPF_IsPlainOldData)
	class UDoorDataAsset*                              DoorDataAsset;                                            // 0x0520(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x1C8];                                     // 0x0528(0x01C8) MISSED OFFSET
	class UAkComponent*                                AkAudioComponent;                                         // 0x06F0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x06F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.DoorInteractionComponent");
		return ptr;
	}


	void OnRep_DoorState();
	bool AllowInteract(class ATslCharacter* OtherCharacter);
};


// Class TslGame.DroppedItemInteractionComponent
// 0x0060 (0x0560 - 0x0500)
class UDroppedItemInteractionComponent : public USceneInteractionComponent
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0500(0x0038) MISSED OFFSET
	class UItem*                                       Item;                                                     // 0x0538(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0540(0x0008) MISSED OFFSET
	class UAsyncStaticMeshComponent*                   StaticMeshComponent;                                      // 0x0548(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0550(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.DroppedItemInteractionComponent");
		return ptr;
	}


	void OnRep_Item();
	bool AllowInteractBy(class ATslCharacter* Character);
};


// Class TslGame.VehicleSeatInteractionComponent
// 0x00D0 (0x05D0 - 0x0500)
class UVehicleSeatInteractionComponent : public USceneInteractionComponent
{
public:
	class ATslCharacter*                               Rider;                                                    // 0x0500(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0508(0x000C) MISSED OFFSET
	int                                                SeatIndex;                                                // 0x0514(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0518(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.VehicleSeatInteractionComponent.RiderType
	struct FName                                       LeaveSocketName;                                          // 0x0520(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ViewPitchMin;                                             // 0x0528(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ViewPitchMax;                                             // 0x052C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ViewYawMin;                                               // 0x0530(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ViewYawMax;                                               // 0x0534(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveFloat*                                 CurvePitchMax;                                            // 0x0538(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 CurvePitchMin;                                            // 0x0540(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       FirstPersonCameraName;                                    // 0x0548(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       ThirdPersonCameraName;                                    // 0x0550(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0558(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.VehicleSeatInteractionComponent.SeatAnimationType
	class UBlendSpaceBase*                             SeatBlendspaceAiming;                                     // 0x0560(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UBlendSpaceBase*                             SeatBlendspaceFPPAiming;                                  // 0x0568(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimSequenceBase*                           SeatAnimationIdle_Rifle;                                  // 0x0570(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimSequenceBase*                           SeatAnimationIdle_Melee;                                  // 0x0578(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimSequenceBase*                           SeatAnimationIdle_Unarmed;                                // 0x0580(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimSequenceBase*                           SeatAnimationIdle_Grenade;                                // 0x0588(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAimOffsetBlendSpace*                        SeatIdleAO;                                               // 0x0590(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UBlendSpaceBase*                             TransitionOutBlendspace;                                  // 0x0598(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UBlendSpaceBase*                             TransitionInBlendspace;                                   // 0x05A0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bRestricWeaponUse : 1;                                    // 0x05A8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x10];                                      // 0x05A9(0x0010) UNKNOWN PROPERTY: ArrayProperty TslGame.VehicleSeatInteractionComponent.AllowedWeaponClasses
	unsigned char                                      bCanOnlyFireWhileAiming : 1;                              // 0x05C0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bUseEntryVelocityRestriction : 1;                         // 0x05C1(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MaxVelocityForEntry;                                      // 0x05C4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              InteractionBlockDuration;                                 // 0x05C8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.VehicleSeatInteractionComponent");
		return ptr;
	}


	void OnRep_Rider();
	void OnInteractDelegate(class ATslCharacter* OtherCharacter);
	bool IsWeaponClassAllowed();
	bool IsEntryAllowedByVelocity();
	class UTslVehicleSeatComponent* GetVehicleSeatComponent();
	class APawn* GetVehiclePawn();
	TScriptInterface<class UTslVehicleInterface> GetVehicleInterface();
	void GetVehicleAnimType();
	class UBlendSpaceBase* GetTransitionOutBlendspace();
	class UBlendSpaceBase* GetTransitionInBlendspace();
	class UAimOffsetBlendSpace* GetSeatIdleAO();
	class UAnimSequenceBase* GetSeatIdleAnimation_Unarmed();
	class UAnimSequenceBase* GetSeatIdleAnimation_Rifle();
	class UAnimSequenceBase* GetSeatIdleAnimation_Melee();
	class UAnimSequenceBase* GetSeatIdleAnimation_Grenade();
	class UBlendSpaceBase* GetSeatAimingFPPBlendspace();
	class UBlendSpaceBase* GetSeatAimingBlendspace();
	class ATslCharacter* GetRider();
	float GetMinPitchByYaw(float CurrentYaw);
	float GetMaxPitchByYaw(float CurrentYaw);
	bool GetCanFireOnlyWhileAimed();
	struct FText GetAdditionalMessage(class ATslCharacter* Character);
	bool AllowInteractDelegate(class ATslCharacter* OtherCharacter);
};


// Class TslGame.MotorbikeVehicleSeatInteraction
// 0x0000 (0x05D0 - 0x05D0)
class UMotorbikeVehicleSeatInteraction : public UVehicleSeatInteractionComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.MotorbikeVehicleSeatInteraction");
		return ptr;
	}


	bool IsEntryAllowed(class ATslCharacter* InCharacter);
	void HandleFlipAndKickstand();
};


// Class TslGame.ParachuteVehicleSeatInteraction
// 0x0000 (0x05D0 - 0x05D0)
class UParachuteVehicleSeatInteraction : public UVehicleSeatInteractionComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ParachuteVehicleSeatInteraction");
		return ptr;
	}

};


// Class TslGame.SimpleInterpolationMovement
// 0x00A0 (0x0300 - 0x0260)
class USimpleInterpolationMovement : public UPawnMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0260(0x0018) MISSED OFFSET
	float                                              LocationInterpTime;                                       // 0x0278(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x38];                                      // 0x027C(0x0038) MISSED OFFSET
	float                                              RotationInterpTime;                                       // 0x02B4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x38];                                      // 0x02B8(0x0038) MISSED OFFSET
	unsigned char                                      bUseOnlyYawRotation : 1;                                  // 0x02F0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bUseSweepMove : 1;                                        // 0x02F1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bUseSafeInterpolation : 1;                                // 0x02F2(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ForceMoveTime;                                            // 0x02F4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x02F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.SimpleInterpolationMovement");
		return ptr;
	}

};


// Class TslGame.FreeFallMovement
// 0x0050 (0x0350 - 0x0300)
class UFreeFallMovement : public USimpleInterpolationMovement
{
public:
	float                                              MinPitch;                                                 // 0x0300(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MaxPitch;                                                 // 0x0304(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MaxLateralSpeed;                                          // 0x0308(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              LateralAcceleration;                                      // 0x030C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              LateralDeceleration;                                      // 0x0310(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              LateralBrakeDeceleration;                                 // 0x0314(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              VerticalAcceleration;                                     // 0x0318(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              VerticalDeceleration;                                     // 0x031C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              TerminalSpeed;                                            // 0x0320(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MinAdditiveTerminalSpeed;                                 // 0x0324(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MaxAdditiveTerminalSpeed;                                 // 0x0328(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RotationYawRate;                                          // 0x032C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0330(0x0010) MISSED OFFSET
	float                                              InputUpdateTime;                                          // 0x0340(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0344(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.FreeFallMovement");
		return ptr;
	}


	void ServerUpdateInput(float InForwardInput, float InRightInput, float InDesiredPitchRotation, float InDesiredYawRotation);
	float GetRightInput();
	float GetForwardInput();
};


// Class TslGame.ParachuteVehicleMovement
// 0x0110 (0x0410 - 0x0300)
class UParachuteVehicleMovement : public USimpleInterpolationMovement
{
public:
	float                                              MaxSpeed;                                                 // 0x0304(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Acceleration;                                             // 0x0308(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Deceleration;                                             // 0x030C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxRotationYawRate;                                       // 0x0310(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RotationYawAcceleration;                                  // 0x0314(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RotationYawDeceleration;                                  // 0x0318(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TerminalVelocity;                                         // 0x031C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DecreaseTerminalVelocity;                                 // 0x0320(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0324(0x0008) MISSED OFFSET
	float                                              RotationYawReplicated;                                    // 0x032C(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              RotationPitchReplicated;                                  // 0x0330(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              InputUpdateTime;                                          // 0x0334(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x2C];                                      // 0x0338(0x002C) MISSED OFFSET
	float                                              ParachuteForwardVelocityTransferTimeout;                  // 0x0364(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ParachuteForwardVelocityTransferTimeoutDTScalar;          // 0x0368(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ParachuteDeployCoefficient;                               // 0x036C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              YawSpeed;                                                 // 0x0370(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxForwardPitch;                                          // 0x0374(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxBackwardPitch;                                         // 0x0378(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ForceForwardScale;                                        // 0x037C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ForceForwardStaticSpeed;                                  // 0x0380(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              VelocityLERPSpeedMin;                                     // 0x0384(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              VelocityLERPSpeedMax;                                     // 0x0388(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              VelocityLERPValueMin;                                     // 0x038C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              VelocityLERPValueMax;                                     // 0x0390(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DampingPitchMin;                                          // 0x0394(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DampingPitchMax;                                          // 0x0398(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DampingValueMin;                                          // 0x039C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DampingValueMax;                                          // 0x03A0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ForceDownAngleMin;                                        // 0x03A4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ForceDownAngleMax;                                        // 0x03A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ForceGravityMax;                                          // 0x03AC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ForceGravitySpeedMin;                                     // 0x03B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ForceGravitySpeedMax;                                     // 0x03B4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ForceGravityValueMin;                                     // 0x03B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ForceGravityValueMax;                                     // 0x03BC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RollSpeedMin;                                             // 0x03C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RollSpeedMax;                                             // 0x03C4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RollAngleMin;                                             // 0x03C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RollAngleMax;                                             // 0x03CC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RollInterpSpeed;                                          // 0x03D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FinalVelocitySpeedMin;                                    // 0x03D4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FinalVelocitySpeedMax;                                    // 0x03D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FinalVelocityDampingMin;                                  // 0x03DC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FinalVelocityDampingMax;                                  // 0x03E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TraceSphereRadius;                                        // 0x03E8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     TraceSphereOffset;                                        // 0x03EC(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	float                                              GroundTraceStart;                                         // 0x03F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              GroundTraceEnd;                                           // 0x03FC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              GroundTraceDampingMin;                                    // 0x0400(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              GroundTraceDampingMax;                                    // 0x0404(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0408(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ParachuteVehicleMovement");
		return ptr;
	}


	void ServerUpdateInput(float InForwardInput, float InRotationInput);
	float GetRotationYawRate();
	float GetRotationInput();
	float GetForwardInput();
	class Rotator GetClientRotation();
};


// Class TslGame.TslAircraftVehicleMovement
// 0x0010 (0x0310 - 0x0300)
class UTslAircraftVehicleMovement : public USimpleInterpolationMovement
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0300(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslAircraftVehicleMovement");
		return ptr;
	}

};


// Class TslGame.SpringArmInVehicleComponent
// 0x0000 (0x0480 - 0x0480)
class USpringArmInVehicleComponent : public USpringArmComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.SpringArmInVehicleComponent");
		return ptr;
	}

};


// Class TslGame.StanceComponent
// 0x0080 (0x0260 - 0x01E0)
class UStanceComponent : public UActorComponent
{
public:
	struct FStanceTransitionData                       StanceTransitionData;                                     // 0x01E0(0x0060) (CPF_Edit, CPF_DisableEditOnInstance)
	TEnumAsByte<EStanceMode>                           CurrentStance;                                            // 0x0240(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1F];                                      // 0x0241(0x001F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.StanceComponent");
		return ptr;
	}


	void ServerForceInitStance();
	void ServerChangeStance(TEnumAsByte<EStanceMode> ToStance);
	void OnRep_CurrentStance();
	void ClientInitByReconnection(TEnumAsByte<EStanceMode> InitStance);
};


// Class TslGame.TslPlayerStart
// 0x0028 (0x0408 - 0x03E0)
class ATslPlayerStart : public APlayerStart
{
public:
	unsigned char                                      UnknownData00[0x1];                                       // 0x03E0(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.TslPlayerStart.MatchStartType
	float                                              StartRadius;                                              // 0x03E4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bRandomRotation : 1;                                      // 0x03E8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class AStartActivationVolume*>              ActivationVolumes;                                        // 0x03F0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0400(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslPlayerStart");
		return ptr;
	}


	float GetRandomStartYawRotation();
	class Vector3D GetRandomStartLocation();
};


// Class TslGame.StartActivationVolume
// 0x0008 (0x03F0 - 0x03E8)
class AStartActivationVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.StartActivationVolume");
		return ptr;
	}

};


// Class TslGame.ThingActivationVolume
// 0x0000 (0x03F0 - 0x03F0)
class AThingActivationVolume : public AStartActivationVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ThingActivationVolume");
		return ptr;
	}

};


// Class TslGame.InventoryFacade
// 0x0020 (0x03D8 - 0x03B8)
class AInventoryFacade : public ASubActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03B8(0x0010) UNKNOWN PROPERTY: ArrayProperty TslGame.InventoryFacade.AutoSwapEquipSlotID
	class AInventory*                                  Inventory;                                                // 0x03C8(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class AEquipment*                                  Equipment;                                                // 0x03D0(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.InventoryFacade");
		return ptr;
	}


	bool IsAutoSwappable();
	bool HasItemByClass(class UClass* ItemClass);
	void GiveItem_Admin(class UClass* ItemClass);
	class ATslCharacter* GetOwnerCharacter();
	class AInventory* GetInventory();
	class AEquipment* GetEquipment();
};


// Class TslGame.Equipment
// 0x0050 (0x0438 - 0x03E8)
class AEquipment : public AItemSlotContainer
{
public:
	struct FScriptMulticastDelegate                    OnEquipmentUpdated;                                       // 0x03E8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x30];                                      // 0x03F8(0x0030) MISSED OFFSET
	TArray<class UEquipableItem*>                      Items;                                                    // 0x0428(0x0010) (CPF_Net, CPF_ZeroConstructor, CPF_Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.Equipment");
		return ptr;
	}


	struct FEquipPosition WeaponIndexToEquipPosition(int WeaponIndex);
	void WeaponAttachmentSwap(const struct FEquipPosition& SourceWeapon, const struct FEquipPosition& TargetWeapon, const struct FName& ItemClassForVerify, bool bSoundPlay);
	void UnequipItem(const struct FEquipPosition& Position, const struct FName& ItemClassForVerify, bool bSoundPlay);
	bool TryEquipItem(class UItem* Item, bool bSoundPlay, bool bSwap);
	void PrimaryWeaponSwap(const struct FEquipPosition& EquipPosition, const struct FString& Options);
	void Items_RepNotify();
	bool IsSwapablePrimaryWeapon(const struct FEquipPosition& EquipPosition, const struct FString& Options);
	bool IsAttachableToWeapon(int WeaponIndex, class UAttachableItem* AttachableItem, bool bOnlyFree);
	class ATslCharacter* GetOwnerCharacter();
	int GetItemCountByClass(class UClass* ItemClass);
	class UEquipableItem* GetItem(const struct FEquipPosition& Position);
	class AInventoryFacade* GetInventoryFacade();
	struct FEquipPosition FindPosition(class UItem* Item);
	struct FEquipPosition FindEquipPosition(bool bOnlyFree);
	struct FEquipPosition FindEquipableWeaponPosition(class UEquipableItem* EquipableItem, const struct FString& Options);
	int FindAttachableWeaponIndex(class UAttachableItem* AttachableItem, const struct FString& Options);
	int EquipPositionToWeaponIndex(const struct FEquipPosition& Position);
	bool EquipItem(const struct FEquipPosition& Position, class UEquipableItem* Item, bool bCheckViaCanEquipTo, bool bSoundPlay);
	void DropItem(const struct FEquipPosition& Position, const struct FName& ItemClassForVerify, bool bIsForce, bool bSoundPlay);
	void DropAttachedItemAll(const struct FEquipPosition& EquipPosition, const struct FName& ItemClassForVerify, bool bSoundPlay);
	void DropAttachedItem(const struct FEquipPosition& EquipPosition, const struct FName& ItemClassForVerify, bool bSoundPlay);
	void DetachItemAll(const struct FEquipPosition& EquipPosition, const struct FName& ItemClassForVerify, bool bSoundPlay);
	void DetachItem(const struct FEquipPosition& EquipPosition, const struct FName& ItemClassForVerify, bool bSoundPlay);
};


// Class TslGame.Inventory
// 0x0028 (0x0410 - 0x03E8)
class AInventory : public AItemSlotContainer
{
public:
	struct FScriptMulticastDelegate                    OnInventoryUpdated;                                       // 0x03E8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	TArray<class UItem*>                               Items;                                                    // 0x03F8(0x0010) (CPF_Net, CPF_ZeroConstructor, CPF_Transient)
	float                                              MaxSpace;                                                 // 0x0408(0x0004) (CPF_Edit, CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.Inventory");
		return ptr;
	}


	void UseItem(int Index, const struct FName& ItemClassForVerify);
	void OnFinishUseCast(class UObject* CastObject);
	void Items_RepNotify();
	class ATslCharacter* GetOwnerCharacter();
	float GetMaxSpace();
	int GetItemCountByClass(class UClass* ItemClass);
	int GetItemCount();
	class AInventoryFacade* GetInventoryFacade();
	float GetCurrentSpace();
	TArray<struct FInventoryItem> GetAllItemsByType(class UClass* ItemSuperClass);
	TArray<struct FInventoryItem> GetAllItems();
	int GetAdditionalMaxCount(class UItem* Item);
	int FindItemIndex(class UItem* Item);
	class UItem* FindItemHasMinStack(class UClass* ItemClass);
	class UItem* FindItem(class UClass* ItemClass);
	void EquipOrDropItem(int Index, const struct FName& ItemClassForVerify, bool bSoundPlay);
	void EquipItem(int Index, const struct FName& ItemClassForVerify, bool bSoundPlay);
	void DropItem(int Index, const struct FName& ItemClassForVerify, const struct FString& Options, bool bSoundPlay);
	bool ConsumeItemByClass(class UClass* ItemClass, int Count);
	void ClientBroadcastNoBagSpaceEvent();
	void AttachOrDropItem(int Index, const struct FName& ItemClassForVerify, bool bSoundPlay);
	void AttachItem(int Index, const struct FName& ItemClassForVerify, const struct FEquipPosition& EquipPosition, bool bSoundPlay);
};


// Class TslGame.ItemExplorerProxy
// 0x0020 (0x0438 - 0x0418)
class AItemExplorerProxy : public AItemExplorer
{
public:
	struct FScriptDelegate                             OnChangeItemExplorerProxy;                                // 0x0418(0x0014) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0428(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ItemExplorerProxy");
		return ptr;
	}


	void PropagateUpdateItemList();
	void PropagateDestroyContextMenuWidget();
	void PropagateCreateAndShowContextMenuWidget(const TScriptInterface<class USlotContainerInterface>& Param);
	void Pop();
	bool IsBaseExplorer();
};


// Class TslGame.CarePackageItem
// 0x00B0 (0x05C0 - 0x0510)
class ACarePackageItem : public AItemPackage
{
public:
	class UClass*                                      ParachuteClass;                                           // 0x0510(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      SmokeFxClass;                                             // 0x0518(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      SmokeAirFxClass;                                          // 0x0520(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      LightFxClass;                                             // 0x0528(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SmokeTime;                                                // 0x0530(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              LimitFallSpeed;                                           // 0x0534(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       SmokeSocket;                                              // 0x0538(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       SmokeAirSocket;                                           // 0x0540(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       LightSocket;                                              // 0x0548(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       ParachuteSocket;                                          // 0x0550(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               LandSoundAk;                                              // 0x0558(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bIsFalling : 1;                                           // 0x0560(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsPickupedItem : 1;                                      // 0x0561(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsHideIconOnMap : 1;                                     // 0x0562(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsTranslucentIconOnMap : 1;                              // 0x0563(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ATslParticle*                                SmokeFx;                                                  // 0x0568(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class ATslParticle*                                SmokeAirFx;                                               // 0x0570(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class ATslParticle*                                LightFx;                                                  // 0x0578(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class AActor*                                      Parachute;                                                // 0x0580(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0588(0x0008) MISSED OFFSET
	class USimpleInterpolationMovement*                MovementComponent;                                        // 0x0590(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UBuoyancyForceComponent*                     BuoyancyForceComponent;                                   // 0x0598(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UAkComponent*                                AkComponent;                                              // 0x05A0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x05A8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.CarePackageItem");
		return ptr;
	}


	bool IsPickupedItem();
	bool IsFalling();
};


// Class TslGame.FloorSnapItemPackage
// 0x0018 (0x0528 - 0x0510)
class AFloorSnapItemPackage : public AItemPackage
{
public:
	float                                              RayLength;                                                // 0x0510(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bUseWaterSurface : 1;                                     // 0x0514(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              WaterSurfaceThreshold;                                    // 0x0518(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UBuoyancyForceComponent*                     BuoyancyForceComponent;                                   // 0x0520(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.FloorSnapItemPackage");
		return ptr;
	}

};


// Class TslGame.NearbyInteractiveItemExplorer
// 0x0010 (0x0428 - 0x0418)
class ANearbyInteractiveItemExplorer : public AItemExplorer
{
public:
	TArray<TWeakObjectPtr<class UObject>>              ExplorableItems;                                          // 0x0418(0x0010) (CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.NearbyInteractiveItemExplorer");
		return ptr;
	}

};


// Class TslGame.ThingSpawnProcessor
// 0x0010 (0x0038 - 0x0028)
class UThingSpawnProcessor : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ThingSpawnProcessor");
		return ptr;
	}

};


// Class TslGame.SubThingSpawnProcessor
// 0x0000 (0x0028 - 0x0028)
class USubThingSpawnProcessor : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.SubThingSpawnProcessor");
		return ptr;
	}

};


// Class TslGame.CombinedThingSpawnProcessor
// 0x0020 (0x0058 - 0x0038)
class UCombinedThingSpawnProcessor : public UThingSpawnProcessor
{
public:
	TArray<class UClass*>                              SubProcessorClasses;                                      // 0x0038(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<class USubThingSpawnProcessor*>             SubProcessors;                                            // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.CombinedThingSpawnProcessor");
		return ptr;
	}

};


// Class TslGame.PackageSubThingSpawnProcessor
// 0x03D0 (0x03F8 - 0x0028)
class UPackageSubThingSpawnProcessor : public USubThingSpawnProcessor
{
public:
	class UDataTable*                                  RawItemSpawnDataTable;                                    // 0x0028(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UDataTable*                                  RawItemSpawnTogetherDataTable;                            // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<struct FPackageSpotGroupProperty>           RawSpotGroupProperties;                                   // 0x0038(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x3B0];                                     // 0x0048(0x03B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.PackageSubThingSpawnProcessor");
		return ptr;
	}

};


// Class TslGame.VehicleSubThingSpawnProcessor
// 0x03F0 (0x0418 - 0x0028)
class UVehicleSubThingSpawnProcessor : public USubThingSpawnProcessor
{
public:
	TArray<struct FVehicleSpotGroupProperty>           RawSpotGroupProperties;                                   // 0x0028(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	class UDataTable*                                  RawVehicleSpawnDataTable;                                 // 0x0038(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SpawnZOffsetFromFloor;                                    // 0x0040(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3D4];                                     // 0x0044(0x03D4) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.VehicleSubThingSpawnProcessor");
		return ptr;
	}

};


// Class TslGame.Team
// 0x0068 (0x0418 - 0x03B0)
class ATeam : public AActor
{
public:
	struct FVector_NetQuantize100                      PlayerLocation;                                           // 0x03B0(0x000C) (CPF_Net, CPF_Transient)
	class Rotator                                      PlayerRotation;                                           // 0x03BC(0x000C) (CPF_Net, CPF_Transient, CPF_IsPlainOldData)
	struct FString                                     PlayerName;                                               // 0x03C8(0x0010) (CPF_Net, CPF_ZeroConstructor, CPF_Transient)
	unsigned char                                      Health;                                                   // 0x03D8(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      HealthMax;                                                // 0x03D9(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      GroggyHealth;                                             // 0x03DA(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      GroggyHealthMax;                                          // 0x03DB(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class Vector2D                                     MapMarkerPosition;                                        // 0x03DC(0x0008) (CPF_Net, CPF_IsPlainOldData)
	unsigned char                                      bIsDying : 1;                                             // 0x03E4(0x0001) (CPF_Net, CPF_Transient)
	unsigned char                                      bIsGroggying : 1;                                         // 0x03E4(0x0001) (CPF_Net, CPF_Transient)
	unsigned char                                      bQuitter : 1;                                             // 0x03E4(0x0001) (CPF_Net, CPF_Transient)
	unsigned char                                      bShowMapMarker : 1;                                       // 0x03E4(0x0001) (CPF_Net, CPF_Transient)
	unsigned char                                      UnknownData00[0x1];                                       // 0x03E5(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.Team.TeamVehicleType
	float                                              BoostGauge;                                               // 0x03E8(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int8_t                                             MemberNumber;                                             // 0x03EC(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ATslCharacter*                               TslCharacter;                                             // 0x03F0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x03F8(0x0010) MISSED OFFSET
	struct FString                                     UniqueId;                                                 // 0x0408(0x0010) (CPF_Net, CPF_ZeroConstructor, CPF_Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.Team");
		return ptr;
	}


	void ServerSetShowMapMarker(bool bNewShowMapMarker);
	void ServerSetMapMarkerPosition(const class Vector2D& NewMapMarkerPosition);
	void OnRep_Dying(bool bLastDying);
	bool IsShowMapMarker();
	bool IsQuitter();
	bool IsGroggying();
	bool IsDying();
	class ATslCharacter* GetTslCharacter();
	void GetRideVehicle();
	struct FString GetPlayerUniqueId();
	class Rotator GetPlayerRotation();
	struct FString GetPlayerName();
	class Vector3D GetPlayerLocation();
	int GetMemberNumber();
	class Vector2D GetMapMarkerPosition();
	float GetHealthMax();
	float GetHealth();
	float GetGroggyHealthMax();
	float GetGroggyHealth();
};


// Class TslGame.ThingHolder
// 0x00A0 (0x0450 - 0x03B0)
class AThingHolder : public AActor
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x03B0(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ThingHolder");
		return ptr;
	}

};


// Class TslGame.ThingSpot
// 0x0008 (0x03B8 - 0x03B0)
class AThingSpot : public AActor
{
public:
	class UThingSpotComponent*                         SpotComponent;                                            // 0x03B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ThingSpot");
		return ptr;
	}

};


// Class TslGame.ThingSpotComponent
// 0x0010 (0x0400 - 0x03F0)
class UThingSpotComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x1];                                       // 0x03F0(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.ThingSpotComponent.SpotGroupType
	class Vector2D                                     RandomRotatorRange;                                       // 0x03F4(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ThingSpotComponent");
		return ptr;
	}

};


// Class TslGame.TslAccessoryComponent
// 0x0040 (0x0430 - 0x03F0)
class UTslAccessoryComponent : public USceneComponent
{
public:
	struct FTransform                                  InitialTransformAttachmentScene;                          // 0x03F0(0x0030) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0420(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslAccessoryComponent");
		return ptr;
	}


	void SetPhysicsSimulation(bool bSimulatePhysics);
	void InitSetupComponent(bool bSimulatePhysics);
};


// Class TslGame.TslAchievement
// 0x0018 (0x03C8 - 0x03B0)
class ATslAchievement : public AActor
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x03B0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslAchievement");
		return ptr;
	}

};


// Class TslGame.TslAIController
// 0x0020 (0x04C8 - 0x04A8)
class ATslAIController : public AAIController
{
public:
	class UBlackboardComponent*                        BlackboardComp;                                           // 0x04A8(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	class UBehaviorTreeComponent*                      BehaviorComp;                                             // 0x04B0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x04B8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslAIController");
		return ptr;
	}


	void ShootEnemy();
	bool FindClosestEnemyWithLOS(class ATslCharacter* ExcludeEnemy);
	void FindClosestEnemy();
};


// Class TslGame.TslAircraftVehicle
// 0x0090 (0x04A0 - 0x0410)
class ATslAircraftVehicle : public APawn
{
public:
	TArray<struct FAircraftParticle>                   AircraftParticles;                                        // 0x0410(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<class ATslParticle*>                        AttachedParticles;                                        // 0x0420(0x0010) (CPF_ZeroConstructor)
	class UStaticMeshComponent*                        MeshComponent;                                            // 0x0430(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTslAircraftVehicleMovement*                 MovementComponent;                                        // 0x0438(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class USplineComponent*                            SplineComponent;                                          // 0x0440(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0448(0x0048) MISSED OFFSET
	float                                              TotalFlyingTime;                                          // 0x0490(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0494(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslAircraftVehicle");
		return ptr;
	}

};


// Class TslGame.AircraftCarePackage
// 0x0070 (0x0510 - 0x04A0)
class AAircraftCarePackage : public ATslAircraftVehicle
{
public:
	class UClass*                                      CarePackageItemSpawnerClass;                              // 0x04A0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      CarePackageItemClass;                                     // 0x04A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FDropCarePackageTableData>           DropCarePackageTableData;                                 // 0x04B0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	class UGeneralItemSpawner*                         CarePackageItemSpawner;                                   // 0x04C0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class ATslPassCarePackageArea*>             PassCarePackageAreas;                                     // 0x04C8(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	TArray<class ATslPassCarePackageAreaRectangle*>    PassCarePackageAreasRectangle;                            // 0x04D8(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	unsigned char                                      UnknownData00[0x28];                                      // 0x04E8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.AircraftCarePackage");
		return ptr;
	}


	bool IsPlayInEditor();
};


// Class TslGame.TransportAircraftVehicle
// 0x0078 (0x0518 - 0x04A0)
class ATransportAircraftVehicle : public ATslAircraftVehicle
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x04A0(0x0028) MISSED OFFSET
	class UAkAudioEvent*                               RideSound;                                                // 0x04C8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               LeaveSound;                                               // 0x04D0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkComponent*                                AkSoundCom;                                               // 0x04D8(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTslVehicleSeatComponent*                    VehicleSeatComponent;                                     // 0x04E0(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UClass*                                      ParachuteItem;                                            // 0x04E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UInteractionComponent*                       InteractionComponent;                                     // 0x04F0(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      bIsEnteredAtEjectionArea : 1;                             // 0x04F8(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsVisible : 1;                                           // 0x04FA(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              EjectPredictionTime;                                      // 0x04FC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxEjectSpeed;                                            // 0x0500(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x0504(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TransportAircraftVehicle");
		return ptr;
	}


	void OnRide(class ATslCharacter* Rider, class UVehicleSeatInteractionComponent* Seat);
	void OnRep_IsVisible();
	void OnLocalPlayerRide();
	void OnLocalPlayerLeave();
	void OnLeave(class ATslCharacter* Rider, class UVehicleSeatInteractionComponent* Seat);
	void OnInteractBy(class ATslCharacter* Character);
	bool IsInEjectionArea();
	void EnterAtEjectionArea();
	void EjectAll();
	bool AllowInteractBy(class ATslCharacter* Character);
};


// Class TslGame.TslAnchorActor
// 0x0010 (0x03C0 - 0x03B0)
class ATslAnchorActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslAnchorActor");
		return ptr;
	}

};


// Class TslGame.TslWheeledVehicle
// 0x0380 (0x07A0 - 0x0420)
class ATslWheeledVehicle : public AWheeledVehicle
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0420(0x0090) MISSED OFFSET
	class USphereComponent*                            ActivationTrigger;                                        // 0x04B0(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class UGamePadInputAixsComponent*                  GamePadInputAixsComponent;                                // 0x04B8(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              Health;                                                   // 0x04C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_EditConst, CPF_IsPlainOldData)
	float                                              HealthMax;                                                // 0x04C4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Fuel;                                                     // 0x04C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_EditConst, CPF_IsPlainOldData)
	float                                              FuelMax;                                                  // 0x04CC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bStabilizeActive : 1;                                     // 0x04D0(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              AirControlPitchInput;                                     // 0x04D4(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              SpeedKPH;                                                 // 0x04D8(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              ThrottleInput;                                            // 0x04DC(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              RPM;                                                      // 0x04E0(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              Brake;                                                    // 0x04E4(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              LatMax;                                                   // 0x04E8(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              LongSum;                                                  // 0x04EC(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              WaterDepthMax;                                            // 0x04F0(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              SurfaceMax;                                               // 0x04F4(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              SuspensionMax;                                            // 0x04F8(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                FlatTireCount;                                            // 0x04FC(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      bDirtySpeedKPH : 1;                                       // 0x0500(0x0001)
	unsigned char                                      bDirtyThrottleInput : 1;                                  // 0x0500(0x0001)
	unsigned char                                      bDirtyRPM : 1;                                            // 0x0500(0x0001)
	unsigned char                                      bDirtyWaterDepthMax : 1;                                  // 0x0500(0x0001)
	unsigned char                                      bDirtyBrake : 1;                                          // 0x0500(0x0001)
	unsigned char                                      bDetectedStartup : 1;                                     // 0x0500(0x0001)
	unsigned char                                      bDetectedBraking : 1;                                     // 0x0500(0x0001)
	TArray<float>                                      WheelsLatSlip;                                            // 0x0508(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	TArray<float>                                      WheelsLongSlip;                                           // 0x0518(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	TArray<float>                                      WheelsSuspensionOffset;                                   // 0x0528(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	TArray<class UPhysicalMaterial*>                   WheelsContactSurface;                                     // 0x0538(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	TArray<class UPhysicalMaterial*>                   TestWheelsContactSurface_prev;                            // 0x0548(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	TArray<float>                                      WheelsSuspensionMaxDrop;                                  // 0x0558(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<float>                                      WheelsSuspensionMaxRaise;                                 // 0x0568(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	class UAkAudioEvent*                               NullSound;                                                // 0x0578(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FTslImpactSoundInfo                         ImpactSound;                                              // 0x0580(0x0060) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FTslImpactSoundInfo                         LandingSound;                                             // 0x05E0(0x0060) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               StartupSound;                                             // 0x0640(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               BreakSound;                                               // 0x0648(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               StopSound;                                                // 0x0650(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               CharacterHitSound;                                        // 0x0658(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MaxClampThrottleInClutch;                                 // 0x0660(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bApplyCustomAnimUpdaterateSettings : 1;                   // 0x0664(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FAnimUpdateRateSettings                     AnimUpdateRateSettings;                                   // 0x0668(0x0078) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      bWantsToBoosting : 1;                                     // 0x06E0(0x0001) (CPF_Net, CPF_Transient)
	float                                              TorqueMultiplierForBoosting;                              // 0x06E4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x06E8(0x0008) MISSED OFFSET
	class UTslVehicleHitComponent*                     VehicleHitComponent;                                      // 0x06F0(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTslVehicleCommonComponent*                  VehicleCommonComponent;                                   // 0x06F8(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTslVehicleSeatComponent*                    VehicleSeatComponent;                                     // 0x0700(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTslVehicleEffectComponent*                  VehicleEffectComponent;                                   // 0x0708(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTslVehicleSyncComponent*                    VehicleSyncComponent;                                     // 0x0710(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTslVehicleTempComponent*                    VehicleTempComponent;                                     // 0x0718(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTslPawnInputBindingComponent*               TslPawnInputBindingComponent;                             // 0x0720(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTslHornComponent*                           TslHornComponent;                                         // 0x0728(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UAkComponent*                                AudioComEngine;                                           // 0x0730(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	class UBuoyancyForceComponent*                     BuoyancyForceComponent;                                   // 0x0738(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FName                                       SinkPoint;                                                // 0x0740(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      SinkBuffType;                                             // 0x0748(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0750(0x0008) MISSED OFFSET
	class UBuffComponet*                               BuffComponent;                                            // 0x0758(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	TArray<class UClass*>                              ComponentsToDestroyOnDedicatedServer;                     // 0x0760(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	unsigned char                                      bProcessAutoEject : 1;                                    // 0x0770(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AutoEjectGroundDistance;                                  // 0x0774(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AutoEjectRoll;                                            // 0x0778(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AutoEjectPitch;                                           // 0x077C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AutoEject_RiseRate;                                       // 0x0780(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AutoEject_FallRate;                                       // 0x0784(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bRunStabilizeOnEntry : 1;                                 // 0x078C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StabilizeInitialTimer;                                    // 0x0790(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StablizeCurrentTimer;                                     // 0x0794(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              SteeringYawBias;                                          // 0x0798(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslWheeledVehicle");
		return ptr;
	}


	void UpdateWheelSound();
	void UpdateWheelCaching();
	void UpdateBasicInfoCaching();
	void UnBindCallbackToHUD(class ATslPlayerController* InController);
	void SetAirControlPitchInput(float InInput);
	void ServerSetBoosting(bool bNewBoosting);
	void OnVehicleEjected();
	void OnRide(class ATslCharacter* Rider, class UVehicleSeatInteractionComponent* Seat);
	void OnPostDriverRide();
	void OnPostDriverLeave();
	void OnLeave(class ATslCharacter* Rider, class UVehicleSeatInteractionComponent* Seat);
	void OnCharacterHit(class ATslCharacter* HitCharacter, float HitDamage);
	void OnBreak();
	void OnBlockingWidgetOpened(class UWidget* Widget);
	void MulticastCharacterHitEffects(class ATslCharacter* CharacterHit, float HitDamage);
	bool IsSunken();
	bool IsStablizeOverrideActive();
	bool IsStabilizeOverrideEnabled();
	bool IsInWaterVolume();
	bool IsEnabledOptimizeTick();
	bool IsBoosting();
	class UTslWheeledVehicleMovement* GetTslVehicleMovement();
	float GetSteeringInput();
	float GetCurrentWaterSurfaceZ();
	class UBuffComponet* GetBuffComponent();
	float GetAirControlPitchInput();
	void BindCallbackToHUD(class ATslPlayerController* InController);
	void ActivationTriggerEndOverlap(class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void ActivationTriggerBeginOverlap(class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& OverlapInfo);
};


// Class TslGame.TslFloatingVehicle
// 0x00A8 (0x04B8 - 0x0410)
class ATslFloatingVehicle : public APawn
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0410(0x0010) MISSED OFFSET
	class UGamePadInputAixsComponent*                  GamePadInputAixsComponent;                                // 0x0420(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class USkeletalMeshComponent*                      MeshComponent;                                            // 0x0428(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UBuoyancyForceComponent*                     BuoyancyForceComponent;                                   // 0x0430(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTslFloatingVehicleMovement*                 MovementComponent;                                        // 0x0438(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTslVehicleHitComponent*                     VehicleHitComponent;                                      // 0x0440(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTslVehicleCommonComponent*                  VehicleCommonComponent;                                   // 0x0448(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTslVehicleSeatComponent*                    VehicleSeatComponent;                                     // 0x0450(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTslVehicleEffectComponent*                  VehicleEffectComponent;                                   // 0x0458(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTslVehicleSyncComponent*                    VehicleSyncComponent;                                     // 0x0460(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTslVehicleTempComponent*                    VehicleTempComponent;                                     // 0x0468(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTslHornComponent*                           TslHornComponent;                                         // 0x0470(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTslPawnInputBindingComponent*               TslPawnInputBindingComponent;                             // 0x0478(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UAkComponent*                                AudioComEngine;                                           // 0x0480(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	TArray<class UClass*>                              ComponentsToDestroyOnDedicatedServer;                     // 0x0488(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	struct FName                                       VehicleEnginePoint;                                       // 0x0498(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              VehicleEngineRadius;                                      // 0x04A0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Health;                                                   // 0x04A4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_EditConst, CPF_IsPlainOldData)
	float                                              HealthMax;                                                // 0x04A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Fuel;                                                     // 0x04AC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_EditConst, CPF_IsPlainOldData)
	float                                              FuelMax;                                                  // 0x04B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslFloatingVehicle");
		return ptr;
	}


	void UnBindCallbackToHUD(class ATslPlayerController* InController);
	void OnRide(class ATslCharacter* Rider, class UVehicleSeatInteractionComponent* Seat);
	void OnPostDriverRide();
	void OnPostDriverLeave();
	void OnLeave(class ATslCharacter* Rider, class UVehicleSeatInteractionComponent* Seat);
	void OnBlockingWidgetOpened(class UWidget* Widget);
	bool IsBoosting();
	float GetVehicleEngineImmersionDepth();
	class Vector3D GetVehicleAcceleration();
	float GetSteerYawAngle();
	float GetMaxSteerYawAngle();
	void BindCallbackToHUD(class ATslPlayerController* InController);
};


// Class TslGame.TslWheeledVehicleMovement
// 0x0060 (0x0590 - 0x0530)
class UTslWheeledVehicleMovement : public UWheeledVehicleMovementComponent4W
{
public:
	TArray<float>                                      WheelHealthPercentages;                                   // 0x0530(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0540(0x0008) MISSED OFFSET
	struct FCustomTransmissionData                     CustomTransmission;                                       // 0x0548(0x0020) (CPF_Edit)
	unsigned char                                      bAlwaysUseDirectInput : 1;                                // 0x056C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Anim_SteeringInputInterpSpeed;                            // 0x0570(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Anim_InterpOfInterpSpeedScale;                            // 0x0574(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Anim_InterpOfInterpSpeedAbs;                              // 0x0578(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x057C(0x0008) MISSED OFFSET
	float                                              Anim_SpeedForInputTypeSwitch;                             // 0x0584(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0588(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslWheeledVehicleMovement");
		return ptr;
	}


	void SetSimulateVehicle(bool bSimulate);
	void ServerUpdateAdditionalState(int TargetGear);
	void Server_SetMovementParameters(float InThrottle, float InSteer, float InBreak, float InHandbrake, int Gear);
	void ProcessCustomTransmission(float InVelocity);
	void OnDriverRide();
	void OnDriverLeave();
	void OnBreak();
	bool IsSimulatingVehicle();
	float GetWheelWaterDepth(int Index);
	float GetWheelSuspensionMaxRaise(int Index);
	float GetWheelSuspensionMaxDrop(int Index);
	float GetWheelRotationSpeed(int Index);
	TArray<float> GetWheelHealthPercentages();
	TEnumAsByte<EWheelContactType> GetWheelContactType(int Index, float MinVelocity, float MinSkid, float MinSpin, float SuspOffsetForContact);
	class UPhysicalMaterial* GetWheelContactSurfaceMaterial(int Index);
	struct FWheelContactData GetWheelContactData(int Index, float MinVelocity, float MinSkid, float MinSpin, float SuspOffsetForContact, float MinBrake, float MinRotationSpeed);
	float GetThrottleInput();
	float GetSteeringInputClamped();
	float GetSteeringInput();
	float GetHandbrakeInput();
	float GetBrakeInput();
	void ClientPunctureTire(int WheelIndex);
};


// Class TslGame.TslFloatingVehicleMovement
// 0x0050 (0x02B0 - 0x0260)
class UTslFloatingVehicleMovement : public UPawnMovementComponent
{
public:
	float                                              MaxAcceleration;                                          // 0x0260(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Acceleration;                                             // 0x0264(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              StartAccelerationRate;                                    // 0x0268(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              StopAccelerationRate;                                     // 0x026C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MaxRotationYawAngle;                                      // 0x0270(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RotationYawAngle;                                         // 0x0274(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              RotationYawRate;                                          // 0x0278(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 DirectionalAccelerationCurve;                             // 0x0280(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 SlideCompensationCurve;                                   // 0x0288(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              BoostModifier;                                            // 0x0290(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bIsBoosting : 1;                                          // 0x0294(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              ForwardInput;                                             // 0x0298(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              RotationInput;                                            // 0x029C(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              HitCharacterDuration;                                     // 0x02A4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x02A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslFloatingVehicleMovement");
		return ptr;
	}


	void ServerUpdateInput(float InForwardInput, float InRotationInput, bool bInIsBoosting);
	void OnDriverLeave();
	bool IsBoosting();
	float GetRotationYawAngle();
	float GetMaxRotationYawAngle();
	float GetMaxAcceleration();
	class Vector3D GetCalculatedAcceleration();
	float GetAcceleration();
};


// Class TslGame.TslCharacterMovement
// 0x0390 (0x0BD0 - 0x0840)
class UTslCharacterMovement : public UCharacterMovementComponent
{
public:
	int                                                BroSimulateMovement;                                      // 0x0840(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              NetCorrectServerDeltaTime;                                // 0x0848(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     NetComputedPosition;                                      // 0x084C(0x000C) (CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0858(0x00B0) MISSED OFFSET
	float                                              MaxProneSpeed;                                            // 0x0908(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxGroggySpeed;                                           // 0x090C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              JumpedHalfHeight;                                         // 0x0910(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              JumpVelocityLossScale;                                    // 0x0914(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ToFallVelocityDTScale;                                    // 0x0918(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ToFallVelocityClamp;                                      // 0x091C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SpeedToJumpModifier;                                      // 0x0920(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinJumpZVelocity;                                         // 0x0924(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxJumpZVelocity;                                         // 0x0928(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LandingJumpDecreaseModifier;                              // 0x092C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RecoveryWalkSpeedRatePerSec;                              // 0x0930(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinWalkSpeedModifier;                                     // 0x0934(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              WalkSpeedModifierUnit;                                    // 0x0938(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinStandingJumpXYSpeed;                                   // 0x093C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SpeedInWaterModifier;                                     // 0x0940(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bUseCPVault : 1;                                          // 0x0944(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0945(0x0050) UNKNOWN PROPERTY: MapProperty TslGame.TslCharacterMovement.VaultingDataMap
	int                                                HeightFor200;                                             // 0x0998(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                HeightFor160;                                             // 0x099C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                HeightFor120;                                             // 0x09A0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                HeightFor90;                                              // 0x09A4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                HeightFor60;                                              // 0x09A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SizeForNarrow;                                            // 0x09AC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                SizeForSlide;                                             // 0x09B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              VelocityForMobile;                                        // 0x09B4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              GlobalVaultScale;                                         // 0x09B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              VaultCancelDTScalar;                                      // 0x09BC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MinVelocityForStaticVaultCheck;                           // 0x09C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector2D                                     MaxVaultDistanceByVelocityInMap;                          // 0x09C4(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector2D                                     MaxVaultDistanceByVelocityOutMap;                         // 0x09CC(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVaultingTask                               CurrentVaultingTask;                                      // 0x09D4(0x0040) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	class UVaultingData*                               CurrentVaultingData;                                      // 0x0A18(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              V_Timer_CP;                                               // 0x0A20(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AnimMultiplierPreApex;                                    // 0x0A24(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AnimMultiplierPostApex;                                   // 0x0A28(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsVaulting_CP : 1;                                       // 0x0A2C(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     CharacterRelLocation;                                     // 0x0A30(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	class Vector3D                                     LastVaultLocation;                                        // 0x0A3C(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	class Vector3D                                     AveragedVelocity;                                         // 0x0A48(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	float                                              LastVaultTime;                                            // 0x0A54(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              VaultCancelAnimSpeed;                                     // 0x0A58(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bWantsToCancelVault : 1;                                  // 0x0A5C(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x77];                                      // 0x0A5D(0x0077) MISSED OFFSET
	float                                              MaxSwimAcceleration;                                      // 0x0AD4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxZSpeedOutOfWaterModifier;                              // 0x0AD8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Rotator                                      MaxSwimmingRotationRate;                                  // 0x0ADC(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	class Rotator                                      SwimmingRotationAcceleration;                             // 0x0AE8(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	float                                              MaxZSpeedOutOfWaterModifierForStandingSwimming;           // 0x0AF4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              WaveRidingModifier;                                       // 0x0AF8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              WaveRidingSmoothingFactor;                                // 0x0AFC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              WaveRidingModifierUnderWater;                             // 0x0B00(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StayingUnderWaterDepthBand;                               // 0x0B04(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxUnderwaterSwimSpeed;                                   // 0x0B0C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxUnderwaterSwimAcceleration;                            // 0x0B10(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BrakingDecelerationUnderwaterSwimming;                    // 0x0B14(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Rotator                                      MaxUnderwaterSwimmingRotationRate;                        // 0x0B18(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	class Rotator                                      UnderwaterSwimmingRotationAcceleration;                   // 0x0B24(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	float                                              MinimumHighAltitude;                                      // 0x0B30(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MaxFallLateralSpeedAtHighAltitude;                        // 0x0B38(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              TerminalVelocityAtHighAltitude;                           // 0x0B3C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DecreaseTerminalVelocityAtHighAltitude;                   // 0x0B40(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MaxFallAccelerationAtHighAltitude;                        // 0x0B44(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Rotator                                      FallRotationRateAtHighAltitude;                           // 0x0B48(0x000C) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AirControlAtHighAltitude;                                 // 0x0B54(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AirControlBoostMultiplierAtHighAltitude;                  // 0x0B58(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AirControlBoostVelocityThresholdAtHighAltitude;           // 0x0B5C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      FallingDamageType;                                        // 0x0B60(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 EjectDamageCurve;                                         // 0x0B68(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FallingDamageMinZCut;                                     // 0x0B70(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FallingDamageVDampingZ;                                   // 0x0B74(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FallingDamageFactor;                                      // 0x0B78(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0xC];                                       // 0x0B7C(0x000C) MISSED OFFSET
	unsigned char                                      UseBlockedHitDamage : 1;                                  // 0x0B88(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x47];                                      // 0x0B89(0x0047) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslCharacterMovement");
		return ptr;
	}


	bool TraceSphereForVaulting(const class Vector3D& Start, const class Vector3D& End, float Radius, TEnumAsByte<EDrawDebugTrace> DrawDebugType, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, struct FHitResult* OutHit);
	bool TraceLineForVaulting(const class Vector3D& Start, const class Vector3D& End, TEnumAsByte<EDrawDebugTrace> DrawDebugType, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, struct FHitResult* OutHit);
	bool TraceCapsuleForVaulting(const class Vector3D& Start, const class Vector3D& End, TEnumAsByte<EDrawDebugTrace> DrawDebugType, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime, struct FHitResult* OutHit);
	void StartVaultingTask(const struct FVaultingTask& InVaultTask);
	void PredictCapsulePathForVaulting(const class Vector3D& StartPos, const class Vector3D& LaunchVelocity, TEnumAsByte<EDrawDebugTrace> DrawDebugType, float DrawDebugTime, float CapsuleRadiusOverride, float CapsuleHalfHeightOverride, float SimFrequency, float MaxSimTime, struct FHitResult* OutHit, TArray<class Vector3D>* OutPathPositions, class Vector3D* OutLastTraceDestination);
	void LocalHandleVault_CP(const class Vector3D& VaultStart, const class Vector3D& VaultApex, const class Vector3D& VaultApexAdditive, const class Vector3D& VaultEnd, bool bIsClimb, bool bEndToFall, float Direction, float PlayerVelocity, float DistanceFromObject);
	bool IsVaulting();
	void HandleVaultPreEvaluation(bool bForceVelocity, const class Vector3D& InForcedVelocity);
	struct FVaultingHandleResult HandleVaulting(const struct FVaultingHandleInput& Input);
	float GetVTimer();
	class UVaultingData* GetVaultingDataFromAnim();
	float GetMaxVaultDistanceBySpeed();
	float GetGlobalVaultingSpeedMultiplier();
	void GetCurrentVaultType();
	void EvaluateVaultAnimType(int FirstRow, int ApexAdditiveStepCounter, float AverageCellCount, bool bForceVault, bool bForceClimb, float CharVelocity);
	bool EndCurrentTaskToFall();
};


// Class TslGame.TslVehicleWheel
// 0x0110 (0x0218 - 0x0108)
class UTslVehicleWheel : public UVehicleWheel
{
public:
	float                                              Health;                                                   // 0x0108(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HealthMax;                                                // 0x010C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       TireBoneName;                                             // 0x0110(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bUseTireLink : 1;                                         // 0x0118(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                TireLinkIndex;                                            // 0x011C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              LongSlipSkidThreshold;                                    // 0x0120(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              LateralSlipSkidThreshold;                                 // 0x0124(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SpringCompressionLandingThreshold;                        // 0x0128(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bManualSuspensionSoundControl : 1;                        // 0x012C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UTslWheelSuspensionAudioData*                SuspensionAudioData;                                      // 0x0130(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector3D                                     WheelEffectOffset;                                        // 0x0138(0x000C) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UTslWheelEffectType*                         RollEffect;                                               // 0x0148(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UTslWheelEffectType*                         SkidAccelEffect;                                          // 0x0150(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UTslWheelEffectType*                         SkidEffect;                                               // 0x0158(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      PuncturedParticleClass;                                   // 0x0160(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      PuncturedSparkParticleClass;                              // 0x0168(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              slipThresholdForPunkSpark;                                // 0x0170(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               LandingSound;                                             // 0x0178(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bApplyForceOnPuncture : 1;                                // 0x0180(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PunctureForce;                                            // 0x0184(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PunctureVelocityScalar;                                   // 0x0188(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x018C(0x000C) MISSED OFFSET
	class ATslParticle*                                TslParticleRoll;                                          // 0x0198(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class ATslParticle*                                TslParticleSkid;                                          // 0x01A0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class ATslParticle*                                TslParticleAccelSkid;                                     // 0x01A8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class ATslParticle*                                TslParticlePunctureSpark;                                 // 0x01B0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x01B8(0x0008) MISSED OFFSET
	class UAkComponent*                                AudioCom;                                                 // 0x01C0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              MinZVelocityForSuspensionSound;                           // 0x01C8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3C];                                      // 0x01CC(0x003C) MISSED OFFSET
	float                                              TotalSpeedKmPerHour;                                      // 0x0208(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              Slip;                                                     // 0x020C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UseRoll : 1;                                              // 0x0210(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UseSkid : 1;                                              // 0x0211(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UseAccelSkid : 1;                                         // 0x0212(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      bHasLastStatus : 1;                                       // 0x0213(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslVehicleWheel");
		return ptr;
	}

};


// Class TslGame.TslAnimInstance
// 0x0BA8 (0x0F20 - 0x0378)
class UTslAnimInstance : public UAnimInstance
{
public:
	struct FScriptMulticastDelegate                    WeaponFire;                                               // 0x0378(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    WeaponFireCycle;                                          // 0x0388(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    EquipPrimary;                                             // 0x0398(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    EquipSecondary;                                           // 0x03A8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    EqupiSidearm;                                             // 0x03B8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    EquipMelee;                                               // 0x03C8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    EquipThrown;                                              // 0x03D8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    UnEquipPrimary;                                           // 0x03E8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    UnEquipSecondary;                                         // 0x03F8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    UnEqupiSidearm;                                           // 0x0408(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    UnEquipMelee;                                             // 0x0418(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    UnEquipThrown;                                            // 0x0428(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    ToggleFireMode;                                           // 0x0438(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    ReloadTactical;                                           // 0x0448(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    ReloadCharge;                                             // 0x0458(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    ReloadByOneStart;                                         // 0x0468(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    ReloadByOneStop;                                          // 0x0478(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    ReloadByOneSingle;                                        // 0x0488(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    EquipThrownGrenade;                                       // 0x0498(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    EquipThrownMolotov;                                       // 0x04A8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    EquipThrownOther;                                         // 0x04B8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    ThrowPrepare;                                             // 0x04C8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    ThrowCooking;                                             // 0x04D8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    ThrowStart;                                               // 0x04E8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    ThrowDrop;                                                // 0x04F8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    LandHeavy;                                                // 0x0508(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    LandExtreme;                                              // 0x0518(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    ReloadCancel;                                             // 0x0528(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    CharacterPickup;                                          // 0x0538(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    UnarmedAttack;                                            // 0x0548(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    PowerupUsed;                                              // 0x0558(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    ChangeCharacterAppearance;                                // 0x0568(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCastStart;                                              // 0x0578(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCastCancel;                                             // 0x0588(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCastFinish;                                             // 0x0598(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x8];                                       // 0x05A8(0x0008) MISSED OFFSET
	class ATslCharacter*                               CharacterReference;                                       // 0x05B0(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USkeletalMeshComponent*                      CharacterMesh_CP;                                         // 0x05B8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x05C0(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.TslAnimInstance.PreEvalPawnState
	float                                              LocomotionSpeed_CP;                                       // 0x05C4(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LocomotionSpeed2D_CP;                                     // 0x05C8(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsMoving_CP : 1;                                         // 0x05CC(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LocomotionDirection_CP;                                   // 0x05D0(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LocomotionDirectionClamped_CP;                            // 0x05D4(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LocomotionJumpDirection_CP;                               // 0x05D8(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LeanYaw_CP;                                               // 0x05DC(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Rotator                                      LastAbsoluteDirection_CP;                                 // 0x05E0(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	class Rotator                                      ControlRotation_CP;                                       // 0x05EC(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	class Rotator                                      ControlRotationLastMovement_CP;                           // 0x05F8(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	class Rotator                                      CharacterRotation_CP;                                     // 0x0604(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0610(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.TslAnimInstance.Stance_CP
	unsigned char                                      bIsSprintingFast_CP : 1;                                  // 0x0611(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsSprinting_CP : 1;                                      // 0x0612(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              WeaponGripType_CP;                                        // 0x0614(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SprintAlpha_CP;                                           // 0x0618(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SprintLocoAlpha_CP;                                       // 0x061C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SprintAlphaPitchComponent_CP;                             // 0x0620(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SprintAlphaSprintLimit_High;                              // 0x0624(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SprintAlphaSprintLimit_Low;                               // 0x0628(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SprintValue_CP;                                           // 0x062C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bLocalQuickThrowHigh_CP : 1;                              // 0x0630(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LocalThrowModeSwitchAlpha_CP;                             // 0x0634(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsJumping_CP : 1;                                        // 0x0638(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bJumpForward_CP : 1;                                      // 0x0639(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsSwimming_CP : 1;                                       // 0x063A(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsUnderWater_CP : 1;                                     // 0x063B(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsDBNO_CP : 1;                                           // 0x063C(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x063D(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.TslAnimInstance.DBNOEntryStance
	unsigned char                                      bIsReviving_CP : 1;                                       // 0x063E(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsUpperbody_CP : 1;                                      // 0x063F(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsTransitioning_CP : 1;                                  // 0x0640(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                PlayerID_CP;                                              // 0x0644(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                AirCraftIDAnim_CP;                                        // 0x0648(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsEquippingPistol_CP : 1;                                // 0x064C(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                PistolEquipMontageRefCP;                                  // 0x0650(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bIsFlying_CP : 1;                                         // 0x0658(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsLocalPlayer : 1;                                       // 0x0659(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LocalPlayerAlpha;                                         // 0x065C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsPunching_CP : 1;                                       // 0x0660(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PunchingAlpha_CP;                                         // 0x0664(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x0668(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.TslAnimInstance.Weapon_CP
	unsigned char                                      bIsArmedWithGun_CP : 1;                                   // 0x0669(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsArmedWithThrown_CP : 1;                                // 0x066A(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsPreparingThrow_CP : 1;                                 // 0x066B(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ThrowableAdditionalAimYaw_CP;                             // 0x066C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                CurrentRecoilMontage_CP;                                  // 0x0670(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UBlendSpace1D*                               GripBlendSpace_CP;                                        // 0x0678(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UBlendSpaceBase*                             GripBlendSpaceLH_CP;                                      // 0x0680(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LHGripIndex_CP;                                           // 0x0688(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsReloading_CP : 1;                                      // 0x068C(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     HandWeaponOffset_CP;                                      // 0x0690(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FTransform                                  WeaponInertia_CP;                                         // 0x06A0(0x0030) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	float                                              ReloadAlpha_CP;                                           // 0x06D0(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HandWeaponOffsetAlpha_CP;                                 // 0x06D4(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Rotator                                      RightClavicleRotation_CP;                                 // 0x06D8(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	float                                              FinalRecoilAlpha_CP;                                      // 0x06E4(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UBlendSpaceBase*                             WeaponLocomotionBlendspace_CP;                            // 0x06E8(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UBlendSpaceBase*                             WeaponLocomotionBlendspace_Pistol;                        // 0x06F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UBlendSpaceBase*                             WeaponLocomotionBlendspace_SMG;                           // 0x06F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UBlendSpaceBase*                             WeaponLocomotionBlendspace_Rifle;                         // 0x0700(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UBlendSpaceBase*                             WeaponLocomotionBlendspace_Sniper;                        // 0x0708(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UBlendSpaceBase*                             WeaponLocomotionBlendspace_Pistol_FPP;                    // 0x0710(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UBlendSpaceBase*                             WeaponLocomotionBlendspace_SMG_FPP;                       // 0x0718(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UBlendSpaceBase*                             WeaponLocomotionBlendspace_Rifle_FPP;                     // 0x0720(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UBlendSpaceBase*                             WeaponLocomotionBlendspace_Sniper_FPP;                    // 0x0728(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              WeaponInertiaX_Scalar_CP;                                 // 0x0730(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              WeaponInertiaY_Scalar_CP;                                 // 0x0734(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              WeaponInertiaX_Clamp_CP;                                  // 0x0738(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              WeaponInertiaY_Clamp_CP;                                  // 0x073C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              WeaponInertia_InerpSpeed_CP;                              // 0x0740(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              WeaponInertiaX_Scalar_ADS_CP;                             // 0x0744(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              WeaponInertiaY_Scalar_ADS_CP;                             // 0x0748(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              WeaponInertiaX_Clamp_ADS_CP;                              // 0x074C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              WeaponInertiaY_Clamp_ADS_CP;                              // 0x0750(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              WeaponInertia_InerpSpeed_ADS_CP;                          // 0x0754(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              WeaponInertia_InerpSpeed_YawScalar_CP;                    // 0x0758(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              WeaponInertia_YawToRollScalar_CP;                         // 0x075C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              WeaponInertia_YawToRollScalar_ADS_CP;                     // 0x0760(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              WeaponInertiaRoll_Clamp_ADS_CP;                           // 0x0764(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              WeaponInertiaRoll_Clamp_CP;                               // 0x0768(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              WeaponInertia_Yaw_CP;                                     // 0x076C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              WeaponInertia_Pitch_CP;                                   // 0x0770(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              WeaponInertia_Roll_CP;                                    // 0x0774(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SprintWeaponLoweringAlpha_CP;                             // 0x0778(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RecoilRollValue_CP;                                       // 0x077C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RecoilTimer_CP;                                           // 0x0780(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RecoilRollRand_CP;                                        // 0x0784(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RecoilTimerScale_CP;                                      // 0x0788(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 RecoilRollCurve_CP;                                       // 0x0790(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              WeaponStabilityAlpha_CP;                                  // 0x0798(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              WeaponStabilityRefSpeed_CP;                               // 0x079C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector2D                                     WeaponStabilityRefMapIn_CP;                               // 0x07A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector2D                                     WeaponStabilityRefMapOut_CP;                              // 0x07A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              WeaponStabilityInterpSpeed_CP;                            // 0x07B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bIsAiming_CP : 1;                                         // 0x07B4(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsScoping_CP : 1;                                        // 0x07B5(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              WeaponAimState_CP;                                        // 0x07B8(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SprintAlphaModifier_CP;                                   // 0x07BC(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsAimingBackward_CP : 1;                                 // 0x07C0(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Yaw_CP;                                                   // 0x07C4(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RotationYaw_CP;                                           // 0x07C8(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Pitch_CP;                                                 // 0x07CC(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              YawNormalized_CP;                                         // 0x07D0(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DesiredPitch_CP;                                          // 0x07D4(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      AimDirectionCardinal_CP;                                  // 0x07D8(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Rotator                                      AORot_CP;                                                 // 0x07DC(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	class Rotator                                      AORotBackwards_CP;                                        // 0x07E8(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	float                                              SwimmingPitch_CP;                                         // 0x07F4(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ForceAddAimOffset_CP;                                     // 0x07F8(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              WeaponCollisionAlpha_CP;                                  // 0x07FC(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bWeaponObstructedHigh_CP : 1;                             // 0x0800(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              WeaponCollisionReloadAlpha_CP;                            // 0x0804(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsFalling_CP : 1;                                        // 0x0808(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bWasFalling_CP : 1;                                       // 0x0809(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FallingAlpha_CP;                                          // 0x080C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector2D                                     FallingMap2D;                                             // 0x0810(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector2D                                     FallingMapZ;                                              // 0x0818(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bForceFall_CP : 1;                                        // 0x0820(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                MontageFallingRifle_CP;                                   // 0x0828(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimMontage*                                MontageFallingUnarmed_CP;                                 // 0x0830(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              LandingAlpha_CP;                                          // 0x0838(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bLocalForceProne_CP : 1;                                  // 0x083C(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              JumpHeight_CP;                                            // 0x0840(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FallHeight_CP;                                            // 0x0844(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     JumpStartLocation_CP;                                     // 0x0848(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	class Vector3D                                     LandPredictionVector_CP;                                  // 0x0854(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	float                                              LeanLeftAlpha_CP;                                         // 0x0860(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LeanRightAlpha_CP;                                        // 0x0864(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LeanTwoSideAlpha_CP;                                      // 0x0868(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LeanLeftApplyTranslation_CP;                              // 0x086C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LeanInterpSpeed_CP;                                       // 0x0870(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              LeanInterpSpeedCollisionClamp_CP;                         // 0x0874(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bUseLinearLeanInterp : 1;                                 // 0x0878(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bIsFreefalling_CP : 1;                                    // 0x0879(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsParachuting_CP : 1;                                    // 0x087A(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FreefallX_CP;                                             // 0x087C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FreefallY_CP;                                             // 0x0880(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FreeFallAlpha_CP;                                         // 0x0884(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsParachuteLanding_CP : 1;                               // 0x0888(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsParachuteMoving_CP : 1;                                // 0x0889(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Freefall_Yaw_CP;                                          // 0x088C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Freefall_Pitch_CP;                                        // 0x0890(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsFreelooking_CP : 1;                                    // 0x0894(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsMeleeAttacking_CP : 1;                                 // 0x0895(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bLocalForceRotationHipLeft_CP : 1;                        // 0x0896(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bLocalForceRotationHipRight_CP : 1;                       // 0x0897(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bLocalForceRotationAimed_CP : 1;                          // 0x0898(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RotationPlayrateAimed_CP;                                 // 0x089C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RotationPlayrateAimedAdditiveSpine_CP;                    // 0x08A0(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Rotator                                      LastRotation_CP;                                          // 0x08A4(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	class Rotator                                      Freelook_Body_CP;                                         // 0x08B0(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	class Rotator                                      Freelook_Delta_CP;                                        // 0x08BC(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	int                                                IdleIndex_CP;                                             // 0x08C8(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                LastIdleIndex_CP;                                         // 0x08CC(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              IdleTimer_CP;                                             // 0x08D0(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              IdleTriggerRandom;                                        // 0x08D4(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              IdleTriggerTimeMin_CP;                                    // 0x08D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              IdleTriggerTimeVariation_CP;                              // 0x08DC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FTransform                                  SlotPrimary_CP;                                           // 0x08E0(0x0030) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FTransform                                  SlotSecondary_CP;                                         // 0x0910(0x0030) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FTransform                                  SlotMelee_CP;                                             // 0x0940(0x0030) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FTransform                                  SlotThrown_CP;                                            // 0x0970(0x0030) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	class Vector3D                                     SlotPrimary_Offset_CP;                                    // 0x09A0(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	class Vector3D                                     SlotSecondary_Offset_CP;                                  // 0x09AC(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	class Vector3D                                     SlotPrimary_Location_CP;                                  // 0x09B8(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	class Vector3D                                     SlotSecondary_Location_CP;                                // 0x09C4(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	class Vector3D                                     SlotMelee_Location_CP;                                    // 0x09D0(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	class Vector3D                                     SlotThrown_Location_CP;                                   // 0x09DC(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	class Rotator                                      SlotPrimary_Rotation_CP;                                  // 0x09E8(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	class Rotator                                      SlotSecondary_Rotation_CP;                                // 0x09F4(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	class Rotator                                      SlotMelee_Rotation_CP;                                    // 0x0A00(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	class Rotator                                      SlotThrown_Rotation_CP;                                   // 0x0A0C(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	TMap<class UClass*, struct FTransform>             SlotPrimaryOffsetsPerWeapon;                              // 0x0A18(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TMap<class UClass*, struct FTransform>             SlotSecondaryOffsetsPerWeapon;                            // 0x0A68(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	float                                              AnimDynamicsStandAlpha_CP;                                // 0x0AB8(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AnimDynamicsStandSprintAlpha_CP;                          // 0x0ABC(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AnimDynamicsCrouchAlpha_CP;                               // 0x0AC0(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AnimDynamicsProneAlpha_CP;                                // 0x0AC4(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     EFCoat_CP;                                                // 0x0AC8(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	unsigned char                                      bLocalFPP_CP : 1;                                         // 0x0AD4(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LocalFPPAlpha_CP;                                         // 0x0AD8(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LocalFPPAlphaVehicleAimAO_CP;                             // 0x0ADC(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsInAircraft_CP : 1;                                     // 0x0AE0(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsDriver_CP : 1;                                         // 0x0AE1(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsSitting_CP : 1;                                        // 0x0AE2(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsInVehicle_CP : 1;                                      // 0x0AE3(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LocalSteerInput_CP;                                       // 0x0AE4(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LocalSteerInputMoto_CP;                                   // 0x0AE8(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LocalStopMoto_CP;                                         // 0x0AEC(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LocalThrottleInput_CP;                                    // 0x0AF0(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Rotator                                      GasThighRot_CP;                                           // 0x0AF4(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	class Rotator                                      GasAnkleRot_CP;                                           // 0x0B00(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FTransform                                  GasKneeTransformX_CP;                                     // 0x0B10(0x0030) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	float                                              LocalBrakeInput_CP;                                       // 0x0B40(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0xC];                                       // 0x0B44(0x000C) MISSED OFFSET
	struct FTransform                                  BrakeKneeTransform_CP;                                    // 0x0B50(0x0030) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	class Rotator                                      BrakeAnkleRot_CP;                                         // 0x0B80(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	float                                              BackwardAOAlpha_CP;                                       // 0x0B8C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AimBlendAlpha_CP;                                         // 0x0B90(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bHasContact_CP : 1;                                       // 0x0B94(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              GroundContactMoto_CP;                                     // 0x0B98(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AirControlPitchInput_CP;                                  // 0x0B9C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FTransform                                  DriverIK_CP;                                              // 0x0BA0(0x0030) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	float                                              PassengerIKAlpha_CP;                                      // 0x0BD0(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     DriverSpineLocWS_CP;                                      // 0x0BD4(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	unsigned char                                      UnknownData06[0x1];                                       // 0x0BE0(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.TslAnimInstance.VehicleSeatType_CP
	unsigned char                                      bMotoHasDriver_CP : 1;                                    // 0x0BE1(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bVaultCanceled : 1;                                       // 0x0BE2(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsVaulting_CP : 1;                                       // 0x0BE3(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AnimHairAlpha;                                            // 0x0BE4(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              VaultTimer_CP;                                            // 0x0BE8(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              VaultTimerLast_CP;                                        // 0x0BEC(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData07[0x1];                                       // 0x0BF0(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.TslAnimInstance.LocalVaultType_CP
	class UAnimSequenceBase*                           VaultAnimSequence_CP;                                     // 0x0BF8(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              VaultAnimLength_CP;                                       // 0x0C00(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveFloat*                                 VaultCurve_CP;                                            // 0x0C08(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              VaultBlendInTime_CP;                                      // 0x0C10(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              VaultBlendOutTime_CP;                                     // 0x0C14(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bEndVaultToFall_CP : 1;                                   // 0x0C18(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              VaultBlendOutProgressTime_CP;                             // 0x0C1C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              VaultBlendOutExactTime_CP;                                // 0x0C20(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              VaultLastActionTimer_CP;                                  // 0x0C24(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              VaultAnimTime_CP;                                         // 0x0C28(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              VaultBlendOutTimeBuffer;                                  // 0x0C2C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData08[0x1];                                       // 0x0C30(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.TslAnimInstance.CurrentCastAnim_CP
	unsigned char                                      bIsActiveRagdoll_CP : 1;                                  // 0x0C31(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              WeaponIKLH_CP;                                            // 0x0C34(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              WeaponIKRH_CP;                                            // 0x0C38(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MontageIKLH_CP;                                           // 0x0C3C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MontageIKRH_CP;                                           // 0x0C40(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              IgnoreWeaponTransform_CP;                                 // 0x0C44(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PickupIKAlpha_CP;                                         // 0x0C48(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TargetIKRH_CP;                                            // 0x0C4C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TargetIKLH_CP;                                            // 0x0C50(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ForceLegsFromAnim_CP;                                     // 0x0C54(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ATslWeapon_Gun*                              LastGunCache_CP;                                          // 0x0C58(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ATslWheeledVehicle*                          CachedWheeledVehicle_CP;                                  // 0x0C60(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ATslFloatingVehicle*                         CachedFloatingVehicle_CP;                                 // 0x0C68(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UBlendSpaceBase*                             PassengerAimBS_CP;                                        // 0x0C70(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UBlendSpaceBase*                             PassengerTransitionOut_CP;                                // 0x0C78(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UBlendSpaceBase*                             PassengerTransitionIn_CP;                                 // 0x0C80(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimSequenceBase*                           PassengerIdle_Rifle_CP;                                   // 0x0C88(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimSequenceBase*                           PassengerIdle_Unarmed_CP;                                 // 0x0C90(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimSequenceBase*                           PassengerIdle_Grenade_CP;                                 // 0x0C98(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimSequenceBase*                           PassengerIdle_Melee_CP;                                   // 0x0CA0(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveFloat*                                 CurveAimState_CP;                                         // 0x0CA8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData09[0x8];                                       // 0x0CB0(0x0008) MISSED OFFSET
	unsigned char                                      bIsLOD1 : 1;                                              // 0x0CB8(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsLOD2 : 1;                                              // 0x0CB9(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsWearingCoat : 1;                                       // 0x0CBA(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData10[0x9];                                       // 0x0CBB(0x0009) MISSED OFFSET
	float                                              AnimatedHairsAlpha;                                       // 0x0CC4(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsParentalControl : 1;                                   // 0x0CC8(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                MontageMeleeAttack1;                                      // 0x0CD0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimMontage*                                MontageMeleeAttack2;                                      // 0x0CD8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimMontage*                                MontageMeleeAttack3;                                      // 0x0CE0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimMontage*                                MontagePunchingAttack1;                                   // 0x0CE8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimMontage*                                MontagePunchingAttack2;                                   // 0x0CF0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimMontage*                                MontagePunchingAttack3;                                   // 0x0CF8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FPPSprintAnimScalar;                                      // 0x0D00(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector3D                                     FPP_PrimaryAndSecondaryItemOffset;                        // 0x0D04(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PunchingAlphaOneTarget_CP;                                // 0x0D10(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PunchingAlphaInterpSpeed;                                 // 0x0D14(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SprintWeaponLoweringScalar_CP;                            // 0x0D18(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ThrowStateSwitchInterpSpeed;                              // 0x0D1C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              VaultingEvalTimeout;                                      // 0x0D20(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimDB*                                     UnarmedAnimDB_CP;                                         // 0x0D28(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimDB*                                     RifleAnimDB_CP;                                           // 0x0D30(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimDB*                                     MeleeAnimDB_CP;                                           // 0x0D38(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimDB*                                     GrenadeAnimDB_CP;                                         // 0x0D40(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData11[0x8];                                       // 0x0D48(0x0008) MISSED OFFSET
	struct FTransform                                  DefaultSlotPrimary_Male_CP;                               // 0x0D50(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FTransform                                  DefaultSlotSecondary_Male_CP;                             // 0x0D80(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FTransform                                  DefaultSlotMelee_Male_CP;                                 // 0x0DB0(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FTransform                                  DefaultSlotThrown_Male_CP;                                // 0x0DE0(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FTransform                                  DefaultSlotPrimary_Female_CP;                             // 0x0E10(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FTransform                                  DefaultSlotSecondary_Female_CP;                           // 0x0E40(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FTransform                                  DefaultSlotThrown_Female_CP;                              // 0x0E70(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FTransform                                  DefaultSlotMelee_Female_CP;                               // 0x0EA0(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SprintLocoTimeMultiplier;                                 // 0x0ED0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SprintLocoTimeMultiplier_FPP;                             // 0x0ED4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SprintLocoTimeAlphaScalar;                                // 0x0ED8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SprintLocoTimeAlphaScalar_FPP;                            // 0x0EDC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SprintLocoInstantScalar;                                  // 0x0EE0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              LocomotionDirectionInterp;                                // 0x0EE4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              LeanYawInterpSpeedMin;                                    // 0x0EE8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              LeanYawInterpSpeedMax;                                    // 0x0EEC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              LeanYawGlobalMultiplier;                                  // 0x0EF0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              LeanYawClamp;                                             // 0x0EF4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SprintLocoStandLimit_High;                                // 0x0EF8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SprintLocoCrouchLimit_High;                               // 0x0EFC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SprintLocoProneLimit_High;                                // 0x0F00(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SprintLocoStandLimit_Low;                                 // 0x0F04(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SprintLocoCrouchLimit_Low;                                // 0x0F08(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SprintLocoProneLimit_Low;                                 // 0x0F0C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SprintLocoLimitInterpSpeed;                               // 0x0F10(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Rotator                                      RightClavicleCompensation;                                // 0x0F14(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslAnimInstance");
		return ptr;
	}


	void SetWeaponStatesEvaluationCooldown(float Time);
	void SetLandPredictionVector(const class Vector3D& newLandVector);
	void SetJumpStartLocation(const class Vector3D& NewLocation, float DefaultFallHeight);
	void ResetRecoilRoll();
	void ResetIdle();
	void RandomizeIdleIndex_CP(bool ExludeLastIndex);
	void ProcessCodePaths();
	void PreEvaluatePawnState();
	void OnHitReaction(const struct FName& BoneName, const class Vector3D& Direction);
	void HandleSpeedAndDirection_CP();
	void HandleItemOffsets_CP();
	unsigned char HandleCardinalDirection90(float InDirection);
	void HandleAnimCurves();
	void HandleADSSocketOffset();
	void GetVehicleAO(float* Yaw, float* Pitch);
	class UBlendSpace* GetBlendSpaceRelaxed_TS(TEnumAsByte<EAnimStanceType> AnimStance, bool bIsFPP, class UAnimDB* InAnimDB);
	class UBlendSpace* GetBlendSpace_TS(TEnumAsByte<EAnimStanceType> AnimStance, bool bIsFPP, class UAnimDB* InAnimDB);
	float GetAnimSpeed_TS(TEnumAsByte<EAnimStanceType> AnimStance, float Direction, float InSpeed, class UAnimDB* InAnimDB, bool bIsSprinting, float* PlayRate, float* SprintAlpha);
	bool GetAbsActorToBaseRotation(bool bInUseMin, float InAngle);
	float FindPositionFromDistanceCurve(float Distance, class UAnimSequenceBase* InAnimSequence);
	void EvaluateWeaponStates();
	void EvaluateWeaponStability();
	void EvaluateWeaponInertia();
	void EvaluateWeaponCollision();
	void EvaluateVehicle();
	void EvaluateVaulting();
	void EvaluateSwimming();
	void EvaluateRotations();
	void EvaluateRecoilRoll();
	void EvaluatePawnStates();
	void EvaluateMeleeAttack();
	void EvaluateLocalPawnStates();
	void EvaluateLeaning();
	void EvaluateJumping();
	void EvaluateJumpCamera();
	void EvaluateItemOffsets();
	void EvaluateIdle();
	void EvaluateFreelook();
	void EvaluateFreefallAndParachute();
	void EvaluateFallingAndLanding();
	void EvaluateCoatExternalForce();
	void EvaluateCharacterStates();
	void EvaluateCasting();
	void EvaluateAnimDynamics();
	void EvaluateAimStates();
	void EvaluateAimOffsets();
	void CacheCharacterReference(class ATslCharacter* InCharacter);
};


// Class TslGame.TslDamageType
// 0x0050 (0x0090 - 0x0040)
class UTslDamageType : public UDamageType
{
public:
	unsigned char                                      UnknownData00[0x1];                                       // 0x0040(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.TslDamageType.DamageTypeCategory
	struct FCanvasIcon                                 KillIcon;                                                 // 0x0048(0x0018) (CPF_Edit, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	class UForceFeedbackEffect*                        HitForceFeedback;                                         // 0x0060(0x0008) (CPF_Edit, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UForceFeedbackEffect*                        KilledForceFeedback;                                      // 0x0068(0x0008) (CPF_Edit, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bFallDamage : 1;                                          // 0x0070(0x0001) (CPF_Edit, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	TArray<struct FDamageRatioInfo>                    DamageRatioInfos;                                         // 0x0078(0x0010) (CPF_Edit, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	unsigned char                                      HitReaction : 1;                                          // 0x0088(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslDamageType");
		return ptr;
	}

};


// Class TslGame.TslHUD
// 0x04B8 (0x0A00 - 0x0548)
class ATslHUD : public ATslBaseHUD
{
public:
	struct FScriptMulticastDelegate                    OnPossessPawnChange;                                      // 0x0548(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDisplaySystemMessage;                                   // 0x0558(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDisplayKilledMessage;                                   // 0x0568(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnKillCountChanged;                                       // 0x0578(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNotifyHit;                                              // 0x0588(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTeamPlayerJoin;                                         // 0x0598(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTeamPlayerRemove;                                       // 0x05A8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNotifyStartBuff;                                        // 0x05B8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNotifyHealAmount;                                       // 0x05C8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNotifyRestrictingPlayArea;                              // 0x05D8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNotifyNextGasIn;                                        // 0x05E8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNotifyDisplayMessage;                                   // 0x05F8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNotifyWeaponChange;                                     // 0x0608(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNotifyWeaponUnarm;                                      // 0x0618(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNotifyHeal;                                             // 0x0628(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNotifyDropSlotOnOtherContainer;                         // 0x0638(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNotifyBlockingWidgetOpened;                             // 0x0648(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNotifyHealItemSelector_Gamepad;                         // 0x0658(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNotifyReloadingNeed;                                    // 0x0668(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNotifyReloaded;                                         // 0x0678(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNotifyVehicleRide;                                      // 0x0688(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNotifyVehicleLeave;                                     // 0x0698(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	int                                                BluezoneState;                                            // 0x06A8(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bGpsReset : 1;                                            // 0x06AC(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bBluezoneReset : 1;                                       // 0x06AD(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bPlayzoneReset : 1;                                       // 0x06AE(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              GpsResetTimeCheck;                                        // 0x06B0(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x34];                                      // 0x06B4(0x0034) MISSED OFFSET
	struct FCanvasIcon                                 TimePlaceBg;                                              // 0x06E8(0x0018)
	struct FCanvasIcon                                 PrimaryWeapBg;                                            // 0x0700(0x0018)
	struct FCanvasIcon                                 SecondaryWeapBg;                                          // 0x0718(0x0018)
	struct FCanvasIcon                                 Crosshair[0x5];                                           // 0x0730(0x0018)
	unsigned char                                      UnknownData01[0x78];                                      // 0x07A8(0x0078) MISSED OFFSET
	class UTexture2D*                                  HitNotifyTexture;                                         // 0x0820(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTexture2D*                                  HUDMainTexture;                                           // 0x0828(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTexture2D*                                  HUDAssets02Texture;                                       // 0x0830(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTexture2D*                                  LowHealthOverlayTexture;                                  // 0x0838(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UFont*                                       BigFont;                                                  // 0x0840(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UFont*                                       NormalFont;                                               // 0x0848(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x60];                                      // 0x0850(0x0060) MISSED OFFSET
	class UTslSceneCaptureWorld*                       SceneCaptureWorld;                                        // 0x08B0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x10];                                      // 0x08B8(0x0010) MISSED OFFSET
	class Vector3D                                     NextPlayzonePosition;                                     // 0x08C8(0x000C) (CPF_BlueprintVisible, CPF_IsPlainOldData)
	float                                              NextPlayzoneRadius;                                       // 0x08D4(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     CurrentPlayzonePosition;                                  // 0x08D8(0x000C) (CPF_BlueprintVisible, CPF_IsPlainOldData)
	float                                              CurrentPlayzoneRadius;                                    // 0x08E4(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x50];                                      // 0x08E8(0x0050) MISSED OFFSET
	struct FString                                     SceneCapturePackageName;                                  // 0x0938(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData05[0xB8];                                      // 0x0948(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslHUD");
		return ptr;
	}


	void TestSendSystemMessage(const struct FText& Message, float Duration);
	void TestSendImportantMessage(const struct FText& Message, float Duration);
	void TestKillMessage(const struct FString& KillerName, const struct FString& VictimName, bool bKillerIsOwner, bool bVictimIsOwner);
	void TestGameEvent_MatchEnded();
	void TestGameEvent_KillOtherPlayer(bool bGroggy);
	void TestGameEvent_Die(bool bGroggy);
	void SpawnActorInSceneCaptureWorld(class UClass* ActorClass, const struct FTransform& SpawnTransform, const struct FScriptDelegate& DelegateToCall);
	void SetHighlightProvider(const struct FString& Provider);
	void RecordReplayHighlightSession(float timeLength);
	void NotifyDropSlotOnOtherContainer(const TScriptInterface<class USlotContainerInterface>& Container, const TScriptInterface<class USlotInterface>& Slot, const TScriptInterface<class USlotContainerInterface>& OtherContainer);
	bool IsGameEnded();
	void InitCaptureWorld();
	void GoToLobby();
	class APawn* GetPossessPawn();
	class ATslCharacter* GetPossessCharacter();
	float GetHealAmount();
};


// Class TslGame.TslSettings
// 0x04C0 (0x04E8 - 0x0028)
class UTslSettings : public UObject
{
public:
	unsigned char                                      SupportedClientReplay : 1;                                // 0x0028(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      SupportedKillcam : 1;                                     // 0x0029(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	int                                                MaxReplaysForNullStreamer;                                // 0x002C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              RepDistance_Item;                                         // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              RepDistance_Character;                                    // 0x0034(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              RepDistance_Weapon;                                       // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              RepDistance_Vehicle;                                      // 0x003C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              RepDistance_Parachute;                                    // 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              RepDistance_Door;                                         // 0x0044(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              RepDistance_Window;                                       // 0x0048(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              RepFrequency_Character;                                   // 0x004C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              RepFrequency_WheeledVehicle;                              // 0x0050(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              RepFrequency_FloatingVehicle;                             // 0x0054(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              RepFrequency_Parachute;                                   // 0x0058(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              RepFrequency_Aircraft;                                    // 0x005C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              RepFrequency_CarePackage;                                 // 0x0060(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              RepVehicle_SpawnDistance;                                 // 0x0064(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              RepVehicle_UnspawnDistance;                               // 0x0068(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	struct FRigidBodyErrorCorrection                   RepVehicle_PhysicErrorCorrection;                         // 0x006C(0x001C) (CPF_Edit, CPF_Config)
	float                                              CharacterCorrection_MaxSpeed;                             // 0x0088(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              CharacterCorrection_MaxSpeedPositionError;                // 0x008C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              CharacterCorrection_ZeroSpeedPositionError;               // 0x0090(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bBattlEyeEnabled : 1;                                     // 0x0094(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bBattlEyeEnabledInPIE : 1;                                // 0x0095(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              BattlEyeReliablePacketIntervalOnClient;                   // 0x0098(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              BattlEyeReliablePacketIntervalOnServer;                   // 0x009C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bTPEnabled : 1;                                           // 0x00A0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bTPEnabledInPIE : 1;                                      // 0x00A1(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bChineseLicensing : 1;                                    // 0x00A2(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bKoreanRating : 1;                                        // 0x00A3(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              GameStateLogInterval;                                     // 0x00A4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              ServerStatLogInterval;                                    // 0x00A8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              CharacterPositionLogInterval;                             // 0x00AC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              DestructibleComponentMaxDrawDistance;                     // 0x00B0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	class UClass*                                      CharacterClassToPlay;                                     // 0x00B8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	TArray<struct FBoneBinding>                        BoneMapping;                                              // 0x00C0(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	TArray<struct FStringAssetReference>               TestVehicleClasses;                                       // 0x00D0(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	TArray<struct FStringAssetReference>               TestFloatingVehicleClasses;                               // 0x00E0(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	TArray<struct FChineseLicensingDefaultCustomizeData> ChineseLicensingDefaultCustomizeData;                     // 0x00F0(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	float                                              StoppedWheeledVehicleSpeedThreshold;                      // 0x0100(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              StoppedFloatingVehicleSpeedThreshold;                     // 0x0104(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              LastDriverDuration;                                       // 0x0108(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              InteractableDistanceToleranceOnDedicatedServer;           // 0x010C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              InteractableDistance_ItemDefault;                         // 0x0110(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              InteractableSpeed_ItemDefault;                            // 0x0114(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	struct FInteractionCollisionData                   InteractionCollisionForFPS;                               // 0x0118(0x0014) (CPF_Edit, CPF_Config)
	struct FInteractionCollisionData                   InteractionCollisionForTPS;                               // 0x012C(0x0014) (CPF_Edit, CPF_Config)
	unsigned char                                      bPreventFinishMatchInPIE : 1;                             // 0x0140(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bEnableInitialItemDonator : 1;                            // 0x0141(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              InventoryMaxSpaceDefault;                                 // 0x0144(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	class UTexture*                                    ErrorIconTexture;                                         // 0x0148(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTexture*                                    LoadingIconTexture;                                       // 0x0150(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UObject*>                             AssetsForPackageIntegrity;                                // 0x0158(0x0010) (CPF_ZeroConstructor)
	float                                              UICrosshairDistance;                                      // 0x0168(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              UICrosshairInterpSpeed;                                   // 0x016C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              UICrosshairDisableDistance;                               // 0x0170(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              BallisticDragScale;                                       // 0x0174(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              BallisticDropScale;                                       // 0x0178(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              BallisticMOAScale;                                        // 0x017C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              RecoilControlScale;                                       // 0x0180(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              RecoilAnimScale;                                          // 0x0184(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              GameTimeMultiplier;                                       // 0x0188(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      AimOffsetRayCast : 1;                                     // 0x018C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              MeleeWeaponPitchMin;                                      // 0x0190(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              MeleeWeaponPitchMax;                                      // 0x0194(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      EnableThrowLagCompensation : 1;                           // 0x0198(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      FullRecoilRecovery : 1;                                   // 0x0199(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	struct FLevelLoadingBoostParameters                LevelLoadingBoostParameters;                              // 0x019C(0x0010) (CPF_Edit, CPF_Config)
	TArray<struct FString>                             ErangelIgnoreWeatherIds;                                  // 0x01B0(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	TArray<struct FNearClippingValue>                  NearClippingValues;                                       // 0x01C0(0x0010) (CPF_ZeroConstructor, CPF_Config)
	TArray<struct FTslGame_FCustomizableCategoryData>  CustomizableCategoryData;                                 // 0x01D0(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	TArray<struct FCustomizableActionName>             CustomizableActionNames;                                  // 0x01E0(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	TArray<struct FTslGame_FCustomizableAxisName>      CustomizableAxisNames;                                    // 0x01F0(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	TArray<struct FCustomizableMouseSensitiveName>     CustomizableMouseSensitiveNames;                          // 0x0200(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	TArray<struct FCustomizableGamePadSensitiveName>   CustomizableGamePadSensitiveNames;                        // 0x0210(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	TArray<struct FSurportQualityLevel>                SupportedQualityLevels;                                   // 0x0220(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	TArray<struct FScreenResolution>                   SupportedScreenResolutions;                               // 0x0230(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FStringAssetReference                       MouseSensitivityCurve;                                    // 0x0240(0x0010) (CPF_Edit, CPF_Config)
	struct FStringAssetReference                       GammaCurve;                                               // 0x0250(0x0010) (CPF_Edit, CPF_Config)
	TArray<struct FColorBlindType>                     ColorBlindTypes;                                          // 0x0260(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	TArray<struct FPresetColor>                        CrosshairColors;                                          // 0x0270(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	TArray<struct FKeyInputModeName>                   KeyInputModeNames;                                        // 0x0280(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	TArray<struct FUiType>                             MiniMapTypeList;                                          // 0x0290(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	float                                              MinimumScreenResolutionRatio;                             // 0x02A0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	struct FScreenResolution                           MinimumScreenResolution;                                  // 0x02A4(0x0008) (CPF_Edit, CPF_Config)
	TArray<struct FTeamColorAndIcon>                   OverrideMarkerColorAndIcons;                              // 0x02B0(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	float                                              PunchClientHitLeeway_Attacker;                            // 0x02C0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              PunchClientHitLeeway_Victim;                              // 0x02C4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              PunchClientHitLeeway_VictimInPlace;                       // 0x02C8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              ClientSideHitLeeway;                                      // 0x02CC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              ClientSideHitLeewayInPlace;                               // 0x02D0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              LogClientSideHitLeeway;                                   // 0x02D4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              ClientSideOriginDistanceLeeway;                           // 0x02D8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              ClientSideOriginDistanceLeewayInPlace;                    // 0x02DC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              ClientSideOriginDistanceMax;                              // 0x02E0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              TravelDistanceLeeway;                                     // 0x02E4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              AllowedHitLag;                                            // 0x02E8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              LogMinHitLag;                                             // 0x02EC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              HackDetectionSpeed;                                       // 0x02F0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	TArray<struct FOverrideScalability>                OverrideScalabilities;                                    // 0x02F8(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	float                                              FakeDoorBlockMaxY;                                        // 0x0308(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	TArray<struct FReportCauseData>                    ReportCauses;                                             // 0x0310(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	TArray<struct FSubjectToReport>                    SubjectToReport;                                          // 0x0320(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	float                                              FreelookRecoveryInterpSpeed;                              // 0x0330(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	TMap<struct FName, float>                          GamepadSensitiveMultiplier;                               // 0x0338(0x0050) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	float                                              GamePadInnerDeadZone;                                     // 0x0388(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              GamePadOutDeadZoneAcceleration;                           // 0x038C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              GamePadOutMaxAxisValue;                                   // 0x0390(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              GamePadAccelerationStandardFps;                           // 0x0394(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              AimAssistDecisionRadius;                                  // 0x0398(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bApplyInputValue : 1;                                     // 0x039C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bIgnorePadSensitive : 1;                                  // 0x039D(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              InsensitiveZone;                                          // 0x03A0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	TArray<struct FAimAssistData>                      AimCameraAssists;                                         // 0x03A8(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	TArray<struct FAimAssistData>                      ADSCameraAssists;                                         // 0x03B8(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	TArray<struct FAimAssistData>                      Scope2XCameraAssists;                                     // 0x03C8(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	TArray<struct FAimAssistData>                      Scope4XCameraAssists;                                     // 0x03D8(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	TArray<struct FAimAssistData>                      Scope8XCameraAssists;                                     // 0x03E8(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	TArray<struct FAimAssistData>                      Scope15XCameraAssists;                                    // 0x03F8(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	unsigned char                                      bIsESports : 1;                                           // 0x0408(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	struct FStringAssetReference                       DialogUMGWidgetClassStringAssetReference;                 // 0x0410(0x0010) (CPF_Edit, CPF_Config)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0420(0x0050) MISSED OFFSET
	class UCurveFloat*                                 LoadedMouseSensitivityCurve;                              // 0x0470(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class UCurveFloat*                                 LoadedGammaCurve;                                         // 0x0478(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class UTextureRenderTarget2D*                      CharacterStudioRenderTarget;                              // 0x0480(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	TArray<struct FAnimatableCustomizableObjectData>   AnimatableCustomizableDatas;                              // 0x0488(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	TMap<struct FName, float>                          NotifyDistanceLimitMap;                                   // 0x0498(0x0050) (CPF_Edit, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslSettings");
		return ptr;
	}


	void SetCharacterStudioRenderTarget(class UTextureRenderTarget2D* rt);
	bool IsForKoreanRating();
	bool IsForChineseLicensing();
	bool IsESports();
	class UTslSettings* STATIC_GetTslSettings();
	float GetNotifyMaxDistanceByName(const struct FName& InName);
	class UTextureRenderTarget2D* GetCharacterStudioRenderTarget();
};


// Class TslGame.TslGameInstance
// 0x0890 (0x0980 - 0x00F0)
class UTslGameInstance : public UGameInstance
{
public:
	TArray<struct FString>                             PersistentUClassPaths;                                    // 0x00F0(0x0010) (CPF_ZeroConstructor, CPF_Config)
	TArray<class UClass*>                              PersistentUClasses;                                       // 0x0100(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	struct FString                                     WelcomeScreenMap;                                         // 0x0110(0x0010) (CPF_ZeroConstructor, CPF_Config)
	unsigned char                                      bUseLobbyWidget : 1;                                      // 0x0120(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	int                                                LobbyWidgetZOrder;                                        // 0x0124(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	class ULobbyLink*                                  LobbyLink;                                                // 0x0128(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class UVivoxManager*                               VivoxManager;                                             // 0x0130(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class UReporterManager*                            ReporterManager;                                          // 0x0138(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FTslStartParameter                          StartParamter;                                            // 0x0140(0x0080)
	unsigned char                                      UnknownData00[0xC8];                                      // 0x01C0(0x00C8) MISSED OFFSET
	class UClass*                                      LobbyWidgetClass;                                         // 0x0288(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x150];                                     // 0x0290(0x0150) MISSED OFFSET
	class ULobbyWidget*                                LobbyWidget;                                              // 0x03E0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0xA8];                                      // 0x03E8(0x00A8) MISSED OFFSET
	TArray<struct FReplayKillEventItem>                ReplayKillEventItems;                                     // 0x0490(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FScriptMulticastDelegate                    OnEnumerateReplayKillEventsDone;                          // 0x04A0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData03[0xA0];                                      // 0x04B0(0x00A0) MISSED OFFSET
	TArray<struct FReplayGroggyEventItem>              ReplayGroggyEventItems;                                   // 0x0550(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FScriptMulticastDelegate                    OnEnumerateReplayGroggyEventsDone;                        // 0x0560(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData04[0x10];                                      // 0x0570(0x0010) MISSED OFFSET
	TArray<struct FReplayItem>                         ReplayItemList;                                           // 0x0580(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	unsigned char                                      UnknownData05[0x38];                                      // 0x0590(0x0038) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnGetReplayListDone;                                      // 0x05C8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnGotoTimelineDone;                                       // 0x05D8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRecordStarted;                                          // 0x05E8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnReplayProblem;                                          // 0x05F8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDownloadZippedReplayProgressDelegate;                   // 0x0608(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDownloadZippedReplayCompleteDelegate;                   // 0x0618(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData06[0x28];                                      // 0x0628(0x0028) MISSED OFFSET
	int                                                MaxReplaysForNullStreamer;                                // 0x0650(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumReplaysForNullStreamer;                                // 0x0654(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumReplaysToKeepForNullStreamer;                          // 0x0658(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FScriptMulticastDelegate                    OnKeepAndDeleteOldestReplaysDoneDelegate;                 // 0x0660(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData07[0x10];                                      // 0x0670(0x0010) MISSED OFFSET
	class UGameEventObserver*                          GameEventObserver;                                        // 0x0680(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData08[0x28];                                      // 0x0688(0x0028) MISSED OFFSET
	struct FTslReplaySummary                           ReplaySummaryForPlayback;                                 // 0x06B0(0x0080) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FScriptMulticastDelegate                    OnGetReplaySummaryDone;                                   // 0x0730(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      bIsStartedFromReplayListMap : 1;                          // 0x0740(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ATslPlayerState*                             CachedDemoPlayerState;                                    // 0x0748(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData09[0x140];                                     // 0x0750(0x0140) MISSED OFFSET
	class UHighlightSession*                           HighlightSession;                                         // 0x0890(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData10[0xE8];                                      // 0x0898(0x00E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslGameInstance");
		return ptr;
	}


	bool UseLobbyWidget();
	bool UpdateReplayShouldKeepBP(const struct FString& RegionOrLocal, const struct FString& SessionName, bool bShouldKeep);
	bool UnPause();
	void StopStat(TEnumAsByte<EServerStatType> StatType);
	void StopIfReplaying();
	bool StartStat(TEnumAsByte<EServerStatType> StatType);
	bool ShowYesNoMessage(const struct FString& strTitle, const struct FString& strMsg);
	void ShowSystemMessage(const struct FString& strTitle, const struct FString& strMsg);
	bool ShowOkCancelMessage(const struct FString& strTitle, const struct FString& strMsg);
	void ShowLoadingScreen();
	void SetStartedFromReplayListMap(bool bSet);
	void SetReplayTimeSpeed(float TimeSpeed);
	void SetReplayBusy(bool bBusy);
	void SetMaxReplaysForNullStreamer();
	void ResetReplayStreamer();
	void RequestReplayAKillEvent(const struct FString& EventID);
	void RequestReplayAGroggyEvent(const struct FString& EventID);
	void ReplayProblemDelegate__DelegateSignature();
	void ReplayJumpInt(int second);
	void ReplayJump(float TimelinePercentage);
	void RemoveAllKillEvents();
	void RemoveAllGroggyEvents();
	void RecordStartedDelegate__DelegateSignature();
	void QuitApplication(bool bShowMessage);
	void PlayReplayCommand(const struct FString& RegionOrLocal, const struct FString& SessionName);
	void PlayReplayBPByRegionOrLocal(const struct FString& Region, const struct FString& SessionName);
	void PlayReplayBP(const struct FString& SessionName);
	bool Pause();
	void OnPressedPopupConfirmInvite();
	void OnPressedPopupCommon();
	void KeepMaxReplaysAndDeleteOldestReplaysForNullStreamer();
	void KeepAndDeleteOldestReplaysForNullStreamer(int nReplaysToKeep);
	void KeepAndDeleteOldestReplaysDoneDelegate__DelegateSignature(int nRemains);
	bool IsReplaying();
	bool IsReplayError();
	bool IsRecording();
	bool IsPaused();
	bool IsLive();
	bool IsKillcamPlayback();
	void GotoTimelineDoneDelegate__DelegateSignature();
	void GotoReplayList();
	struct FString GetStartParameterStringValue(const struct FString& Key, const struct FString& NotFoundValue);
	struct FTslStartParameter GetStartParameter();
	bool GetStartedFromReplayListMap();
	float GetReplayTotalTime();
	void GetReplaySummaryDoneDelegate__DelegateSignature(const struct FTslReplaySummary& aTslReplaySummary);
	void GetReplaySummary(const struct FString& RegionOrLocal, const struct FString& SessionName);
	void GetReplayListLocal(int PageIndex, int PageSize);
	void GetReplayListDoneDelegate__DelegateSignature();
	void GetReplayListByRegionOrLocal(const struct FString& RegionOrLocal, int PageIndex, int PageSize);
	void GetReplayList();
	void GetReplayKill__DelegateSignature();
	float GetReplayCurrentTime();
	bool GetReplayBusy();
	struct FTslPlayerStateSummary GetRecordUserFromReplaySummary(const struct FTslReplaySummary& inReplaySummary);
	TArray<struct FTslPlayerStateSummary> GetRecorderTeamMembersFromReplaySummary(const struct FTslReplaySummary& inReplaySummary);
	int GetNumTotalReplays();
	void GetNumReplaysForNullStreamer();
	class UGameEventObserver* GetGameEventObserver();
	float GetDemoDiskFreeSpace();
	struct FName GetCurrentGameState();
	class ATslCharacter* FindRecorderCharacterForPlayback(TArray<class ATslCharacter*> ReplicatedCharacterList);
	void EnumerateReplayKillEvents();
	void EnumerateReplayGroggyEvents();
	void DownloadZippedReplayProgressDelegate__DelegateSignature(const struct FString& strFileName, int nReceived, int nTotal);
	void DownloadZippedReplayCompleteDelegate__DelegateSignature(const struct FString& strFullPath, const struct FString& strDirToExtract);
	bool DownloadZippedReplayBPByRegion(const struct FString& Region, const struct FString& SessionName, int nTotalSize);
	bool DeleteZippedReplayBP(const struct FString& ArchiveName);
	bool DeleteReplayBPByRegionOrLocal(const struct FString& RegionOrLocal, const struct FString& SessionName);
	bool CancelDownloadingZippedReplay(const struct FString& SessionName);
	void AddPlayerStateToReplaySummary(class ATslPlayerState* pPlayerState, struct FTslReplaySummary* inReplaySummary);
};


// Class TslGame.LobbyHUD
// 0x01A0 (0x0BA0 - 0x0A00)
class ALobbyHUD : public ATslHUD
{
public:
	struct FScriptMulticastDelegate                    OnRequestSystemMenu;                                      // 0x0A00(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	class UCurveFloat*                                 CameraTransitionCurve;                                    // 0x0A10(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CameraTransitionElapsedTime;                              // 0x0A18(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsCameraTransitionPlaying : 1;                           // 0x0A1C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0A1D(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.LobbyHUD.LastCameraState
	unsigned char                                      UnknownData01[0x1];                                       // 0x0A1E(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.LobbyHUD.FromCameraState
	unsigned char                                      UnknownData02[0x1];                                       // 0x0A1F(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.LobbyHUD.ToCameraState
	TMap<int, class ACameraActor*>                     LobbyCameras;                                             // 0x0A20(0x0050) (CPF_ZeroConstructor)
	struct FName                                       MainMenuStreamingLevelName;                               // 0x0A70(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       CustomizationStreamingLevelName;                          // 0x0A78(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FTransform>                          CachedLobbyCharacterTransforms;                           // 0x0A80(0x0010) (CPF_ZeroConstructor)
	class UCurveFloat*                                 FadeInOutCurve;                                           // 0x0A90(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class ATslPostProcessEffect*                       LobbyPPE;                                                 // 0x0A98(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FadeInOutEffectElapsedTime;                               // 0x0AA0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsFadeInOutEffectPlaying : 1;                            // 0x0AA4(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FTimerHandle                                TimerHandle_FadeInOut;                                    // 0x0AA8(0x0008)
	class ATslPostProcessEffect*                       MainMenuPPE;                                              // 0x0AB0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CachedDOFFarBlueSize;                                     // 0x0AB8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x0ABC(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.LobbyHUD.BlurChangingState
	unsigned char                                      bInitCameraTransition : 1;                                // 0x0ABD(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FScriptMulticastDelegate                    OnCreateCharacter;                                        // 0x0AC0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDestroyCharacter;                                       // 0x0AD0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FString                                     StartURL;                                                 // 0x0AE0(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<class UCoherentCommonBinder*>               CommonBinders;                                            // 0x0AF0(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	class UAkComponent*                                AkSound;                                                  // 0x0B00(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class ACameraActor*                                MainCamera;                                               // 0x0B08(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x20];                                      // 0x0B10(0x0020) MISSED OFFSET
	class UClass*                                      LobbyCharacterMaleClass;                                  // 0x0B30(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      LobbyCharacterFemaleClass;                                // 0x0B38(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x50];                                      // 0x0B40(0x0050) MISSED OFFSET
	struct FViewTargetTransitionParams                 ViewTargetTransitionParams;                               // 0x0B90(0x0010) (CPF_Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.LobbyHUD");
		return ptr;
	}


	void TickFadeInOutEffect(float DeltaTime);
	void TickCameraTransition(float DeltaTime);
	void TestLobbyCharacterReady(uint32_t SlotIndex, bool bReady);
	void TestLobbyCharacterHost(uint32_t SlotIndex);
	void TestLobbyCharacterAddAngle(int SlotIndex, float InYawInDegree);
	void TestLobbyCamera_TeleportTo(int Index);
	void TestLobbyCamera_StartTransitionTo(int ToIndex);
	void TestLobbyCamera_StartTransitionFromTo(int FromIndex, int ToIndex);
	void TestLobbyCamera_SpawnCharacters(int Num);
	void TestLobbyCamera_Init();
	void TeleportCameraTo();
	void StopFadeInOutEffect();
	void StopCameraTransition();
	void StartFadeInOutEffect();
	void StartCameraTransitionTo();
	void StartCameraTransitionFromTo();
	void SetWidgetForBinding(int ViewIndex, class UCoherentUIGTWidget* Widget);
	void SetLobbyCharacterHiddenInGame(uint32_t SlotIndex, bool bNewHidden);
	void RequestSystemMenu();
	void OnReplaySummary(const struct FTslReplaySummary& ReplaySummary);
	void OnReplayList();
	void OnDeleteOldReplays(int RemainedReplayNum);
	void NotifyLobbySceneChanged(bool bIsCustomizationScene);
	void NotifyLobbyCharacterCreated(int InSlotIndex);
	void LeaveCustomizationMenu();
	bool IsCameraHasBlurEffect();
	void InitLobbyTransition();
	void InitFadeInOutEffect();
	void InitCameraTransition();
	struct FString GetStartUrl();
	int GetLobbyCharacterNum();
	class ALobbyCharacter* GetLobbyCharacter(int SlotIndex);
	void GetLobbyCameraState();
	class ACameraActor* GetLobbyCamera();
	float GetCurveDuration(class UCurveFloat* InCurve);
	void EnterCustomizationMenu();
	void DecideBlurChangingState();
	void ClearAllWidget();
	void CacheSubLevelNames();
	void CachePostProcessEffectFromLevel();
	void CacheMainCameraFromLevel();
	void CacheLobbyCharacterTransforms();
	void CacheLobbyCamarasFromLevel();
	void AddLobbyCharacterAngle(int SlotIndex, float AngleInDegree);
};


// Class TslGame.TslWelcomeBaseHUD
// 0x0048 (0x0590 - 0x0548)
class ATslWelcomeBaseHUD : public ATslBaseHUD
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0548(0x0010) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnStateChanged;                                           // 0x0558(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0568(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.TslWelcomeBaseHUD.WelcomeState
	unsigned char                                      UnknownData02[0x27];                                      // 0x0569(0x0027) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslWelcomeBaseHUD");
		return ptr;
	}


	void OnPressedPopupCommon();
};


// Class TslGame.TslEntryPlayerController
// 0x0008 (0x06F8 - 0x06F0)
class ATslEntryPlayerController : public ATslBasePlayerController
{
public:
	class UVivoxLobbyComponent*                        VivoxComponent;                                           // 0x06F0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslEntryPlayerController");
		return ptr;
	}


	void LoadReplay(const struct FString& SessionName);
	void HandleLobbySystemMenu();
};


// Class TslGame.PerfBotPlayerController
// 0x0060 (0x0BA0 - 0x0B40)
class APerfBotPlayerController : public ATslPlayerController
{
public:
	class UClass*                                      WeaponType;                                               // 0x0B40(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x58];                                      // 0x0B48(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.PerfBotPlayerController");
		return ptr;
	}


	void ServerMoveToLocation(const class Vector3D& Location);
	void ClientQuit();
};


// Class TslGame.TslDemoSpectator
// 0x0020 (0x0B60 - 0x0B40)
class ATslDemoSpectator : public ATslPlayerController
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0B40(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslDemoSpectator");
		return ptr;
	}

};


// Class TslGame.TslPlayerController_Menu
// 0x0000 (0x0B40 - 0x0B40)
class ATslPlayerController_Menu : public ATslPlayerController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslPlayerController_Menu");
		return ptr;
	}

};


// Class TslGame.TslBotAIController
// 0x0038 (0x04E0 - 0x04A8)
class ATslBotAIController : public AAIController
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x04A8(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslBotAIController");
		return ptr;
	}

};


// Class TslGame.TslBreakableObject
// 0x0000 (0x03C0 - 0x03C0)
class ATslBreakableObject : public AStaticMeshActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslBreakableObject");
		return ptr;
	}

};


// Class TslGame.CharacterBreathBuff
// 0x0008 (0x0418 - 0x0410)
class ACharacterBreathBuff : public ATslBuff
{
public:
	float                                              BreathPerTick;                                            // 0x0410(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.CharacterBreathBuff");
		return ptr;
	}


	class ATslCharacter* GetCharacter();
	class UCharacterBreathComponent* GetBreathComponent();
};


// Class TslGame.HealOverTimeBuff
// 0x0010 (0x0420 - 0x0410)
class AHealOverTimeBuff : public ATslBuff
{
public:
	float                                              HealPerTick;                                              // 0x0410(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HealLimit;                                                // 0x0414(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                BuffCount;                                                // 0x0418(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.HealOverTimeBuff");
		return ptr;
	}

};


// Class TslGame.TslBuoyancyForceComponent
// 0x0000 (0x0490 - 0x0490)
class UTslBuoyancyForceComponent : public UBuoyancyForceComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslBuoyancyForceComponent");
		return ptr;
	}

};


// Class TslGame.TslCameraComponent
// 0x0010 (0x09B0 - 0x09A0)
class UTslCameraComponent : public UCameraComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x09A0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslCameraComponent");
		return ptr;
	}

};


// Class TslGame.TslCharacterProxy
// 0x0030 (0x0810 - 0x07E0)
class ATslCharacterProxy : public ACharacter
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x07E0(0x0008) MISSED OFFSET
	TArray<class UWeaponClone*>                        ArmedWeapons;                                             // 0x07E8(0x0010) (CPF_ZeroConstructor)
	class UWeaponAnimInfoComponent*                    WeaponAnimInfoComponent;                                  // 0x07F8(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              WeaponUpdateIntervalSeconds;                              // 0x0800(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0804(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslCharacterProxy");
		return ptr;
	}


	void UpdateEquippedWeapons();
	void UpdateCharacterAppearance();
	void UpdateArmedWeapons();
	void SetAccessorySlot(class UTslAccessoryComponent* AccessoryComponent);
	class UTslAccessoryComponent* GetAccessorySlot();
};


// Class TslGame.TslCharacterSpringArmComponent
// 0x00E0 (0x0560 - 0x0480)
class UTslCharacterSpringArmComponent : public USpringArmComponent
{
public:
	class Vector3D                                     DefaultSocketOffset;                                      // 0x0484(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	class Vector3D                                     IndoorSocketOffset;                                       // 0x0490(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	class Vector3D                                     LeanLeftDefaultSocketOffsetAddition;                      // 0x049C(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	class Vector3D                                     LeanRightDefaultSocketOffsetAddition;                     // 0x04A8(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	class Vector3D                                     LeftShoulderAimingSocketOffset;                           // 0x04B4(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	class Vector3D                                     RightShoulderAimingSocketOffset;                          // 0x04C0(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	class Vector3D                                     LeanLeftAimedSocketOffsetAddition;                        // 0x04CC(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	class Vector3D                                     LeanRightAimedSocketOffsetAddition;                       // 0x04D8(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	class Vector3D                                     SprintSocketOffsetAddition;                               // 0x04E4(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	float                                              CrouchSocketOffsetZAddition;                              // 0x04F0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CrouchSocketOffsetMovementZAddition;                      // 0x04F4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ProneScoketOffsetZAddition;                               // 0x04F8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SocketOffsetInterpSpeed;                                  // 0x04FC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     DefaultTargetOffset;                                      // 0x0500(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	class Vector3D                                     IndoorTargetOffset;                                       // 0x050C(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	class Vector3D                                     AimingTargetOffset;                                       // 0x0518(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	float                                              TargetOffsetInterpSpeed;                                  // 0x0524(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TargetOffsetInterpSpeed_Vaulting;                         // 0x0528(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DefaultSpringArmLength;                                   // 0x052C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              IndoorSpringArmLength;                                    // 0x0530(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AimingSpringArmLength;                                    // 0x0534(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BlockingCompressOffset;                                   // 0x0538(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BlockingCompressCrouchOffset;                             // 0x053C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SpringArmLengthInterpSpeed;                               // 0x0540(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AimingSpringArmLengthInterpSpeed;                         // 0x0544(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              VaultingSpringArmLengthInterpSpeed;                       // 0x0548(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SpringArmRestoreInterpSpeed;                              // 0x0550(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0554(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslCharacterSpringArmComponent");
		return ptr;
	}

};


// Class TslGame.TslCharacterValidateLocationComponent
// 0x0020 (0x0200 - 0x01E0)
class UTslCharacterValidateLocationComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x01E0(0x000C) MISSED OFFSET
	float                                              InvalidUndergroundCheckInterval;                          // 0x01EC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              InvalidUndergroundCheckLength;                            // 0x01F4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MaxAdjustRange;                                           // 0x01F8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                MaxAdjustCount;                                           // 0x01FC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslCharacterValidateLocationComponent");
		return ptr;
	}

};


// Class TslGame.TslChatWidgetStyle
// 0x0988 (0x09B8 - 0x0030)
class UTslChatWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FTslChatStyle                               ChatStyle;                                                // 0x0030(0x0988) (CPF_Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslChatWidgetStyle");
		return ptr;
	}

};


// Class TslGame.TslCheatManager
// 0x0018 (0x0090 - 0x0078)
class UTslCheatManager : public UCheatManager
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0078(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslCheatManager");
		return ptr;
	}


	void ToggleVisibilityOfDestructibleComponents();
	void ToggleMatchTimer();
	void ToggleII(float Interval);
	void ToggleFreeMode();
	void ToggleCollisionOfDestructibleComponents();
	void TestVoiceAccessToken();
	void SpawnBot();
	void SetVehicleRepRotCorrection(float AngularDeltaThreshold, float AngularInterpAlpha, float AngularRecipFixTime);
	void SetVehicleRepPosCorrection(float LinearDeltaThresholdSq, float LinearInterpAlpha, float LinearRecipFixTime, float BodySpeedThresholdSq);
	void SetSpectatorYawAndPitch(float Yaw, float Pitch, float RevertSmoothSpeed);
	void SetClientConnectionTimeout(float TimeoutSeconds);
	void ReturnLookAt();
	void OnInteract();
	void OnFullMapSequenceStop();
	void MoveVehicleOnClient(float X, float Y, float Z);
	void LookAt(float Pitch, float Yaw, float Roll);
	void InsertCrashMeCommand();
	void ForceMatchStart();
	void DumpVoiceDevices();
	void DumpReplicatedItems();
	void DumpDestructibleComponents();
	void DrawVehicleCenterOfMass();
	void DelayCrash(float DelaySeconds);
	void CtrlShortCutOnOff(bool OnOff);
	void CopyDebugInfoRotation();
	void CopyDebugInfoLocation();
	void CopyDebugInfo();
	void Cheat(const struct FString& Msg);
	void ChangeTeam(int NewTeamNumber);
	void ActivatePakOrderingMode();
};


// Class TslGame.TslCoherentWidget
// 0x0010 (0x04A0 - 0x0490)
class UTslCoherentWidget : public UCoherentUIGTWidget
{
public:
	class UClass*                                      WidgetBinderClass;                                        // 0x0490(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCoherentWidgetBinder*                       WidgetBinder;                                             // 0x0498(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslCoherentWidget");
		return ptr;
	}


	void GoBack();
};


// Class TslGame.TslConsole
// 0x0008 (0x0138 - 0x0130)
class UTslConsole : public UConsole
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0130(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslConsole");
		return ptr;
	}

};


// Class TslGame.TslConsoleSetting
// 0x0090 (0x0100 - 0x0070)
class UTslConsoleSetting : public UConsoleSettings
{
public:
	TArray<struct FString>                             AutoCompleteItemPaths;                                    // 0x0070(0x0010) (CPF_ZeroConstructor, CPF_Config)
	TArray<struct FString>                             AutoCompleteItemKinds;                                    // 0x0080(0x0010) (CPF_ZeroConstructor, CPF_Config)
	TArray<struct FAutoCompleteVehiclePaths>           AutoCompleteVehiclePaths;                                 // 0x0090(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	TArray<struct FString>                             AutoCompleteMaleBody;                                     // 0x00A0(0x0010) (CPF_ZeroConstructor, CPF_Config)
	TArray<struct FString>                             AutoCompleteMaleHair;                                     // 0x00B0(0x0010) (CPF_ZeroConstructor, CPF_Config)
	TArray<struct FString>                             AutoCompleteMaleFace;                                     // 0x00C0(0x0010) (CPF_ZeroConstructor, CPF_Config)
	TArray<struct FString>                             AutoCompleteFemaleBody;                                   // 0x00D0(0x0010) (CPF_ZeroConstructor, CPF_Config)
	TArray<struct FString>                             AutoCompleteFemaleHair;                                   // 0x00E0(0x0010) (CPF_ZeroConstructor, CPF_Config)
	TArray<struct FString>                             AutoCompleteFemaleFace;                                   // 0x00F0(0x0010) (CPF_ZeroConstructor, CPF_Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslConsoleSetting");
		return ptr;
	}

};


// Class TslGame.TslCustomizableSkeletalComponent
// 0x0000 (0x0440 - 0x0440)
class UTslCustomizableSkeletalComponent : public UCustomizableSkeletalComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslCustomizableSkeletalComponent");
		return ptr;
	}

};


// Class TslGame.TslDamageField
// 0x0038 (0x03E8 - 0x03B0)
class ATslDamageField : public AActor
{
public:
	float                                              DamageRadius;                                             // 0x03B4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             DamageFieldFX;                                            // 0x03B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                Damage;                                                   // 0x03C0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DamageInterval;                                           // 0x03C4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      DamageType;                                               // 0x03C8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x03D0(0x0010) MISSED OFFSET
	class UClass*                                      DebuffTemplate;                                           // 0x03E0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslDamageField");
		return ptr;
	}

};


// Class TslGame.TslDamageFieldContainer
// 0x0040 (0x03F0 - 0x03B0)
class ATslDamageFieldContainer : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03B0(0x0008) MISSED OFFSET
	TArray<struct FDamageFieldLayout>                  DamageFieldLayouts;                                       // 0x03B8(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x8];                                       // 0x03C8(0x0008) MISSED OFFSET
	class UClass*                                      DamageFieldTemplate;                                      // 0x03D0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      FlameInWall : 1;                                          // 0x03D8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                FlameMaxCountInWall;                                      // 0x03DC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FlameDelayInWall;                                         // 0x03E0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x03E4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslDamageFieldContainer");
		return ptr;
	}

};


// Class TslGame.TslDeathCameraComponent
// 0x0050 (0x0230 - 0x01E0)
class UTslDeathCameraComponent : public UActorComponent
{
public:
	float                                              MaxCameraDistance;                                        // 0x01E0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CollisionDistanceFactor;                                  // 0x01E4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DeathFollowBlendTime;                                     // 0x01E8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TEnumAsByte<EViewTargetBlendFunction>              DeathFollowBlendFunc;                                     // 0x01EC(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DeathFollowBlendExp;                                      // 0x01F0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DeathFollowTime;                                          // 0x01F4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DefaultFreeCameraArmLength;                               // 0x01F8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_IsPlainOldData)
	class Vector3D                                     DeathLocationOffset;                                      // 0x01FC(0x000C) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class ATslCharacter*                               DeathCharacter;                                           // 0x0208(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0210(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslDeathCameraComponent");
		return ptr;
	}

};


// Class TslGame.TslDestructibleComponent
// 0x0000 (0x0BA0 - 0x0BA0)
class UTslDestructibleComponent : public UDestructibleComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslDestructibleComponent");
		return ptr;
	}


	void ClientReceiveComponentDamage(float DamageAmount, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser);
};


// Class TslGame.TslDestructibleContainer
// 0x0008 (0x03B8 - 0x03B0)
class ATslDestructibleContainer : public AActor
{
public:
	unsigned char                                      bFlag : 1;                                                // 0x03B0(0x0001) (CPF_Net)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslDestructibleContainer");
		return ptr;
	}


	void OnRep_Flag();
};


// Class TslGame.TslDoor
// 0x0290 (0x0650 - 0x03C0)
class ATslDoor : public AStaticMeshActor
{
public:
	class UStaticMeshComponent*                        DoorMeshComponent;                                        // 0x03C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UAkComponent*                                AkSound;                                                  // 0x03C8(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UInteractionComponent*                       Interaction;                                              // 0x03D0(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x03D8(0x0020) MISSED OFFSET
	class UDestructibleMesh*                           DoorDestructibleMesh;                                     // 0x03F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bDoorOpened : 1;                                          // 0x0400(0x0001) (CPF_Net)
	unsigned char                                      bReverseRotation : 1;                                     // 0x0400(0x0001) (CPF_Net)
	float                                              OpenAngle;                                                // 0x0404(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               OpenSound;                                                // 0x0408(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               CloseSound;                                               // 0x0410(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 OpenCurve;                                                // 0x0418(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              OpenCurveDuration;                                        // 0x0420(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveFloat*                                 CloseCurve;                                               // 0x0428(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CloseCurveDuration;                                       // 0x0430(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PointDamageImpulse;                                       // 0x0434(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PointDamageRadius;                                        // 0x0438(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BreakingRadius;                                           // 0x043C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BreakingImpulse;                                          // 0x0440(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BreakingMinDamage;                                        // 0x0444(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DamageAccumulateTimeout;                                  // 0x0448(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       TopImpactSoketName;                                       // 0x0450(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       CenterImpactSoketName;                                    // 0x0458(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       BottomImpactSoketName;                                    // 0x0460(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x1C8];                                     // 0x0468(0x01C8) MISSED OFFSET
	struct FDoorBreakingStateLegacy                    DoorBreakingState;                                        // 0x0630(0x0001) (CPF_Net)
	unsigned char                                      UnknownData02[0x1F];                                      // 0x0631(0x001F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslDoor");
		return ptr;
	}


	void OnRep_DoorOpened();
	void OnRep_DoorBreakingState();
	void OnInteractBy(class ATslCharacter* OtherCharacter);
	void ClientTakeDamage(float Damage, const class Vector3D& HitLocation, float DamageRadius, float Impulse);
};


// Class TslGame.TslEngine
// 0x0000 (0x0D70 - 0x0D70)
class UTslEngine : public UGameEngine
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslEngine");
		return ptr;
	}

};


// Class TslGame.TslEntryGameMode
// 0x0000 (0x0480 - 0x0480)
class ATslEntryGameMode : public AGameMode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslEntryGameMode");
		return ptr;
	}

};


// Class TslGame.TslExplosionEffect
// 0x0228 (0x05D8 - 0x03B0)
class ATslExplosionEffect : public AActor
{
public:
	class UParticleSystem*                             ExplosionFX;                                              // 0x03B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UPointLightComponent*                        ExplosionLight;                                           // 0x03B8(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              ExplosionLightFadeOut;                                    // 0x03C0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               ExplosionSound;                                           // 0x03C8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FDecalEffectDataSet                         DecalEffectDataSet;                                       // 0x03D0(0x0168) (CPF_Edit, CPF_DisableEditOnInstance)
	float                                              DecalSpawnDelayTime;                                      // 0x0538(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FHitResult                                  SurfaceHit;                                               // 0x0540(0x0088) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x05C8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslExplosionEffect");
		return ptr;
	}


	void OnParticleCollide(const struct FName& EventName, float EmitterTime, int ParticleTime, const class Vector3D& Location, const class Vector3D& Velocity, const class Vector3D& Direction, const class Vector3D& Normal, const struct FName& BoneName);
};


// Class TslGame.TslExplosionReactionInterface
// 0x0000 (0x0028 - 0x0028)
class UTslExplosionReactionInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslExplosionReactionInterface");
		return ptr;
	}


	void OnExplode(float DamageAmout, const class Vector3D& Origin, TArray<struct FHitResult> ComponentHits, class AController* EventInstigator, class AActor* DamageCauser);
};


// Class TslGame.TslFence
// 0x00A0 (0x0450 - 0x03B0)
class ATslFence : public AActor
{
public:
	class USplineComponent*                            SplineComponent;                                          // 0x03B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x03B8(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.TslFence.BeginSelector
	class UStaticMesh*                                 BeginMesh1;                                               // 0x03C0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMesh*                                 BeginMesh2;                                               // 0x03C8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMesh*                                 BeginMesh3;                                               // 0x03D0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMesh*                                 BeginMesh4;                                               // 0x03D8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x03E0(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.TslFence.EndSelector
	class UStaticMesh*                                 EndMesh1;                                                 // 0x03E8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMesh*                                 EndMesh2;                                                 // 0x03F0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMesh*                                 EndMesh3;                                                 // 0x03F8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMesh*                                 EndMesh4;                                                 // 0x0400(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bUseRandomForMiddle : 1;                                  // 0x0408(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bUseMiddleSegmentsInOrder : 1;                            // 0x0409(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              UnitLengthForMiddle;                                      // 0x040C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              UnitSpacingForMiddle;                                     // 0x0410(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PivotOffsetForMiddle;                                     // 0x0414(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FRandomStream                               RandomStreamForMiddle;                                    // 0x0418(0x0008) (CPF_Edit)
	class UStaticMesh*                                 MiddleMesh1;                                              // 0x0420(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMesh*                                 MiddleMesh2;                                              // 0x0428(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMesh*                                 MiddleMesh3;                                              // 0x0430(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMesh*                                 MiddleMesh4;                                              // 0x0438(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FCollisionProfileName                       FenceCollisionProfile;                                    // 0x0440(0x0008) (CPF_Edit)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0448(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslFence");
		return ptr;
	}


	class USplineComponent* GetSplineComponent();
};


// Class TslGame.TslReactionData
// 0x0040 (0x0070 - 0x0030)
class UTslReactionData : public UDataAsset
{
public:
	float                                              DestroyDelay;                                             // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVehicleReactionData                        VehicleReactionData;                                      // 0x0034(0x000C) (CPF_Edit)
	struct FRadialDamageReactionData                   RadialDamageReactionData;                                 // 0x0040(0x000C) (CPF_Edit)
	struct FPointDamageReactionData                    PointDamageReactionData;                                  // 0x004C(0x0010) (CPF_Edit)
	int                                                DependancyCountBySibling;                                 // 0x005C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               PhysicsReactionSoundAk;                                   // 0x0060(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               DestructibleReactionSoundAk;                              // 0x0068(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslReactionData");
		return ptr;
	}

};


// Class TslGame.TslReactionComponent
// 0x0060 (0x0A40 - 0x09E0)
class UTslReactionComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x09E0(0x0010) MISSED OFFSET
	unsigned char                                      bPendingDestroy : 1;                                      // 0x09F0(0x0001) (CPF_Net)
	class UTslReactionData*                            ReactionData;                                             // 0x09F8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDestructibleMesh*                           ReactionDM;                                               // 0x0A00(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0A08(0x0008) MISSED OFFSET
	class UDestructibleComponent*                      ReactionDestructible;                                     // 0x0A10(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        ReactionStaticMeshComponent;                              // 0x0A18(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x20];                                      // 0x0A20(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslReactionComponent");
		return ptr;
	}


	void OnRep_PendingDestroy(bool PrevPendingDestroy);
	void Client_ReactByVehicle(const class Vector3D& Impact, const class Vector3D& ImpulseDir, const class Vector3D& Velocity);
	void Client_ReactByRadialDamage(float DamageAmount, const class Vector3D& Origin, const class Vector3D& Impact, const class Vector3D& ImpulseDir, float OuterRadius);
	void Client_ReactByPointDamage(float DamageAmount, const class Vector3D& Impact, const class Vector3D& ImpulseDir);
};


// Class TslGame.TslBreakableFence
// 0x0068 (0x04B8 - 0x0450)
class ATslBreakableFence : public ATslFence
{
public:
	class UTslReactionData*                            ReactionData;                                             // 0x0450(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDestructibleMesh*                           BeginDestuctible1;                                        // 0x0458(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDestructibleMesh*                           BeginDestuctible2;                                        // 0x0460(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDestructibleMesh*                           BeginDestuctible3;                                        // 0x0468(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDestructibleMesh*                           BeginDestuctible4;                                        // 0x0470(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDestructibleMesh*                           EndDestuctible1;                                          // 0x0478(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDestructibleMesh*                           EndDestuctible2;                                          // 0x0480(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDestructibleMesh*                           EndDestuctible3;                                          // 0x0488(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDestructibleMesh*                           EndDestuctible4;                                          // 0x0490(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDestructibleMesh*                           MiddleDestuctible1;                                       // 0x0498(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDestructibleMesh*                           MiddleDestuctible2;                                       // 0x04A0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDestructibleMesh*                           MiddleDestuctible3;                                       // 0x04A8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDestructibleMesh*                           MiddleDestuctible4;                                       // 0x04B0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslBreakableFence");
		return ptr;
	}

};


// Class TslGame.TslStaticFence
// 0x0000 (0x0450 - 0x0450)
class ATslStaticFence : public ATslFence
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslStaticFence");
		return ptr;
	}

};


// Class TslGame.TslFocusableWidgetInterface
// 0x0000 (0x0028 - 0x0028)
class UTslFocusableWidgetInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslFocusableWidgetInterface");
		return ptr;
	}


	bool Up();
	bool SetFocus(bool NewFocus);
	bool Right();
	bool Left();
	bool IsFocusable();
	bool IsFocus();
	bool InputY();
	bool InputX();
	bool InputRT();
	bool InputRB();
	bool InputLT();
	bool InputLB();
	bool InputB();
	bool InputA();
	class UUserWidget* GetUpWidget();
	class UUserWidget* GetRightWidget();
	class UUserWidget* GetLeftWidget();
	class UUserWidget* GetFocusingChildWidget();
	class UUserWidget* GetDownWidget();
	bool Down();
};


// Class TslGame.TslGame_Menu
// 0x0000 (0x0480 - 0x0480)
class ATslGame_Menu : public AGameMode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslGame_Menu");
		return ptr;
	}

};


// Class TslGame.TslPerformanceTestComponent
// 0x0140 (0x0320 - 0x01E0)
class UTslPerformanceTestComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x140];                                     // 0x01E0(0x0140) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslPerformanceTestComponent");
		return ptr;
	}

};


// Class TslGame.TslGameMode
// 0x0340 (0x07C0 - 0x0480)
class ATslGameMode : public AGameMode
{
public:
	class UClass*                                      MalePawnClass;                                            // 0x0480(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      PerfBotPlayerControllerClass;                             // 0x0488(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NoClear, CPF_IsPlainOldData)
	class UClass*                                      ModeControllerClass;                                      // 0x0490(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NoClear, CPF_IsPlainOldData)
	TArray<class UClass*>                              AdditionalModeControllerClasses;                          // 0x0498(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NoClear)
	class UClass*                                      InitialItemDonatorClass;                                  // 0x04A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FMatchPreparerClass>                 MatchPreparerClasses;                                     // 0x04B0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	unsigned char                                      UnknownData00[0x1];                                       // 0x04C0(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.TslGameMode.MatchStartType
	unsigned char                                      UnknownData01[0x1];                                       // 0x04C1(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.TslGameMode.CameraViewBehaviour
	unsigned char                                      PlayerRespawn : 1;                                        // 0x04C2(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                PostMatchWaitingTime;                                     // 0x04C4(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	int                                                CustomGamePostMatchWaitingTime;                           // 0x04C8(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	int                                                ESportsPostMatchWaitingTime;                              // 0x04CC(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	int                                                ServerQuitAfterLeavingMapTime;                            // 0x04D0(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	int                                                MinPlayers;                                               // 0x04D4(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	int                                                PlayerSpawnTryMaxCount;                                   // 0x04D8(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bEnablePerfBotInPIE : 1;                                  // 0x04DC(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bEnablePerfBotLogin : 1;                                  // 0x04DD(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bIsPerfBotSpawnToRandomPosition : 1;                      // 0x04DE(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bCanRestartPerfBot : 1;                                   // 0x04DF(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bEnableObserverInPIE : 1;                                 // 0x04E0(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      IsBattleRoyale : 1;                                       // 0x04E1(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bStartPlayerAtMatchStart : 1;                             // 0x04E2(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bShouldSpawnAtStartSpot : 1;                              // 0x04E3(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsEditorTestZombieMode : 1;                              // 0x04E5(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bIsCustomGame : 1;                                        // 0x04E6(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bCanAllSpectate : 1;                                      // 0x04E7(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	struct FCustomGameUpdateCharacterInfo              CustomGameUpdateCharacterInfo;                            // 0x04E8(0x0014) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Config)
	TArray<struct FLimitCustomStringParameter>         LimitCustomStringParameters;                              // 0x0500(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Config)
	float                                              MultiplierBlueZone;                                       // 0x0510(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              BlueZoneCentralizationFactor;                             // 0x0514(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              MultiplierCarePackage;                                    // 0x0518(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	struct FRedZoneCustomOption                        RedZoneCustomOption;                                      // 0x051C(0x001C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Config)
	TArray<struct FBlueZoneCustomOption>               BlueZoneCustomOptions;                                    // 0x0538(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Config)
	int                                                WarmupTime;                                               // 0x0548(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	int                                                EditorTestTeamMemberCount;                                // 0x054C(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	TMap<struct FString, class URewardData*>           RewardDataMap;                                            // 0x0550(0x0050) (CPF_Edit, CPF_ZeroConstructor)
	class URewardData*                                 RewardData;                                               // 0x05A0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ATslPlayerState*                             WinnerPlayerState;                                        // 0x05A8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                WinnerTeam;                                               // 0x05B0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      ItemSpawnProcessorClass;                                  // 0x05B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      ThingSpawnProcessorClass;                                 // 0x05C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      BasicBeltItemClassForNoBelt;                              // 0x05C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x05D0(0x0008) MISSED OFFSET
	class UItemSpawnProcessor*                         ItemSpawnProcessor;                                       // 0x05D8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class UThingSpawnProcessor*                        ThingSpawnProcessor;                                      // 0x05E0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class UGeneralItemSpawner*                         InitialItemDonator;                                       // 0x05E8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class UMatchPreparer*                              MatchPreparer;                                            // 0x05F0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class AModeController*                             ModeController;                                           // 0x05F8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class ADroppedItemGridManager*                     DroppedItemGridManager;                                   // 0x0600(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	TArray<class AModeController*>                     AdditinalModeControllers;                                 // 0x0608(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	unsigned char                                      UnknownData03[0x98];                                      // 0x0618(0x0098) MISSED OFFSET
	TMap<struct FString, class APlayerState*>          JoinedUserPlayerStateMap;                                 // 0x06B0(0x0050) (CPF_ZeroConstructor, CPF_Transient)
	TArray<struct FTeams>                              Teams;                                                    // 0x0700(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	unsigned char                                      UnknownData04[0xB0];                                      // 0x0710(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslGameMode");
		return ptr;
	}


	void SendSystemMessageToAll(const struct FText& Message, float MessageDuration);
	void NotifyRestrictingPlayAreaToAll();
	void NotifyNextGasInToAll(const class Vector3D& PoisonGasWarningPosition, float PoisonGasWarningRadius);
	bool IsPreventFinishMatch();
	bool IsPlayInEditor();
	class UVivoxManager* GetVivoxManager();
	class UThingSpawnProcessor* GetThingSpawnProcessor();
	class ULobbyLink* GetLobbyLink();
	class UItemSpawnProcessor* GetItemSpawnProcessor();
	void GetAllPawns(TArray<class APawn*>* OutPawns);
	void FinishMatch();
	class ATslCharacter* FindCharacterByPlayerState(class APlayerState* State);
	bool CanDealDamage(class ATslPlayerState* DamageInstigator, class ATslPlayerState* DamagedPlayer);
	void BroadcastGameModeEvent(const struct FName& EventName, const struct FString& Parameter);
	void BenchmarkFinished();
};


// Class TslGame.TslGameUserSettings
// 0x0130 (0x0238 - 0x0108)
class UTslGameUserSettings : public UGameUserSettings
{
public:
	float                                              ScreenScale;                                              // 0x0108(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              Gamma;                                                    // 0x010C(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bIsLanMatch : 1;                                          // 0x0110(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bIsMasterSoundMute : 1;                                   // 0x0111(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              MasterSoundVolume;                                        // 0x0114(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bIsEffectSoundMute : 1;                                   // 0x0118(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              EffectSoundVolume;                                        // 0x011C(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bIsUISoundMute : 1;                                       // 0x0120(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              UISoundVolume;                                            // 0x0124(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bIsBGMSoundMute : 1;                                      // 0x0128(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              BGMSoundVolume;                                           // 0x012C(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bIsVoiceInputMute : 1;                                    // 0x0130(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bIsVoiceOutputMute : 1;                                   // 0x0131(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	int                                                VoiceInputVolume;                                         // 0x0134(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	int                                                VoiceOutputVolume;                                        // 0x0138(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bUsePushToTalk : 1;                                       // 0x013C(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bUseGlobalVoice : 1;                                      // 0x013D(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bUseTeamVoice : 1;                                        // 0x013E(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bSavedGraphicOption : 1;                                  // 0x013F(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bMotionBlur : 1;                                          // 0x0140(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	struct FString                                     CultureName;                                              // 0x0148(0x0010) (CPF_ZeroConstructor, CPF_Config)
	struct FString                                     LastCultureName;                                          // 0x0158(0x0010) (CPF_ZeroConstructor, CPF_Config)
	struct FCustomInputSettings                        CustomInputSettins;                                       // 0x0168(0x0058) (CPF_Config)
	int                                                SelectMiniMapIndex;                                       // 0x01C0(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              FpsCameraFov;                                             // 0x01C4(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bUseForceFeedback : 1;                                    // 0x01C8(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	int                                                ColorBlindType;                                           // 0x01CC(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	struct FString                                     CrosshairColorString;                                     // 0x01D0(0x0010) (CPF_ZeroConstructor, CPF_Config)
	TArray<class UClass*>                              GearProfile1;                                             // 0x01E0(0x0010) (CPF_ZeroConstructor, CPF_Config)
	TArray<class UClass*>                              GearProfile2;                                             // 0x01F0(0x0010) (CPF_ZeroConstructor, CPF_Config)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0200(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.TslGameUserSettings.FppWeaponIconShowType
	unsigned char                                      UnknownData01[0x1];                                       // 0x0201(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.TslGameUserSettings.TpsWeaponIconShowType
	unsigned char                                      UnknownData02[0x1];                                       // 0x0202(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.TslGameUserSettings.FppEquipableItemIconShowType
	unsigned char                                      bUseCharacterCapture : 1;                                 // 0x0203(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	int                                                WorldMapZoomSpeedLevel;                                   // 0x0204(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bIconKillfeedEnabled : 1;                                 // 0x0208(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x0209(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.TslGameUserSettings.InputModeCrouch
	unsigned char                                      UnknownData04[0x1];                                       // 0x020A(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.TslGameUserSettings.InputModeProne
	unsigned char                                      UnknownData05[0x1];                                       // 0x020B(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.TslGameUserSettings.InputModeWalk
	unsigned char                                      UnknownData06[0x1];                                       // 0x020C(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.TslGameUserSettings.bToggleSprint
	unsigned char                                      UnknownData07[0x1];                                       // 0x020D(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.TslGameUserSettings.InputModeHoldRotation
	unsigned char                                      UnknownData08[0x1];                                       // 0x020E(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.TslGameUserSettings.InputModeHoldBreath
	unsigned char                                      UnknownData09[0x1];                                       // 0x020F(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.TslGameUserSettings.InputModePeek
	unsigned char                                      UnknownData10[0x1];                                       // 0x0210(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.TslGameUserSettings.InputModeMap
	unsigned char                                      UnknownData11[0x1];                                       // 0x0211(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.TslGameUserSettings.InputModeADS
	unsigned char                                      UnknownData12[0x1];                                       // 0x0212(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.TslGameUserSettings.InputModeAim
	unsigned char                                      bEditorApplyOverrideScalability : 1;                      // 0x0213(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bUseFreeLookInterp : 1;                                   // 0x0214(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bUseClientReplay : 1;                                     // 0x0215(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bUseKillcam : 1;                                          // 0x0216(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bPreloadingMap : 1;                                       // 0x0217(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	TArray<struct FString>                             PreloadingMaps;                                           // 0x0218(0x0010) (CPF_ZeroConstructor, CPF_Config)
	struct FScriptMulticastDelegate                    OnGameUserSettingApplied;                                 // 0x0228(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslGameUserSettings");
		return ptr;
	}

};


// Class TslGame.TslGameOption
// 0x0000 (0x0028 - 0x0028)
class UTslGameOption : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslGameOption");
		return ptr;
	}


	struct FText STATIC_WheelAxisNameToWheelActionName(const struct FTslInputKey& Key, float InAxisScale);
	void STATIC_SetWorldMapZoomLevel(int NewZoomLevel);
	void STATIC_SetVSyncEnabled(bool bEnable);
	void STATIC_SetVoiceOutputVolume(int Volume);
	void STATIC_SetVoiceOutputMute(bool bIsMute);
	void STATIC_SetVoiceInputVolume(int Volume);
	void STATIC_SetVoiceInputMute(bool bIsMute);
	void STATIC_SetUseTeamVoice(bool bUse);
	void STATIC_SetUsePushToTalk(bool bUse);
	void STATIC_SetUseGlobalVoice(bool bUse);
	void STATIC_SetUseCharacterCapture(bool bUseCharacterCapture);
	void STATIC_SetUISoundVolume(float Volume);
	void STATIC_SetUISoundMute(bool bIsMute);
	void STATIC_SetTslInputMode();
	void STATIC_SetTpsWeaponIconShowType();
	void STATIC_SetSelectMinimapTypeIndex(int Index);
	void STATIC_SetScreenScale(float Value);
	void STATIC_SetScreenResoultion(const struct FScreenResolution& ScreenResolution);
	void STATIC_SetQualityLevel(int QualityLevel);
	void STATIC_SetOverallScalabilityLevel(int Value);
	void STATIC_SetMouseSensitivity(const struct FName& InMouseSensitiveName, float InMouseSensitivity);
	void STATIC_SetMotionBlur(bool bEnabled);
	void STATIC_SetMasterSoundVolume(float Volume);
	void STATIC_SetMasterSoundMute(bool bIsMute);
	void STATIC_SetInvertMouse(bool bInvert);
	void STATIC_SetInvertGamePadY(bool bInvert);
	void STATIC_SetInvertGamePadX(bool bInvert);
	void STATIC_SetInputKey_Internal(const struct FTslInputKey& NewKey, bool bGamepad, TArray<struct FTslInputKey>* OutKeyList);
	void STATIC_SetIconKillfeedEnabled(bool bEnable);
	void STATIC_SetGamma(float Gamma);
	void STATIC_SetGamePadSensitivity(const struct FName& InGamePadSensitiveName, float InGamePadSensitivity);
	void STATIC_SetGamePadDeadZone(float InGamePadDeadZone);
	void STATIC_SetFullScreen(TEnumAsByte<EWindowMode> InFullscreenMode);
	void STATIC_SetFpsWeaponSlotShow(bool bNewShow);
	void STATIC_SetFpsCameraFov(float NewFovValue);
	void STATIC_SetFppWeaponIconShowType();
	void STATIC_SetFppEquipableItemIconShowType();
	void STATIC_SetForceFeedbackEffectEnabled(bool bEnabled);
	void STATIC_SetEquipableIteIconShow(bool bNewShow);
	void STATIC_SetEnablePreloadingMap(bool bEnabled);
	void STATIC_SetEnableFunctionality(bool bValue);
	void STATIC_SetEnableClientReplay(bool bValue);
	void STATIC_SetEffectSoundVolume(float Volume);
	void STATIC_SetEffectSoundMute(bool bIsMute);
	void STATIC_SetCurrentProvider(const struct FString& ProviderName);
	void STATIC_SetCurrentCultureName(const struct FString& InCultureName);
	void STATIC_SetCurrentCrosshairColorString(const struct FString& CrosshairColorStr);
	void STATIC_SetCurrentColorBlindKeyByInt(int ColorBlindKey);
	void STATIC_SetCurrentColorBlindKey();
	void STATIC_SetBGMSoundVolume(float Volume);
	void STATIC_SetBGMSoundMute(bool bIsMute);
	void STATIC_SetAxisKeysToDefault(const struct FName& AxisName, float Scale);
	void STATIC_SetAxisKeys(const struct FName& AxisName, float Scale, TArray<struct FTslInputKey> NewKeys);
	void STATIC_SetAxisKey(const struct FName& AxisName, float Scale, const struct FTslInputKey& NewKey, bool bGamepad);
	void STATIC_SetActionKeysToDefault(const struct FName& ActionName);
	void STATIC_SetActionKeys(const struct FName& ActionName, TArray<struct FTslInputKey> NewKeys);
	void STATIC_SetActionKey(const struct FName& ActionName, const struct FTslInputKey& NewKey, bool bGamepad);
	TArray<struct FName> STATIC_NotDuplicateCategoryNames(const struct FName& CatecoryName);
	bool STATIC_IsVSyncEnabled();
	bool STATIC_IsVoiceOutputMute();
	bool STATIC_IsVoiceInputMute();
	bool STATIC_IsUISoundMute();
	bool STATIC_IsMouseWheelInput(const struct FTslInputKey& InInputedKey);
	bool STATIC_IsModifierKey(const struct FTslInputKey& Key);
	bool STATIC_IsMasterSoundMute();
	bool STATIC_IsKeyValid(const struct FTslInputKey& Key);
	bool STATIC_IsKeyUsed(const struct FTslInputKey& Key);
	bool STATIC_IsInvertMouse();
	bool STATIC_IsInvertGamePadY();
	bool STATIC_IsInvertGamePadX();
	bool STATIC_IsIconKillfeedEnabled();
	bool STATIC_IsGamepadKey(const struct FTslInputKey& Key);
	bool STATIC_IsFunctionalityEnabled();
	bool STATIC_IsForceFeedbackEffectEnabled();
	bool STATIC_IsEnabledPreloadingMap();
	bool STATIC_IsEnabledMotionBlur();
	bool STATIC_IsEffectSoundMute();
	bool STATIC_IsDoubleTapSupported();
	bool STATIC_IsDefaultFunctionalityEnabled();
	bool STATIC_IsDefaultClientReplayEnabled();
	bool STATIC_IsClientReplayEnabled();
	bool STATIC_IsBGMSoundMute();
	int STATIC_GetWorldMapZoomSpeedLevel();
	int STATIC_GetVoiceOutputVolume();
	int STATIC_GetVoiceInputVolume();
	bool STATIC_GetUseTeamVoice();
	bool STATIC_GetUsePushToTalk();
	bool STATIC_GetUseGlobalVoice();
	bool STATIC_GetUseCharacterCapture();
	float STATIC_GetUISoundVolume();
	void STATIC_GetTslInputMode();
	void STATIC_GetTpsWeaponIconShowType();
	TArray<struct FScreenResolution> STATIC_GetSupportedScreenResolutions();
	TArray<struct FSurportQualityLevel> STATIC_GetSupportedQualityLevels();
	bool STATIC_GetSupportedKillcam();
	float STATIC_GetSupportedFpsCameraFovRangeMin();
	float STATIC_GetSupportedFpsCameraFovRangeMax();
	bool STATIC_GetSupportedClientReplay();
	int STATIC_GetSelectMiniMapTypeIndex();
	float STATIC_GetScreenScale();
	struct FScreenResolution STATIC_GetScreenResolution();
	bool STATIC_GetReplayOptionEditable();
	int STATIC_GetQualityLevel();
	int STATIC_GetOverallScalabilityLevel();
	struct FString STATIC_GetNativeName(const struct FString& InCultureName);
	struct FString STATIC_GetNativeLanguage(const struct FString& InCultureName);
	float STATIC_GetMouseSensitivity(const struct FName& InMouseSensitiveName);
	TArray<struct FUiType> STATIC_GetMiniMapTypes();
	float STATIC_GetMasterSoundVolume();
	struct FText STATIC_GetKeyName(const struct FTslInputKey& Key);
	TArray<struct FKeyInputModeName> STATIC_GetKeyInputModeNames();
	float STATIC_GetGamma();
	float STATIC_GetGamePadSensitivity(const struct FName& InGamePadSensitiveName);
	float STATIC_GetGamePadDeadZone();
	TEnumAsByte<EWindowMode> STATIC_GetFullscreenMode();
	float STATIC_GetFpsCameraFov();
	void STATIC_GetFppWeaponIconShowType();
	void STATIC_GetFppEquipableItemIconShowType();
	float STATIC_GetEffectSoundVolume();
	void STATIC_GetDefaultInputModeSetting();
	struct FString STATIC_GetDefaultCultureName();
	struct FString STATIC_GetCurrentProvider();
	struct FString STATIC_GetCurrentCultureName();
	struct FString STATIC_GetCurrentCrosshairColorStr();
	void STATIC_GetCurrentColorBlindKey();
	TArray<struct FPresetColor> STATIC_GetCrosshairColors();
	float STATIC_GetConvertedMouseSensitivity(const struct FName& InMouseSensitiveName);
	float STATIC_GetConvertedGamePadSensitivity(const struct FName& InGamePadSensitiveName);
	TArray<struct FColorBlindType> STATIC_GetColorBlindTypes();
	float STATIC_GetBGMSoundVolume();
	TArray<struct FTslInputKey> STATIC_GetAxisKeys(const struct FName& AxisName, float Scale, bool bDefault);
	struct FTslInputKey STATIC_GetAxisKey(const struct FName& AxisName, float Scale, bool bGamepad, bool bDefault, bool bWantAnyKey);
	TArray<struct FString> STATIC_GetAvailableProviderNames();
	TArray<struct FText> STATIC_GetAvailableProviderDisplayNames();
	TArray<struct FQualityLevelInfo> STATIC_GetAutoQualityLevels(int WorkScale, float CPUMultiplier, float GPUMultiplier);
	TArray<struct FTslInputKey> STATIC_GetActionKeys(const struct FName& ActionName, bool bDefault);
	struct FTslInputKey STATIC_GetActionKey(const struct FName& ActionName, bool bGamepad, bool bDefault, bool bWantAnyKey);
	float STATIC_DefaultGamePadInnerDeadZone();
	TArray<struct FCustomizableMouseSensitiveName> STATIC_CustomizableMouseSensitiveNames();
	TArray<struct FCustomizableGamePadSensitiveName> STATIC_CustomizableGamePadSensitiveNames();
	TArray<struct FTslGame_FCustomizableCategoryData> STATIC_CustomizableCategoryData();
	TArray<struct FTslGame_FCustomizableAxisName> STATIC_CustomizableAxisName();
	TArray<struct FCustomizableActionName> STATIC_CustomizableActionNames();
	TArray<struct FString> STATIC_CultureNames();
	void STATIC_CastTslInputModeFromName(const struct FName& InputModeName);
	void STATIC_ApplyMouseSensitivity();
	void STATIC_ApplyGameUserSettings(bool bCheckForCommandLineOverrides);
	void STATIC_ApplyGamePadSensitivity();
	void STATIC_ApplyGamePadDeadZone();
	void STATIC_ApplyAutoQualitySetting();
};


// Class TslGame.TslGameSession
// 0x0318 (0x06E0 - 0x03C8)
class ATslGameSession : public AGameSession
{
public:
	unsigned char                                      UnknownData00[0x318];                                     // 0x03C8(0x0318) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslGameSession");
		return ptr;
	}

};


// Class TslGame.TslGameState
// 0x00C8 (0x04D8 - 0x0410)
class ATslGameState : public AGameState
{
public:
	struct FString                                     MatchId;                                                  // 0x0410(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_Transient)
	struct FString                                     MatchShortGuid;                                           // 0x0420(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_Transient)
	unsigned char                                      bIsCustomGame : 1;                                        // 0x0430(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      bIsWinnerZombieTeam : 1;                                  // 0x0431(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                NumTeams;                                                 // 0x0434(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                RemainingTime;                                            // 0x0438(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                MatchElapsedMinutes;                                      // 0x043C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      bTimerPaused : 1;                                         // 0x0440(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                NumJoinPlayers;                                           // 0x0444(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                NumAlivePlayers;                                          // 0x0448(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                NumAliveZombiePlayers;                                    // 0x044C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                NumAliveTeams;                                            // 0x0450(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                NumStartPlayers;                                          // 0x0454(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                NumStartTeams;                                            // 0x0458(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class Vector3D                                     SafetyZonePosition;                                       // 0x045C(0x000C) (CPF_BlueprintVisible, CPF_Net, CPF_Transient, CPF_IsPlainOldData)
	float                                              SafetyZoneRadius;                                         // 0x0468(0x0004) (CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class Vector3D                                     PoisonGasWarningPosition;                                 // 0x046C(0x000C) (CPF_BlueprintVisible, CPF_Net, CPF_Transient, CPF_IsPlainOldData)
	float                                              PoisonGasWarningRadius;                                   // 0x0478(0x0004) (CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class Vector3D                                     RedZonePosition;                                          // 0x047C(0x000C) (CPF_BlueprintVisible, CPF_Net, CPF_Transient, CPF_IsPlainOldData)
	float                                              RedZoneRadius;                                            // 0x0488(0x0004) (CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              TotalReleaseDuration;                                     // 0x048C(0x0004) (CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              ElapsedReleaseDuration;                                   // 0x0490(0x0004) (CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              TotalWarningDuration;                                     // 0x0494(0x0004) (CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              ElapsedWarningDuration;                                   // 0x0498(0x0004) (CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      bIsGasRelease : 1;                                        // 0x049C(0x0001) (CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      bIsTeamMatch : 1;                                         // 0x049D(0x0001) (CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      bIsZombieMode : 1;                                        // 0x049E(0x0001) (CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              ElapsedGasReleaseDuration;                                // 0x04A0(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class Vector3D                                     LerpSafetyZonePosition;                                   // 0x04A4(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Transient, CPF_IsPlainOldData)
	float                                              LerpSafetyZoneRadius;                                     // 0x04B0(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class Vector3D                                     SafetyZoneBeginPosition;                                  // 0x04B4(0x000C) (CPF_BlueprintVisible, CPF_Net, CPF_Transient, CPF_IsPlainOldData)
	float                                              SafetyZoneBeginRadius;                                    // 0x04C0(0x0004) (CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x04C4(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.TslGameState.MatchStartType
	class ALevelAttribute*                             LevelAttribute;                                           // 0x04C8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x04D0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslGameState");
		return ptr;
	}


	void UpdateWorldTimeSecondsDelta(float DeltaSeconds);
	void ShowPlayerStateList();
	void OnStartGasRelease(bool InbIsGasRelease);
	void OnRep_NumAlivePlayers();
	void OnRep_MatchShortGuid();
	void OnRep_MatchId();
	void OnRep_GasRelease(bool bLastIsGasRelease);
	bool IsMatchInProgressBP();
	class ALevelAttribute* GetLevelAttribute();
};


// Class TslGame.TslGameViewportClient
// 0x0050 (0x0660 - 0x0610)
class UTslGameViewportClient : public UGameViewportClient
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0610(0x0030) MISSED OFFSET
	class UTslConfirmationDialogWidget*                DialogUMGWidget;                                          // 0x0640(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0648(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslGameViewportClient");
		return ptr;
	}

};


// Class TslGame.TslGlassWindowComponent
// 0x0040 (0x0A20 - 0x09E0)
class UTslGlassWindowComponent : public UStaticMeshComponent
{
public:
	class UDestructibleMesh*                           DestructibleMesh;                                         // 0x09E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DestroyDelayAfterDestructed;                              // 0x09E8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               DestructSound;                                            // 0x09F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DestructSoundOcclusionRefreshInterval;                    // 0x09F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDestructibleComponent*                      DestructibleComponent;                                    // 0x0A00(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      bReplicatedOnClient : 1;                                  // 0x0A08(0x0001) (CPF_Net)
	unsigned char                                      bDestroyed : 1;                                           // 0x0A08(0x0001) (CPF_Net)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0A09(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslGlassWindowComponent");
		return ptr;
	}


	void OnRep_ReplicatedOnClient(bool bLastReplicatedOnClient);
	void OnRep_Destroyed(bool bLastDestroyed);
	void ClientNotifyHit(bool bBlockingHit, const class Vector3D& Location, const class Vector3D& ImpactNormal);
};


// Class TslGame.TslGunAnimInstance
// 0x00D8 (0x0450 - 0x0378)
class UTslGunAnimInstance : public UAnimInstance
{
public:
	struct FScriptMulticastDelegate                    WeaponFire;                                               // 0x0378(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    WeaponFireCycle;                                          // 0x0388(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    TriggerOn;                                                // 0x0398(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    TriggerOff;                                               // 0x03A8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    Reload1;                                                  // 0x03B8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    Reload2;                                                  // 0x03C8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    ReloadByOneStart;                                         // 0x03D8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    ReloadByOneSingle;                                        // 0x03E8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    ReloadByOneEnd;                                           // 0x03F8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    WeaponCharge;                                             // 0x0408(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    FireSelect;                                               // 0x0418(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    CancelReload;                                             // 0x0428(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FName                                       Name_FireMode_Semi;                                       // 0x0438(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       Name_FireMode_Burst;                                      // 0x0440(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       Name_FireMode_Fullauto;                                   // 0x0448(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslGunAnimInstance");
		return ptr;
	}


	void HandleFiremodeMontage(class UAnimMontage* FireModeMontage);
};


// Class TslGame.TslHealthGaugeData
// 0x0020 (0x0050 - 0x0030)
class UTslHealthGaugeData : public UDataAsset
{
public:
	TArray<struct FHealthColorData>                    HealthGaugeColors;                                        // 0x0030(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	struct FFloatInterval                              WarningRage;                                              // 0x0040(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	class UCurveLinearColor*                           GroggyColorCurve;                                         // 0x0048(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslHealthGaugeData");
		return ptr;
	}


	struct FLinearColor GetGaugeColor(float HealthPercent);
};


// Class TslGame.TslHornComponent
// 0x0040 (0x0220 - 0x01E0)
class UTslHornComponent : public UActorComponent
{
public:
	float                                              LongHornStartingTime;                                     // 0x01E0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CurrHornKeyPressedTime;                                   // 0x01E4(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bHornKeyDown : 1;                                         // 0x01E8(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bPlayingLongHorn : 1;                                     // 0x01E9(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHornPlayInfo                               HornPlayInfo;                                             // 0x01EC(0x0008) (CPF_Net, CPF_IsPlainOldData)
	struct FHornSoundInfo                              HornSounds_Local;                                         // 0x01F8(0x0010) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FHornSoundInfo                              HornSounds_Remote;                                        // 0x0208(0x0010) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0218(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslHornComponent");
		return ptr;
	}


	void TickHorn(float DeltaSeconds);
	void ServerSetHorn(const struct FHornPlayInfo& InHornPlayInfo);
	void PlayInstantHorn();
	void PlayHorn(bool bIsLocalPlay);
	void OnRep_SetHornPlayInfo();
	void OnPostDriverLeave();
	void OnHornKeyUp();
	void OnHornKeyDown();
	void OnHornEnd();
	void MulticastSetInstantHorn(const struct FHornPlayInfo& InHornPlayInfo);
};


// Class TslGame.TslImpactEffect
// 0x0250 (0x0600 - 0x03B0)
class ATslImpactEffect : public AActor
{
public:
	class UParticleSystem*                             DefaultFX;                                                // 0x03B0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             ConcreteFX;                                               // 0x03B8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             DirtFX;                                                   // 0x03C0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             WaterFX;                                                  // 0x03C8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             MetalFX;                                                  // 0x03D0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             WoodFX;                                                   // 0x03D8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             GlassFX;                                                  // 0x03E0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             GrassFX;                                                  // 0x03E8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             FleshFX;                                                  // 0x03F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               AkSound;                                                  // 0x03F8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FDecalEffectDataSet                         DecalEffectDataSet;                                       // 0x0400(0x0168) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FHitResult                                  SurfaceHit;                                               // 0x0568(0x0088) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    ParticleCom;                                              // 0x05F0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UAkComponent*                                AKCom;                                                    // 0x05F8(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslImpactEffect");
		return ptr;
	}

};


// Class TslGame.TslInstancedGlassWindowComponent
// 0x0130 (0x0D10 - 0x0BE0)
class UTslInstancedGlassWindowComponent : public UGridInstancedStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0BE0(0x0008) MISSED OFFSET
	class UDestructibleMesh*                           DestructibleMesh;                                         // 0x0BE8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DestroyDelayAfterDestructed;                              // 0x0BF0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               DestructSound;                                            // 0x0BF8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DestructSoundOcclusionRefreshInterval;                    // 0x0C00(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bReplicatedOnClient : 1;                                  // 0x0C04(0x0001) (CPF_Net)
	unsigned char                                      UnknownData01[0x13];                                      // 0x0C05(0x0013) MISSED OFFSET
	TArray<int>                                        DestroyedInstances;                                       // 0x0C18(0x0010) (CPF_Net, CPF_ZeroConstructor)
	TArray<int>                                        PendingDestroyInstances;                                  // 0x0C28(0x0010) (CPF_Net, CPF_ZeroConstructor)
	unsigned char                                      UnknownData02[0xD8];                                      // 0x0C38(0x00D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslInstancedGlassWindowComponent");
		return ptr;
	}


	void OnRep_ReplicatedOnClient(bool bLastReplicatedOnClient);
	void OnRep_PendingDestroy();
	void OnRep_Destroyed();
	void ClientNotifyHit(bool bBlockingHit, const class Vector3D& Location, const class Vector3D& ImpactNormal, int InstanceIndex);
};


// Class TslGame.TslInstancedReactionComponent
// 0x01F0 (0x0DD0 - 0x0BE0)
class UTslInstancedReactionComponent : public UGridInstancedStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0BE0(0x0008) MISSED OFFSET
	TArray<int>                                        PendingDestroyInstances;                                  // 0x0BE8(0x0010) (CPF_Net, CPF_ZeroConstructor)
	class UTslReactionData*                            ReactionData;                                             // 0x0BF8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDestructibleMesh*                           ReactionDM;                                               // 0x0C00(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x80];                                      // 0x0C08(0x0080) MISSED OFFSET
	TMap<int, class UDestructibleComponent*>           ReactionDestructibles;                                    // 0x0C88(0x0050) (CPF_ExportObject, CPF_ZeroConstructor)
	TMap<int, class UStaticMeshComponent*>             ReactionStaticMeshComponents;                             // 0x0CD8(0x0050) (CPF_ExportObject, CPF_ZeroConstructor)
	unsigned char                                      UnknownData02[0xA8];                                      // 0x0D28(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslInstancedReactionComponent");
		return ptr;
	}


	void OnRep_PendingDestroy();
	void Client_ReactByVehicle(int InstanceIndex, const class Vector3D& Impact, const class Vector3D& ImpulseDir, const class Vector3D& Velocity);
	void Client_ReactByRadialDamage(int InstanceIndex, float DamageAmount, const class Vector3D& Origin, const class Vector3D& Impact, const class Vector3D& ImpulseDir, float OuterRadius);
	void Client_ReactByPointDamage(int InstanceIndex, float DamageAmount, const class Vector3D& Impact, const class Vector3D& ImpulseDir);
};


// Class TslGame.TslLevelScriptActor
// 0x00A8 (0x0460 - 0x03B8)
class ATslLevelScriptActor : public ALevelScriptActor
{
public:
	TArray<struct FWeatherLevelInfo>                   WeatherLevelInfos;                                        // 0x03B8(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	class UMaterialParameterCollection*                GlobalMPC;                                                // 0x03C8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                SelectedWeatherLevelIndex;                                // 0x03D0(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8C];                                      // 0x03D4(0x008C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslLevelScriptActor");
		return ptr;
	}


	void RequestReplayALevelWeatherEvent(const struct FString& EventID);
	void RecordWeatherAsCustomEvent();
	void OnRep_SelectedWeatherIndex();
	void EnumerateReplayLevelEvents();
};


// Class TslGame.TslLobbyLevelScriptActor
// 0x0010 (0x03C8 - 0x03B8)
class ATslLobbyLevelScriptActor : public ALevelScriptActor
{
public:
	struct FName                                       MainMenuStreamingLevelName;                               // 0x03B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       CustomizationStreamingLevelName;                          // 0x03C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslLobbyLevelScriptActor");
		return ptr;
	}


	void LatentLoadCustomizationLevel();
};


// Class TslGame.TslPersistentUser
// 0x0030 (0x0058 - 0x0028)
class UTslPersistentUser : public USaveGame
{
public:
	float                                              Gamma;                                                    // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AimSensitivity;                                           // 0x002C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bInvertedYAxis : 1;                                       // 0x0030(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ScreenScalePercentage;                                    // 0x0034(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0038(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslPersistentUser");
		return ptr;
	}

};


// Class TslGame.TslLocalPlayer
// 0x0008 (0x01D0 - 0x01C8)
class UTslLocalPlayer : public ULocalPlayer
{
public:
	class UTslPersistentUser*                          PersistentUser;                                           // 0x01C8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslLocalPlayer");
		return ptr;
	}

};


// Class TslGame.TslMenuItemWidgetStyle
// 0x01B8 (0x01E8 - 0x0030)
class UTslMenuItemWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FTslMenuItemStyle                           MenuItemStyle;                                            // 0x0030(0x01B8) (CPF_Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslMenuItemWidgetStyle");
		return ptr;
	}

};


// Class TslGame.TslMenuSoundsWidgetStyle
// 0x0038 (0x0068 - 0x0030)
class UTslMenuSoundsWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FTslMenuSoundsStyle                         SoundsStyle;                                              // 0x0030(0x0038) (CPF_Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslMenuSoundsWidgetStyle");
		return ptr;
	}

};


// Class TslGame.TslMenuWidgetStyle
// 0x0218 (0x0248 - 0x0030)
class UTslMenuWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FTslMenuStyle                               MenuStyle;                                                // 0x0030(0x0218) (CPF_Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslMenuWidgetStyle");
		return ptr;
	}

};


// Class TslGame.TslModularBuilding
// 0x0100 (0x04B0 - 0x03B0)
class ATslModularBuilding : public AActor
{
public:
	unsigned char                                      UnknownData00[0x100];                                     // 0x03B0(0x0100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslModularBuilding");
		return ptr;
	}


	void PassSeparatedFloors(TArray<class UChildActorComponent*> Floors);
	TArray<class UStaticMeshComponent*> GetMeshOnSapartedFloor(int SepartedFloor, const struct FString& Keyword);
	TArray<class UStaticMeshComponent*> GetBuildingModuleFromTable(const struct FString& Keyword);
	TArray<class UStaticMeshComponent*> GetAttachmentsFromTable(const struct FString& Keyword);
	void ClearBuildingModuleTable();
	void ClearAttachmentTable();
	void AddBuildingModuleToTable(const struct FString& Keyword, class UStaticMeshComponent* Building);
	void AddAttachmentToTable(const struct FString& Keyword, class UStaticMeshComponent* Attachment);
};


// Class TslGame.TslParticle
// 0x0058 (0x0408 - 0x03B0)
class ATslParticle : public AActor
{
public:
	unsigned char                                      bAutoDestroyOnParticleFinish : 1;                         // 0x03B0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bAutoPlaySound : 1;                                       // 0x03B1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FParticleParameter>                  DefaultParameters;                                        // 0x03B8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	unsigned char                                      UnknownData00[0x1];                                       // 0x03C8(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.TslParticle.AttachParentType
	struct FName                                       AttachSocketName;                                         // 0x03D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x03D8(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.TslParticle.AttachLocationRule
	unsigned char                                      UnknownData02[0x1];                                       // 0x03D9(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.TslParticle.AttachRotationRule
	unsigned char                                      UnknownData03[0x1];                                       // 0x03DA(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.TslParticle.AttachScaleRule
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x03E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UAkComponent*                                AkSound;                                                  // 0x03E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x18];                                      // 0x03F0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslParticle");
		return ptr;
	}


	void SetParticleParameter(const struct FString& Name, float Value, bool bEnableRTPC);
	void OnParticleFinish(class UParticleSystemComponent* PSystem);
	void OnParticleCollide(const struct FName& EventName, float EmitterTime, int ParticleTime, const class Vector3D& Location, const class Vector3D& Velocity, const class Vector3D& Direction, const class Vector3D& Normal, const struct FName& BoneName, class UPhysicalMaterial* PhysMat);
	void OnParameterUpdated();
	float GetParticleParamter(const struct FString& Name, float DefaultValue);
	float STATIC_GetEmitterGlobalSpawnRateScale();
	void ForceSpawn(int emitterIndex, const class Vector3D& InLocation);
	void AttachToParent();
};


// Class TslGame.TslParticleBulletTrail
// 0x0020 (0x0428 - 0x0408)
class ATslParticleBulletTrail : public ATslParticle
{
public:
	class Vector3D                                     TargetDestanation;                                        // 0x0408(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	float                                              BulletSpeed;                                              // 0x0414(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInterface*                          UnderWaterMaterialOverride;                               // 0x0418(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0420(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslParticleBulletTrail");
		return ptr;
	}

};


// Class TslGame.TslParticleEnvironment
// 0x0020 (0x0428 - 0x0408)
class ATslParticleEnvironment : public ATslParticle
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0408(0x0010) MISSED OFFSET
	float                                              AutoParticleActivateDistance;                             // 0x0418(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AutoPlayDistance;                                         // 0x041C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0420(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslParticleEnvironment");
		return ptr;
	}

};


// Class TslGame.TslPassArea
// 0x0010 (0x03C0 - 0x03B0)
class ATslPassArea : public AActor
{
public:
	class USphereComponent*                            SphereComponent;                                          // 0x03B0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              Radius;                                                   // 0x03B8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslPassArea");
		return ptr;
	}

};


// Class TslGame.TslPassBluezoneArea
// 0x0000 (0x03C0 - 0x03C0)
class ATslPassBluezoneArea : public ATslPassArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslPassBluezoneArea");
		return ptr;
	}

};


// Class TslGame.TslPassCarePackageArea
// 0x0000 (0x03C0 - 0x03C0)
class ATslPassCarePackageArea : public ATslPassArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslPassCarePackageArea");
		return ptr;
	}

};


// Class TslGame.TslPassAreaRectangle
// 0x0010 (0x03C0 - 0x03B0)
class ATslPassAreaRectangle : public AActor
{
public:
	class UBoxComponent*                               BoxComponent;                                             // 0x03B0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              Width;                                                    // 0x03B8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)
	float                                              Height;                                                   // 0x03BC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslPassAreaRectangle");
		return ptr;
	}

};


// Class TslGame.TslPassBlueZoneAreaRectangle
// 0x0000 (0x03C0 - 0x03C0)
class ATslPassBlueZoneAreaRectangle : public ATslPassAreaRectangle
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslPassBlueZoneAreaRectangle");
		return ptr;
	}

};


// Class TslGame.TslPassCarePackageAreaRectangle
// 0x0000 (0x03C0 - 0x03C0)
class ATslPassCarePackageAreaRectangle : public ATslPassAreaRectangle
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslPassCarePackageAreaRectangle");
		return ptr;
	}

};


// Class TslGame.TslPawnInputBindingComponent
// 0x0020 (0x0200 - 0x01E0)
class UTslPawnInputBindingComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnOwnerPossessed;                                         // 0x01E0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference)
	struct FScriptMulticastDelegate                    OnOwnerUnPossessed;                                       // 0x01F0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslPawnInputBindingComponent");
		return ptr;
	}


	void NotifyOwnerUnPossessed(class ATslPlayerController* InController);
	void NotifyOwnerPossessed(class ATslPlayerController* InController);
	void MoveVehicleNextSeat_Gamepad();
	void MoveVehicleDriverSeat_Gamepad();
};


// Class TslGame.TslPhysicsVolume
// 0x0038 (0x0430 - 0x03F8)
class ATslPhysicsVolume : public APhysicsVolume
{
public:
	class AOceanManager*                               OceanManager;                                             // 0x03F8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)
	class UClass*                                      DefaultWaterSplash;                                       // 0x0400(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      VehicleWaterSplash;                                       // 0x0408(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UClass*>                              WaterSplashMuteTypes;                                     // 0x0410(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0420(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslPhysicsVolume");
		return ptr;
	}

};


// Class TslGame.TslPlayerCameraManager
// 0x0020 (0x1BD0 - 0x1BB0)
class ATslPlayerCameraManager : public APlayerCameraManager
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x1BB0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslPlayerCameraManager");
		return ptr;
	}

};


// Class TslGame.TslPlayerDamageConfig
// 0x0050 (0x0080 - 0x0030)
class UTslPlayerDamageConfig : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0030(0x0050) UNKNOWN PROPERTY: MapProperty TslGame.TslPlayerDamageConfig.DamageZones

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslPlayerDamageConfig");
		return ptr;
	}

};


// Class TslGame.TslPlayerState
// 0x0250 (0x0698 - 0x0448)
class ATslPlayerState : public APlayerState
{
public:
	int                                                Ranking;                                                  // 0x0448(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FString                                     AccountId;                                                // 0x0450(0x0010) (CPF_Net, CPF_ZeroConstructor)
	unsigned char                                      bKilled : 1;                                              // 0x0460(0x0001)
	unsigned char                                      bShowMapMarker : 1;                                       // 0x0461(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector2D                                     MapMarkerPosition;                                        // 0x0464(0x0008) (CPF_BlueprintVisible, CPF_IsPlainOldData)
	TArray<struct FReplicatedCastableItem>             ReplicatedCastableItems;                                  // 0x0470(0x0010) (CPF_Net, CPF_ZeroConstructor, CPF_Transient)
	unsigned char                                      bEmptyReplicatedCastableItems : 1;                        // 0x0480(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0481(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.TslPlayerState.ObserverAuthorityType
	int                                                TeamNumber;                                               // 0x0484(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      bIsZombie : 1;                                            // 0x0488(0x0001) (CPF_Net, CPF_Transient)
	struct FTslPlayerScores                            PlayerScores;                                             // 0x048C(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_Transient, CPF_IsPlainOldData)
	struct FTslPlayerStatistics                        PlayerStatistics;                                         // 0x0498(0x0004) (CPF_Net, CPF_Transient)
	struct FTslPlayerStatisticsForOwner                PlayerStatisticsForOwner;                                 // 0x049C(0x0010) (CPF_Net, CPF_Transient)
	unsigned char                                      UnknownData01[0xAC];                                      // 0x04AC(0x00AC) MISSED OFFSET
	TArray<struct FReplicatedEquipableItem>            ReplicatedEquipableItems;                                 // 0x0558(0x0010) (CPF_Net, CPF_ZeroConstructor, CPF_Transient)
	unsigned char                                      UnknownData02[0x1C];                                      // 0x0568(0x001C) MISSED OFFSET
	unsigned char                                      bQuitter : 1;                                             // 0x0584(0x0001)
	unsigned char                                      UnknownData03[0xFF];                                      // 0x0585(0x00FF) MISSED OFFSET
	float                                              LastHitTime;                                              // 0x0684(0x0004) (CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     CurrentAttackerPlayerNetId;                               // 0x0688(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslPlayerState");
		return ptr;
	}


	void OnRep_Ranking(int OldRanking);
	void OnRep_PlayerStatistics(const struct FTslPlayerStatistics& OldPlayerStatistics);
	void OnRep_LastHitTime();
	bool IsZombie();
	bool IsQuitter();
	bool IsObserver();
	void InformAboutKill();
	int GetTeamNum();
	struct FString GetShortPlayerName();
	struct FTslPlayerScores GetPlayerScores();
	float GetPing();
	class ATslPlayerController* GetOwningTslPlayerController();
	void GetObserverAuthorityType();
	int GetKills();
	void ClientUpdateRankingOnlineEvent(int InRanking);
	void BroadcastDeath(class ATslPlayerState* KillerPlayerState, class ATslPlayerState* GroggyPlayerInstigator, class UDamageType* KillerDamageType, const struct FText& DamageCauserName, class UClass* DamageCauserClass, int AlivePlayerNum, int AliveTeamNum, bool InbIsStealKilled);
};


// Class TslGame.TslPostProcessEffect
// 0x0050 (0x0400 - 0x03B0)
class ATslPostProcessEffect : public AActor
{
public:
	struct FName                                       TargetPostProcessVolumeName;                              // 0x03B0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<struct FPostProcessMaterial>                PostProcessMaterials;                                     // 0x03B8(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<struct FPostProcessEffectParameter>         DefaultPostProcessEffectParameter;                        // 0x03C8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<struct FPostProcessEffectDynamicMaterialState> PostProcessEffectDynamicMaterialStates;                   // 0x03D8(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	class APostProcessVolume*                          PostProcessVolume;                                        // 0x03E8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x03F0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslPostProcessEffect");
		return ptr;
	}


	bool SetMaterialVectorParameter(int idx, const struct FName& ParameterName, const struct FLinearColor& Value);
	bool SetMaterialParameter(int idx, const struct FName& ParameterName, float Value);
	bool SetMaterialBlendWeight(int idx, float Value);
	bool SetEffectParameter(const struct FString& ParameterName, float Value);
	bool SetDepthOfFieldFarBlurSize(float NewBlurSize);
	void OnSetEffectParameter(const struct FString& ParameterName, float Value);
	float GetEffectParameter(const struct FString& ParameterName, float DefaultValue);
	float GetDepthOfFieldFarBlurSize();
};


// Class TslGame.TslWeapon_Projectile
// 0x0008 (0x0AF8 - 0x0AF0)
class ATslWeapon_Projectile : public ATslWeapon_Gun
{
public:
	struct FProjectileWeaponData                       ProjectileConfig;                                         // 0x0AF0(0x0008) (CPF_Edit, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslWeapon_Projectile");
		return ptr;
	}


	void ServerFireProjectile(const class Vector3D& Origin, const class Vector3D& ShootDir);
};


// Class TslGame.TslWeapon_Throwable
// 0x00E8 (0x08C8 - 0x07E0)
class ATslWeapon_Throwable : public ATslWeapon
{
public:
	struct FThrowableWeaponData                        ThrowableConfig;                                          // 0x07E0(0x00A0) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0880(0x0018) MISSED OFFSET
	unsigned char                                      UnknownData01[0x1];                                       // 0x0880(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.TslWeapon_Throwable.ThrowableState
	struct FName                                       ThrowWeaponSocketName;                                    // 0x08A0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector3D                                     PawnMotionContributionMultiplier;                         // 0x08A8(0x000C) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class ATslParticle*                                CookingEffect;                                            // 0x08B8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class AActor*                                      RingAttachment;                                           // 0x08C0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslWeapon_Throwable");
		return ptr;
	}


	void ServerStartPinOff();
	void ServerStartCooking();
	void ServerRequestCancelThrow();
	void ServerFireProjectile(const class Vector3D& RelativeLocation, const class Vector3D& AimDirection);
	void OnRep_ThrowableState();
	void OnAnimationNotify(const struct FName& NotifyName);
	void GetThrowableState();
	int GetThrowableCountInInventory();
	int GetThrowableCount();
	void ClientNotifyReset();
	class Vector3D CalculateFinalThrowVelocity(const class Vector3D& AimDirection);
};


// Class TslGame.TslProjectile
// 0x0138 (0x04E8 - 0x03B0)
class ATslProjectile : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03B0(0x0008) MISSED OFFSET
	class UProjectileMovementComponent*                MovementComp;                                             // 0x03B8(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class USphereComponent*                            CollisionComp;                                            // 0x03C0(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    ParticleComp;                                             // 0x03C8(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        MeshComp;                                                 // 0x03D0(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UPhysicsConstraintComponent*                 MeshConstraint;                                           // 0x03D8(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class Vector3D                                     MeshInitialRotationRate;                                  // 0x03E0(0x000C) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bSyncServerAndClientRotation : 1;                         // 0x03EC(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0xB];                                       // 0x03ED(0x000B) MISSED OFFSET
	unsigned char                                      HideMeshAtExplosion : 1;                                  // 0x03F8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      ExplosionInWater : 1;                                     // 0x03F9(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x03FA(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.TslProjectile.ExplosionRotationType
	struct FName                                       ParticleToMeshAttachPointName;                            // 0x0400(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0408(0x0008) MISSED OFFSET
	class UClass*                                      ExplosionTemplate;                                        // 0x0410(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      ExplosionTemplateInAir;                                   // 0x0418(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      ExplosionTemplateInWater;                                 // 0x0420(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               ImpactSound;                                              // 0x0428(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkComponent*                                AkComp;                                                   // 0x0430(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x0438(0x0008) MISSED OFFSET
	unsigned char                                      UnknownData05[0x1];                                       // 0x0438(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.TslProjectile.ExplodeState
	unsigned char                                      bActiveParticle : 1;                                      // 0x0441(0x0001) (CPF_Net, CPF_Transient)
	unsigned char                                      bDoTick : 1;                                              // 0x0441(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	class Rotator                                      ClientMeshRotation;                                       // 0x0444(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	class Rotator                                      ServerMeshRotation;                                       // 0x0450(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_Transient, CPF_IsPlainOldData)
	float                                              VelocityStopStepDistance;                                 // 0x045C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector3D                                     LastStepLocation;                                         // 0x0460(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	int                                                StepBuffer;                                               // 0x046C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FinalInterpSpeed;                                         // 0x0470(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bConstantInterpStep : 1;                                  // 0x0474(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              VelocityCheckTimerTick;                                   // 0x0478(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bPropagateEffectActor : 1;                                // 0x047C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FProjectileData                             ProjectileConfig;                                         // 0x0480(0x0030) (CPF_Edit, CPF_DisableEditOnInstance)
	class UClass*                                      ReplicatedEffectActor;                                    // 0x04B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData06[0x30];                                      // 0x04B8(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslProjectile");
		return ptr;
	}


	void SetMeshRotationFromServer();
	void PropagateEffectActor_BP();
	void PropagateEffectActor();
	void OnRep_Exploded();
	void OnRep_ClientActivate();
	void OnRep_ActiveParticle();
	void OnImpact(const struct FHitResult& ImpactResult, const class Vector3D& ImpactVelocity);
	void OnHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const class Vector3D& NormalImpulse, const struct FHitResult& Hit);
	void ExplodeBP(const class Vector3D& Location, const class Rotator& Rotation, const struct FHitResult& Impact, float Radius);
	void CheckVelocityForStart();
};


// Class TslGame.TslProjectileMolotov
// 0x0050 (0x0538 - 0x04E8)
class ATslProjectileMolotov : public ATslProjectile
{
public:
	unsigned char                                      UnknownData00[0x1];                                       // 0x04E8(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.TslProjectileMolotov.MolotovSimulation
	class UClass*                                      DamageFieldContainerTemplate;                             // 0x04F0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      DamageFieldContainerInWallTemplate;                       // 0x04F8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      DamageFieldTemplate;                                      // 0x0500(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      DamageFieldTemplateInWall;                                // 0x0508(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      FragmentProjectileClass;                                  // 0x0510(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                ImpactMaxCount;                                           // 0x0518(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x1C];                                      // 0x051C(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslProjectileMolotov");
		return ptr;
	}

};


// Class TslGame.TslProjectileRedZone
// 0x0020 (0x0508 - 0x04E8)
class ATslProjectileRedZone : public ATslProjectile
{
public:
	class UAkAudioEvent*                               CreateSound;                                              // 0x04E8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FText                                       DisplayName;                                              // 0x04F0(0x0018) (CPF_Edit, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslProjectileRedZone");
		return ptr;
	}

};


// Class TslGame.TslProjectile_Flare
// 0x0010 (0x03C0 - 0x03B0)
class ATslProjectile_Flare : public AActor
{
public:
	float                                              DamageRadius;                                             // 0x03B0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      DebuffTemplate;                                           // 0x03B8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslProjectile_Flare");
		return ptr;
	}


	void Server_SpawnCarePackageCustom(const class Vector3D& InLocation);
	void ApplyBurn(const class Vector3D& InLocation);
};


// Class TslGame.TslReactionDoorComponent
// 0x0060 (0x0A40 - 0x09E0)
class UTslReactionDoorComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x09E0(0x0008) MISSED OFFSET
	class UTslReactionDoorData*                        ReactionDoorData;                                         // 0x09E8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDestructibleMesh*                           DoorDestructibleMesh;                                     // 0x09F0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                HLODChildIndex;                                           // 0x09F8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FDoorBreakingState                          DoorBreakingState;                                        // 0x09FC(0x0001) (CPF_Net)
	unsigned char                                      UnknownData01[0x43];                                      // 0x09FD(0x0043) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslReactionDoorComponent");
		return ptr;
	}


	void OnRep_DoorBreakingState();
	void ClientTakeDamage(float Damage, const class Vector3D& HitLocation, float DamageRadius, float Impulse);
};


// Class TslGame.TslReactionBoxComponent
// 0x0000 (0x0880 - 0x0880)
class UTslReactionBoxComponent : public UBoxComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslReactionBoxComponent");
		return ptr;
	}

};


// Class TslGame.TslReactionClientComponent
// 0x0000 (0x09E0 - 0x09E0)
class UTslReactionClientComponent : public UStaticMeshComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslReactionClientComponent");
		return ptr;
	}

};


// Class TslGame.TslReplayData
// 0x0000 (0x0028 - 0x0028)
class UTslReplayData : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslReplayData");
		return ptr;
	}

};


// Class TslGame.TslSceneCaptureComponent2D
// 0x0010 (0x0A40 - 0x0A30)
class UTslSceneCaptureComponent2D : public USceneCaptureComponent2D
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0A30(0x0008) MISSED OFFSET
	class UWorld*                                      World;                                                    // 0x0A38(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslSceneCaptureComponent2D");
		return ptr;
	}


	void CaptureScene();
};


// Class TslGame.TslSceneCaptureWorld
// 0x0078 (0x00A0 - 0x0028)
class UTslSceneCaptureWorld : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET
	class UWorld*                                      World;                                                    // 0x0050(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x48];                                      // 0x0058(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslSceneCaptureWorld");
		return ptr;
	}


	void InitWorld(class UGameInstance* GameInstance, const struct FString& SceneCapturePackageName);
	void DestroyWorld();
};


// Class TslGame.TslServerParticle
// 0x0028 (0x03D8 - 0x03B0)
class ATslServerParticle : public AActor
{
public:
	unsigned char                                      bAutoDestroyOnParticleFinish : 1;                         // 0x03B0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bAutoPlaySound : 1;                                       // 0x03B1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x03B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UAkComponent*                                AkSound;                                                  // 0x03C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x03C8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslServerParticle");
		return ptr;
	}


	void StopParticleMulticast();
	void OnParticleFinish(class UParticleSystemComponent* PSystem);
};


// Class TslGame.TslSingleton
// 0x0118 (0x0140 - 0x0028)
class UTslSingleton : public UObject
{
public:
	unsigned char                                      UnknownData00[0x110];                                     // 0x0028(0x0110) MISSED OFFSET
	class UWeaponsPenetrationConfig*                   WeaponsPenetrationConfig;                                 // 0x0138(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_NoClear, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslSingleton");
		return ptr;
	}

};


// Class TslGame.TslSmokeParticleSystemComponent
// 0x0000 (0x0AD0 - 0x0AD0)
class UTslSmokeParticleSystemComponent : public UParticleSystemComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslSmokeParticleSystemComponent");
		return ptr;
	}


	void ForceSpawn(int InEmitterIndex, const class Vector3D& InLocation, const class Vector3D& InVelocity);
};


// Class TslGame.TslSmokePropagationComponent
// 0x0100 (0x04F0 - 0x03F0)
class UTslSmokePropagationComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03F0(0x0008) MISSED OFFSET
	class UTslSmokeParticleSystemComponent*            SmokeParticle;                                            // 0x03F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x19];                                      // 0x0400(0x0019) MISSED OFFSET
	unsigned char                                      bSystemActivated : 1;                                     // 0x0419(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      BlockingActorTemplate;                                    // 0x0420(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              HalfHeightGlobal;                                         // 0x0428(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              HalfHeightLocalScalar;                                    // 0x042C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              GlobalRadius;                                             // 0x0430(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              GlobalAngle;                                              // 0x0434(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                RadialTryCount;                                           // 0x0438(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                LoopCount;                                                // 0x043C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                LastWorkerIndex;                                          // 0x0440(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MaxDistanceFromHost;                                      // 0x0444(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CeilingTraceDistance;                                     // 0x0448(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector3D                                     MainParticleVelocityScale_First;                          // 0x044C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector3D                                     MainParticleVelocityScale_Second;                         // 0x0458(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector3D                                     MainParticleVelocityScale_Third;                          // 0x0464(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              HorizontalRayTraceOffset;                                 // 0x0470(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              HorizontalRayRadiusScalar;                                // 0x0474(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              HorizontalRayPropagateOffset;                             // 0x0478(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              BlockerGroundTraceOffset;                                 // 0x047C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector3D                                     LowChildVelocityStaticVector;                             // 0x0480(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector3D                                     HighChildVelocityStaticVector;                            // 0x048C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector2D                                     LowChildVelocityInMap;                                    // 0x0498(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector2D                                     LowChildVelocityOutMap;                                   // 0x04A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector2D                                     HighChildVelocityInMap;                                   // 0x04A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector2D                                     HighChildVelocityOutMap;                                  // 0x04B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                CurrentRadialRay;                                         // 0x04B8(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                CurrentSpawnedChildCount;                                 // 0x04BC(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxTicksAllowed;                                          // 0x04C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                MaxChildrenAllowed;                                       // 0x04C4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CustomTickInterval;                                       // 0x04C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              StartDelay;                                               // 0x04CC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bDebugPropagation : 1;                                    // 0x04D0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bDebugTick : 1;                                           // 0x04D1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ParticleLifetime;                                         // 0x04D4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector2D                                     ParticleLifetimeRandomOffset;                             // 0x04D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ParticleToObjectLifeScale;                                // 0x04E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                ParticleAllocationCount;                                  // 0x04E4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x04E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslSmokePropagationComponent");
		return ptr;
	}


	void InitScan();
};


// Class TslGame.TslSpectatorPawn
// 0x01A8 (0x05E0 - 0x0438)
class ATslSpectatorPawn : public ASpectatorPawn
{
public:
	class UClass*                                      ReplayHUD;                                                // 0x0438(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      LevelAttribute_BattleRoyalRule;                           // 0x0440(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      LevelAttribute_Erangel;                                   // 0x0448(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      LevelAttribute_Desert;                                    // 0x0450(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PlayerInfoMinDistance;                                    // 0x0458(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PlayerInfoMaxDistance;                                    // 0x045C(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USpringArmComponent*                         FreeCameraSpringArmComponent;                             // 0x0460(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UCameraComponent*                            FreeCameraComponent;                                      // 0x0468(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class USpringArmComponent*                         FollowCameraSpringArmComponent;                           // 0x0470(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UCameraComponent*                            FollowCameraComponent;                                    // 0x0478(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UArrowComponent*                             AudioListener;                                            // 0x0480(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0488(0x0008) MISSED OFFSET
	class UTslDeathCameraComponent*                    DeathCameraComponent;                                     // 0x0490(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              LocationUpdateIntervalSeconds;                            // 0x0498(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              LimitMinFreeCamFov;                                       // 0x04A0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              LimitMaxFreeCamFov;                                       // 0x04A4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x04A8(0x0010) MISSED OFFSET
	float                                              FollowCameraZoomSpeed;                                    // 0x04B8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              LimitTargetArmLength;                                     // 0x04BC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SpectatableCheckLength;                                   // 0x04C0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SpectatableCheckScreenRatio;                              // 0x04C4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x18];                                      // 0x04C8(0x0018) MISSED OFFSET
	class UClass*                                      OutlineEffectClass;                                       // 0x04E0(0x0008) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	class ATslPostProcessEffect*                       OutlineEffect;                                            // 0x04E8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	TArray<struct FSavedObPos>                         ArrObPos_Erangel;                                         // 0x04F0(0x0010) (CPF_ZeroConstructor, CPF_Config)
	TArray<struct FSavedObPos>                         ArrObPos_Desert;                                          // 0x0500(0x0010) (CPF_ZeroConstructor, CPF_Config)
	unsigned char                                      UnknownData03[0x48];                                      // 0x0510(0x0048) MISSED OFFSET
	class UClass*                                      ReplayZoneEffectClass;                                    // 0x0558(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      ReplayZoneAreaClass;                                      // 0x0560(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class ATslPostProcessEffect*                       ReplayZoneEffect;                                         // 0x0568(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class AActor*                                      ReplayZoneArea;                                           // 0x0570(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FScriptMulticastDelegate                    OnPlayerInfoDistanceDelegate;                             // 0x0578(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData04[0x58];                                      // 0x0588(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslSpectatorPawn");
		return ptr;
	}


	void TickMonitoring();
	void SetShowPlayerInfoDistance(float Distance);
	void SetPlayerCamera(class AActor* NewViewTarget);
	void SetObserverCameraMode(class AActor* NewViewTarget);
	bool SetKillerOrVictimCamera(const struct FString& strKillerID, const struct FString& strKillerName, const struct FString& strVictimID, const struct FString& strVictimName);
	void SetFreeCamBattleLocation(const class Vector3D& HitterLoc, const class Vector3D& AttackedLoc);
	bool RestoreTargetCharacter();
	void OnViewTargetUpdate(class AActor* NewViewTarget);
	void OnToggleShowObseverTagWeapon();
	void OnToggleObseverTagWidget();
	void OnSwitchCameraSpectator();
	void OnSwitchCameraFollow();
	void OnStopSlowMove();
	void OnStopFastMove();
	void OnStartSlowMove();
	void OnStartFastMove();
	void OnSetLocation(unsigned char idx);
	void OnSetFree();
	void OnSetCharacterSpec(unsigned char idx);
	void OnSetCharacter(unsigned char idx);
	void OnSaveLocation(unsigned char idx);
	void OnSaveCharacter(unsigned char idx);
	void OnPlayerInfoDistanceUpHold();
	void OnPlayerInfoDistanceUp();
	void OnPlayerInfoDistanceDownHold();
	void OnPlayerInfoDistanceDown();
	void OnGotoTimelineDone();
	bool IsObserverTagWeaponShow();
	void HandleClipboard();
	class ATslCharacter* GetSpectatableCharacter();
	class ACarePackageItem* GetSpectableCarePackageItem();
	float GetShowPlayerInfoDistance();
	bool GetObserverTagShow();
	class ATslCharacter* GetLastSpectatedCharacter();
	void GetCameraMode();
	void BackupTargetCharacter(class AActor* ViewTarget);
};


// Class TslGame.TslSpectatorPawnMovement
// 0x0030 (0x02B0 - 0x0280)
class UTslSpectatorPawnMovement : public USpectatorPawnMovement
{
public:
	float                                              FastMoveModifier;                                         // 0x0284(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SlowMoveModifier;                                         // 0x0288(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MinFreeMoveSpeed;                                         // 0x028C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MaxFreeMoveSpeed;                                         // 0x0290(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MinFreeMoveSpeedHeight;                                   // 0x0294(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MaxFreeMoveSpeedHeight;                                   // 0x0298(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AbsoluteMinZ;                                             // 0x029C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AbsoluteMaxZ;                                             // 0x02A0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x02A4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslSpectatorPawnMovement");
		return ptr;
	}

};


// Class TslGame.TslStatics
// 0x0000 (0x0028 - 0x0028)
class UTslStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslStatics");
		return ptr;
	}


	void STATIC_UseHighPrecisionMouseMovement(class APlayerController* PlayerController);
	void STATIC_UnloadTextureByPtr(TAssetPtr<class UTexture> TexturePtr);
	void STATIC_SetWorldOriginByDistance(class APlayerController* Controller, float XYDistanceToShift);
	void STATIC_SetWorldOrigin(class APlayerController* Controller);
	void STATIC_SetReportUserInfo(class UObject* WorldContextObject, const struct FTslReportUserInfo& UserInfo);
	void STATIC_SetAnimationAkSwitch(class ACharacter* Character, const struct FString& SwitchGroup, const struct FString& SwitchState);
	void STATIC_SetAnimationAkRTPC(class ACharacter* Character, const struct FString& RTPCName, float RTPCValue);
	class Vector3D STATIC_ServerPositionToLocal(class UObject* WorldContextObject, const class Vector3D& Server);
	int STATIC_SafeDivide_IntInt(int A, int B, int DivideByZeroValue);
	float STATIC_SafeDivide_FloatFloat(float A, float B, float DivideByZeroValue);
	void STATIC_ReleaseMouseCaptureFromPlayerController(class APlayerController* PlayerController);
	class Vector3D STATIC_ProjectPointToFloor(class UObject* WorldContextObject, const class Vector3D& Origin, float Length, bool* bOutHit);
	class Vector3D STATIC_ProjectPointsToHighFloor(class UObject* WorldContextObject, const class Vector3D& Origin, float AroundLength, float RayLength, bool* bOutHit);
	bool STATIC_PredictProjectilePathBox(class UObject* WorldContextObject, const class Vector3D& StartPos, const class Vector3D& LaunchVelocity, bool bTracePath, const class Vector3D& ProjectileBox, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, float DrawDebugTime, float SimFrequency, float MaxSimTime, float OverrideGravityZ, struct FHitResult* OutHit, TArray<class Vector3D>* OutPathPositions, class Vector3D* OutLastTraceDestination);
	struct FString STATIC_PhysicalSurfaceToString(TEnumAsByte<EPhysicalSurface> Type);
	struct FName STATIC_PhysicalSurfaceToName(TEnumAsByte<EPhysicalSurface> Type);
	class Vector3D STATIC_LocalPositionToServer(class UObject* WorldContextObject, const class Vector3D& Local);
	class UTexture* STATIC_LoadTextureByPtr(TAssetPtr<class UTexture> TexturePtr);
	bool STATIC_LineSphereIntersection(const class Vector3D& Center, const class Vector3D& Origion, const class Vector3D& Direction, float Radius, class Vector3D* Intersection1, class Vector3D* Intersection2);
	bool STATIC_IsShipping();
	bool STATIC_IsServerActor(class AActor* Actor);
	bool STATIC_IsReportUserValid(class UObject* WorldContextObject);
	bool STATIC_IsReportUserApplied(class UObject* WorldContextObject);
	bool STATIC_IsNextPlayzoneOnTheMap(class UUserWidget* Widget);
	bool STATIC_IsMapFullyLoaded(class UWorld* World);
	bool STATIC_IsLastInputGamepad(class UObject* WorldContextObject);
	bool STATIC_IsKoreaRegion(class UObject* WorldContextObject);
	bool STATIC_IsGamepadConnected();
	bool STATIC_IsForKoreanRating();
	bool STATIC_IsForChineseLicensing();
	bool STATIC_IsESports();
	bool STATIC_IsEditor();
	bool STATIC_IsClientActor(class AActor* Actor);
	class APhysicsVolume* STATIC_GetWaterVolumeAtLocation(class UObject* WorldContextObject, const class Vector3D& Point);
	float STATIC_GetWaterSurfaceHeight(class APhysicsVolume* PhysicsVolume, const class Vector3D& CurLocation);
	class UTslVehicleSeatComponent* STATIC_GetVehicleSeatComponent(class AActor* Actor);
	class UTslVehicleCommonComponent* STATIC_GetVehicleCommonComponent(class AActor* Actor);
	class ATslPlayerController* STATIC_GetTslPlayerController(class APawn* Pawn);
	struct FString STATIC_GetTslPlatformName();
	class ATslGameState* STATIC_GetTslGameState(class UObject* WorldContextObject);
	class ATslCharacter* STATIC_GetTslCharacter(class UObject* WorldContextObject);
	class UPhysicalMaterial* STATIC_GetSimplePhysicalMaterial(class UPrimitiveComponent* PrimitiveComponent);
	class Vector3D STATIC_GetServerLocation(class UObject* ActorOrComponent);
	struct FTslReportUserInfo STATIC_GetReportUserInfo(class UObject* WorldContextObject);
	float STATIC_GetRecoilControlScale();
	float STATIC_GetRecoilAnimScale();
	float STATIC_GetNextPlayzoneRadius(class UObject* WorldContextObject);
	class Vector3D STATIC_GetNextPlayzonePosition(class UObject* WorldContextObject);
	float STATIC_GetMOAScale();
	struct FString STATIC_GetGameVersion();
	float STATIC_GetGamepadTabMaximumDelay(class ATslPlayerController* TslPlayerController);
	struct FString STATIC_GetFullGameVersion();
	bool STATIC_GetConsoleValue(const struct FString& ConsloeName, float* OutValueFloat, int* OutValueInt, struct FString* OutValueString);
	float STATIC_GetBluezoneRadius(class UObject* WorldContextObject);
	class Vector3D STATIC_GetBluezonePosition(class UObject* WorldContextObject);
	float STATIC_GetBallisticDropScale();
	float STATIC_GetBallisticDragScale();
	bool STATIC_ConeVolumeLineTraceSingle(class UObject* WorldContextObject, const class Vector3D& Origin, float HalfConeAngle, float RayLength, class Vector3D* OutHitPoint);
	int STATIC_ConeVolumeLineTraceMulti(class UObject* WorldContextObject, const class Vector3D& Origin, int SamplingNum, float HalfConeAngle, float RayLength, TArray<class Vector3D>* OutHitPoints);
	bool STATIC_CanVehicleSeatInteraction(class ATslCharacter* InTslCharacter);
	bool STATIC_CanCancelCasting(class ATslCharacter* InTslCharacter);
	bool STATIC_ApplyRadialDamageWithFalloff(class UObject* WorldContextObject, float BaseDamage, float MinimumDamage, const class Vector3D& Origin, float DamageInnerRadius, float DamageOuterRadius, float DamageFalloff, class UClass* DamageTypeClass, TArray<class AActor*> IgnoreActors, const struct FAttackId& AttackId, bool bIsTargetDestructible, class AActor* DamageCauser, class AController* InstigatedByController, TEnumAsByte<ECollisionChannel> DamagePreventionChannel, bool bExplode);
	bool STATIC_ApplyRadialDamageWithCurve(class UObject* WorldContextObject, float BaseDamage, const class Vector3D& Origin, float DamageRadius, class UCurveFloat* DamageCurve, class UClass* DamageTypeClass, TArray<class AActor*> IgnoreActors, const struct FAttackId& AttackId, bool bIsTargetDestructible, class AActor* DamageCauser, class AController* InstigatedByController, TEnumAsByte<ECollisionChannel> DamagePreventionChannel, bool bExplode);
	bool STATIC_ApplyRadialDamage(class UObject* WorldContextObject, float BaseDamage, const class Vector3D& Origin, float DamageRadius, class UClass* DamageTypeClass, TArray<class AActor*> IgnoreActors, const struct FAttackId& AttackId, bool bIsTargetDestructible, class AActor* DamageCauser, class AController* InstigatedByController, bool bDoFullDamage, TEnumAsByte<ECollisionChannel> DamagePreventionChannel, bool bExplode);
	void STATIC_ApplyDamage(class AActor* DamagedActor, float BaseDamage, class AController* EventInstigator, class AActor* DamageCauser, class UClass* DamageTypeClass, const struct FAttackId& AttackId);
};


// Class TslGame.TslStreamer
// 0x0020 (0x0048 - 0x0028)
class UTslStreamer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslStreamer");
		return ptr;
	}


	void OnOriginShiftedInternal(class UWorld* InWorld, const struct FIntVector& From, const struct FIntVector& To);
	void OnLevelChangedInternal();
};


// Class TslGame.FoliageCollisionStreamer
// 0x0068 (0x00B0 - 0x0048)
class UFoliageCollisionStreamer : public UTslStreamer
{
public:
	unsigned char                                      bEnabled : 1;                                             // 0x0048(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              MinDistance;                                              // 0x004C(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              MaxQueryDistance;                                         // 0x0050(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              MaxSimulationDistance;                                    // 0x0054(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bUseOnlyQueryAndPhysics : 1;                              // 0x0058(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x57];                                      // 0x0059(0x0057) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.FoliageCollisionStreamer");
		return ptr;
	}

};


// Class TslGame.LODActorStreamer
// 0x0038 (0x0080 - 0x0048)
class ULODActorStreamer : public UTslStreamer
{
public:
	unsigned char                                      bEnabled : 1;                                             // 0x0048(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              PreLoadDistance;                                          // 0x004C(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	int                                                PerFrameShowCount;                                        // 0x0050(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	int                                                PerFrameShowCountLimit;                                   // 0x0054(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	TArray<struct FFloatRange>                         MinDrawDistanceOverride;                                  // 0x0058(0x0010) (CPF_ZeroConstructor, CPF_Config)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0068(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.LODActorStreamer");
		return ptr;
	}

};


// Class TslGame.ParticleEnvrionmentStreamer
// 0x0018 (0x0060 - 0x0048)
class UParticleEnvrionmentStreamer : public UTslStreamer
{
public:
	unsigned char                                      bEnabled : 1;                                             // 0x0048(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              ToleranceDeactiveDistance;                                // 0x004C(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0050(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ParticleEnvrionmentStreamer");
		return ptr;
	}

};


// Class TslGame.TslStreamerManager
// 0x0028 (0x03D8 - 0x03B0)
class ATslStreamerManager : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03B0(0x0008) MISSED OFFSET
	TArray<class UClass*>                              StreamerClasses;                                          // 0x03B8(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<class UTslStreamer*>                        TslStreamers;                                             // 0x03C8(0x0010) (CPF_ZeroConstructor, CPF_Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslStreamerManager");
		return ptr;
	}

};


// Class TslGame.TslThrowableTrajectoryViewComponent
// 0x00D0 (0x0A00 - 0x0930)
class UTslThrowableTrajectoryViewComponent : public USplineComponent
{
public:
	class UStaticMesh*                                 SplineSegmentMesh;                                        // 0x0930(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UMaterialInterface*                          SplineSegmentMeshMaterial;                                // 0x0938(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector2D                                     SegmentMeshScale;                                         // 0x0940(0x0008) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UStaticMesh*                                 ImpactMesh;                                               // 0x0948(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UMaterialInterface*                          ImpactMeshMaterial;                                       // 0x0950(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector3D                                     ImpactMeshScale;                                          // 0x0958(0x000C) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0964(0x0050) UNKNOWN PROPERTY: SetProperty TslGame.TslThrowableTrajectoryViewComponent.TraceObjectTypes
	float                                              PredictionTime;                                           // 0x09B8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DistanceScaleFactor;                                      // 0x09BC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       MaterialParam_NearDepthFadeOrigin;                        // 0x09C0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       MaterialParam_FarDepthFadeOrigin;                         // 0x09C8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SplineGenerationAngThresholdDeg;                          // 0x09D0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x09D4(0x000C) MISSED OFFSET
	class UStaticMeshComponent*                        ImpactMeshComponent;                                      // 0x09E0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	TArray<class USplineMeshComponent*>                SplineMeshArray;                                          // 0x09E8(0x0010) (CPF_ExportObject, CPF_ZeroConstructor)
	class UMaterialInstanceDynamic*                    SplineSegmentMeshMaterialDynamic;                         // 0x09F8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslThrowableTrajectoryViewComponent");
		return ptr;
	}


	void AttachToThrowable(class ATslWeapon_Throwable* ThrowableIn);
};


// Class TslGame.TslUserWidget
// 0x0020 (0x0260 - 0x0240)
class UTslUserWidget : public UUserWidget
{
public:
	class UInputComponent*                             InputComponentAxis;                                       // 0x0240(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_IsPlainOldData)
	class ATslCharacter*                               CachedTslCharacter;                                       // 0x0248(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class ATslGameState*                               CachedTslGameState;                                       // 0x0250(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class ATslCharacter*                               CachedViewTargetTslCharacter;                             // 0x0258(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslUserWidget");
		return ptr;
	}


	struct FEventReply STATIC_TransferUserFocusThroughReply(const struct FFocusEvent& AcceptedFocusEvent, class UWidget* FocusWidget, bool bInAllUsers, struct FEventReply* Reply);
	void StopListeningForAllInputAxises();
	bool STATIC_NavigateUserFocus(class ULocalPlayer* Player, class UWidget* Widget);
	void ListenForInputAxis(const struct FName& AxisName, float Scale, bool bConsume, const struct FScriptDelegate& Callback);
	bool IsReplaying();
	class ATslPlayerState* GetDemoPlayerState(bool IsForMatchResult);
	class ATslCharacter* GetCachedViewTargetTslCharacter();
	class ATslGameState* GetCachedGameState();
	class ATslCharacter* GetCachedCharacter();
	bool STATIC_ContainUserFocus(class ULocalPlayer* Player, class UWidget* Widget);
	bool ContainOwnerUserFocus();
	void STATIC_ClearUserFocus(class ULocalPlayer* Player);
};


// Class TslGame.BlockInputUserWidget
// 0x0030 (0x0290 - 0x0260)
class UBlockInputUserWidget : public UTslUserWidget
{
public:
	unsigned char                                      bWhiteList : 1;                                           // 0x0260(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<struct FBlockAction>                        BlockActions;                                             // 0x0268(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<struct FName>                               BlockAxises;                                              // 0x0278(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	unsigned char                                      bGenerateEventOnOpen : 1;                                 // 0x0288(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bLockMouseCursorInViewport : 1;                           // 0x0289(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.BlockInputUserWidget");
		return ptr;
	}

};


// Class TslGame.UmgBaseWidget
// 0x0068 (0x02C8 - 0x0260)
class UUmgBaseWidget : public UTslUserWidget
{
public:
	unsigned char                                      bUseEmergingAnimation : 1;                                // 0x0260(0x0001) (CPF_Edit)
	unsigned char                                      bUseVanishingAnimation : 1;                               // 0x0260(0x0001) (CPF_Edit)
	struct FUmgWidgetBinder_Animation                  EmergingAnimationBinder;                                  // 0x0268(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FUmgWidgetBinder_Animation                  VanishingAnimationBinder;                                 // 0x0288(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x18];                                      // 0x02A8(0x0018) MISSED OFFSET
	unsigned char                                      UnknownData01[0x1];                                       // 0x02A8(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.UmgBaseWidget.PendingVisibility
	float                                              VanishingStartTime;                                       // 0x02C4(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.UmgBaseWidget");
		return ptr;
	}


	bool IsMouseOn();
	void HandleMainPrepass(class UWidget* Widget);
};


// Class TslGame.TslXboxTeamManageWidget
// 0x0020 (0x02B0 - 0x0290)
class UTslXboxTeamManageWidget : public UBlockInputUserWidget
{
public:
	struct FUmgWidgetBinder_Gerneral                   TeamMemberVerticalBox_Binder;                             // 0x0290(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslXboxTeamManageWidget");
		return ptr;
	}


	void ToggleVoiceChat(int MemberNumber);
	void TeamMemberMuteChanged(const struct FString& PlayerId, const struct FString& ChannelId, bool bIsMuted);
	void ShowGamerCard(int MemberNumber);
	class UTslXboxTeamManageInfoWidget* GetTeamManageInfoWidgetBySlot(int SlotIndex);
	class UTslXboxTeamManageInfoWidget* GetTeamManageInfoWidgetByMemberNum(int MemberNum);
};


// Class TslGame.BluezoneGpsBaseWidget
// 0x0378 (0x0640 - 0x02C8)
class UBluezoneGpsBaseWidget : public UUmgBaseWidget
{
public:
	struct FUmgWidgetBinder_Image                      BluezoneGaugeImageBinder;                                 // 0x02C8(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_TextBlock                  BluezoneTimeTextBinder;                                   // 0x02F0(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_Image                      PlayerIconImageBinder;                                    // 0x0310(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_Animation                  MovingAnimationBinder;                                    // 0x0338(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	TArray<struct FUmgWidgetBinder_Animation>          WarningAnimationList;                                     // 0x0358(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<struct FUmgWidgetBinder_Animation>          ReleasingTextAnimationList;                               // 0x0368(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FUmgWidgetBinder_Animation                  EnterNextPlayzoneAnimBinder;                              // 0x0378(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_Animation                  LeaveNextPlayzoneAnimBinder;                              // 0x0398(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_Animation                  WidgetEmergingAnimBinder;                                 // 0x03B8(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_Animation                  WidgetVanishingAminBinder;                                // 0x03D8(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FName                                       PlayZoneStartParmName;                                    // 0x03F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       BluezoneEndParamName;                                     // 0x0400(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       ColorMultiplyParmName;                                    // 0x0408(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                InNextPlayzoneColorMultiply;                              // 0x0410(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FText                                       WarningTimeTextFormat;                                    // 0x0420(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FText                                       ReleaseTimeText;                                          // 0x0438(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FSequence_Float                             BluezoneResetSequence;                                    // 0x0450(0x00A0) (CPF_Edit, CPF_BlueprintVisible)
	struct FSequence_Float                             PlayzoneResetSequence;                                    // 0x04F0(0x00A0) (CPF_Edit, CPF_BlueprintVisible)
	struct FSequence_Float                             PlayerIconResetSequence;                                  // 0x0590(0x00A0) (CPF_Edit, CPF_BlueprintVisible)
	float                                              PlayerIconPositionX_Start;                                // 0x0630(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PlayerIconPositionX_End;                                  // 0x0634(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0638(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.BluezoneGpsBaseWidget");
		return ptr;
	}


	void UpdateBluezoneGpsWidget();
	void OnNotifyNextGasIn(const class Vector3D& PoisonGasWarningPosition, float PoisonGasWarningRadius);
};


// Class TslGame.CharacterStanceBaseWidget
// 0x0030 (0x02F8 - 0x02C8)
class UCharacterStanceBaseWidget : public UUmgBaseWidget
{
public:
	struct FUmgWidgetBinder_Image                      StanceIconImageBinder;                                    // 0x02C8(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FName                                       IconStateParamName;                                       // 0x02F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.CharacterStanceBaseWidget");
		return ptr;
	}

};


// Class TslGame.EquipableItemIconBaseWidget
// 0x00B0 (0x0378 - 0x02C8)
class UEquipableItemIconBaseWidget : public UUmgBaseWidget
{
public:
	unsigned char                                      UnknownData00[0x1];                                       // 0x02C8(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.EquipableItemIconBaseWidget.EquipSlotID
	struct FDurabilityColorSet                         DurabilityColorSet;                                       // 0x02D0(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bUseWrning : 1;                                           // 0x02E0(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	struct FFloatInterval                              WarningRange;                                             // 0x02E4(0x0008) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      UnknownData01[0x1];                                       // 0x02EC(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.EquipableItemIconBaseWidget.IconVisibilityType
	struct FUmgWidgetBinder_Image                      IconImageBinder;                                          // 0x02F0(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	struct FName                                       IconTexParamName;                                         // 0x0318(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       IconColorParamName;                                       // 0x0320(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                DefaultColor;                                             // 0x0328(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FUmgWidgetBinder_Animation                  WarningAnimBinder;                                        // 0x0338(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_Animation                  NoBagSpaceAnimBinder;                                     // 0x0358(0x0020) (CPF_Edit, CPF_BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.EquipableItemIconBaseWidget");
		return ptr;
	}


	void OnNoBagSpaceEvent();
};


// Class TslGame.EquipableItemIconHudBaseWidget
// 0x0000 (0x02C8 - 0x02C8)
class UEquipableItemIconHudBaseWidget : public UUmgBaseWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.EquipableItemIconHudBaseWidget");
		return ptr;
	}

};


// Class TslGame.EquipableItemIconHud_Observer
// 0x0000 (0x02C8 - 0x02C8)
class UEquipableItemIconHud_Observer : public UEquipableItemIconHudBaseWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.EquipableItemIconHud_Observer");
		return ptr;
	}

};


// Class TslGame.FppWeaponSlotHudBaseWidget
// 0x0000 (0x02C8 - 0x02C8)
class UFppWeaponSlotHudBaseWidget : public UUmgBaseWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.FppWeaponSlotHudBaseWidget");
		return ptr;
	}

};


// Class TslGame.HudMainBaseWidget
// 0x0010 (0x02D8 - 0x02C8)
class UHudMainBaseWidget : public UUmgBaseWidget
{
public:
	TArray<struct FHudUiConfig>                        GeneralUiConfigs;                                         // 0x02C8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.HudMainBaseWidget");
		return ptr;
	}


	bool OnInit_Widget(class ATslBaseHUD* TslBaseHUD);
	bool OnInit_Replay(class ATslBaseHUD* TslBaseHUD);
	bool OnInit_Input(class ATslBaseHUD* TslBaseHUD);
	bool OnInit_Delegate(class ATslBaseHUD* TslBaseHUD);
};


// Class TslGame.InteractionBaseWidget
// 0x0280 (0x0548 - 0x02C8)
class UInteractionBaseWidget : public UUmgBaseWidget
{
public:
	struct FUmgWidgetBinder_Border                     MainLayer;                                                // 0x02C8(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_TextBlock                  InteractionMessageTextBinder;                             // 0x02E8(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_Border                     InteractionMessageTextBgBinder;                           // 0x0308(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_TextBlock                  AdditionalTextBinder;                                     // 0x0328(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_Image                      SuitableWeaponImageBinder;                                // 0x0348(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	float                                              SuitableWeaponImageHeight;                                // 0x0370(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FUmgWidgetBinder_Image                      KeyImageBinder;                                           // 0x0378(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_TextBlock                  InteractionKeyTextBinder;                                 // 0x03A0(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_Border                     InteractionKeyTextBorder_Binder;                          // 0x03C0(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_Animation                  AdditionalMessageBlinkingBinder;                          // 0x03E0(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_Animation                  AdditionalMessageNormalBinder;                            // 0x0400(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_Animation                  ShowAnimationBinder;                                      // 0x0420(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_Animation                  HiddenAnimationBinder;                                    // 0x0440(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_Animation                  SwitchAnimationBinder;                                    // 0x0460(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_Animation                  SwitchAnimationResetBinder;                               // 0x0480(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_WidgetSwitcher             InteractionInputMethodSwitcherBinder;                     // 0x04A0(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FName                                       InteractionKeyName;                                       // 0x04C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FUmgWidgetBinder_Image                      ProgressCircle_Binder;                                    // 0x04C8(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	struct FLinearColor                                InteractionTextColor_Interactable;                        // 0x04F0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FLinearColor                                InteractionTextShadowColor_Interactable;                  // 0x0500(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FLinearColor                                InteractionTextColor_NotInteractable;                     // 0x0510(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FLinearColor                                InteractionTextShadowColor_NotInteractable;               // 0x0520(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0530(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.InteractionBaseWidget");
		return ptr;
	}


	void OnNotifyInteractionItemChanged(bool bIsInteractEnable);
};


// Class TslGame.KillCountBaseWidget
// 0x0050 (0x0318 - 0x02C8)
class UKillCountBaseWidget : public UUmgBaseWidget
{
public:
	struct FUmgWidgetBinder_TextBlock                  KillCountTextBinder;                                      // 0x02C8(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FUmgWidgetBinder_Animation                  IncreasingAnimBinder;                                     // 0x02E8(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	float                                              IncreasingKillCountDisplayTime;                           // 0x0308(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                LastKillCount;                                            // 0x030C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      bLastWantShow : 1;                                        // 0x0310(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              IncreasingKillCountDisplayStartTime;                      // 0x0314(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.KillCountBaseWidget");
		return ptr;
	}


	int GetLastKillCount();
};


// Class TslGame.LifeGaugeBaseWidget
// 0x0120 (0x03E8 - 0x02C8)
class ULifeGaugeBaseWidget : public UUmgBaseWidget
{
public:
	class UTslHealthGaugeData*                         LifeGaugeColorData;                                       // 0x02C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FUmgWidgetBinder_Image                      LifeGaugeImageBinder;                                     // 0x02D0(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	struct FName                                       LifeGaugeRatioValueParamName;                             // 0x02F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       LifeGaugeColorParamName;                                  // 0x0300(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FUmgWidgetBinder_Image                      HealAmountImageBinder;                                    // 0x0308(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_Overlay                    HitEffectLayer;                                           // 0x0330(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FName                                       HealAmountRatioValueParamName;                            // 0x0350(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       HealAmountRatioSartParamName;                             // 0x0358(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       HealAmountRatioEndParamName;                              // 0x0360(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       HealAmountColorParamName;                                 // 0x0368(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveFloat*                                 HealEffectTimeCurve;                                      // 0x0370(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      HitEffectClass;                                           // 0x0378(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      Item_Heal_FirstAid;                                       // 0x0380(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      Item_Heal_MedKit;                                         // 0x0388(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FUmgWidgetBinder_Animation                  WarningAnimationBinder;                                   // 0x0390(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_Animation                  GroggyAnimationBinder;                                    // 0x03B0(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      UnknownData00[0x18];                                      // 0x03D0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.LifeGaugeBaseWidget");
		return ptr;
	}


	void OnNotifyHit(float Damage);
	void OnNotifyHeal(float StartHealth, float GoalHealth, float MaxHealth);
};


// Class TslGame.LifeGaugeEffectBaseWidget
// 0x00B8 (0x0380 - 0x02C8)
class ULifeGaugeEffectBaseWidget : public UUmgBaseWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x02C8(0x0010) MISSED OFFSET
	struct FName                                       OldLifeRatioParamName;                                    // 0x02D8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       CurrentLifeRatioParamName;                                // 0x02E0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FUmgWidgetBinder_Image                      LifeEffectBinder;                                         // 0x02E8(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
	TArray<struct FUiEffectAnimation_FloatCurve>       LifeEffectAnimationFloatCurveList;                        // 0x0310(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<struct FUiEffectAnimation_VectorCurve>      LifeEffectAnimationVectorCurveList;                       // 0x0320(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      LifeEffectBackgroundBinder;                               // 0x0330(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
	TArray<struct FUiEffectAnimation_FloatCurve>       LifeEffectBgAnimationFloatCurveList;                      // 0x0358(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<struct FUiEffectAnimation_VectorCurve>      LifeEffectBgAnimationVectorCurveList;                     // 0x0368(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	unsigned char                                      bAutoDestroyOnEffectPlayFinish : 1;                       // 0x0378(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.LifeGaugeEffectBaseWidget");
		return ptr;
	}

};


// Class TslGame.LifeGaugeHitEffectBaseWidget
// 0x0098 (0x0360 - 0x02C8)
class ULifeGaugeHitEffectBaseWidget : public UUmgBaseWidget
{
public:
	TArray<struct FGaugeAlphaCurveType>                AlphaCurveList;                                           // 0x02C8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FUmgWidgetBinder_Image                      HitEffectImage;                                           // 0x02D8(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FName                                       BaseColorParamName;                                       // 0x0300(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       ColorLerpParamName;                                       // 0x0308(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       BrightAlphaParamName;                                     // 0x0310(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       HitEffectAlphaParamName;                                  // 0x0318(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       HitEffectStartParamName;                                  // 0x0320(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       HitEffectEndParamName;                                    // 0x0328(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0330(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.LifeGaugeHitEffectBaseWidget");
		return ptr;
	}

};


// Class TslGame.LifeGaugeTemplateBaseWidget
// 0x0130 (0x03F8 - 0x02C8)
class ULifeGaugeTemplateBaseWidget : public UUmgBaseWidget
{
public:
	class UTslHealthGaugeData*                         LifeGaugeColorData;                                       // 0x02C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FUmgWidgetBinder_Image                      LifeGaugeImageBinder;                                     // 0x02D0(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	struct FName                                       LifeGaugeRatioValueParamName;                             // 0x02F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       LifeGaugeColorParamName;                                  // 0x0300(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FUmgWidgetBinder_Animation                  WarningAnimationBinder;                                   // 0x0308(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_Image                      BackgroundImageBinder;                                    // 0x0328(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverrideLifeGaugeMaterial : 1;                           // 0x0350(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInterface*                          OverrideLifeGaugeMaterial;                                // 0x0358(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bOverrideBackgroundMaterial : 1;                          // 0x0360(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInterface*                          OverrideBackgroundMaterial;                               // 0x0368(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bUseEffect : 1;                                           // 0x0370(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      DamageEffectClass;                                        // 0x0378(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      HealEffectClass;                                          // 0x0380(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      HealAmountEffectClass;                                    // 0x0388(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FUmgWidgetBinder_Overlay                    EffectLayerBinder;                                        // 0x0390(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	int                                                DamageEffectMax;                                          // 0x03B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                HealEffectMax;                                            // 0x03B4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x03B8(0x0018) MISSED OFFSET
	TArray<class ULifeGaugeEffectBaseWidget*>          DamageEffects;                                            // 0x03D0(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient)
	TArray<class ULifeGaugeEffectBaseWidget*>          HealEffects;                                              // 0x03E0(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient)
	class ULifeGaugeEffectBaseWidget*                  HealAmountEffect;                                         // 0x03F0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.LifeGaugeTemplateBaseWidget");
		return ptr;
	}


	void Update(float Life, float MaxLife, bool bIsGroggy, float HealAmount, bool bDisableEffect);
	void OnDestoryHealEffect(class ULifeGaugeEffectBaseWidget* HealEffect);
	void OnDestoryDamageEffect(class ULifeGaugeEffectBaseWidget* DamageEffect);
};


// Class TslGame.MapCarePackageItemIconBaseWidget
// 0x0070 (0x0338 - 0x02C8)
class UMapCarePackageItemIconBaseWidget : public UUmgBaseWidget
{
public:
	struct FUmgWidgetBinder_Border                     IconImageBorderBinder;                                    // 0x02C8(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_Image                      IconImageBinder;                                          // 0x02E8(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	struct FName                                       IconStateParamName;                                       // 0x0310(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       IconColorParamName;                                       // 0x0318(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0320(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.MapCarePackageItemIconBaseWidget");
		return ptr;
	}


	struct FEventReply OnButtonDown(const struct FGeometry& Geometry, const struct FPointerEvent& MouseEvent);
};


// Class TslGame.MapCharacterIconBaseWidget
// 0x02C0 (0x0588 - 0x02C8)
class UMapCharacterIconBaseWidget : public UUmgBaseWidget
{
public:
	struct FUmgWidgetBinder_Border                     IconImageBorderBinder;                                    // 0x02C8(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_Image                      IconImageBinder;                                          // 0x02E8(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	struct FName                                       IconStateParamName;                                       // 0x0310(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       IconRotationParamName;                                    // 0x0318(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       IconColorParamName;                                       // 0x0320(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FUmgWidgetBinder_Border                     PlayerNameBoderBinder;                                    // 0x0328(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_TextBlock                  PlayerNameBinder;                                         // 0x0348(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_Border                     ObserverMuzzleFlashBoderBinder;                           // 0x0368(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_UserWidget                 ObserverMuzzleFlashWidgetBinder;                          // 0x0388(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_Border                     LifeGaugeBorderBinder;                                    // 0x03A8(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_UserWidget                 LifeGaugeWidgetBinder;                                    // 0x03C8(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_Animation                  AttackedAnimBinder;                                       // 0x03E8(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_Animation                  HittedAnimBinder;                                         // 0x0408(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_Animation                  GroggyAnimBinder;                                         // 0x0428(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_Animation                  FadeOutAnimBinder;                                        // 0x0448(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_Border                     ButtonBInder;                                             // 0x0468(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0488(0x0010) MISSED OFFSET
	unsigned char                                      bTeamNumber : 1;                                          // 0x0498(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FUmgWidgetBinder_TextBlock                  TeamNumberText;                                           // 0x04A0(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_Overlay                    RiderLayerBinder;                                         // 0x04C0(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	class UClass*                                      RiderIconClass;                                           // 0x04E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       DisplayNameFormatWithOtherPlayer;                         // 0x04E8(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	class UTexture*                                    MyDirectionIcon;                                          // 0x0500(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTexture*                                    TeamDirectionIcon;                                        // 0x0508(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FUmgWidgetBinder_Border                     SpectatedIconBorder;                                      // 0x0510(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_Image                      NameTagColorImageBinder;                                  // 0x0530(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0558(0x0018) MISSED OFFSET
	class UMaterialInterface*                          PendingIconMaterial;                                      // 0x0570(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	TArray<class URiderIconWidget*>                    RiderIconList;                                            // 0x0578(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.MapCharacterIconBaseWidget");
		return ptr;
	}


	struct FEventReply OnButtonDown(const struct FGeometry& Geometry, const struct FPointerEvent& MouseEvent);
};


// Class TslGame.MapGridWidget
// 0x0428 (0x06F0 - 0x02C8)
class UMapGridWidget : public UUmgBaseWidget
{
public:
	struct FUmgWidgetBinder_Image                      MapImageBinder;                                           // 0x02C8(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_CanvasPanel                MyMarkerLayerBinder;                                      // 0x02F0(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_CanvasPanel                TeamMarkerLayerBinder;                                    // 0x0310(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	class UClass*                                      MapMarkerClass;                                           // 0x0330(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FUmgWidgetBinder_CanvasPanel                MyMapIconLayerBinder;                                     // 0x0338(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_CanvasPanel                OtherMapIconLayerBinder;                                  // 0x0358(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_CanvasPanel                CarePackageItemIconLayerBinder;                           // 0x0378(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	class UClass*                                      MapCharacterIconClass;                                    // 0x0398(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      MapCarePackageItemIconClass;                              // 0x03A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      ObserverPlayerIconHitEffectClass;                         // 0x03A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bShowName : 1;                                            // 0x03B0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsMinimap : 1;                                           // 0x03B1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FUmgWidgetBinder_Image                      RedzoneImageBinder;                                       // 0x03B8(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FName                                       RedzoneColorParamName;                                    // 0x03E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FColorBlindColorSet                         RedzoneColorSet;                                          // 0x03E8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FUmgWidgetBinder_Image                      ReplayzoneImageBinder;                                    // 0x03F8(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FUmgWidgetBinder_SizeBox                    ImageSizeBoxBinder;                                       // 0x0420(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FColorBlindColorSet                         BluezoneColorSet;                                         // 0x0440(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	float                                              Desaturation;                                             // 0x0450(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Contrast;                                                 // 0x0454(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0458(0x0014) MISSED OFFSET
	float                                              ZoomLevel;                                                // 0x046C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ShowGridZoomLevel;                                        // 0x0470(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveFloat*                                 ViewRatioCurve;                                           // 0x0478(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bRectangleViewMode : 1;                                   // 0x0480(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UFont*                                       GridFont;                                                 // 0x0488(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       FontTypeFace;                                             // 0x0490(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FString>                             GridTextHorizentalArray;                                  // 0x0498(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FString>                             GridTextVerticalArray;                                    // 0x04A8(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FLinearColor                                ColorLargeGrid;                                           // 0x04B8(0x0010) (CPF_Edit, CPF_IsPlainOldData)
	struct FLinearColor                                ColorSmallGrid;                                           // 0x04C8(0x0010) (CPF_Edit, CPF_IsPlainOldData)
	struct FLinearColor                                ColorText;                                                // 0x04D8(0x0010) (CPF_Edit, CPF_IsPlainOldData)
	struct FLinearColor                                ColorSafetyZone;                                          // 0x04E8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	float                                              ThicknessLargeGrid;                                       // 0x04F8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ThicknessSmallGrid;                                       // 0x04FC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                ColorPoisonGasWarning;                                    // 0x0500(0x0010) (CPF_Edit, CPF_IsPlainOldData)
	unsigned char                                      bDrawGridLine : 1;                                        // 0x0510(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bDrawGridText : 1;                                        // 0x0511(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bDrawNextPlayzoneGuideLine : 1;                           // 0x0512(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bUseZOrderSort : 1;                                       // 0x0513(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bUseTeamMemberColor : 1;                                  // 0x0514(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bRemoveDeadIcon : 1;                                      // 0x0515(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                DefaultIconNameTagColor;                                  // 0x0518(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0528(0x0010) MISSED OFFSET
	class UMaterialInstanceDynamic*                    MatInst;                                                  // 0x0538(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x18];                                      // 0x0540(0x0018) MISSED OFFSET
	class UMapMarkerBaseWidget*                        MyMapMarker;                                              // 0x0558(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	TMap<class ATeam*, class UMapMarkerBaseWidget*>    TeamPlayerMarkers;                                        // 0x0560(0x0050) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient)
	class UMapCharacterIconBaseWidget*                 MyCharacterMapIcon;                                       // 0x05B0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	TMap<class AActor*, class UMapCharacterIconBaseWidget*> OtherCharacterMapIcons;                                   // 0x05B8(0x0050) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient)
	TMap<class ACarePackageItem*, class UMapCarePackageItemIconBaseWidget*> MapCarePackageItemIcons;                                  // 0x0608(0x0050) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient)
	struct FTimerHandle                                ReplicatedCharacterListUpdateTimer;                       // 0x0658(0x0008) (CPF_Transient)
	struct FTimerHandle                                ReplicatedCarePackageItemListUpdateTimer;                 // 0x0660(0x0008) (CPF_Transient)
	TArray<class ATslCharacter*>                       ReplicatedCharacterList;                                  // 0x0668(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	TArray<class ACarePackageItem*>                    ReplicatedCarePackageItemList;                            // 0x0678(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	TArray<class ATeam*>                               ShowMarkerOnwerList;                                      // 0x0688(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	unsigned char                                      UnknownData03[0x28];                                      // 0x0698(0x0028) MISSED OFFSET
	class UMaterialInstance*                           MyOrTeamIconMaterial;                                     // 0x06C0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInstance*                           OtherCharacterIconMaterial;                               // 0x06C8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FScriptMulticastDelegate                    CloseMySelf;                                              // 0x06D0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnHideOwner;                                              // 0x06E0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.MapGridWidget");
		return ptr;
	}


	void UpdateZoomAndWidgetSize(float Zoom, const class Vector2D& WidgetSize);
	void UpdateWidgetSize_UC(const class Vector2D& WidgetSize);
	void UpdateReplicatedCharacterList();
	void UpdateReplicatedCarePackageItemList();
	void UpdateRectangleViewByWidgetSize(const class Vector2D& WidgetSize);
	void UpdateRectangleView();
	class Vector2D UCtoMC(const class Vector2D& UC);
	void SetZoomLevel(float NewZoomLevel);
	void SetImageBrush(class UMaterialInstanceDynamic* NewMatInst);
	void SetCharacterIconPositionAndRotation_UC(const class Vector2D& Pos_UC, float Angle);
	void SetCenter_MC(const class Vector2D& Center);
	void OnMapIconClicked(class UMapCharacterIconBaseWidget* MapIconWidget);
	void OnMapCarePackageItemIconClicked(class UMapCarePackageItemIconBaseWidget* MapIconWidget);
	void OnGotoTimelineDone();
	class Vector2D MCtoUC(const class Vector2D& MapCoord);
	bool IsMouseInMarker();
	float GetZoomLevel();
	class Vector2D GetWidgetSize();
	class Vector2D GetWidgetPosition();
	class Vector2D GetScreenOffset();
	void GetMapImageWigetSizeAndImageOffset(class Vector2D* WidgetSize, class Vector2D* ImageOffset);
	class Vector2D GetLocalMousePosition();
	struct FString GetCharacterGridVertical();
	struct FString GetCharacterGridTextHorizental();
	class Vector2D GetAlignment();
	void DrawRedZone_UC(const class Vector2D& Center_UC, float Radius_UC);
	void DrawMarker_UC(const class Vector2D& MarkerCenter_UC);
	void CursorUCtoCenterMC(const class Vector2D& UC, class Vector2D* Offest_MC, bool* bUpdate);
	class Vector2D ClampPositionByWidgetSize_UC(const class Vector2D& Positon, const class Vector2D& WidgetSize);
	class Vector2D ClampPosition_UC(const class Vector2D& Positon);
	void AddCenter_UC(const class Vector2D& Offset_UC);
};


// Class TslGame.MapMarkerBaseWidget
// 0x0060 (0x0328 - 0x02C8)
class UMapMarkerBaseWidget : public UUmgBaseWidget
{
public:
	struct FUmgWidgetBinder_Image                      MarkerImageBinder;                                        // 0x02C8(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	struct FName                                       MarkerColorParmName;                                      // 0x02F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FUmgWidgetBinder_Animation                  MarkerEmergingAnimBinder;                                 // 0x02F8(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0318(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.MapMarkerBaseWidget");
		return ptr;
	}

};


// Class TslGame.MiniMapBaseWidget
// 0x0028 (0x02F0 - 0x02C8)
class UMiniMapBaseWidget : public UUmgBaseWidget
{
public:
	struct FUmgWidgetBinder_UserWidget                 MapWidgetBinder;                                          // 0x02C8(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x8];                                       // 0x02E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.MiniMapBaseWidget");
		return ptr;
	}

};


// Class TslGame.NetworkProblemBaseWidget
// 0x0028 (0x02F0 - 0x02C8)
class UNetworkProblemBaseWidget : public UUmgBaseWidget
{
public:
	int                                                CheckElapsedTime;                                         // 0x02C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FUmgWidgetBinder_Animation                  IconBlinkingAnimBinder;                                   // 0x02D0(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.NetworkProblemBaseWidget");
		return ptr;
	}

};


// Class TslGame.ReplayProblemBaseWidget
// 0x0080 (0x0348 - 0x02C8)
class UReplayProblemBaseWidget : public UUmgBaseWidget
{
public:
	int                                                CheckElapsedTime;                                         // 0x02C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FUmgWidgetBinder_Animation                  IconBlinkingAnimBinder;                                   // 0x02D0(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FUmgWidgetBinder_TextBlock                  DisplayTextBlock;                                         // 0x02F0(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FText                                       DefaultFailureText;                                       // 0x0310(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FText                                       KillcamUnusualMovementText;                               // 0x0328(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0340(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ReplayProblemBaseWidget");
		return ptr;
	}

};


// Class TslGame.RiderIconWidget
// 0x0028 (0x02F0 - 0x02C8)
class URiderIconWidget : public UUmgBaseWidget
{
public:
	struct FUmgWidgetBinder_Image                      RiderIcon;                                                // 0x02C8(0x0028) (CPF_Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.RiderIconWidget");
		return ptr;
	}

};


// Class TslGame.TeamMarkWidget
// 0x0260 (0x0528 - 0x02C8)
class UTeamMarkWidget : public UUmgBaseWidget
{
public:
	class ATeam*                                       TeamMember;                                               // 0x02C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              OffsetZ;                                                  // 0x02D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DeadMarkInvisibleTime;                                    // 0x02D4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DeadMarkInvisibleDistance;                                // 0x02D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector2D                                     OffScreenEdgeSize;                                        // 0x02DC(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	class Vector2D                                     OffScreenImageEdgeSize;                                   // 0x02E4(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	float                                              AnimationMaxPercent;                                      // 0x02EC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AnimationMaxDistance;                                     // 0x02F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FUmgWidgetBinder_Gerneral                   StateSwitcherBinder;                                      // 0x02F8(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_TextBlock                  PlayerNameTextBinder;                                     // 0x0318(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      OutLineImageBinder;                                       // 0x0338(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      DirectionImageBinder;                                     // 0x0360(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      NormalImageBinder;                                        // 0x0388(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      GroggyImageBinder;                                        // 0x03B0(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      DeadImageBinder;                                          // 0x03D8(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      VehicleImageBinder;                                       // 0x0400(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      ParachuteImageBinder;                                     // 0x0428(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      QuitterImageBinder;                                       // 0x0450(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_Animation                  OpacityByRadiusPercentAnim;                               // 0x0478(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_Animation                  ScaleByDistanceAnim;                                      // 0x0498(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_Border                     ImageMarkBorderBinder;                                    // 0x04B8(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	float                                              AmingImageAlpha;                                          // 0x04D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ScopingImageAlpha;                                        // 0x04DC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AmingTextAlpha;                                           // 0x04E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ScopingTextAlpha;                                         // 0x04E4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTexture*                                    OutScreenImage;                                           // 0x04E8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UTexture*                                    GroggyImage;                                              // 0x04F0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UTexture*                                    VehicleImage;                                             // 0x04F8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UTexture*                                    ParachuteImage;                                           // 0x0500(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0508(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TeamMarkWidget");
		return ptr;
	}


	void InitializeTeamMarkGrid();
};


// Class TslGame.TeamOverallKillCountBaseWidget
// 0x0028 (0x02F0 - 0x02C8)
class UTeamOverallKillCountBaseWidget : public UUmgBaseWidget
{
public:
	struct FUmgWidgetBinder_TextBlock                  TeamOverallKillCountTextBinder;                           // 0x02C8(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	int                                                LastTeamOverallKillCount;                                 // 0x02E8(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      bLastWantShow : 1;                                        // 0x02EC(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TeamOverallKillCountBaseWidget");
		return ptr;
	}


	int GetLastTeamOverallKillCount();
};


// Class TslGame.TslAdaptiveCrosshairWidget
// 0x03C8 (0x0690 - 0x02C8)
class UTslAdaptiveCrosshairWidget : public UUmgBaseWidget
{
public:
	unsigned char                                      UnknownData00[0x1];                                       // 0x02C8(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.TslAdaptiveCrosshairWidget.WeaponClass
	unsigned char                                      bIsShowWidget : 1;                                        // 0x02C9(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FColorBlindColorSet                         ColorBlindColors;                                         // 0x02D0(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      AdaptiveCrosshair_Binder;                                 // 0x02E0(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_CanvasPanel                CanvasBase_Binder;                                        // 0x0308(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_CanvasPanel                CenterCenter_Binder;                                      // 0x0328(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_CanvasPanel                CenterCrosshair_Binder;                                   // 0x0348(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_CanvasPanel                CenterD_Binder;                                           // 0x0368(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      CenterDOT_Binder;                                         // 0x0388(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_CanvasPanel                CenterL_Binder;                                           // 0x03B0(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_CanvasPanel                CenterR_Binder;                                           // 0x03D0(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_CanvasPanel                CenterU_Binder;                                           // 0x03F0(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      Pistol_C_Binder;                                          // 0x0410(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      Pistol_C_Gradient_Binder;                                 // 0x0438(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      Pistol_L_Binder;                                          // 0x0460(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      Pistol_R_Binder;                                          // 0x0488(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      Rifle_D_Binder;                                           // 0x04B0(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      Rifle_D_Arrow_Binder;                                     // 0x04D8(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      Rifle_L_Binder;                                           // 0x0500(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      Rifle_L_Arrow_Binder;                                     // 0x0528(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      Rifle_R_Binder;                                           // 0x0550(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      Rifle_R_Arrow_Binder;                                     // 0x0578(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      Rifle_U_Binder;                                           // 0x05A0(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      Rifle_U_Arrow_Binder;                                     // 0x05C8(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      Shotgun_D_Binder;                                         // 0x05F0(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      Shotgun_L_Binder;                                         // 0x0618(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      Shotgun_R_Binder;                                         // 0x0640(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      Shotgun_U_Binder;                                         // 0x0668(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslAdaptiveCrosshairWidget");
		return ptr;
	}


	void SetShowCrosshairWidget(bool bShow);
	void SetCenterCrosshairVisibility(bool bVisible);
	void SetCenterCrosshairDeviation(float InDeviation);
	void SetCenterCrosshairClass(bool bHasWeapon);
	void SetAdaptiveCrosshairVisibility(bool bVisible);
	void SetAdaptiveCrosshairPosition(const class Vector2D& ScreenPosition, float Distance);
	void HandleGameUserSettingApplied();
	void DecideAdaptiveCrosshairColor();
};


// Class TslGame.TslAlivePlayerInfoWidget
// 0x00F8 (0x03C0 - 0x02C8)
class UTslAlivePlayerInfoWidget : public UUmgBaseWidget
{
public:
	class ATslGameState*                               CachedTslGS;                                              // 0x02C8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FUmgWidgetBinder_Border                     ColorOverlay_Binder;                                      // 0x02D0(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_Animation                  Warning_Binder;                                           // 0x02F0(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_Animation                  Increasing_Binder;                                        // 0x0310(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_Animation                  Decreasing_Binder;                                        // 0x0330(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_Animation                  Default_Binder;                                           // 0x0350(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_TextBlock                  AdditionalInfo_Binder;                                    // 0x0370(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_TextBlock                  SurvivorCount_Binder;                                     // 0x0390(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      bIsReplaying : 1;                                         // 0x03B0(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsHidden : 1;                                            // 0x03B1(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                CurrentCount;                                             // 0x03B4(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                DisplayCount;                                             // 0x03B8(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                WhileAnimCount;                                           // 0x03BC(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslAlivePlayerInfoWidget");
		return ptr;
	}

};


// Class TslGame.AliveHumansInfoWidget
// 0x0000 (0x03C0 - 0x03C0)
class UAliveHumansInfoWidget : public UTslAlivePlayerInfoWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.AliveHumansInfoWidget");
		return ptr;
	}

};


// Class TslGame.AliveZombiesInfoWidget
// 0x0000 (0x03C0 - 0x03C0)
class UAliveZombiesInfoWidget : public UTslAlivePlayerInfoWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.AliveZombiesInfoWidget");
		return ptr;
	}

};


// Class TslGame.TslBaseOptionWidget
// 0x0000 (0x02C8 - 0x02C8)
class UTslBaseOptionWidget : public UUmgBaseWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslBaseOptionWidget");
		return ptr;
	}


	void OnReset();
	void OnDefault();
	void OnApply();
	bool IsKeyUp();
	bool IsEnableApply();
	bool IsChanged();
};


// Class TslGame.TslKeyDisplayWidget
// 0x0060 (0x0328 - 0x02C8)
class UTslKeyDisplayWidget : public UTslBaseOptionWidget
{
public:
	struct FScriptMulticastDelegate                    OnKeyInputed;                                             // 0x02C8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	TArray<class UTslKeyReceiverWidget*>               KeyReceiverWidgets;                                       // 0x02D8(0x0010) (CPF_ExportObject, CPF_ZeroConstructor)
	TArray<struct FUmgWidgetBinder_UserWidget>         KeyReceiverWidgetBinders;                                 // 0x02E8(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FName                                       InputName;                                                // 0x02F8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       CategoryName;                                             // 0x0300(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       DisplayText;                                              // 0x0308(0x0018) (CPF_BlueprintVisible)
	unsigned char                                      bGamepad : 1;                                             // 0x0320(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bAxisInput : 1;                                           // 0x0321(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AxisScale;                                                // 0x0324(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslKeyDisplayWidget");
		return ptr;
	}


	void TransferInputEvent(const struct FTslInputKey& TslInputKey);
	void SetupKeyDisplayWidget(const struct FName& InInputName, const struct FText& InDisplayName, const struct FName& InCategoryName, bool InbAxisInput, float InAxisScale, bool InbGamepad);
	void InitializeKeyDisplayWidget(bool bDefault);
	void ApplyKey();
};


// Class TslGame.TslKeyOptionWidget
// 0x0068 (0x0330 - 0x02C8)
class UTslKeyOptionWidget : public UTslBaseOptionWidget
{
public:
	struct FUmgWidgetBinder_Gerneral                   ScrollBox_Binder;                                         // 0x02C8(0x0020) (CPF_Edit)
	TArray<class UTslKeySettingWidget*>                KeySettingWidgets;                                        // 0x02E8(0x0010) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor)
	class UClass*                                      MouseSettingWidgetClass;                                  // 0x02F8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UTslBaseOptionWidget*                        MouseSettingWidget;                                       // 0x0300(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UClass*                                      KeySettingWidgetClass;                                    // 0x0308(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      GamePadSettingWidgetClass;                                // 0x0310(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UTslBaseOptionWidget*                        GamePadSettingWidget;                                     // 0x0318(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	TArray<struct FName>                               CategoryOrder;                                            // 0x0320(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslKeyOptionWidget");
		return ptr;
	}


	void OnKeyChanged(class UTslKeyDisplayWidget* InKeyDisplayWidget, const struct FTslInputKey& InInputedKey);
	void InitializeKeyAndMouseSetting();
};


// Class TslGame.TslKeySettingWidget
// 0x0068 (0x0330 - 0x02C8)
class UTslKeySettingWidget : public UTslBaseOptionWidget
{
public:
	struct FScriptMulticastDelegate                    OnKeyChanged;                                             // 0x02C8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	class UClass*                                      KeyDisplayWidgetClass;                                    // 0x02D8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FUmgWidgetBinder_Gerneral                   KeyScrollBoxBinder;                                       // 0x02E0(0x0020) (CPF_Edit)
	TArray<class UTslKeyDisplayWidget*>                KeyDisplayWidgets;                                        // 0x0300(0x0010) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor)
	struct FText                                       DisplayText;                                              // 0x0310(0x0018) (CPF_BlueprintVisible)
	struct FName                                       CategoryName;                                             // 0x0328(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslKeySettingWidget");
		return ptr;
	}


	void TransferInputEvent(class UTslKeyDisplayWidget* KeyDisplayWidget, const struct FTslInputKey& TslInputKey);
	void StartupKeySettingWidget(const struct FName& InCategoryName, const struct FText& InDisplayText);
	void SetToDefault();
	void InitializeKeySettingWidget();
};


// Class TslGame.TslBoostGaugeWidget
// 0x0108 (0x03D0 - 0x02C8)
class UTslBoostGaugeWidget : public UUmgBaseWidget
{
public:
	class UMaterialInstanceDynamic*                    MID_Gauge0_21;                                            // 0x02C8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    MID_Gauge20_61;                                           // 0x02D0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    MID_Gauge60_91;                                           // 0x02D8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    MID_Gauge90_101;                                          // 0x02E0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FUmgWidgetBinder_Animation                  VanishingAnimBinder;                                      // 0x02E8(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_Animation                  WarningAnimBinder;                                        // 0x0308(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_Animation                  EmergingAnimBinder;                                       // 0x0328(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_Gerneral                   Boost0_20ImageBinder;                                     // 0x0348(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_Gerneral                   Boost20_60ImageBinder;                                    // 0x0368(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_Gerneral                   Boost60_90ImageBinder;                                    // 0x0388(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_Gerneral                   Boost90_100ImageBinder;                                   // 0x03A8(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	float                                              DisplayingBoost;                                          // 0x03C8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsWarning : 1;                                           // 0x03CC(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsVanished : 1;                                          // 0x03CD(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslBoostGaugeWidget");
		return ptr;
	}

};


// Class TslGame.TslBreatheBarWidget
// 0x0140 (0x0408 - 0x02C8)
class UTslBreatheBarWidget : public UUmgBaseWidget
{
public:
	class ATslHUD*                                     TslHudCached;                                             // 0x02C8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ATslPlayerController*                        TslPlayerControllerCached;                                // 0x02D0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FUmgWidgetBinder_Gerneral                   BreathGaugeLayer_Binder;                                  // 0x02D8(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      BreathGaugeBG_Binder;                                     // 0x02F8(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_Animation                  Breathing_Binder;                                         // 0x0320(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_Animation                  Drowning_Binder;                                          // 0x0340(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_Animation                  Vanishing_Binder;                                         // 0x0360(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_Animation                  Emerging_Binder;                                          // 0x0380(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_Animation                  Cooldown_Binder;                                          // 0x03A0(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	float                                              BreathRatioDisplay;                                       // 0x03C0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              BreathRatio;                                              // 0x03C4(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LerpTolerance;                                            // 0x03C8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              LerpTime;                                                 // 0x03CC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FLinearColor                                BreathImgColor_Less_101;                                  // 0x03D0(0x0010) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FLinearColor                                BreathImgColor_Less_51;                                   // 0x03E0(0x0010) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FLinearColor                                BreathImgColor_Less_11;                                   // 0x03F0(0x0010) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bIsVanishing : 1;                                         // 0x0400(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bEventBound : 1;                                          // 0x0401(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsCooldown : 1;                                          // 0x0402(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslBreatheBarWidget");
		return ptr;
	}


	void OnStartBuff(const struct FName& BuffName, bool bStart);
};


// Class TslGame.TslBuffIconListWidget
// 0x00A0 (0x0368 - 0x02C8)
class UTslBuffIconListWidget : public UUmgBaseWidget
{
public:
	struct FUmgWidgetBinder_SizeBox                    RunBuffIconBlock_Binder;                                  // 0x02C8(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      RunBuffIcon_Binder;                                       // 0x02E8(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_SizeBox                    HealBuffIconBlock_Binder;                                 // 0x0310(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      HealBuffIcon_Binder;                                      // 0x0330(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
	class UTexture*                                    HealBuffIconTex;                                          // 0x0358(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UTexture*                                    RunBuffIconTex;                                           // 0x0360(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslBuffIconListWidget");
		return ptr;
	}


	void UpdateRunBuffIconVisibility(float InBoostPercentage);
	void UpdateRunBuffIcon(float InBoostPercentage);
	void UpdateHealBuffIconVisibility(float InBoostPercentage);
	void UpdateHealBuffIcon(float InBoostPercentage);
	struct FLinearColor GetRunBuffIconOpacity(float InBoostPercentage);
	struct FLinearColor GetHealBuffIconOpacity(float InBoostPercentage);
};


// Class TslGame.TslCastableItemIconHudWidget
// 0x0000 (0x02C8 - 0x02C8)
class UTslCastableItemIconHudWidget : public UUmgBaseWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslCastableItemIconHudWidget");
		return ptr;
	}

};


// Class TslGame.TslCastableItemIconWidget
// 0x00B8 (0x0380 - 0x02C8)
class UTslCastableItemIconWidget : public UUmgBaseWidget
{
public:
	unsigned char                                      UnknownData00[0x1];                                       // 0x02C8(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.TslCastableItemIconWidget.CastableItemType
	class UTexture*                                    ItemIcon;                                                 // 0x02D0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ItemIconRatio;                                            // 0x02D8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                NormalColor;                                              // 0x02DC(0x0010) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FLinearColor                                NoItemColor;                                              // 0x02EC(0x0010) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FUmgWidgetBinder_Gerneral                   Icon_Binder;                                              // 0x0300(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_TextBlock                  ItemCountText_Binder;                                     // 0x0320(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_Border                     WidgetBorder_Binder;                                      // 0x0340(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_SizeBox                    IconSizeBox_Binder;                                       // 0x0360(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslCastableItemIconWidget");
		return ptr;
	}


	int GetCastableItemCount();
};


// Class TslGame.TslCompassMarkerWidget
// 0x0038 (0x0300 - 0x02C8)
class UTslCompassMarkerWidget : public UUmgBaseWidget
{
public:
	struct FUmgWidgetBinder_Image                      CompassMarkerImageBinder;                                 // 0x02C8(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
	int                                                MarkerNumber;                                             // 0x02F0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              XViewSize;                                                // 0x02F4(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bShow : 1;                                                // 0x02F8(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslCompassMarkerWidget");
		return ptr;
	}

};


// Class TslGame.TslCompassWidget
// 0x0160 (0x0428 - 0x02C8)
class UTslCompassWidget : public UUmgBaseWidget
{
public:
	class UMaterialInterface*                          MI_Compass;                                               // 0x02C8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    MID_Compass;                                              // 0x02D0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FUmgWidgetBinder_Image                      CompassImageBinder;                                       // 0x02D8(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      MarkerImageBinder;                                        // 0x0300(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_Overlay                    MyOverlayBinder;                                          // 0x0328(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_Overlay                    TeamOverlayBinder;                                        // 0x0348(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_TextBlock                  DirectionTextBlockBinder;                                 // 0x0368(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	class UClass*                                      CompassMarkerWidgetClass;                                 // 0x0388(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UTslCompassMarkerWidget*                     MyCompassMarkerWidget;                                    // 0x0390(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	TArray<class UTslCompassMarkerWidget*>             TeamMarkerWidgetOfTeam;                                   // 0x0398(0x0010) (CPF_ExportObject, CPF_ZeroConstructor)
	float                                              DivisionLevel;                                            // 0x03A8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Offset;                                                   // 0x03AC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bClockwise : 1;                                           // 0x03B0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TMap<int, struct FDirectionTextData>               OverrideDirectionTextDatas;                               // 0x03B8(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FLinearColor                                DefaultDirectionTextColor;                                // 0x0408(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	int                                                BearingUnit;                                              // 0x0418(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Width;                                                    // 0x041C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsInitilzed : 1;                                         // 0x0420(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CompassYaw;                                               // 0x0424(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslCompassWidget");
		return ptr;
	}

};


// Class TslGame.TslConfirmationDialogWidget
// 0x00E8 (0x03B0 - 0x02C8)
class UTslConfirmationDialogWidget : public UUmgBaseWidget
{
public:
	unsigned char                                      UnknownData00[0xE8];                                      // 0x02C8(0x00E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslConfirmationDialogWidget");
		return ptr;
	}


	void OnButtonClick();
};


// Class TslGame.TslGroggyCircleWidget
// 0x0060 (0x0328 - 0x02C8)
class UTslGroggyCircleWidget : public UUmgBaseWidget
{
public:
	class UMaterialInstanceDynamic*                    MID_ProgressCircle;                                       // 0x02C8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInterface*                          MI_ProgressCircle;                                        // 0x02D0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FUmgWidgetBinder_Image                      CircleImageBinder;                                        // 0x02D8(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      CrossImageBinder;                                         // 0x0300(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslGroggyCircleWidget");
		return ptr;
	}

};


// Class TslGame.TslHealItemSelectorWidget
// 0x0068 (0x0330 - 0x02C8)
class UTslHealItemSelectorWidget : public UUmgBaseWidget
{
public:
	class AInventory*                                  InventoryCached;                                          // 0x02C8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FTimerHandle                                HealItemSelectorTimer;                                    // 0x02D0(0x0008)
	struct FTimerHandle                                WidgetHideTimer;                                          // 0x02D8(0x0008)
	unsigned char                                      UnknownData00[0x1];                                       // 0x02E0(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.TslHealItemSelectorWidget.LastSelectedHealItemType
	TArray<struct FHealItemSelectorData>               HealItemDatas;                                            // 0x02E8(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      ItemIcon_Binder;                                          // 0x02F8(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
	class Vector2D                                     InitialPosition;                                          // 0x0320(0x0008) (CPF_Edit, CPF_IsPlainOldData)
	class Vector2D                                     OffsetWhenTpsWeaponIconEnabled;                           // 0x0328(0x0008) (CPF_Edit, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslHealItemSelectorWidget");
		return ptr;
	}


	void OnTapAction();
	void OnHoldAction();
	void OnHideWidget();
	void NotifyHealItemSelectorInput(bool bPressed);
};


// Class TslGame.TslInventoryCapacityWidget
// 0x0010 (0x02D8 - 0x02C8)
class UTslInventoryCapacityWidget : public UUmgBaseWidget
{
public:
	float                                              GameMaxSpace;                                             // 0x02C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class AInventory*                                  InventoryCached;                                          // 0x02D0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslInventoryCapacityWidget");
		return ptr;
	}


	class AInventory* GetInventoryCached();
	void GetFeedbackParamsFromVicinityItem(float CurrMaxSpace, float CurrSpace, float ItemSpace, float* OutFeedbackStart, float* OutFeedbackEnd, bool* OutIsPositive);
	void GetFeedbackParamsFromVicinityEquipment(float CurrMaxSpace, float CurrSpace, class UEquipableItem* EquipableItem, float* OutFeedbackStart, float* OutFeedbackEnd, bool* OutIsPositive);
	void GetFeedbackParamsFromInventoryItem(float CurrMaxSpace, float CurrSpace, float ItemSpace, float* OutFeedbackStart, float* OutFeedbackEnd, bool* OutIsPositive);
	void GetFeedbackParamsFromEquipmentSlot(float CurrMaxSpace, float CurrSpace, class UEquipableItem* EquipableItem, float* OutFeedbackStart, float* OutFeedbackEnd, bool* OutIsPositive);
	void GetCapacityParams(float CurrMaxSpace, float CurrSpace, float* OutCurrMaxSpaceStart, float* OutCurrSpaceStart);
};


// Class TslGame.TslKeyGuideWidget
// 0x0078 (0x0340 - 0x02C8)
class UTslKeyGuideWidget : public UUmgBaseWidget
{
public:
	struct FTimerHandle                                TimerHandle_HideWidget;                                   // 0x02C8(0x0008)
	int                                                XButtonImageIndex;                                        // 0x02D0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                BButtonImageIndex;                                        // 0x02D4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FUmgWidgetBinder_WidgetSwitcher             ButtonImageSwitcher_Binder;                               // 0x02D8(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      ProgressBarImage_Binder;                                  // 0x02F8(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_TextBlock                  KeyGuideText_Binder;                                      // 0x0320(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslKeyGuideWidget");
		return ptr;
	}


	void ShowKeyGuideWidget();
	void HideKeyGuideWidget();
};


// Class TslGame.TslKeyReceiverWidget
// 0x00A0 (0x0368 - 0x02C8)
class UTslKeyReceiverWidget : public UUmgBaseWidget
{
public:
	struct FScriptMulticastDelegate                    OnKeyReceived;                                            // 0x02C8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FTslInputKey                                OriginKey;                                                // 0x02D8(0x0020) (CPF_BlueprintVisible)
	struct FKey                                        FirstDownKey;                                             // 0x02F8(0x0018) (CPF_BlueprintVisible)
	struct FTslInputKey                                CurrentDownKey;                                           // 0x0310(0x0020) (CPF_BlueprintVisible)
	struct FTslInputKey                                LastDownedKey;                                            // 0x0330(0x0020) (CPF_BlueprintVisible)
	unsigned char                                      bFocused : 1;                                             // 0x0350(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bEnableInput : 1;                                         // 0x0351(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsKeyUp : 1;                                             // 0x0352(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bAxisInput : 1;                                           // 0x0353(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AxisScale;                                                // 0x0354(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FKey>                                MouseButtons;                                             // 0x0358(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslKeyReceiverWidget");
		return ptr;
	}


	void UpdateKeyUp(const struct FKey& InKey);
	void UpdateKeyDown(const struct FKey& InKey);
	void KeyUp(const struct FKey& InKey);
	void KeyDown(const struct FKey& InKey);
	bool IsInputKeyDown();
	struct FText GetLastDownedKeyName();
};


// Class TslGame.TslKillMessageListWidget
// 0x0020 (0x02E8 - 0x02C8)
class UTslKillMessageListWidget : public UUmgBaseWidget
{
public:
	class UClass*                                      KillMessageWidgetClass;                                   // 0x02C8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<class UTslKillMessageWidget*>               KillMessageWidgetArray;                                   // 0x02D0(0x0010) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	float                                              FadeoutStartTime;                                         // 0x02E0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslKillMessageListWidget");
		return ptr;
	}


	void UpdateMessageListWidget();
	void OnVanishAnimationFinished(class UWidget* Widget);
	void EnqueueDeathMessage(const struct FDeathMessage& DeathMessage);
	void DequeueDeathMessage(class UWidget* Widget);
};


// Class TslGame.TslKillMessageWidget
// 0x0050 (0x0318 - 0x02C8)
class UTslKillMessageWidget : public UUmgBaseWidget
{
public:
	struct FScriptMulticastDelegate                    OnVanishAnimationFinished;                                // 0x02C8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference)
	struct FUmgWidgetBinder_Animation                  Vanish_Binder;                                            // 0x02D8(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	TArray<struct FCauseOfDeathData>                   CauseOfDeathDatas;                                        // 0x02F8(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<struct FConditionOfDeathData>               ConditionOfDeathDatas;                                    // 0x0308(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslKillMessageWidget");
		return ptr;
	}


	void SetVanishTimer(float TimeDelay);
	void SetDeathMessage(const struct FDeathMessage& InDeathMessage);
	void PlayVanishAnimation();
	void GetTextureFromDamageTypeCategory(class UTexture** OutTexture, float* OutRatio);
	void GetTextureFromConditionOfDeathCategory(class UTexture** OutTexture, float* OutRatio);
};


// Class TslGame.TslLobbyNameTagWidget
// 0x00D0 (0x0398 - 0x02C8)
class UTslLobbyNameTagWidget : public UUmgBaseWidget
{
public:
	struct FUmgWidgetBinder_TextBlock                  NickName_Binder;                                          // 0x02C8(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      HostImage_Binder;                                         // 0x02E8(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      ReadyImage_Binder;                                        // 0x0310(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      VoiceImage_Binder;                                        // 0x0338(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_Border                     BackgroundBorder_Binder;                                  // 0x0360(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      bTestAlwaysShowIcons : 1;                                 // 0x0380(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                SlotIndex;                                                // 0x0384(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     NameTagOffsetTranslation;                                 // 0x0388(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	unsigned char                                      bIsHost : 1;                                              // 0x0394(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsReady : 1;                                             // 0x0395(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsSpeaking : 1;                                          // 0x0396(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslLobbyNameTagWidget");
		return ptr;
	}


	void UpdateWidgetsVisibilities();
	void SetSpeaking(bool InbSpeaking);
	void SetReady(bool InbReady);
	void SetNickName(const struct FString& InNickName);
	void SetHost(bool InbHost);
	void SetBinding();
	void OnVoiceChatUpdated(const struct FString& InUniqueId, bool InbTeamChannel, bool InbSpeaking, float InEnergy);
	bool IsAlone();
	void InitWidget(const struct FString& InNickName);
};


// Class TslGame.TslObserverPlayerInfoWidget
// 0x0198 (0x0460 - 0x02C8)
class UTslObserverPlayerInfoWidget : public UUmgBaseWidget
{
public:
	TArray<struct FLinearColor>                        TeamColorsCached;                                         // 0x02C8(0x0010) (CPF_ZeroConstructor)
	class UTexture*                                    UnArmedIcon;                                              // 0x02D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              UnArmedIconRatio;                                         // 0x02E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class ATslCharacter*                               CachedCharacter;                                          // 0x02E8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                OldAmmoCount;                                             // 0x02F0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FUmgWidgetBinder_Animation                  AmmoIncreasingAnimBinder;                                 // 0x02F8(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_Animation                  AmmoDecreasingAnimBinder;                                 // 0x0318(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_TextBlock                  UserNameText_Binder;                                      // 0x0338(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_TextBlock                  TeamNumberText_Binder;                                    // 0x0358(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_TextBlock                  AmmoCountText_Binder;                                     // 0x0378(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_TextBlock                  KillCountText_Binder;                                     // 0x0398(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_UserWidget                 LifeGaugeTemplateWidget_Binder;                           // 0x03B8(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      WeaponIconImageBinder;                                    // 0x03D8(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_SizeBox                    WeaponIconImageSizeBoxBinder;                             // 0x0400(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FName                                       WeaponIconTextureParmName;                                // 0x0420(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       WeaponIconColorParmName;                                  // 0x0428(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                WeaponColor_Armed;                                        // 0x0430(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FLinearColor                                WeaponColor_Normal;                                       // 0x0440(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FColorBlindColorSet                         WeaponColorSet_NoReload;                                  // 0x0450(0x0010) (CPF_Edit, CPF_BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslObserverPlayerInfoWidget");
		return ptr;
	}

};


// Class TslGame.TslTeamInfoListWidget
// 0x0038 (0x0300 - 0x02C8)
class UTslTeamInfoListWidget : public UUmgBaseWidget
{
public:
	TArray<class UTslTeamInfoWidget*>                  TeamInfoWidgetList;                                       // 0x02C8(0x0010) (CPF_ExportObject, CPF_ZeroConstructor)
	class UClass*                                      TeamInfoWidgetClass;                                      // 0x02D8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FUmgWidgetBinder_VerticalBox                VerticalBoxBinder;                                        // 0x02E0(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslTeamInfoListWidget");
		return ptr;
	}

};


// Class TslGame.TslTeamInfoWidget
// 0x0208 (0x04D0 - 0x02C8)
class UTslTeamInfoWidget : public UUmgBaseWidget
{
public:
	unsigned char                                      bBindVoiceChatEvent : 1;                                  // 0x02C8(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bSpeaking : 1;                                            // 0x02C9(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bMute : 1;                                                // 0x02CA(0x0001)
	unsigned char                                      bIsRestricted : 1;                                        // 0x02CA(0x0001)
	struct FUmgWidgetBinder_HorizontalBox              TeamHpAreaBinder;                                         // 0x02D0(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_Border                     TeamInfoAreaBinder;                                       // 0x02F0(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_Border                     InfoIconBorderBinder;                                     // 0x0310(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      InfoIconBinder;                                           // 0x0330(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      SpeakingImageBinder;                                      // 0x0358(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_Border                     MarkerIconBorderBinder;                                   // 0x0380(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      MarkerImageBinder;                                        // 0x03A0(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      BoostImageBinder;                                         // 0x03C8(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      bUdateTeamNameColor : 1;                                  // 0x03F0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FUmgWidgetBinder_TextBlock                  TeamNameBinder;                                           // 0x03F8(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_Animation                  OnSpeakAnimBinder;                                        // 0x0418(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_UserWidget                 HealthGaugeWidgetBinder;                                  // 0x0438(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FColorBlindColorSet                         ColorBlindColorSet;                                       // 0x0458(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      TeamMemberColorBinder;                                    // 0x0468(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FUmgWidgetBinder_Image                      PlayerIconImageBinder;                                    // 0x0490(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
	class ATeam*                                       Team;                                                     // 0x04B8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                QuitColor;                                                // 0x04C0(0x0010) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslTeamInfoWidget");
		return ptr;
	}


	void UpdateVoiceImage();
	void UpdateVivoxChat(const struct FString& UniqueId, bool bIsTeamChannel, bool InbSpeaking, float InMeterEnergy);
	void UpdateTeamMemberName();
	void UpdateTeamMemberIcon();
	void UpdateTeamMemberColor();
	void UpdateTeamMarkerBorder();
	void UpdateTeamMarker();
	void UpdateTeamInfoIcon();
	void UpdateTeamInfoArea();
	void UpdatePlayerIcon();
	void UpdateHealthGaugeAndVisibility();
	void UpdateBoostGauge();
	void SetTeam(class ATeam* InTeam);
	void OnVoiceChat(bool InbSpeaking, float InMeterEnergy);
	void OnParticipantRestrictionChanged(class ATeam* Team, const struct FString& UniqueId, bool bIsRestricted);
	void OnParticipantMuteChanged(class ATeam* Team, const struct FString& ParticipantId, const struct FString& ChannelId, bool bIsMuted);
	void OnNativeParticipantRestrictionChanged(const struct FString& UniqueId, bool bIsRestricted);
	void OnNativeParticipantMuteChanged(const struct FString& ParticipantId, const struct FString& ChannelId, bool bIsMuted);
	void DecideTeamNameColor();
	void BindVoiceChatIfNeed();
};


// Class TslGame.TslTeamWidget
// 0x0038 (0x0300 - 0x02C8)
class UTslTeamWidget : public UUmgBaseWidget
{
public:
	TArray<class UTeamMarkWidget*>                     TeamMarkWidgets;                                          // 0x02C8(0x0010) (CPF_ExportObject, CPF_ZeroConstructor)
	class UClass*                                      TeamMarkWidgetClass;                                      // 0x02D8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FUmgWidgetBinder_CanvasPanel                TeamMarkerLayerBinder;                                    // 0x02E0(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslTeamWidget");
		return ptr;
	}

};


// Class TslGame.TslXboxTeamManageInfoWidget
// 0x0028 (0x02F0 - 0x02C8)
class UTslXboxTeamManageInfoWidget : public UUmgBaseWidget
{
public:
	int                                                MemberNumber;                                             // 0x02C8(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       UserName;                                                 // 0x02D0(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsVoiceMute : 1;                                         // 0x02D8(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x17];                                      // 0x02D9(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslXboxTeamManageInfoWidget");
		return ptr;
	}


	void UpdateVoiceIcon(bool InbVoiceMute);
	void UpdateUserNameText(const struct FName& InUserName);
};


// Class TslGame.VehicleFuelBaseWidget
// 0x00C0 (0x0388 - 0x02C8)
class UVehicleFuelBaseWidget : public UUmgBaseWidget
{
public:
	struct FUmgWidgetBinder_Image                      OilGaugeImageBinder;                                      // 0x02C8(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FUmgWidgetBinder_Image                      OilGaugeBgImageBinder;                                    // 0x02F0(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FUmgWidgetBinder_Image                      OilArrowImageBinder;                                      // 0x0318(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FUmgWidgetBinder_Overlay                    GaugeBodyBinder;                                          // 0x0340(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FLinearColor                                NormalColor;                                              // 0x0360(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FLinearColor                                FuelEmptyColor;                                           // 0x0370(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FName                                       GaugePramName;                                            // 0x0380(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.VehicleFuelBaseWidget");
		return ptr;
	}

};


// Class TslGame.VehicleSeatInfoBaseWidget
// 0x0048 (0x0310 - 0x02C8)
class UVehicleSeatInfoBaseWidget : public UUmgBaseWidget
{
public:
	int                                                SeatIndex;                                                // 0x02C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       StateParamName;                                           // 0x02D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FUmgWidgetBinder_Image                      SeatImageBinder;                                          // 0x02D8(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	class APawn*                                       CachedVehiclePawn;                                        // 0x0300(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class UTslVehicleSeatComponent*                    CachedSeatComponent;                                      // 0x0308(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.VehicleSeatInfoBaseWidget");
		return ptr;
	}

};


// Class TslGame.VehicleStanceBaseWidget
// 0x0090 (0x0358 - 0x02C8)
class UVehicleStanceBaseWidget : public UUmgBaseWidget
{
public:
	struct FUmgWidgetBinder_VerticalBox                VehicleIconAreaBinder;                                    // 0x02C8(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FUmgWidgetBinder_TextBlock                  SpeedTextBinder;                                          // 0x02E8(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FUmgWidgetBinder_UserWidget                 LifeGaugeWidgetBinder;                                    // 0x0308(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FUmgWidgetBinder_UserWidget                 FuelGaugeWidgetBinder;                                    // 0x0328(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	class APawn*                                       CachedVehiclePawn;                                        // 0x0348(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class UUserWidget*                                 CachedVehicleIconWidget;                                  // 0x0350(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.VehicleStanceBaseWidget");
		return ptr;
	}

};


// Class TslGame.VehicleWheelInfoBaseWidget
// 0x0068 (0x0330 - 0x02C8)
class UVehicleWheelInfoBaseWidget : public UUmgBaseWidget
{
public:
	int                                                WheelIndex;                                               // 0x02C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FUmgWidgetBinder_Image                      WheelImageBinder;                                         // 0x02D0(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FUmgWidgetBinder_Image                      PunctureImageBinder;                                      // 0x02F8(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	class ATslWheeledVehicle*                          CachedVehiclePawn;                                        // 0x0320(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class UTslWheeledVehicleMovement*                  CachedVehicleMovement;                                    // 0x0328(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.VehicleWheelInfoBaseWidget");
		return ptr;
	}

};


// Class TslGame.VersionInfoBaseWidget
// 0x0050 (0x0318 - 0x02C8)
class UVersionInfoBaseWidget : public UUmgBaseWidget
{
public:
	struct FText                                       WithNickNameFormat;                                       // 0x02C8(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FText                                       WithOutNickNameFormat;                                    // 0x02E0(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FUmgWidgetBinder_TextBlock                  VersionInfoTextBinder;                                    // 0x02F8(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.VersionInfoBaseWidget");
		return ptr;
	}

};


// Class TslGame.WeaponSlotBaseWidget
// 0x03D0 (0x0698 - 0x02C8)
class UWeaponSlotBaseWidget : public UUmgBaseWidget
{
public:
	unsigned char                                      bListInSlot : 1;                                          // 0x02C8(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	int                                                WeaponIndex;                                              // 0x02CC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x02D0(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.WeaponSlotBaseWidget.ListSlotNoReloadGuideType
	unsigned char                                      bUseWeaponIcon : 1;                                       // 0x02D1(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_Image                      WeaponIconImageBinder;                                    // 0x02D8(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_SizeBox                    WeaponIconImageSizeBoxBinder;                             // 0x0300(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	float                                              WeaponIconImageSizeBoxHeight;                             // 0x0320(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       WeaponIconTextureParmName;                                // 0x0328(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       WeaponIconColorParmName;                                  // 0x0330(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                WeaponColor_Armed;                                        // 0x0338(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FLinearColor                                WeaponColor_Normal;                                       // 0x0348(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FLinearColor                                WeaponColor_Unarmed;                                      // 0x0358(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FUmgWidgetBinder_Animation                  ScaleUpAnimBinder;                                        // 0x0368(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_Animation                  ScaleDownAnimBinder;                                      // 0x0388(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FColorBlindColorSet                         WeaponColorSet_NoReload;                                  // 0x03A8(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bUseAmmoTextAndIcon : 1;                                  // 0x03B8(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_TextBlock                  WeaponHandsOnLoadedAmmoCountTextBinder;                   // 0x03C0(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_TextBlock                  WeaponListLoadedAmmoCountTextBinder;                      // 0x03E0(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_Animation                  AmmoIncreasingAnimBinder;                                 // 0x0400(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_Animation                  AmmoDecreasingAnimBinder;                                 // 0x0420(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_TextBlock                  WeaponHandsOnUnloadedAmmoCountTextBinder;                 // 0x0440(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_Animation                  UnloadedAmmoIncreasingAnimBinder;                         // 0x0460(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_Animation                  UnloadedAmmoDecreasingAnimBinder;                         // 0x0480(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_Image                      WeaponHandsOnAmmoIconBinder;                              // 0x04A0(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	struct FName                                       AmmoTexParamName;                                         // 0x04C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bUseWeaponFiringModeTextBinder : 1;                       // 0x04D0(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_TextBlock                  WeaponFiringModeTextBinder;                               // 0x04D8(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bZeroingDistancebUseText : 1;                             // 0x04F8(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_VerticalBox                ZeroingDistanceBlockBinder;                               // 0x0500(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_TextBlock                  ZeroingdistanceTextBinder;                                // 0x0520(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_Animation                  ZeroDistIncreasingAnimBinder;                             // 0x0540(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_Animation                  ZeroDistDecreasingAnimBinder;                             // 0x0560(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FText                                       ZeroingTextFormat;                                        // 0x0580(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FText                                       ZeroingNA;                                                // 0x0598(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_Border                     WeaponIconBackground;                                     // 0x05B0(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_Border                     AmmoAndFringModeBackground;                               // 0x05D0(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	float                                              SlotBackgroundAlpha_Armed;                                // 0x05F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SlotBackgroundAlpha_Unarmed;                              // 0x05F4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SlotBackgroundAlpha_Normal;                               // 0x05F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FUmgWidgetBinder_Animation                  FadeInWeaponSlotAnimBinder;                               // 0x0600(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_Animation                  FadeOutWeaponSlotAnimBinder;                              // 0x0620(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_Animation                  FadeInUnarmedWeaponSlotAminBinder;                        // 0x0640(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_Animation                  FadeOutUnarmedWeaponSlotAminBinder;                       // 0x0660(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0680(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.WeaponSlotBaseWidget");
		return ptr;
	}

};


// Class TslGame.WeaponSlotHudBaseWidget
// 0x0178 (0x0440 - 0x02C8)
class UWeaponSlotHudBaseWidget : public UUmgBaseWidget
{
public:
	struct FUmgWidgetBinder_UserWidget                 CurrentWeaponSlotWidgetBinder;                            // 0x02C8(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	TArray<struct FUmgWidgetBinder_UserWidget>         WeaponSlotWidgetBinderList;                               // 0x02E8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FUmgWidgetBinder_Border                     WeaponSlotListBorderBinder;                               // 0x02F8(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_Animation                  FadeInSlotListAminBinder;                                 // 0x0318(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FUmgWidgetBinder_Animation                  FadeOutSlotListAminBinder;                                // 0x0338(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	float                                              SlotOffsetMultiply;                                       // 0x0358(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SlotPadding;                                              // 0x035C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FSequence_Float                             MovingSequence;                                           // 0x0360(0x00A0) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0400(0x0030) MISSED OFFSET
	struct FTimerHandle                                FinishTimer;                                              // 0x0430(0x0008) (CPF_Transient)
	class AWeaponProcessor*                            CachedWeaponProcessor;                                    // 0x0438(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.WeaponSlotHudBaseWidget");
		return ptr;
	}


	void OnNotifyWeaponUnarm(bool bIsUnarmed);
	void OnNotifyWeaponChange(int WeaponIndex, float Duration);
	void OnNotifyWeaponArmed();
	void OnMovingStarted();
	void OnMovingFinished();
};


// Class TslGame.TslVehicleAnimInstance
// 0x0080 (0x0910 - 0x0890)
class UTslVehicleAnimInstance : public UVehicleAnimInstance
{
public:
	class Rotator                                      Rot_Steering_Right;                                       // 0x0894(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Rotator                                      Rot_Steering_Final;                                       // 0x08A0(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	class Rotator                                      Rot_Speed_Left;                                           // 0x08AC(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Rotator                                      Rot_Speed_Right;                                          // 0x08B8(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SpeedMax;                                                 // 0x08C4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Rotator                                      Rot_Speed_Final;                                          // 0x08C8(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	class Rotator                                      Rot_RPM_Left;                                             // 0x08D4(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Rotator                                      Rot_RPM_Right;                                            // 0x08E0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RPMMax;                                                   // 0x08EC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bTickIndicators : 1;                                      // 0x08F0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bUseAbsoluteSteeringRotation : 1;                         // 0x08F1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Rotator                                      Rot_RPM_Final;                                            // 0x08F4(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	class ATslWheeledVehicle*                          VehicleRef;                                               // 0x0900(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTslWheeledVehicleMovement*                  VehicleMovementRef;                                       // 0x0908(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslVehicleAnimInstance");
		return ptr;
	}

};


// Class TslGame.TslVehicleCommonComponent
// 0x00B0 (0x0290 - 0x01E0)
class UTslVehicleCommonComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01E0(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnRepair;                                                 // 0x01E8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDeath;                                                  // 0x01F8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnHealthChange;                                           // 0x0208(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFuelChange;                                             // 0x0218(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FName                                       SimpleBodyBoneName;                                       // 0x0228(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<struct FName>                               ComplexBodyBoneNames;                                     // 0x0230(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	struct FName                                       MainComplexBodyBoneName;                                  // 0x0240(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       ComplexCollisionProfileName;                              // 0x0248(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bIsDying : 1;                                             // 0x0250(0x0001) (CPF_Edit, CPF_Net, CPF_EditConst)
	unsigned char                                      bIsBroken : 1;                                            // 0x0250(0x0001) (CPF_Edit, CPF_Net, CPF_EditConst)
	float                                              Health;                                                   // 0x0254(0x0004) (CPF_Edit, CPF_Net, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	float                                              HealthMax;                                                // 0x0258(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Fuel;                                                     // 0x025C(0x0004) (CPF_Edit, CPF_Net, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	float                                              FuelMax;                                                  // 0x0260(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      VehicleExplosionDamageType;                               // 0x0268(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0270(0x0010) UNKNOWN PROPERTY: ArrayProperty TslGame.TslVehicleCommonComponent.CharacterDamageIgnores
	class UClass*                                      VehicleUI;                                                // 0x0280(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0288(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslVehicleCommonComponent");
		return ptr;
	}


	void SetVehicleHealth(float NewHealth);
	void SetVehicleFuelPercent(float Percent);
	void SetVehicleFuel(float NewFuel);
	void Repair();
	void OnRep_Health(float LastHealth);
	void OnRep_Fuel(float LastFuel);
	void OnRep_Dying();
	void OnRep_Broken();
	bool IsDying();
	bool IsBroken();
	class UClass* GetVehicleUI();
	float GetVehicleHealthPercent();
	float GetVehicleHealth();
	float GetVehicleFuelPercent();
	float GetVehicleFuel();
	float GetVehicleBaseHealth();
	float GetVehicleBaseFuel();
	bool CanIgnoreCharacterDamage();
	void Break();
	void AddVehicleFuel(float Delta);
};


// Class TslGame.VehicleSurfaceAudioData
// 0x0010 (0x0040 - 0x0030)
class UVehicleSurfaceAudioData : public UDataAsset
{
public:
	class UAkAudioEvent*                               EventIn;                                                  // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               EventOut;                                                 // 0x0038(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.VehicleSurfaceAudioData");
		return ptr;
	}

};


// Class TslGame.TslVehicleEffectComponent
// 0x03B0 (0x0590 - 0x01E0)
class UTslVehicleEffectComponent : public UActorComponent
{
public:
	class UMeshComponent*                              MeshComponent;                                            // 0x01E0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	class UAkComponent*                                EngineSoundComponent;                                     // 0x01E8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FVehicleEffectInfo                          VehicleEffectInfo;                                        // 0x01F0(0x00F0) (CPF_Edit, CPF_DisableEditOnInstance)
	class ATslParticle*                                MufflerEffect;                                            // 0x02E0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class ATslParticle*                                Muffler2Effect;                                           // 0x02E8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class ATslParticle*                                BoostEffect;                                              // 0x02F0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class ATslParticle*                                Boost2Effect;                                             // 0x02F8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class ATslParticle*                                DamagedEffect;                                            // 0x0300(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class ATslParticle*                                ExplosionEffect;                                          // 0x0308(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class ATslParticle*                                FrontTrailEffect;                                         // 0x0310(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class ATslParticle*                                RearTrailEffect;                                          // 0x0318(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class ATslParticle*                                ThrusterEffect;                                           // 0x0320(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class ATslParticle*                                Thruster2Effect;                                          // 0x0328(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class ATslParticle*                                FrontFoamLeftEffect;                                      // 0x0330(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class ATslParticle*                                FrontFoamRightEffect;                                     // 0x0338(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0340(0x001C) MISSED OFFSET
	float                                              TrailSpeedThreshold;                                      // 0x035C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FrontFoamSpawnThreshold;                                  // 0x0360(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bRPMOverride : 1;                                         // 0x0364(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Transient, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x13];                                      // 0x0365(0x0013) MISSED OFFSET
	unsigned char                                      bUseNewChassisAudio : 1;                                  // 0x0378(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 Curve_EngineAudio;                                        // 0x0380(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bUseDopplerEffect : 1;                                    // 0x0388(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x50];                                      // 0x0389(0x0050) UNKNOWN PROPERTY: MapProperty TslGame.TslVehicleEffectComponent.SurfaceAudioMap
	unsigned char                                      bUseNewSurfaceAudio : 1;                                  // 0x03E0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<int>                                        MeasuredWheelIndices;                                     // 0x03E8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<int>                                        MeasuredWheelIndicesSlip;                                 // 0x03F8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<int>                                        MeasuredWheelIndicesSpin;                                 // 0x0408(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<int>                                        MeasuredWheelIndicesBrake;                                // 0x0418(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	float                                              SuspenionOffsetForContact;                                // 0x0428(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SurfaceActivationValue;                                   // 0x042C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SurfaceDeactivationValue;                                 // 0x0430(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DT_Multiplier;                                            // 0x0434(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MinVelocityForSurfaceCheck;                               // 0x0438(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MinRotationSpeedForSurfaceCheck;                          // 0x043C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MinSlip;                                                  // 0x0440(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MinSpin;                                                  // 0x0444(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MinVelocityForBreak;                                      // 0x0448(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              BrakeNoDriverMultiplier;                                  // 0x044C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                VelocityInterpSpeed;                                      // 0x0450(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                SlipInterpSpeed;                                          // 0x0454(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                SpinInterpSpeed;                                          // 0x0458(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                BreakInterpSpeed;                                         // 0x045C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bDebugVisualizedMeasuredWheels : 1;                       // 0x0460(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AngularVelocityCoefficient;                               // 0x0464(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              LateralVelocityCoeffictient;                              // 0x0468(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              LateralVelocityClamp;                                     // 0x046C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bProcessShiftStart : 1;                                   // 0x0470(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bProcessShiftEnd : 1;                                     // 0x0471(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bProcessReverse : 1;                                      // 0x0472(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               GearUpSound_Start;                                        // 0x0478(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               GearDownSound_Start;                                      // 0x0480(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               GearUpSound_End;                                          // 0x0488(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               GearDownSound_End;                                        // 0x0490(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               GearReverseSound;                                         // 0x0498(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x90];                                      // 0x04A0(0x0090) MISSED OFFSET
	TMap<int, class UMaterialInterface*>               DestroyedMaterialMap;                                     // 0x0530(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	float                                              ApplyDestroyedMaterialDelay;                              // 0x0580(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0xC];                                       // 0x0584(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslVehicleEffectComponent");
		return ptr;
	}


	void SetVehicleMaterialsToDestroyed();
	void SetEngineSoundRTPC(const struct FString& RTPC, float Value);
	void OnHit(class AActor* SelfActor, class AActor* OtherActor, const class Vector3D& NormalImpulse, const struct FHitResult& Hit);
	void OnHealthChange(float CurrentHealth, float LastHealth, float HealthMax, bool bIsDying);
	void OnDestroyedImpactEffect(class AActor* DestroyedActor);
	void OnDeath(float KillingDamage, const struct FDamageEvent& DamageEvent, class ATslPlayerState* PlayerInstigator, class AActor* DamageCauser);
	class UAkComponent* GetEngineSoundComponent();
	void ApplyDestoyedMaterialWithDelay();
};


// Class TslGame.TslVehicleHitComponent
// 0x0140 (0x0320 - 0x01E0)
class UTslVehicleHitComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01E0(0x0008) MISSED OFFSET
	class UMeshComponent*                              MeshComponent;                                            // 0x01E8(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              HitCharacterDuration;                                     // 0x01F0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x54];                                      // 0x01F4(0x0054) MISSED OFFSET
	float                                              LeaveCharacterIgnoreDuration;                             // 0x0248(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CharacterHitMinimumVehicleSpeed;                          // 0x024C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CharacterDamageVelocityUnitMultiplier;                    // 0x0250(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CharacterDamageMassUnitMultiplier;                        // 0x0254(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 CharacterDamageSpeedCurve;                                // 0x0258(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 CharacterDamageMassCurve;                                 // 0x0260(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MinimumCharacterDamage;                                   // 0x0268(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CharacterLaunchSpeedMultiplier;                           // 0x026C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MinimumCharacterLaunchSpeed;                              // 0x0270(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PhysicsImpulseMultiplier;                                 // 0x0274(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UPhysicalMaterial*                           VoidPhysicalMaterial;                                     // 0x0278(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PhysicsImpactModifier;                                    // 0x0280(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PhysicsImpactModifierUpsideDown;                          // 0x0284(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PhysicsImpactAbsorption;                                  // 0x0288(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PhysicsImpactAbsorptionUpsideDown;                        // 0x028C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PhysicsImpactAbsorptionRider;                             // 0x0290(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PhysicsImpactAbsorptionRiderUpsideDown;                   // 0x0294(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PhysicsImpactVehicleDamageMultiplier;                     // 0x0298(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PhysicsImpactRiderDamageMultiplier;                       // 0x029C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      VehicleHitDamageType;                                     // 0x02A0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ExplosionBaseDamage;                                      // 0x02AC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ExplosionMinimumDamage;                                   // 0x02B0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ExplosionRadiusInner;                                     // 0x02B4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ExplosionRadiusOuter;                                     // 0x02B8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ExplosionDamageFalloff;                                   // 0x02BC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      ExplosionDamageType;                                      // 0x02C0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     ExplosionDamagePreventionChannel;                         // 0x02C8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0xF];                                       // 0x02C9(0x000F) MISSED OFFSET
	float                                              ImpulseLimitationSpeedThreshold;                          // 0x02D8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CollectTime;                                              // 0x02DC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x10];                                      // 0x02E0(0x0010) MISSED OFFSET
	TArray<struct FVehicleDebugHit>                    DebugHitHistory;                                          // 0x02F0(0x0010) (CPF_Net, CPF_ZeroConstructor)
	unsigned char                                      UnknownData04[0x8];                                       // 0x0300(0x0008) MISSED OFFSET
	TArray<class UClass*>                              HitAbsorberTypes;                                         // 0x0308(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData05[0x8];                                       // 0x0318(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslVehicleHitComponent");
		return ptr;
	}


	void OnSyncHit(const class Vector3D& NormalImpulse, const struct FHitResult& Hit);
	void OnHit(class AActor* SelfActor, class AActor* OtherActor, const class Vector3D& NormalImpulse, const struct FHitResult& Hit);
	void OnDeath(float KillingDamage, const struct FDamageEvent& DamageEvent, class ATslPlayerState* PlayerInstigator, class AActor* DamageCauser);
};


// Class TslGame.TslVehicleReactionInterface
// 0x0000 (0x0028 - 0x0028)
class UTslVehicleReactionInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslVehicleReactionInterface");
		return ptr;
	}


	void OnImpactedByVehicle(const struct FHitResult& Hit, const class Vector3D& Velocity);
};


// Class TslGame.TslVehicleSeatComponent
// 0x0100 (0x02E0 - 0x01E0)
class UTslVehicleSeatComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01E0(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnLeave;                                                  // 0x01E8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDriverRide;                                             // 0x01F8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDriverLeave;                                            // 0x0208(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPostDriverRide;                                         // 0x0218(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPostDriverLeave;                                        // 0x0228(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	TArray<struct FVehicleSeatInfo>                    SeatInfos;                                                // 0x0238(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	TArray<class UVehicleSeatInteractionComponent*>    Seats;                                                    // 0x0248(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient)
	unsigned char                                      bUseSeatCamera : 1;                                       // 0x0258(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bDoFlipCheck : 1;                                         // 0x0259(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FlipForce;                                                // 0x025C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bDoEntryAngleCheck : 1;                                   // 0x0260(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinEntryAngle;                                            // 0x0264(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bDampenPlayerVelocityOnLeave : 1;                         // 0x0268(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              OnLeaveVelocityMultiplier;                                // 0x026C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bUseActiveStabilize : 1;                                  // 0x0270(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TWeakObjectPtr<class ATslCharacter>                LastDriver;                                               // 0x0274(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x64];                                      // 0x027C(0x0064) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslVehicleSeatComponent");
		return ptr;
	}


	void TryToStabilize();
	void TryToRide(class ATslCharacter* Rider, class UVehicleSeatInteractionComponent* Seat);
	void TryToLeave(class ATslCharacter* Rider, bool bForce);
	void TryToFlip();
	void Ride(class ATslCharacter* Rider, class UVehicleSeatInteractionComponent* Seat);
	void PostDriverRide();
	void PostDriverLeave();
	void OnFuelChange(float CurrentFuel, float LastFuel, float FuelMax);
	void Leave(class ATslCharacter* Rider, class UVehicleSeatInteractionComponent* Seat, bool bForce);
	void KillAllRiders(float KillingDamage, const struct FDamageEvent& DamageEvent, class ATslPlayerState* PlayerInstigator, class AActor* DamageCauser);
	int GetVehicleSeatIndex(class UVehicleSeatInteractionComponent* Seat);
	TArray<class UVehicleSeatInteractionComponent*> GetSeats();
	class UVehicleSeatInteractionComponent* GetSeat(int SeatIndex);
	TArray<class ATslCharacter*> GetRiders();
	class ATslCharacter* GetLastDriver(float LastDuration);
	class ATslCharacter* GetDriver();
};


// Class TslGame.TslVehicleSyncComponent
// 0x0050 (0x0230 - 0x01E0)
class UTslVehicleSyncComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x01E0(0x000C) MISSED OFFSET
	float                                              MinCorrectionInterval;                                    // 0x01EC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SendingToServerIntervalAtClient;                          // 0x01F4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x01F8(0x0008) MISSED OFFSET
	float                                              SendingReliableHitToServerIntervalAtClient;               // 0x0200(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AllowedMaxDistanceSqAtServer;                             // 0x0208(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              StationaryCorrectionIntervalAtClient;                     // 0x020C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              StationaryCorrectionSpeedThresholdSq;                     // 0x0214(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              StationaryCorrectionThresholdDistanceSq;                  // 0x0218(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x14];                                      // 0x021C(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslVehicleSyncComponent");
		return ptr;
	}


	void SendServerMoveToClient(int InCorrectionId, const struct FVector_NetQuantize100& ServerLocation, const struct FVector_NetQuantize100& ServerLinearVelocity, const class Vector3D& ServerRotator, const struct FVector_NetQuantize100& ServerAngularVelocity, bool bIsSnap);
	void SendClientMoveToServerUnreliably(int InCorrectionId, const struct FVector_NetQuantize100& ClientLocation, const struct FVector_NetQuantize100& ClientLinearVelocity, const class Vector3D& ClientRotator, const struct FVector_NetQuantize100& ClientAngularVelocity);
	void SendClientMoveToServerReliably(int InCorrectionId, const struct FVector_NetQuantize100& ClientLocation, const struct FVector_NetQuantize100& ClientLinearVelocity, const class Vector3D& ClientRotator, const struct FVector_NetQuantize100& ClientAngularVelocity);
	void SendClientHitToServerUnreliably(int InCorrectionId, const struct FVector_NetQuantize100& ClientLocation, const struct FVector_NetQuantize100& ClientLinearVelocity, const class Vector3D& ClientRotator, const struct FVector_NetQuantize100& ClientAngularVelocity, const struct FVector_NetQuantize100& NormalImpulse, const struct FHitResult& Hit);
	void SendClientHitToServerReliably(int InCorrectionId, const struct FVector_NetQuantize100& ClientLocation, const struct FVector_NetQuantize100& ClientLinearVelocity, const class Vector3D& ClientRotator, const struct FVector_NetQuantize100& ClientAngularVelocity, const struct FVector_NetQuantize100& NormalImpulse, const struct FHitResult& Hit);
	void OnHitAtServer(class AActor* SelfActor, class AActor* OtherActor, const class Vector3D& NormalImpulse, const struct FHitResult& Hit);
	void OnHitAtClient(class AActor* SelfActor, class AActor* OtherActor, const class Vector3D& NormalImpulse, const struct FHitResult& Hit);
	void OnDriverRide();
};


// Class TslGame.TslVehicleTempComponent
// 0x0000 (0x01E0 - 0x01E0)
class UTslVehicleTempComponent : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslVehicleTempComponent");
		return ptr;
	}

};


// Class TslGame.TslViewTargetTempComponent
// 0x0010 (0x01F0 - 0x01E0)
class UTslViewTargetTempComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x01E0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslViewTargetTempComponent");
		return ptr;
	}


	void AddTempComponentWithDelegate(class USceneComponent* TempComponent, const struct FScriptDelegate& DelegateToCall);
	void AddTempComponent(class USceneComponent* TempComponent);
};


// Class TslGame.TslWeapon_Gun_Projectile
// 0x0000 (0x0AF0 - 0x0AF0)
class ATslWeapon_Gun_Projectile : public ATslWeapon_Gun
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslWeapon_Gun_Projectile");
		return ptr;
	}


	void SimulateFire_BP();
};


// Class TslGame.TslWeapon_Trajectory
// 0x01F8 (0x0CE8 - 0x0AF0)
class ATslWeapon_Trajectory : public ATslWeapon_Gun
{
public:
	float                                              TrajectoryGravityZ;                                       // 0x0AF0(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              RecoilSpreadScale;                                        // 0x0AF4(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      FireAtViewPoint : 1;                                      // 0x0AF8(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              DefaultTimerFrequency;                                    // 0x0AFC(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              CrouchSpreadModifier;                                     // 0x0B00(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              ProneSpreadModifier;                                      // 0x0B04(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              WalkSpread;                                               // 0x0B08(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              RunSpread;                                                // 0x0B0C(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              JumpSpread;                                               // 0x0B10(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	struct FTrajectoryWeaponData                       TrajectoryConfig;                                         // 0x0B18(0x0080) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FRecoilInfo                                 RecoilInfo;                                               // 0x0B98(0x0068) (CPF_Edit, CPF_DisableEditOnInstance)
	class UClass*                                      ImpactTemplate;                                           // 0x0C00(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             TrailFX;                                                  // 0x0C08(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TMap<float, class UClass*>                         UnderWaterTrailFXClassPerLength;                          // 0x0C10(0x0050) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	struct FName                                       TrailTargetParam;                                         // 0x0C60(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0C68(0x0018) MISSED OFFSET
	float                                              WeaponSpread;                                             // 0x0C80(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              RecoilModifier_Stand;                                     // 0x0C84(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              RecoilModifier_Crouch;                                    // 0x0C88(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              RecoilModifier_Prone;                                     // 0x0C8C(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              VerticalRecoilMin;                                        // 0x0C90(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              VerticalRecoilMax;                                        // 0x0C94(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0C98(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslWeapon_Trajectory");
		return ptr;
	}


	void SimulateUnderwaterTrail(const class Vector3D& SurfaceImpactPoint, const class Vector3D& ShootDirection, float TravelDistance);
	void SimulateUnderwaterHit(const class Vector3D& UnderwaterImpactPoint, const class Vector3D& ShootOrigin);
	void SimulateHit_UnReliable(const struct FHitResult& Impact, const class Vector3D& RelLocation);
	void SimulateHit_Reliable(const struct FHitResult& Impact, const class Vector3D& RelLocation);
	void Simulate_CreateAmmoInstance(const class Vector3D& ServerStartTrace, const class Vector3D& Dir, const struct FAttackId& AttackId);
	void ServerWallCheckTest(const class Vector3D& TraceStart, const class Vector3D& TraceEnd);
	void ServerNotifyHit(const class Vector3D& ClientImpactLocation, const class Vector3D& RelativeImpact, float HandOffsetValue, const struct FHitResult& Impact, TArray<uint32_t> Checksums, const class Vector3D& Origin, const class Vector3D& TraceStart, const class Vector3D& PreLocation, const class Vector3D& ShootDir, float TravelDistance, const struct FAttackId& AttackId, uint32_t HitSeq, const class Vector3D& RelLocation, float SpeedLoss);
	void ServerNotifyCrack(class ATslCharacter* TargetCharacter, const class Vector3D& LocationRelative, float BulletVelocity);
	void ServerNotifyAmmoSpawned(const class Vector3D& ServerStartTrace, const class Vector3D& Dir, const struct FAttackId& AttackId);
	void OnRep_WeaponSpread(float LastWeaponSpread);
	bool IsBulletInAir();
	struct FTrajectoryWeaponData GetTrajectoryConfig();
	struct FRecoilInfo GetRecoilInfo();
	float GetCurrentStabilityVar();
	float GetCurrentReoveryTarget();
	float GetCurrentRecoilValue();
	class Vector2D GetCurrentRecoilTarget();
	class Rotator GetBulletRotation();
	class Vector3D GetBulletLocation();
	void ClientWallCheckFail(const class Vector3D& TraceStart, const class Vector3D& TraceEnd, const class Vector3D& Impact);
};


// Class TslGame.TslWeapon_Melee
// 0x00C0 (0x08A0 - 0x07E0)
class ATslWeapon_Melee : public ATslWeapon
{
public:
	class UAkAudioEvent*                               AttackSoundAk;                                            // 0x07E0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<struct FMeleeWeaponAnim>                    AttackAnims;                                              // 0x07E8(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	float                                              Damage;                                                   // 0x07F8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              WeaponImpact;                                             // 0x07FC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      DamageType;                                               // 0x0800(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0808(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.TslWeapon_Melee.HitCheckType
	float                                              AllowedHitRangeLeeway;                                    // 0x080C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      ImpactTemplate;                                           // 0x0810(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCapsuleComponent*                           HitCapsuleComponent;                                      // 0x0818(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x80];                                      // 0x0820(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslWeapon_Melee");
		return ptr;
	}


	void ServerNotifyHit(TArray<float> AimSpeeds, TArray<struct FHitResult> Impacts, const struct FAttackId& AttackId, uint32_t HitSeq);
	void ServerAttack(int AnimIndex);
	void OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted);
	void OnAnimationNotify(const struct FName& NotifyName);
	void ClientHit_Confirmed(const struct FHitResult& Impact);
	void ClientAttack(int AnimIndex);
};


// Class TslGame.TslWebPopupInterface
// 0x0000 (0x0028 - 0x0028)
class UTslWebPopupInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslWebPopupInterface");
		return ptr;
	}


	void ShowWebPopup(const struct FWebPopupParam& Param);
};


// Class TslGame.TslMotorbikeVehicle
// 0x0210 (0x09B0 - 0x07A0)
class ATslMotorbikeVehicle : public ATslWheeledVehicle
{
public:
	unsigned char                                      bUseKickstandStabilize : 1;                               // 0x07A0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MinSuspensionOffsetForContact;                            // 0x07A4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bStabilizeOnServer : 1;                                   // 0x07A8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bStabilizeOnRemoteClient : 1;                             // 0x07A9(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              KickstandStabAngularDamp;                                 // 0x07AC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              KickstandMAV;                                             // 0x07B0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DefaultAngularDamping_Client;                             // 0x07B4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DefaultAngularDamping_Server;                             // 0x07B8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              NoDriverAngularDamping_Client;                            // 0x07BC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              NoDriverAngularDamping_Server;                            // 0x07C0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              KickstandStabilizeTorqueScalar;                           // 0x07C4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              KickstandStabilizeRollScalar;                             // 0x07C8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              KickstandStabilizeRollMinRange;                           // 0x07CC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MinVelocityForStabilizeOverride;                          // 0x07D0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              KickstandStabLinearDamp;                                  // 0x07D4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       StabilizeBone_Low;                                        // 0x07D8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       StabilizeBone_High;                                       // 0x07E0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 Curve_Roll;                                               // 0x07E8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 Curve_RollReturn;                                         // 0x07F0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 Curve_Steer;                                              // 0x07F8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 Curve_Yaw;                                                // 0x0800(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 Curve_Torque;                                             // 0x0808(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector3D                                     StabStaticVector;                                         // 0x0810(0x000C) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector3D                                     StabStaticVectorKickstand;                                // 0x081C(0x000C) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector3D                                     StabNoDriverVector;                                       // 0x0828(0x000C) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector2D                                     StabX_Velocity_In;                                        // 0x0834(0x0008) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector2D                                     StabX_Velocity_Out;                                       // 0x083C(0x0008) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector2D                                     StabX_Pitch_In;                                           // 0x0844(0x0008) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector2D                                     StabX_Pitch_Out;                                          // 0x084C(0x0008) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector2D                                     StabZ_Velocity_In;                                        // 0x0854(0x0008) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector2D                                     StabZ_Velocity_Out;                                       // 0x085C(0x0008) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector2D                                     StabZ_Roll_In;                                            // 0x0864(0x0008) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector2D                                     StabZ_Roll_Out;                                           // 0x086C(0x0008) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector2D                                     StabZ_Pitch_In;                                           // 0x0874(0x0008) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector2D                                     StabZ_Pitch_Out;                                          // 0x087C(0x0008) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector2D                                     StabTorque_In;                                            // 0x0884(0x0008) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector2D                                     StabTorque_Out;                                           // 0x088C(0x0008) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              StabTorque_ForceScalar;                                   // 0x0894(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector2D                                     StabTorque_Pitch_In;                                      // 0x0898(0x0008) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector2D                                     StabTorque_Pitch_Out;                                     // 0x08A0(0x0008) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bUseFlipping : 1;                                         // 0x08A8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FlippingForce;                                            // 0x08AC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              InitialFlipTimer;                                         // 0x08B0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MinVelocityForFlipping;                                   // 0x08B4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DefaultLinearDamp;                                        // 0x08BC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DefaultAngularDamp;                                       // 0x08C0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DefaultMAV;                                               // 0x08C4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ContactAlpha_RiseRate;                                    // 0x08C8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ContactAlpha_FallRate;                                    // 0x08CC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ContactAlpha_LowerClamp;                                  // 0x08D0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector2D                                     ContactAlpha_MapPitchIn;                                  // 0x08D4(0x0008) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector2D                                     ContactAlpha_MapRollIn;                                   // 0x08DC(0x0008) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ContactAlphaRemoteMultiplier;                             // 0x08E4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector2D                                     AirControlF_VelMap;                                       // 0x08E8(0x0008) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector2D                                     AirControlB_VelMap;                                       // 0x08F0(0x0008) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector2D                                     AirControlL_VelMap;                                       // 0x08F8(0x0008) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector2D                                     AirControlR_VelMap;                                       // 0x0900(0x0008) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector2D                                     AirControlQ_VelMap;                                       // 0x0908(0x0008) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector2D                                     AirControlE_VelMap;                                       // 0x0910(0x0008) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AirControl_FB_Torque;                                     // 0x0918(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AirControl_LR_Torque;                                     // 0x091C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AirControl_QE_Torque;                                     // 0x0920(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bStabilizeInAir : 1;                                      // 0x0924(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              StabilizeAirPercentage;                                   // 0x0928(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FC_PitchUp;                                               // 0x092C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FC_PitchDown;                                             // 0x0930(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bUseAnchoring : 1;                                        // 0x0934(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MinImpulseForAnchorRelease;                               // 0x0938(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector2D                                     DriverVelocityAngularDampingInMap;                        // 0x093C(0x0008) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class Vector2D                                     DriverVelocityAngularDampingOutMap;                       // 0x0944(0x0008) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bProcessCounterSteering : 1;                              // 0x094C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bProcessCounterSteerOnRemote : 1;                         // 0x094D(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CounterSteerAngularSpeedScalar;                           // 0x0950(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CounterSteerScalar_Default;                               // 0x0954(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CounterSteerScalar_NoThrottle;                            // 0x0958(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CounterSteerScalar_Brake;                                 // 0x095C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0960(0x0040) MISSED OFFSET
	unsigned char                                      bKickstandStabilizeActive : 1;                            // 0x09A0(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x09A1(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslMotorbikeVehicle");
		return ptr;
	}


	bool VehicleHasDriver();
	void SetAirControlR(float inFloat);
	void SetAirControlQ(float inFloat);
	void SetAirControlL(float inFloat);
	void SetAirControlF(float inFloat);
	void SetAirControlE(float inFloat);
	void SetAirControlB(float inFloat);
	void ProcessFlipAndStabilize();
	void OnVehicleEjected();
	void OnPostDriverRide();
	void OnPostDriverLeave();
	void OnMeshHit(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const class Vector3D& NormalImpulse, const struct FHitResult& Hit);
	bool IsUsingActiveStabilize();
	bool IsKickstandActive();
	bool IsFlippingEnabled();
	bool HasContact();
	float GetCOMSteerOffset();
};


// Class TslGame.TslMotorbikeVehicle_Sidecar
// 0x0010 (0x09C0 - 0x09B0)
class ATslMotorbikeVehicle_Sidecar : public ATslMotorbikeVehicle
{
public:
	class Vector3D                                     Sidecar_StabilizerHigh_StaticCOM;                         // 0x09B0(0x000C) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslMotorbikeVehicle_Sidecar");
		return ptr;
	}

};


// Class TslGame.TslMotorbikeVehicle_Standalone
// 0x0000 (0x09B0 - 0x09B0)
class ATslMotorbikeVehicle_Standalone : public ATslMotorbikeVehicle
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslMotorbikeVehicle_Standalone");
		return ptr;
	}

};


// Class TslGame.TslWheelEffectType
// 0x0080 (0x00B0 - 0x0030)
class UTslWheelEffectType : public UDataAsset
{
public:
	class UAkAudioEvent*                               Sound;                                                    // 0x0030(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      DefaultFxClass;                                           // 0x0038(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      ConcreteFxClass;                                          // 0x0040(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      DirtFxClass;                                              // 0x0048(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      WaterFxClass;                                             // 0x0050(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      MetalFxClass;                                             // 0x0058(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      WoodFxClass;                                              // 0x0060(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      GrassFxClass;                                             // 0x0068(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      GlassFxClass;                                             // 0x0070(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      RockFxClass;                                              // 0x0078(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      SandFxClass;                                              // 0x0080(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DefaultMinSpeed;                                          // 0x0088(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ConcreteMinSpeed;                                         // 0x008C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DirtMinSpeed;                                             // 0x0090(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              WaterMinSpeed;                                            // 0x0094(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MetalMinSpeed;                                            // 0x0098(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              WoodMinSpeed;                                             // 0x009C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              GrassMinSpeed;                                            // 0x00A0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              GlassMinSpeed;                                            // 0x00A4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RockMinSpeed;                                             // 0x00A8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SandMinSpeed;                                             // 0x00AC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslWheelEffectType");
		return ptr;
	}

};


// Class TslGame.UiHelperFunctions
// 0x0000 (0x0028 - 0x0028)
class UUiHelperFunctions : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.UiHelperFunctions");
		return ptr;
	}


	TArray<class UWidget*> STATIC_SortWidgetFormPositionY(TArray<class UWidget*> Widgets, bool bDescendingOrder);
	TArray<class UWidget*> STATIC_SortWidgetFormPositionX(TArray<class UWidget*> Widgets, bool bDescendingOrder);
	TArray<struct FTslPlayerMatchResultInfo> STATIC_SortPlayerMatchResultInfosByRanking(TArray<struct FTslPlayerMatchResultInfo> PlayerMatchResultInfos);
	TArray<TScriptInterface<class USlotInterface>> STATIC_SortItem(TArray<TScriptInterface<class USlotInterface>> InItemList);
	void STATIC_SetTslBlur(class UObject* WorldContextObject, float BlurLevel, float DepthBlurBlackPoint, float DepthBlurWhitePoint);
	bool STATIC_IsWarning(class UUserWidget* Widget);
	bool STATIC_IsThereAnyPlayingAnimation(class UUserWidget* Widget, TArray<class UWidgetAnimation*> AnimationArray);
	bool STATIC_IsReplayingKillcam(class UUserWidget* Widget);
	bool STATIC_IsReplaying(class UUserWidget* Widget);
	bool STATIC_IsObserverSpectating(class UUserWidget* Widget);
	bool STATIC_IsNavigateKey(const struct FKey& InKey);
	bool STATIC_IsLastSpectatorTeam(class UUserWidget* Widget, class ATslCharacter* Character);
	bool STATIC_IsLastSpectatedCharacter(class UUserWidget* Widget, class ATslCharacter* Character);
	bool STATIC_IsKickEnableCharacter(class ATslCharacter* Character);
	bool STATIC_IsInNextPlayzone(class UUserWidget* Widget);
	bool STATIC_IsHitted(int State);
	bool STATIC_IsGroggyByTeam(class ATeam* Team);
	bool STATIC_IsGamepadY(const struct FKey& InKey);
	bool STATIC_IsGamepadX(const struct FKey& InKey);
	bool STATIC_IsGamepadUp(const struct FKey& InKey);
	bool STATIC_IsGamepadRight(const struct FKey& InKey);
	bool STATIC_IsGamepadLeft(const struct FKey& InKey);
	bool STATIC_IsGamepadDown(const struct FKey& InKey);
	bool STATIC_IsGamepadB(const struct FKey& InKey);
	bool STATIC_IsGamepadA(const struct FKey& InKey);
	bool STATIC_IsBluezoneGpsReset(class UUserWidget* Widget);
	bool STATIC_IsAttacked(int State);
	bool STATIC_HaveDurability(const TScriptInterface<class USlotInterface>& ItemSlot);
	class AWeaponProcessor* STATIC_GetWeaponProcessor(class UUserWidget* Widget);
	class ATslCharacter* STATIC_GetViewTargetTslCharacter(class UUserWidget* Widget);
	class UClass* STATIC_GetVehicleUI(class APawn* VehiclePawn);
	class UWidget* STATIC_GetUpWidgetByTslFocusableWidget(class UWidget* Widget);
	class ATslSpectatorPawn* STATIC_GetTslSpectatorPawn(class UUserWidget* Widget);
	class ATslPlayerState* STATIC_GetTslPlayerState(class ATslCharacter* Character);
	class ATslHUD* STATIC_GetTslHUD(class UUserWidget* Widget);
	class ATslCharacter* STATIC_GetTslCharacterByNetId(class UUserWidget* Widget, const struct FString& NetId);
	int STATIC_GetTeamId(class ATslCharacter* Character);
	TArray<struct FLinearColor> STATIC_GetTeamColors(int TeamCount);
	struct FLinearColor STATIC_GetTeamColor(class ATslCharacter* TslCharacter);
	void STATIC_GetSubjectToReportType(class UUserWidget* Widget);
	TArray<struct FSubjectToReport> STATIC_GetSubjectToReport();
	TArray<class ATslCharacter*> STATIC_GetSortedReplicateCharactersBySpectatorPawnDistance(class UUserWidget* Widget);
	TArray<class ATslCharacter*> STATIC_GetSortedReplicateCharactersByLastHitTime(class UUserWidget* Widget);
	class UWidget* STATIC_GetRightWidgetByTslFocusableWidget(class UWidget* Widget);
	TArray<struct FReportCauseData> STATIC_GetReportCauses();
	struct FString STATIC_GetPlayerNetID(class ATslCharacter* Character);
	struct FString STATIC_GetPlayerName(class ATslCharacter* Character);
	class UTexture* STATIC_GetPlayerIcon(int MarkerNum);
	class ATslPlayerController* STATIC_GetOwningTslPlayerController(class UUserWidget* Widget);
	class ATslCharacter* STATIC_GetOwningTslCharacter(class UUserWidget* Widget);
	float STATIC_GetNextPlayzoneRadius_BluezoneGPS(class UUserWidget* Widget);
	class Vector3D STATIC_GetNextPlayzonePosition_BluezoneGPS(class UUserWidget* Widget);
	class UTexture* STATIC_GetMarkerIcon(int MarkerNum);
	struct FLinearColor STATIC_GetMarkerColor(int MarkerNum);
	class UTexture* STATIC_GetMapDeathIcon(int MarkerNum);
	class UWidget* STATIC_GetLeftWidgetByTslFocusableWidget(class UWidget* Widget);
	class ATslCharacter* STATIC_GetLastSpectatedCharacter(class UUserWidget* Widget);
	class AInventoryFacade* STATIC_GetInventoryFacade(class UUserWidget* Widget);
	class AInventory* STATIC_GetInventory(class UUserWidget* Widget);
	class UTexture* STATIC_GetIndicatorIcon(int MarkerNum);
	float STATIC_GetHealthRatioByTeam(class ATeam* Team);
	float STATIC_GetHealLimit(class UUserWidget* Widget);
	float STATIC_GetGroggyHealthRatioByTeam(class ATeam* Team);
	class AEquipment* STATIC_GetEquipment(class UUserWidget* Widget);
	float STATIC_GetDurabilityRatio(const TScriptInterface<class USlotInterface>& ItemSlot);
	class UWidget* STATIC_GetDownWidgetByTslFocusableWidget(class UWidget* Widget);
	float STATIC_GetDistanceFromSpectatorPawn(class UUserWidget* Widget, class ATslCharacter* Character);
	float STATIC_GetCurrentPlayzoneRadius_BluezoneGPS(class UUserWidget* Widget);
	class Vector3D STATIC_GetCurrentPlayzonePosition_BluezoneGPS(class UUserWidget* Widget);
	class UTexture* STATIC_GetCompassIcon(int MarkerNum);
	TArray<class UWidget*> STATIC_GetChildrenOfPanel(class UPanelWidget* PanelWidget);
	int STATIC_GetCharacterStateByTeam(class ATeam* Team);
	float STATIC_GetBluezoneWarningTime(class UUserWidget* Widget);
	float STATIC_GetBluezoneReleaseTime(class UUserWidget* Widget);
	int STATIC_GetBluezoneGpsState(class UUserWidget* Widget);
	int STATIC_FindNextWidgetIndexInPanel(class UPanelWidget* PanelWidget, class UWidget* StartWidget, bool bReverseDir);
	void STATIC_DrawDottedLine(const struct FBox2D& Rect, const class Vector2D& PositionA, const class Vector2D& PositionB, float DottedLength, float DottedInterval, const struct FLinearColor& Tint, bool bAntiAlias, struct FPaintContext* Context);
	class UWeaponItem* STATIC_CastWeaponItem(const TScriptInterface<class USlotInterface>& ItemSlot);
	class UEquipableItem* STATIC_CastEquipableItem(const TScriptInterface<class USlotInterface>& ItemSlot);
	class UAttachableItem* STATIC_CastAttachableItem(const TScriptInterface<class USlotInterface>& ItemSlot);
	void STATIC_CalculateWeightGaugeUpParamsByItem(float TotalMaxSpace, float CurrMaxSpace, float CurrSpace, float FocusedItemWeight, float* OutCurrMaxSpaceStart, float* OutCurrSpaceStart, float* OutFeedbackStart, bool* OutIsPositive);
};


// Class TslGame.VehicleRiderComponent
// 0x0050 (0x0230 - 0x01E0)
class UVehicleRiderComponent : public UActorComponent
{
public:
	int                                                SeatIndex;                                                // 0x01E0(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3C];                                      // 0x01E4(0x003C) MISSED OFFSET
	class APawn*                                       LastVehiclePawn;                                          // 0x0220(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0228(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.VehicleRiderComponent");
		return ptr;
	}

};


// Class TslGame.ParachuteVehicleSeatActor
// 0x0000 (0x0438 - 0x0438)
class AParachuteVehicleSeatActor : public AVehicleSeatActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ParachuteVehicleSeatActor");
		return ptr;
	}

};


// Class TslGame.TslVehicleSeatActor
// 0x0008 (0x0440 - 0x0438)
class ATslVehicleSeatActor : public AVehicleSeatActor
{
public:
	unsigned char                                      UnknownData00[0x1];                                       // 0x0438(0x0001) UNKNOWN PROPERTY: EnumProperty TslGame.TslVehicleSeatActor.RiderType

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslVehicleSeatActor");
		return ptr;
	}

};


// Class TslGame.TslMotoSeatActor
// 0x0000 (0x0440 - 0x0440)
class ATslMotoSeatActor : public ATslVehicleSeatActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslMotoSeatActor");
		return ptr;
	}


	bool IsEntryAllowed();
	void HandleFlipAndKickstand();
};


// Class TslGame.VivoxResponse
// 0x0070 (0x0098 - 0x0028)
class UVivoxResponse : public UObject
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0028(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.VivoxResponse");
		return ptr;
	}

};


// Class TslGame.SignInResponse
// 0x0030 (0x00C8 - 0x0098)
class USignInResponse : public UVivoxResponse
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0098(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.SignInResponse");
		return ptr;
	}

};


// Class TslGame.ChannelResponse
// 0x0050 (0x00E8 - 0x0098)
class UChannelResponse : public UVivoxResponse
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0098(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ChannelResponse");
		return ptr;
	}

};


// Class TslGame.KeyRevokeResponse
// 0x0020 (0x00B8 - 0x0098)
class UKeyRevokeResponse : public UVivoxResponse
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0098(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.KeyRevokeResponse");
		return ptr;
	}

};


// Class TslGame.KeyAddResponse
// 0x0030 (0x00C8 - 0x0098)
class UKeyAddResponse : public UVivoxResponse
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0098(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.KeyAddResponse");
		return ptr;
	}

};


// Class TslGame.VivoxBaseComponent
// 0x00B0 (0x0290 - 0x01E0)
class UVivoxBaseComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01E0(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnParticipantMuteChanged;                                 // 0x01E8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnParticipantRestrictionChanged;                          // 0x01F8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0208(0x0008) MISSED OFFSET
	struct FVivoxConnectionInfo                        ConnectionInfo;                                           // 0x0210(0x0020) (CPF_Net)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0230(0x0008) MISSED OFFSET
	struct FString                                     TeamChannelUrl;                                           // 0x0238(0x0010) (CPF_Net, CPF_ZeroConstructor)
	struct FString                                     GlobalChannelUrl;                                         // 0x0248(0x0010) (CPF_Net, CPF_ZeroConstructor)
	float                                              ResetFailureDelaySeconds;                                 // 0x025C(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x18];                                      // 0x0260(0x0018) MISSED OFFSET
	float                                              UpdatePositionIntervalSeconds;                            // 0x0278(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0xC];                                       // 0x027C(0x000C) MISSED OFFSET
	float                                              UserInputVolumeModifier;                                  // 0x0288(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              UserOutputVolumeModifier;                                 // 0x028C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.VivoxBaseComponent");
		return ptr;
	}


	void UpdatePosition();
	void SetVoiceChannelType();
	void SetParticipantMute(const struct FString& TargetUniqueId, bool bIsMuted);
	void SetLocalVoiceOutputVolume(int UserSettingVolume);
	void SetLocalVoiceOutputMuted(bool bIsMuted);
	void SetLocalVoiceInputVolume(int UserSettingVolume);
	void SetLocalVoiceInputMuted(bool bIsMuted);
	void ServerLogin();
	void ServerJoinTeamChannel();
	void ServerJoinGlobalChannel();
	void ResetTeamChannelJoinState();
	void ResetLoginState();
	void ResetGlobalChannelJoinState();
	void ResetConnectionState();
	void RefreshDevices();
	void GetVoiceChannelType();
	int GetLocalVoiceOutputVolume();
	bool GetLocalVoiceOutputMuted();
	int GetLocalVoiceInputVolume();
	bool GetLocalVoiceInputMuted();
	void ClientLogin(const struct FString& AccessToken);
	void ClientLeaveTeamChannel();
	void ClientLeaveGlobalChannel();
	void ClientJoinTeamChannel(const struct FString& AccessToken);
	void ClientJoinGlobalChannel(const struct FString& AccessToken);
	float CalculateOutputVolumeFromModifiers();
	float CalculateInputVolumeFromModifiers();
};


// Class TslGame.VivoxComponent
// 0x0050 (0x02E0 - 0x0290)
class UVivoxComponent : public UVivoxBaseComponent
{
public:
	unsigned char                                      UnknownData00[0x2C];                                      // 0x0290(0x002C) MISSED OFFSET
	float                                              SuddenMovementDistance;                                   // 0x02BC(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              SuddenMovementModifier;                                   // 0x02C0(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              SuddenMovementModifierDuration;                           // 0x02C4(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              SuddenMovementModifierRestoreDuration;                    // 0x02C8(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bEnableObserverTeamChat : 1;                              // 0x02D0(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x02D1(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.VivoxComponent");
		return ptr;
	}


	void ServerTestAccessToken();
	void ServerSetObserverTeamNum(int NewTeamNum);
	void ApplyTimedVolumeModifier(float NewModifier, float Duration, float RestoreDuration);
};


// Class TslGame.VivoxLobbyComponent
// 0x0040 (0x02D0 - 0x0290)
class UVivoxLobbyComponent : public UVivoxBaseComponent
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0290(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.VivoxLobbyComponent");
		return ptr;
	}

};


// Class TslGame.VivoxManager
// 0x00F0 (0x0118 - 0x0028)
class UVivoxManager : public UObject
{
public:
	class UWorld*                                      World;                                                    // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
	struct FVivoxConnectionInfo                        ConnectionInfo;                                           // 0x0038(0x0020)
	unsigned char                                      bUseEphmeralChannel : 1;                                  // 0x0058(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     AuthId;                                                   // 0x0060(0x0010) (CPF_ZeroConstructor)
	struct FString                                     AuthPwd;                                                  // 0x0070(0x0010) (CPF_ZeroConstructor)
	int64_t                                            AccessTokenExpirationTime;                                // 0x0080(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     Issuer;                                                   // 0x0088(0x0010) (CPF_ZeroConstructor)
	struct FString                                     Key;                                                      // 0x0098(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x00A8(0x0010) MISSED OFFSET
	class USignInResponse*                             SignIn;                                                   // 0x00B8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class UKeyAddResponse*                             KeyAdd;                                                   // 0x00C0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class UKeyRevokeResponse*                          KeyRevoke;                                                // 0x00C8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	TArray<class UChannelResponse*>                    Channels;                                                 // 0x00D0(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	unsigned char                                      UnknownData02[0x10];                                      // 0x00E0(0x0010) MISSED OFFSET
	TArray<class ATslPlayerController*>                PlayerControllers;                                        // 0x00F0(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	int                                                ProximalMaxRange;                                         // 0x0100(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ProximalClampingDistance;                                 // 0x0104(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ProximalDistanceModel;                                    // 0x0108(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0xC];                                       // 0x010C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.VivoxManager");
		return ptr;
	}


	void OnRevokeKeySuccess(class UVivoxResponse* Response);
	void OnRevokeKeyFail(class UVivoxResponse* Response);
	void OnChannelSuccess(class UVivoxResponse* Response);
	void OnChannelFail(class UVivoxResponse* Response);
	void OnAddKeySuccess(class UVivoxResponse* Response);
	void OnAddKeyFail(class UVivoxResponse* Response);
};


// Class TslGame.WeaponAnimInfoComponent
// 0x0060 (0x0240 - 0x01E0)
class UWeaponAnimInfoComponent : public UActorComponent
{
public:
	struct FName                                       WeaponAttachPointRifle;                                   // 0x01E0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       WeaponAttachPointThrowable;                               // 0x01E8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       WeaponAttachPointMelee;                                   // 0x01F0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USkeletalMeshComponent*                      MeshComponent;                                            // 0x01F8(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTslAccessoryComponent*                      CharacterAccessory_Primary;                               // 0x0200(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTslAccessoryComponent*                      CharacterAccessory_Secondary;                             // 0x0208(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTslAccessoryComponent*                      CharacterAccessory_Sidearm;                               // 0x0210(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTslAccessoryComponent*                      CharacterAccessory_Melee;                                 // 0x0218(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTslAccessoryComponent*                      CharacterAccessory_Thrown;                                // 0x0220(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FName                                       WeaponLeftHandIKAttachPoint;                              // 0x0228(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0230(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.WeaponAnimInfoComponent");
		return ptr;
	}


	void SetAccessorySlot(class UTslAccessoryComponent* NewAccessoryComponent);
	bool HasWeaponLeftHandIKSocket(class ATslWeapon* Weapon);
	struct FTransform GetWeaponLeftHandIKTransform(class ATslWeapon* Weapon);
	struct FTransform GetWeaponHandIK_Right(class ATslWeapon* Weapon);
	struct FTransform GetWeaponHandIK_Left(class ATslWeapon* Weapon);
	class ATslWeapon* GetCurrentWeapon();
	class UTslAccessoryComponent* GetAccessorySlot();
};


// Class TslGame.CharacterWeaponAnimInfoComponent
// 0x0030 (0x0270 - 0x0240)
class UCharacterWeaponAnimInfoComponent : public UWeaponAnimInfoComponent
{
public:
	struct FName                                       WeaponAttachPointPistolSitting;                           // 0x0240(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       WeaponAttachPointRifleDriving;                            // 0x0248(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       WeaponAttachPointRifleSitting;                            // 0x0250(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       WeaponAttachPointRifleAim;                                // 0x0258(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       WeaponAttachPointThrowableDriving;                        // 0x0260(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       WeaponAttachPointMeleeDriving;                            // 0x0268(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.CharacterWeaponAnimInfoComponent");
		return ptr;
	}

};


// Class TslGame.WeaponClone
// 0x0018 (0x0040 - 0x0028)
class UWeaponClone : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
	class ATslWeapon*                                  ClonedWeapon;                                             // 0x0038(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.WeaponClone");
		return ptr;
	}


	void Update();
};


// Class TslGame.WeaponsPenetrationConfig
// 0x01A8 (0x01D8 - 0x0030)
class UWeaponsPenetrationConfig : public UDataAsset
{
public:
	TMap<TEnumAsByte<EPhysicalSurface>, struct FPhysicalMaterialPenetrationConfig> DefaultMaterialConfigs;                                   // 0x0030(0x0050) (CPF_Edit, CPF_ZeroConstructor)
	TMap<class UPhysicalMaterial*, struct FPhysicalMaterialPenetrationConfig> MaterialConfigOverrides;                                  // 0x0080(0x0050) (CPF_Edit, CPF_ZeroConstructor)
	unsigned char                                      UnknownData00[0x50];                                      // 0x00D0(0x0050) UNKNOWN PROPERTY: MapProperty TslGame.WeaponsPenetrationConfig.WeaponClassConfigs
	TMap<class UClass*, struct FWeaponPenetrationConfig> WeaponConfigOverrides;                                    // 0x0120(0x0050) (CPF_Edit, CPF_ZeroConstructor)
	TMap<TEnumAsByte<EPhysicalSurface>, class UCurveFloat*> PenetrationPowerCurves;                                   // 0x0170(0x0050) (CPF_Edit, CPF_ZeroConstructor)
	float                                              DeflectionRange;                                          // 0x01C0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxSurfacesNum;                                           // 0x01C4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinImpactAngleDeg;                                        // 0x01C8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinDetectableHollowSize;                                  // 0x01CC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinOutSpeed;                                              // 0x01D0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinWaterSpeed;                                            // 0x01D4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.WeaponsPenetrationConfig");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
