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

// BlueprintGeneratedClass ParachuteVehicle_Seat.ParachuteVehicle_Seat_C
// 0x0008 (0x0440 - 0x0438)
class AParachuteVehicle_Seat_C : public AParachuteVehicleSeatActor
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0438(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ParachuteVehicle_Seat.ParachuteVehicle_Seat_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
