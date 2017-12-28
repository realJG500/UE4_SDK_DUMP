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

// Function LobbyNameTagHUD.LobbyNameTagHUD_C.CleanUpNameTagWidget
struct ULobbyNameTagHUD_C_CleanUpNameTagWidget_Params
{
	int                                                SlotIndex;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LobbyNameTagHUD.LobbyNameTagHUD_C.SetupNameTagWidget
struct ULobbyNameTagHUD_C_SetupNameTagWidget_Params
{
	int                                                SlotIndex;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LobbyNameTagHUD.LobbyNameTagHUD_C.GetNameTagWidget
struct ULobbyNameTagHUD_C_GetNameTagWidget_Params
{
	int                                                SlotIndex;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTslLobbyNameTagWidget*                      Widget;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LobbyNameTagHUD.LobbyNameTagHUD_C.On_NameTag_0_Prepass_1
struct ULobbyNameTagHUD_C_On_NameTag_0_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function LobbyNameTagHUD.LobbyNameTagHUD_C.Construct
struct ULobbyNameTagHUD_C_Construct_Params
{
};

// Function LobbyNameTagHUD.LobbyNameTagHUD_C.ExecuteUbergraph_LobbyNameTagHUD
struct ULobbyNameTagHUD_C_ExecuteUbergraph_LobbyNameTagHUD_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
