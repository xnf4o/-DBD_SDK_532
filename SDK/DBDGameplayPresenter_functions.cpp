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
//		Offset -> 0x030BDF50
//		Name   -> Function DBDGameplayPresenter.SurvivorStatusComponent.OnValidatedInteractionStarted
//		Flags  -> (Final, Native, Private)
void USurvivorStatusComponent::OnValidatedInteractionStarted()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplayPresenter.SurvivorStatusComponent.OnValidatedInteractionStarted"));

	USurvivorStatusComponent_OnValidatedInteractionStarted_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030BDF50
//		Name   -> Function DBDGameplayPresenter.SurvivorStatusComponent.OnValidatedInteractionEnded
//		Flags  -> (Final, Native, Private)
void USurvivorStatusComponent::OnValidatedInteractionEnded()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplayPresenter.SurvivorStatusComponent.OnValidatedInteractionEnded"));

	USurvivorStatusComponent_OnValidatedInteractionEnded_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030BDF70
//		Name   -> Function DBDGameplayPresenter.SurvivorStatusComponent.OnSuvivorDamaged
//		Flags  -> (Final, Native, Private)
// Parameters:
//		DeadByDaylight_ECamperDamageState                  oldDamageState                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		DeadByDaylight_ECamperDamageState                  newDamageState                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USurvivorStatusComponent::OnSuvivorDamaged(DeadByDaylight_ECamperDamageState oldDamageState, DeadByDaylight_ECamperDamageState newDamageState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplayPresenter.SurvivorStatusComponent.OnSuvivorDamaged"));

	USurvivorStatusComponent_OnSuvivorDamaged_Params params {};
	params.oldDamageState = oldDamageState;
	params.newDamageState = newDamageState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function DBDGameplayPresenter.SurvivorStatusComponent.OnSurivorStatusChange
//		Flags  -> (Event, Public, BlueprintEvent)
void USurvivorStatusComponent::OnSurivorStatusChange()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplayPresenter.SurvivorStatusComponent.OnSurivorStatusChange"));

	USurvivorStatusComponent_OnSurivorStatusChange_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030BDEC0
//		Name   -> Function DBDGameplayPresenter.SurvivorStatusComponent.OnRunningAndMovementChanged
//		Flags  -> (Final, Native, Private)
// Parameters:
//		bool                                               IsRunningAndMoving                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USurvivorStatusComponent::OnRunningAndMovementChanged(bool IsRunningAndMoving)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplayPresenter.SurvivorStatusComponent.OnRunningAndMovementChanged"));

	USurvivorStatusComponent_OnRunningAndMovementChanged_Params params {};
	params.IsRunningAndMoving = IsRunningAndMoving;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030BDF70
//		Name   -> Function DBDGameplayPresenter.SurvivorStatusComponent.OnPlayerImmobilizeStateChanged
//		Flags  -> (Final, Native, Private)
// Parameters:
//		DeadByDaylight_ECamperImmobilizeState              oldImmobilizeState                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		DeadByDaylight_ECamperImmobilizeState              newImmobilizeState                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USurvivorStatusComponent::OnPlayerImmobilizeStateChanged(DeadByDaylight_ECamperImmobilizeState oldImmobilizeState, DeadByDaylight_ECamperImmobilizeState newImmobilizeState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplayPresenter.SurvivorStatusComponent.OnPlayerImmobilizeStateChanged"));

	USurvivorStatusComponent_OnPlayerImmobilizeStateChanged_Params params {};
	params.oldImmobilizeState = oldImmobilizeState;
	params.newImmobilizeState = newImmobilizeState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030BDF50
//		Name   -> Function DBDGameplayPresenter.SurvivorStatusComponent.OnHookedStateChanged
//		Flags  -> (Final, Native, Private)
void USurvivorStatusComponent::OnHookedStateChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplayPresenter.SurvivorStatusComponent.OnHookedStateChanged"));

	USurvivorStatusComponent_OnHookedStateChanged_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030BDF50
//		Name   -> Function DBDGameplayPresenter.SurvivorStatusComponent.OnGuidedStateChanged
//		Flags  -> (Final, Native, Private)
void USurvivorStatusComponent::OnGuidedStateChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplayPresenter.SurvivorStatusComponent.OnGuidedStateChanged"));

	USurvivorStatusComponent_OnGuidedStateChanged_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030BDEC0
//		Name   -> Function DBDGameplayPresenter.SurvivorStatusComponent.OnCrouchChanged
//		Flags  -> (Final, Native, Private)
// Parameters:
//		bool                                               isCrouched                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USurvivorStatusComponent::OnCrouchChanged(bool isCrouched)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplayPresenter.SurvivorStatusComponent.OnCrouchChanged"));

	USurvivorStatusComponent_OnCrouchChanged_Params params {};
	params.isCrouched = isCrouched;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x030BDE90
//		Name   -> Function DBDGameplayPresenter.SurvivorStatusComponent.IsSleeping
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USurvivorStatusComponent::IsSleeping()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplayPresenter.SurvivorStatusComponent.IsSleeping"));

	USurvivorStatusComponent_IsSleeping_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x030BDE60
//		Name   -> Function DBDGameplayPresenter.SurvivorStatusComponent.IsRunning
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USurvivorStatusComponent::IsRunning()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplayPresenter.SurvivorStatusComponent.IsRunning"));

	USurvivorStatusComponent_IsRunning_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x030BDE30
//		Name   -> Function DBDGameplayPresenter.SurvivorStatusComponent.IsInjured
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USurvivorStatusComponent::IsInjured()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplayPresenter.SurvivorStatusComponent.IsInjured"));

	USurvivorStatusComponent_IsInjured_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x030BDE00
//		Name   -> Function DBDGameplayPresenter.SurvivorStatusComponent.IsHooked
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USurvivorStatusComponent::IsHooked()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplayPresenter.SurvivorStatusComponent.IsHooked"));

	USurvivorStatusComponent_IsHooked_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x030BDDD0
//		Name   -> Function DBDGameplayPresenter.SurvivorStatusComponent.IsHiding
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USurvivorStatusComponent::IsHiding()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplayPresenter.SurvivorStatusComponent.IsHiding"));

	USurvivorStatusComponent_IsHiding_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x030BDDA0
//		Name   -> Function DBDGameplayPresenter.SurvivorStatusComponent.IsHealing
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USurvivorStatusComponent::IsHealing()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplayPresenter.SurvivorStatusComponent.IsHealing"));

	USurvivorStatusComponent_IsHealing_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x030BDD70
//		Name   -> Function DBDGameplayPresenter.SurvivorStatusComponent.IsHarpooned
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USurvivorStatusComponent::IsHarpooned()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplayPresenter.SurvivorStatusComponent.IsHarpooned"));

	USurvivorStatusComponent_IsHarpooned_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x030BDD40
//		Name   -> Function DBDGameplayPresenter.SurvivorStatusComponent.IsGettingStrangled
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USurvivorStatusComponent::IsGettingStrangled()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplayPresenter.SurvivorStatusComponent.IsGettingStrangled"));

	USurvivorStatusComponent_IsGettingStrangled_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x030BDD10
//		Name   -> Function DBDGameplayPresenter.SurvivorStatusComponent.IsGettingSacrificed
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USurvivorStatusComponent::IsGettingSacrificed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplayPresenter.SurvivorStatusComponent.IsGettingSacrificed"));

	USurvivorStatusComponent_IsGettingSacrificed_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x030BDCE0
//		Name   -> Function DBDGameplayPresenter.SurvivorStatusComponent.IsDying
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USurvivorStatusComponent::IsDying()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplayPresenter.SurvivorStatusComponent.IsDying"));

	USurvivorStatusComponent_IsDying_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x030BDCB0
//		Name   -> Function DBDGameplayPresenter.SurvivorStatusComponent.IsDead
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USurvivorStatusComponent::IsDead()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplayPresenter.SurvivorStatusComponent.IsDead"));

	USurvivorStatusComponent_IsDead_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x030BDC80
//		Name   -> Function DBDGameplayPresenter.SurvivorStatusComponent.IsCrouching
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USurvivorStatusComponent::IsCrouching()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplayPresenter.SurvivorStatusComponent.IsCrouching"));

	USurvivorStatusComponent_IsCrouching_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x030BDC50
//		Name   -> Function DBDGameplayPresenter.SurvivorStatusComponent.IsCaptured
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USurvivorStatusComponent::IsCaptured()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplayPresenter.SurvivorStatusComponent.IsCaptured"));

	USurvivorStatusComponent_IsCaptured_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x030BDB10
//		Name   -> Function DBDGameplayPresenter.SurvivorStatusComponent.GetMovementSpeed
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              currentMovementSpeed                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              percentMovementSpeed                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              maximumMovementSpeed                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USurvivorStatusComponent::GetMovementSpeed(float* currentMovementSpeed, float* percentMovementSpeed, float* maximumMovementSpeed)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDGameplayPresenter.SurvivorStatusComponent.GetMovementSpeed"));

	USurvivorStatusComponent_GetMovementSpeed_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (currentMovementSpeed != nullptr)
		*currentMovementSpeed = params.currentMovementSpeed;
	if (percentMovementSpeed != nullptr)
		*percentMovementSpeed = params.percentMovementSpeed;
	if (maximumMovementSpeed != nullptr)
		*maximumMovementSpeed = params.maximumMovementSpeed;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
