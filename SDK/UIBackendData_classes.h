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

// Class UIBackendData.UIBackendDataAccessor
// 0x0078 (FullSize[0x00B0] - InheritedSize[0x0038])
class UUIBackendDataAccessor : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData_2OVT[0x70];                                    // 0x0038(0x0070) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USplinteredStatesSubsystem*                  _splinteredStateSubsystem;                                 // 0x00A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class UIBackendData.UIBackendDataAccessor"));
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
