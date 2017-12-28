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

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.GetSlotItem
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class USlotInterface> SlotItem                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::GetSlotItem(TScriptInterface<class USlotInterface>* SlotItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.GetSlotItem");

	UWeaponEquipmentSlotWidget_Gamepad_C_GetSlotItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SlotItem != nullptr)
		*SlotItem = params.SlotItem;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.GetSlotContainer
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class USlotContainerInterface> SlotContainer                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::GetSlotContainer(TScriptInterface<class USlotContainerInterface>* SlotContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.GetSlotContainer");

	UWeaponEquipmentSlotWidget_Gamepad_C_GetSlotContainer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SlotContainer != nullptr)
		*SlotContainer = params.SlotContainer;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnSwap
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponEquipmentSlotWidget_Gamepad_C::OnSwap()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnSwap");

	UWeaponEquipmentSlotWidget_Gamepad_C_OnSwap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.ProcessSwap
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponEquipmentSlotWidget_Gamepad_C::ProcessSwap()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.ProcessSwap");

	UWeaponEquipmentSlotWidget_Gamepad_C_ProcessSwap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnReleasedSwap
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponEquipmentSlotWidget_Gamepad_C::OnReleasedSwap()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnReleasedSwap");

	UWeaponEquipmentSlotWidget_Gamepad_C_OnReleasedSwap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnPressedSwap
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponEquipmentSlotWidget_Gamepad_C::OnPressedSwap()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnPressedSwap");

	UWeaponEquipmentSlotWidget_Gamepad_C_OnPressedSwap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.InputY
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWeaponEquipmentSlotWidget_Gamepad_C::InputY()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.InputY");

	UWeaponEquipmentSlotWidget_Gamepad_C_InputY_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.InputX
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWeaponEquipmentSlotWidget_Gamepad_C::InputX()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.InputX");

	UWeaponEquipmentSlotWidget_Gamepad_C_InputX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.ProcessDrop
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponEquipmentSlotWidget_Gamepad_C::ProcessDrop()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.ProcessDrop");

	UWeaponEquipmentSlotWidget_Gamepad_C_ProcessDrop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.DroporUnEquipItem
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bDrop                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::DroporUnEquipItem(bool bDrop)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.DroporUnEquipItem");

	UWeaponEquipmentSlotWidget_Gamepad_C_DroporUnEquipItem_Params params;
	params.bDrop = bDrop;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnDeatchOrDropAttachment
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bDetach                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bAll                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::OnDeatchOrDropAttachment(bool bDetach, bool bAll)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnDeatchOrDropAttachment");

	UWeaponEquipmentSlotWidget_Gamepad_C_OnDeatchOrDropAttachment_Params params;
	params.bDetach = bDetach;
	params.bAll = bAll;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.ReleasedDropInput
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponEquipmentSlotWidget_Gamepad_C::ReleasedDropInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.ReleasedDropInput");

	UWeaponEquipmentSlotWidget_Gamepad_C_ReleasedDropInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.PressedDropInput
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponEquipmentSlotWidget_Gamepad_C::PressedDropInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.PressedDropInput");

	UWeaponEquipmentSlotWidget_Gamepad_C_PressedDropInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.ProcessDetach
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponEquipmentSlotWidget_Gamepad_C::ProcessDetach()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.ProcessDetach");

	UWeaponEquipmentSlotWidget_Gamepad_C_ProcessDetach_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.ReleaseDetachInput
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponEquipmentSlotWidget_Gamepad_C::ReleaseDetachInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.ReleaseDetachInput");

	UWeaponEquipmentSlotWidget_Gamepad_C_ReleaseDetachInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.PressedDetachInput
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponEquipmentSlotWidget_Gamepad_C::PressedDetachInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.PressedDetachInput");

	UWeaponEquipmentSlotWidget_Gamepad_C_PressedDetachInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.GetInventoryWidgetGamepad
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UInventoryWidget_Gamepad_C* NewParam                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::GetInventoryWidgetGamepad(class UInventoryWidget_Gamepad_C** NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.GetInventoryWidgetGamepad");

	UWeaponEquipmentSlotWidget_Gamepad_C_GetInventoryWidgetGamepad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.On_BackgroundSlot_Prepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::On_BackgroundSlot_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.On_BackgroundSlot_Prepass_1");

	UWeaponEquipmentSlotWidget_Gamepad_C_On_BackgroundSlot_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.FindLastFocusableWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UUserWidget*             Widget                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::FindLastFocusableWidget(class UUserWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.FindLastFocusableWidget");

	UWeaponEquipmentSlotWidget_Gamepad_C_FindLastFocusableWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.HandleWidgetMoveRight
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponEquipmentSlotWidget_Gamepad_C::HandleWidgetMoveRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.HandleWidgetMoveRight");

	UWeaponEquipmentSlotWidget_Gamepad_C_HandleWidgetMoveRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.HandleWidgetMoveLeft
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponEquipmentSlotWidget_Gamepad_C::HandleWidgetMoveLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.HandleWidgetMoveLeft");

	UWeaponEquipmentSlotWidget_Gamepad_C_HandleWidgetMoveLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.SetGamepadSelfPutAttachmentFocus
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bFocus                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::SetGamepadSelfPutAttachmentFocus(bool bFocus)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.SetGamepadSelfPutAttachmentFocus");

	UWeaponEquipmentSlotWidget_Gamepad_C_SetGamepadSelfPutAttachmentFocus_Params params;
	params.bFocus = bFocus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.InputB
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWeaponEquipmentSlotWidget_Gamepad_C::InputB()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.InputB");

	UWeaponEquipmentSlotWidget_Gamepad_C_InputB_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnChildSlotRefreshFocus
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponEquipmentSlotWidget_Gamepad_C::OnChildSlotRefreshFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnChildSlotRefreshFocus");

	UWeaponEquipmentSlotWidget_Gamepad_C_OnChildSlotRefreshFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.GetFocusingChildWidget
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UUserWidget*             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UUserWidget* UWeaponEquipmentSlotWidget_Gamepad_C::GetFocusingChildWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.GetFocusingChildWidget");

	UWeaponEquipmentSlotWidget_Gamepad_C_GetFocusingChildWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.Up
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWeaponEquipmentSlotWidget_Gamepad_C::Up()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.Up");

	UWeaponEquipmentSlotWidget_Gamepad_C_Up_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.Down
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWeaponEquipmentSlotWidget_Gamepad_C::Down()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.Down");

	UWeaponEquipmentSlotWidget_Gamepad_C_Down_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.GetChildRightFocusableWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UUserWidget*             RightWidget                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::GetChildRightFocusableWidget(class UUserWidget** RightWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.GetChildRightFocusableWidget");

	UWeaponEquipmentSlotWidget_Gamepad_C_GetChildRightFocusableWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RightWidget != nullptr)
		*RightWidget = params.RightWidget;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.GetChildLeftFocusableWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UUserWidget*             Left_Widget                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::GetChildLeftFocusableWidget(class UUserWidget** Left_Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.GetChildLeftFocusableWidget");

	UWeaponEquipmentSlotWidget_Gamepad_C_GetChildLeftFocusableWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Left_Widget != nullptr)
		*Left_Widget = params.Left_Widget;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.GetChildDownFocusableWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UUserWidget*             DownWidget                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::GetChildDownFocusableWidget(class UUserWidget** DownWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.GetChildDownFocusableWidget");

	UWeaponEquipmentSlotWidget_Gamepad_C_GetChildDownFocusableWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DownWidget != nullptr)
		*DownWidget = params.DownWidget;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.GetChildUpFocusableWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UUserWidget*             UpWidget                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::GetChildUpFocusableWidget(class UUserWidget** UpWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.GetChildUpFocusableWidget");

	UWeaponEquipmentSlotWidget_Gamepad_C_GetChildUpFocusableWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UpWidget != nullptr)
		*UpWidget = params.UpWidget;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.IsFocusable
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWeaponEquipmentSlotWidget_Gamepad_C::IsFocusable()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.IsFocusable");

	UWeaponEquipmentSlotWidget_Gamepad_C_IsFocusable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.FindFirstFocusableWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UUserWidget*             FocusableWidget                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::FindFirstFocusableWidget(class UUserWidget** FocusableWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.FindFirstFocusableWidget");

	UWeaponEquipmentSlotWidget_Gamepad_C_FindFirstFocusableWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FocusableWidget != nullptr)
		*FocusableWidget = params.FocusableWidget;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.IsFocus
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWeaponEquipmentSlotWidget_Gamepad_C::IsFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.IsFocus");

	UWeaponEquipmentSlotWidget_Gamepad_C_IsFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.SetFocus
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool*                          NewFocus                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWeaponEquipmentSlotWidget_Gamepad_C::SetFocus(bool* NewFocus)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.SetFocus");

	UWeaponEquipmentSlotWidget_Gamepad_C_SetFocus_Params params;
	params.NewFocus = NewFocus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.On_FocusColorBG_Prepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::On_FocusColorBG_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.On_FocusColorBG_Prepass_1");

	UWeaponEquipmentSlotWidget_Gamepad_C_On_FocusColorBG_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.InputA
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWeaponEquipmentSlotWidget_Gamepad_C::InputA()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.InputA");

	UWeaponEquipmentSlotWidget_Gamepad_C_InputA_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnSpawnActorInSceneCaptureWorld
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  SpawnedActor                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::OnSpawnActorInSceneCaptureWorld(class AActor* SpawnedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnSpawnActorInSceneCaptureWorld");

	UWeaponEquipmentSlotWidget_Gamepad_C_OnSpawnActorInSceneCaptureWorld_Params params;
	params.SpawnedActor = SpawnedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.GetDragDroppingEquipableItem
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UEquipableItem*          EquipableItem                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::GetDragDroppingEquipableItem(class UEquipableItem** EquipableItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.GetDragDroppingEquipableItem");

	UWeaponEquipmentSlotWidget_Gamepad_C_GetDragDroppingEquipableItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EquipableItem != nullptr)
		*EquipableItem = params.EquipableItem;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.FindEquipableWeaponPosition
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FEquipPosition          WeaponPosition                 (CPF_Parm, CPF_OutParm)

void UWeaponEquipmentSlotWidget_Gamepad_C::FindEquipableWeaponPosition(struct FEquipPosition* WeaponPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.FindEquipableWeaponPosition");

	UWeaponEquipmentSlotWidget_Gamepad_C_FindEquipableWeaponPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WeaponPosition != nullptr)
		*WeaponPosition = params.WeaponPosition;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.UpdateWeaponGunInfo
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::UpdateWeaponGunInfo(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.UpdateWeaponGunInfo");

	UWeaponEquipmentSlotWidget_Gamepad_C_UpdateWeaponGunInfo_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.On_AmmoIcon_Prepass_1
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::On_AmmoIcon_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.On_AmmoIcon_Prepass_1");

	UWeaponEquipmentSlotWidget_Gamepad_C_On_AmmoIcon_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.GetAmmoName
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ItemName                       (CPF_Parm, CPF_OutParm)

void UWeaponEquipmentSlotWidget_Gamepad_C::GetAmmoName(struct FText* ItemName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.GetAmmoName");

	UWeaponEquipmentSlotWidget_Gamepad_C_GetAmmoName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemName != nullptr)
		*ItemName = params.ItemName;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.GetAmmoIcon
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FSlateBrush UWeaponEquipmentSlotWidget_Gamepad_C::GetAmmoIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.GetAmmoIcon");

	UWeaponEquipmentSlotWidget_Gamepad_C_GetAmmoIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.GetHandOnUnLoadedAmmoCount
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            Count                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::GetHandOnUnLoadedAmmoCount(int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.GetHandOnUnLoadedAmmoCount");

	UWeaponEquipmentSlotWidget_Gamepad_C_GetHandOnUnLoadedAmmoCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.GetHandOnLoadedAmmoCount
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            Count                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::GetHandOnLoadedAmmoCount(int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.GetHandOnLoadedAmmoCount");

	UWeaponEquipmentSlotWidget_Gamepad_C_GetHandOnLoadedAmmoCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.On_AmmoName_Prepass_1
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::On_AmmoName_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.On_AmmoName_Prepass_1");

	UWeaponEquipmentSlotWidget_Gamepad_C_On_AmmoName_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.On_AmmoInfoLayer_Prepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::On_AmmoInfoLayer_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.On_AmmoInfoLayer_Prepass_1");

	UWeaponEquipmentSlotWidget_Gamepad_C_On_AmmoInfoLayer_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.On_WeaponHandsOnUnloadedAmmoCount_Prepass_1
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::On_WeaponHandsOnUnloadedAmmoCount_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.On_WeaponHandsOnUnloadedAmmoCount_Prepass_1");

	UWeaponEquipmentSlotWidget_Gamepad_C_On_WeaponHandsOnUnloadedAmmoCount_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.On_WeaponHandsOnLoadedAmmoCount_Prepass_1
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::On_WeaponHandsOnLoadedAmmoCount_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.On_WeaponHandsOnLoadedAmmoCount_Prepass_1");

	UWeaponEquipmentSlotWidget_Gamepad_C_On_WeaponHandsOnLoadedAmmoCount_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.On_WeaponName_Prepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::On_WeaponName_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.On_WeaponName_Prepass_1");

	UWeaponEquipmentSlotWidget_Gamepad_C_On_WeaponName_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.On_KeyName_Prepass_1
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::On_KeyName_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.On_KeyName_Prepass_1");

	UWeaponEquipmentSlotWidget_Gamepad_C_On_KeyName_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnUpdateWeapon
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponEquipmentSlotWidget_Gamepad_C::OnUpdateWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnUpdateWeapon");

	UWeaponEquipmentSlotWidget_Gamepad_C_OnUpdateWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.On_WeaponCaptureImage_Prepass_1
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::On_WeaponCaptureImage_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.On_WeaponCaptureImage_Prepass_1");

	UWeaponEquipmentSlotWidget_Gamepad_C_On_WeaponCaptureImage_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.GetItem_Bp
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UItem*                   Item                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::GetItem_Bp(class UItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.GetItem_Bp");

	UWeaponEquipmentSlotWidget_Gamepad_C_GetItem_Bp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.IsAttachmentSlotMouseOver
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           MouseOver                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::IsAttachmentSlotMouseOver(bool* MouseOver)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.IsAttachmentSlotMouseOver");

	UWeaponEquipmentSlotWidget_Gamepad_C_IsAttachmentSlotMouseOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseOver != nullptr)
		*MouseOver = params.MouseOver;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.IsSlotMouseOver_Bp
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           IsMouseOver                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::IsSlotMouseOver_Bp(bool* IsMouseOver)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.IsSlotMouseOver_Bp");

	UWeaponEquipmentSlotWidget_Gamepad_C_IsSlotMouseOver_Bp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsMouseOver != nullptr)
		*IsMouseOver = params.IsMouseOver;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.IsSlotSubOn_Bp
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           SubOn                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::IsSlotSubOn_Bp(bool* SubOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.IsSlotSubOn_Bp");

	UWeaponEquipmentSlotWidget_Gamepad_C_IsSlotSubOn_Bp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SubOn != nullptr)
		*SubOn = params.SubOn;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.IsSlotOn_Bp
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           IsOn                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::IsSlotOn_Bp(bool* IsOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.IsSlotOn_Bp");

	UWeaponEquipmentSlotWidget_Gamepad_C_IsSlotOn_Bp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsOn != nullptr)
		*IsOn = params.IsOn;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnDrop
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent*          PointerEvent                   (CPF_Parm)
// class UDragDropOperation**     Operation                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWeaponEquipmentSlotWidget_Gamepad_C::OnDrop(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnDrop");

	UWeaponEquipmentSlotWidget_Gamepad_C_OnDrop_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.GetWeaponSlotEquipId
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)

void UWeaponEquipmentSlotWidget_Gamepad_C::GetWeaponSlotEquipId()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.GetWeaponSlotEquipId");

	UWeaponEquipmentSlotWidget_Gamepad_C_GetWeaponSlotEquipId_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.MainPrepass_1
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::MainPrepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.MainPrepass_1");

	UWeaponEquipmentSlotWidget_Gamepad_C_MainPrepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.InitializeWeaponEquipSlot
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponEquipmentSlotWidget_Gamepad_C::InitializeWeaponEquipSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.InitializeWeaponEquipSlot");

	UWeaponEquipmentSlotWidget_Gamepad_C_InitializeWeaponEquipSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.RefreshAttachmentSlot
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponEquipmentSlotWidget_Gamepad_C::RefreshAttachmentSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.RefreshAttachmentSlot");

	UWeaponEquipmentSlotWidget_Gamepad_C_RefreshAttachmentSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnMouseButtonUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UWeaponEquipmentSlotWidget_Gamepad_C::OnMouseButtonUp(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnMouseButtonUp");

	UWeaponEquipmentSlotWidget_Gamepad_C_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnDragDetected
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent*          PointerEvent                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UDragDropOperation*      Operation                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::OnDragDetected(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnDragDetected");

	UWeaponEquipmentSlotWidget_Gamepad_C_OnDragDetected_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Operation != nullptr)
		*Operation = params.Operation;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnMouseButtonDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UWeaponEquipmentSlotWidget_Gamepad_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnMouseButtonDown");

	UWeaponEquipmentSlotWidget_Gamepad_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.GetSlotVisibility
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)

void UWeaponEquipmentSlotWidget_Gamepad_C::GetSlotVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.GetSlotVisibility");

	UWeaponEquipmentSlotWidget_Gamepad_C_GetSlotVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.GetWeaponIcon
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FSlateBrush UWeaponEquipmentSlotWidget_Gamepad_C::GetWeaponIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.GetWeaponIcon");

	UWeaponEquipmentSlotWidget_Gamepad_C_GetWeaponIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.GetWeaponInfoText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UWeaponEquipmentSlotWidget_Gamepad_C::GetWeaponInfoText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.GetWeaponInfoText");

	UWeaponEquipmentSlotWidget_Gamepad_C_GetWeaponInfoText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWeaponEquipmentSlotWidget_Gamepad_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.Construct");

	UWeaponEquipmentSlotWidget_Gamepad_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnDragEnter
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent*          PointerEvent                   (CPF_Parm)
// class UDragDropOperation**     Operation                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::OnDragEnter(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnDragEnter");

	UWeaponEquipmentSlotWidget_Gamepad_C_OnDragEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnDragLeave
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FPointerEvent*          PointerEvent                   (CPF_Parm)
// class UDragDropOperation**     Operation                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::OnDragLeave(struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnDragLeave");

	UWeaponEquipmentSlotWidget_Gamepad_C_OnDragLeave_Params params;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnMouseEnter
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWeaponEquipmentSlotWidget_Gamepad_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnMouseEnter");

	UWeaponEquipmentSlotWidget_Gamepad_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnMouseLeave
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWeaponEquipmentSlotWidget_Gamepad_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnMouseLeave");

	UWeaponEquipmentSlotWidget_Gamepad_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnUpdateItem
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UItem**                  Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::OnUpdateItem(class UItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnUpdateItem");

	UWeaponEquipmentSlotWidget_Gamepad_C_OnUpdateItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.UpdateDragDropObject
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTslItemDragDropOperation_C** DragDropObject                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::UpdateDragDropObject(class UTslItemDragDropOperation_C** DragDropObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.UpdateDragDropObject");

	UWeaponEquipmentSlotWidget_Gamepad_C_UpdateDragDropObject_Params params;
	params.DragDropObject = DragDropObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.SetInventory
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UInventoryWidget_C**     InventoryWidget                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::SetInventory(class UInventoryWidget_C** InventoryWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.SetInventory");

	UWeaponEquipmentSlotWidget_Gamepad_C_SetInventory_Params params;
	params.InventoryWidget = InventoryWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.BndEvt__UpperRail_K2Node_ComponentBoundEvent_14_RefreshFocus__DelegateSignature
// (FUNC_BlueprintEvent)

void UWeaponEquipmentSlotWidget_Gamepad_C::BndEvt__UpperRail_K2Node_ComponentBoundEvent_14_RefreshFocus__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.BndEvt__UpperRail_K2Node_ComponentBoundEvent_14_RefreshFocus__DelegateSignature");

	UWeaponEquipmentSlotWidget_Gamepad_C_BndEvt__UpperRail_K2Node_ComponentBoundEvent_14_RefreshFocus__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.BndEvt__Muzzle_K2Node_ComponentBoundEvent_16_RefreshFocus__DelegateSignature
// (FUNC_BlueprintEvent)

void UWeaponEquipmentSlotWidget_Gamepad_C::BndEvt__Muzzle_K2Node_ComponentBoundEvent_16_RefreshFocus__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.BndEvt__Muzzle_K2Node_ComponentBoundEvent_16_RefreshFocus__DelegateSignature");

	UWeaponEquipmentSlotWidget_Gamepad_C_BndEvt__Muzzle_K2Node_ComponentBoundEvent_16_RefreshFocus__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.BndEvt__LowerRail_K2Node_ComponentBoundEvent_19_RefreshFocus__DelegateSignature
// (FUNC_BlueprintEvent)

void UWeaponEquipmentSlotWidget_Gamepad_C::BndEvt__LowerRail_K2Node_ComponentBoundEvent_19_RefreshFocus__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.BndEvt__LowerRail_K2Node_ComponentBoundEvent_19_RefreshFocus__DelegateSignature");

	UWeaponEquipmentSlotWidget_Gamepad_C_BndEvt__LowerRail_K2Node_ComponentBoundEvent_19_RefreshFocus__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.BndEvt__Magazine_K2Node_ComponentBoundEvent_23_RefreshFocus__DelegateSignature
// (FUNC_BlueprintEvent)

void UWeaponEquipmentSlotWidget_Gamepad_C::BndEvt__Magazine_K2Node_ComponentBoundEvent_23_RefreshFocus__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.BndEvt__Magazine_K2Node_ComponentBoundEvent_23_RefreshFocus__DelegateSignature");

	UWeaponEquipmentSlotWidget_Gamepad_C_BndEvt__Magazine_K2Node_ComponentBoundEvent_23_RefreshFocus__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.BndEvt__Stock_K2Node_ComponentBoundEvent_28_RefreshFocus__DelegateSignature
// (FUNC_BlueprintEvent)

void UWeaponEquipmentSlotWidget_Gamepad_C::BndEvt__Stock_K2Node_ComponentBoundEvent_28_RefreshFocus__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.BndEvt__Stock_K2Node_ComponentBoundEvent_28_RefreshFocus__DelegateSignature");

	UWeaponEquipmentSlotWidget_Gamepad_C_BndEvt__Stock_K2Node_ComponentBoundEvent_28_RefreshFocus__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.WidgetInputBPressed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponEquipmentSlotWidget_Gamepad_C::WidgetInputBPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.WidgetInputBPressed");

	UWeaponEquipmentSlotWidget_Gamepad_C_WidgetInputBPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnWidgetInputBReleased
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponEquipmentSlotWidget_Gamepad_C::OnWidgetInputBReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnWidgetInputBReleased");

	UWeaponEquipmentSlotWidget_Gamepad_C_OnWidgetInputBReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// float*                         InDeltaTime                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.Tick");

	UWeaponEquipmentSlotWidget_Gamepad_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnSlotMoveUp
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponEquipmentSlotWidget_Gamepad_C::OnSlotMoveUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnSlotMoveUp");

	UWeaponEquipmentSlotWidget_Gamepad_C_OnSlotMoveUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnSlotMoveDown
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponEquipmentSlotWidget_Gamepad_C::OnSlotMoveDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnSlotMoveDown");

	UWeaponEquipmentSlotWidget_Gamepad_C_OnSlotMoveDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.SlotMoveLeft
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponEquipmentSlotWidget_Gamepad_C::SlotMoveLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.SlotMoveLeft");

	UWeaponEquipmentSlotWidget_Gamepad_C_SlotMoveLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnSlotMoveRight
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponEquipmentSlotWidget_Gamepad_C::OnSlotMoveRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnSlotMoveRight");

	UWeaponEquipmentSlotWidget_Gamepad_C_OnSlotMoveRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.CustomEvent_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponEquipmentSlotWidget_Gamepad_C::CustomEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.CustomEvent_1");

	UWeaponEquipmentSlotWidget_Gamepad_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnDetachItemPressed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponEquipmentSlotWidget_Gamepad_C::OnDetachItemPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnDetachItemPressed");

	UWeaponEquipmentSlotWidget_Gamepad_C_OnDetachItemPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnDetachItemReleased
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponEquipmentSlotWidget_Gamepad_C::OnDetachItemReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnDetachItemReleased");

	UWeaponEquipmentSlotWidget_Gamepad_C_OnDetachItemReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnInputWidgetInputB
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponEquipmentSlotWidget_Gamepad_C::OnInputWidgetInputB()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnInputWidgetInputB");

	UWeaponEquipmentSlotWidget_Gamepad_C_OnInputWidgetInputB_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnAttachmentFocused_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class USlotInterface> SlotInterface                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TScriptInterface<class USlotContainerInterface> SlotContainerInterface         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::OnAttachmentFocused_Event_1(const TScriptInterface<class USlotInterface>& SlotInterface, const TScriptInterface<class USlotContainerInterface>& SlotContainerInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnAttachmentFocused_Event_1");

	UWeaponEquipmentSlotWidget_Gamepad_C_OnAttachmentFocused_Event_1_Params params;
	params.SlotInterface = SlotInterface;
	params.SlotContainerInterface = SlotContainerInterface;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.ExecuteUbergraph_WeaponEquipmentSlotWidget_Gamepad
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::ExecuteUbergraph_WeaponEquipmentSlotWidget_Gamepad(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.ExecuteUbergraph_WeaponEquipmentSlotWidget_Gamepad");

	UWeaponEquipmentSlotWidget_Gamepad_C_ExecuteUbergraph_WeaponEquipmentSlotWidget_Gamepad_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnWeaponEquipmentFocused__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class USlotInterface> SlotInterface                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TScriptInterface<class USlotContainerInterface> SlotContainerInterface         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::OnWeaponEquipmentFocused__DelegateSignature(const TScriptInterface<class USlotInterface>& SlotInterface, const TScriptInterface<class USlotContainerInterface>& SlotContainerInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnWeaponEquipmentFocused__DelegateSignature");

	UWeaponEquipmentSlotWidget_Gamepad_C_OnWeaponEquipmentFocused__DelegateSignature_Params params;
	params.SlotInterface = SlotInterface;
	params.SlotContainerInterface = SlotContainerInterface;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnAttachmentFocused__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class USlotInterface> SlotInterface                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TScriptInterface<class USlotContainerInterface> SlotContainerInterface         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::OnAttachmentFocused__DelegateSignature(const TScriptInterface<class USlotInterface>& SlotInterface, const TScriptInterface<class USlotContainerInterface>& SlotContainerInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnAttachmentFocused__DelegateSignature");

	UWeaponEquipmentSlotWidget_Gamepad_C_OnAttachmentFocused__DelegateSignature_Params params;
	params.SlotInterface = SlotInterface;
	params.SlotContainerInterface = SlotContainerInterface;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnDragLeaveWeaponSlot__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            SlotIndex                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::OnDragLeaveWeaponSlot__DelegateSignature(int SlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnDragLeaveWeaponSlot__DelegateSignature");

	UWeaponEquipmentSlotWidget_Gamepad_C_OnDragLeaveWeaponSlot__DelegateSignature_Params params;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnDragEnterWeaponSlot__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            SlotIndex                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::OnDragEnterWeaponSlot__DelegateSignature(int SlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnDragEnterWeaponSlot__DelegateSignature");

	UWeaponEquipmentSlotWidget_Gamepad_C_OnDragEnterWeaponSlot__DelegateSignature_Params params;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnReleased__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWeaponEquipmentSlotWidget_Gamepad_C::OnReleased__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnReleased__DelegateSignature");

	UWeaponEquipmentSlotWidget_Gamepad_C_OnReleased__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
