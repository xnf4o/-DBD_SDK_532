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
//		Name   -> DelegateFunction MagicLeapIdentity.MagicLeapIdentity.RequestIdentityAttributeValueDelegate__DelegateSignature
//		Flags  -> (Public, Delegate, HasOutParms)
// Parameters:
//		MagicLeapIdentity_EMagicLeapIdentityError          ResultCode                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FMagicLeapIdentityAttribute>         AttributeValue                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMagicLeapIdentity::RequestIdentityAttributeValueDelegate__DelegateSignature(MagicLeapIdentity_EMagicLeapIdentityError ResultCode, TArray<struct FMagicLeapIdentityAttribute> AttributeValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction MagicLeapIdentity.MagicLeapIdentity.RequestIdentityAttributeValueDelegate__DelegateSignature"));

	UMagicLeapIdentity_RequestIdentityAttributeValueDelegate__DelegateSignature_Params params {};
	params.ResultCode = ResultCode;
	params.AttributeValue = AttributeValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02E4E0F0
//		Name   -> Function MagicLeapIdentity.MagicLeapIdentity.RequestAttributeValueAsync
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<MagicLeapIdentity_EMagicLeapIdentityKey>    RequestedAttributeList                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FScriptDelegate                             ResultDelegate                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		MagicLeapIdentity_EMagicLeapIdentityError          ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
MagicLeapIdentity_EMagicLeapIdentityError UMagicLeapIdentity::RequestAttributeValueAsync(TArray<MagicLeapIdentity_EMagicLeapIdentityKey> RequestedAttributeList, const struct FScriptDelegate& ResultDelegate)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapIdentity.MagicLeapIdentity.RequestAttributeValueAsync"));

	UMagicLeapIdentity_RequestAttributeValueAsync_Params params {};
	params.RequestedAttributeList = RequestedAttributeList;
	params.ResultDelegate = ResultDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02E4DFA0
//		Name   -> Function MagicLeapIdentity.MagicLeapIdentity.RequestAttributeValue
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<MagicLeapIdentity_EMagicLeapIdentityKey>    RequestedAttributeList                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FMagicLeapIdentityAttribute>         RequestedAttributeValues                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		MagicLeapIdentity_EMagicLeapIdentityError          ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
MagicLeapIdentity_EMagicLeapIdentityError UMagicLeapIdentity::RequestAttributeValue(TArray<MagicLeapIdentity_EMagicLeapIdentityKey> RequestedAttributeList, TArray<struct FMagicLeapIdentityAttribute>* RequestedAttributeValues)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapIdentity.MagicLeapIdentity.RequestAttributeValue"));

	UMagicLeapIdentity_RequestAttributeValue_Params params {};
	params.RequestedAttributeList = RequestedAttributeList;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RequestedAttributeValues != nullptr)
		*RequestedAttributeValues = params.RequestedAttributeValues;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> DelegateFunction MagicLeapIdentity.MagicLeapIdentity.ModifyIdentityAttributeValueDelegate__DelegateSignature
//		Flags  -> (Public, Delegate, HasOutParms)
// Parameters:
//		MagicLeapIdentity_EMagicLeapIdentityError          ResultCode                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<MagicLeapIdentity_EMagicLeapIdentityKey>    AttributesUpdatedSuccessfully                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMagicLeapIdentity::ModifyIdentityAttributeValueDelegate__DelegateSignature(MagicLeapIdentity_EMagicLeapIdentityError ResultCode, TArray<MagicLeapIdentity_EMagicLeapIdentityKey> AttributesUpdatedSuccessfully)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction MagicLeapIdentity.MagicLeapIdentity.ModifyIdentityAttributeValueDelegate__DelegateSignature"));

	UMagicLeapIdentity_ModifyIdentityAttributeValueDelegate__DelegateSignature_Params params {};
	params.ResultCode = ResultCode;
	params.AttributesUpdatedSuccessfully = AttributesUpdatedSuccessfully;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02E4DEE0
//		Name   -> Function MagicLeapIdentity.MagicLeapIdentity.GetAllAvailableAttributesAsync
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             ResultDelegate                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UMagicLeapIdentity::GetAllAvailableAttributesAsync(const struct FScriptDelegate& ResultDelegate)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapIdentity.MagicLeapIdentity.GetAllAvailableAttributesAsync"));

	UMagicLeapIdentity_GetAllAvailableAttributesAsync_Params params {};
	params.ResultDelegate = ResultDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02E4DE20
//		Name   -> Function MagicLeapIdentity.MagicLeapIdentity.GetAllAvailableAttributes
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<MagicLeapIdentity_EMagicLeapIdentityKey>    AvailableAttributes                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		MagicLeapIdentity_EMagicLeapIdentityError          ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
MagicLeapIdentity_EMagicLeapIdentityError UMagicLeapIdentity::GetAllAvailableAttributes(TArray<MagicLeapIdentity_EMagicLeapIdentityKey>* AvailableAttributes)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MagicLeapIdentity.MagicLeapIdentity.GetAllAvailableAttributes"));

	UMagicLeapIdentity_GetAllAvailableAttributes_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AvailableAttributes != nullptr)
		*AvailableAttributes = params.AvailableAttributes;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> DelegateFunction MagicLeapIdentity.MagicLeapIdentity.AvailableIdentityAttributesDelegate__DelegateSignature
//		Flags  -> (Public, Delegate, HasOutParms)
// Parameters:
//		MagicLeapIdentity_EMagicLeapIdentityError          ResultCode                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<MagicLeapIdentity_EMagicLeapIdentityKey>    AvailableAttributes                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMagicLeapIdentity::AvailableIdentityAttributesDelegate__DelegateSignature(MagicLeapIdentity_EMagicLeapIdentityError ResultCode, TArray<MagicLeapIdentity_EMagicLeapIdentityKey> AvailableAttributes)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction MagicLeapIdentity.MagicLeapIdentity.AvailableIdentityAttributesDelegate__DelegateSignature"));

	UMagicLeapIdentity_AvailableIdentityAttributesDelegate__DelegateSignature_Params params {};
	params.ResultCode = ResultCode;
	params.AvailableAttributes = AvailableAttributes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
