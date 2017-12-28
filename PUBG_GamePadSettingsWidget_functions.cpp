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

// Function GamePadSettingsWidget.GamePadSettingsWidget_C.GetGamePadHelpWidgetClass
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  GuideClass                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UGamePadSettingsWidget_C::GetGamePadHelpWidgetClass(class UClass** GuideClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamePadSettingsWidget.GamePadSettingsWidget_C.GetGamePadHelpWidgetClass");

	UGamePadSettingsWidget_C_GetGamePadHelpWidgetClass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GuideClass != nullptr)
		*GuideClass = params.GuideClass;
}


// Function GamePadSettingsWidget.GamePadSettingsWidget_C.OnKeyDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UGamePadSettingsWidget_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamePadSettingsWidget.GamePadSettingsWidget_C.OnKeyDown");

	UGamePadSettingsWidget_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GamePadSettingsWidget.GamePadSettingsWidget_C.OnPrevOrNextFocusableWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool*                          bNext                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UWidget*                 FocusableWidget                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UGamePadSettingsWidget_C::OnPrevOrNextFocusableWidget(bool* bNext, class UWidget** FocusableWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamePadSettingsWidget.GamePadSettingsWidget_C.OnPrevOrNextFocusableWidget");

	UGamePadSettingsWidget_C_OnPrevOrNextFocusableWidget_Params params;
	params.bNext = bNext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FocusableWidget != nullptr)
		*FocusableWidget = params.FocusableWidget;
}


// Function GamePadSettingsWidget.GamePadSettingsWidget_C.GetCurrentFocusWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UWidget*                 FocusWidget                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UGamePadSettingsWidget_C::GetCurrentFocusWidget(class UWidget** FocusWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamePadSettingsWidget.GamePadSettingsWidget_C.GetCurrentFocusWidget");

	UGamePadSettingsWidget_C_GetCurrentFocusWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FocusWidget != nullptr)
		*FocusWidget = params.FocusWidget;
}


// Function GamePadSettingsWidget.GamePadSettingsWidget_C.GetFocusableWidgetByIndex
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UWidget*                 Widget                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UGamePadSettingsWidget_C::GetFocusableWidgetByIndex(int Index, class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamePadSettingsWidget.GamePadSettingsWidget_C.GetFocusableWidgetByIndex");

	UGamePadSettingsWidget_C_GetFocusableWidgetByIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function GamePadSettingsWidget.GamePadSettingsWidget_C.Test
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGamePadSettingsWidget_C::Test()
{
	static auto fn = UObject::FindObject<UFunction>("Function GamePadSettingsWidget.GamePadSettingsWidget_C.Test");

	UGamePadSettingsWidget_C_Test_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamePadSettingsWidget.GamePadSettingsWidget_C.IsEnableApply
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UGamePadSettingsWidget_C::IsEnableApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function GamePadSettingsWidget.GamePadSettingsWidget_C.IsEnableApply");

	UGamePadSettingsWidget_C_IsEnableApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GamePadSettingsWidget.GamePadSettingsWidget_C.initailizeMouseSettingsWidget
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsDefaultSetting              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UGamePadSettingsWidget_C::initailizeMouseSettingsWidget(bool bIsDefaultSetting)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamePadSettingsWidget.GamePadSettingsWidget_C.initailizeMouseSettingsWidget");

	UGamePadSettingsWidget_C_initailizeMouseSettingsWidget_Params params;
	params.bIsDefaultSetting = bIsDefaultSetting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamePadSettingsWidget.GamePadSettingsWidget_C.IsChanged
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UGamePadSettingsWidget_C::IsChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function GamePadSettingsWidget.GamePadSettingsWidget_C.IsChanged");

	UGamePadSettingsWidget_C_IsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GamePadSettingsWidget.GamePadSettingsWidget_C.OnDefault
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGamePadSettingsWidget_C::OnDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function GamePadSettingsWidget.GamePadSettingsWidget_C.OnDefault");

	UGamePadSettingsWidget_C_OnDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamePadSettingsWidget.GamePadSettingsWidget_C.OnApply
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGamePadSettingsWidget_C::OnApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function GamePadSettingsWidget.GamePadSettingsWidget_C.OnApply");

	UGamePadSettingsWidget_C_OnApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamePadSettingsWidget.GamePadSettingsWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UGamePadSettingsWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function GamePadSettingsWidget.GamePadSettingsWidget_C.Construct");

	UGamePadSettingsWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamePadSettingsWidget.GamePadSettingsWidget_C.OnReset
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGamePadSettingsWidget_C::OnReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function GamePadSettingsWidget.GamePadSettingsWidget_C.OnReset");

	UGamePadSettingsWidget_C_OnReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamePadSettingsWidget.GamePadSettingsWidget_C.OnFocusLost
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FFocusEvent*            InFocusEvent                   (CPF_Parm)

void UGamePadSettingsWidget_C::OnFocusLost(struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamePadSettingsWidget.GamePadSettingsWidget_C.OnFocusLost");

	UGamePadSettingsWidget_C_OnFocusLost_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamePadSettingsWidget.GamePadSettingsWidget_C.ExecuteUbergraph_GamePadSettingsWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UGamePadSettingsWidget_C::ExecuteUbergraph_GamePadSettingsWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamePadSettingsWidget.GamePadSettingsWidget_C.ExecuteUbergraph_GamePadSettingsWidget");

	UGamePadSettingsWidget_C_ExecuteUbergraph_GamePadSettingsWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
