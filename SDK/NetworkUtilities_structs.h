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

// Enum NetworkUtilities.ETimerState
enum class NetworkUtilities_ETimerState : uint8_t
{
	ETimerState__Cleared           = 0,
	ETimerState__Started           = 1,
	ETimerState__Paused            = 2,
	ETimerState__ETimerState_MAX   = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct NetworkUtilities.Float_NetQuantize8
// 0x0008
struct FFloat_NetQuantize8
{
	float                                              _value;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_C96R[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct NetworkUtilities.ReplicationTimerData
// 0x0014
struct FReplicationTimerData
{
	float                                              Timestamp;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Duration;                                                  // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFloat_NetQuantize8                         RemainingTimePercent;                                      // 0x0008(0x0008) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	NetworkUtilities_ETimerState                       State;                                                     // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZLO9[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct NetworkUtilities.YawAndPitchRotator_NetQuantize16
// 0x000C
struct FYawAndPitchRotator_NetQuantize16
{
	struct FRotator                                    _value;                                                    // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)

};

// ScriptStruct NetworkUtilities.AssetNetIdRow
// 0x0008 (0x0010 - 0x0008)
struct FAssetNetIdRow : public FTableRowBase
{
	int                                                NetId;                                                     // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8DET[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct NetworkUtilities.SpeedBasedNetSyncedValue
// 0x0038
struct FSpeedBasedNetSyncedValue
{
	unsigned char                                      UnknownData_F49L[0x18];                                    // 0x0000(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _replicatedValue;                                          // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_BGUB[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _replicatedSpeed;                                          // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_MYB4[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _replicatedLastUpdateTimestamp;                            // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_MIPO[0xC];                                     // 0x002C(0x000C) MISSED OFFSET (PADDING)

};

// ScriptStruct NetworkUtilities.YawAndPitchRotator_NetQuantize32
// 0x000C
struct FYawAndPitchRotator_NetQuantize32
{
	struct FRotator                                    _value;                                                    // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
