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

// Function QualitySliderWidget.QualitySliderWidget_C.GetGamePadHelpWidgetClass
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  GuideClass                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQualitySliderWidget_C::GetGamePadHelpWidgetClass(class UClass** GuideClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function QualitySliderWidget.QualitySliderWidget_C.GetGamePadHelpWidgetClass");

	UQualitySliderWidget_C_GetGamePadHelpWidgetClass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GuideClass != nullptr)
		*GuideClass = params.GuideClass;
}


// Function QualitySliderWidget.QualitySliderWidget_C.OnKeyDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UQualitySliderWidget_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function QualitySliderWidget.QualitySliderWidget_C.OnKeyDown");

	UQualitySliderWidget_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function QualitySliderWidget.QualitySliderWidget_C.OnKeyUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UQualitySliderWidget_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function QualitySliderWidget.QualitySliderWidget_C.OnKeyUp");

	UQualitySliderWidget_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function QualitySliderWidget.QualitySliderWidget_C.ProcessKeyDown
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_Parm)
// struct FEventReply             Reply                          (CPF_Parm, CPF_OutParm)

void UQualitySliderWidget_C::ProcessKeyDown(const struct FKey& Key, struct FEventReply* Reply)
{
	static auto fn = UObject::FindObject<UFunction>("Function QualitySliderWidget.QualitySliderWidget_C.ProcessKeyDown");

	UQualitySliderWidget_C_ProcessKeyDown_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Reply != nullptr)
		*Reply = params.Reply;
}


// Function QualitySliderWidget.QualitySliderWidget_C.OnPrepass_1
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQualitySliderWidget_C::OnPrepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function QualitySliderWidget.QualitySliderWidget_C.OnPrepass_1");

	UQualitySliderWidget_C_OnPrepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QualitySliderWidget.QualitySliderWidget_C.GetValueText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UQualitySliderWidget_C::GetValueText()
{
	static auto fn = UObject::FindObject<UFunction>("Function QualitySliderWidget.QualitySliderWidget_C.GetValueText");

	UQualitySliderWidget_C_GetValueText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function QualitySliderWidget.QualitySliderWidget_C.SetValue
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQualitySliderWidget_C::SetValue(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function QualitySliderWidget.QualitySliderWidget_C.SetValue");

	UQualitySliderWidget_C_SetValue_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QualitySliderWidget.QualitySliderWidget_C.GetQualityName
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UQualitySliderWidget_C::GetQualityName()
{
	static auto fn = UObject::FindObject<UFunction>("Function QualitySliderWidget.QualitySliderWidget_C.GetQualityName");

	UQualitySliderWidget_C_GetQualityName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function QualitySliderWidget.QualitySliderWidget_C.GetValueByRange
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          Value                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQualitySliderWidget_C::GetValueByRange(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function QualitySliderWidget.QualitySliderWidget_C.GetValueByRange");

	UQualitySliderWidget_C_GetValueByRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function QualitySliderWidget.QualitySliderWidget_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_370_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UQualitySliderWidget_C::BndEvt__Button_2_K2Node_ComponentBoundEvent_370_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function QualitySliderWidget.QualitySliderWidget_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_370_OnButtonClickedEvent__DelegateSignature");

	UQualitySliderWidget_C_BndEvt__Button_2_K2Node_ComponentBoundEvent_370_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QualitySliderWidget.QualitySliderWidget_C.BndEvt__RightButotn_K2Node_ComponentBoundEvent_395_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UQualitySliderWidget_C::BndEvt__RightButotn_K2Node_ComponentBoundEvent_395_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function QualitySliderWidget.QualitySliderWidget_C.BndEvt__RightButotn_K2Node_ComponentBoundEvent_395_OnButtonClickedEvent__DelegateSignature");

	UQualitySliderWidget_C_BndEvt__RightButotn_K2Node_ComponentBoundEvent_395_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QualitySliderWidget.QualitySliderWidget_C.BndEvt__EditableText_2_K2Node_ComponentBoundEvent_82_OnEditableTextChangedEvent__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UQualitySliderWidget_C::BndEvt__EditableText_2_K2Node_ComponentBoundEvent_82_OnEditableTextChangedEvent__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function QualitySliderWidget.QualitySliderWidget_C.BndEvt__EditableText_2_K2Node_ComponentBoundEvent_82_OnEditableTextChangedEvent__DelegateSignature");

	UQualitySliderWidget_C_BndEvt__EditableText_2_K2Node_ComponentBoundEvent_82_OnEditableTextChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QualitySliderWidget.QualitySliderWidget_C.ExecuteUbergraph_QualitySliderWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UQualitySliderWidget_C::ExecuteUbergraph_QualitySliderWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function QualitySliderWidget.QualitySliderWidget_C.ExecuteUbergraph_QualitySliderWidget");

	UQualitySliderWidget_C_ExecuteUbergraph_QualitySliderWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
