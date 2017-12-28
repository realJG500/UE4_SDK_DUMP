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

// Function SelfPutHelperWidget.SelfPutHelperWidget_C.SwapFromWeapon
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USelfPutHelperWidget_C::SwapFromWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelfPutHelperWidget.SelfPutHelperWidget_C.SwapFromWeapon");

	USelfPutHelperWidget_C_SwapFromWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SelfPutHelperWidget.SelfPutHelperWidget_C.SwapFormEquipment
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USelfPutHelperWidget_C::SwapFormEquipment()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelfPutHelperWidget.SelfPutHelperWidget_C.SwapFormEquipment");

	USelfPutHelperWidget_C_SwapFormEquipment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SelfPutHelperWidget.SelfPutHelperWidget_C.SwapFormVicnityOrInventory
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USelfPutHelperWidget_C::SwapFormVicnityOrInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelfPutHelperWidget.SelfPutHelperWidget_C.SwapFormVicnityOrInventory");

	USelfPutHelperWidget_C_SwapFormVicnityOrInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SelfPutHelperWidget.SelfPutHelperWidget_C.IsSelfPutMode
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           bIsSelfPutMode                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USelfPutHelperWidget_C::IsSelfPutMode(bool* bIsSelfPutMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelfPutHelperWidget.SelfPutHelperWidget_C.IsSelfPutMode");

	USelfPutHelperWidget_C_IsSelfPutMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsSelfPutMode != nullptr)
		*bIsSelfPutMode = params.bIsSelfPutMode;
}


// Function SelfPutHelperWidget.SelfPutHelperWidget_C.GetFocusData
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            Index                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<int>                    EnableWeaponIndex              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void USelfPutHelperWidget_C::GetFocusData(int* Index, TArray<int>* EnableWeaponIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelfPutHelperWidget.SelfPutHelperWidget_C.GetFocusData");

	USelfPutHelperWidget_C_GetFocusData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
	if (EnableWeaponIndex != nullptr)
		*EnableWeaponIndex = params.EnableWeaponIndex;
}


// Function SelfPutHelperWidget.SelfPutHelperWidget_C.NextWeapon
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USelfPutHelperWidget_C::NextWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelfPutHelperWidget.SelfPutHelperWidget_C.NextWeapon");

	USelfPutHelperWidget_C_NextWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SelfPutHelperWidget.SelfPutHelperWidget_C.PrevWeapon
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USelfPutHelperWidget_C::PrevWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelfPutHelperWidget.SelfPutHelperWidget_C.PrevWeapon");

	USelfPutHelperWidget_C_PrevWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SelfPutHelperWidget.SelfPutHelperWidget_C.Put
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USelfPutHelperWidget_C::Put()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelfPutHelperWidget.SelfPutHelperWidget_C.Put");

	USelfPutHelperWidget_C_Put_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SelfPutHelperWidget.SelfPutHelperWidget_C.Stop
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void USelfPutHelperWidget_C::Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function SelfPutHelperWidget.SelfPutHelperWidget_C.Stop");

	USelfPutHelperWidget_C_Stop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SelfPutHelperWidget.SelfPutHelperWidget_C.StartSelfPutItem
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class USlotInterface> Slot                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TScriptInterface<class USlotContainerInterface> Container                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bResult                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            StartWeaponIndex               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USelfPutHelperWidget_C::StartSelfPutItem(const TScriptInterface<class USlotInterface>& Slot, const TScriptInterface<class USlotContainerInterface>& Container, bool* bResult, int* StartWeaponIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelfPutHelperWidget.SelfPutHelperWidget_C.StartSelfPutItem");

	USelfPutHelperWidget_C_StartSelfPutItem_Params params;
	params.Slot = Slot;
	params.Container = Container;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
	if (StartWeaponIndex != nullptr)
		*StartWeaponIndex = params.StartWeaponIndex;
}


// Function SelfPutHelperWidget.SelfPutHelperWidget_C.OnNotifySelfPut__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bStart                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USelfPutHelperWidget_C::OnNotifySelfPut__DelegateSignature(bool bStart)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelfPutHelperWidget.SelfPutHelperWidget_C.OnNotifySelfPut__DelegateSignature");

	USelfPutHelperWidget_C_OnNotifySelfPut__DelegateSignature_Params params;
	params.bStart = bStart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
