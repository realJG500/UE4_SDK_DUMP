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

// Function ZombieGroupWidget.ZombieGroupWidget_C.CreateObserverMatchResultInfoWidget
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UZombieGroupWidget_C::CreateObserverMatchResultInfoWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ZombieGroupWidget.ZombieGroupWidget_C.CreateObserverMatchResultInfoWidget");

	UZombieGroupWidget_C_CreateObserverMatchResultInfoWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ZombieGroupWidget.ZombieGroupWidget_C.AddPlayerMatchResultInfo
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTslPlayerMatchResultInfo TslPlayerMatchResultInfo       (CPF_Parm)

void UZombieGroupWidget_C::AddPlayerMatchResultInfo(const struct FTslPlayerMatchResultInfo& TslPlayerMatchResultInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ZombieGroupWidget.ZombieGroupWidget_C.AddPlayerMatchResultInfo");

	UZombieGroupWidget_C_AddPlayerMatchResultInfo_Params params;
	params.TslPlayerMatchResultInfo = TslPlayerMatchResultInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
