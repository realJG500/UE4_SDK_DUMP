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

// Function TslDataSteperWidget.TslDataSteperWidget_C.GetGamePadHelpWidgetClass
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  GuideClass                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslDataSteperWidget_C::GetGamePadHelpWidgetClass(class UClass** GuideClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslDataSteperWidget.TslDataSteperWidget_C.GetGamePadHelpWidgetClass");

	UTslDataSteperWidget_C_GetGamePadHelpWidgetClass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GuideClass != nullptr)
		*GuideClass = params.GuideClass;
}


// Function TslDataSteperWidget.TslDataSteperWidget_C.PrevOption
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTslDataSteperWidget_C::PrevOption()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslDataSteperWidget.TslDataSteperWidget_C.PrevOption");

	UTslDataSteperWidget_C_PrevOption_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslDataSteperWidget.TslDataSteperWidget_C.NextOption
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTslDataSteperWidget_C::NextOption()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslDataSteperWidget.TslDataSteperWidget_C.NextOption");

	UTslDataSteperWidget_C_NextOption_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslDataSteperWidget.TslDataSteperWidget_C.SetSelectedOption
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 SelectOption                   (CPF_Parm, CPF_ZeroConstructor)

void UTslDataSteperWidget_C::SetSelectedOption(const struct FString& SelectOption)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslDataSteperWidget.TslDataSteperWidget_C.SetSelectedOption");

	UTslDataSteperWidget_C_SetSelectedOption_Params params;
	params.SelectOption = SelectOption;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslDataSteperWidget.TslDataSteperWidget_C.AddOption
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 NewOption                      (CPF_Parm, CPF_ZeroConstructor)

void UTslDataSteperWidget_C::AddOption(const struct FString& NewOption)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslDataSteperWidget.TslDataSteperWidget_C.AddOption");

	UTslDataSteperWidget_C_AddOption_Params params;
	params.NewOption = NewOption;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslDataSteperWidget.TslDataSteperWidget_C.ClearOption
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTslDataSteperWidget_C::ClearOption()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslDataSteperWidget.TslDataSteperWidget_C.ClearOption");

	UTslDataSteperWidget_C_ClearOption_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslDataSteperWidget.TslDataSteperWidget_C.GetSelectedOption
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FString                 SelectOption                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UTslDataSteperWidget_C::GetSelectedOption(struct FString* SelectOption)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslDataSteperWidget.TslDataSteperWidget_C.GetSelectedOption");

	UTslDataSteperWidget_C_GetSelectedOption_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SelectOption != nullptr)
		*SelectOption = params.SelectOption;
}


// Function TslDataSteperWidget.TslDataSteperWidget_C.OnKeyDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UTslDataSteperWidget_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslDataSteperWidget.TslDataSteperWidget_C.OnKeyDown");

	UTslDataSteperWidget_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslDataSteperWidget.TslDataSteperWidget_C.OnKeyUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UTslDataSteperWidget_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslDataSteperWidget.TslDataSteperWidget_C.OnKeyUp");

	UTslDataSteperWidget_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslDataSteperWidget.TslDataSteperWidget_C.ProcessKeyDown
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_Parm)
// struct FEventReply             Reply                          (CPF_Parm, CPF_OutParm)

void UTslDataSteperWidget_C::ProcessKeyDown(const struct FKey& Key, struct FEventReply* Reply)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslDataSteperWidget.TslDataSteperWidget_C.ProcessKeyDown");

	UTslDataSteperWidget_C_ProcessKeyDown_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Reply != nullptr)
		*Reply = params.Reply;
}


// Function TslDataSteperWidget.TslDataSteperWidget_C.OnFocusReceived
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UTslDataSteperWidget_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslDataSteperWidget.TslDataSteperWidget_C.OnFocusReceived");

	UTslDataSteperWidget_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslDataSteperWidget.TslDataSteperWidget_C.OnPrepass_1
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTslDataSteperWidget_C::OnPrepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslDataSteperWidget.TslDataSteperWidget_C.OnPrepass_1");

	UTslDataSteperWidget_C_OnPrepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslDataSteperWidget.TslDataSteperWidget_C.GetDisplayName
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UTslDataSteperWidget_C::GetDisplayName()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslDataSteperWidget.TslDataSteperWidget_C.GetDisplayName");

	UTslDataSteperWidget_C_GetDisplayName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
