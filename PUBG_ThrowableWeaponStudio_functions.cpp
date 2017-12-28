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

// Function ThrowableWeaponStudio.ThrowableWeaponStudio_C.OnLoaded
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AThrowableWeaponStudio_C::OnLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function ThrowableWeaponStudio.ThrowableWeaponStudio_C.OnLoaded");

	AThrowableWeaponStudio_C_OnLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ThrowableWeaponStudio.ThrowableWeaponStudio_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AThrowableWeaponStudio_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ThrowableWeaponStudio.ThrowableWeaponStudio_C.UserConstructionScript");

	AThrowableWeaponStudio_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ThrowableWeaponStudio.ThrowableWeaponStudio_C.SetItem
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UItem**                  Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AThrowableWeaponStudio_C::SetItem(class UItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ThrowableWeaponStudio.ThrowableWeaponStudio_C.SetItem");

	AThrowableWeaponStudio_C_SetItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ThrowableWeaponStudio.ThrowableWeaponStudio_C.ExecuteUbergraph_ThrowableWeaponStudio
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AThrowableWeaponStudio_C::ExecuteUbergraph_ThrowableWeaponStudio(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ThrowableWeaponStudio.ThrowableWeaponStudio_C.ExecuteUbergraph_ThrowableWeaponStudio");

	AThrowableWeaponStudio_C_ExecuteUbergraph_ThrowableWeaponStudio_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
