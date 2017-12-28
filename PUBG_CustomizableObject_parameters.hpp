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

// Function CustomizableObject.CustomizableSkeletalComponent.UpdateSkeletalMeshAsync
struct UCustomizableSkeletalComponent_UpdateSkeletalMeshAsync_Params
{
	bool                                               bForceReuseResources;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CustomizableObject.CustomizableSkeletalComponent.UpdateSkeletalMesh
struct UCustomizableSkeletalComponent_UpdateSkeletalMesh_Params
{
	bool                                               bForceReuseResources;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CustomizableObject.CustomizableObjectInstance.SetRandomValues
struct UCustomizableObjectInstance_SetRandomValues_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
