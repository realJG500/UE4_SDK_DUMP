#pragma once

// PLAYERUNKNOWN'S BATTLEGROUNDS (2.4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TslCheckBox.TslCheckBox_C.GetGamePadHelpWidgetClass
struct UTslCheckBox_C_GetGamePadHelpWidgetClass_Params
{
	class UClass*                                      GuideClass;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslCheckBox.TslCheckBox_C.OnKeyDown
struct UTslCheckBox_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (CPF_Parm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function TslCheckBox.TslCheckBox_C.OnKeyUp
struct UTslCheckBox_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (CPF_Parm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function TslCheckBox.TslCheckBox_C.IsToggleKey
struct UTslCheckBox_C_IsToggleKey_Params
{
	struct FKey                                        Key;                                                      // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	bool                                               IsToggle;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslCheckBox.TslCheckBox_C.Toggle
struct UTslCheckBox_C_Toggle_Params
{
};

// Function TslCheckBox.TslCheckBox_C.ProcessKeyDown
struct UTslCheckBox_C_ProcessKeyDown_Params
{
	struct FKey                                        Key;                                                      // (CPF_Parm)
	struct FEventReply                                 Reply;                                                    // (CPF_Parm, CPF_OutParm)
};

// Function TslCheckBox.TslCheckBox_C.OnFocusReceived
struct UTslCheckBox_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (CPF_Parm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function TslCheckBox.TslCheckBox_C.OnPrepass_1
struct UTslCheckBox_C_OnPrepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslCheckBox.TslCheckBox_C.OnMouseButtonDown_1
struct UTslCheckBox_C_OnMouseButtonDown_1_Params
{
	struct FGeometry                                   MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function TslCheckBox.TslCheckBox_C.GetBrush_1
struct UTslCheckBox_C_GetBrush_1_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function TslCheckBox.TslCheckBox_C.IsChekced
struct UTslCheckBox_C_IsChekced_Params
{
	bool                                               bChecked;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslCheckBox.TslCheckBox_C.SetCheck
struct UTslCheckBox_C_SetCheck_Params
{
	bool                                               bChecked;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslCheckBox.TslCheckBox_C.GetDisplayName
struct UTslCheckBox_C_GetDisplayName_Params
{
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function TslCheckBox.TslCheckBox_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
struct UTslCheckBox_C_BndEvt__Button_2_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function TslCheckBox.TslCheckBox_C.ExecuteUbergraph_TslCheckBox
struct UTslCheckBox_C_ExecuteUbergraph_TslCheckBox_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
