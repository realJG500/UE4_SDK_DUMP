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

// Function BloodSpotWidget.BloodSpotWidget_C.Start
struct UBloodSpotWidget_C_Start_Params
{
};

// Function BloodSpotWidget.BloodSpotWidget_C.Construct
struct UBloodSpotWidget_C_Construct_Params
{
};

// Function BloodSpotWidget.BloodSpotWidget_C.OnAnimationStarted
struct UBloodSpotWidget_C_OnAnimationStarted_Params
{
	class UWidgetAnimation**                           Animation;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BloodSpotWidget.BloodSpotWidget_C.OnAnimationFinished
struct UBloodSpotWidget_C_OnAnimationFinished_Params
{
	class UWidgetAnimation**                           Animation;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BloodSpotWidget.BloodSpotWidget_C.ExecuteUbergraph_BloodSpotWidget
struct UBloodSpotWidget_C_ExecuteUbergraph_BloodSpotWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
