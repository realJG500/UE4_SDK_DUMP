#pragma once

// PLAYERUNKNOWN'S BATTLEGROUNDS (2.4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AkAudio.AkAudioEventTrackKey
// 0x0020
struct FAkAudioEventTrackKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkAudioEvent*                               AkAudioEvent;                                             // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	struct FString                                     EventName;                                                // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_EditConst)
};

// ScriptStruct AkAudio.MovieSceneAkAudioEventTemplate
// 0x0020
struct FMovieSceneAkAudioEventTemplate
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
	class UMovieSceneAkAudioEventSection*              Section;                                                  // 0x0018(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// ScriptStruct AkAudio.MovieSceneAkAudioRTPCTemplate
// 0x0020
struct FMovieSceneAkAudioRTPCTemplate
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
	class UMovieSceneAkAudioRTPCSection*               Section;                                                  // 0x0018(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// ScriptStruct AkAudio.MovieSceneAkAudioRTPCSectionData
// 0x0080
struct FMovieSceneAkAudioRTPCSectionData
{
	struct FString                                     RTPCName;                                                 // 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FRichCurve                                  RTPCCurve;                                                // 0x0010(0x0070)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
