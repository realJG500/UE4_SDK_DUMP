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

// Function BloodSpotWidget.BloodSpotWidget_C.Start
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBloodSpotWidget_C::Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function BloodSpotWidget.BloodSpotWidget_C.Start");

	UBloodSpotWidget_C_Start_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BloodSpotWidget.BloodSpotWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBloodSpotWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BloodSpotWidget.BloodSpotWidget_C.Construct");

	UBloodSpotWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BloodSpotWidget.BloodSpotWidget_C.OnAnimationStarted
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UWidgetAnimation**       Animation                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBloodSpotWidget_C::OnAnimationStarted(class UWidgetAnimation** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BloodSpotWidget.BloodSpotWidget_C.OnAnimationStarted");

	UBloodSpotWidget_C_OnAnimationStarted_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BloodSpotWidget.BloodSpotWidget_C.OnAnimationFinished
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UWidgetAnimation**       Animation                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBloodSpotWidget_C::OnAnimationFinished(class UWidgetAnimation** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BloodSpotWidget.BloodSpotWidget_C.OnAnimationFinished");

	UBloodSpotWidget_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BloodSpotWidget.BloodSpotWidget_C.ExecuteUbergraph_BloodSpotWidget
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBloodSpotWidget_C::ExecuteUbergraph_BloodSpotWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BloodSpotWidget.BloodSpotWidget_C.ExecuteUbergraph_BloodSpotWidget");

	UBloodSpotWidget_C_ExecuteUbergraph_BloodSpotWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
