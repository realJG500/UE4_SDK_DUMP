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

// Function CharacterCapture_Gamepad.CharacterCapture_Gamepad_C.PrepassCharacterCapture
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCharacterCapture_Gamepad_C::PrepassCharacterCapture(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCapture_Gamepad.CharacterCapture_Gamepad_C.PrepassCharacterCapture");

	UCharacterCapture_Gamepad_C_PrepassCharacterCapture_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCapture_Gamepad.CharacterCapture_Gamepad_C.FinalizeCharacterCapture
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCharacterCapture_Gamepad_C::FinalizeCharacterCapture()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCapture_Gamepad.CharacterCapture_Gamepad_C.FinalizeCharacterCapture");

	UCharacterCapture_Gamepad_C_FinalizeCharacterCapture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCapture_Gamepad.CharacterCapture_Gamepad_C.SaveCharacterStudio
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCharacterCapture_Gamepad_C::SaveCharacterStudio(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCapture_Gamepad.CharacterCapture_Gamepad_C.SaveCharacterStudio");

	UCharacterCapture_Gamepad_C_SaveCharacterStudio_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCapture_Gamepad.CharacterCapture_Gamepad_C.InitCharacterCapture
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCharacterCapture_Gamepad_C::InitCharacterCapture()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCapture_Gamepad.CharacterCapture_Gamepad_C.InitCharacterCapture");

	UCharacterCapture_Gamepad_C_InitCharacterCapture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCapture_Gamepad.CharacterCapture_Gamepad_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UCharacterCapture_Gamepad_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCapture_Gamepad.CharacterCapture_Gamepad_C.Construct");

	UCharacterCapture_Gamepad_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCapture_Gamepad.CharacterCapture_Gamepad_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UCharacterCapture_Gamepad_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCapture_Gamepad.CharacterCapture_Gamepad_C.Destruct");

	UCharacterCapture_Gamepad_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterCapture_Gamepad.CharacterCapture_Gamepad_C.ExecuteUbergraph_CharacterCapture_Gamepad
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCharacterCapture_Gamepad_C::ExecuteUbergraph_CharacterCapture_Gamepad(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterCapture_Gamepad.CharacterCapture_Gamepad_C.ExecuteUbergraph_CharacterCapture_Gamepad");

	UCharacterCapture_Gamepad_C_ExecuteUbergraph_CharacterCapture_Gamepad_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
