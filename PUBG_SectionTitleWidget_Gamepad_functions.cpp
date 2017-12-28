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

// Function SectionTitleWidget_Gamepad.SectionTitleWidget_Gamepad_C.OnPrepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USectionTitleWidget_Gamepad_C::OnPrepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function SectionTitleWidget_Gamepad.SectionTitleWidget_Gamepad_C.OnPrepass_1");

	USectionTitleWidget_Gamepad_C_OnPrepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SectionTitleWidget_Gamepad.SectionTitleWidget_Gamepad_C.SetSubFocus
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bSubFocus                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USectionTitleWidget_Gamepad_C::SetSubFocus(bool bSubFocus)
{
	static auto fn = UObject::FindObject<UFunction>("Function SectionTitleWidget_Gamepad.SectionTitleWidget_Gamepad_C.SetSubFocus");

	USectionTitleWidget_Gamepad_C_SetSubFocus_Params params;
	params.bSubFocus = bSubFocus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SectionTitleWidget_Gamepad.SectionTitleWidget_Gamepad_C.SetFocus
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bFocus                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USectionTitleWidget_Gamepad_C::SetFocus(bool bFocus)
{
	static auto fn = UObject::FindObject<UFunction>("Function SectionTitleWidget_Gamepad.SectionTitleWidget_Gamepad_C.SetFocus");

	USectionTitleWidget_Gamepad_C_SetFocus_Params params;
	params.bFocus = bFocus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SectionTitleWidget_Gamepad.SectionTitleWidget_Gamepad_C.GetFocusMaterial
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UMaterialInstanceDynamic* FocusMaterial                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USectionTitleWidget_Gamepad_C::GetFocusMaterial(class UMaterialInstanceDynamic** FocusMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function SectionTitleWidget_Gamepad.SectionTitleWidget_Gamepad_C.GetFocusMaterial");

	USectionTitleWidget_Gamepad_C_GetFocusMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FocusMaterial != nullptr)
		*FocusMaterial = params.FocusMaterial;
}


// Function SectionTitleWidget_Gamepad.SectionTitleWidget_Gamepad_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void USectionTitleWidget_Gamepad_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SectionTitleWidget_Gamepad.SectionTitleWidget_Gamepad_C.Construct");

	USectionTitleWidget_Gamepad_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SectionTitleWidget_Gamepad.SectionTitleWidget_Gamepad_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// float*                         InDeltaTime                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USectionTitleWidget_Gamepad_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SectionTitleWidget_Gamepad.SectionTitleWidget_Gamepad_C.Tick");

	USectionTitleWidget_Gamepad_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SectionTitleWidget_Gamepad.SectionTitleWidget_Gamepad_C.ExecuteUbergraph_SectionTitleWidget_Gamepad
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USectionTitleWidget_Gamepad_C::ExecuteUbergraph_SectionTitleWidget_Gamepad(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SectionTitleWidget_Gamepad.SectionTitleWidget_Gamepad_C.ExecuteUbergraph_SectionTitleWidget_Gamepad");

	USectionTitleWidget_Gamepad_C_ExecuteUbergraph_SectionTitleWidget_Gamepad_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
