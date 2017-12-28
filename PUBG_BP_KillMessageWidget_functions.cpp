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

// Function BP_KillMessageWidget.BP_KillMessageWidget_C.SetMessageColorAndOpacity
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (CPF_Parm, CPF_IsPlainOldData)

void UBP_KillMessageWidget_C::SetMessageColorAndOpacity(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KillMessageWidget.BP_KillMessageWidget_C.SetMessageColorAndOpacity");

	UBP_KillMessageWidget_C_SetMessageColorAndOpacity_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KillMessageWidget.BP_KillMessageWidget_C.SetFontStyleAndSize
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTextBlock*              Text                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   Style                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Size                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_KillMessageWidget_C::SetFontStyleAndSize(class UTextBlock* Text, const struct FName& Style, int Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KillMessageWidget.BP_KillMessageWidget_C.SetFontStyleAndSize");

	UBP_KillMessageWidget_C_SetFontStyleAndSize_Params params;
	params.Text = Text;
	params.Style = Style;
	params.Size = Size;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KillMessageWidget.BP_KillMessageWidget_C.SetLayoutTo
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsHighlight                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_KillMessageWidget_C::SetLayoutTo(bool bIsHighlight)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KillMessageWidget.BP_KillMessageWidget_C.SetLayoutTo");

	UBP_KillMessageWidget_C_SetLayoutTo_Params params;
	params.bIsHighlight = bIsHighlight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KillMessageWidget.BP_KillMessageWidget_C.SetDeathMessage_Implementation
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDeathMessage           DeathMessage                   (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UBP_KillMessageWidget_C::SetDeathMessage_Implementation(struct FDeathMessage* DeathMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KillMessageWidget.BP_KillMessageWidget_C.SetDeathMessage_Implementation");

	UBP_KillMessageWidget_C_SetDeathMessage_Implementation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DeathMessage != nullptr)
		*DeathMessage = params.DeathMessage;
}


// Function BP_KillMessageWidget.BP_KillMessageWidget_C.SetDeathMessage
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FDeathMessage*          InDeathMessage                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UBP_KillMessageWidget_C::SetDeathMessage(struct FDeathMessage* InDeathMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KillMessageWidget.BP_KillMessageWidget_C.SetDeathMessage");

	UBP_KillMessageWidget_C_SetDeathMessage_Params params;
	params.InDeathMessage = InDeathMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_KillMessageWidget.BP_KillMessageWidget_C.ExecuteUbergraph_BP_KillMessageWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_KillMessageWidget_C::ExecuteUbergraph_BP_KillMessageWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KillMessageWidget.BP_KillMessageWidget_C.ExecuteUbergraph_BP_KillMessageWidget");

	UBP_KillMessageWidget_C_ExecuteUbergraph_BP_KillMessageWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
