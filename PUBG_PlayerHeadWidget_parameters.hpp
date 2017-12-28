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

// Function PlayerHeadWidget.PlayerHeadWidget_C.UpdateHealthGaugeColor
struct UPlayerHeadWidget_C_UpdateHealthGaugeColor_Params
{
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.AddAlphaWhenADS
struct UPlayerHeadWidget_C_AddAlphaWhenADS_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.IsEmptyPlayerName
struct UPlayerHeadWidget_C_IsEmptyPlayerName_Params
{
	bool                                               EmptyPlayerName;                                          // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.UpdateTextColor
struct UPlayerHeadWidget_C_UpdateTextColor_Params
{
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.IsGroggy
struct UPlayerHeadWidget_C_IsGroggy_Params
{
	bool                                               IsGroggy;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.GetHealthPercent
struct UPlayerHeadWidget_C_GetHealthPercent_Params
{
	float                                              Health;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.GetGroggyHealthPercent
struct UPlayerHeadWidget_C_GetGroggyHealthPercent_Params
{
	float                                              GroggyHealth;                                             // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.UpdateHealthGauge
struct UPlayerHeadWidget_C_UpdateHealthGauge_Params
{
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.CustomTick
struct UPlayerHeadWidget_C_CustomTick_Params
{
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.TimerCheckUpdateList
struct UPlayerHeadWidget_C_TimerCheckUpdateList_Params
{
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.SetPlayerNameTag
struct UPlayerHeadWidget_C_SetPlayerNameTag_Params
{
	struct FName*                                      PlayerName;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.Tick
struct UPlayerHeadWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	float*                                             InDeltaTime;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.Construct
struct UPlayerHeadWidget_C_Construct_Params
{
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.SetCharacterIconPosition_UC
struct UPlayerHeadWidget_C_SetCharacterIconPosition_UC_Params
{
	class Vector2D*                                    Pos_UC;                                                   // (CPF_Parm, CPF_IsPlainOldData)
	bool*                                              IsHidden;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.SetTeamNumber
struct UPlayerHeadWidget_C_SetTeamNumber_Params
{
	int*                                               TeamNumber;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor*                               teamColor;                                                // (CPF_Parm, CPF_IsPlainOldData)
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.SetIndicatorColor
struct UPlayerHeadWidget_C_SetIndicatorColor_Params
{
	struct FLinearColor*                               teamColor;                                                // (CPF_Parm, CPF_IsPlainOldData)
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.ExecuteUbergraph_PlayerHeadWidget
struct UPlayerHeadWidget_C_ExecuteUbergraph_PlayerHeadWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
