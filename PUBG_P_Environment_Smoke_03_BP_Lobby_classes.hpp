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

// BlueprintGeneratedClass P_Environment_Smoke_03_BP_Lobby.P_Environment_Smoke_03_BP_Lobby_C
// 0x0074 (0x049C - 0x0428)
class AP_Environment_Smoke_03_BP_Lobby_C : public ATslParticleEnvironment
{
public:
	class Vector3D                                     SpawnBoxMax;                                              // 0x0428(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	class Vector3D                                     SpawnBoxMin;                                              // 0x0434(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	class Vector3D                                     Color;                                                    // 0x0440(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	float                                              SpawnRate;                                                // 0x044C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class Vector3D                                     SizeMax;                                                  // 0x0450(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	class Vector3D                                     SizeMin;                                                  // 0x045C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	class Vector3D                                     VelocityMax;                                              // 0x0468(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	class Vector3D                                     VelocityMin;                                              // 0x0474(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	float                                              LifeTime;                                                 // 0x0480(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LifeTimeLow;                                              // 0x0484(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PannerTime;                                               // 0x0488(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PannerTimeLow;                                            // 0x048C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Alpha;                                                    // 0x0490(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RotationRateMax;                                          // 0x0494(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RotationRateMin;                                          // 0x0498(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass P_Environment_Smoke_03_BP_Lobby.P_Environment_Smoke_03_BP_Lobby_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
