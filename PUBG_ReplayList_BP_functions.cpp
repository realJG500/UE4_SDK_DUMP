// PLAYERUNKNOWN'S BATTLEGROUNDS (2.4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ReplayList_BP.ReplayList_BP_C.OnUpdateItem
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FReplayItem             inReplayItem                   (CPF_Parm)

void AReplayList_BP_C::OnUpdateItem(const struct FReplayItem& inReplayItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayList_BP.ReplayList_BP_C.OnUpdateItem");

	AReplayList_BP_C_OnUpdateItem_Params params;
	params.inReplayItem = inReplayItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayList_BP.ReplayList_BP_C.UpdateReplayList
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 inRegionOrLocal                (CPF_Parm, CPF_ZeroConstructor)

void AReplayList_BP_C::UpdateReplayList(const struct FString& inRegionOrLocal)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayList_BP.ReplayList_BP_C.UpdateReplayList");

	AReplayList_BP_C_UpdateReplayList_Params params;
	params.inRegionOrLocal = inRegionOrLocal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayList_BP.ReplayList_BP_C.CheckReplayBusyStatus
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsReplayBusy                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AReplayList_BP_C::CheckReplayBusyStatus(bool* bIsReplayBusy)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayList_BP.ReplayList_BP_C.CheckReplayBusyStatus");

	AReplayList_BP_C_CheckReplayBusyStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsReplayBusy != nullptr)
		*bIsReplayBusy = params.bIsReplayBusy;
}


// Function ReplayList_BP.ReplayList_BP_C.OnGoPageBtn
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AReplayList_BP_C::OnGoPageBtn()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayList_BP.ReplayList_BP_C.OnGoPageBtn");

	AReplayList_BP_C_OnGoPageBtn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayList_BP.ReplayList_BP_C.OnNextPageBtn
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AReplayList_BP_C::OnNextPageBtn()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayList_BP.ReplayList_BP_C.OnNextPageBtn");

	AReplayList_BP_C_OnNextPageBtn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayList_BP.ReplayList_BP_C.OnPrevPageBtn
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AReplayList_BP_C::OnPrevPageBtn()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayList_BP.ReplayList_BP_C.OnPrevPageBtn");

	AReplayList_BP_C_OnPrevPageBtn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayList_BP.ReplayList_BP_C.ClearReplayList
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AReplayList_BP_C::ClearReplayList()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayList_BP.ReplayList_BP_C.ClearReplayList");

	AReplayList_BP_C_ClearReplayList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayList_BP.ReplayList_BP_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AReplayList_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayList_BP.ReplayList_BP_C.UserConstructionScript");

	AReplayList_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayList_BP.ReplayList_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AReplayList_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayList_BP.ReplayList_BP_C.ReceiveBeginPlay");

	AReplayList_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayList_BP.ReplayList_BP_C.CreateReplayListEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AReplayList_BP_C::CreateReplayListEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayList_BP.ReplayList_BP_C.CreateReplayListEvent");

	AReplayList_BP_C_CreateReplayListEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayList_BP.ReplayList_BP_C.PrevPageEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AReplayList_BP_C::PrevPageEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayList_BP.ReplayList_BP_C.PrevPageEvent");

	AReplayList_BP_C_PrevPageEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayList_BP.ReplayList_BP_C.NextPageEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AReplayList_BP_C::NextPageEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayList_BP.ReplayList_BP_C.NextPageEvent");

	AReplayList_BP_C_NextPageEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayList_BP.ReplayList_BP_C.GoPageEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AReplayList_BP_C::GoPageEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayList_BP.ReplayList_BP_C.GoPageEvent");

	AReplayList_BP_C_GoPageEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayList_BP.ReplayList_BP_C.OnItemClicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 RegionOrLocal                  (CPF_Parm, CPF_ZeroConstructor)
// struct FReplayItem             inReplayItem                   (CPF_Parm)

void AReplayList_BP_C::OnItemClicked(const struct FString& RegionOrLocal, const struct FReplayItem& inReplayItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayList_BP.ReplayList_BP_C.OnItemClicked");

	AReplayList_BP_C_OnItemClicked_Params params;
	params.RegionOrLocal = RegionOrLocal;
	params.inReplayItem = inReplayItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayList_BP.ReplayList_BP_C.ExecuteUbergraph_ReplayList_BP
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AReplayList_BP_C::ExecuteUbergraph_ReplayList_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayList_BP.ReplayList_BP_C.ExecuteUbergraph_ReplayList_BP");

	AReplayList_BP_C_ExecuteUbergraph_ReplayList_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
