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
//		Offset -> 0x0512F720
//		Name   -> Function EyeTracker.EyeTrackerFunctionLibrary.SetEyeTrackedPlayer
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEyeTrackerFunctionLibrary::STATIC_SetEyeTrackedPlayer(class APlayerController* PlayerController)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function EyeTracker.EyeTrackerFunctionLibrary.SetEyeTrackedPlayer"));

	UEyeTrackerFunctionLibrary_SetEyeTrackedPlayer_Params params {};
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0512F6F0
//		Name   -> Function EyeTracker.EyeTrackerFunctionLibrary.IsStereoGazeDataAvailable
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UEyeTrackerFunctionLibrary::STATIC_IsStereoGazeDataAvailable()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function EyeTracker.EyeTrackerFunctionLibrary.IsStereoGazeDataAvailable"));

	UEyeTrackerFunctionLibrary_IsStereoGazeDataAvailable_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0512F6C0
//		Name   -> Function EyeTracker.EyeTrackerFunctionLibrary.IsEyeTrackerConnected
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UEyeTrackerFunctionLibrary::STATIC_IsEyeTrackerConnected()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function EyeTracker.EyeTrackerFunctionLibrary.IsEyeTrackerConnected"));

	UEyeTrackerFunctionLibrary_IsEyeTrackerConnected_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0512F620
//		Name   -> Function EyeTracker.EyeTrackerFunctionLibrary.GetStereoGazeData
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FEyeTrackerStereoGazeData                   OutGazeData                                                (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UEyeTrackerFunctionLibrary::STATIC_GetStereoGazeData(struct FEyeTrackerStereoGazeData* OutGazeData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function EyeTracker.EyeTrackerFunctionLibrary.GetStereoGazeData"));

	UEyeTrackerFunctionLibrary_GetStereoGazeData_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutGazeData != nullptr)
		*OutGazeData = params.OutGazeData;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0512F570
//		Name   -> Function EyeTracker.EyeTrackerFunctionLibrary.GetGazeData
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FEyeTrackerGazeData                         OutGazeData                                                (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UEyeTrackerFunctionLibrary::STATIC_GetGazeData(struct FEyeTrackerGazeData* OutGazeData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function EyeTracker.EyeTrackerFunctionLibrary.GetGazeData"));

	UEyeTrackerFunctionLibrary_GetGazeData_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutGazeData != nullptr)
		*OutGazeData = params.OutGazeData;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
