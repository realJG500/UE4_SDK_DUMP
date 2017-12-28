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

// Function ReplayZoneAreaMessage.ReplayZoneAreaMessage_C.UpdateReplayZoneAreaMessage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UReplayZoneAreaMessage_C::UpdateReplayZoneAreaMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayZoneAreaMessage.ReplayZoneAreaMessage_C.UpdateReplayZoneAreaMessage");

	UReplayZoneAreaMessage_C_UpdateReplayZoneAreaMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayZoneAreaMessage.ReplayZoneAreaMessage_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UReplayZoneAreaMessage_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayZoneAreaMessage.ReplayZoneAreaMessage_C.Construct");

	UReplayZoneAreaMessage_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayZoneAreaMessage.ReplayZoneAreaMessage_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// float*                         InDeltaTime                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UReplayZoneAreaMessage_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayZoneAreaMessage.ReplayZoneAreaMessage_C.Tick");

	UReplayZoneAreaMessage_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayZoneAreaMessage.ReplayZoneAreaMessage_C.ExecuteUbergraph_ReplayZoneAreaMessage
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UReplayZoneAreaMessage_C::ExecuteUbergraph_ReplayZoneAreaMessage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayZoneAreaMessage.ReplayZoneAreaMessage_C.ExecuteUbergraph_ReplayZoneAreaMessage");

	UReplayZoneAreaMessage_C_ExecuteUbergraph_ReplayZoneAreaMessage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
