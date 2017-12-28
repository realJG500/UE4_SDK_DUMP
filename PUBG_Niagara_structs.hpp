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

// Enum Niagara.ENiagaraNumericOutputTypeSelectionMode
enum class ENiagaraNumericOutputTypeSelectionMode
{
	ENiagaraNumericOutputTypeSelectionMode__None = 0,
	ENiagaraNumericOutputTypeSelectionMode__Largest = 1,
	ENiagaraNumericOutputTypeSelectionMode__Smallest = 2,
	ENiagaraNumericOutputTypeSelectionMode__Scalar = 3,
	ENiagaraNumericOutputTypeSelectionMode__ENiagaraNumericOutputTypeSelectionMode_MAX = 4
};


// Enum Niagara.ENiagaraScriptCompileStatus
enum class ENiagaraScriptCompileStatus
{
	ENiagaraScriptCompileStatus__NCS_Unknown = 0,
	ENiagaraScriptCompileStatus__NCS_Dirty = 1,
	ENiagaraScriptCompileStatus__NCS_Error = 2,
	ENiagaraScriptCompileStatus__NCS_UpToDate = 3,
	ENiagaraScriptCompileStatus__NCS_BeingCreated = 4,
	ENiagaraScriptCompileStatus__NCS_UpToDateWithWarnings = 5,
	ENiagaraScriptCompileStatus__NCS_MAX = 6
};


// Enum Niagara.ENiagaraInputNodeUsage
enum class ENiagaraInputNodeUsage
{
	ENiagaraInputNodeUsage__Undefined = 0,
	ENiagaraInputNodeUsage__Parameter = 1,
	ENiagaraInputNodeUsage__Attribute = 2,
	ENiagaraInputNodeUsage__SystemConstant = 3,
	ENiagaraInputNodeUsage__ENiagaraInputNodeUsage_MAX = 4
};


// Enum Niagara.ENiagaraDataSetType
enum class ENiagaraDataSetType
{
	ENiagaraDataSetType__ParticleData = 0,
	ENiagaraDataSetType__Shared    = 1,
	ENiagaraDataSetType__Event     = 2,
	ENiagaraDataSetType__ENiagaraDataSetType_MAX = 3
};


// Enum Niagara.ENiagaraSpriteFacingMode
enum class ENiagaraSpriteFacingMode
{
	ENiagaraSpriteFacingMode__FaceCamera = 0,
	ENiagaraSpriteFacingMode__FaceCameraPlane = 1,
	ENiagaraSpriteFacingMode__CustomFacingVector = 2,
	ENiagaraSpriteFacingMode__ENiagaraSpriteFacingMode_MAX = 3
};


// Enum Niagara.ENiagaraSpriteAlignment
enum class ENiagaraSpriteAlignment
{
	ENiagaraSpriteAlignment__Unaligned = 0,
	ENiagaraSpriteAlignment__VelocityAligned = 1,
	ENiagaraSpriteAlignment__CustomAlignment = 2,
	ENiagaraSpriteAlignment__ENiagaraSpriteAlignment_MAX = 3
};


// Enum Niagara.ENiagaraSortMode
enum class ENiagaraSortMode
{
	ENiagaraSortMode__SortNone     = 0,
	ENiagaraSortMode__SortViewDepth = 1,
	ENiagaraSortMode__SortViewDistance = 2,
	ENiagaraSortMode__ENiagaraSortMode_MAX = 3
};


// Enum Niagara.ENiagaraScriptUsage
enum class ENiagaraScriptUsage
{
	ENiagaraScriptUsage__Function  = 0,
	ENiagaraScriptUsage__Module    = 1,
	ENiagaraScriptUsage__SpawnScript = 2,
	ENiagaraScriptUsage__SpawnScriptInterpolated = 3,
	ENiagaraScriptUsage__UpdateScript = 4,
	ENiagaraScriptUsage__EffectScript = 5,
	ENiagaraScriptUsage__ENiagaraScriptUsage_MAX = 6
};


// Enum Niagara.EUnusedAttributeBehaviour
enum class EUnusedAttributeBehaviour
{
	EUnusedAttributeBehaviour__Copy = 0,
	EUnusedAttributeBehaviour__Zero = 1,
	EUnusedAttributeBehaviour__None = 2,
	EUnusedAttributeBehaviour__MarkInvalid = 3,
	EUnusedAttributeBehaviour__PassThrough = 4,
	EUnusedAttributeBehaviour__EUnusedAttributeBehaviour_MAX = 5
};


// Enum Niagara.ENiagaraCollisionMode
enum class ENiagaraCollisionMode
{
	ENiagaraCollisionMode__None    = 0,
	ENiagaraCollisionMode__SceneGeometry = 1,
	ENiagaraCollisionMode__DepthBuffer = 2,
	ENiagaraCollisionMode__DistanceField = 3,
	ENiagaraCollisionMode__ENiagaraCollisionMode_MAX = 4
};


// Enum Niagara.EScriptCompileIndices
enum class EScriptCompileIndices
{
	EScriptCompileIndices__SpawnScript = 0,
	EScriptCompileIndices__UpdateScript = 1,
	EScriptCompileIndices__EventScript = 2,
	EScriptCompileIndices__EScriptCompileIndices_MAX = 3
};


// Enum Niagara.EScriptExecutionMode
enum class EScriptExecutionMode
{
	EScriptExecutionMode__EveryParticle = 0,
	EScriptExecutionMode__SpawnedParticles = 1,
	EScriptExecutionMode__SingleParticle = 2,
	EScriptExecutionMode__EScriptExecutionMode_MAX = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Niagara.NiagaraTypeDefinition
// 0x0008
struct FNiagaraTypeDefinition
{
	class UStruct*                                     Struct;                                                   // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraVariable
// 0x0030
struct FNiagaraVariable
{
	struct FGuid                                       ID;                                                       // 0x0000(0x0010) (CPF_IsPlainOldData)
	struct FName                                       Name;                                                     // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FNiagaraTypeDefinition                      TypeDef;                                                  // 0x0018(0x0008) (CPF_Edit)
	TArray<unsigned char>                              VarData;                                                  // 0x0020(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct Niagara.NiagaraScriptDataInterfaceInfo
// 0x0020
struct FNiagaraScriptDataInterfaceInfo
{
	class UNiagaraDataInterface*                       DataInterface;                                            // 0x0000(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FGuid                                       ID;                                                       // 0x0008(0x0010) (CPF_IsPlainOldData)
	struct FName                                       Name;                                                     // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Niagara.NDIStaticMeshSectionFilter
// 0x0068
struct FNDIStaticMeshSectionFilter
{
	TArray<int>                                        AllowedMaterialSlots;                                     // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	unsigned char                                      UnknownData00[0x58];                                      // 0x0010(0x0058) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraEmitterHandle
// 0x0030
struct FNiagaraEmitterHandle
{
	struct FGuid                                       ID;                                                       // 0x0000(0x0010) (CPF_Edit, CPF_EditConst, CPF_IsPlainOldData)
	struct FName                                       IdName;                                                   // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      bIsEnabled : 1;                                           // 0x0018(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       Name;                                                     // 0x0020(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UNiagaraEmitterProperties*                   Instance;                                                 // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraParameterBinding
// 0x0030
struct FNiagaraParameterBinding
{
	struct FGuid                                       SourceParameterId;                                        // 0x0000(0x0010) (CPF_IsPlainOldData)
	struct FGuid                                       DestinationEmitterId;                                     // 0x0010(0x0010) (CPF_IsPlainOldData)
	struct FGuid                                       DestinationParameterId;                                   // 0x0020(0x0010) (CPF_IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraEmitterInternalVariableBinding
// 0x0030
struct FNiagaraEmitterInternalVariableBinding
{
	struct FGuid                                       SourceParameterId;                                        // 0x0000(0x0010) (CPF_IsPlainOldData)
	struct FGuid                                       DestinationEmitterId;                                     // 0x0010(0x0010) (CPF_IsPlainOldData)
	struct FString                                     DestinationEmitterVariableName;                           // 0x0020(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct Niagara.NiagaraParameters
// 0x0010
struct FNiagaraParameters
{
	TArray<struct FNiagaraVariable>                    Parameters;                                               // 0x0000(0x0010) (CPF_Edit, CPF_EditFixedSize, CPF_ZeroConstructor)
};

// ScriptStruct Niagara.NiagaraDataSetID
// 0x0010
struct FNiagaraDataSetID
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0008(0x0001) UNKNOWN PROPERTY: EnumProperty Niagara.NiagaraDataSetID.Type
};

// ScriptStruct Niagara.NiagaraDataSetProperties
// 0x0020
struct FNiagaraDataSetProperties
{
	struct FNiagaraDataSetID                           ID;                                                       // 0x0000(0x0010) (CPF_Edit, CPF_EditConst)
	TArray<struct FNiagaraVariable>                    Variables;                                                // 0x0010(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct Niagara.NiagaraScriptDataUsageInfo
// 0x0001
struct FNiagaraScriptDataUsageInfo
{
	unsigned char                                      bReadsAttriubteData : 1;                                  // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Niagara.VMExternalFunctionBindingInfo
// 0x0030
struct FVMExternalFunctionBindingInfo
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGuid                                       OwnerId;                                                  // 0x0008(0x0010) (CPF_IsPlainOldData)
	TArray<unsigned char>                              InputParamLocations;                                      // 0x0018(0x0010) (CPF_ZeroConstructor)
	int                                                NumOutputs;                                               // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraStatScope
// 0x0020
struct FNiagaraStatScope
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraEventReceiverProperties
// 0x0028
struct FNiagaraEventReceiverProperties
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       SourceEventGenerator;                                     // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       SourceEmitter;                                            // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UNiagaraEventReceiverEmitterAction*>  EmitterActions;                                           // 0x0018(0x0010) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor)
};

// ScriptStruct Niagara.NiagaraEventGeneratorProperties
// 0x0038
struct FNiagaraEventGeneratorProperties
{
	int                                                MaxEventsPerFrame;                                        // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0004(0x0014) MISSED OFFSET
	struct FNiagaraDataSetProperties                   SetProps;                                                 // 0x0018(0x0020)
};

// ScriptStruct Niagara.NiagaraEmitterScriptProperties
// 0x0028
struct FNiagaraEmitterScriptProperties
{
	class UNiagaraScript*                              Script;                                                   // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FNiagaraEventReceiverProperties>     EventReceivers;                                           // 0x0008(0x0010) (CPF_Edit, CPF_EditFixedSize, CPF_ZeroConstructor)
	TArray<struct FNiagaraEventGeneratorProperties>    EventGenerators;                                          // 0x0018(0x0010) (CPF_Edit, CPF_EditFixedSize, CPF_ZeroConstructor)
};

// ScriptStruct Niagara.NiagaraEventScriptProperties
// 0x0028 (0x0050 - 0x0028)
struct FNiagaraEventScriptProperties : public FNiagaraEmitterScriptProperties
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0028(0x0001) UNKNOWN PROPERTY: EnumProperty Niagara.NiagaraEventScriptProperties.ExecutionMode
	uint32_t                                           SpawnNumber;                                              // 0x002C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           MaxEventsPerFrame;                                        // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGuid                                       SourceEmitterID;                                          // 0x0034(0x0010) (CPF_Edit, CPF_IsPlainOldData)
	struct FName                                       SourceEventName;                                          // 0x0048(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraEmitterBurst
// 0x0010
struct FNiagaraEmitterBurst
{
	float                                              Time;                                                     // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TimeRange;                                                // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           SpawnMinimum;                                             // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           SpawnMaximum;                                             // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraMatrix
// 0x0040
struct FNiagaraMatrix
{
	struct FVector4                                    Row0;                                                     // 0x0000(0x0010) (CPF_IsPlainOldData)
	struct FVector4                                    Row1;                                                     // 0x0010(0x0010) (CPF_IsPlainOldData)
	struct FVector4                                    Row2;                                                     // 0x0020(0x0010) (CPF_IsPlainOldData)
	struct FVector4                                    Row3;                                                     // 0x0030(0x0010) (CPF_IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraTestStructInner
// 0x0018
struct FNiagaraTestStructInner
{
	class Vector3D                                     InnerVector1;                                             // 0x0000(0x000C) (CPF_IsPlainOldData)
	class Vector3D                                     InnerVector2;                                             // 0x000C(0x000C) (CPF_IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraTestStruct
// 0x0048
struct FNiagaraTestStruct
{
	class Vector3D                                     Vector1;                                                  // 0x0000(0x000C) (CPF_IsPlainOldData)
	class Vector3D                                     Vector2;                                                  // 0x000C(0x000C) (CPF_IsPlainOldData)
	struct FNiagaraTestStructInner                     InnerStruct1;                                             // 0x0018(0x0018)
	struct FNiagaraTestStructInner                     InnerStruct2;                                             // 0x0030(0x0018)
};

// ScriptStruct Niagara.NiagaraNumeric
// 0x0001
struct FNiagaraNumeric
{

};

// ScriptStruct Niagara.NiagaraBool
// 0x0004
struct FNiagaraBool
{
	int                                                Value;                                                    // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraInt32
// 0x0004
struct FNiagaraInt32
{
	int                                                Value;                                                    // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraFloat
// 0x0004
struct FNiagaraFloat
{
	float                                              Value;                                                    // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraFunctionSignature
// 0x0040
struct FNiagaraFunctionSignature
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FNiagaraVariable>                    Inputs;                                                   // 0x0008(0x0010) (CPF_ZeroConstructor)
	TArray<struct FNiagaraVariable>                    Outputs;                                                  // 0x0018(0x0010) (CPF_ZeroConstructor)
	struct FGuid                                       OwnerId;                                                  // 0x0028(0x0010) (CPF_IsPlainOldData)
	unsigned char                                      bRequiresContext : 1;                                     // 0x0038(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bMemberFunction : 1;                                      // 0x0039(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Niagara.MeshTriCoordinate
// 0x0010
struct FMeshTriCoordinate
{
	int                                                Tri;                                                      // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     BaryCoord;                                                // 0x0004(0x000C) (CPF_Edit, CPF_IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraCollisionEventPayload
// 0x002C
struct FNiagaraCollisionEventPayload
{
	class Vector3D                                     CollisionPos;                                             // 0x0000(0x000C) (CPF_IsPlainOldData)
	class Vector3D                                     CollisionNormal;                                          // 0x000C(0x000C) (CPF_IsPlainOldData)
	int                                                PhysicalMaterialIndex;                                    // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     CollisionVelocity;                                        // 0x001C(0x000C) (CPF_IsPlainOldData)
	int                                                ParticleIndex;                                            // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
