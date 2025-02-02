﻿// Name: DBD, Version: 5.3.2

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function BonusSkillCheckZoneSizeProficiency.BonusSkillCheckZoneSizeProficiency_C.GetValue
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		class UChargeableInteractionDefinition*            chargeableInteraction                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class ADBDPlayer*                                  Player                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UBonusSkillCheckZoneSizeProficiency_C::GetValue(class UChargeableInteractionDefinition* chargeableInteraction, class ADBDPlayer* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BonusSkillCheckZoneSizeProficiency.BonusSkillCheckZoneSizeProficiency_C.GetValue"));

	UBonusSkillCheckZoneSizeProficiency_C_GetValue_Params params {};
	params.chargeableInteraction = chargeableInteraction;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function BonusSkillCheckZoneSizeProficiency.BonusSkillCheckZoneSizeProficiency_C.GetIsActive
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		class UChargeableInteractionDefinition*            chargeableInteraction                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class ADBDPlayer*                                  Player                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UBonusSkillCheckZoneSizeProficiency_C::GetIsActive(class UChargeableInteractionDefinition* chargeableInteraction, class ADBDPlayer* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BonusSkillCheckZoneSizeProficiency.BonusSkillCheckZoneSizeProficiency_C.GetIsActive"));

	UBonusSkillCheckZoneSizeProficiency_C_GetIsActive_Params params {};
	params.chargeableInteraction = chargeableInteraction;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function BonusSkillCheckZoneSizeProficiency.BonusSkillCheckZoneSizeProficiency_C.GetType
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		float                                              value                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		DBDSharedTypes_EStatusEffectType                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
DBDSharedTypes_EStatusEffectType UBonusSkillCheckZoneSizeProficiency_C::GetType(float value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BonusSkillCheckZoneSizeProficiency.BonusSkillCheckZoneSizeProficiency_C.GetType"));

	UBonusSkillCheckZoneSizeProficiency_C_GetType_Params params {};
	params.value = value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
