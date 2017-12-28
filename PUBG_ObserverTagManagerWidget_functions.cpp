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

// Function ObserverTagManagerWidget.ObserverTagManagerWidget_C.CustomTick
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UObserverTagManagerWidget_C::CustomTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function ObserverTagManagerWidget.ObserverTagManagerWidget_C.CustomTick");

	UObserverTagManagerWidget_C_CustomTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ObserverTagManagerWidget.ObserverTagManagerWidget_C.TimerCheckUpdateList
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UObserverTagManagerWidget_C::TimerCheckUpdateList()
{
	static auto fn = UObject::FindObject<UFunction>("Function ObserverTagManagerWidget.ObserverTagManagerWidget_C.TimerCheckUpdateList");

	UObserverTagManagerWidget_C_TimerCheckUpdateList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ObserverTagManagerWidget.ObserverTagManagerWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UObserverTagManagerWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ObserverTagManagerWidget.ObserverTagManagerWidget_C.Construct");

	UObserverTagManagerWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ObserverTagManagerWidget.ObserverTagManagerWidget_C.ExecuteUbergraph_ObserverTagManagerWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UObserverTagManagerWidget_C::ExecuteUbergraph_ObserverTagManagerWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ObserverTagManagerWidget.ObserverTagManagerWidget_C.ExecuteUbergraph_ObserverTagManagerWidget");

	UObserverTagManagerWidget_C_ExecuteUbergraph_ObserverTagManagerWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
