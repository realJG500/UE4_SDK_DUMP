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

// Function BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.OnMouseButtonDown_1
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UBP_XboxTeamManageWidget_C::OnMouseButtonDown_1(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.OnMouseButtonDown_1");

	UBP_XboxTeamManageWidget_C_OnMouseButtonDown_1_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.HandleButtonB
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_XboxTeamManageWidget_C::HandleButtonB()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.HandleButtonB");

	UBP_XboxTeamManageWidget_C_HandleButtonB_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.OnKeyDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UBP_XboxTeamManageWidget_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.OnKeyDown");

	UBP_XboxTeamManageWidget_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.OnFocusReceived
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UBP_XboxTeamManageWidget_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.OnFocusReceived");

	UBP_XboxTeamManageWidget_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.BndEvt__TeamInfo2_K2Node_ComponentBoundEvent_2_OnGamepadNavigateKeyDown__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_Parm)

void UBP_XboxTeamManageWidget_C::BndEvt__TeamInfo2_K2Node_ComponentBoundEvent_2_OnGamepadNavigateKeyDown__DelegateSignature(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.BndEvt__TeamInfo2_K2Node_ComponentBoundEvent_2_OnGamepadNavigateKeyDown__DelegateSignature");

	UBP_XboxTeamManageWidget_C_BndEvt__TeamInfo2_K2Node_ComponentBoundEvent_2_OnGamepadNavigateKeyDown__DelegateSignature_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.BndEvt__TeamInfo0_K2Node_ComponentBoundEvent_0_OnGamepadA__DelegateSignature
// (FUNC_BlueprintEvent)

void UBP_XboxTeamManageWidget_C::BndEvt__TeamInfo0_K2Node_ComponentBoundEvent_0_OnGamepadA__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.BndEvt__TeamInfo0_K2Node_ComponentBoundEvent_0_OnGamepadA__DelegateSignature");

	UBP_XboxTeamManageWidget_C_BndEvt__TeamInfo0_K2Node_ComponentBoundEvent_0_OnGamepadA__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.BndEvt__TeamInfo1_K2Node_ComponentBoundEvent_1_OnGamepadA__DelegateSignature
// (FUNC_BlueprintEvent)

void UBP_XboxTeamManageWidget_C::BndEvt__TeamInfo1_K2Node_ComponentBoundEvent_1_OnGamepadA__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.BndEvt__TeamInfo1_K2Node_ComponentBoundEvent_1_OnGamepadA__DelegateSignature");

	UBP_XboxTeamManageWidget_C_BndEvt__TeamInfo1_K2Node_ComponentBoundEvent_1_OnGamepadA__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.BndEvt__TeamInfo2_K2Node_ComponentBoundEvent_2_OnGamepadA__DelegateSignature
// (FUNC_BlueprintEvent)

void UBP_XboxTeamManageWidget_C::BndEvt__TeamInfo2_K2Node_ComponentBoundEvent_2_OnGamepadA__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.BndEvt__TeamInfo2_K2Node_ComponentBoundEvent_2_OnGamepadA__DelegateSignature");

	UBP_XboxTeamManageWidget_C_BndEvt__TeamInfo2_K2Node_ComponentBoundEvent_2_OnGamepadA__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.BndEvt__TeamInfo1_K2Node_ComponentBoundEvent_1_OnGamepadNavigateKeyDown__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_Parm)

void UBP_XboxTeamManageWidget_C::BndEvt__TeamInfo1_K2Node_ComponentBoundEvent_1_OnGamepadNavigateKeyDown__DelegateSignature(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.BndEvt__TeamInfo1_K2Node_ComponentBoundEvent_1_OnGamepadNavigateKeyDown__DelegateSignature");

	UBP_XboxTeamManageWidget_C_BndEvt__TeamInfo1_K2Node_ComponentBoundEvent_1_OnGamepadNavigateKeyDown__DelegateSignature_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.BndEvt__TeamInfo0_K2Node_ComponentBoundEvent_3_OnGamepadB__DelegateSignature
// (FUNC_BlueprintEvent)

void UBP_XboxTeamManageWidget_C::BndEvt__TeamInfo0_K2Node_ComponentBoundEvent_3_OnGamepadB__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.BndEvt__TeamInfo0_K2Node_ComponentBoundEvent_3_OnGamepadB__DelegateSignature");

	UBP_XboxTeamManageWidget_C_BndEvt__TeamInfo0_K2Node_ComponentBoundEvent_3_OnGamepadB__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.BndEvt__TeamInfo1_K2Node_ComponentBoundEvent_4_OnGamepadB__DelegateSignature
// (FUNC_BlueprintEvent)

void UBP_XboxTeamManageWidget_C::BndEvt__TeamInfo1_K2Node_ComponentBoundEvent_4_OnGamepadB__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.BndEvt__TeamInfo1_K2Node_ComponentBoundEvent_4_OnGamepadB__DelegateSignature");

	UBP_XboxTeamManageWidget_C_BndEvt__TeamInfo1_K2Node_ComponentBoundEvent_4_OnGamepadB__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.BndEvt__TeamInfo2_K2Node_ComponentBoundEvent_5_OnGamepadB__DelegateSignature
// (FUNC_BlueprintEvent)

void UBP_XboxTeamManageWidget_C::BndEvt__TeamInfo2_K2Node_ComponentBoundEvent_5_OnGamepadB__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.BndEvt__TeamInfo2_K2Node_ComponentBoundEvent_5_OnGamepadB__DelegateSignature");

	UBP_XboxTeamManageWidget_C_BndEvt__TeamInfo2_K2Node_ComponentBoundEvent_5_OnGamepadB__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.BndEvt__TeamInfo0_K2Node_ComponentBoundEvent_0_OnGamepadNavigateKeyDown__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_Parm)

void UBP_XboxTeamManageWidget_C::BndEvt__TeamInfo0_K2Node_ComponentBoundEvent_0_OnGamepadNavigateKeyDown__DelegateSignature(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.BndEvt__TeamInfo0_K2Node_ComponentBoundEvent_0_OnGamepadNavigateKeyDown__DelegateSignature");

	UBP_XboxTeamManageWidget_C_BndEvt__TeamInfo0_K2Node_ComponentBoundEvent_0_OnGamepadNavigateKeyDown__DelegateSignature_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.BndEvt__TeamInfo0_K2Node_ComponentBoundEvent_6_OnGamepadX__DelegateSignature
// (FUNC_BlueprintEvent)

void UBP_XboxTeamManageWidget_C::BndEvt__TeamInfo0_K2Node_ComponentBoundEvent_6_OnGamepadX__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.BndEvt__TeamInfo0_K2Node_ComponentBoundEvent_6_OnGamepadX__DelegateSignature");

	UBP_XboxTeamManageWidget_C_BndEvt__TeamInfo0_K2Node_ComponentBoundEvent_6_OnGamepadX__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.BndEvt__TeamInfo1_K2Node_ComponentBoundEvent_7_OnGamepadX__DelegateSignature
// (FUNC_BlueprintEvent)

void UBP_XboxTeamManageWidget_C::BndEvt__TeamInfo1_K2Node_ComponentBoundEvent_7_OnGamepadX__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.BndEvt__TeamInfo1_K2Node_ComponentBoundEvent_7_OnGamepadX__DelegateSignature");

	UBP_XboxTeamManageWidget_C_BndEvt__TeamInfo1_K2Node_ComponentBoundEvent_7_OnGamepadX__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.BndEvt__TeamInfo2_K2Node_ComponentBoundEvent_8_OnGamepadX__DelegateSignature
// (FUNC_BlueprintEvent)

void UBP_XboxTeamManageWidget_C::BndEvt__TeamInfo2_K2Node_ComponentBoundEvent_8_OnGamepadX__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.BndEvt__TeamInfo2_K2Node_ComponentBoundEvent_8_OnGamepadX__DelegateSignature");

	UBP_XboxTeamManageWidget_C_BndEvt__TeamInfo2_K2Node_ComponentBoundEvent_8_OnGamepadX__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.ExecuteUbergraph_BP_XboxTeamManageWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_XboxTeamManageWidget_C::ExecuteUbergraph_BP_XboxTeamManageWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_XboxTeamManageWidget.BP_XboxTeamManageWidget_C.ExecuteUbergraph_BP_XboxTeamManageWidget");

	UBP_XboxTeamManageWidget_C_ExecuteUbergraph_BP_XboxTeamManageWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
