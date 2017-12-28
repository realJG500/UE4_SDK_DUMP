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

// Function ListBaseGroupWidget_Gamepad.ListBaseGroupWidget_Gamepad_C.GetChilderenCount
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            Count                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UListBaseGroupWidget_Gamepad_C::GetChilderenCount(int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function ListBaseGroupWidget_Gamepad.ListBaseGroupWidget_Gamepad_C.GetChilderenCount");

	UListBaseGroupWidget_Gamepad_C_GetChilderenCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;
}


// Function ListBaseGroupWidget_Gamepad.ListBaseGroupWidget_Gamepad_C.AddChild
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Content                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)

void UListBaseGroupWidget_Gamepad_C::AddChild(class UWidget** Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function ListBaseGroupWidget_Gamepad.ListBaseGroupWidget_Gamepad_C.AddChild");

	UListBaseGroupWidget_Gamepad_C_AddChild_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Content != nullptr)
		*Content = params.Content;
}


// Function ListBaseGroupWidget_Gamepad.ListBaseGroupWidget_Gamepad_C.Clear
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UListBaseGroupWidget_Gamepad_C::Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function ListBaseGroupWidget_Gamepad.ListBaseGroupWidget_Gamepad_C.Clear");

	UListBaseGroupWidget_Gamepad_C_Clear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ListBaseGroupWidget_Gamepad.ListBaseGroupWidget_Gamepad_C.On_List_Prepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UListBaseGroupWidget_Gamepad_C::On_List_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ListBaseGroupWidget_Gamepad.ListBaseGroupWidget_Gamepad_C.On_List_Prepass_1");

	UListBaseGroupWidget_Gamepad_C_On_List_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ListBaseGroupWidget_Gamepad.ListBaseGroupWidget_Gamepad_C.AddCategoryGroup
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCategoryGroupWidget_Gamepad_C* CategoryGroup                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UListBaseGroupWidget_Gamepad_C::AddCategoryGroup(class UCategoryGroupWidget_Gamepad_C* CategoryGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function ListBaseGroupWidget_Gamepad.ListBaseGroupWidget_Gamepad_C.AddCategoryGroup");

	UListBaseGroupWidget_Gamepad_C_AddCategoryGroup_Params params;
	params.CategoryGroup = CategoryGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
