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

// Class GameplayTags.BlueprintGameplayTagLibrary
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UBlueprintGameplayTagLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class GameplayTags.BlueprintGameplayTagLibrary"));
		return ptr;
	}



	bool STATIC_RemoveGameplayTag(struct FGameplayTagContainer* TagContainer, const struct FGameplayTag& Tag);
	bool STATIC_NotEqual_TagTag(const struct FGameplayTag& A, const struct FString& B);
	bool STATIC_NotEqual_TagContainerTagContainer(const struct FGameplayTagContainer& A, const struct FString& B);
	bool STATIC_NotEqual_GameplayTagContainer(const struct FGameplayTagContainer& A, const struct FGameplayTagContainer& B);
	bool STATIC_NotEqual_GameplayTag(const struct FGameplayTag& A, const struct FGameplayTag& B);
	bool STATIC_MatchesTag(const struct FGameplayTag& TagOne, const struct FGameplayTag& TagTwo, bool bExactMatch);
	bool STATIC_MatchesAnyTags(const struct FGameplayTag& TagOne, const struct FGameplayTagContainer& OtherContainer, bool bExactMatch);
	struct FGameplayTagContainer STATIC_MakeLiteralGameplayTagContainer(const struct FGameplayTagContainer& value);
	struct FGameplayTag STATIC_MakeLiteralGameplayTag(const struct FGameplayTag& value);
	struct FGameplayTagQuery STATIC_MakeGameplayTagQuery(const struct FGameplayTagQuery& TagQuery);
	struct FGameplayTagContainer STATIC_MakeGameplayTagContainerFromTag(const struct FGameplayTag& SingleTag);
	struct FGameplayTagContainer STATIC_MakeGameplayTagContainerFromArray(TArray<struct FGameplayTag> GameplayTags);
	bool STATIC_IsTagQueryEmpty(const struct FGameplayTagQuery& TagQuery);
	bool STATIC_IsGameplayTagValid(const struct FGameplayTag& GameplayTag);
	bool STATIC_HasTag(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTag& Tag, bool bExactMatch);
	bool STATIC_HasAnyTags(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTagContainer& OtherContainer, bool bExactMatch);
	bool STATIC_HasAllTags(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTagContainer& OtherContainer, bool bExactMatch);
	bool STATIC_HasAllMatchingGameplayTags(const struct FGameplayTagContainer& OtherContainer);
	struct FName STATIC_GetTagName(const struct FGameplayTag& GameplayTag);
	int STATIC_GetNumGameplayTagsInContainer(const struct FGameplayTagContainer& TagContainer);
	struct FString STATIC_GetDebugStringFromGameplayTagContainer(const struct FGameplayTagContainer& TagContainer);
	struct FString STATIC_GetDebugStringFromGameplayTag(const struct FGameplayTag& GameplayTag);
	void STATIC_GetAllActorsOfClassMatchingTagQuery(class UObject* WorldContextObject, class UClass* actorClass, const struct FGameplayTagQuery& GameplayTagQuery, TArray<class AActor*>* OutActors);
	bool STATIC_EqualEqual_GameplayTagContainer(const struct FGameplayTagContainer& A, const struct FGameplayTagContainer& B);
	bool STATIC_EqualEqual_GameplayTag(const struct FGameplayTag& A, const struct FGameplayTag& B);
	bool STATIC_DoesTagAssetInterfaceHaveTag(const struct FGameplayTag& Tag);
	bool STATIC_DoesContainerMatchTagQuery(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTagQuery& TagQuery);
	void STATIC_BreakGameplayTagContainer(const struct FGameplayTagContainer& GameplayTagContainer, TArray<struct FGameplayTag>* GameplayTags);
	void STATIC_AppendGameplayTagContainers(struct FGameplayTagContainer* InOutTagContainer, const struct FGameplayTagContainer& InTagContainer);
	void STATIC_AddGameplayTag(struct FGameplayTagContainer* TagContainer, const struct FGameplayTag& Tag);
};

// Class GameplayTags.GameplayTagAssetInterface
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UGameplayTagAssetInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class GameplayTags.GameplayTagAssetInterface"));
		return ptr;
	}



	bool HasMatchingGameplayTag(const struct FGameplayTag& TagToCheck);
	bool HasAnyMatchingGameplayTags(const struct FGameplayTagContainer& TagContainer);
	bool HasAllMatchingGameplayTags(const struct FGameplayTagContainer& TagContainer);
	void GetOwnedGameplayTags(struct FGameplayTagContainer* TagContainer);
};

// Class GameplayTags.EditableGameplayTagQuery
// 0x0070 (FullSize[0x00A0] - InheritedSize[0x0030])
class UEditableGameplayTagQuery : public UObject
{
public:
	struct FString                                     UserDescription;                                           // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Y6GS[0x10];                                    // 0x0040(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UEditableGameplayTagQueryExpression*         RootExpression;                                            // 0x0050(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagQuery                           TagQueryExportText_Helper;                                 // 0x0058(0x0048) (NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class GameplayTags.EditableGameplayTagQuery"));
		return ptr;
	}



};

// Class GameplayTags.EditableGameplayTagQueryExpression
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UEditableGameplayTagQueryExpression : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class GameplayTags.EditableGameplayTagQueryExpression"));
		return ptr;
	}



};

// Class GameplayTags.EditableGameplayTagQueryExpression_AnyTagsMatch
// 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
class UEditableGameplayTagQueryExpression_AnyTagsMatch : public UEditableGameplayTagQueryExpression
{
public:
	struct FGameplayTagContainer                       Tags;                                                      // 0x0030(0x0020) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class GameplayTags.EditableGameplayTagQueryExpression_AnyTagsMatch"));
		return ptr;
	}



};

// Class GameplayTags.EditableGameplayTagQueryExpression_AllTagsMatch
// 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
class UEditableGameplayTagQueryExpression_AllTagsMatch : public UEditableGameplayTagQueryExpression
{
public:
	struct FGameplayTagContainer                       Tags;                                                      // 0x0030(0x0020) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class GameplayTags.EditableGameplayTagQueryExpression_AllTagsMatch"));
		return ptr;
	}



};

// Class GameplayTags.EditableGameplayTagQueryExpression_NoTagsMatch
// 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
class UEditableGameplayTagQueryExpression_NoTagsMatch : public UEditableGameplayTagQueryExpression
{
public:
	struct FGameplayTagContainer                       Tags;                                                      // 0x0030(0x0020) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class GameplayTags.EditableGameplayTagQueryExpression_NoTagsMatch"));
		return ptr;
	}



};

// Class GameplayTags.EditableGameplayTagQueryExpression_AnyExprMatch
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UEditableGameplayTagQueryExpression_AnyExprMatch : public UEditableGameplayTagQueryExpression
{
public:
	TArray<class UEditableGameplayTagQueryExpression*> Expressions;                                               // 0x0030(0x0010) (Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class GameplayTags.EditableGameplayTagQueryExpression_AnyExprMatch"));
		return ptr;
	}



};

// Class GameplayTags.EditableGameplayTagQueryExpression_AllExprMatch
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UEditableGameplayTagQueryExpression_AllExprMatch : public UEditableGameplayTagQueryExpression
{
public:
	TArray<class UEditableGameplayTagQueryExpression*> Expressions;                                               // 0x0030(0x0010) (Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class GameplayTags.EditableGameplayTagQueryExpression_AllExprMatch"));
		return ptr;
	}



};

// Class GameplayTags.EditableGameplayTagQueryExpression_NoExprMatch
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UEditableGameplayTagQueryExpression_NoExprMatch : public UEditableGameplayTagQueryExpression
{
public:
	TArray<class UEditableGameplayTagQueryExpression*> Expressions;                                               // 0x0030(0x0010) (Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class GameplayTags.EditableGameplayTagQueryExpression_NoExprMatch"));
		return ptr;
	}



};

// Class GameplayTags.GameplayTagsManager
// 0x01E8 (FullSize[0x0218] - InheritedSize[0x0030])
class UGameplayTagsManager : public UObject
{
public:
	unsigned char                                      UnknownData_541Y[0x98];                                    // 0x0030(0x0098) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FGameplayTagSource>                  TagSources;                                                // 0x00C8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_0D8B[0xE0];                                    // 0x00D8(0x00E0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UDataTable*>                          GameplayTagTables;                                         // 0x01B8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_W7HQ[0x50];                                    // 0x01C8(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class GameplayTags.GameplayTagsManager"));
		return ptr;
	}



};

// Class GameplayTags.GameplayTagsList
// 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
class UGameplayTagsList : public UObject
{
public:
	struct FString                                     ConfigFileName;                                            // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGameplayTagTableRow>                GameplayTagList;                                           // 0x0040(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class GameplayTags.GameplayTagsList"));
		return ptr;
	}



};

// Class GameplayTags.RestrictedGameplayTagsList
// 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
class URestrictedGameplayTagsList : public UObject
{
public:
	struct FString                                     ConfigFileName;                                            // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRestrictedGameplayTagTableRow>      RestrictedGameplayTagList;                                 // 0x0040(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class GameplayTags.RestrictedGameplayTagsList"));
		return ptr;
	}



};

// Class GameplayTags.GameplayTagsSettings
// 0x0070 (FullSize[0x00C0] - InheritedSize[0x0050])
class UGameplayTagsSettings : public UGameplayTagsList
{
public:
	bool                                               ImportTagsFromConfig;                                      // 0x0050(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               WarnOnInvalidTags;                                         // 0x0051(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               FastReplication;                                           // 0x0052(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BL0I[0x5];                                     // 0x0053(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     InvalidTagCharacters;                                      // 0x0058(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGameplayTagCategoryRemap>           CategoryRemapping;                                         // 0x0068(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSoftObjectPath>                     GameplayTagTableList;                                      // 0x0078(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGameplayTagRedirect>                GameplayTagRedirects;                                      // 0x0088(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FName>                               CommonlyReplicatedTags;                                    // 0x0098(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumBitsForContainerSize;                                   // 0x00A8(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NetIndexFirstBitSegment;                                   // 0x00AC(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRestrictedConfigInfo>               RestrictedConfigFiles;                                     // 0x00B0(0x0010) (Edit, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class GameplayTags.GameplayTagsSettings"));
		return ptr;
	}



};

// Class GameplayTags.GameplayTagsDeveloperSettings
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UGameplayTagsDeveloperSettings : public UObject
{
public:
	struct FString                                     DeveloperConfigName;                                       // 0x0030(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class GameplayTags.GameplayTagsDeveloperSettings"));
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
