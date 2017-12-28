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

// Class Niagara.NiagaraActor
// 0x0008 (0x03B8 - 0x03B0)
class ANiagaraActor : public AActor
{
public:
	class UNiagaraComponent*                           NiagaraComponent;                                         // 0x03B0(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraActor");
		return ptr;
	}

};


// Class Niagara.NiagaraComponent
// 0x0050 (0x08A0 - 0x0850)
class UNiagaraComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0850(0x0010) MISSED OFFSET
	TArray<struct FNiagaraVariable>                    EffectParameterLocalOverrides;                            // 0x0860(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FNiagaraScriptDataInterfaceInfo>     EffectDataInterfaceLocalOverrides;                        // 0x0870(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<class UNiagaraDataInterface*>               InstanceDataInterfaces;                                   // 0x0880(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	unsigned char                                      bRenderingEnabled : 1;                                    // 0x0890(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0891(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraComponent");
		return ptr;
	}


	void SetRenderingEnabled(bool bInRenderingEnabled);
	void SetNiagaraVariableVec4(const struct FString& InVariableName, const struct FVector4& InValue);
	void SetNiagaraVariableVec3(const struct FString& InVariableName, const class Vector3D& InValue);
	void SetNiagaraVariableVec2(const struct FString& InVariableName, const class Vector2D& InValue);
	void SetNiagaraVariableFloat(const struct FString& InVariableName, float InValue);
	void SetNiagaraVariableBool(const struct FString& InVariableName, bool InValue);
	void SetNiagaraStaticMeshDataInterfaceActor(const struct FString& InVariableName, class AActor* InSource);
	void SetNiagaraEmitterSpawnRate(const struct FString& InEmitterName, float InValue);
	void ResetEffect();
	void ReinitializeEffect();
};


// Class Niagara.NiagaraDataInterface
// 0x0000 (0x0028 - 0x0028)
class UNiagaraDataInterface : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterface");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceCurveBase
// 0x0000 (0x0028 - 0x0028)
class UNiagaraDataInterfaceCurveBase : public UNiagaraDataInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceCurveBase");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceCurve
// 0x0070 (0x0098 - 0x0028)
class UNiagaraDataInterfaceCurve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                                  Curve;                                                    // 0x0028(0x0070) (CPF_Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceCurve");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceVectorCurve
// 0x0150 (0x0178 - 0x0028)
class UNiagaraDataInterfaceVectorCurve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                                  XCurve;                                                   // 0x0028(0x0070) (CPF_Edit)
	struct FRichCurve                                  YCurve;                                                   // 0x0098(0x0070) (CPF_Edit)
	struct FRichCurve                                  ZCurve;                                                   // 0x0108(0x0070) (CPF_Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceVectorCurve");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceColorCurve
// 0x01C0 (0x01E8 - 0x0028)
class UNiagaraDataInterfaceColorCurve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                                  RedCurve;                                                 // 0x0028(0x0070) (CPF_Edit)
	struct FRichCurve                                  GreenCurve;                                               // 0x0098(0x0070) (CPF_Edit)
	struct FRichCurve                                  BlueCurve;                                                // 0x0108(0x0070) (CPF_Edit)
	struct FRichCurve                                  AlphaCurve;                                               // 0x0178(0x0070) (CPF_Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceColorCurve");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceCurlNoise
// 0x0000 (0x0028 - 0x0028)
class UNiagaraDataInterfaceCurlNoise : public UNiagaraDataInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceCurlNoise");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceSpline
// 0x0098 (0x00C0 - 0x0028)
class UNiagaraDataInterfaceSpline : public UNiagaraDataInterface
{
public:
	class AActor*                                      Source;                                                   // 0x0028(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x90];                                      // 0x0030(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceSpline");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceStaticMesh
// 0x01C8 (0x01F0 - 0x0028)
class UNiagaraDataInterfaceStaticMesh : public UNiagaraDataInterface
{
public:
	class UStaticMesh*                                 DefaultMesh;                                              // 0x0028(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      Source;                                                   // 0x0030(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FNDIStaticMeshSectionFilter                 SectionFilter;                                            // 0x0038(0x0068) (CPF_Edit)
	unsigned char                                      bEnableVertexColorRangeSorting : 1;                       // 0x00A0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x14F];                                     // 0x00A1(0x014F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceStaticMesh");
		return ptr;
	}

};


// Class Niagara.NiagaraEffect
// 0x0048 (0x0070 - 0x0028)
class UNiagaraEffect : public UObject
{
public:
	TArray<struct FNiagaraEmitterHandle>               EmitterHandles;                                           // 0x0028(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst)
	class UNiagaraScript*                              EffectScript;                                             // 0x0038(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FNiagaraParameterBinding>            ParameterBindings;                                        // 0x0040(0x0010) (CPF_ZeroConstructor)
	TArray<struct FNiagaraParameterBinding>            DataInterfaceBindings;                                    // 0x0050(0x0010) (CPF_ZeroConstructor)
	TArray<struct FNiagaraEmitterInternalVariableBinding> InternalEmitterVariableBindings;                          // 0x0060(0x0010) (CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraEffect");
		return ptr;
	}

};


// Class Niagara.NiagaraEffectRendererProperties
// 0x0000 (0x0028 - 0x0028)
class UNiagaraEffectRendererProperties : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraEffectRendererProperties");
		return ptr;
	}

};


// Class Niagara.NiagaraLightRendererProperties
// 0x0010 (0x0038 - 0x0028)
class UNiagaraLightRendererProperties : public UNiagaraEffectRendererProperties
{
public:
	float                                              RadiusScale;                                              // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     ColorAdd;                                                 // 0x002C(0x000C) (CPF_Edit, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraLightRendererProperties");
		return ptr;
	}

};


// Class Niagara.NiagaraMeshRendererProperties
// 0x0008 (0x0030 - 0x0028)
class UNiagaraMeshRendererProperties : public UNiagaraEffectRendererProperties
{
public:
	class UStaticMesh*                                 ParticleMesh;                                             // 0x0028(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraMeshRendererProperties");
		return ptr;
	}

};


// Class Niagara.NiagaraRibbonRendererProperties
// 0x0000 (0x0028 - 0x0028)
class UNiagaraRibbonRendererProperties : public UNiagaraEffectRendererProperties
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraRibbonRendererProperties");
		return ptr;
	}

};


// Class Niagara.NiagaraSpriteRendererProperties
// 0x0020 (0x0048 - 0x0028)
class UNiagaraSpriteRendererProperties : public UNiagaraEffectRendererProperties
{
public:
	class Vector2D                                     SubImageSize;                                             // 0x0028(0x0008) (CPF_Edit, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0030(0x0001) UNKNOWN PROPERTY: EnumProperty Niagara.NiagaraSpriteRendererProperties.Alignment
	unsigned char                                      UnknownData01[0x1];                                       // 0x0031(0x0001) UNKNOWN PROPERTY: EnumProperty Niagara.NiagaraSpriteRendererProperties.FacingMode
	class Vector3D                                     CustomFacingVectorMask;                                   // 0x0034(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0040(0x0001) UNKNOWN PROPERTY: EnumProperty Niagara.NiagaraSpriteRendererProperties.SortMode

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraSpriteRendererProperties");
		return ptr;
	}

};


// Class Niagara.NiagaraScript
// 0x00C0 (0x00E8 - 0x0028)
class UNiagaraScript : public UObject
{
public:
	TArray<unsigned char>                              ByteCode;                                                 // 0x0028(0x0010) (CPF_ZeroConstructor)
	struct FNiagaraParameters                          Parameters;                                               // 0x0038(0x0010)
	struct FNiagaraParameters                          InternalParameters;                                       // 0x0048(0x0010)
	TArray<struct FNiagaraVariable>                    Attributes;                                               // 0x0058(0x0010) (CPF_ZeroConstructor)
	TArray<struct FNiagaraDataSetProperties>           EventReceivers;                                           // 0x0068(0x0010) (CPF_ZeroConstructor)
	TArray<struct FNiagaraDataSetProperties>           EventGenerators;                                          // 0x0078(0x0010) (CPF_ZeroConstructor)
	struct FNiagaraScriptDataUsageInfo                 DataUsage;                                                // 0x0088(0x0001)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0089(0x0001) UNKNOWN PROPERTY: EnumProperty Niagara.NiagaraScript.Usage
	TArray<struct FNiagaraScriptDataInterfaceInfo>     DataInterfaceInfo;                                        // 0x0090(0x0010) (CPF_ZeroConstructor)
	TArray<struct FVMExternalFunctionBindingInfo>      CalledVMExternalFunctions;                                // 0x00A0(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData01[0x1];                                       // 0x00B0(0x0001) UNKNOWN PROPERTY: EnumProperty Niagara.NiagaraScript.NumericOutputTypeSelectionMode
	unsigned char                                      UnknownData02[0x27];                                      // 0x00B1(0x0027) MISSED OFFSET
	TArray<struct FNiagaraStatScope>                   StatScopes;                                               // 0x00D8(0x0010) (CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraScript");
		return ptr;
	}

};


// Class Niagara.NiagaraEventReceiverEmitterAction
// 0x0000 (0x0028 - 0x0028)
class UNiagaraEventReceiverEmitterAction : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraEventReceiverEmitterAction");
		return ptr;
	}

};


// Class Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles
// 0x0008 (0x0030 - 0x0028)
class UNiagaraEventReceiverEmitterAction_SpawnParticles : public UNiagaraEventReceiverEmitterAction
{
public:
	uint32_t                                           NumParticles;                                             // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles");
		return ptr;
	}

};


// Class Niagara.NiagaraEmitterProperties
// 0x00E0 (0x0108 - 0x0028)
class UNiagaraEmitterProperties : public UObject
{
public:
	float                                              SpawnRate;                                                // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bLocalSpace : 1;                                          // 0x002C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterial*                                   Material;                                                 // 0x0030(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StartTime;                                                // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              EndTime;                                                  // 0x003C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumLoops;                                                 // 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0044(0x0001) UNKNOWN PROPERTY: EnumProperty Niagara.NiagaraEmitterProperties.CollisionMode
	class UNiagaraEffectRendererProperties*            RendererProperties;                                       // 0x0048(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FNiagaraEmitterScriptProperties             UpdateScriptProps;                                        // 0x0050(0x0028)
	struct FNiagaraEmitterScriptProperties             SpawnScriptProps;                                         // 0x0078(0x0028)
	struct FNiagaraEventScriptProperties               EventHandlerScriptProps;                                  // 0x00A0(0x0050) (CPF_Edit)
	TArray<struct FNiagaraEmitterBurst>                Bursts;                                                   // 0x00F0(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	unsigned char                                      bInterpolatedSpawning : 1;                                // 0x0100(0x0001) (CPF_Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraEmitterProperties");
		return ptr;
	}

};


// Class Niagara.NiagaraFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UNiagaraFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraFunctionLibrary");
		return ptr;
	}


	class UNiagaraComponent* STATIC_SpawnEffectAttached(class UNiagaraEffect* EffectTemplate, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const class Vector3D& Location, const class Rotator& Rotation, TEnumAsByte<EAttachLocation> LocationType, bool bAutoDestroy);
	class UNiagaraComponent* STATIC_SpawnEffectAtLocation(class UObject* WorldContextObject, class UNiagaraEffect* EffectTemplate, const class Vector3D& Location, const class Rotator& Rotation, bool bAutoDestroy);
};


// Class Niagara.NiagaraScriptSourceBase
// 0x0020 (0x0048 - 0x0028)
class UNiagaraScriptSourceBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraScriptSourceBase");
		return ptr;
	}

};


// Class Niagara.NiagaraSettings
// 0x0050 (0x0088 - 0x0038)
class UNiagaraSettings : public UDeveloperSettings
{
public:
	struct FStringAssetReference                       DefaultEffect;                                            // 0x0038(0x0010) (CPF_Edit, CPF_Config)
	struct FStringAssetReference                       DefaultEmitter;                                           // 0x0048(0x0010) (CPF_Edit, CPF_Config)
	struct FStringAssetReference                       DefaultScript;                                            // 0x0058(0x0010) (CPF_Edit, CPF_Config)
	TArray<struct FStringAssetReference>               AdditionalParameterTypes;                                 // 0x0068(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	TArray<struct FStringAssetReference>               AdditionalPayloadTypes;                                   // 0x0078(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
