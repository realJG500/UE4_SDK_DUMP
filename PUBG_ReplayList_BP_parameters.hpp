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

// Function ReplayList_BP.ReplayList_BP_C.OnUpdateItem
struct AReplayList_BP_C_OnUpdateItem_Params
{
	struct FReplayItem                                 inReplayItem;                                             // (CPF_Parm)
};

// Function ReplayList_BP.ReplayList_BP_C.UpdateReplayList
struct AReplayList_BP_C_UpdateReplayList_Params
{
	struct FString                                     inRegionOrLocal;                                          // (CPF_Parm, CPF_ZeroConstructor)
};

// Function ReplayList_BP.ReplayList_BP_C.CheckReplayBusyStatus
struct AReplayList_BP_C_CheckReplayBusyStatus_Params
{
	bool                                               bIsReplayBusy;                                            // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ReplayList_BP.ReplayList_BP_C.OnGoPageBtn
struct AReplayList_BP_C_OnGoPageBtn_Params
{
};

// Function ReplayList_BP.ReplayList_BP_C.OnNextPageBtn
struct AReplayList_BP_C_OnNextPageBtn_Params
{
};

// Function ReplayList_BP.ReplayList_BP_C.OnPrevPageBtn
struct AReplayList_BP_C_OnPrevPageBtn_Params
{
};

// Function ReplayList_BP.ReplayList_BP_C.ClearReplayList
struct AReplayList_BP_C_ClearReplayList_Params
{
};

// Function ReplayList_BP.ReplayList_BP_C.UserConstructionScript
struct AReplayList_BP_C_UserConstructionScript_Params
{
};

// Function ReplayList_BP.ReplayList_BP_C.ReceiveBeginPlay
struct AReplayList_BP_C_ReceiveBeginPlay_Params
{
};

// Function ReplayList_BP.ReplayList_BP_C.CreateReplayListEvent
struct AReplayList_BP_C_CreateReplayListEvent_Params
{
};

// Function ReplayList_BP.ReplayList_BP_C.PrevPageEvent
struct AReplayList_BP_C_PrevPageEvent_Params
{
};

// Function ReplayList_BP.ReplayList_BP_C.NextPageEvent
struct AReplayList_BP_C_NextPageEvent_Params
{
};

// Function ReplayList_BP.ReplayList_BP_C.GoPageEvent
struct AReplayList_BP_C_GoPageEvent_Params
{
};

// Function ReplayList_BP.ReplayList_BP_C.OnItemClicked
struct AReplayList_BP_C_OnItemClicked_Params
{
	struct FString                                     RegionOrLocal;                                            // (CPF_Parm, CPF_ZeroConstructor)
	struct FReplayItem                                 inReplayItem;                                             // (CPF_Parm)
};

// Function ReplayList_BP.ReplayList_BP_C.ExecuteUbergraph_ReplayList_BP
struct AReplayList_BP_C_ExecuteUbergraph_ReplayList_BP_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
