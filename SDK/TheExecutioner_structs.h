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

// Enum TheExecutioner.EProtagonist
enum class TheExecutioner_EProtagonist : uint8_t
{
	EProtagonist__Instigator       = 0,
	EProtagonist__Target           = 1,
	EProtagonist__EProtagonist_MAX = 2,

};

// Enum TheExecutioner.ETrailPointRefreshReason
enum class TheExecutioner_ETrailPointRefreshReason : uint8_t
{
	ETrailPointRefreshReason__FrontNeighbourAdded = 0,
	ETrailPointRefreshReason__BackNeighbourAdded = 1,
	ETrailPointRefreshReason__BackNeighbourRemoved = 2,
	ETrailPointRefreshReason__FrontNeighbourRemoved = 3,
	ETrailPointRefreshReason__None = 4,
	ETrailPointRefreshReason__ETrailPointRefreshReason_MAX = 5,

};

// Enum TheExecutioner.ETrailType
enum class TheExecutioner_ETrailType : uint8_t
{
	ETrailType__NormalTrail        = 0,
	ETrailType__RestrictionTrail   = 1,
	ETrailType__None               = 2,
	ETrailType__ETrailType_MAX     = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct TheExecutioner.AgonyDisplayFxEvent
// 0x0010
struct FAgonyDisplayFxEvent
{
	struct FGameplayTag                                GameEvent;                                                 // 0x0000(0x000C) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TheExecutioner_EProtagonist                        Protagonist;                                               // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TTGA[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct TheExecutioner.TormentTrailPointInfo
// 0x0060
struct FTormentTrailPointInfo
{
	unsigned char                                      UnknownData_QVWI[0x60];                                    // 0x0000(0x0060) MISSED OFFSET (PADDING)

};

// ScriptStruct TheExecutioner.SpawnedAttackPoint
// 0x0010
struct FSpawnedAttackPoint
{
	class ABaseTormentTrailPoint*                      AttackTrailPoint;                                          // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RD1Y[0x8];                                     // 0x0008(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct TheExecutioner.ReplicatedTrailItem
// 0x0034 (0x0040 - 0x000C)
struct FReplicatedTrailItem : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData_U4K1[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ATormentTrailPoint*                          TrailPoint;                                                // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      OrderInTrail;                                              // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FX92[0x3];                                     // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector_NetQuantize10                       PointRelativeLocation;                                     // 0x001C(0x000C) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    PointRotation;                                             // 0x0028(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3FNM[0xC];                                     // 0x0034(0x000C) MISSED OFFSET (PADDING)

};

// ScriptStruct TheExecutioner.ReplicatedTrailPointList
// 0x0018 (0x0120 - 0x0108)
struct FReplicatedTrailPointList : public FFastArraySerializer
{
	TArray<struct FReplicatedTrailItem>                Items;                                                     // 0x0108(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ATormentTrailController*                     TormentTrailController;                                    // 0x0118(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct TheExecutioner.SpawnedTormentTrailPoint
// 0x0010
struct FSpawnedTormentTrailPoint
{
	class ATormentTrailPoint*                          TrailPoint;                                                // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_A226[0x8];                                     // 0x0008(0x0008) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
