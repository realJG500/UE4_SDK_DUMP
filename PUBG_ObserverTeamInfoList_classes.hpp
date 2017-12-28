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

// WidgetBlueprintGeneratedClass ObserverTeamInfoList.ObserverTeamInfoList_C
// 0x0030 (0x0270 - 0x0240)
class UObserverTeamInfoList_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UVerticalBox*                                TeamList;                                                 // 0x0248(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	TArray<class ATslCharacter*>                       RefreshedPlayerLIst;                                      // 0x0250(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	TArray<class USquadPlayerInfoWidget_C*>            SquadPlayerInfoPool;                                      // 0x0260(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ObserverTeamInfoList.ObserverTeamInfoList_C");
		return ptr;
	}


	void On_TeamList_Prepass_2(class UWidget* BoundWidget);
	void CollapseAllSquadPlayerInfos();
	void SetSquadPlayerInfo(int Index, class ATslCharacter* TslCharacter, class USquadPlayerInfoWidget_C** SquadPlayerInfo);
	void DestructSquadPlayerInfoPool();
	void ConstructSquadPlayerInfoPool();
	void On_TeamList_Prepass_1(class UWidget* BoundWidget);
	void IsSameTeam(class ATslCharacter* Character1, class ATslCharacter* Character2, bool* retVal);
	void FindSpectateOrFollowCharacter(class ATslCharacter** TslCharacter);
	void UpdateTeamList();
	void Construct();
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void CustomTick();
	void TimerCheckUpdateList();
	void Destruct();
	void ExecuteUbergraph_ObserverTeamInfoList(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
