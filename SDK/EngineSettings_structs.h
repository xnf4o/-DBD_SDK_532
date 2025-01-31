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
// Enums
//---------------------------------------------------------------------------

// Enum EngineSettings.ESubLevelStripMode
enum class EngineSettings_ESubLevelStripMode : uint8_t
{
	ESubLevelStripMode__ExactClass = 0,
	ESubLevelStripMode__IsChildOf  = 1,
	ESubLevelStripMode__ESubLevelStripMode_MAX = 2,

};

// Enum EngineSettings.EFourPlayerSplitScreenType
enum class EngineSettings_EFourPlayerSplitScreenType : uint8_t
{
	EFourPlayerSplitScreenType__Grid = 0,
	EFourPlayerSplitScreenType__Vertical = 1,
	EFourPlayerSplitScreenType__Horizontal = 2,
	EFourPlayerSplitScreenType__EFourPlayerSplitScreenType_MAX = 3,

};

// Enum EngineSettings.EThreePlayerSplitScreenType
enum class EngineSettings_EThreePlayerSplitScreenType : uint8_t
{
	EThreePlayerSplitScreenType__FavorTop = 0,
	EThreePlayerSplitScreenType__FavorBottom = 1,
	EThreePlayerSplitScreenType__Vertical = 2,
	EThreePlayerSplitScreenType__Horizontal = 3,
	EThreePlayerSplitScreenType__EThreePlayerSplitScreenType_MAX = 4,

};

// Enum EngineSettings.ETwoPlayerSplitScreenType
enum class EngineSettings_ETwoPlayerSplitScreenType : uint8_t
{
	ETwoPlayerSplitScreenType__Horizontal = 0,
	ETwoPlayerSplitScreenType__Vertical = 1,
	ETwoPlayerSplitScreenType__ETwoPlayerSplitScreenType_MAX = 2,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct EngineSettings.AutoCompleteCommand
// 0x0028
struct FAutoCompleteCommand
{
	struct FString                                     Command;                                                   // 0x0000(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Desc;                                                      // 0x0010(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2074[0x8];                                     // 0x0020(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct EngineSettings.GameModeName
// 0x0030
struct FGameModeName
{
	struct FString                                     Name;                                                      // 0x0000(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftClassPath                              gameMode;                                                  // 0x0010(0x0020) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EngineSettings.PathPak
// 0x0018
struct FPathPak
{
	struct FString                                     Path;                                                      // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PakId;                                                     // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               BringDependencies;                                         // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_T3ZN[0x3];                                     // 0x0015(0x0003) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
