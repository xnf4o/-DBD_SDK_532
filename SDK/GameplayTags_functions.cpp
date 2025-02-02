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
//		Offset -> 0x050B0460
//		Name   -> Function GameplayTags.BlueprintGameplayTagLibrary.RemoveGameplayTag
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FGameplayTagContainer                       TagContainer                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FGameplayTag                                Tag                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBlueprintGameplayTagLibrary::STATIC_RemoveGameplayTag(struct FGameplayTagContainer* TagContainer, const struct FGameplayTag& Tag)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.RemoveGameplayTag"));

	UBlueprintGameplayTagLibrary_RemoveGameplayTag_Params params {};
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TagContainer != nullptr)
		*TagContainer = params.TagContainer;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x050B0330
//		Name   -> Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagTag
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FGameplayTag                                A                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     B                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBlueprintGameplayTagLibrary::STATIC_NotEqual_TagTag(const struct FGameplayTag& A, const struct FString& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagTag"));

	UBlueprintGameplayTagLibrary_NotEqual_TagTag_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x050B01C0
//		Name   -> Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagContainerTagContainer
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FGameplayTagContainer                       A                                                          (Parm, NativeAccessSpecifierPublic)
//		struct FString                                     B                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBlueprintGameplayTagLibrary::STATIC_NotEqual_TagContainerTagContainer(const struct FGameplayTagContainer& A, const struct FString& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagContainerTagContainer"));

	UBlueprintGameplayTagLibrary_NotEqual_TagContainerTagContainer_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x050B0070
//		Name   -> Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTagContainer
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FGameplayTagContainer                       A                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FGameplayTagContainer                       B                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBlueprintGameplayTagLibrary::STATIC_NotEqual_GameplayTagContainer(const struct FGameplayTagContainer& A, const struct FGameplayTagContainer& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTagContainer"));

	UBlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x050AFF80
//		Name   -> Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTag
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FGameplayTag                                A                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGameplayTag                                B                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBlueprintGameplayTagLibrary::STATIC_NotEqual_GameplayTag(const struct FGameplayTag& A, const struct FGameplayTag& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTag"));

	UBlueprintGameplayTagLibrary_NotEqual_GameplayTag_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x050AFE50
//		Name   -> Function GameplayTags.BlueprintGameplayTagLibrary.MatchesTag
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FGameplayTag                                TagOne                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGameplayTag                                TagTwo                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bExactMatch                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBlueprintGameplayTagLibrary::STATIC_MatchesTag(const struct FGameplayTag& TagOne, const struct FGameplayTag& TagTwo, bool bExactMatch)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.MatchesTag"));

	UBlueprintGameplayTagLibrary_MatchesTag_Params params {};
	params.TagOne = TagOne;
	params.TagTwo = TagTwo;
	params.bExactMatch = bExactMatch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x050AFD00
//		Name   -> Function GameplayTags.BlueprintGameplayTagLibrary.MatchesAnyTags
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FGameplayTag                                TagOne                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGameplayTagContainer                       OtherContainer                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		bool                                               bExactMatch                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBlueprintGameplayTagLibrary::STATIC_MatchesAnyTags(const struct FGameplayTag& TagOne, const struct FGameplayTagContainer& OtherContainer, bool bExactMatch)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.MatchesAnyTags"));

	UBlueprintGameplayTagLibrary_MatchesAnyTags_Params params {};
	params.TagOne = TagOne;
	params.OtherContainer = OtherContainer;
	params.bExactMatch = bExactMatch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x050AFBF0
//		Name   -> Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTagContainer
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FGameplayTagContainer                       value                                                      (Parm, NativeAccessSpecifierPublic)
//		struct FGameplayTagContainer                       ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FGameplayTagContainer UBlueprintGameplayTagLibrary::STATIC_MakeLiteralGameplayTagContainer(const struct FGameplayTagContainer& value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTagContainer"));

	UBlueprintGameplayTagLibrary_MakeLiteralGameplayTagContainer_Params params {};
	params.value = value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x050AFB40
//		Name   -> Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTag
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FGameplayTag                                value                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGameplayTag                                ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FGameplayTag UBlueprintGameplayTagLibrary::STATIC_MakeLiteralGameplayTag(const struct FGameplayTag& value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTag"));

	UBlueprintGameplayTagLibrary_MakeLiteralGameplayTag_Params params {};
	params.value = value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x050AFA10
//		Name   -> Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagQuery
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FGameplayTagQuery                           TagQuery                                                   (Parm, NativeAccessSpecifierPublic)
//		struct FGameplayTagQuery                           ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FGameplayTagQuery UBlueprintGameplayTagLibrary::STATIC_MakeGameplayTagQuery(const struct FGameplayTagQuery& TagQuery)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagQuery"));

	UBlueprintGameplayTagLibrary_MakeGameplayTagQuery_Params params {};
	params.TagQuery = TagQuery;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x050AF940
//		Name   -> Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromTag
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FGameplayTag                                SingleTag                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGameplayTagContainer                       ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FGameplayTagContainer UBlueprintGameplayTagLibrary::STATIC_MakeGameplayTagContainerFromTag(const struct FGameplayTag& SingleTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromTag"));

	UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromTag_Params params {};
	params.SingleTag = SingleTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x050AF870
//		Name   -> Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromArray
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<struct FGameplayTag>                        GameplayTags                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGameplayTagContainer                       ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FGameplayTagContainer UBlueprintGameplayTagLibrary::STATIC_MakeGameplayTagContainerFromArray(TArray<struct FGameplayTag> GameplayTags)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromArray"));

	UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromArray_Params params {};
	params.GameplayTags = GameplayTags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x050AF790
//		Name   -> Function GameplayTags.BlueprintGameplayTagLibrary.IsTagQueryEmpty
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FGameplayTagQuery                           TagQuery                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBlueprintGameplayTagLibrary::STATIC_IsTagQueryEmpty(const struct FGameplayTagQuery& TagQuery)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.IsTagQueryEmpty"));

	UBlueprintGameplayTagLibrary_IsTagQueryEmpty_Params params {};
	params.TagQuery = TagQuery;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x050AF6F0
//		Name   -> Function GameplayTags.BlueprintGameplayTagLibrary.IsGameplayTagValid
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FGameplayTag                                GameplayTag                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBlueprintGameplayTagLibrary::STATIC_IsGameplayTagValid(const struct FGameplayTag& GameplayTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.IsGameplayTagValid"));

	UBlueprintGameplayTagLibrary_IsGameplayTagValid_Params params {};
	params.GameplayTag = GameplayTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x050AF5A0
//		Name   -> Function GameplayTags.BlueprintGameplayTagLibrary.HasTag
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FGameplayTagContainer                       TagContainer                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FGameplayTag                                Tag                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bExactMatch                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBlueprintGameplayTagLibrary::STATIC_HasTag(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTag& Tag, bool bExactMatch)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.HasTag"));

	UBlueprintGameplayTagLibrary_HasTag_Params params {};
	params.TagContainer = TagContainer;
	params.Tag = Tag;
	params.bExactMatch = bExactMatch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x050AF370
//		Name   -> Function GameplayTags.BlueprintGameplayTagLibrary.HasAnyTags
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FGameplayTagContainer                       TagContainer                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FGameplayTagContainer                       OtherContainer                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		bool                                               bExactMatch                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBlueprintGameplayTagLibrary::STATIC_HasAnyTags(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTagContainer& OtherContainer, bool bExactMatch)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.HasAnyTags"));

	UBlueprintGameplayTagLibrary_HasAnyTags_Params params {};
	params.TagContainer = TagContainer;
	params.OtherContainer = OtherContainer;
	params.bExactMatch = bExactMatch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x050AF120
//		Name   -> Function GameplayTags.BlueprintGameplayTagLibrary.HasAllTags
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FGameplayTagContainer                       TagContainer                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FGameplayTagContainer                       OtherContainer                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		bool                                               bExactMatch                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBlueprintGameplayTagLibrary::STATIC_HasAllTags(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTagContainer& OtherContainer, bool bExactMatch)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.HasAllTags"));

	UBlueprintGameplayTagLibrary_HasAllTags_Params params {};
	params.TagContainer = TagContainer;
	params.OtherContainer = OtherContainer;
	params.bExactMatch = bExactMatch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x050AF000
//		Name   -> Function GameplayTags.BlueprintGameplayTagLibrary.HasAllMatchingGameplayTags
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FGameplayTagContainer                       OtherContainer                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBlueprintGameplayTagLibrary::STATIC_HasAllMatchingGameplayTags(const struct FGameplayTagContainer& OtherContainer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.HasAllMatchingGameplayTags"));

	UBlueprintGameplayTagLibrary_HasAllMatchingGameplayTags_Params params {};
	params.OtherContainer = OtherContainer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x050AEE80
//		Name   -> Function GameplayTags.BlueprintGameplayTagLibrary.GetTagName
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FGameplayTag                                GameplayTag                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FName UBlueprintGameplayTagLibrary::STATIC_GetTagName(const struct FGameplayTag& GameplayTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.GetTagName"));

	UBlueprintGameplayTagLibrary_GetTagName_Params params {};
	params.GameplayTag = GameplayTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x050AED00
//		Name   -> Function GameplayTags.BlueprintGameplayTagLibrary.GetNumGameplayTagsInContainer
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FGameplayTagContainer                       TagContainer                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UBlueprintGameplayTagLibrary::STATIC_GetNumGameplayTagsInContainer(const struct FGameplayTagContainer& TagContainer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.GetNumGameplayTagsInContainer"));

	UBlueprintGameplayTagLibrary_GetNumGameplayTagsInContainer_Params params {};
	params.TagContainer = TagContainer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x050AEC00
//		Name   -> Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTagContainer
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FGameplayTagContainer                       TagContainer                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UBlueprintGameplayTagLibrary::STATIC_GetDebugStringFromGameplayTagContainer(const struct FGameplayTagContainer& TagContainer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTagContainer"));

	UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTagContainer_Params params {};
	params.TagContainer = TagContainer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x050AEB20
//		Name   -> Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTag
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FGameplayTag                                GameplayTag                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UBlueprintGameplayTagLibrary::STATIC_GetDebugStringFromGameplayTag(const struct FGameplayTag& GameplayTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTag"));

	UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTag_Params params {};
	params.GameplayTag = GameplayTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x050AE950
//		Name   -> Function GameplayTags.BlueprintGameplayTagLibrary.GetAllActorsOfClassMatchingTagQuery
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UClass*                                      actorClass                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGameplayTagQuery                           GameplayTagQuery                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		TArray<class AActor*>                              OutActors                                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBlueprintGameplayTagLibrary::STATIC_GetAllActorsOfClassMatchingTagQuery(class UObject* WorldContextObject, class UClass* actorClass, const struct FGameplayTagQuery& GameplayTagQuery, TArray<class AActor*>* OutActors)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.GetAllActorsOfClassMatchingTagQuery"));

	UBlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.actorClass = actorClass;
	params.GameplayTagQuery = GameplayTagQuery;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutActors != nullptr)
		*OutActors = params.OutActors;

}


// Function:
//		Offset -> 0x050AE800
//		Name   -> Function GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTagContainer
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FGameplayTagContainer                       A                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FGameplayTagContainer                       B                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBlueprintGameplayTagLibrary::STATIC_EqualEqual_GameplayTagContainer(const struct FGameplayTagContainer& A, const struct FGameplayTagContainer& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTagContainer"));

	UBlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x050AE710
//		Name   -> Function GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTag
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FGameplayTag                                A                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGameplayTag                                B                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBlueprintGameplayTagLibrary::STATIC_EqualEqual_GameplayTag(const struct FGameplayTag& A, const struct FGameplayTag& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTag"));

	UBlueprintGameplayTagLibrary_EqualEqual_GameplayTag_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x050AE610
//		Name   -> Function GameplayTags.BlueprintGameplayTagLibrary.DoesTagAssetInterfaceHaveTag
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FGameplayTag                                Tag                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBlueprintGameplayTagLibrary::STATIC_DoesTagAssetInterfaceHaveTag(const struct FGameplayTag& Tag)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.DoesTagAssetInterfaceHaveTag"));

	UBlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag_Params params {};
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x050AE4B0
//		Name   -> Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchTagQuery
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FGameplayTagContainer                       TagContainer                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FGameplayTagQuery                           TagQuery                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBlueprintGameplayTagLibrary::STATIC_DoesContainerMatchTagQuery(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTagQuery& TagQuery)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchTagQuery"));

	UBlueprintGameplayTagLibrary_DoesContainerMatchTagQuery_Params params {};
	params.TagContainer = TagContainer;
	params.TagQuery = TagQuery;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x050AE390
//		Name   -> Function GameplayTags.BlueprintGameplayTagLibrary.BreakGameplayTagContainer
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FGameplayTagContainer                       GameplayTagContainer                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		TArray<struct FGameplayTag>                        GameplayTags                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBlueprintGameplayTagLibrary::STATIC_BreakGameplayTagContainer(const struct FGameplayTagContainer& GameplayTagContainer, TArray<struct FGameplayTag>* GameplayTags)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.BreakGameplayTagContainer"));

	UBlueprintGameplayTagLibrary_BreakGameplayTagContainer_Params params {};
	params.GameplayTagContainer = GameplayTagContainer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (GameplayTags != nullptr)
		*GameplayTags = params.GameplayTags;

}


// Function:
//		Offset -> 0x050AE260
//		Name   -> Function GameplayTags.BlueprintGameplayTagLibrary.AppendGameplayTagContainers
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FGameplayTagContainer                       InOutTagContainer                                          (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FGameplayTagContainer                       InTagContainer                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UBlueprintGameplayTagLibrary::STATIC_AppendGameplayTagContainers(struct FGameplayTagContainer* InOutTagContainer, const struct FGameplayTagContainer& InTagContainer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.AppendGameplayTagContainers"));

	UBlueprintGameplayTagLibrary_AppendGameplayTagContainers_Params params {};
	params.InTagContainer = InTagContainer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InOutTagContainer != nullptr)
		*InOutTagContainer = params.InOutTagContainer;

}


// Function:
//		Offset -> 0x050AE150
//		Name   -> Function GameplayTags.BlueprintGameplayTagLibrary.AddGameplayTag
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FGameplayTagContainer                       TagContainer                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FGameplayTag                                Tag                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBlueprintGameplayTagLibrary::STATIC_AddGameplayTag(struct FGameplayTagContainer* TagContainer, const struct FGameplayTag& Tag)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.AddGameplayTag"));

	UBlueprintGameplayTagLibrary_AddGameplayTag_Params params {};
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TagContainer != nullptr)
		*TagContainer = params.TagContainer;

}


// Function:
//		Offset -> 0x050AF4F0
//		Name   -> Function GameplayTags.GameplayTagAssetInterface.HasMatchingGameplayTag
//		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FGameplayTag                                TagToCheck                                                 (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameplayTagAssetInterface::HasMatchingGameplayTag(const struct FGameplayTag& TagToCheck)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.GameplayTagAssetInterface.HasMatchingGameplayTag"));

	UGameplayTagAssetInterface_HasMatchingGameplayTag_Params params {};
	params.TagToCheck = TagToCheck;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x050AF2A0
//		Name   -> Function GameplayTags.GameplayTagAssetInterface.HasAnyMatchingGameplayTags
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FGameplayTagContainer                       TagContainer                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameplayTagAssetInterface::HasAnyMatchingGameplayTags(const struct FGameplayTagContainer& TagContainer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.GameplayTagAssetInterface.HasAnyMatchingGameplayTags"));

	UGameplayTagAssetInterface_HasAnyMatchingGameplayTags_Params params {};
	params.TagContainer = TagContainer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x050AEF30
//		Name   -> Function GameplayTags.GameplayTagAssetInterface.HasAllMatchingGameplayTags
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FGameplayTagContainer                       TagContainer                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameplayTagAssetInterface::HasAllMatchingGameplayTags(const struct FGameplayTagContainer& TagContainer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.GameplayTagAssetInterface.HasAllMatchingGameplayTags"));

	UGameplayTagAssetInterface_HasAllMatchingGameplayTags_Params params {};
	params.TagContainer = TagContainer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x050AEDC0
//		Name   -> Function GameplayTags.GameplayTagAssetInterface.GetOwnedGameplayTags
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FGameplayTagContainer                       TagContainer                                               (Parm, OutParm, NativeAccessSpecifierPublic)
void UGameplayTagAssetInterface::GetOwnedGameplayTags(struct FGameplayTagContainer* TagContainer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.GameplayTagAssetInterface.GetOwnedGameplayTags"));

	UGameplayTagAssetInterface_GetOwnedGameplayTags_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TagContainer != nullptr)
		*TagContainer = params.TagContainer;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
