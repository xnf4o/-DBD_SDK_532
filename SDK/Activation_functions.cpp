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
//		Offset -> 0x05BF21E0
//		Name   -> Function Activation.ActivatorComponent.SetObjectState
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UGameplayTagContainerComponent*              objectState                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UActivatorComponent::SetObjectState(class UGameplayTagContainerComponent* objectState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Activation.ActivatorComponent.SetObjectState"));

	UActivatorComponent_SetObjectState_Params params {};
	params.objectState = objectState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
