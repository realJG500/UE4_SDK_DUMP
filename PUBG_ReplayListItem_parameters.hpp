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

// Function ReplayListItem.ReplayListItem_C.SetSeverRecording
struct UReplayListItem_C_SetSeverRecording_Params
{
	bool                                               bIsServerRecording;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ReplayListItem.ReplayListItem_C.SetActionMessageDownloadPercent
struct UReplayListItem_C_SetActionMessageDownloadPercent_Params
{
	float                                              fPercent;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ReplayListItem.ReplayListItem_C.ShowDownloadPercent
struct UReplayListItem_C_ShowDownloadPercent_Params
{
	struct FString                                     strFileName;                                              // (CPF_Parm, CPF_ZeroConstructor)
	int                                                nReceived;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                nTotal;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ReplayListItem.ReplayListItem_C.DisableDownload
struct UReplayListItem_C_DisableDownload_Params
{
};

// Function ReplayListItem.ReplayListItem_C.SetArchived
struct UReplayListItem_C_SetArchived_Params
{
	bool                                               IsArchived;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ReplayListItem.ReplayListItem_C.SetRegionOrLocal
struct UReplayListItem_C_SetRegionOrLocal_Params
{
	struct FString                                     inRegionOrLocal;                                          // (CPF_Parm, CPF_ZeroConstructor)
};

// Function ReplayListItem.ReplayListItem_C.SetShouldKeep
struct UReplayListItem_C_SetShouldKeep_Params
{
	bool                                               bShouldKeep;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ReplayListItem.ReplayListItem_C.SetCorrupt
struct UReplayListItem_C_SetCorrupt_Params
{
	bool                                               bIsCorrupt;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ReplayListItem.ReplayListItem_C.SetInComplete
struct UReplayListItem_C_SetInComplete_Params
{
	bool                                               bIncomplete;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ReplayListItem.ReplayListItem_C.SetVersionCompatible
struct UReplayListItem_C_SetVersionCompatible_Params
{
	bool                                               bIsVersionCompatible;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ReplayListItem.ReplayListItem_C.SetMode
struct UReplayListItem_C_SetMode_Params
{
	struct FString                                     Mode;                                                     // (CPF_Parm, CPF_ZeroConstructor)
};

// Function ReplayListItem.ReplayListItem_C.SetLength
struct UReplayListItem_C_SetLength_Params
{
	int                                                LengthInMS;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ReplayListItem.ReplayListItem_C.SetActionMessageSimple
struct UReplayListItem_C_SetActionMessageSimple_Params
{
	struct FString                                     Message;                                                  // (CPF_Parm, CPF_ZeroConstructor)
};

// Function ReplayListItem.ReplayListItem_C.SetActionMessageDecompressPercent
struct UReplayListItem_C_SetActionMessageDecompressPercent_Params
{
	float                                              fPercent;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ReplayListItem.ReplayListItem_C.SetActionMessage
struct UReplayListItem_C_SetActionMessage_Params
{
	bool                                               bIsDownloading;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsUnzipping;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ReplayListItem.ReplayListItem_C.SetDownloadCancelBtns
struct UReplayListItem_C_SetDownloadCancelBtns_Params
{
	bool                                               bIsDownloading;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsUnzipping;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ReplayListItem.ReplayListItem_C.SetDate
struct UReplayListItem_C_SetDate_Params
{
	struct FDateTime                                   Date;                                                     // (CPF_Parm)
};

// Function ReplayListItem.ReplayListItem_C.SetLive
struct UReplayListItem_C_SetLive_Params
{
	bool                                               IsLive;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ReplayListItem.ReplayListItem_C.SetSize
struct UReplayListItem_C_SetSize_Params
{
	int                                                SizeInBytes;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ReplayListItem.ReplayListItem_C.SetFriendlyName
struct UReplayListItem_C_SetFriendlyName_Params
{
	struct FString                                     FriendlyName;                                             // (CPF_Parm, CPF_ZeroConstructor)
};

// Function ReplayListItem.ReplayListItem_C.SetReplayItem
struct UReplayListItem_C_SetReplayItem_Params
{
	struct FReplayItem                                 ReplayItem;                                               // (CPF_Parm)
};

// Function ReplayListItem.ReplayListItem_C.SetSessionName
struct UReplayListItem_C_SetSessionName_Params
{
	struct FString                                     Text;                                                     // (CPF_Parm, CPF_ZeroConstructor)
};

// Function ReplayListItem.ReplayListItem_C.OnProgress
struct UReplayListItem_C_OnProgress_Params
{
	struct FString                                     archive;                                                  // (CPF_Parm, CPF_ZeroConstructor)
	float                                              percentage;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                bytes;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ReplayListItem.ReplayListItem_C.OnFileDone
struct UReplayListItem_C_OnFileDone_Params
{
	struct FString                                     archive;                                                  // (CPF_Parm, CPF_ZeroConstructor)
	struct FString                                     file;                                                     // (CPF_Parm, CPF_ZeroConstructor)
};

// Function ReplayListItem.ReplayListItem_C.OnDone
struct UReplayListItem_C_OnDone_Params
{
	struct FString                                     archive;                                                  // (CPF_Parm, CPF_ZeroConstructor)
	TEnumAsByte<EZipUtilityCompletionState>            CompletionState;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ReplayListItem.ReplayListItem_C.BndEvt__Cancel_K2Node_ComponentBoundEvent_92_OnButtonClickedEvent__DelegateSignature
struct UReplayListItem_C_BndEvt__Cancel_K2Node_ComponentBoundEvent_92_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ReplayListItem.ReplayListItem_C.BndEvt__CheckBoxShouldKeep_K2Node_ComponentBoundEvent_548_OnCheckBoxComponentStateChanged__DelegateSignature
struct UReplayListItem_C_BndEvt__CheckBoxShouldKeep_K2Node_ComponentBoundEvent_548_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ReplayListItem.ReplayListItem_C.UnzipEvent
struct UReplayListItem_C_UnzipEvent_Params
{
	struct FString                                     strFullPath;                                              // (CPF_Parm, CPF_ZeroConstructor)
	struct FString                                     strToExtract;                                             // (CPF_Parm, CPF_ZeroConstructor)
};

// Function ReplayListItem.ReplayListItem_C.ShowUnzipPercent
struct UReplayListItem_C_ShowUnzipPercent_Params
{
	struct FString                                     archive;                                                  // (CPF_Parm, CPF_ZeroConstructor)
	float                                              percentage;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                bytes;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ReplayListItem.ReplayListItem_C.BndEvt__ButtonReplay_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UReplayListItem_C_BndEvt__ButtonReplay_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ReplayListItem.ReplayListItem_C.OnStartProcess
struct UReplayListItem_C_OnStartProcess_Params
{
	struct FString                                     archive;                                                  // (CPF_Parm, CPF_ZeroConstructor)
	int                                                bytes;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ReplayListItem.ReplayListItem_C.OnFileFound
struct UReplayListItem_C_OnFileFound_Params
{
	struct FString                                     archive;                                                  // (CPF_Parm, CPF_ZeroConstructor)
	struct FString                                     file;                                                     // (CPF_Parm, CPF_ZeroConstructor)
	int                                                Size;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ReplayListItem.ReplayListItem_C.ShowUnZipFileDone
struct UReplayListItem_C_ShowUnZipFileDone_Params
{
	struct FString                                     archive;                                                  // (CPF_Parm, CPF_ZeroConstructor)
	struct FString                                     file;                                                     // (CPF_Parm, CPF_ZeroConstructor)
};

// Function ReplayListItem.ReplayListItem_C.ShowUnzipDone
struct UReplayListItem_C_ShowUnzipDone_Params
{
	struct FString                                     archive;                                                  // (CPF_Parm, CPF_ZeroConstructor)
	TEnumAsByte<EZipUtilityCompletionState>            CompletionState;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ReplayListItem.ReplayListItem_C.BndEvt__Download_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
struct UReplayListItem_C_BndEvt__Download_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ReplayListItem.ReplayListItem_C.Construct
struct UReplayListItem_C_Construct_Params
{
};

// Function ReplayListItem.ReplayListItem_C.ExecuteUbergraph_ReplayListItem
struct UReplayListItem_C_ExecuteUbergraph_ReplayListItem_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ReplayListItem.ReplayListItem_C.EventOnUpdateItem__DelegateSignature
struct UReplayListItem_C_EventOnUpdateItem__DelegateSignature_Params
{
	struct FReplayItem                                 inReplayItem;                                             // (CPF_Parm)
};

// Function ReplayListItem.ReplayListItem_C.EventOnUpdateShouldKeep__DelegateSignature
struct UReplayListItem_C_EventOnUpdateShouldKeep__DelegateSignature_Params
{
	struct FString                                     RegionOrLocal;                                            // (CPF_Parm, CPF_ZeroConstructor)
	struct FReplayItem                                 inReplayItem;                                             // (CPF_Parm)
	struct FReplayItem                                 bShoudUpdate;                                             // (CPF_Parm)
};

// Function ReplayListItem.ReplayListItem_C.EventOnCancelDownloading__DelegateSignature
struct UReplayListItem_C_EventOnCancelDownloading__DelegateSignature_Params
{
	struct FString                                     Name;                                                     // (CPF_Parm, CPF_ZeroConstructor)
	class UWidget*                                     Widget;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ReplayListItem.ReplayListItem_C.EventOnDownload__DelegateSignature
struct UReplayListItem_C_EventOnDownload__DelegateSignature_Params
{
	struct FString                                     Name;                                                     // (CPF_Parm, CPF_ZeroConstructor)
	class UWidget*                                     Widget;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ReplayListItem.ReplayListItem_C.EventOnItemClicked__DelegateSignature
struct UReplayListItem_C_EventOnItemClicked__DelegateSignature_Params
{
	struct FString                                     inRegionOrLocal;                                          // (CPF_Parm, CPF_ZeroConstructor)
	struct FReplayItem                                 inReplayItem;                                             // (CPF_Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
