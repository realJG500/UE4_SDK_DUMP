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

// Function ReplaySettings.ReplaySettings_C.Get_KillcamComboBox_Visibility_1
struct UReplaySettings_C_Get_KillcamComboBox_Visibility_1_Params
{
};

// Function ReplaySettings.ReplaySettings_C.Get_ReplayComboBox_Visibility_1
struct UReplaySettings_C_Get_ReplayComboBox_Visibility_1_Params
{
};

// Function ReplaySettings.ReplaySettings_C.Get_ReplayOption_Editable
struct UReplaySettings_C_Get_ReplayOption_Editable_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function ReplaySettings.ReplaySettings_C.ApplyByCurrentSelectedSettings
struct UReplaySettings_C_ApplyByCurrentSelectedSettings_Params
{
};

// Function ReplaySettings.ReplaySettings_C.InitReplaySettings
struct UReplaySettings_C_InitReplaySettings_Params
{
};

// Function ReplaySettings.ReplaySettings_C.IsChanged
struct UReplaySettings_C_IsChanged_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function ReplaySettings.ReplaySettings_C.IsEnableApply
struct UReplaySettings_C_IsEnableApply_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function ReplaySettings.ReplaySettings_C.SetToDefault
struct UReplaySettings_C_SetToDefault_Params
{
};

// Function ReplaySettings.ReplaySettings_C.OnDefault
struct UReplaySettings_C_OnDefault_Params
{
};

// Function ReplaySettings.ReplaySettings_C.Construct
struct UReplaySettings_C_Construct_Params
{
};

// Function ReplaySettings.ReplaySettings_C.OnApply
struct UReplaySettings_C_OnApply_Params
{
};

// Function ReplaySettings.ReplaySettings_C.ExecuteUbergraph_ReplaySettings
struct UReplaySettings_C_ExecuteUbergraph_ReplaySettings_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
