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

// Function BaseOptionWidget.BaseOptionWidget_C.OnKeyDown
struct UBaseOptionWidget_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (CPF_Parm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function BaseOptionWidget.BaseOptionWidget_C.OnFocusReceived
struct UBaseOptionWidget_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (CPF_Parm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function BaseOptionWidget.BaseOptionWidget_C.GetCurrentFocusWidget
struct UBaseOptionWidget_C_GetCurrentFocusWidget_Params
{
	class UWidget*                                     FocusWidget;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BaseOptionWidget.BaseOptionWidget_C.OnPrevOrNextFocusableWidget
struct UBaseOptionWidget_C_OnPrevOrNextFocusableWidget_Params
{
	bool                                               bNext;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UWidget*                                     FocusableWidget;                                          // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BaseOptionWidget.BaseOptionWidget_C.ProcessKeyUp
struct UBaseOptionWidget_C_ProcessKeyUp_Params
{
	struct FKey                                        Key;                                                      // (CPF_Parm)
	struct FEventReply                                 EventReply;                                               // (CPF_Parm, CPF_OutParm)
};

// Function BaseOptionWidget.BaseOptionWidget_C.ProcessKeyDown
struct UBaseOptionWidget_C_ProcessKeyDown_Params
{
	struct FKey                                        Key;                                                      // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FEventReply                                 EventReply;                                               // (CPF_Parm, CPF_OutParm)
};

// Function BaseOptionWidget.BaseOptionWidget_C.OnKeyUp
struct UBaseOptionWidget_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (CPF_Parm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
