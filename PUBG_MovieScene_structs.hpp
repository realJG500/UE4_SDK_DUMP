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

// Enum MovieScene.ESpawnOwnership
enum class ESpawnOwnership
{
	ESpawnOwnership__InnerSequence = 0,
	ESpawnOwnership__MasterSequence = 1,
	ESpawnOwnership__External      = 2,
	ESpawnOwnership__ESpawnOwnership_MAX = 3
};


// Enum MovieScene.EMovieSceneObjectBindingSpace
enum class EMovieSceneObjectBindingSpace
{
	EMovieSceneObjectBindingSpace__Local = 0,
	EMovieSceneObjectBindingSpace__Root = 1,
	EMovieSceneObjectBindingSpace__EMovieSceneObjectBindingSpace_MAX = 2
};


// Enum MovieScene.EMovieSceneKeyInterpolation
enum class EMovieSceneKeyInterpolation
{
	EMovieSceneKeyInterpolation__Auto = 0,
	EMovieSceneKeyInterpolation__User = 1,
	EMovieSceneKeyInterpolation__Break = 2,
	EMovieSceneKeyInterpolation__Linear = 3,
	EMovieSceneKeyInterpolation__Constant = 4,
	EMovieSceneKeyInterpolation__EMovieSceneKeyInterpolation_MAX = 5
};


// Enum MovieScene.EMovieSceneCompletionMode
enum class EMovieSceneCompletionMode
{
	EMovieSceneCompletionMode__KeepState = 0,
	EMovieSceneCompletionMode__RestoreState = 1,
	EMovieSceneCompletionMode__EMovieSceneCompletionMode_MAX = 2
};


// Enum MovieScene.ESectionEvaluationFlags
enum class ESectionEvaluationFlags
{
	ESectionEvaluationFlags__None  = 0,
	ESectionEvaluationFlags__PreRoll = 1,
	ESectionEvaluationFlags__PostRoll = 2,
	ESectionEvaluationFlags__ESectionEvaluationFlags_MAX = 3
};


// Enum MovieScene.EEvaluationMethod
enum class EEvaluationMethod
{
	EEvaluationMethod__Static      = 0,
	EEvaluationMethod__Swept       = 1,
	EEvaluationMethod__EEvaluationMethod_MAX = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MovieScene.MovieSceneSpawnable
// 0x0040
struct FMovieSceneSpawnable
{
	struct FGuid                                       Guid;                                                     // 0x0000(0x0010) (CPF_IsPlainOldData)
	struct FString                                     Name;                                                     // 0x0010(0x0010) (CPF_ZeroConstructor)
	class UObject*                                     ObjectTemplate;                                           // 0x0020(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FGuid>                               ChildPossessables;                                        // 0x0028(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0038(0x0001) UNKNOWN PROPERTY: EnumProperty MovieScene.MovieSceneSpawnable.Ownership
};

// ScriptStruct MovieScene.MovieScenePossessable
// 0x0038
struct FMovieScenePossessable
{
	struct FGuid                                       Guid;                                                     // 0x0000(0x0010) (CPF_IsPlainOldData)
	struct FString                                     Name;                                                     // 0x0010(0x0010) (CPF_ZeroConstructor)
	class UClass*                                      PossessedObjectClass;                                     // 0x0020(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGuid                                       ParentGuid;                                               // 0x0028(0x0010) (CPF_IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneBinding
// 0x0030
struct FMovieSceneBinding
{
	struct FGuid                                       ObjectGuid;                                               // 0x0000(0x0010) (CPF_IsPlainOldData)
	struct FString                                     BindingName;                                              // 0x0010(0x0010) (CPF_ZeroConstructor)
	TArray<class UMovieSceneTrack*>                    Tracks;                                                   // 0x0020(0x0010) (CPF_ExportObject, CPF_ZeroConstructor)
};

// ScriptStruct MovieScene.MovieSceneObjectBindingID
// 0x0018
struct FMovieSceneObjectBindingID
{
	int                                                SequenceID;                                               // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0004(0x0001) UNKNOWN PROPERTY: EnumProperty MovieScene.MovieSceneObjectBindingID.Space
	struct FGuid                                       Guid;                                                     // 0x0008(0x0010) (CPF_Edit, CPF_IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneBindingOverrideData
// 0x0024
struct FMovieSceneBindingOverrideData
{
	struct FMovieSceneObjectBindingID                  ObjectBindingId;                                          // 0x0000(0x0018) (CPF_Edit)
	TWeakObjectPtr<class UObject>                      Object;                                                   // 0x0018(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bOverridesDefault : 1;                                    // 0x0020(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneSequencePlaybackSettings
// 0x0028
struct FMovieSceneSequencePlaybackSettings
{
	int                                                LoopCount;                                                // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PlayRate;                                                 // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bRandomStartTime : 1;                                     // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StartTime;                                                // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bRestoreState : 1;                                        // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TScriptInterface<class UMovieSceneBindingOverridesInterface> BindingOverrides;                                         // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneSectionEvalOptions
// 0x0002
struct FMovieSceneSectionEvalOptions
{
	unsigned char                                      bCanEditCompletionMode : 1;                               // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0001(0x0001) UNKNOWN PROPERTY: EnumProperty MovieScene.MovieSceneSectionEvalOptions.CompletionMode
};

// ScriptStruct MovieScene.MovieSceneTrackEvalOptions
// 0x0004
struct FMovieSceneTrackEvalOptions
{
	unsigned char                                      bCanEvaluateNearestSection : 1;                           // 0x0000(0x0001)
	unsigned char                                      bEvaluateNearestSection : 1;                              // 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      bEvaluateInPreroll : 1;                                   // 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      bEvaluateInPostroll : 1;                                  // 0x0000(0x0001) (CPF_Edit)
};

// ScriptStruct MovieScene.MovieSceneSegment
// 0x0050
struct FMovieSceneSegment
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneEvalTemplatePtr
// 0x0038
struct FMovieSceneEvalTemplatePtr
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneTrackImplementationPtr
// 0x0038
struct FMovieSceneTrackImplementationPtr
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneEvaluationTrack
// 0x0080
struct FMovieSceneEvaluationTrack
{
	struct FGuid                                       ObjectBindingId;                                          // 0x0000(0x0010) (CPF_IsPlainOldData)
	uint16_t                                           EvaluationPriority;                                       // 0x0010(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0012(0x0001) UNKNOWN PROPERTY: EnumProperty MovieScene.MovieSceneEvaluationTrack.EvaluationMethod
	TArray<struct FMovieSceneSegment>                  Segments;                                                 // 0x0018(0x0010) (CPF_ZeroConstructor)
	TArray<struct FMovieSceneEvalTemplatePtr>          ChildTemplates;                                           // 0x0028(0x0010) (CPF_ZeroConstructor)
	struct FMovieSceneTrackImplementationPtr           TrackTemplate;                                            // 0x0038(0x0038)
	struct FName                                       EvaluationGroup;                                          // 0x0070(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bEvaluateInPreroll : 1;                                   // 0x0078(0x0001)
	unsigned char                                      bEvaluateInPostroll : 1;                                  // 0x0078(0x0001)
};

// ScriptStruct MovieScene.MovieSceneEvaluationGroupLUTIndex
// 0x0010
struct FMovieSceneEvaluationGroupLUTIndex
{
	unsigned char                                      bRequiresImmediateFlush : 1;                              // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                LUTOffset;                                                // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumInitPtrs;                                              // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumEvalPtrs;                                              // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneSequenceID
// 0x0004
struct FMovieSceneSequenceID
{
	uint32_t                                           Value;                                                    // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneTrackIdentifier
// 0x0004
struct FMovieSceneTrackIdentifier
{
	uint32_t                                           Value;                                                    // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneEvaluationFieldTrackPtr
// 0x0008
struct FMovieSceneEvaluationFieldTrackPtr
{
	struct FMovieSceneSequenceID                       SequenceID;                                               // 0x0000(0x0004)
	struct FMovieSceneTrackIdentifier                  TrackIdentifier;                                          // 0x0004(0x0004)
};

// ScriptStruct MovieScene.MovieSceneEvaluationFieldSegmentPtr
// 0x0004 (0x000C - 0x0008)
struct FMovieSceneEvaluationFieldSegmentPtr : public FMovieSceneEvaluationFieldTrackPtr
{
	int                                                SegmentIndex;                                             // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneEvaluationGroup
// 0x0020
struct FMovieSceneEvaluationGroup
{
	TArray<struct FMovieSceneEvaluationGroupLUTIndex>  LUTIndices;                                               // 0x0000(0x0010) (CPF_ZeroConstructor)
	TArray<struct FMovieSceneEvaluationFieldSegmentPtr> SegmentPtrLUT;                                            // 0x0010(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct MovieScene.MovieSceneEvaluationMetaData
// 0x0010
struct FMovieSceneEvaluationMetaData
{
	TArray<struct FMovieSceneSequenceID>               ActiveSequences;                                          // 0x0000(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct MovieScene.MovieSceneEvaluationField
// 0x0030
struct FMovieSceneEvaluationField
{
	TArray<struct FFloatRange>                         Ranges;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor)
	TArray<struct FMovieSceneEvaluationGroup>          Groups;                                                   // 0x0010(0x0010) (CPF_ZeroConstructor)
	TArray<struct FMovieSceneEvaluationMetaData>       MetaData;                                                 // 0x0020(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct MovieScene.MovieSceneSequenceTransform
// 0x0008
struct FMovieSceneSequenceTransform
{
	float                                              TimeScale;                                                // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Offset;                                                   // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneSubSequenceData
// 0x0050
struct FMovieSceneSubSequenceData
{
	class UMovieSceneSequence*                         Sequence;                                                 // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     SequenceKeyObject;                                        // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FMovieSceneSequenceTransform                RootToSequenceTransform;                                  // 0x0010(0x0008)
	struct FGuid                                       SourceSequenceSignature;                                  // 0x0018(0x0010) (CPF_IsPlainOldData)
	struct FMovieSceneSequenceID                       DeterministicSequenceID;                                  // 0x0028(0x0004)
	struct FFloatRange                                 PreRollRange;                                             // 0x002C(0x0010)
	struct FFloatRange                                 PostRollRange;                                            // 0x003C(0x0010)
	int                                                HierarchicalBias;                                         // 0x004C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneSequenceHierarchyNode
// 0x0018
struct FMovieSceneSequenceHierarchyNode
{
	struct FMovieSceneSequenceID                       ParentID;                                                 // 0x0000(0x0004)
	TArray<struct FMovieSceneSequenceID>               Children;                                                 // 0x0008(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct MovieScene.MovieSceneSequenceHierarchy
// 0x00A0
struct FMovieSceneSequenceHierarchy
{
	TMap<uint32_t, struct FMovieSceneSubSequenceData>  SubSequences;                                             // 0x0000(0x0050) (CPF_ZeroConstructor)
	TMap<uint32_t, struct FMovieSceneSequenceHierarchyNode> Hierarchy;                                                // 0x0050(0x0050) (CPF_ZeroConstructor)
};

// ScriptStruct MovieScene.MovieSceneTrackIdentifiers
// 0x0010
struct FMovieSceneTrackIdentifiers
{
	TArray<struct FMovieSceneTrackIdentifier>          Data;                                                     // 0x0000(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct MovieScene.MovieSceneTemplateGenerationLedger
// 0x00A8
struct FMovieSceneTemplateGenerationLedger
{
	struct FMovieSceneTrackIdentifier                  LastTrackIdentifier;                                      // 0x0000(0x0004)
	TMap<struct FMovieSceneTrackIdentifier, int>       TrackReferenceCounts;                                     // 0x0008(0x0050) (CPF_ZeroConstructor)
	TMap<struct FGuid, struct FMovieSceneTrackIdentifiers> TrackSignatureToTrackIdentifier;                          // 0x0058(0x0050) (CPF_ZeroConstructor)
};

// ScriptStruct MovieScene.MovieSceneEvaluationTemplate
// 0x0220
struct FMovieSceneEvaluationTemplate
{
	TMap<uint32_t, struct FMovieSceneEvaluationTrack>  Tracks;                                                   // 0x0000(0x0050) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0050(0x0050) MISSED OFFSET
	struct FMovieSceneEvaluationField                  EvaluationField;                                          // 0x00A0(0x0030)
	struct FMovieSceneSequenceHierarchy                Hierarchy;                                                // 0x00D0(0x00A0)
	struct FMovieSceneTemplateGenerationLedger         TemplateLedger;                                           // 0x0170(0x00A8)
	unsigned char                                      bHasLegacyTrackInstances : 1;                             // 0x0218(0x0001)
	unsigned char                                      bKeepStaleTracks : 1;                                     // 0x0218(0x0001)
};

// ScriptStruct MovieScene.CachedMovieSceneEvaluationTemplate
// 0x0000 (0x0220 - 0x0220)
struct FCachedMovieSceneEvaluationTemplate : public FMovieSceneEvaluationTemplate
{

};

// ScriptStruct MovieScene.MovieSceneTrackCompilationParams
// 0x0002
struct FMovieSceneTrackCompilationParams
{
	unsigned char                                      bForEditorPreview : 1;                                    // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bDuringBlueprintCompile : 1;                              // 0x0001(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneTrackLabels
// 0x0010
struct FMovieSceneTrackLabels
{
	TArray<struct FString>                             Strings;                                                  // 0x0000(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct MovieScene.MovieSceneExpansionState
// 0x0001
struct FMovieSceneExpansionState
{
	unsigned char                                      bExpanded : 1;                                            // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneEditorData
// 0x0070
struct FMovieSceneEditorData
{
	TMap<struct FString, struct FMovieSceneExpansionState> ExpansionStates;                                          // 0x0000(0x0050) (CPF_ZeroConstructor)
	struct FFloatRange                                 WorkingRange;                                             // 0x0050(0x0010)
	struct FFloatRange                                 ViewRange;                                                // 0x0060(0x0010)
};

// ScriptStruct MovieScene.SectionEvaluationData
// 0x000C
struct FSectionEvaluationData
{
	int                                                ImplIndex;                                                // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ForcedTime;                                               // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0008(0x0001) UNKNOWN PROPERTY: EnumProperty MovieScene.SectionEvaluationData.Flags
};

// ScriptStruct MovieScene.MovieSceneEvalTemplateBase
// 0x0010
struct FMovieSceneEvalTemplateBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneEmptyStruct
// 0x0001
struct FMovieSceneEmptyStruct
{

};

// ScriptStruct MovieScene.MovieSceneEvalTemplate
// 0x0008 (0x0018 - 0x0010)
struct FMovieSceneEvalTemplate : public FMovieSceneEvalTemplateBase
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0010(0x0001) UNKNOWN PROPERTY: EnumProperty MovieScene.MovieSceneEvalTemplate.CompletionMode
};

// ScriptStruct MovieScene.MovieSceneTrackImplementation
// 0x0000 (0x0010 - 0x0010)
struct FMovieSceneTrackImplementation : public FMovieSceneEvalTemplateBase
{

};

// ScriptStruct MovieScene.MovieSceneSectionParameters
// 0x0014
struct FMovieSceneSectionParameters
{
	float                                              StartOffset;                                              // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TimeScale;                                                // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                HierarchicalBias;                                         // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PrerollTime;                                              // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	float                                              PostrollTime;                                             // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneSequenceCachedSignature
// 0x0018
struct FMovieSceneSequenceCachedSignature
{
	TWeakObjectPtr<class UMovieSceneSequence>          Sequence;                                                 // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGuid                                       CachedSignature;                                          // 0x0008(0x0010) (CPF_IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneLegacyTrackInstanceTemplate
// 0x0008 (0x0020 - 0x0018)
struct FMovieSceneLegacyTrackInstanceTemplate : public FMovieSceneEvalTemplate
{
	class UMovieSceneTrack*                            Track;                                                    // 0x0018(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// ScriptStruct MovieScene.MovieScenePropertySectionData
// 0x0028
struct FMovieScenePropertySectionData
{
	struct FName                                       PropertyName;                                             // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     PropertyPath;                                             // 0x0008(0x0010) (CPF_ZeroConstructor)
	struct FName                                       FunctionName;                                             // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       NotifyFunctionName;                                       // 0x0020(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct MovieScene.MovieSceneKeyStruct
// 0x0008
struct FMovieSceneKeyStruct
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
