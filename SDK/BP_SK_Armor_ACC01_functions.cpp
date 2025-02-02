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
//		Name   -> Function BP_SK_Armor_ACC01.BP_SK_Armor_ACC01_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_SK_Armor_ACC01_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SK_Armor_ACC01.BP_SK_Armor_ACC01_C.ReceiveBeginPlay"));

	ABP_SK_Armor_ACC01_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function BP_SK_Armor_ACC01.BP_SK_Armor_ACC01_C.ExecuteUbergraph_BP_SK_Armor_ACC01
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_SK_Armor_ACC01_C::ExecuteUbergraph_BP_SK_Armor_ACC01(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BP_SK_Armor_ACC01.BP_SK_Armor_ACC01_C.ExecuteUbergraph_BP_SK_Armor_ACC01"));

	ABP_SK_Armor_ACC01_C_ExecuteUbergraph_BP_SK_Armor_ACC01_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
