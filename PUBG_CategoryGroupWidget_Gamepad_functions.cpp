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

// Function CategoryGroupWidget_Gamepad.CategoryGroupWidget_Gamepad_C.AddChild
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)

void UCategoryGroupWidget_Gamepad_C::AddChild(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function CategoryGroupWidget_Gamepad.CategoryGroupWidget_Gamepad_C.AddChild");

	UCategoryGroupWidget_Gamepad_C_AddChild_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function CategoryGroupWidget_Gamepad.CategoryGroupWidget_Gamepad_C.GetChilderenCount
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            Count                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCategoryGroupWidget_Gamepad_C::GetChilderenCount(int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function CategoryGroupWidget_Gamepad.CategoryGroupWidget_Gamepad_C.GetChilderenCount");

	UCategoryGroupWidget_Gamepad_C_GetChilderenCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;
}


// Function CategoryGroupWidget_Gamepad.CategoryGroupWidget_Gamepad_C.Clear
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCategoryGroupWidget_Gamepad_C::Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function CategoryGroupWidget_Gamepad.CategoryGroupWidget_Gamepad_C.Clear");

	UCategoryGroupWidget_Gamepad_C_Clear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CategoryGroupWidget_Gamepad.CategoryGroupWidget_Gamepad_C.OnPrepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCategoryGroupWidget_Gamepad_C::OnPrepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function CategoryGroupWidget_Gamepad.CategoryGroupWidget_Gamepad_C.OnPrepass_1");

	UCategoryGroupWidget_Gamepad_C_OnPrepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CategoryGroupWidget_Gamepad.CategoryGroupWidget_Gamepad_C.AddItemSlot
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UItemSlotWidget_Gamepad_C* ItemSlotWidget                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)

void UCategoryGroupWidget_Gamepad_C::AddItemSlot(class UItemSlotWidget_Gamepad_C** ItemSlotWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function CategoryGroupWidget_Gamepad.CategoryGroupWidget_Gamepad_C.AddItemSlot");

	UCategoryGroupWidget_Gamepad_C_AddItemSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemSlotWidget != nullptr)
		*ItemSlotWidget = params.ItemSlotWidget;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
