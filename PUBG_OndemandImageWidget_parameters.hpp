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

// Function OndemandImageWidget.OnDemandImageWidget_C.UnloadAndHideImage
struct UOnDemandImageWidget_C_UnloadAndHideImage_Params
{
};

// Function OndemandImageWidget.OnDemandImageWidget_C.LoadAndShowImage
struct UOnDemandImageWidget_C_LoadAndShowImage_Params
{
};

// Function OndemandImageWidget.OnDemandImageWidget_C.UpdateVisibility
struct UOnDemandImageWidget_C_UpdateVisibility_Params
{
};

// Function OndemandImageWidget.OnDemandImageWidget_C.SetImagePath
struct UOnDemandImageWidget_C_SetImagePath_Params
{
	TAssetPtr<class UTexture>                          TextureAsset;                                             // (CPF_Parm)
};

// Function OndemandImageWidget.OnDemandImageWidget_C.Construct
struct UOnDemandImageWidget_C_Construct_Params
{
};

// Function OndemandImageWidget.OnDemandImageWidget_C.Tick
struct UOnDemandImageWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	float*                                             InDeltaTime;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function OndemandImageWidget.OnDemandImageWidget_C.Destruct
struct UOnDemandImageWidget_C_Destruct_Params
{
};

// Function OndemandImageWidget.OnDemandImageWidget_C.ExecuteUbergraph_OnDemandImageWidget
struct UOnDemandImageWidget_C_ExecuteUbergraph_OnDemandImageWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
