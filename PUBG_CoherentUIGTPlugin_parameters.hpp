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

// Function CoherentUIGTPlugin.CoherentUIGTWidget.TriggerJSEvent
struct UCoherentUIGTWidget_TriggerJSEvent_Params
{
	struct FString                                     Name;                                                     // (CPF_Parm, CPF_ZeroConstructor)
	class UCoherentUIGTJSEvent*                        EventData;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.ShowPaintRects
struct UCoherentUIGTWidget_ShowPaintRects_Params
{
	bool                                               show;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.SetClickThroughAlphaThreshold
struct UCoherentUIGTWidget_SetClickThroughAlphaThreshold_Params
{
	float                                              threshold;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.Reload
struct UCoherentUIGTWidget_Reload_Params
{
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.Redraw
struct UCoherentUIGTWidget_Redraw_Params
{
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.Load
struct UCoherentUIGTWidget_Load_Params
{
	struct FString                                     path;                                                     // (CPF_Parm, CPF_ZeroConstructor)
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.IsTransparent
struct UCoherentUIGTWidget_IsTransparent_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.IsReadyToCreateView
struct UCoherentUIGTWidget_IsReadyToCreateView_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.IsReadyForBindings
struct UCoherentUIGTWidget_IsReadyForBindings_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.IsDocumentReady
struct UCoherentUIGTWidget_IsDocumentReady_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.HasRequestedView
struct UCoherentUIGTWidget_HasRequestedView_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.GetClickThroughAlphaThreshold
struct UCoherentUIGTWidget_GetClickThroughAlphaThreshold_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.CreateJSEvent
struct UCoherentUIGTWidget_CreateJSEvent_Params
{
	class UCoherentUIGTJSEvent*                        ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddStructArg
struct UCoherentUIGTJSEvent_AddStructArg_Params
{
	class UStructProperty*                             Arg;                                                      // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddString
struct UCoherentUIGTJSEvent_AddString_Params
{
	struct FString                                     str;                                                      // (CPF_Parm, CPF_ZeroConstructor)
};

// Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddObject
struct UCoherentUIGTJSEvent_AddObject_Params
{
	class UObject*                                     Object;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddInt32
struct UCoherentUIGTJSEvent_AddInt32_Params
{
	int                                                integer;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddFloat
struct UCoherentUIGTJSEvent_AddFloat_Params
{
	float                                              FL;                                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddByte
struct UCoherentUIGTJSEvent_AddByte_Params
{
	unsigned char                                      byte;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddBool
struct UCoherentUIGTJSEvent_AddBool_Params
{
	bool                                               B;                                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddArray
struct UCoherentUIGTJSEvent_AddArray_Params
{
	TArray<int>                                        Array;                                                    // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function CoherentUIGTPlugin.CoherentUIGTJSPayload.ReadObject
struct UCoherentUIGTJSPayload_ReadObject_Params
{
	int                                                Index;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     Object;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetString
struct UCoherentUIGTJSPayload_GetString_Params
{
	int                                                Index;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetNumber
struct UCoherentUIGTJSPayload_GetNumber_Params
{
	int                                                Index;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetInt32
struct UCoherentUIGTJSPayload_GetInt32_Params
{
	int                                                Index;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetBool
struct UCoherentUIGTJSPayload_GetBool_Params
{
	int                                                Index;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.TriggerJSEvent
struct UCoherentUIGTBaseComponent_TriggerJSEvent_Params
{
	struct FString                                     Name;                                                     // (CPF_Parm, CPF_ZeroConstructor)
	class UCoherentUIGTJSEvent*                        EventData;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.ShowPaintRects
struct UCoherentUIGTBaseComponent_ShowPaintRects_Params
{
	bool                                               show;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.SetClickThroughAlphaThreshold
struct UCoherentUIGTBaseComponent_SetClickThroughAlphaThreshold_Params
{
	float                                              threshold;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Resize
struct UCoherentUIGTBaseComponent_Resize_Params
{
	int                                                Width;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Height;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Reload
struct UCoherentUIGTBaseComponent_Reload_Params
{
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Redraw
struct UCoherentUIGTBaseComponent_Redraw_Params
{
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Load
struct UCoherentUIGTBaseComponent_Load_Params
{
	struct FString                                     path;                                                     // (CPF_Parm, CPF_ZeroConstructor)
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsTransparent
struct UCoherentUIGTBaseComponent_IsTransparent_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsReadyToCreateView
struct UCoherentUIGTBaseComponent_IsReadyToCreateView_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsReadyForBindings
struct UCoherentUIGTBaseComponent_IsReadyForBindings_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsDocumentReady
struct UCoherentUIGTBaseComponent_IsDocumentReady_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.HasRequestedView
struct UCoherentUIGTBaseComponent_HasRequestedView_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.GetClickThroughAlphaThreshold
struct UCoherentUIGTBaseComponent_GetClickThroughAlphaThreshold_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.EnableDelayedUpdate
struct UCoherentUIGTBaseComponent_EnableDelayedUpdate_Params
{
	bool                                               bEnabled;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.CreateJSEvent
struct UCoherentUIGTBaseComponent_CreateJSEvent_Params
{
	class UCoherentUIGTJSEvent*                        ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.TriggerJSEvent
struct UCoherentUIGTBlueprintFunctionLibrary_TriggerJSEvent_Params
{
	class UCoherentUIGTBaseComponent*                  Component;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FString                                     EventName;                                                // (CPF_Parm, CPF_ZeroConstructor)
	class UCoherentUIGTJSEvent*                        JSEvent;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.PurgeCoherentDiskCache
struct UCoherentUIGTBlueprintFunctionLibrary_PurgeCoherentDiskCache_Params
{
};

// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.CreateJSEvent
struct UCoherentUIGTBlueprintFunctionLibrary_CreateJSEvent_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCoherentUIGTJSEvent*                        ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddStructArg
struct UCoherentUIGTBlueprintFunctionLibrary_AddStructArg_Params
{
	class UCoherentUIGTJSEvent*                        JSEvent;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStructProperty*                             Arg;                                                      // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddString
struct UCoherentUIGTBlueprintFunctionLibrary_AddString_Params
{
	class UCoherentUIGTJSEvent*                        JSEvent;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     Arg;                                                      // (CPF_Parm, CPF_ZeroConstructor)
};

// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddObject
struct UCoherentUIGTBlueprintFunctionLibrary_AddObject_Params
{
	class UCoherentUIGTJSEvent*                        JSEvent;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     Arg;                                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddInt32
struct UCoherentUIGTBlueprintFunctionLibrary_AddInt32_Params
{
	class UCoherentUIGTJSEvent*                        JSEvent;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Arg;                                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddFloat
struct UCoherentUIGTBlueprintFunctionLibrary_AddFloat_Params
{
	class UCoherentUIGTJSEvent*                        JSEvent;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Arg;                                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddByte
struct UCoherentUIGTBlueprintFunctionLibrary_AddByte_Params
{
	class UCoherentUIGTJSEvent*                        JSEvent;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Arg;                                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddBool
struct UCoherentUIGTBlueprintFunctionLibrary_AddBool_Params
{
	class UCoherentUIGTJSEvent*                        JSEvent;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Arg;                                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddArrayOfStructs
struct UCoherentUIGTBlueprintFunctionLibrary_AddArrayOfStructs_Params
{
	class UCoherentUIGTJSEvent*                        JSEvent;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<int>                                        Arg;                                                      // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddArray
struct UCoherentUIGTBlueprintFunctionLibrary_AddArray_Params
{
	class UCoherentUIGTJSEvent*                        JSEvent;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<int>                                        Arg;                                                      // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	int                                                ArrayType;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTGameHUD.SetupUIGTView
struct ACoherentUIGTGameHUD_SetupUIGTView_Params
{
	struct FString                                     PageUrl;                                                  // (CPF_Parm, CPF_ZeroConstructor)
	bool                                               bIsTransparent;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ClickThroughAlphaThreshold;                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AnimationFrameDefer;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bDelayedUpdate;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTInputActor.ToggleCoherentUIGTInputFocus
struct ACoherentUIGTInputActor_ToggleCoherentUIGTInputFocus_Params
{
};

// Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetLineTraceMode
struct ACoherentUIGTInputActor_SetLineTraceMode_Params
{
	TEnumAsByte<EGTInputWidgetLineTraceMode>           Mode;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetInputPropagationBehaviour
struct ACoherentUIGTInputActor_SetInputPropagationBehaviour_Params
{
	TEnumAsByte<ECoherentUIGTInputPropagationBehaviour> Propagation;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetCoherentUIGTViewFocus
struct ACoherentUIGTInputActor_SetCoherentUIGTViewFocus_Params
{
	class UCoherentUIGTBaseComponent*                  NewFocusedView;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetCoherentUIGTInputFocus
struct ACoherentUIGTInputActor_SetCoherentUIGTInputFocus_Params
{
	bool                                               FocusUI;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTInputActor.IsJoystickInputWhileUIGTIsFocusedAllowed_DEPRECATED
struct ACoherentUIGTInputActor_IsJoystickInputWhileUIGTIsFocusedAllowed_DEPRECATED_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTInputActor.IsCoherentUIGTFocused
struct ACoherentUIGTInputActor_IsCoherentUIGTFocused_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTInputActor.Initialize
struct ACoherentUIGTInputActor_Initialize_Params
{
	TEnumAsByte<ECollisionChannel>                     CollisionChannel;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETextureAddress>                       AddressMode;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EGTInputWidgetRaycastQuality>          RaycastQuality;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                UVChannel;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTInputActor.GetInputPropagationBehaviour
struct ACoherentUIGTInputActor_GetInputPropagationBehaviour_Params
{
	TEnumAsByte<ECoherentUIGTInputPropagationBehaviour> ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTInputActor.AlwaysAcceptMouseInput
struct ACoherentUIGTInputActor_AlwaysAcceptMouseInput_Params
{
	bool                                               bAccept;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTInputActor.AllowJoystickInputWhileUIGTIsFocused_DEPRECATED
struct ACoherentUIGTInputActor_AllowJoystickInputWhileUIGTIsFocused_DEPRECATED_Params
{
	bool                                               bAllow;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTLiveView.OnLiveViewSizeRequest
struct UCoherentUIGTLiveView_OnLiveViewSizeRequest_Params
{
	class UCoherentUIGTBaseComponent*                  baseComponent;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FString                                     Name;                                                     // (CPF_Parm, CPF_ZeroConstructor)
	int                                                Width;                                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Height;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
