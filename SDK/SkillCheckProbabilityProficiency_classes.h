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

// BlueprintGeneratedClass SkillCheckProbabilityProficiency.SkillCheckProbabilityProficiency_C
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class USkillCheckProbabilityProficiency_C : public UInteractionProficiency
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass SkillCheckProbabilityProficiency.SkillCheckProbabilityProficiency_C"));
		return ptr;
	}



	bool GetIsActive(class UChargeableInteractionDefinition* chargeableInteraction, class ADBDPlayer* Player);
	DBDSharedTypes_EStatusEffectType GetType(float value);
	float GetValue(class UChargeableInteractionDefinition* chargeableInteraction, class ADBDPlayer* Player);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
