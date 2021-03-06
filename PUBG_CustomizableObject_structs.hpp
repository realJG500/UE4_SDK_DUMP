#pragma once

// PLAYERUNKNOWN'S BATTLEGROUNDS (2.4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum CustomizableObject.EMutableParameterType
enum class EMutableParameterType
{
	EMutableParameterType__None    = 0,
	EMutableParameterType__Bool    = 1,
	EMutableParameterType__Int     = 2,
	EMutableParameterType__Float   = 3,
	EMutableParameterType__Color   = 4,
	EMutableParameterType__Projector = 5,
	EMutableParameterType__EMutableParameterType_MAX = 6
};


// Enum CustomizableObject.ECustomizableObjectRelevancy
enum class ECustomizableObjectRelevancy
{
	ECustomizableObjectRelevancy__All = 0,
	ECustomizableObjectRelevancy__ClientOnly = 1,
	ECustomizableObjectRelevancy__ECustomizableObjectRelevancy_MAX = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct CustomizableObject.CustomizableObjectBoolParameterValue
// 0x0018
struct FCustomizableObjectBoolParameterValue
{
	struct FString                                     ParameterName;                                            // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst)
	unsigned char                                      ParameterValue : 1;                                       // 0x0010(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
};

// ScriptStruct CustomizableObject.CustomizableObjectIntParameterValue
// 0x0028
struct FCustomizableObjectIntParameterValue
{
	struct FString                                     ParameterName;                                            // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst)
	int                                                ParameterValue;                                           // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	struct FString                                     ParameterValueName;                                       // 0x0018(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct CustomizableObject.CustomizableObjectFloatParameterValue
// 0x0018
struct FCustomizableObjectFloatParameterValue
{
	struct FString                                     ParameterName;                                            // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst)
	float                                              ParameterValue;                                           // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
};

// ScriptStruct CustomizableObject.CustomizableObjectVectorParameterValue
// 0x0020
struct FCustomizableObjectVectorParameterValue
{
	struct FString                                     ParameterName;                                            // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst)
	struct FLinearColor                                ParameterValue;                                           // 0x0010(0x0010) (CPF_Edit, CPF_EditConst, CPF_IsPlainOldData)
};

// ScriptStruct CustomizableObject.CustomizableObjectProjector
// 0x002C
struct FCustomizableObjectProjector
{
	class Vector3D                                     Position;                                                 // 0x0000(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	class Vector3D                                     Direction;                                                // 0x000C(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	class Vector3D                                     Up;                                                       // 0x0018(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	class Vector2D                                     Scale;                                                    // 0x0024(0x0008) (CPF_Edit, CPF_IsPlainOldData)
};

// ScriptStruct CustomizableObject.CustomizableObjectProjectorParameterValue
// 0x0040
struct FCustomizableObjectProjectorParameterValue
{
	struct FString                                     ParameterName;                                            // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst)
	struct FCustomizableObjectProjector                Value;                                                    // 0x0010(0x002C) (CPF_Edit, CPF_EditConst)
};

// ScriptStruct CustomizableObject.GeneratedTexture
// 0x0028
struct FGeneratedTexture
{
	int                                                ID;                                                       // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     Name;                                                     // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	class UTexture2D*                                  Texture;                                                  // 0x0018(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
};

// ScriptStruct CustomizableObject.GeneratedMaterial
// 0x0020
struct FGeneratedMaterial
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst)
	TArray<struct FGeneratedTexture>                   Textures;                                                 // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst)
};

// ScriptStruct CustomizableObject.GeneratedMesh
// 0x0010
struct FGeneratedMesh
{
	int                                                ID;                                                       // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMesh*                                 Mesh;                                                     // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct CustomizableObject.MutableModelImageProperties
// 0x0028
struct FMutableModelImageProperties
{
	struct FString                                     TextureParameterName;                                     // 0x0000(0x0010) (CPF_ZeroConstructor)
	TEnumAsByte<ETextureCompressionSettings>           CompressionSettings;                                      // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETextureFilter>                        Filter;                                                   // 0x0011(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      SRGB : 1;                                                 // 0x0014(0x0001)
	int                                                LODBias;                                                  // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETextureMipGenSettings>                MipGenSettings;                                           // 0x001C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bDitherMipMapAlpha : 1;                                   // 0x0020(0x0001)
};

// ScriptStruct CustomizableObject.CustomizableObjectIdPair
// 0x0020
struct FCustomizableObjectIdPair
{
	struct FString                                     CustomizableObjectGroupName;                              // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	struct FString                                     CustomizableObjectName;                                   // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
};

// ScriptStruct CustomizableObject.CompilationOptions
// 0x0018
struct FCompilationOptions
{
	unsigned char                                      bLocal : 1;                                               // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                OptimizationLevel;                                        // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct CustomizableObject.MutableModelParameterValue
// 0x0018
struct FMutableModelParameterValue
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (CPF_ZeroConstructor)
	int                                                Value;                                                    // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct CustomizableObject.MutableModelParameterProperties
// 0x0028
struct FMutableModelParameterProperties
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0010(0x0001) UNKNOWN PROPERTY: EnumProperty CustomizableObject.MutableModelParameterProperties.Type
	int                                                ImageDescriptionCount;                                    // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FMutableModelParameterValue>         PossibleValues;                                           // 0x0018(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct CustomizableObject.PendingReleaseSkeletalMeshInfo
// 0x0010
struct FPendingReleaseSkeletalMeshInfo
{
	class USkeletalMesh*                               SkeletalMesh;                                             // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	double                                             Timestamp;                                                // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct CustomizableObject.CustomizedMaterialTexture2D
// 0x0010
struct FCustomizedMaterialTexture2D
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	class UTexture2D*                                  Texture;                                                  // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct CustomizableObject.CustomizableObjectIdentifier
// 0x0030
struct FCustomizableObjectIdentifier
{
	struct FString                                     CustomizableObjectGroupName;                              // 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FString                                     CustomizableObjectName;                                   // 0x0010(0x0010) (CPF_ZeroConstructor)
	struct FString                                     Guid;                                                     // 0x0020(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
