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

// Function BP_InventoryCapacityWidget.BP_InventoryCapacityWidget_C.NotifyItemDropped
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class USlotInterface> Slot                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TScriptInterface<class USlotContainerInterface> SlotContainer                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_InventoryCapacityWidget_C::NotifyItemDropped(const TScriptInterface<class USlotInterface>& Slot, const TScriptInterface<class USlotContainerInterface>& SlotContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InventoryCapacityWidget.BP_InventoryCapacityWidget_C.NotifyItemDropped");

	UBP_InventoryCapacityWidget_C_NotifyItemDropped_Params params;
	params.Slot = Slot;
	params.SlotContainer = SlotContainer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InventoryCapacityWidget.BP_InventoryCapacityWidget_C.NotifyEquipmentItemFocused
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class USlotInterface> SlotInterface                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TScriptInterface<class USlotContainerInterface> SlotContainerInterface         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_InventoryCapacityWidget_C::NotifyEquipmentItemFocused(const TScriptInterface<class USlotInterface>& SlotInterface, const TScriptInterface<class USlotContainerInterface>& SlotContainerInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InventoryCapacityWidget.BP_InventoryCapacityWidget_C.NotifyEquipmentItemFocused");

	UBP_InventoryCapacityWidget_C_NotifyEquipmentItemFocused_Params params;
	params.SlotInterface = SlotInterface;
	params.SlotContainerInterface = SlotContainerInterface;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InventoryCapacityWidget.BP_InventoryCapacityWidget_C.OnStackCountChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class USlotInterface> SlotInterface                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TScriptInterface<class USlotContainerInterface> SlotContainerInterface         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            StackCount                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_InventoryCapacityWidget_C::OnStackCountChanged(const TScriptInterface<class USlotInterface>& SlotInterface, const TScriptInterface<class USlotContainerInterface>& SlotContainerInterface, int StackCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InventoryCapacityWidget.BP_InventoryCapacityWidget_C.OnStackCountChanged");

	UBP_InventoryCapacityWidget_C_OnStackCountChanged_Params params;
	params.SlotInterface = SlotInterface;
	params.SlotContainerInterface = SlotContainerInterface;
	params.StackCount = StackCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InventoryCapacityWidget.BP_InventoryCapacityWidget_C.GetStackCountWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UStackCountHandlingPopupWidget_C* AsStack_Count_Handling_Popup_Widget (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_InventoryCapacityWidget_C::GetStackCountWidget(class UStackCountHandlingPopupWidget_C** AsStack_Count_Handling_Popup_Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InventoryCapacityWidget.BP_InventoryCapacityWidget_C.GetStackCountWidget");

	UBP_InventoryCapacityWidget_C_GetStackCountWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsStack_Count_Handling_Popup_Widget != nullptr)
		*AsStack_Count_Handling_Popup_Widget = params.AsStack_Count_Handling_Popup_Widget;
}


// Function BP_InventoryCapacityWidget.BP_InventoryCapacityWidget_C.NotifyInventoryItemFocused
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class USlotInterface> SlotInterface                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TScriptInterface<class USlotContainerInterface> SlotContainerInterface         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_InventoryCapacityWidget_C::NotifyInventoryItemFocused(const TScriptInterface<class USlotInterface>& SlotInterface, const TScriptInterface<class USlotContainerInterface>& SlotContainerInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InventoryCapacityWidget.BP_InventoryCapacityWidget_C.NotifyInventoryItemFocused");

	UBP_InventoryCapacityWidget_C_NotifyInventoryItemFocused_Params params;
	params.SlotInterface = SlotInterface;
	params.SlotContainerInterface = SlotContainerInterface;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InventoryCapacityWidget.BP_InventoryCapacityWidget_C.ResetMaterialParams
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bResetCapacity                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bResetFeedback                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_InventoryCapacityWidget_C::ResetMaterialParams(bool bResetCapacity, bool bResetFeedback)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InventoryCapacityWidget.BP_InventoryCapacityWidget_C.ResetMaterialParams");

	UBP_InventoryCapacityWidget_C_ResetMaterialParams_Params params;
	params.bResetCapacity = bResetCapacity;
	params.bResetFeedback = bResetFeedback;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InventoryCapacityWidget.BP_InventoryCapacityWidget_C.SetFeedbackMaterialParams
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          FeedbackStart                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          FeedbackEnd                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bIsPositive                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_InventoryCapacityWidget_C::SetFeedbackMaterialParams(float FeedbackStart, float FeedbackEnd, bool bIsPositive)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InventoryCapacityWidget.BP_InventoryCapacityWidget_C.SetFeedbackMaterialParams");

	UBP_InventoryCapacityWidget_C_SetFeedbackMaterialParams_Params params;
	params.FeedbackStart = FeedbackStart;
	params.FeedbackEnd = FeedbackEnd;
	params.bIsPositive = bIsPositive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InventoryCapacityWidget.BP_InventoryCapacityWidget_C.SetCapacityMaterialParams
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          CurrMaxSpaceStart              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          CurrSpaceStart                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_InventoryCapacityWidget_C::SetCapacityMaterialParams(float CurrMaxSpaceStart, float CurrSpaceStart)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InventoryCapacityWidget.BP_InventoryCapacityWidget_C.SetCapacityMaterialParams");

	UBP_InventoryCapacityWidget_C_SetCapacityMaterialParams_Params params;
	params.CurrMaxSpaceStart = CurrMaxSpaceStart;
	params.CurrSpaceStart = CurrSpaceStart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InventoryCapacityWidget.BP_InventoryCapacityWidget_C.NotifyVicinityItemFocused
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class USlotInterface> SlotInterface                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TScriptInterface<class USlotContainerInterface> SlotContainerInterface         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_InventoryCapacityWidget_C::NotifyVicinityItemFocused(const TScriptInterface<class USlotInterface>& SlotInterface, const TScriptInterface<class USlotContainerInterface>& SlotContainerInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InventoryCapacityWidget.BP_InventoryCapacityWidget_C.NotifyVicinityItemFocused");

	UBP_InventoryCapacityWidget_C_NotifyVicinityItemFocused_Params params;
	params.SlotInterface = SlotInterface;
	params.SlotContainerInterface = SlotContainerInterface;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InventoryCapacityWidget.BP_InventoryCapacityWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_InventoryCapacityWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InventoryCapacityWidget.BP_InventoryCapacityWidget_C.Construct");

	UBP_InventoryCapacityWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InventoryCapacityWidget.BP_InventoryCapacityWidget_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_InventoryCapacityWidget_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InventoryCapacityWidget.BP_InventoryCapacityWidget_C.Destruct");

	UBP_InventoryCapacityWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InventoryCapacityWidget.BP_InventoryCapacityWidget_C.OnInventoryUpdated_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_InventoryCapacityWidget_C::OnInventoryUpdated_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InventoryCapacityWidget.BP_InventoryCapacityWidget_C.OnInventoryUpdated_Event_1");

	UBP_InventoryCapacityWidget_C_OnInventoryUpdated_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_InventoryCapacityWidget.BP_InventoryCapacityWidget_C.ExecuteUbergraph_BP_InventoryCapacityWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_InventoryCapacityWidget_C::ExecuteUbergraph_BP_InventoryCapacityWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InventoryCapacityWidget.BP_InventoryCapacityWidget_C.ExecuteUbergraph_BP_InventoryCapacityWidget");

	UBP_InventoryCapacityWidget_C_ExecuteUbergraph_BP_InventoryCapacityWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
