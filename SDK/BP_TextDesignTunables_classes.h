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

// BlueprintGeneratedClass BP_TextDesignTunables.BP_TextDesignTunables_C
// 0x0008 (FullSize[0x0120] - InheritedSize[0x0118])
class UBP_TextDesignTunables_C : public UDBDTextDesignTunables
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0118(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_TextDesignTunables.BP_TextDesignTunables_C"));
		return ptr;
	}



	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_TextDesignTunables(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
