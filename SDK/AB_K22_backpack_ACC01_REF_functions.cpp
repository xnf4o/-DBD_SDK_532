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
//		Name   -> Function AB_K22_backpack_ACC01_REF.AB_K22_backpack_ACC01_REF_C.AnimGraph
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
void UAB_K22_backpack_ACC01_REF_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AB_K22_backpack_ACC01_REF.AB_K22_backpack_ACC01_REF_C.AnimGraph"));

	UAB_K22_backpack_ACC01_REF_C_AnimGraph_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function AB_K22_backpack_ACC01_REF.AB_K22_backpack_ACC01_REF_C.ExecuteUbergraph_AB_K22_backpack_ACC01_REF
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAB_K22_backpack_ACC01_REF_C::ExecuteUbergraph_AB_K22_backpack_ACC01_REF(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AB_K22_backpack_ACC01_REF.AB_K22_backpack_ACC01_REF_C.ExecuteUbergraph_AB_K22_backpack_ACC01_REF"));

	UAB_K22_backpack_ACC01_REF_C_ExecuteUbergraph_AB_K22_backpack_ACC01_REF_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
