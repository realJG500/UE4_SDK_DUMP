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

// Function SquadPlayerInfoWidget.SquadPlayerInfoWidget_C.SetSquadPlayerInfoData
struct USquadPlayerInfoWidget_C_SetSquadPlayerInfoData_Params
{
	class ATslCharacter*                               TslCharacter;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SquadPlayerInfoWidget.SquadPlayerInfoWidget_C.UpdateHealthPrepass_Hori
struct USquadPlayerInfoWidget_C_UpdateHealthPrepass_Hori_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SquadPlayerInfoWidget.SquadPlayerInfoWidget_C.On_TextTeamNumber_Prepass_1
struct USquadPlayerInfoWidget_C_On_TextTeamNumber_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SquadPlayerInfoWidget.SquadPlayerInfoWidget_C.On_TextShortcut_Prepass_1
struct USquadPlayerInfoWidget_C_On_TextShortcut_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SquadPlayerInfoWidget.SquadPlayerInfoWidget_C.OnPrepass_2
struct USquadPlayerInfoWidget_C_OnPrepass_2_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SquadPlayerInfoWidget.SquadPlayerInfoWidget_C.On_HPGaugeSizeBox_Hori_Prepass_1
struct USquadPlayerInfoWidget_C_On_HPGaugeSizeBox_Hori_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SquadPlayerInfoWidget.SquadPlayerInfoWidget_C.On_HPGaugeSizeBox_Vert_Prepass_1
struct USquadPlayerInfoWidget_C_On_HPGaugeSizeBox_Vert_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SquadPlayerInfoWidget.SquadPlayerInfoWidget_C.On_ObserverCameraLayer_Prepass_1
struct USquadPlayerInfoWidget_C_On_ObserverCameraLayer_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SquadPlayerInfoWidget.SquadPlayerInfoWidget_C.SetCameraMode_Free
struct USquadPlayerInfoWidget_C_SetCameraMode_Free_Params
{
};

// Function SquadPlayerInfoWidget.SquadPlayerInfoWidget_C.SetCameraMode_Follow
struct USquadPlayerInfoWidget_C_SetCameraMode_Follow_Params
{
};

// Function SquadPlayerInfoWidget.SquadPlayerInfoWidget_C.SetCameraMode_Spectator
struct USquadPlayerInfoWidget_C_SetCameraMode_Spectator_Params
{
};

// Function SquadPlayerInfoWidget.SquadPlayerInfoWidget_C.OnKeyDown
struct USquadPlayerInfoWidget_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (CPF_Parm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function SquadPlayerInfoWidget.SquadPlayerInfoWidget_C.OnMouseButtonDown_1
struct USquadPlayerInfoWidget_C_OnMouseButtonDown_1_Params
{
	struct FGeometry                                   MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function SquadPlayerInfoWidget.SquadPlayerInfoWidget_C.On_KickButtonLayer_Prepass_1
struct USquadPlayerInfoWidget_C_On_KickButtonLayer_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SquadPlayerInfoWidget.SquadPlayerInfoWidget_C.OnPrepass_1
struct USquadPlayerInfoWidget_C_OnPrepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SquadPlayerInfoWidget.SquadPlayerInfoWidget_C.On_PlayerName_Prepass_1
struct USquadPlayerInfoWidget_C_On_PlayerName_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SquadPlayerInfoWidget.SquadPlayerInfoWidget_C.On_IconLayer_Prepass_1
struct USquadPlayerInfoWidget_C_On_IconLayer_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SquadPlayerInfoWidget.SquadPlayerInfoWidget_C.On_IconImage_Prepass_1
struct USquadPlayerInfoWidget_C_On_IconImage_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SquadPlayerInfoWidget.SquadPlayerInfoWidget_C.On_KillCount_Prepass_1
struct USquadPlayerInfoWidget_C_On_KillCount_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SquadPlayerInfoWidget.SquadPlayerInfoWidget_C.On_InfoLayer_Prepass_1
struct USquadPlayerInfoWidget_C_On_InfoLayer_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SquadPlayerInfoWidget.SquadPlayerInfoWidget_C.UpdateHealthPrepass_Vert
struct USquadPlayerInfoWidget_C_UpdateHealthPrepass_Vert_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SquadPlayerInfoWidget.SquadPlayerInfoWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature
struct USquadPlayerInfoWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function SquadPlayerInfoWidget.SquadPlayerInfoWidget_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature
struct USquadPlayerInfoWidget_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function SquadPlayerInfoWidget.SquadPlayerInfoWidget_C.OnMouseEnter
struct USquadPlayerInfoWidget_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function SquadPlayerInfoWidget.SquadPlayerInfoWidget_C.OnMouseLeave
struct USquadPlayerInfoWidget_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function SquadPlayerInfoWidget.SquadPlayerInfoWidget_C.CustomEvent_1
struct USquadPlayerInfoWidget_C_CustomEvent_1_Params
{
};

// Function SquadPlayerInfoWidget.SquadPlayerInfoWidget_C.Tick
struct USquadPlayerInfoWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	float*                                             InDeltaTime;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SquadPlayerInfoWidget.SquadPlayerInfoWidget_C.Construct
struct USquadPlayerInfoWidget_C_Construct_Params
{
};

// Function SquadPlayerInfoWidget.SquadPlayerInfoWidget_C.CustomEvent_3
struct USquadPlayerInfoWidget_C_CustomEvent_3_Params
{
};

// Function SquadPlayerInfoWidget.SquadPlayerInfoWidget_C.CustomEvent_2
struct USquadPlayerInfoWidget_C_CustomEvent_2_Params
{
};

// Function SquadPlayerInfoWidget.SquadPlayerInfoWidget_C.Destruct
struct USquadPlayerInfoWidget_C_Destruct_Params
{
};

// Function SquadPlayerInfoWidget.SquadPlayerInfoWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature
struct USquadPlayerInfoWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function SquadPlayerInfoWidget.SquadPlayerInfoWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_57_OnButtonHoverEvent__DelegateSignature
struct USquadPlayerInfoWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_57_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function SquadPlayerInfoWidget.SquadPlayerInfoWidget_C.ExecuteUbergraph_SquadPlayerInfoWidget
struct USquadPlayerInfoWidget_C_ExecuteUbergraph_SquadPlayerInfoWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
