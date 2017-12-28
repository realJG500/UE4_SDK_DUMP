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

// Class ClothingSystemRuntime.ClothingAssetCustomData
// 0x0000 (0x0028 - 0x0028)
class UClothingAssetCustomData : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ClothingSystemRuntime.ClothingAssetCustomData");
		return ptr;
	}

};


// Class ClothingSystemRuntime.ClothingAsset
// 0x0110 (0x0158 - 0x0048)
class UClothingAsset : public UClothingAssetBase
{
public:
	struct FClothConfig                                ClothConfig;                                              // 0x0048(0x00BC) (CPF_Edit)
	TArray<struct FClothLODData>                       LODData;                                                  // 0x0108(0x0010) (CPF_ZeroConstructor)
	TArray<int>                                        LodMap;                                                   // 0x0118(0x0010) (CPF_ZeroConstructor)
	TArray<struct FName>                               UsedBoneNames;                                            // 0x0128(0x0010) (CPF_ZeroConstructor)
	TArray<int>                                        UsedBoneIndices;                                          // 0x0138(0x0010) (CPF_ZeroConstructor)
	int                                                ReferenceBoneIndex;                                       // 0x0148(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClothingAssetCustomData*                    CustomData;                                               // 0x0150(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ClothingSystemRuntime.ClothingAsset");
		return ptr;
	}

};


// Class ClothingSystemRuntime.ClothingSimulationFactoryNv
// 0x0000 (0x0028 - 0x0028)
class UClothingSimulationFactoryNv : public UClothingSimulationFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ClothingSystemRuntime.ClothingSimulationFactoryNv");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
