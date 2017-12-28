#pragma once

// PLAYERUNKNOWN'S BATTLEGROUNDS (2.4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass BattleListWidget.BattleListWidget_C
// 0x0054 (0x0294 - 0x0240)
class UBattleListWidget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UScrollBox*                                  BattleListScrollBox;                                      // 0x0248(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	class UBorder*                                     BGBOX;                                                    // 0x0250(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	TArray<class ATslCharacter*>                       RefreshedPlayerLIst;                                      // 0x0258(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	unsigned char                                      IsShow : 1;                                               // 0x0268(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<class UPlayerInfoWidget_C*>                 PlayerInfoPool;                                           // 0x0270(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<class UBattleListSubTitle_C*>               BattleListSubTitlePool;                                   // 0x0280(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	int                                                IndexCount;                                               // 0x0290(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BattleListWidget.BattleListWidget_C");
		return ptr;
	}


	void SetBattleListSubTitle(int Index, const struct FString& SubTitle);
	void ClearBattleList();
	void CollapseAllPlayerInfos();
	void SetPlayerInfo(class ATslCharacter* TslCharacter, class UPlayerInfoWidget_C** PlayerInfo);
	void DestructPlayerInfoPool();
	void ConstructPlayerInfoPool();
	void FindCharacterByShortcutNum(int ShortcutNum, class ATslCharacter** Character);
	void AddSubTitle(const struct FString& SubTitle);
	void IsSameTeam(class ATslCharacter* Character1, class ATslCharacter* Character2, bool* retVal);
	void SetNearbyPlayerIndex(int Index);
	void BattleListSetCharacter10();
	void BattleListSetCharacter9();
	void BattleListSetCharacter8();
	void BattleListSetCharacter7();
	void BattleListSetCharacter6();
	void BattleListSetCharacter5();
	void BattleListSetCharacter4();
	void BattleListSetCharacter3();
	void BattleListSetCharacter2();
	void BattleListSetCharacter1();
	void BindKeyBattleList();
	void UpdateEngagedEnemiesList();
	void FindSpectateOrFollowCharacter(class ATslCharacter** TslCharacter);
	void UpdateNearbyPlayersList();
	void FindCharacterByPlayerState(class APlayerState* PlayerState, class ATslCharacter** Character);
	void UpdateOtherEngagementsList();
	void RefreshPlayerList();
	void Construct();
	void CustomTick();
	void TimerCheckUpdateList();
	void Destruct();
	void ExecuteUbergraph_BattleListWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
