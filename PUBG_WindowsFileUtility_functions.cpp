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

// Function WindowsFileUtility.WFUFileListInterface.OnListFileFound
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 Filename                       (CPF_Parm, CPF_ZeroConstructor)
// int                            ByteCount                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 FilePath                       (CPF_Parm, CPF_ZeroConstructor)

void UWFUFileListInterface::OnListFileFound(const struct FString& Filename, int ByteCount, const struct FString& FilePath)
{
	static auto fn = UObject::FindObject<UFunction>("Function WindowsFileUtility.WFUFileListInterface.OnListFileFound");

	UWFUFileListInterface_OnListFileFound_Params params;
	params.Filename = Filename;
	params.ByteCount = ByteCount;
	params.FilePath = FilePath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindowsFileUtility.WFUFileListInterface.OnListDone
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 DirectoryPath                  (CPF_Parm, CPF_ZeroConstructor)
// TArray<struct FString>         Files                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<struct FString>         Folders                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UWFUFileListInterface::OnListDone(const struct FString& DirectoryPath, TArray<struct FString> Files, TArray<struct FString> Folders)
{
	static auto fn = UObject::FindObject<UFunction>("Function WindowsFileUtility.WFUFileListInterface.OnListDone");

	UWFUFileListInterface_OnListDone_Params params;
	params.DirectoryPath = DirectoryPath;
	params.Files = Files;
	params.Folders = Folders;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindowsFileUtility.WFUFileListInterface.OnListDirectoryFound
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 DirectoryName                  (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 FilePath                       (CPF_Parm, CPF_ZeroConstructor)

void UWFUFileListInterface::OnListDirectoryFound(const struct FString& DirectoryName, const struct FString& FilePath)
{
	static auto fn = UObject::FindObject<UFunction>("Function WindowsFileUtility.WFUFileListInterface.OnListDirectoryFound");

	UWFUFileListInterface_OnListDirectoryFound_Params params;
	params.DirectoryName = DirectoryName;
	params.FilePath = FilePath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindowsFileUtility.WFUFolderWatchInterface.OnFileChanged
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 Filename                       (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 FilePath                       (CPF_Parm, CPF_ZeroConstructor)

void UWFUFolderWatchInterface::OnFileChanged(const struct FString& Filename, const struct FString& FilePath)
{
	static auto fn = UObject::FindObject<UFunction>("Function WindowsFileUtility.WFUFolderWatchInterface.OnFileChanged");

	UWFUFolderWatchInterface_OnFileChanged_Params params;
	params.Filename = Filename;
	params.FilePath = FilePath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindowsFileUtility.WFUFolderWatchInterface.OnDirectoryChanged
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 DirectoryName                  (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 DirectoryPath                  (CPF_Parm, CPF_ZeroConstructor)

void UWFUFolderWatchInterface::OnDirectoryChanged(const struct FString& DirectoryName, const struct FString& DirectoryPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function WindowsFileUtility.WFUFolderWatchInterface.OnDirectoryChanged");

	UWFUFolderWatchInterface_OnDirectoryChanged_Params params;
	params.DirectoryName = DirectoryName;
	params.DirectoryPath = DirectoryPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.WatchFolder
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 FullPath                       (CPF_Parm, CPF_ZeroConstructor)
// class UObject*                 WatcherDelegate                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWindowsFileUtilityFunctionLibrary::STATIC_WatchFolder(const struct FString& FullPath, class UObject* WatcherDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.WatchFolder");

	UWindowsFileUtilityFunctionLibrary_WatchFolder_Params params;
	params.FullPath = FullPath;
	params.WatcherDelegate = WatcherDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.StopWatchingFolder
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 FullPath                       (CPF_Parm, CPF_ZeroConstructor)
// class UObject*                 WatcherDelegate                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWindowsFileUtilityFunctionLibrary::STATIC_StopWatchingFolder(const struct FString& FullPath, class UObject* WatcherDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.StopWatchingFolder");

	UWindowsFileUtilityFunctionLibrary_StopWatchingFolder_Params params;
	params.FullPath = FullPath;
	params.WatcherDelegate = WatcherDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.MoveFileTo
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 From                           (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 To                             (CPF_Parm, CPF_ZeroConstructor)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWindowsFileUtilityFunctionLibrary::STATIC_MoveFileTo(const struct FString& From, const struct FString& To)
{
	static auto fn = UObject::FindObject<UFunction>("Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.MoveFileTo");

	UWindowsFileUtilityFunctionLibrary_MoveFileTo_Params params;
	params.From = From;
	params.To = To;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.ListContentsOfFolder
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 FullPath                       (CPF_Parm, CPF_ZeroConstructor)
// class UObject*                 ListDelegate                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWindowsFileUtilityFunctionLibrary::STATIC_ListContentsOfFolder(const struct FString& FullPath, class UObject* ListDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.ListContentsOfFolder");

	UWindowsFileUtilityFunctionLibrary_ListContentsOfFolder_Params params;
	params.FullPath = FullPath;
	params.ListDelegate = ListDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.DeleteFolderRecursively
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 FullPath                       (CPF_Parm, CPF_ZeroConstructor)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWindowsFileUtilityFunctionLibrary::STATIC_DeleteFolderRecursively(const struct FString& FullPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.DeleteFolderRecursively");

	UWindowsFileUtilityFunctionLibrary_DeleteFolderRecursively_Params params;
	params.FullPath = FullPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.DeleteFileAt
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 FullPath                       (CPF_Parm, CPF_ZeroConstructor)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWindowsFileUtilityFunctionLibrary::STATIC_DeleteFileAt(const struct FString& FullPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.DeleteFileAt");

	UWindowsFileUtilityFunctionLibrary_DeleteFileAt_Params params;
	params.FullPath = FullPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.DeleteEmptyFolder
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 FullPath                       (CPF_Parm, CPF_ZeroConstructor)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWindowsFileUtilityFunctionLibrary::STATIC_DeleteEmptyFolder(const struct FString& FullPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.DeleteEmptyFolder");

	UWindowsFileUtilityFunctionLibrary_DeleteEmptyFolder_Params params;
	params.FullPath = FullPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.CreateDirectoryAt
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 FullPath                       (CPF_Parm, CPF_ZeroConstructor)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWindowsFileUtilityFunctionLibrary::STATIC_CreateDirectoryAt(const struct FString& FullPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function WindowsFileUtility.WindowsFileUtilityFunctionLibrary.CreateDirectoryAt");

	UWindowsFileUtilityFunctionLibrary_CreateDirectoryAt_Params params;
	params.FullPath = FullPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
