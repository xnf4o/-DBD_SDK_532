﻿#pragma once

// Name: DBD, Version: 5.3.2


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class AtlantaBloodMarket.AtlantaBloodMarketManager
// 0x0130 (FullSize[0x0168] - InheritedSize[0x0038])
class UAtlantaBloodMarketManager : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData_JC3G[0x130];                                   // 0x0038(0x0130) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AtlantaBloodMarket.AtlantaBloodMarketManager"));
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
