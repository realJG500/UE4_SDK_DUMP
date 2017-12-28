// PLAYERUNKNOWN'S BATTLEGROUNDS (2.4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.UpdateIconTexture
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCarePackgeItemListWidget_C::UpdateIconTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.UpdateIconTexture");

	UCarePackgeItemListWidget_C_UpdateIconTexture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.FinishCarePackgeItemList
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCarePackgeItemListWidget_C::FinishCarePackgeItemList()
{
	static auto fn = UObject::FindObject<UFunction>("Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.FinishCarePackgeItemList");

	UCarePackgeItemListWidget_C_FinishCarePackgeItemList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.PrepareCarePackgeItemList
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCarePackgeItemListWidget_C::PrepareCarePackgeItemList()
{
	static auto fn = UObject::FindObject<UFunction>("Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.PrepareCarePackgeItemList");

	UCarePackgeItemListWidget_C_PrepareCarePackgeItemList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.HideTextCarePackageEmpty
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCarePackgeItemListWidget_C::HideTextCarePackageEmpty()
{
	static auto fn = UObject::FindObject<UFunction>("Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.HideTextCarePackageEmpty");

	UCarePackgeItemListWidget_C_HideTextCarePackageEmpty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.SetCarePackgeItemList
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCarePackgeItemListWidget_C::SetCarePackgeItemList()
{
	static auto fn = UObject::FindObject<UFunction>("Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.SetCarePackgeItemList");

	UCarePackgeItemListWidget_C_SetCarePackgeItemList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.GetCarePackageItemIcons
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCarePackgeItemListWidget_C::GetCarePackageItemIcons()
{
	static auto fn = UObject::FindObject<UFunction>("Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.GetCarePackageItemIcons");

	UCarePackgeItemListWidget_C_GetCarePackageItemIcons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.HideCarePackageItemList
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCarePackgeItemListWidget_C::HideCarePackageItemList()
{
	static auto fn = UObject::FindObject<UFunction>("Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.HideCarePackageItemList");

	UCarePackgeItemListWidget_C_HideCarePackageItemList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.GetCarePackageItemWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTexture*                ItemIcon                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   ItemName                       (CPF_Parm)
// int                            ItemCount                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UCarePackageItemSlotWidget_C* CarePackageItemSlotWidget      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCarePackgeItemListWidget_C::GetCarePackageItemWidget(class UTexture* ItemIcon, const struct FText& ItemName, int ItemCount, class UCarePackageItemSlotWidget_C** CarePackageItemSlotWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.GetCarePackageItemWidget");

	UCarePackgeItemListWidget_C_GetCarePackageItemWidget_Params params;
	params.ItemIcon = ItemIcon;
	params.ItemName = ItemName;
	params.ItemCount = ItemCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CarePackageItemSlotWidget != nullptr)
		*CarePackageItemSlotWidget = params.CarePackageItemSlotWidget;
}


// Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.ShowCarePackageItemList
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCarePackgeItemListWidget_C::ShowCarePackageItemList()
{
	static auto fn = UObject::FindObject<UFunction>("Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.ShowCarePackageItemList");

	UCarePackgeItemListWidget_C_ShowCarePackageItemList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UCarePackgeItemListWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.Construct");

	UCarePackgeItemListWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.ShowCarePackageItem
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCarePackgeItemListWidget_C::ShowCarePackageItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.ShowCarePackageItem");

	UCarePackgeItemListWidget_C_ShowCarePackageItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.CustomTick
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCarePackgeItemListWidget_C::CustomTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.CustomTick");

	UCarePackgeItemListWidget_C_CustomTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.TimerCheckUpdateList
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCarePackgeItemListWidget_C::TimerCheckUpdateList()
{
	static auto fn = UObject::FindObject<UFunction>("Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.TimerCheckUpdateList");

	UCarePackgeItemListWidget_C_TimerCheckUpdateList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.ExecuteUbergraph_CarePackgeItemListWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCarePackgeItemListWidget_C::ExecuteUbergraph_CarePackgeItemListWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.ExecuteUbergraph_CarePackgeItemListWidget");

	UCarePackgeItemListWidget_C_ExecuteUbergraph_CarePackgeItemListWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.EventDispatcher_ShowCarePackageItem__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCarePackgeItemListWidget_C::EventDispatcher_ShowCarePackageItem__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.EventDispatcher_ShowCarePackageItem__DelegateSignature");

	UCarePackgeItemListWidget_C_EventDispatcher_ShowCarePackageItem__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
