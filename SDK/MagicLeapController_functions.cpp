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
//		Offset -> 0x02E3F1E0
//		Name   -> Function MagicLeapController.MagicLeapControllerFunctionLibrary.SetMotionSourceForHand
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		InputCore_EControllerHand                          Hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       MotionSource                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapControllerFunctionLibrary::STATIC_SetMotionSourceForHand(InputCore_EControllerHand Hand, const struct FName& MotionSource)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapController.MagicLeapControllerFunctionLibrary.SetMotionSourceForHand"));

	UMagicLeapControllerFunctionLibrary_SetMotionSourceForHand_Params params {};
	params.Hand = Hand;
	params.MotionSource = MotionSource;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02E3E880
//		Name   -> Function MagicLeapController.MagicLeapControllerFunctionLibrary.SetControllerTrackingMode
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		MagicLeapController_EMagicLeapControllerTrackingMode TrackingMode                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapControllerFunctionLibrary::STATIC_SetControllerTrackingMode(MagicLeapController_EMagicLeapControllerTrackingMode TrackingMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapController.MagicLeapControllerFunctionLibrary.SetControllerTrackingMode"));

	UMagicLeapControllerFunctionLibrary_SetControllerTrackingMode_Params params {};
	params.TrackingMode = TrackingMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02E3F090
//		Name   -> Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayLEDPattern
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       MotionSource                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		MagicLeapController_EMagicLeapControllerLEDPattern LEDPattern                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		MagicLeapController_EMagicLeapControllerLEDColor   LEDColor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              DurationInSec                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapControllerFunctionLibrary::STATIC_PlayLEDPattern(const struct FName& MotionSource, MagicLeapController_EMagicLeapControllerLEDPattern LEDPattern, MagicLeapController_EMagicLeapControllerLEDColor LEDColor, float DurationInSec)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayLEDPattern"));

	UMagicLeapControllerFunctionLibrary_PlayLEDPattern_Params params {};
	params.MotionSource = MotionSource;
	params.LEDPattern = LEDPattern;
	params.LEDColor = LEDColor;
	params.DurationInSec = DurationInSec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02E3EEC0
//		Name   -> Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayLEDEffect
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       MotionSource                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		MagicLeapController_EMagicLeapControllerLEDEffect  LEDEffect                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		MagicLeapController_EMagicLeapControllerLEDSpeed   LEDSpeed                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		MagicLeapController_EMagicLeapControllerLEDPattern LEDPattern                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		MagicLeapController_EMagicLeapControllerLEDColor   LEDColor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              DurationInSec                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapControllerFunctionLibrary::STATIC_PlayLEDEffect(const struct FName& MotionSource, MagicLeapController_EMagicLeapControllerLEDEffect LEDEffect, MagicLeapController_EMagicLeapControllerLEDSpeed LEDSpeed, MagicLeapController_EMagicLeapControllerLEDPattern LEDPattern, MagicLeapController_EMagicLeapControllerLEDColor LEDColor, float DurationInSec)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayLEDEffect"));

	UMagicLeapControllerFunctionLibrary_PlayLEDEffect_Params params {};
	params.MotionSource = MotionSource;
	params.LEDEffect = LEDEffect;
	params.LEDSpeed = LEDSpeed;
	params.LEDPattern = LEDPattern;
	params.LEDColor = LEDColor;
	params.DurationInSec = DurationInSec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02E3EDA0
//		Name   -> Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayHapticPattern
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       MotionSource                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		MagicLeapController_EMagicLeapControllerHapticPattern HapticPattern                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		MagicLeapController_EMagicLeapControllerHapticIntensity Intensity                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapControllerFunctionLibrary::STATIC_PlayHapticPattern(const struct FName& MotionSource, MagicLeapController_EMagicLeapControllerHapticPattern HapticPattern, MagicLeapController_EMagicLeapControllerHapticIntensity Intensity)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayHapticPattern"));

	UMagicLeapControllerFunctionLibrary_PlayHapticPattern_Params params {};
	params.MotionSource = MotionSource;
	params.HapticPattern = HapticPattern;
	params.Intensity = Intensity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02E3EBF0
//		Name   -> Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerLEDEffect
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		InputCore_EControllerHand                          Hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		MagicLeapController_EMagicLeapControllerLEDEffect  LEDEffect                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		MagicLeapController_EMagicLeapControllerLEDSpeed   LEDSpeed                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		MagicLeapController_EMagicLeapControllerLEDPattern LEDPattern                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		MagicLeapController_EMagicLeapControllerLEDColor   LEDColor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              DurationInSec                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapControllerFunctionLibrary::STATIC_PlayControllerLEDEffect(InputCore_EControllerHand Hand, MagicLeapController_EMagicLeapControllerLEDEffect LEDEffect, MagicLeapController_EMagicLeapControllerLEDSpeed LEDSpeed, MagicLeapController_EMagicLeapControllerLEDPattern LEDPattern, MagicLeapController_EMagicLeapControllerLEDColor LEDColor, float DurationInSec)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerLEDEffect"));

	UMagicLeapControllerFunctionLibrary_PlayControllerLEDEffect_Params params {};
	params.Hand = Hand;
	params.LEDEffect = LEDEffect;
	params.LEDSpeed = LEDSpeed;
	params.LEDPattern = LEDPattern;
	params.LEDColor = LEDColor;
	params.DurationInSec = DurationInSec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02E3EAB0
//		Name   -> Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerLED
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		InputCore_EControllerHand                          Hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		MagicLeapController_EMagicLeapControllerLEDPattern LEDPattern                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		MagicLeapController_EMagicLeapControllerLEDColor   LEDColor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              DurationInSec                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapControllerFunctionLibrary::STATIC_PlayControllerLED(InputCore_EControllerHand Hand, MagicLeapController_EMagicLeapControllerLEDPattern LEDPattern, MagicLeapController_EMagicLeapControllerLEDColor LEDColor, float DurationInSec)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerLED"));

	UMagicLeapControllerFunctionLibrary_PlayControllerLED_Params params {};
	params.Hand = Hand;
	params.LEDPattern = LEDPattern;
	params.LEDColor = LEDColor;
	params.DurationInSec = DurationInSec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02E3E9B0
//		Name   -> Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerHapticFeedback
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		InputCore_EControllerHand                          Hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		MagicLeapController_EMagicLeapControllerHapticPattern HapticPattern                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		MagicLeapController_EMagicLeapControllerHapticIntensity Intensity                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapControllerFunctionLibrary::STATIC_PlayControllerHapticFeedback(InputCore_EControllerHand Hand, MagicLeapController_EMagicLeapControllerHapticPattern HapticPattern, MagicLeapController_EMagicLeapControllerHapticIntensity Intensity)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapController.MagicLeapControllerFunctionLibrary.PlayControllerHapticFeedback"));

	UMagicLeapControllerFunctionLibrary_PlayControllerHapticFeedback_Params params {};
	params.Hand = Hand;
	params.HapticPattern = HapticPattern;
	params.Intensity = Intensity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02E31BE0
//		Name   -> Function MagicLeapController.MagicLeapControllerFunctionLibrary.MaxSupportedMagicLeapControllers
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMagicLeapControllerFunctionLibrary::STATIC_MaxSupportedMagicLeapControllers()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapController.MagicLeapControllerFunctionLibrary.MaxSupportedMagicLeapControllers"));

	UMagicLeapControllerFunctionLibrary_MaxSupportedMagicLeapControllers_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02E3E740
//		Name   -> Function MagicLeapController.MagicLeapControllerFunctionLibrary.IsMLControllerConnected
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FName                                       MotionSource                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapControllerFunctionLibrary::STATIC_IsMLControllerConnected(const struct FName& MotionSource)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapController.MagicLeapControllerFunctionLibrary.IsMLControllerConnected"));

	UMagicLeapControllerFunctionLibrary_IsMLControllerConnected_Params params {};
	params.MotionSource = MotionSource;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02E3E990
//		Name   -> Function MagicLeapController.MagicLeapControllerFunctionLibrary.InvertControllerMapping
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
void UMagicLeapControllerFunctionLibrary::STATIC_InvertControllerMapping()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapController.MagicLeapControllerFunctionLibrary.InvertControllerMapping"));

	UMagicLeapControllerFunctionLibrary_InvertControllerMapping_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02E3E900
//		Name   -> Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetMotionSourceForHand
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		InputCore_EControllerHand                          Hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FName UMagicLeapControllerFunctionLibrary::STATIC_GetMotionSourceForHand(InputCore_EControllerHand Hand)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetMotionSourceForHand"));

	UMagicLeapControllerFunctionLibrary_GetMotionSourceForHand_Params params {};
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02E3E880
//		Name   -> Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetMLControllerType
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		InputCore_EControllerHand                          Hand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		MagicLeapController_EMagicLeapControllerType       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
MagicLeapController_EMagicLeapControllerType UMagicLeapControllerFunctionLibrary::STATIC_GetMLControllerType(InputCore_EControllerHand Hand)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetMLControllerType"));

	UMagicLeapControllerFunctionLibrary_GetMLControllerType_Params params {};
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02E3E7E0
//		Name   -> Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetHandForMotionSource
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       MotionSource                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		InputCore_EControllerHand                          ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
InputCore_EControllerHand UMagicLeapControllerFunctionLibrary::STATIC_GetHandForMotionSource(const struct FName& MotionSource)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetHandForMotionSource"));

	UMagicLeapControllerFunctionLibrary_GetHandForMotionSource_Params params {};
	params.MotionSource = MotionSource;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02E3E740
//		Name   -> Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerType
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FName                                       MotionSource                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		MagicLeapController_EMagicLeapControllerType       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
MagicLeapController_EMagicLeapControllerType UMagicLeapControllerFunctionLibrary::STATIC_GetControllerType(const struct FName& MotionSource)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerType"));

	UMagicLeapControllerFunctionLibrary_GetControllerType_Params params {};
	params.MotionSource = MotionSource;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02E3E710
//		Name   -> Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerTrackingMode
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		MagicLeapController_EMagicLeapControllerTrackingMode ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
MagicLeapController_EMagicLeapControllerTrackingMode UMagicLeapControllerFunctionLibrary::STATIC_GetControllerTrackingMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerTrackingMode"));

	UMagicLeapControllerFunctionLibrary_GetControllerTrackingMode_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02E3E640
//		Name   -> Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerMapping
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		int                                                ControllerIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		InputCore_EControllerHand                          Hand                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapControllerFunctionLibrary::STATIC_GetControllerMapping(int ControllerIndex, InputCore_EControllerHand* Hand)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapController.MagicLeapControllerFunctionLibrary.GetControllerMapping"));

	UMagicLeapControllerFunctionLibrary_GetControllerMapping_Params params {};
	params.ControllerIndex = ControllerIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Hand != nullptr)
		*Hand = params.Hand;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
