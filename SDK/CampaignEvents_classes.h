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

// Class CampaignEvents.CampaignEventsManager
// 0x0230 (FullSize[0x0268] - InheritedSize[0x0038])
class UCampaignEventsManager : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData_OI48[0x230];                                   // 0x0038(0x0230) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class CampaignEvents.CampaignEventsManager"));
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
