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

// Function UIBlurBackground.UIBlurBackground_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUIBlurBackground_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UIBlurBackground.UIBlurBackground_C.Construct");

	UUIBlurBackground_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIBlurBackground.UIBlurBackground_C.ExecuteUbergraph_UIBlurBackground
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUIBlurBackground_C::ExecuteUbergraph_UIBlurBackground(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIBlurBackground.UIBlurBackground_C.ExecuteUbergraph_UIBlurBackground");

	UUIBlurBackground_C_ExecuteUbergraph_UIBlurBackground_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
