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

// Function OceanPlugin.OceanManager.LoadLandscapeHeightmap
struct AOceanManager_LoadLandscapeHeightmap_Params
{
	class UTexture2D*                                  Tex2D;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function OceanPlugin.OceanManager.GetWaveHeightValue
struct AOceanManager_GetWaveHeightValue_Params
{
	class Vector3D                                     Location;                                                 // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	class UWorld*                                      World;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               HeightOnly;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               TwoIterations;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function OceanPlugin.OceanManager.GetHeightmapPixel
struct AOceanManager_GetHeightmapPixel_Params
{
	float                                              U;                                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              V;                                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function OceanPlugin.AdvancedBuoyancyComponent.TriangleArea
struct UAdvancedBuoyancyComponent_TriangleArea_Params
{
	class Vector3D                                     A;                                                        // (CPF_Parm, CPF_IsPlainOldData)
	class Vector3D                                     B;                                                        // (CPF_Parm, CPF_IsPlainOldData)
	class Vector3D                                     C;                                                        // (CPF_Parm, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function OceanPlugin.AdvancedBuoyancyComponent.SplitTriangle
struct UAdvancedBuoyancyComponent_SplitTriangle_Params
{
	struct FBuoyancyVertex                             H;                                                        // (CPF_Parm)
	struct FBuoyancyVertex                             M;                                                        // (CPF_Parm)
	struct FBuoyancyVertex                             L;                                                        // (CPF_Parm)
	class Vector3D                                     InArrow;                                                  // (CPF_Parm, CPF_IsPlainOldData)
	TArray<struct FForceTriangle>                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function OceanPlugin.AdvancedBuoyancyComponent.SetMeshDensity
struct UAdvancedBuoyancyComponent_SetMeshDensity_Params
{
	float                                              NewDensity;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              NewWaterDensity;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function OceanPlugin.AdvancedBuoyancyComponent.GetOceanDepthFromGrid
struct UAdvancedBuoyancyComponent_GetOceanDepthFromGrid_Params
{
	class Vector3D                                     Position;                                                 // (CPF_Parm, CPF_IsPlainOldData)
	bool                                               bJustGetHeightAtLocation;                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function OceanPlugin.AdvancedBuoyancyComponent.GetOcean
struct UAdvancedBuoyancyComponent_GetOcean_Params
{
};

// Function OceanPlugin.AdvancedBuoyancyComponent.DrawDebugStuff
struct UAdvancedBuoyancyComponent_DrawDebugStuff_Params
{
	struct FForceTriangle                              TriForce;                                                 // (CPF_Parm)
	struct FColor                                      DebugColor;                                               // (CPF_Parm, CPF_IsPlainOldData)
};

// Function OceanPlugin.AdvancedBuoyancyComponent.ApplySlamForce
struct UAdvancedBuoyancyComponent_ApplySlamForce_Params
{
	class Vector3D                                     SlamForce;                                                // (CPF_Parm, CPF_IsPlainOldData)
	class Vector3D                                     TriCenter;                                                // (CPF_Parm, CPF_IsPlainOldData)
};

// Function OceanPlugin.AdvancedBuoyancyComponent.ApplyForce
struct UAdvancedBuoyancyComponent_ApplyForce_Params
{
	struct FForceTriangle                              TriForce;                                                 // (CPF_Parm)
};

// Function OceanPlugin.CustomVehicleController.GetIsDriving
struct ACustomVehicleController_GetIsDriving_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function OceanPlugin.CustomVehicleController.ExitVehicle
struct ACustomVehicleController_ExitVehicle_Params
{
};

// Function OceanPlugin.CustomVehicleController.EnterVehicle
struct ACustomVehicleController_EnterVehicle_Params
{
	class APawn*                                       Vehicle;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function OceanPlugin.CustomVehicleController.EnableBuoyancy
struct ACustomVehicleController_EnableBuoyancy_Params
{
};

// Function OceanPlugin.CustomVehicleController.DrawBuoyancyPoints
struct ACustomVehicleController_DrawBuoyancyPoints_Params
{
};

// Function OceanPlugin.FlockFish.OnEndOverlap
struct AFlockFish_OnEndOverlap_Params
{
	class UPrimitiveComponent*                         activatedComp;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function OceanPlugin.FlockFish.OnBeginOverlap
struct AFlockFish_OnBeginOverlap_Params
{
	class UPrimitiveComponent*                         activatedComp;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bFromSweep;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function OceanPlugin.TimeManager.SetCurrentLocalTime
struct ATimeManager_SetCurrentLocalTime_Params
{
	float                                              Time;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function OceanPlugin.TimeManager.IsLeapYear
struct ATimeManager_IsLeapYear_Params
{
	int                                                Year;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function OceanPlugin.TimeManager.InitializeCalendar
struct ATimeManager_InitializeCalendar_Params
{
	struct FTimeDate                                   Time;                                                     // (CPF_Parm)
};

// Function OceanPlugin.TimeManager.IncrementTime
struct ATimeManager_IncrementTime_Params
{
	float                                              DeltaSeconds;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function OceanPlugin.TimeManager.GetYearPhase
struct ATimeManager_GetYearPhase_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function OceanPlugin.TimeManager.GetElapsedDayInMinutes
struct ATimeManager_GetElapsedDayInMinutes_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function OceanPlugin.TimeManager.GetDaysInYear
struct ATimeManager_GetDaysInYear_Params
{
	int                                                Year;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function OceanPlugin.TimeManager.GetDaysInMonth
struct ATimeManager_GetDaysInMonth_Params
{
	int                                                Year;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Month;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function OceanPlugin.TimeManager.GetDayPhase
struct ATimeManager_GetDayPhase_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function OceanPlugin.TimeManager.GetDayOfYear
struct ATimeManager_GetDayOfYear_Params
{
	struct FTimeDate                                   Time;                                                     // (CPF_Parm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function OceanPlugin.TimeManager.CalculateSunAngle
struct ATimeManager_CalculateSunAngle_Params
{
	class Rotator                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function OceanPlugin.TimeManager.CalculateMoonPhase
struct ATimeManager_CalculateMoonPhase_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function OceanPlugin.TimeManager.CalculateMoonAngle
struct ATimeManager_CalculateMoonAngle_Params
{
	class Rotator                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
