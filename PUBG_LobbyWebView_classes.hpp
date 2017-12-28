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

// WidgetBlueprintGeneratedClass LobbyWebView.LobbyWebView_C
// 0x0024 (0x0264 - 0x0240)
class ULobbyWebView_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UCoherentUIGTWidget*                         WebView_1;                                                // 0x0248(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	TArray<class UCoherentUIGTWidget*>                 ViewArray;                                                // 0x0250(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	int                                                TickForWebViewVisibilityChange;                           // 0x0260(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LobbyWebView.LobbyWebView_C");
		return ptr;
	}


	void WebViewBroadcast(const struct FString& EventName, const struct FString& Parameter);
	void WebViewUnload(int ViewIndex);
	void WebViewShow(int VeiwIndex, bool Visible);
	void HandleEventFromWeb(class UCoherentUIGTJSPayload* payload);
	void WebViewInputFocus(int ViewIndex);
	void WebViewLoad(int ViewIndex, const struct FString& URL);
	void Construct();
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void Destruct();
	void J_1(class UCoherentUIGTJSPayload* payload);
	void BndEvt__CoherentUIGTWidget_0_K2Node_ComponentBoundEvent_383_UIGTReadyForBindingsSignature__DelegateSignature();
	void PressAKey();
	void PressBKey();
	void ExecuteUbergraph_LobbyWebView(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
