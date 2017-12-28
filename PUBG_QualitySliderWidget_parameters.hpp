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

// Function QualitySliderWidget.QualitySliderWidget_C.GetGamePadHelpWidgetClass
struct UQualitySliderWidget_C_GetGamePadHelpWidgetClass_Params
{
	class UClass*                                      GuideClass;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QualitySliderWidget.QualitySliderWidget_C.OnKeyDown
struct UQualitySliderWidget_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (CPF_Parm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function QualitySliderWidget.QualitySliderWidget_C.OnKeyUp
struct UQualitySliderWidget_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (CPF_Parm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function QualitySliderWidget.QualitySliderWidget_C.ProcessKeyDown
struct UQualitySliderWidget_C_ProcessKeyDown_Params
{
	struct FKey                                        Key;                                                      // (CPF_Parm)
	struct FEventReply                                 Reply;                                                    // (CPF_Parm, CPF_OutParm)
};

// Function QualitySliderWidget.QualitySliderWidget_C.OnPrepass_1
struct UQualitySliderWidget_C_OnPrepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QualitySliderWidget.QualitySliderWidget_C.GetValueText
struct UQualitySliderWidget_C_GetValueText_Params
{
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function QualitySliderWidget.QualitySliderWidget_C.SetValue
struct UQualitySliderWidget_C_SetValue_Params
{
	float                                              Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QualitySliderWidget.QualitySliderWidget_C.GetQualityName
struct UQualitySliderWidget_C_GetQualityName_Params
{
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function QualitySliderWidget.QualitySliderWidget_C.GetValueByRange
struct UQualitySliderWidget_C_GetValueByRange_Params
{
	float                                              Value;                                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QualitySliderWidget.QualitySliderWidget_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_370_OnButtonClickedEvent__DelegateSignature
struct UQualitySliderWidget_C_BndEvt__Button_2_K2Node_ComponentBoundEvent_370_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function QualitySliderWidget.QualitySliderWidget_C.BndEvt__RightButotn_K2Node_ComponentBoundEvent_395_OnButtonClickedEvent__DelegateSignature
struct UQualitySliderWidget_C_BndEvt__RightButotn_K2Node_ComponentBoundEvent_395_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function QualitySliderWidget.QualitySliderWidget_C.BndEvt__EditableText_2_K2Node_ComponentBoundEvent_82_OnEditableTextChangedEvent__DelegateSignature
struct UQualitySliderWidget_C_BndEvt__EditableText_2_K2Node_ComponentBoundEvent_82_OnEditableTextChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function QualitySliderWidget.QualitySliderWidget_C.ExecuteUbergraph_QualitySliderWidget
struct UQualitySliderWidget_C_ExecuteUbergraph_QualitySliderWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
