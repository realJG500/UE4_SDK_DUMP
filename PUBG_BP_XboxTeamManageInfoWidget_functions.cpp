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

// Function BP_XboxTeamManageInfoWidget.BP_XboxTeamManageInfoWidget_C.OnKeyDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UBP_XboxTeamManageInfoWidget_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_XboxTeamManageInfoWidget.BP_XboxTeamManageInfoWidget_C.OnKeyDown");

	UBP_XboxTeamManageInfoWidget_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_XboxTeamManageInfoWidget.BP_XboxTeamManageInfoWidget_C.OnFocusReceived
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UBP_XboxTeamManageInfoWidget_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_XboxTeamManageInfoWidget.BP_XboxTeamManageInfoWidget_C.OnFocusReceived");

	UBP_XboxTeamManageInfoWidget_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_XboxTeamManageInfoWidget.BP_XboxTeamManageInfoWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_XboxTeamManageInfoWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_XboxTeamManageInfoWidget.BP_XboxTeamManageInfoWidget_C.Construct");

	UBP_XboxTeamManageInfoWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_XboxTeamManageInfoWidget.BP_XboxTeamManageInfoWidget_C.OnFocusLost
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FFocusEvent*            InFocusEvent                   (CPF_Parm)

void UBP_XboxTeamManageInfoWidget_C::OnFocusLost(struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_XboxTeamManageInfoWidget.BP_XboxTeamManageInfoWidget_C.OnFocusLost");

	UBP_XboxTeamManageInfoWidget_C_OnFocusLost_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_XboxTeamManageInfoWidget.BP_XboxTeamManageInfoWidget_C.UpdateUserNameText
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FName*                  InUserName                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_XboxTeamManageInfoWidget_C::UpdateUserNameText(struct FName* InUserName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_XboxTeamManageInfoWidget.BP_XboxTeamManageInfoWidget_C.UpdateUserNameText");

	UBP_XboxTeamManageInfoWidget_C_UpdateUserNameText_Params params;
	params.InUserName = InUserName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_XboxTeamManageInfoWidget.BP_XboxTeamManageInfoWidget_C.UpdateVoiceIcon
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool*                          InbVoiceMute                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_XboxTeamManageInfoWidget_C::UpdateVoiceIcon(bool* InbVoiceMute)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_XboxTeamManageInfoWidget.BP_XboxTeamManageInfoWidget_C.UpdateVoiceIcon");

	UBP_XboxTeamManageInfoWidget_C_UpdateVoiceIcon_Params params;
	params.InbVoiceMute = InbVoiceMute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_XboxTeamManageInfoWidget.BP_XboxTeamManageInfoWidget_C.ExecuteUbergraph_BP_XboxTeamManageInfoWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_XboxTeamManageInfoWidget_C::ExecuteUbergraph_BP_XboxTeamManageInfoWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_XboxTeamManageInfoWidget.BP_XboxTeamManageInfoWidget_C.ExecuteUbergraph_BP_XboxTeamManageInfoWidget");

	UBP_XboxTeamManageInfoWidget_C_ExecuteUbergraph_BP_XboxTeamManageInfoWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_XboxTeamManageInfoWidget.BP_XboxTeamManageInfoWidget_C.OnGamepadX__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_XboxTeamManageInfoWidget_C::OnGamepadX__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_XboxTeamManageInfoWidget.BP_XboxTeamManageInfoWidget_C.OnGamepadX__DelegateSignature");

	UBP_XboxTeamManageInfoWidget_C_OnGamepadX__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_XboxTeamManageInfoWidget.BP_XboxTeamManageInfoWidget_C.OnGamepadB__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_XboxTeamManageInfoWidget_C::OnGamepadB__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_XboxTeamManageInfoWidget.BP_XboxTeamManageInfoWidget_C.OnGamepadB__DelegateSignature");

	UBP_XboxTeamManageInfoWidget_C_OnGamepadB__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_XboxTeamManageInfoWidget.BP_XboxTeamManageInfoWidget_C.OnGamepadA__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_XboxTeamManageInfoWidget_C::OnGamepadA__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_XboxTeamManageInfoWidget.BP_XboxTeamManageInfoWidget_C.OnGamepadA__DelegateSignature");

	UBP_XboxTeamManageInfoWidget_C_OnGamepadA__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_XboxTeamManageInfoWidget.BP_XboxTeamManageInfoWidget_C.OnGamepadNavigateKeyDown__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_Parm)

void UBP_XboxTeamManageInfoWidget_C::OnGamepadNavigateKeyDown__DelegateSignature(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_XboxTeamManageInfoWidget.BP_XboxTeamManageInfoWidget_C.OnGamepadNavigateKeyDown__DelegateSignature");

	UBP_XboxTeamManageInfoWidget_C_OnGamepadNavigateKeyDown__DelegateSignature_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
