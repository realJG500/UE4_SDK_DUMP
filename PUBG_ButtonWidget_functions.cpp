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

// Function ButtonWidget.ButtonWidget_C.OnKeyDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UButtonWidget_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ButtonWidget.ButtonWidget_C.OnKeyDown");

	UButtonWidget_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ButtonWidget.ButtonWidget_C.OnFocusReceived
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UButtonWidget_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ButtonWidget.ButtonWidget_C.OnFocusReceived");

	UButtonWidget_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ButtonWidget.ButtonWidget_C.MakeBrush
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UTexture2D*              Texture                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FSlateBrush             Brush                          (CPF_Parm, CPF_OutParm)

void UButtonWidget_C::MakeBrush(class UTexture2D* Texture, struct FSlateBrush* Brush)
{
	static auto fn = UObject::FindObject<UFunction>("Function ButtonWidget.ButtonWidget_C.MakeBrush");

	UButtonWidget_C_MakeBrush_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Brush != nullptr)
		*Brush = params.Brush;
}


// Function ButtonWidget.ButtonWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UButtonWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ButtonWidget.ButtonWidget_C.Construct");

	UButtonWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ButtonWidget.ButtonWidget_C.OnButtonFocusReceived_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bHasFocus                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UButtonWidget_C::OnButtonFocusReceived_Event(bool bHasFocus)
{
	static auto fn = UObject::FindObject<UFunction>("Function ButtonWidget.ButtonWidget_C.OnButtonFocusReceived_Event");

	UButtonWidget_C_OnButtonFocusReceived_Event_Params params;
	params.bHasFocus = bHasFocus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ButtonWidget.ButtonWidget_C.OnFocusLost
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FFocusEvent*            InFocusEvent                   (CPF_Parm)

void UButtonWidget_C::OnFocusLost(struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ButtonWidget.ButtonWidget_C.OnFocusLost");

	UButtonWidget_C_OnFocusLost_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ButtonWidget.ButtonWidget_C.BndEvt__Button_32_K2Node_ComponentBoundEvent_118_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UButtonWidget_C::BndEvt__Button_32_K2Node_ComponentBoundEvent_118_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ButtonWidget.ButtonWidget_C.BndEvt__Button_32_K2Node_ComponentBoundEvent_118_OnButtonClickedEvent__DelegateSignature");

	UButtonWidget_C_BndEvt__Button_32_K2Node_ComponentBoundEvent_118_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ButtonWidget.ButtonWidget_C.ExecuteUbergraph_ButtonWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UButtonWidget_C::ExecuteUbergraph_ButtonWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ButtonWidget.ButtonWidget_C.ExecuteUbergraph_ButtonWidget");

	UButtonWidget_C_ExecuteUbergraph_ButtonWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ButtonWidget.ButtonWidget_C.OnGamepadB__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bPressed                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UButtonWidget_C::OnGamepadB__DelegateSignature(bool bPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function ButtonWidget.ButtonWidget_C.OnGamepadB__DelegateSignature");

	UButtonWidget_C_OnGamepadB__DelegateSignature_Params params;
	params.bPressed = bPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ButtonWidget.ButtonWidget_C.OnGamepadA__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bPressed                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UButtonWidget_C::OnGamepadA__DelegateSignature(bool bPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function ButtonWidget.ButtonWidget_C.OnGamepadA__DelegateSignature");

	UButtonWidget_C_OnGamepadA__DelegateSignature_Params params;
	params.bPressed = bPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ButtonWidget.ButtonWidget_C.OnNavigateKeyDown__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_Parm)

void UButtonWidget_C::OnNavigateKeyDown__DelegateSignature(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function ButtonWidget.ButtonWidget_C.OnNavigateKeyDown__DelegateSignature");

	UButtonWidget_C_OnNavigateKeyDown__DelegateSignature_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ButtonWidget.ButtonWidget_C.OnButtonFocusReceived__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bHasFocus                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UButtonWidget_C::OnButtonFocusReceived__DelegateSignature(bool bHasFocus)
{
	static auto fn = UObject::FindObject<UFunction>("Function ButtonWidget.ButtonWidget_C.OnButtonFocusReceived__DelegateSignature");

	UButtonWidget_C_OnButtonFocusReceived__DelegateSignature_Params params;
	params.bHasFocus = bHasFocus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ButtonWidget.ButtonWidget_C.OnClickedEventDispatcher__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UButtonWidget_C::OnClickedEventDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ButtonWidget.ButtonWidget_C.OnClickedEventDispatcher__DelegateSignature");

	UButtonWidget_C_OnClickedEventDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
