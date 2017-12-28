#pragma once

// PLAYERUNKNOWN'S BATTLEGROUNDS (2.4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class CustomizableObject.CustomizableSkeletalComponent
// 0x0050 (0x0440 - 0x03F0)
class UCustomizableSkeletalComponent : public USceneComponent
{
public:
	class UCustomizableObjectInstance*                 CustomizableObjectInstance;                               // 0x03F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x48];                                      // 0x03F8(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CustomizableObject.CustomizableSkeletalComponent");
		return ptr;
	}


	void UpdateSkeletalMeshAsync(bool bForceReuseResources);
	void UpdateSkeletalMesh(bool bForceReuseResources);
};


// Class CustomizableObject.CustomizableObjectInstance
// 0x0118 (0x0140 - 0x0028)
class UCustomizableObjectInstance : public UObject
{
public:
	class UCustomizableObject*                         CustomizableObject;                                       // 0x0028(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	class USkeletalMesh*                               SkeletalMesh;                                             // 0x0030(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_Transient, CPF_EditConst, CPF_IsPlainOldData)
	int                                                State;                                                    // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	TArray<struct FCustomizableObjectBoolParameterValue> BoolParameters;                                           // 0x0040(0x0010) (CPF_Edit, CPF_EditFixedSize, CPF_ZeroConstructor, CPF_EditConst)
	TArray<struct FCustomizableObjectIntParameterValue> IntParameters;                                            // 0x0050(0x0010) (CPF_Edit, CPF_EditFixedSize, CPF_ZeroConstructor, CPF_EditConst)
	TArray<struct FCustomizableObjectFloatParameterValue> FloatParameters;                                          // 0x0060(0x0010) (CPF_Edit, CPF_EditFixedSize, CPF_ZeroConstructor, CPF_EditConst)
	TArray<struct FCustomizableObjectVectorParameterValue> VectorParameters;                                         // 0x0070(0x0010) (CPF_Edit, CPF_EditFixedSize, CPF_ZeroConstructor, CPF_EditConst)
	TArray<struct FCustomizableObjectProjectorParameterValue> ProjectorParameters;                                      // 0x0080(0x0010) (CPF_Edit, CPF_EditFixedSize, CPF_ZeroConstructor, CPF_EditConst)
	unsigned char                                      bBuildRawData : 1;                                        // 0x0090(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      bBuildRenderData : 1;                                     // 0x0091(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x9E];                                      // 0x0092(0x009E) MISSED OFFSET
	class UCustomizableInstancePrivateData*            PrivateData;                                              // 0x0130(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0138(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CustomizableObject.CustomizableObjectInstance");
		return ptr;
	}


	void SetRandomValues();
};


// Class CustomizableObject.CustomizableInstancePrivateData
// 0x0170 (0x0198 - 0x0028)
class UCustomizableInstancePrivateData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	TArray<struct FGeneratedMaterial>                  GeneratedMaterials;                                       // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	TArray<struct FGeneratedMesh>                      GeneratedMeshes;                                          // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	TArray<struct FGeneratedTexture>                   GeneratedTextures;                                        // 0x0050(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	unsigned char                                      UnknownData01[0x138];                                     // 0x0060(0x0138) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CustomizableObject.CustomizableInstancePrivateData");
		return ptr;
	}

};


// Class CustomizableObject.CustomizableObject
// 0x00D0 (0x00F8 - 0x0028)
class UCustomizableObject : public UObject
{
public:
	class USkeletalMesh*                               ReferenceSkeletalMesh;                                    // 0x0028(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMesh*                                 ReferenceStaticMesh;                                      // 0x0030(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0038(0x0001) UNKNOWN PROPERTY: EnumProperty CustomizableObject.CustomizableObject.Relevancy
	unsigned char                                      bDisableTextureLayoutManagement : 1;                      // 0x0039(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UMaterialInterface*>                  ReferencedMaterials;                                      // 0x0040(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst)
	TArray<struct FMutableModelImageProperties>        ImageProperties;                                          // 0x0050(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst)
	TMap<struct FString, struct FCustomizableObjectIdPair> GroupNodeMap;                                             // 0x0060(0x0050) (CPF_ZeroConstructor)
	struct FCompilationOptions                         CompileOptions;                                           // 0x00B0(0x0018)
	struct FGuid                                       VersionId;                                                // 0x00C8(0x0010) (CPF_IsPlainOldData)
	TArray<struct FMutableModelParameterProperties>    ParameterProperties;                                      // 0x00D8(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x00E8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CustomizableObject.CustomizableObject");
		return ptr;
	}

};


// Class CustomizableObject.CustomizableObjectSystem
// 0x0030 (0x0058 - 0x0028)
class UCustomizableObjectSystem : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
	TArray<class UTexture2D*>                          ProtectedCachedTextures;                                  // 0x0038(0x0010) (CPF_ZeroConstructor)
	TArray<struct FPendingReleaseSkeletalMeshInfo>     PendingReleaseSkeletalMesh;                               // 0x0048(0x0010) (CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CustomizableObject.CustomizableObjectSystem");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
