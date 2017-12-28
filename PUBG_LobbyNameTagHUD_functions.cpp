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

// Function LobbyNameTagHUD.LobbyNameTagHUD_C.CleanUpNameTagWidget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            SlotIndex                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULobbyNameTagHUD_C::CleanUpNameTagWidget(int SlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyNameTagHUD.LobbyNameTagHUD_C.CleanUpNameTagWidget");

	ULobbyNameTagHUD_C_CleanUpNameTagWidget_Params params;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyNameTagHUD.LobbyNameTagHUD_C.SetupNameTagWidget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            SlotIndex                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULobbyNameTagHUD_C::SetupNameTagWidget(int SlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyNameTagHUD.LobbyNameTagHUD_C.SetupNameTagWidget");

	ULobbyNameTagHUD_C_SetupNameTagWidget_Params params;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyNameTagHUD.LobbyNameTagHUD_C.GetNameTagWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            SlotIndex                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UTslLobbyNameTagWidget*  Widget                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULobbyNameTagHUD_C::GetNameTagWidget(int SlotIndex, class UTslLobbyNameTagWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyNameTagHUD.LobbyNameTagHUD_C.GetNameTagWidget");

	ULobbyNameTagHUD_C_GetNameTagWidget_Params params;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function LobbyNameTagHUD.LobbyNameTagHUD_C.On_NameTag_0_Prepass_1
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULobbyNameTagHUD_C::On_NameTag_0_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyNameTagHUD.LobbyNameTagHUD_C.On_NameTag_0_Prepass_1");

	ULobbyNameTagHUD_C_On_NameTag_0_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyNameTagHUD.LobbyNameTagHUD_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ULobbyNameTagHUD_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyNameTagHUD.LobbyNameTagHUD_C.Construct");

	ULobbyNameTagHUD_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyNameTagHUD.LobbyNameTagHUD_C.ExecuteUbergraph_LobbyNameTagHUD
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULobbyNameTagHUD_C::ExecuteUbergraph_LobbyNameTagHUD(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyNameTagHUD.LobbyNameTagHUD_C.ExecuteUbergraph_LobbyNameTagHUD");

	ULobbyNameTagHUD_C_ExecuteUbergraph_LobbyNameTagHUD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
