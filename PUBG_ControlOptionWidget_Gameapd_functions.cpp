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

// Function ControlOptionWidget_Gameapd.ControlOptionWidget_Gameapd_C.GetGamePadHelpWidgetClass
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  GuideClass                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UControlOptionWidget_Gameapd_C::GetGamePadHelpWidgetClass(class UClass** GuideClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlOptionWidget_Gameapd.ControlOptionWidget_Gameapd_C.GetGamePadHelpWidgetClass");

	UControlOptionWidget_Gameapd_C_GetGamePadHelpWidgetClass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GuideClass != nullptr)
		*GuideClass = params.GuideClass;
}


// Function ControlOptionWidget_Gameapd.ControlOptionWidget_Gameapd_C.OnKeyDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UControlOptionWidget_Gameapd_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlOptionWidget_Gameapd.ControlOptionWidget_Gameapd_C.OnKeyDown");

	UControlOptionWidget_Gameapd_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlOptionWidget_Gameapd.ControlOptionWidget_Gameapd_C.GetCurrentFocusWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UWidget*                 FocusWidget                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UControlOptionWidget_Gameapd_C::GetCurrentFocusWidget(class UWidget** FocusWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlOptionWidget_Gameapd.ControlOptionWidget_Gameapd_C.GetCurrentFocusWidget");

	UControlOptionWidget_Gameapd_C_GetCurrentFocusWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FocusWidget != nullptr)
		*FocusWidget = params.FocusWidget;
}


// Function ControlOptionWidget_Gameapd.ControlOptionWidget_Gameapd_C.IsChanged
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UControlOptionWidget_Gameapd_C::IsChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlOptionWidget_Gameapd.ControlOptionWidget_Gameapd_C.IsChanged");

	UControlOptionWidget_Gameapd_C_IsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlOptionWidget_Gameapd.ControlOptionWidget_Gameapd_C.OnPrevOrNextFocusableWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool*                          bNext                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UWidget*                 FocusableWidget                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UControlOptionWidget_Gameapd_C::OnPrevOrNextFocusableWidget(bool* bNext, class UWidget** FocusableWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlOptionWidget_Gameapd.ControlOptionWidget_Gameapd_C.OnPrevOrNextFocusableWidget");

	UControlOptionWidget_Gameapd_C_OnPrevOrNextFocusableWidget_Params params;
	params.bNext = bNext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FocusableWidget != nullptr)
		*FocusableWidget = params.FocusableWidget;
}


// Function ControlOptionWidget_Gameapd.ControlOptionWidget_Gameapd_C.OnFocusReceived
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UControlOptionWidget_Gameapd_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlOptionWidget_Gameapd.ControlOptionWidget_Gameapd_C.OnFocusReceived");

	UControlOptionWidget_Gameapd_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ControlOptionWidget_Gameapd.ControlOptionWidget_Gameapd_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UControlOptionWidget_Gameapd_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlOptionWidget_Gameapd.ControlOptionWidget_Gameapd_C.Construct");

	UControlOptionWidget_Gameapd_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlOptionWidget_Gameapd.ControlOptionWidget_Gameapd_C.OnDefault
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UControlOptionWidget_Gameapd_C::OnDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlOptionWidget_Gameapd.ControlOptionWidget_Gameapd_C.OnDefault");

	UControlOptionWidget_Gameapd_C_OnDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlOptionWidget_Gameapd.ControlOptionWidget_Gameapd_C.OnReset
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UControlOptionWidget_Gameapd_C::OnReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlOptionWidget_Gameapd.ControlOptionWidget_Gameapd_C.OnReset");

	UControlOptionWidget_Gameapd_C_OnReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlOptionWidget_Gameapd.ControlOptionWidget_Gameapd_C.OnApply
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UControlOptionWidget_Gameapd_C::OnApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlOptionWidget_Gameapd.ControlOptionWidget_Gameapd_C.OnApply");

	UControlOptionWidget_Gameapd_C_OnApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlOptionWidget_Gameapd.ControlOptionWidget_Gameapd_C.ExecuteUbergraph_ControlOptionWidget_Gameapd
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UControlOptionWidget_Gameapd_C::ExecuteUbergraph_ControlOptionWidget_Gameapd(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlOptionWidget_Gameapd.ControlOptionWidget_Gameapd_C.ExecuteUbergraph_ControlOptionWidget_Gameapd");

	UControlOptionWidget_Gameapd_C_ExecuteUbergraph_ControlOptionWidget_Gameapd_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
