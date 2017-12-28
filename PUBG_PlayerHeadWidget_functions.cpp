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

// Function PlayerHeadWidget.PlayerHeadWidget_C.UpdateHealthGaugeColor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerHeadWidget_C::UpdateHealthGaugeColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHeadWidget.PlayerHeadWidget_C.UpdateHealthGaugeColor");

	UPlayerHeadWidget_C_UpdateHealthGaugeColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.AddAlphaWhenADS
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPlayerHeadWidget_C::AddAlphaWhenADS(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHeadWidget.PlayerHeadWidget_C.AddAlphaWhenADS");

	UPlayerHeadWidget_C_AddAlphaWhenADS_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.IsEmptyPlayerName
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           EmptyPlayerName                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPlayerHeadWidget_C::IsEmptyPlayerName(bool* EmptyPlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHeadWidget.PlayerHeadWidget_C.IsEmptyPlayerName");

	UPlayerHeadWidget_C_IsEmptyPlayerName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EmptyPlayerName != nullptr)
		*EmptyPlayerName = params.EmptyPlayerName;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.UpdateTextColor
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerHeadWidget_C::UpdateTextColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHeadWidget.PlayerHeadWidget_C.UpdateTextColor");

	UPlayerHeadWidget_C_UpdateTextColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.IsGroggy
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           IsGroggy                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPlayerHeadWidget_C::IsGroggy(bool* IsGroggy)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHeadWidget.PlayerHeadWidget_C.IsGroggy");

	UPlayerHeadWidget_C_IsGroggy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsGroggy != nullptr)
		*IsGroggy = params.IsGroggy;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.GetHealthPercent
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          Health                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPlayerHeadWidget_C::GetHealthPercent(float* Health)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHeadWidget.PlayerHeadWidget_C.GetHealthPercent");

	UPlayerHeadWidget_C_GetHealthPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Health != nullptr)
		*Health = params.Health;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.GetGroggyHealthPercent
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          GroggyHealth                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPlayerHeadWidget_C::GetGroggyHealthPercent(float* GroggyHealth)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHeadWidget.PlayerHeadWidget_C.GetGroggyHealthPercent");

	UPlayerHeadWidget_C_GetGroggyHealthPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GroggyHealth != nullptr)
		*GroggyHealth = params.GroggyHealth;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.UpdateHealthGauge
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerHeadWidget_C::UpdateHealthGauge()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHeadWidget.PlayerHeadWidget_C.UpdateHealthGauge");

	UPlayerHeadWidget_C_UpdateHealthGauge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.CustomTick
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerHeadWidget_C::CustomTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHeadWidget.PlayerHeadWidget_C.CustomTick");

	UPlayerHeadWidget_C_CustomTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.TimerCheckUpdateList
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerHeadWidget_C::TimerCheckUpdateList()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHeadWidget.PlayerHeadWidget_C.TimerCheckUpdateList");

	UPlayerHeadWidget_C_TimerCheckUpdateList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.SetPlayerNameTag
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FName*                  PlayerName                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPlayerHeadWidget_C::SetPlayerNameTag(struct FName* PlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHeadWidget.PlayerHeadWidget_C.SetPlayerNameTag");

	UPlayerHeadWidget_C_SetPlayerNameTag_Params params;
	params.PlayerName = PlayerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// float*                         InDeltaTime                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPlayerHeadWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHeadWidget.PlayerHeadWidget_C.Tick");

	UPlayerHeadWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPlayerHeadWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHeadWidget.PlayerHeadWidget_C.Construct");

	UPlayerHeadWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.SetCharacterIconPosition_UC
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class Vector2D*                Pos_UC                         (CPF_Parm, CPF_IsPlainOldData)
// bool*                          IsHidden                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPlayerHeadWidget_C::SetCharacterIconPosition_UC(class Vector2D* Pos_UC, bool* IsHidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHeadWidget.PlayerHeadWidget_C.SetCharacterIconPosition_UC");

	UPlayerHeadWidget_C_SetCharacterIconPosition_UC_Params params;
	params.Pos_UC = Pos_UC;
	params.IsHidden = IsHidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.SetTeamNumber
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// int*                           TeamNumber                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinearColor*           teamColor                      (CPF_Parm, CPF_IsPlainOldData)

void UPlayerHeadWidget_C::SetTeamNumber(int* TeamNumber, struct FLinearColor* teamColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHeadWidget.PlayerHeadWidget_C.SetTeamNumber");

	UPlayerHeadWidget_C_SetTeamNumber_Params params;
	params.TeamNumber = TeamNumber;
	params.teamColor = teamColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.SetIndicatorColor
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor*           teamColor                      (CPF_Parm, CPF_IsPlainOldData)

void UPlayerHeadWidget_C::SetIndicatorColor(struct FLinearColor* teamColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHeadWidget.PlayerHeadWidget_C.SetIndicatorColor");

	UPlayerHeadWidget_C_SetIndicatorColor_Params params;
	params.teamColor = teamColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.ExecuteUbergraph_PlayerHeadWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPlayerHeadWidget_C::ExecuteUbergraph_PlayerHeadWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHeadWidget.PlayerHeadWidget_C.ExecuteUbergraph_PlayerHeadWidget");

	UPlayerHeadWidget_C_ExecuteUbergraph_PlayerHeadWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
