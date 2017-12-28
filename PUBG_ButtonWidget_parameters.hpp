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

// Function ButtonWidget.ButtonWidget_C.OnKeyDown
struct UButtonWidget_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (CPF_Parm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ButtonWidget.ButtonWidget_C.OnFocusReceived
struct UButtonWidget_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (CPF_Parm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ButtonWidget.ButtonWidget_C.MakeBrush
struct UButtonWidget_C_MakeBrush_Params
{
	class UTexture2D*                                  Texture;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FSlateBrush                                 Brush;                                                    // (CPF_Parm, CPF_OutParm)
};

// Function ButtonWidget.ButtonWidget_C.Construct
struct UButtonWidget_C_Construct_Params
{
};

// Function ButtonWidget.ButtonWidget_C.OnButtonFocusReceived_Event
struct UButtonWidget_C_OnButtonFocusReceived_Event_Params
{
	bool                                               bHasFocus;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ButtonWidget.ButtonWidget_C.OnFocusLost
struct UButtonWidget_C_OnFocusLost_Params
{
	struct FFocusEvent*                                InFocusEvent;                                             // (CPF_Parm)
};

// Function ButtonWidget.ButtonWidget_C.BndEvt__Button_32_K2Node_ComponentBoundEvent_118_OnButtonClickedEvent__DelegateSignature
struct UButtonWidget_C_BndEvt__Button_32_K2Node_ComponentBoundEvent_118_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ButtonWidget.ButtonWidget_C.ExecuteUbergraph_ButtonWidget
struct UButtonWidget_C_ExecuteUbergraph_ButtonWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ButtonWidget.ButtonWidget_C.OnGamepadB__DelegateSignature
struct UButtonWidget_C_OnGamepadB__DelegateSignature_Params
{
	bool                                               bPressed;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ButtonWidget.ButtonWidget_C.OnGamepadA__DelegateSignature
struct UButtonWidget_C_OnGamepadA__DelegateSignature_Params
{
	bool                                               bPressed;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ButtonWidget.ButtonWidget_C.OnNavigateKeyDown__DelegateSignature
struct UButtonWidget_C_OnNavigateKeyDown__DelegateSignature_Params
{
	struct FKey                                        Key;                                                      // (CPF_Parm)
};

// Function ButtonWidget.ButtonWidget_C.OnButtonFocusReceived__DelegateSignature
struct UButtonWidget_C_OnButtonFocusReceived__DelegateSignature_Params
{
	bool                                               bHasFocus;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ButtonWidget.ButtonWidget_C.OnClickedEventDispatcher__DelegateSignature
struct UButtonWidget_C_OnClickedEventDispatcher__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
