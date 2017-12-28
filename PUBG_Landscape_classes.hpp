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

// Class Landscape.ControlPointMeshComponent
// 0x0000 (0x09E0 - 0x09E0)
class UControlPointMeshComponent : public UStaticMeshComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.ControlPointMeshComponent");
		return ptr;
	}

};


// Class Landscape.LandscapeComponent
// 0x0170 (0x09C0 - 0x0850)
class ULandscapeComponent : public UPrimitiveComponent
{
public:
	int                                                ComponentSizeQuads;                                       // 0x0850(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SubsectionSizeQuads;                                      // 0x0854(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumSubsections;                                           // 0x0858(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInterface*                          OverrideMaterial;                                         // 0x0860(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInterface*                          OverrideHoleMaterial;                                     // 0x0868(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UMaterialInstanceConstant*>           MaterialInstances;                                        // 0x0870(0x0010) (CPF_ZeroConstructor)
	TArray<struct FWeightmapLayerAllocationInfo>       WeightmapLayerAllocations;                                // 0x0880(0x0010) (CPF_ZeroConstructor)
	TArray<class UTexture2D*>                          WeightmapTextures;                                        // 0x0890(0x0010) (CPF_ZeroConstructor)
	class UTexture2D*                                  XYOffsetmapTexture;                                       // 0x08A0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x08A8(0x0008) MISSED OFFSET
	struct FVector4                                    WeightmapScaleBias;                                       // 0x08B0(0x0010) (CPF_IsPlainOldData)
	float                                              WeightmapSubsectionOffset;                                // 0x08C0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x08C4(0x000C) MISSED OFFSET
	struct FVector4                                    HeightmapScaleBias;                                       // 0x08D0(0x0010) (CPF_IsPlainOldData)
	class UTexture2D*                                  HeightmapTexture;                                         // 0x08E0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FBox                                        CachedLocalBox;                                           // 0x08E8(0x001C) (CPF_IsPlainOldData)
	TLazyObjectPtr<class ULandscapeHeightfieldCollisionComponent> CollisionComponent;                                       // 0x0904(0x001C) (CPF_ExportObject, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FGuid                                       MapBuildDataId;                                           // 0x0920(0x0010) (CPF_IsPlainOldData)
	TArray<struct FGuid>                               IrrelevantLights;                                         // 0x0930(0x0010) (CPF_ZeroConstructor, CPF_Deprecated)
	int                                                CollisionMipLevel;                                        // 0x0940(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SimpleCollisionMipLevel;                                  // 0x0944(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              NegativeZBoundsExtension;                                 // 0x0948(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PositiveZBoundsExtension;                                 // 0x094C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StaticLightingResolution;                                 // 0x0950(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ForcedLOD;                                                // 0x0954(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                LODBias;                                                  // 0x0958(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGuid                                       StateId;                                                  // 0x095C(0x0010) (CPF_IsPlainOldData)
	struct FGuid                                       BakedTextureMaterialGuid;                                 // 0x096C(0x0010) (CPF_IsPlainOldData)
	class UTexture2D*                                  GIBakedBaseColorTexture;                                  // 0x0980(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      bRemoveGrass : 1;                                         // 0x0988(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      MobileBlendableLayerMask;                                 // 0x0989(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInterface*                          MobileMaterialInterface;                                  // 0x0990(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTexture2D*                                  MobileWeightNormalmapTexture;                             // 0x0998(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x20];                                      // 0x09A0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeComponent");
		return ptr;
	}

};


// Class Landscape.LandscapeGizmoActor
// 0x0000 (0x03B0 - 0x03B0)
class ALandscapeGizmoActor : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeGizmoActor");
		return ptr;
	}

};


// Class Landscape.LandscapeGizmoActiveActor
// 0x0050 (0x0400 - 0x03B0)
class ALandscapeGizmoActiveActor : public ALandscapeGizmoActor
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x03B0(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeGizmoActiveActor");
		return ptr;
	}

};


// Class Landscape.LandscapeGizmoRenderComponent
// 0x0000 (0x0850 - 0x0850)
class ULandscapeGizmoRenderComponent : public UPrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeGizmoRenderComponent");
		return ptr;
	}

};


// Class Landscape.LandscapeGrassType
// 0x0038 (0x0060 - 0x0028)
class ULandscapeGrassType : public UObject
{
public:
	TArray<struct FGrassVariety>                       GrassVarieties;                                           // 0x0028(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	class UStaticMesh*                                 GrassMesh;                                                // 0x0038(0x0008) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	float                                              GrassDensity;                                             // 0x0040(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	float                                              PlacementJitter;                                          // 0x0044(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	int                                                StartCullDistance;                                        // 0x0048(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	int                                                EndCullDistance;                                          // 0x004C(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	unsigned char                                      RandomRotation : 1;                                       // 0x0050(0x0001) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	unsigned char                                      AlignToSurface : 1;                                       // 0x0051(0x0001) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xE];                                       // 0x0052(0x000E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeGrassType");
		return ptr;
	}

};


// Class Landscape.LandscapeHeightfieldCollisionComponent
// 0x00E0 (0x0930 - 0x0850)
class ULandscapeHeightfieldCollisionComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0850(0x0008) MISSED OFFSET
	int                                                SectionBaseX;                                             // 0x0858(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SectionBaseY;                                             // 0x085C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                CollisionSizeQuads;                                       // 0x0860(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CollisionScale;                                           // 0x0864(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SimpleCollisionSizeQuads;                                 // 0x0868(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<unsigned char>                              CollisionQuadFlags;                                       // 0x0870(0x0010) (CPF_ZeroConstructor)
	struct FGuid                                       HeightfieldGuid;                                          // 0x0880(0x0010) (CPF_IsPlainOldData)
	struct FBox                                        CachedLocalBox;                                           // 0x0890(0x001C) (CPF_IsPlainOldData)
	TLazyObjectPtr<class ULandscapeComponent>          RenderComponent;                                          // 0x08AC(0x001C) (CPF_ExportObject, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x08C8(0x0010) MISSED OFFSET
	TArray<class UPhysicalMaterial*>                   CookedPhysicalMaterials;                                  // 0x08D8(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData02[0x48];                                      // 0x08E8(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeHeightfieldCollisionComponent");
		return ptr;
	}

};


// Class Landscape.LandscapeMeshCollisionComponent
// 0x0010 (0x0940 - 0x0930)
class ULandscapeMeshCollisionComponent : public ULandscapeHeightfieldCollisionComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0930(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeMeshCollisionComponent");
		return ptr;
	}

};


// Class Landscape.LandscapeInfo
// 0x01D8 (0x0200 - 0x0028)
class ULandscapeInfo : public UObject
{
public:
	TLazyObjectPtr<class ALandscape>                   LandscapeActor;                                           // 0x0028(0x001C) (CPF_IsPlainOldData)
	struct FGuid                                       LandscapeGuid;                                            // 0x0044(0x0010) (CPF_IsPlainOldData)
	int                                                ComponentSizeQuads;                                       // 0x0054(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SubsectionSizeQuads;                                      // 0x0058(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ComponentNumSubsections;                                  // 0x005C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     DrawScale;                                                // 0x0060(0x000C) (CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x54];                                      // 0x006C(0x0054) MISSED OFFSET
	unsigned char                                      UnknownData01[0x50];                                      // 0x006C(0x0050) UNKNOWN PROPERTY: SetProperty Landscape.LandscapeInfo.Proxies
	unsigned char                                      UnknownData02[0xF0];                                      // 0x0110(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeInfo");
		return ptr;
	}

};


// Class Landscape.LandscapeInfoMap
// 0x0050 (0x0078 - 0x0028)
class ULandscapeInfoMap : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0028(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeInfoMap");
		return ptr;
	}

};


// Class Landscape.LandscapeLayerInfoObject
// 0x0028 (0x0050 - 0x0028)
class ULandscapeLayerInfoObject : public UObject
{
public:
	struct FName                                       LayerName;                                                // 0x0028(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	class UPhysicalMaterial*                           PhysMaterial;                                             // 0x0030(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Hardness;                                                 // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                LayerUsageDebugColor;                                     // 0x003C(0x0010) (CPF_Edit, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeLayerInfoObject");
		return ptr;
	}

};


// Class Landscape.LandscapeMaterialInstanceConstant
// 0x0008 (0x01B8 - 0x01B0)
class ULandscapeMaterialInstanceConstant : public UMaterialInstanceConstant
{
public:
	unsigned char                                      bIsLayerThumbnail : 1;                                    // 0x01B0(0x0001)
	unsigned char                                      bDisableTessellation : 1;                                 // 0x01B0(0x0001)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeMaterialInstanceConstant");
		return ptr;
	}

};


// Class Landscape.LandscapeMeshProxyActor
// 0x0008 (0x03B8 - 0x03B0)
class ALandscapeMeshProxyActor : public AActor
{
public:
	class ULandscapeMeshProxyComponent*                LandscapeMeshProxyComponent;                              // 0x03B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeMeshProxyActor");
		return ptr;
	}

};


// Class Landscape.LandscapeMeshProxyComponent
// 0x0030 (0x0A10 - 0x09E0)
class ULandscapeMeshProxyComponent : public UStaticMeshComponent
{
public:
	struct FGuid                                       LandscapeGuid;                                            // 0x09E0(0x0010) (CPF_IsPlainOldData)
	TArray<struct FIntPoint>                           ProxyComponentBases;                                      // 0x09F0(0x0010) (CPF_ZeroConstructor)
	int8_t                                             ProxyLOD;                                                 // 0x0A00(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0A01(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeMeshProxyComponent");
		return ptr;
	}

};


// Class Landscape.LandscapeProxy
// 0x0460 (0x0810 - 0x03B0)
class ALandscapeProxy : public AActor
{
public:
	class ULandscapeSplinesComponent*                  SplineComponent;                                          // 0x03B0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FGuid                                       LandscapeGuid;                                            // 0x03B8(0x0010) (CPF_IsPlainOldData)
	struct FIntPoint                                   LandscapeSectionOffset;                                   // 0x03C8(0x0008) (CPF_IsPlainOldData)
	int                                                MaxLODLevel;                                              // 0x03D0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LODDistanceFactor;                                        // 0x03D4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ELandscapeLODFalloff>                  LODFalloff;                                               // 0x03D8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                StaticLightingLOD;                                        // 0x03DC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPhysicalMaterial*                           DefaultPhysMaterial;                                      // 0x03E0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StreamingDistanceMultiplier;                              // 0x03E8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInterface*                          LandscapeMaterial;                                        // 0x03F0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInterface*                          LandscapeHoleMaterial;                                    // 0x03F8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              NegativeZBoundsExtension;                                 // 0x0400(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PositiveZBoundsExtension;                                 // 0x0404(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class ULandscapeComponent*>                 LandscapeComponents;                                      // 0x0408(0x0010) (CPF_ExportObject, CPF_ZeroConstructor)
	TArray<class ULandscapeHeightfieldCollisionComponent*> CollisionComponents;                                      // 0x0418(0x0010) (CPF_ExportObject, CPF_ZeroConstructor)
	TArray<class UHierarchicalInstancedStaticMeshComponent*> FoliageComponents;                                        // 0x0428(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	unsigned char                                      UnknownData00[0x60];                                      // 0x0438(0x0060) MISSED OFFSET
	unsigned char                                      bHasLandscapeGrass : 1;                                   // 0x0498(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StaticLightingResolution;                                 // 0x049C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bCastStaticShadow : 1;                                    // 0x04A0(0x0001) (CPF_Edit)
	unsigned char                                      bCastShadowAsTwoSided : 1;                                // 0x04A0(0x0001) (CPF_Edit)
	unsigned char                                      bCastFarShadow : 1;                                       // 0x04A0(0x0001) (CPF_Edit)
	struct FLightingChannels                           LightingChannels;                                         // 0x04A4(0x0003) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      bUseMaterialPositionOffsetInStaticLighting : 1;           // 0x04A8(0x0001) (CPF_Edit)
	unsigned char                                      bRenderCustomDepth : 1;                                   // 0x04A8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	int                                                CustomDepthStencilValue;                                  // 0x04AC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLightmassPrimitiveSettings                 LightmassSettings;                                        // 0x04B0(0x0018) (CPF_Edit)
	int                                                CollisionMipLevel;                                        // 0x04C8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SimpleCollisionMipLevel;                                  // 0x04CC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CollisionThickness;                                       // 0x04D0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x04D4(0x000C) MISSED OFFSET
	struct FBodyInstance                               BodyInstance;                                             // 0x04E0(0x0240) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      bGenerateOverlapEvents : 1;                               // 0x0720(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      bBakeMaterialPositionOffsetIntoCollision : 1;             // 0x0720(0x0001) (CPF_Edit)
	int                                                ComponentSizeQuads;                                       // 0x0724(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SubsectionSizeQuads;                                      // 0x0728(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumSubsections;                                           // 0x072C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bUsedForNavigation : 1;                                   // 0x0730(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0731(0x0001) UNKNOWN PROPERTY: EnumProperty Landscape.LandscapeProxy.NavigationGeometryGatheringMode
	unsigned char                                      bUseLandscapeForCullingInvisibleHLODVertices : 1;         // 0x0735(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0xDA];                                      // 0x0736(0x00DA) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeProxy");
		return ptr;
	}


	void EditorApplySpline(class USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, class ULandscapeLayerInfoObject* PaintLayer);
	void ChangeLODDistanceFactor(float InLODDistanceFactor);
};


// Class Landscape.Landscape
// 0x0000 (0x0810 - 0x0810)
class ALandscape : public ALandscapeProxy
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.Landscape");
		return ptr;
	}

};


// Class Landscape.LandscapeStreamingProxy
// 0x0020 (0x0830 - 0x0810)
class ALandscapeStreamingProxy : public ALandscapeProxy
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0810(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeStreamingProxy");
		return ptr;
	}

};


// Class Landscape.LandscapeSplinesComponent
// 0x0030 (0x0880 - 0x0850)
class ULandscapeSplinesComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0850(0x0008) MISSED OFFSET
	TArray<class ULandscapeSplineSegment*>             Segments;                                                 // 0x0858(0x0010) (CPF_ZeroConstructor)
	TArray<class UMeshComponent*>                      CookedForeignMeshComponents;                              // 0x0868(0x0010) (CPF_ExportObject, CPF_ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0878(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeSplinesComponent");
		return ptr;
	}

};


// Class Landscape.LandscapeSplineSegment
// 0x0088 (0x00B0 - 0x0028)
class ULandscapeSplineSegment : public UObject
{
public:
	struct FLandscapeSplineSegmentConnection           Connections[0x2];                                         // 0x0028(0x0018) (CPF_Edit, CPF_EditFixedSize)
	struct FInterpCurveVector                          SplineInfo;                                               // 0x0058(0x0018)
	TArray<struct FLandscapeSplineInterpPoint>         Points;                                                   // 0x0070(0x0010) (CPF_ZeroConstructor)
	struct FBox                                        Bounds;                                                   // 0x0080(0x001C) (CPF_IsPlainOldData)
	TArray<class USplineMeshComponent*>                LocalMeshComponents;                                      // 0x00A0(0x0010) (CPF_ExportObject, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeSplineSegment");
		return ptr;
	}

};


// Class Landscape.LandscapeSplineControlPoint
// 0x0070 (0x0098 - 0x0028)
class ULandscapeSplineControlPoint : public UObject
{
public:
	class Vector3D                                     Location;                                                 // 0x0028(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	class Rotator                                      Rotation;                                                 // 0x0034(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	float                                              Width;                                                    // 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SideFalloff;                                              // 0x0044(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              EndFalloff;                                               // 0x0048(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FLandscapeSplineConnection>          ConnectedSegments;                                        // 0x0050(0x0010) (CPF_ZeroConstructor)
	TArray<struct FLandscapeSplineInterpPoint>         Points;                                                   // 0x0060(0x0010) (CPF_ZeroConstructor)
	struct FBox                                        Bounds;                                                   // 0x0070(0x001C) (CPF_IsPlainOldData)
	class UControlPointMeshComponent*                  LocalMeshComponent;                                       // 0x0090(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeSplineControlPoint");
		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeGrassOutput
// 0x0010 (0x0070 - 0x0060)
class UMaterialExpressionLandscapeGrassOutput : public UMaterialExpressionCustomOutput
{
public:
	TArray<struct FGrassInput>                         GrassTypes;                                               // 0x0060(0x0010) (CPF_Edit, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeGrassOutput");
		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeLayerBlend
// 0x0020 (0x0080 - 0x0060)
class UMaterialExpressionLandscapeLayerBlend : public UMaterialExpression
{
public:
	TArray<struct FLayerBlendInput>                    Layers;                                                   // 0x0060(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FGuid                                       ExpressionGUID;                                           // 0x0070(0x0010) (CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerBlend");
		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeLayerCoords
// 0x0018 (0x0078 - 0x0060)
class UMaterialExpressionLandscapeLayerCoords : public UMaterialExpression
{
public:
	TEnumAsByte<ETerrainCoordMappingType>              MappingType;                                              // 0x0060(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ELandscapeCustomizedCoordType>         CustomUVType;                                             // 0x0061(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MappingScale;                                             // 0x0064(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MappingRotation;                                          // 0x0068(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MappingPanU;                                              // 0x006C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MappingPanV;                                              // 0x0070(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerCoords");
		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeLayerSample
// 0x0020 (0x0080 - 0x0060)
class UMaterialExpressionLandscapeLayerSample : public UMaterialExpression
{
public:
	struct FName                                       ParameterName;                                            // 0x0060(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PreviewWeight;                                            // 0x0068(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGuid                                       ExpressionGUID;                                           // 0x006C(0x0010) (CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerSample");
		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeLayerSwitch
// 0x0090 (0x00F0 - 0x0060)
class UMaterialExpressionLandscapeLayerSwitch : public UMaterialExpression
{
public:
	struct FExpressionInput                            LayerUsed;                                                // 0x0060(0x0038)
	struct FExpressionInput                            LayerNotUsed;                                             // 0x0098(0x0038)
	struct FName                                       ParameterName;                                            // 0x00D0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      PreviewUsed : 1;                                          // 0x00D8(0x0001) (CPF_Edit)
	struct FGuid                                       ExpressionGUID;                                           // 0x00DC(0x0010) (CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerSwitch");
		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeLayerWeight
// 0x0098 (0x00F8 - 0x0060)
class UMaterialExpressionLandscapeLayerWeight : public UMaterialExpression
{
public:
	struct FExpressionInput                            Base;                                                     // 0x0060(0x0038)
	struct FExpressionInput                            Layer;                                                    // 0x0098(0x0038)
	struct FName                                       ParameterName;                                            // 0x00D0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PreviewWeight;                                            // 0x00D8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     ConstBase;                                                // 0x00DC(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	struct FGuid                                       ExpressionGUID;                                           // 0x00E8(0x0010) (CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerWeight");
		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeVisibilityMask
// 0x0010 (0x0070 - 0x0060)
class UMaterialExpressionLandscapeVisibilityMask : public UMaterialExpression
{
public:
	struct FGuid                                       ExpressionGUID;                                           // 0x0060(0x0010) (CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeVisibilityMask");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
