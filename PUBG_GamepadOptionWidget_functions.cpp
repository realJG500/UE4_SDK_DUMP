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

// Function GamepadOptionWidget.GamepadOptionWidget_C.ClearGuide
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UGamepadOptionWidget_C::ClearGuide()
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadOptionWidget.GamepadOptionWidget_C.ClearGuide");

	UGamepadOptionWidget_C_ClearGuide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamepadOptionWidget.GamepadOptionWidget_C.OnPrepass_LTorRTVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UGamepadOptionWidget_C::OnPrepass_LTorRTVisibility(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadOptionWidget.GamepadOptionWidget_C.OnPrepass_LTorRTVisibility");

	UGamepadOptionWidget_C_OnPrepass_LTorRTVisibility_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamepadOptionWidget.GamepadOptionWidget_C.OnKeyDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UGamepadOptionWidget_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadOptionWidget.GamepadOptionWidget_C.OnKeyDown");

	UGamepadOptionWidget_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GamepadOptionWidget.GamepadOptionWidget_C.On_GuideLayer_Prepass_1
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UGamepadOptionWidget_C::On_GuideLayer_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadOptionWidget.GamepadOptionWidget_C.On_GuideLayer_Prepass_1");

	UGamepadOptionWidget_C_On_GuideLayer_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamepadOptionWidget.GamepadOptionWidget_C.On_CONTROL_Prepass_1
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UGamepadOptionWidget_C::On_CONTROL_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadOptionWidget.GamepadOptionWidget_C.On_CONTROL_Prepass_1");

	UGamepadOptionWidget_C_On_CONTROL_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamepadOptionWidget.GamepadOptionWidget_C.PrevOrNextPage
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bNext                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FEventReply             Reply                          (CPF_Parm, CPF_OutParm)

void UGamepadOptionWidget_C::PrevOrNextPage(bool bNext, struct FEventReply* Reply)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadOptionWidget.GamepadOptionWidget_C.PrevOrNextPage");

	UGamepadOptionWidget_C_PrevOrNextPage_Params params;
	params.bNext = bNext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Reply != nullptr)
		*Reply = params.Reply;
}


// Function GamepadOptionWidget.GamepadOptionWidget_C.OnFocusReceived
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UGamepadOptionWidget_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadOptionWidget.GamepadOptionWidget_C.OnFocusReceived");

	UGamepadOptionWidget_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GamepadOptionWidget.GamepadOptionWidget_C.ProcessKeyDown
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_Parm)
// struct FEventReply             Replay                         (CPF_Parm, CPF_OutParm)

void UGamepadOptionWidget_C::ProcessKeyDown(const struct FKey& Key, struct FEventReply* Replay)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadOptionWidget.GamepadOptionWidget_C.ProcessKeyDown");

	UGamepadOptionWidget_C_ProcessKeyDown_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Replay != nullptr)
		*Replay = params.Replay;
}


// Function GamepadOptionWidget.GamepadOptionWidget_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UGamepadOptionWidget_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadOptionWidget.GamepadOptionWidget_C.Destruct");

	UGamepadOptionWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamepadOptionWidget.GamepadOptionWidget_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// float*                         InDeltaTime                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UGamepadOptionWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadOptionWidget.GamepadOptionWidget_C.Tick");

	UGamepadOptionWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamepadOptionWidget.GamepadOptionWidget_C.ExecuteUbergraph_GamepadOptionWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UGamepadOptionWidget_C::ExecuteUbergraph_GamepadOptionWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadOptionWidget.GamepadOptionWidget_C.ExecuteUbergraph_GamepadOptionWidget");

	UGamepadOptionWidget_C_ExecuteUbergraph_GamepadOptionWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
