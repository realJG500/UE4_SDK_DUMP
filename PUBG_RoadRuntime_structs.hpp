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

// ScriptStruct RoadRuntime.CrossActorManager
// 0x0018
struct FCrossActorManager
{
	class UClass*                                      Prototype;                                                // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      SideActor;                                                // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SocketIndex;                                              // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct RoadRuntime.CrossMeshManager
// 0x0020
struct FCrossMeshManager
{
	class UStaticMesh*                                 Prototype;                                                // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      Owner;                                                    // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        SideMesh;                                                 // 0x0010(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	int                                                SocketIndex;                                              // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct RoadRuntime.SideActorManager
// 0x0020
struct FSideActorManager
{
	class UClass*                                      Prototype;                                                // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class AActor*>                              SideActors;                                               // 0x0008(0x0010) (CPF_ZeroConstructor)
	int                                                SocketIndex;                                              // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct RoadRuntime.SideMeshManager
// 0x0020
struct FSideMeshManager
{
	class UStaticMesh*                                 Prototype;                                                // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      Owner;                                                    // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UHierarchicalInstancedStaticMeshComponent*   SideMeshes;                                               // 0x0010(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	int                                                SocketIndex;                                              // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct RoadRuntime.CurbsManager
// 0x0088
struct FCurbsManager
{
	class AActor*                                      Owner;                                                    // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMesh*                                 Prototype;                                                // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMesh*                                 StartPrototype;                                           // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMesh*                                 EndPrototype;                                             // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class USplineMeshComponent*>                CurbsComp;                                                // 0x0020(0x0010) (CPF_ExportObject, CPF_ZeroConstructor)
	class USplineComponent*                            Spline;                                                   // 0x0030(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	int                                                SplineIndex;                                              // 0x0038(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                SocketIndex;                                              // 0x003C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Segmentation;                                             // 0x0040(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                StepGeneration;                                           // 0x0044(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     Offset;                                                   // 0x0048(0x000C) (CPF_IsPlainOldData)
	class Vector3D                                     Scale;                                                    // 0x0054(0x000C) (CPF_IsPlainOldData)
	unsigned char                                      CurbEnable : 1;                                           // 0x0060(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      StartEnable : 1;                                          // 0x0061(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      EndEnable : 1;                                            // 0x0062(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FInterpCurveVector                          SplineInfo;                                               // 0x0068(0x0018)
	float                                              StartRoll;                                                // 0x0080(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              EndRoll;                                                  // 0x0084(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
