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

// Function ReplayZoneAreaMessage.ReplayZoneAreaMessage_C.UpdateReplayZoneAreaMessage
struct UReplayZoneAreaMessage_C_UpdateReplayZoneAreaMessage_Params
{
};

// Function ReplayZoneAreaMessage.ReplayZoneAreaMessage_C.Construct
struct UReplayZoneAreaMessage_C_Construct_Params
{
};

// Function ReplayZoneAreaMessage.ReplayZoneAreaMessage_C.Tick
struct UReplayZoneAreaMessage_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	float*                                             InDeltaTime;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ReplayZoneAreaMessage.ReplayZoneAreaMessage_C.ExecuteUbergraph_ReplayZoneAreaMessage
struct UReplayZoneAreaMessage_C_ExecuteUbergraph_ReplayZoneAreaMessage_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
