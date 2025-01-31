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

// Enum Niagara.ENiagaraSystemSpawnSectionEndBehavior
enum class Niagara_ENiagaraSystemSpawnSectionEndBehavior : uint8_t
{
	ENiagaraSystemSpawnSectionEndBehavior__SetSystemInactive = 0,
	ENiagaraSystemSpawnSectionEndBehavior__Deactivate = 1,
	ENiagaraSystemSpawnSectionEndBehavior__None = 2,
	ENiagaraSystemSpawnSectionEndBehavior__ENiagaraSystemSpawnSectionEndBehavior_MAX = 3,

};

// Enum Niagara.ENiagaraSystemSpawnSectionEvaluateBehavior
enum class Niagara_ENiagaraSystemSpawnSectionEvaluateBehavior : uint8_t
{
	ENiagaraSystemSpawnSectionEvaluateBehavior__ActivateIfInactive = 0,
	ENiagaraSystemSpawnSectionEvaluateBehavior__None = 1,
	ENiagaraSystemSpawnSectionEvaluateBehavior__ENiagaraSystemSpawnSectionEvaluateBehavior_MAX = 2,

};

// Enum Niagara.ENiagaraSystemSpawnSectionStartBehavior
enum class Niagara_ENiagaraSystemSpawnSectionStartBehavior : uint8_t
{
	ENiagaraSystemSpawnSectionStartBehavior__Activate = 0,
	ENiagaraSystemSpawnSectionStartBehavior__ENiagaraSystemSpawnSectionStartBehavior_MAX = 1,

};

// Enum Niagara.ENiagaraCollisionMode
enum class Niagara_ENiagaraCollisionMode : uint8_t
{
	ENiagaraCollisionMode__None    = 0,
	ENiagaraCollisionMode__SceneGeometry = 1,
	ENiagaraCollisionMode__DepthBuffer = 2,
	ENiagaraCollisionMode__DistanceField = 3,
	ENiagaraCollisionMode__ENiagaraCollisionMode_MAX = 4,

};

// Enum Niagara.ENiagaraLegacyTrailWidthMode
enum class Niagara_ENiagaraLegacyTrailWidthMode : uint8_t
{
	ENiagaraLegacyTrailWidthMode__FromCentre = 0,
	ENiagaraLegacyTrailWidthMode__FromFirst = 1,
	ENiagaraLegacyTrailWidthMode__FromSecond = 2,
	ENiagaraLegacyTrailWidthMode__ENiagaraLegacyTrailWidthMode_MAX = 3,

};

// Enum Niagara.ENiagaraIterationSource
enum class Niagara_ENiagaraIterationSource : uint8_t
{
	ENiagaraIterationSource__Particles = 0,
	ENiagaraIterationSource__DataInterface = 1,
	ENiagaraIterationSource__ENiagaraIterationSource_MAX = 2,

};

// Enum Niagara.ENiagaraScriptGroup
enum class Niagara_ENiagaraScriptGroup : uint8_t
{
	ENiagaraScriptGroup__Particle  = 0,
	ENiagaraScriptGroup__Emitter   = 1,
	ENiagaraScriptGroup__System    = 2,
	ENiagaraScriptGroup__Max       = 3,
	ENiagaraScriptGroup__ENiagaraScriptGroup_MAX = 4,

};

// Enum Niagara.ENiagaraScriptUsage
enum class Niagara_ENiagaraScriptUsage : uint8_t
{
	ENiagaraScriptUsage__Function  = 0,
	ENiagaraScriptUsage__Module    = 1,
	ENiagaraScriptUsage__DynamicInput = 2,
	ENiagaraScriptUsage__ParticleSpawnScript = 3,
	ENiagaraScriptUsage__ParticleSpawnScriptInterpolated = 4,
	ENiagaraScriptUsage__ParticleUpdateScript = 5,
	ENiagaraScriptUsage__ParticleEventScript = 6,
	ENiagaraScriptUsage__ParticleSimulationStageScript = 7,
	ENiagaraScriptUsage__ParticleGPUComputeScript = 8,
	ENiagaraScriptUsage__EmitterSpawnScript = 9,
	ENiagaraScriptUsage__EmitterUpdateScript = 10,
	ENiagaraScriptUsage__SystemSpawnScript = 11,
	ENiagaraScriptUsage__SystemUpdateScript = 12,
	ENiagaraScriptUsage__ENiagaraScriptUsage_MAX = 13,

};

// Enum Niagara.ENiagaraScriptCompileStatus
enum class Niagara_ENiagaraScriptCompileStatus : uint8_t
{
	ENiagaraScriptCompileStatus__NCS_Unknown = 0,
	ENiagaraScriptCompileStatus__NCS_Dirty = 1,
	ENiagaraScriptCompileStatus__NCS_Error = 2,
	ENiagaraScriptCompileStatus__NCS_UpToDate = 3,
	ENiagaraScriptCompileStatus__NCS_BeingCreated = 4,
	ENiagaraScriptCompileStatus__NCS_UpToDateWithWarnings = 5,
	ENiagaraScriptCompileStatus__NCS_ComputeUpToDateWithWarnings = 6,
	ENiagaraScriptCompileStatus__NCS_MAX = 7,

};

// Enum Niagara.ENiagaraInputNodeUsage
enum class Niagara_ENiagaraInputNodeUsage : uint8_t
{
	ENiagaraInputNodeUsage__Undefined = 0,
	ENiagaraInputNodeUsage__Parameter = 1,
	ENiagaraInputNodeUsage__Attribute = 2,
	ENiagaraInputNodeUsage__SystemConstant = 3,
	ENiagaraInputNodeUsage__TranslatorConstant = 4,
	ENiagaraInputNodeUsage__RapidIterationParameter = 5,
	ENiagaraInputNodeUsage__ENiagaraInputNodeUsage_MAX = 6,

};

// Enum Niagara.ENiagaraDataSetType
enum class Niagara_ENiagaraDataSetType : uint8_t
{
	ENiagaraDataSetType__ParticleData = 0,
	ENiagaraDataSetType__Shared    = 1,
	ENiagaraDataSetType__Event     = 2,
	ENiagaraDataSetType__ENiagaraDataSetType_MAX = 3,

};

// Enum Niagara.ENiagaraAgeUpdateMode
enum class Niagara_ENiagaraAgeUpdateMode : uint8_t
{
	ENiagaraAgeUpdateMode__TickDeltaTime = 0,
	ENiagaraAgeUpdateMode__DesiredAge = 1,
	ENiagaraAgeUpdateMode__DesiredAgeNoSeek = 2,
	ENiagaraAgeUpdateMode__ENiagaraAgeUpdateMode_MAX = 3,

};

// Enum Niagara.ENiagaraSimTarget
enum class Niagara_ENiagaraSimTarget : uint8_t
{
	ENiagaraSimTarget__CPUSim      = 0,
	ENiagaraSimTarget__GPUComputeSim = 1,
	ENiagaraSimTarget__ENiagaraSimTarget_MAX = 2,

};

// Enum Niagara.ENiagaraDefaultMode
enum class Niagara_ENiagaraDefaultMode : uint8_t
{
	ENiagaraDefaultMode__Value     = 0,
	ENiagaraDefaultMode__Binding   = 1,
	ENiagaraDefaultMode__Custom    = 2,
	ENiagaraDefaultMode__ENiagaraDefaultMode_MAX = 3,

};

// Enum Niagara.ENiagaraTickBehavior
enum class Niagara_ENiagaraTickBehavior : uint8_t
{
	ENiagaraTickBehavior__UsePrereqs = 0,
	ENiagaraTickBehavior__UseComponentTickGroup = 1,
	ENiagaraTickBehavior__ForceTickFirst = 2,
	ENiagaraTickBehavior__ForceTickLast = 3,
	ENiagaraTickBehavior__ENiagaraTickBehavior_MAX = 4,

};

// Enum Niagara.ENCPoolMethod
enum class Niagara_ENCPoolMethod : uint8_t
{
	ENCPoolMethod__None            = 0,
	ENCPoolMethod__AutoRelease     = 1,
	ENCPoolMethod__ManualRelease   = 2,
	ENCPoolMethod__ManualRelease_OnComplete = 3,
	ENCPoolMethod__FreeInPool      = 4,
	ENCPoolMethod__ENCPoolMethod_MAX = 5,

};

// Enum Niagara.ENDISkeletalMesh_SkinningMode
enum class Niagara_ENDISkeletalMesh_SkinningMode : uint8_t
{
	ENDISkeletalMesh_SkinningMode__Invalid = 0,
	ENDISkeletalMesh_SkinningMode__None = 1,
	ENDISkeletalMesh_SkinningMode__SkinOnTheFly = 2,
	ENDISkeletalMesh_SkinningMode__PreSkin = 3,
	ENDISkeletalMesh_SkinningMode__ENDISkeletalMesh_MAX = 4,

};

// Enum Niagara.ENiagaraScalabilityUpdateFrequency
enum class Niagara_ENiagaraScalabilityUpdateFrequency : uint8_t
{
	ENiagaraScalabilityUpdateFrequency__SpawnOnly = 0,
	ENiagaraScalabilityUpdateFrequency__Low = 1,
	ENiagaraScalabilityUpdateFrequency__Medium = 2,
	ENiagaraScalabilityUpdateFrequency__High = 3,
	ENiagaraScalabilityUpdateFrequency__Continuous = 4,
	ENiagaraScalabilityUpdateFrequency__ENiagaraScalabilityUpdateFrequency_MAX = 5,

};

// Enum Niagara.ENiagaraCullReaction
enum class Niagara_ENiagaraCullReaction : uint8_t
{
	ENiagaraCullReaction__Deactivate = 0,
	ENiagaraCullReaction__DeactivateImmediate = 1,
	ENiagaraCullReaction__DeactivateResume = 2,
	ENiagaraCullReaction__DeactivateImmediateResume = 3,
	ENiagaraCullReaction__ENiagaraCullReaction_MAX = 4,

};

// Enum Niagara.EParticleAllocationMode
enum class Niagara_EParticleAllocationMode : uint8_t
{
	EParticleAllocationMode__AutomaticEstimate = 0,
	EParticleAllocationMode__ManualEstimate = 1,
	EParticleAllocationMode__EParticleAllocationMode_MAX = 2,

};

// Enum Niagara.EScriptExecutionMode
enum class Niagara_EScriptExecutionMode : uint8_t
{
	EScriptExecutionMode__EveryParticle = 0,
	EScriptExecutionMode__SpawnedParticles = 1,
	EScriptExecutionMode__SingleParticle = 2,
	EScriptExecutionMode__EScriptExecutionMode_MAX = 3,

};

// Enum Niagara.ENiagaraSortMode
enum class Niagara_ENiagaraSortMode : uint8_t
{
	ENiagaraSortMode__None         = 0,
	ENiagaraSortMode__ViewDepth    = 1,
	ENiagaraSortMode__ViewDistance = 2,
	ENiagaraSortMode__CustomAscending = 3,
	ENiagaraSortMode__CustomDecending = 4,
	ENiagaraSortMode__ENiagaraSortMode_MAX = 5,

};

// Enum Niagara.ENiagaraMeshLockedAxisSpace
enum class Niagara_ENiagaraMeshLockedAxisSpace : uint8_t
{
	ENiagaraMeshLockedAxisSpace__Simulation = 0,
	ENiagaraMeshLockedAxisSpace__World = 1,
	ENiagaraMeshLockedAxisSpace__Local = 2,
	ENiagaraMeshLockedAxisSpace__ENiagaraMeshLockedAxisSpace_MAX = 3,

};

// Enum Niagara.ENiagaraMeshFacingMode
enum class Niagara_ENiagaraMeshFacingMode : uint8_t
{
	ENiagaraMeshFacingMode__Default = 0,
	ENiagaraMeshFacingMode__Velocity = 1,
	ENiagaraMeshFacingMode__CameraPosition = 2,
	ENiagaraMeshFacingMode__CameraPlane = 3,
	ENiagaraMeshFacingMode__ENiagaraMeshFacingMode_MAX = 4,

};

// Enum Niagara.ENiagaraPlatformSetState
enum class Niagara_ENiagaraPlatformSetState : uint8_t
{
	ENiagaraPlatformSetState__Disabled = 0,
	ENiagaraPlatformSetState__Enabled = 1,
	ENiagaraPlatformSetState__Active = 2,
	ENiagaraPlatformSetState__Unknown = 3,
	ENiagaraPlatformSetState__ENiagaraPlatformSetState_MAX = 4,

};

// Enum Niagara.ENiagaraPlatformSelectionState
enum class Niagara_ENiagaraPlatformSelectionState : uint8_t
{
	ENiagaraPlatformSelectionState__Default = 0,
	ENiagaraPlatformSelectionState__Enabled = 1,
	ENiagaraPlatformSelectionState__Disabled = 2,
	ENiagaraPlatformSelectionState__ENiagaraPlatformSelectionState_MAX = 3,

};

// Enum Niagara.ENiagaraPreviewGridResetMode
enum class Niagara_ENiagaraPreviewGridResetMode : uint8_t
{
	ENiagaraPreviewGridResetMode__Never = 0,
	ENiagaraPreviewGridResetMode__Individual = 1,
	ENiagaraPreviewGridResetMode__All = 2,
	ENiagaraPreviewGridResetMode__ENiagaraPreviewGridResetMode_MAX = 3,

};

// Enum Niagara.ENiagaraRibbonTessellationMode
enum class Niagara_ENiagaraRibbonTessellationMode : uint8_t
{
	ENiagaraRibbonTessellationMode__Automatic = 0,
	ENiagaraRibbonTessellationMode__Custom = 1,
	ENiagaraRibbonTessellationMode__Disabled = 2,
	ENiagaraRibbonTessellationMode__ENiagaraRibbonTessellationMode_MAX = 3,

};

// Enum Niagara.ENiagaraRibbonDrawDirection
enum class Niagara_ENiagaraRibbonDrawDirection : uint8_t
{
	ENiagaraRibbonDrawDirection__FrontToBack = 0,
	ENiagaraRibbonDrawDirection__BackToFront = 1,
	ENiagaraRibbonDrawDirection__ENiagaraRibbonDrawDirection_MAX = 2,

};

// Enum Niagara.ENiagaraRibbonAgeOffsetMode
enum class Niagara_ENiagaraRibbonAgeOffsetMode : uint8_t
{
	ENiagaraRibbonAgeOffsetMode__Scale = 0,
	ENiagaraRibbonAgeOffsetMode__Clip = 1,
	ENiagaraRibbonAgeOffsetMode__ENiagaraRibbonAgeOffsetMode_MAX = 2,

};

// Enum Niagara.ENiagaraRibbonFacingMode
enum class Niagara_ENiagaraRibbonFacingMode : uint8_t
{
	ENiagaraRibbonFacingMode__Screen = 0,
	ENiagaraRibbonFacingMode__Custom = 1,
	ENiagaraRibbonFacingMode__CustomSideVector = 2,
	ENiagaraRibbonFacingMode__ENiagaraRibbonFacingMode_MAX = 3,

};

// Enum Niagara.ENiagaraModuleDependencyScriptConstraint
enum class Niagara_ENiagaraModuleDependencyScriptConstraint : uint8_t
{
	ENiagaraModuleDependencyScriptConstraint__SameScript = 0,
	ENiagaraModuleDependencyScriptConstraint__AllScripts = 1,
	ENiagaraModuleDependencyScriptConstraint__ENiagaraModuleDependencyScriptConstraint_MAX = 2,

};

// Enum Niagara.ENiagaraModuleDependencyType
enum class Niagara_ENiagaraModuleDependencyType : uint8_t
{
	ENiagaraModuleDependencyType__PreDependency = 0,
	ENiagaraModuleDependencyType__PostDependency = 1,
	ENiagaraModuleDependencyType__ENiagaraModuleDependencyType_MAX = 2,

};

// Enum Niagara.EUnusedAttributeBehaviour
enum class Niagara_EUnusedAttributeBehaviour : uint8_t
{
	EUnusedAttributeBehaviour__Copy = 0,
	EUnusedAttributeBehaviour__Zero = 1,
	EUnusedAttributeBehaviour__None = 2,
	EUnusedAttributeBehaviour__MarkInvalid = 3,
	EUnusedAttributeBehaviour__PassThrough = 4,
	EUnusedAttributeBehaviour__EUnusedAttributeBehaviour_MAX = 5,

};

// Enum Niagara.ENiagaraSpriteFacingMode
enum class Niagara_ENiagaraSpriteFacingMode : uint8_t
{
	ENiagaraSpriteFacingMode__FaceCamera = 0,
	ENiagaraSpriteFacingMode__FaceCameraPlane = 1,
	ENiagaraSpriteFacingMode__CustomFacingVector = 2,
	ENiagaraSpriteFacingMode__FaceCameraPosition = 3,
	ENiagaraSpriteFacingMode__FaceCameraDistanceBlend = 4,
	ENiagaraSpriteFacingMode__ENiagaraSpriteFacingMode_MAX = 5,

};

// Enum Niagara.ENiagaraSpriteAlignment
enum class Niagara_ENiagaraSpriteAlignment : uint8_t
{
	ENiagaraSpriteAlignment__Unaligned = 0,
	ENiagaraSpriteAlignment__VelocityAligned = 1,
	ENiagaraSpriteAlignment__CustomAlignment = 2,
	ENiagaraSpriteAlignment__ENiagaraSpriteAlignment_MAX = 3,

};

// Enum Niagara.ENiagaraParameterPanelCategory
enum class Niagara_ENiagaraParameterPanelCategory : uint8_t
{
	ENiagaraParameterPanelCategory__Input = 0,
	ENiagaraParameterPanelCategory__Attributes = 1,
	ENiagaraParameterPanelCategory__Output = 2,
	ENiagaraParameterPanelCategory__Local = 3,
	ENiagaraParameterPanelCategory__User = 4,
	ENiagaraParameterPanelCategory__Engine = 5,
	ENiagaraParameterPanelCategory__Owner = 6,
	ENiagaraParameterPanelCategory__System = 7,
	ENiagaraParameterPanelCategory__Emitter = 8,
	ENiagaraParameterPanelCategory__Particles = 9,
	ENiagaraParameterPanelCategory__ScriptTransient = 10,
	ENiagaraParameterPanelCategory__StaticSwitch = 11,
	ENiagaraParameterPanelCategory__None = 12,
	ENiagaraParameterPanelCategory__Num = 13,
	ENiagaraParameterPanelCategory__ENiagaraParameterPanelCategory_MAX = 14,

};

// Enum Niagara.ENiagaraScriptParameterUsage
enum class Niagara_ENiagaraScriptParameterUsage : uint8_t
{
	ENiagaraScriptParameterUsage__Input = 0,
	ENiagaraScriptParameterUsage__Output = 1,
	ENiagaraScriptParameterUsage__Local = 2,
	ENiagaraScriptParameterUsage__InputOutput = 3,
	ENiagaraScriptParameterUsage__InitialValueInput = 4,
	ENiagaraScriptParameterUsage__None = 5,
	ENiagaraScriptParameterUsage__Num = 6,
	ENiagaraScriptParameterUsage__ENiagaraScriptParameterUsage_MAX = 7,

};

// Enum Niagara.ENiagaraParameterScope
enum class Niagara_ENiagaraParameterScope : uint8_t
{
	ENiagaraParameterScope__Input  = 0,
	ENiagaraParameterScope__User   = 1,
	ENiagaraParameterScope__Engine = 2,
	ENiagaraParameterScope__Owner  = 3,
	ENiagaraParameterScope__System = 4,
	ENiagaraParameterScope__Emitter = 5,
	ENiagaraParameterScope__Particles = 6,
	ENiagaraParameterScope__ScriptPersistent = 7,
	ENiagaraParameterScope__ScriptTransient = 8,
	ENiagaraParameterScope__Local  = 9,
	ENiagaraParameterScope__Custom = 10,
	ENiagaraParameterScope__DISPLAY_ONLY_StaticSwitch = 11,
	ENiagaraParameterScope__Output = 12,
	ENiagaraParameterScope__None   = 13,
	ENiagaraParameterScope__Num    = 14,
	ENiagaraParameterScope__ENiagaraParameterScope_MAX = 15,

};

// Enum Niagara.ENiagaraExecutionState
enum class Niagara_ENiagaraExecutionState : uint8_t
{
	ENiagaraExecutionState__Active = 0,
	ENiagaraExecutionState__Inactive = 1,
	ENiagaraExecutionState__InactiveClear = 2,
	ENiagaraExecutionState__Complete = 3,
	ENiagaraExecutionState__Disabled = 4,
	ENiagaraExecutionState__Num    = 5,
	ENiagaraExecutionState__ENiagaraExecutionState_MAX = 6,

};

// Enum Niagara.ENiagaraExecutionStateSource
enum class Niagara_ENiagaraExecutionStateSource : uint8_t
{
	ENiagaraExecutionStateSource__Scalability = 0,
	ENiagaraExecutionStateSource__Internal = 1,
	ENiagaraExecutionStateSource__Owner = 2,
	ENiagaraExecutionStateSource__InternalCompletion = 3,
	ENiagaraExecutionStateSource__ENiagaraExecutionStateSource_MAX = 4,

};

// Enum Niagara.ENiagaraNumericOutputTypeSelectionMode
enum class Niagara_ENiagaraNumericOutputTypeSelectionMode : uint8_t
{
	ENiagaraNumericOutputTypeSelectionMode__None = 0,
	ENiagaraNumericOutputTypeSelectionMode__Largest = 1,
	ENiagaraNumericOutputTypeSelectionMode__Smallest = 2,
	ENiagaraNumericOutputTypeSelectionMode__Scalar = 3,
	ENiagaraNumericOutputTypeSelectionMode__ENiagaraNumericOutputTypeSelectionMode_MAX = 4,

};

// Enum Niagara.ENiagaraVariantMode
enum class Niagara_ENiagaraVariantMode : uint8_t
{
	ENiagaraVariantMode__None      = 0,
	ENiagaraVariantMode__Object    = 1,
	ENiagaraVariantMode__DataInterface = 2,
	ENiagaraVariantMode__Bytes     = 3,
	ENiagaraVariantMode__ENiagaraVariantMode_MAX = 4,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Niagara.NiagaraTypeDefinition
// 0x0010
struct FNiagaraTypeDefinition
{
	class UObject*                                     ClassStructOrEnum;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16_t                                           UnderlyingType;                                            // 0x0008(0x0002) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1TA0[0x6];                                     // 0x000A(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct Niagara.NiagaraVariableBase
// 0x0020
struct FNiagaraVariableBase
{
	struct FName                                       Name;                                                      // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_4P3M[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FNiagaraTypeDefinition                      TypeDef;                                                   // 0x0010(0x0010) (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

};

// ScriptStruct Niagara.NiagaraVariable
// 0x0010 (0x0030 - 0x0020)
struct FNiagaraVariable : public FNiagaraVariableBase
{
	TArray<unsigned char>                              VarData;                                                   // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct Niagara.NiagaraVariableWithOffset
// 0x0008 (0x0028 - 0x0020)
struct FNiagaraVariableWithOffset : public FNiagaraVariableBase
{
	int                                                Offset;                                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PWZ7[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Niagara.NiagaraParameterStore
// 0x00B8
struct FNiagaraParameterStore
{
	unsigned char                                      UnknownData_F1KJ[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     Owner;                                                     // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FNiagaraVariableWithOffset>          SortedParameterOffsets;                                    // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<unsigned char>                              ParameterData;                                             // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UNiagaraDataInterface*>               DataInterfaces;                                            // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UObject*>                             UObjects;                                                  // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_ZAGI[0x68];                                    // 0x0050(0x0068) MISSED OFFSET (PADDING)

};

// ScriptStruct Niagara.NiagaraUserRedirectionParameterStore
// 0x0050 (0x0108 - 0x00B8)
struct FNiagaraUserRedirectionParameterStore : public FNiagaraParameterStore
{
	TMap<struct FNiagaraVariable, struct FNiagaraVariable> UserParameterRedirects;                                    // 0x00B8(0x0050) (NativeAccessSpecifierPrivate)

};

// ScriptStruct Niagara.NCPoolElement
// 0x0010
struct FNCPoolElement
{
	class UNiagaraComponent*                           Component;                                                 // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5UBF[0x8];                                     // 0x0008(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Niagara.NCPool
// 0x0038
struct FNCPool
{
	TArray<struct FNCPoolElement>                      FreeElements;                                              // 0x0000(0x0010) (ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UNiagaraComponent*>                   InUseComponents_Auto;                                      // 0x0010(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UNiagaraComponent*>                   InUseComponents_Manual;                                    // 0x0020(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UKML[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Niagara.NiagaraUserParameterBinding
// 0x0030
struct FNiagaraUserParameterBinding
{
	struct FNiagaraVariable                            Parameter;                                                 // 0x0000(0x0030) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Niagara.NDIStaticMeshSectionFilter
// 0x0010
struct FNDIStaticMeshSectionFilter
{
	TArray<int>                                        AllowedMaterialSlots;                                      // 0x0000(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Niagara.NiagaraDeviceProfileStateEntry
// 0x0014
struct FNiagaraDeviceProfileStateEntry
{
	struct FName                                       ProfileName;                                               // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           QualityLevelMask;                                          // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           SetQualityLevelMask;                                       // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Niagara.NiagaraPlatformSet
// 0x0020
struct FNiagaraPlatformSet
{
	int                                                QualityLevelMask;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MF19[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FNiagaraDeviceProfileStateEntry>     DeviceProfileStates;                                       // 0x0008(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MU71[0x8];                                     // 0x0018(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Niagara.NiagaraEmitterScalabilitySettings
// 0x0028
struct FNiagaraEmitterScalabilitySettings
{
	struct FNiagaraPlatformSet                         Platforms;                                                 // 0x0000(0x0020) (Edit, NativeAccessSpecifierPublic)
	unsigned char                                      bScaleSpawnCount : 1;                                      // 0x0020(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_B7MI[0x3];                                     // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SpawnCountScale;                                           // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Niagara.NiagaraEmitterScalabilitySettingsArray
// 0x0010
struct FNiagaraEmitterScalabilitySettingsArray
{
	TArray<struct FNiagaraEmitterScalabilitySettings>  Settings;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Niagara.NiagaraEventReceiverProperties
// 0x0024
struct FNiagaraEventReceiverProperties
{
	struct FName                                       Name;                                                      // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SourceEventGenerator;                                      // 0x000C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SourceEmitter;                                             // 0x0018(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Niagara.NiagaraTypeLayoutInfo
// 0x0040
struct FNiagaraTypeLayoutInfo
{
	TArray<uint32_t>                                   FloatComponentByteOffsets;                                 // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint32_t>                                   FloatComponentRegisterOffsets;                             // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint32_t>                                   Int32ComponentByteOffsets;                                 // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint32_t>                                   Int32ComponentRegisterOffsets;                             // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Niagara.NiagaraDataSetID
// 0x0010
struct FNiagaraDataSetID
{
	struct FName                                       Name;                                                      // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Niagara_ENiagaraDataSetType                        Type;                                                      // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TEOS[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Niagara.NiagaraDetailsLevelScaleOverrides
// 0x0014
struct FNiagaraDetailsLevelScaleOverrides
{
	float                                              Low;                                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Medium;                                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              High;                                                      // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Epic;                                                      // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Cine;                                                      // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Niagara.NiagaraEmitterScalabilityOverride
// 0x0008 (0x0030 - 0x0028)
struct FNiagaraEmitterScalabilityOverride : public FNiagaraEmitterScalabilitySettings
{
	unsigned char                                      bOverrideSpawnCountScale : 1;                              // 0x0028(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_52PT[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Niagara.NiagaraVariableLayoutInfo
// 0x0048
struct FNiagaraVariableLayoutInfo
{
	uint32_t                                           FloatComponentStart;                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           Int32ComponentStart;                                       // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraTypeLayoutInfo                      LayoutInfo;                                                // 0x0008(0x0040) (NativeAccessSpecifierPublic)

};

// ScriptStruct Niagara.NiagaraDataSetCompiledData
// 0x0040
struct FNiagaraDataSetCompiledData
{
	TArray<struct FNiagaraVariable>                    Variables;                                                 // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraVariableLayoutInfo>          VariableLayouts;                                           // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           TotalFloatComponents;                                      // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           TotalInt32Components;                                      // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bRequiresPersistentIDs : 1;                                // 0x0028(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OR2B[0x3];                                     // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FNiagaraDataSetID                           ID;                                                        // 0x002C(0x0010) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Niagara_ENiagaraSimTarget                          SimTarget;                                                 // 0x003C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_75SS[0x3];                                     // 0x003D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Niagara.NiagaraEventGeneratorProperties
// 0x0050
struct FNiagaraEventGeneratorProperties
{
	int                                                MaxEventsPerFrame;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ID;                                                        // 0x0004(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraDataSetCompiledData                 DataSetCompiledData;                                       // 0x0010(0x0040) (NativeAccessSpecifierPublic)

};

// ScriptStruct Niagara.NiagaraEmitterScriptProperties
// 0x0028
struct FNiagaraEmitterScriptProperties
{
	class UNiagaraScript*                              Script;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraEventReceiverProperties>     EventReceivers;                                            // 0x0008(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraEventGeneratorProperties>    EventGenerators;                                           // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Niagara.NiagaraEventScriptProperties
// 0x0030 (0x0058 - 0x0028)
struct FNiagaraEventScriptProperties : public FNiagaraEmitterScriptProperties
{
	Niagara_EScriptExecutionMode                       ExecutionMode;                                             // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S3UI[0x3];                                     // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint32_t                                           SpawnNumber;                                               // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           MaxEventsPerFrame;                                         // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       SourceEmitterID;                                           // 0x0034(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SourceEventName;                                           // 0x0044(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRandomSpawnNumber;                                        // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PWXT[0x3];                                     // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint32_t                                           MinSpawnNumber;                                            // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Niagara.NiagaraVariableAttributeBinding
// 0x0090
struct FNiagaraVariableAttributeBinding
{
	struct FNiagaraVariable                            BoundVariable;                                             // 0x0000(0x0030) (HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraVariable                            DataSetVariable;                                           // 0x0030(0x0030) (HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraVariable                            DefaultValueIfNonExistent;                                 // 0x0060(0x0030) (HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Niagara.NiagaraScriptExecutionPaddingInfo
// 0x0008
struct FNiagaraScriptExecutionPaddingInfo
{
	uint16_t                                           SrcOffset;                                                 // 0x0000(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16_t                                           DestOffset;                                                // 0x0002(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16_t                                           SrcSize;                                                   // 0x0004(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16_t                                           DestSize;                                                  // 0x0006(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Niagara.NiagaraScriptDataUsageInfo
// 0x0001
struct FNiagaraScriptDataUsageInfo
{
	bool                                               bReadsAttributeData;                                       // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Niagara.VMFunctionSpecifier
// 0x0018
struct FVMFunctionSpecifier
{
	struct FName                                       Key;                                                       // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       value;                                                     // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Niagara.NiagaraStatScope
// 0x0018
struct FNiagaraStatScope
{
	struct FName                                       FullName;                                                  // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       FriendlyName;                                              // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Niagara.SimulationStageMetaData
// 0x0028
struct FSimulationStageMetaData
{
	struct FName                                       IterationSource;                                           // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSpawnOnly : 1;                                            // 0x000C(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bWritesParticles : 1;                                      // 0x000C(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8UZR[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               OutputDestinations;                                        // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MinStage;                                                  // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxStage;                                                  // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Niagara.NiagaraScriptDataInterfaceInfo
// 0x0040
struct FNiagaraScriptDataInterfaceInfo
{
	class UNiagaraDataInterface*                       DataInterface;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Name;                                                      // 0x0008(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                UserPtrIdx;                                                // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraTypeDefinition                      Type;                                                      // 0x0018(0x0010) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       RegisteredParameterMapRead;                                // 0x0028(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       RegisteredParameterMapWrite;                               // 0x0034(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Niagara.NiagaraSystemScalabilitySettings
// 0x0030
struct FNiagaraSystemScalabilitySettings
{
	struct FNiagaraPlatformSet                         Platforms;                                                 // 0x0000(0x0020) (Edit, NativeAccessSpecifierPublic)
	unsigned char                                      bCullByDistance : 1;                                       // 0x0020(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bCullMaxInstanceCount : 1;                                 // 0x0020(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bCullByMaxTimeWithoutRender : 1;                           // 0x0020(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YI9R[0x3];                                     // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxDistance;                                               // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxInstances;                                              // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxTimeWithoutRender;                                      // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Niagara.NiagaraSystemScalabilitySettingsArray
// 0x0010
struct FNiagaraSystemScalabilitySettingsArray
{
	TArray<struct FNiagaraSystemScalabilitySettings>   Settings;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Niagara.NiagaraScriptExecutionParameterStore
// 0x0020 (0x00D8 - 0x00B8)
struct FNiagaraScriptExecutionParameterStore : public FNiagaraParameterStore
{
	int                                                ParameterSize;                                             // 0x00B8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint32_t                                           PaddedParameterSize;                                       // 0x00BC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FNiagaraScriptExecutionPaddingInfo>  PaddingInfo;                                               // 0x00C0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      bInitialized : 1;                                          // 0x00D0(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_FNOE[0x7];                                     // 0x00D1(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Niagara.NiagaraSystemScalabilityOverride
// 0x0008 (0x0038 - 0x0030)
struct FNiagaraSystemScalabilityOverride : public FNiagaraSystemScalabilitySettings
{
	unsigned char                                      bOverrideDistanceSettings : 1;                             // 0x0030(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverrideInstanceCountSettings : 1;                        // 0x0030(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverrideTimeSinceRendererSettings : 1;                    // 0x0030(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OXN3[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Niagara.NiagaraSystemScalabilityOverrides
// 0x0010
struct FNiagaraSystemScalabilityOverrides
{
	TArray<struct FNiagaraSystemScalabilityOverride>   Overrides;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Niagara.NiagaraEmitterHandle
// 0x0038
struct FNiagaraEmitterHandle
{
	struct FGuid                                       ID;                                                        // 0x0000(0x0010) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FName                                       IdName;                                                    // 0x0010(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bIsEnabled;                                                // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_92XT[0x3];                                     // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       Name;                                                      // 0x0020(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_L65M[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UNiagaraEmitter*                             Instance;                                                  // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct Niagara.NiagaraEmitterScalabilityOverrides
// 0x0010
struct FNiagaraEmitterScalabilityOverrides
{
	TArray<struct FNiagaraEmitterScalabilityOverride>  Overrides;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Niagara.NiagaraBoundParameter
// 0x0038
struct FNiagaraBoundParameter
{
	struct FNiagaraVariable                            Parameter;                                                 // 0x0000(0x0030) (HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SrcOffset;                                                 // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DestOffset;                                                // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Niagara.NiagaraMeshMaterialOverride
// 0x0038
struct FNiagaraMeshMaterialOverride
{
	class UMaterialInterface*                          ExplicitMat;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraUserParameterBinding                UserParamBinding;                                          // 0x0008(0x0030) (Edit, NativeAccessSpecifierPublic)

};

// ScriptStruct Niagara.NiagaraVMExecutableDataId
// 0x0048
struct FNiagaraVMExecutableDataId
{
	struct FGuid                                       CompilerVersionID;                                         // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Niagara_ENiagaraScriptUsage                        ScriptUsageType;                                           // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9GV6[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGuid                                       ScriptUsageTypeID;                                         // 0x0014(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUsesRapidIterationParams : 1;                             // 0x0024(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bInterpolatedSpawn : 1;                                    // 0x0024(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bRequiresPersistentIDs : 1;                                // 0x0024(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3AG3[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGuid                                       BaseScriptID;                                              // 0x0028(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraCompileHash                         BaseScriptCompileHash;                                     // 0x0038(0x0010) (NativeAccessSpecifierPublic)

};

// ScriptStruct Niagara.NiagaraParameters
// 0x0010
struct FNiagaraParameters
{
	TArray<struct FNiagaraVariable>                    Parameters;                                                // 0x0000(0x0010) (Edit, EditFixedSize, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Niagara.NiagaraDataSetProperties
// 0x0020
struct FNiagaraDataSetProperties
{
	struct FNiagaraDataSetID                           ID;                                                        // 0x0000(0x0010) (Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraVariable>                    Variables;                                                 // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Niagara.VMExternalFunctionBindingInfo
// 0x0040
struct FVMExternalFunctionBindingInfo
{
	struct FName                                       Name;                                                      // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       OwnerName;                                                 // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<bool>                                       InputParamLocations;                                       // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumOutputs;                                                // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BJQX[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FVMFunctionSpecifier>                FunctionSpecifiers;                                        // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Niagara.NiagaraScriptDataInterfaceCompileInfo
// 0x0040
struct FNiagaraScriptDataInterfaceCompileInfo
{
	struct FName                                       Name;                                                      // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                UserPtrIdx;                                                // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraTypeDefinition                      Type;                                                      // 0x0010(0x0010) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       RegisteredParameterMapRead;                                // 0x0020(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       RegisteredParameterMapWrite;                               // 0x002C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsPlaceholder;                                            // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BUWH[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Niagara.NiagaraVMExecutableData
// 0x0128
struct FNiagaraVMExecutableData
{
	TArray<unsigned char>                              ByteCode;                                                  // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<unsigned char>                              OptimizedByteCode;                                         // 0x0010(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumTempRegisters;                                          // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumUserPtrs;                                               // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraParameters                          Parameters;                                                // 0x0028(0x0010) (NativeAccessSpecifierPublic)
	struct FNiagaraParameters                          InternalParameters;                                        // 0x0038(0x0010) (NativeAccessSpecifierPublic)
	TMap<struct FName, struct FNiagaraParameters>      DataSetToParameters;                                       // 0x0048(0x0050) (NativeAccessSpecifierPublic)
	TArray<struct FNiagaraVariable>                    Attributes;                                                // 0x0098(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraScriptDataUsageInfo                 DataUsage;                                                 // 0x00A8(0x0001) (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2UNL[0x7];                                     // 0x00A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FNiagaraScriptDataInterfaceCompileInfo> DataInterfaceInfo;                                         // 0x00B0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVMExternalFunctionBindingInfo>      CalledVMExternalFunctions;                                 // 0x00C0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraDataSetID>                   ReadDataSets;                                              // 0x00D0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraDataSetProperties>           WriteDataSets;                                             // 0x00E0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraStatScope>                   StatScopes;                                                // 0x00F0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraDataInterfaceGPUParamInfo>   DIParamInfo;                                               // 0x0100(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Niagara_ENiagaraScriptCompileStatus                LastCompileStatus;                                         // 0x0110(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_83HM[0x7];                                     // 0x0111(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FSimulationStageMetaData>            SimulationStageMetaData;                                   // 0x0118(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Niagara.NiagaraVariableDataInterfaceBinding
// 0x0030
struct FNiagaraVariableDataInterfaceBinding
{
	struct FNiagaraVariable                            BoundVariable;                                             // 0x0000(0x0030) (HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Niagara.NiagaraParameterDataSetBinding
// 0x0008
struct FNiagaraParameterDataSetBinding
{
	int                                                ParameterOffset;                                           // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DataSetComponentOffset;                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Niagara.NiagaraParameterDataSetBindingCollection
// 0x0020
struct FNiagaraParameterDataSetBindingCollection
{
	TArray<struct FNiagaraParameterDataSetBinding>     FloatOffsets;                                              // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraParameterDataSetBinding>     Int32Offsets;                                              // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Niagara.NiagaraSystemCompiledData
// 0x0258
struct FNiagaraSystemCompiledData
{
	struct FNiagaraParameterStore                      InstanceParamStore;                                        // 0x0000(0x00B8) (NativeAccessSpecifierPublic)
	struct FNiagaraDataSetCompiledData                 DataSetCompiledData;                                       // 0x00B8(0x0040) (NativeAccessSpecifierPublic)
	struct FNiagaraDataSetCompiledData                 SpawnInstanceParamsDataSetCompiledData;                    // 0x00F8(0x0040) (NativeAccessSpecifierPublic)
	struct FNiagaraDataSetCompiledData                 UpdateInstanceParamsDataSetCompiledData;                   // 0x0138(0x0040) (NativeAccessSpecifierPublic)
	struct FNiagaraParameterDataSetBindingCollection   SpawnInstanceGlobalBinding;                                // 0x0178(0x0020) (NativeAccessSpecifierPublic)
	struct FNiagaraParameterDataSetBindingCollection   SpawnInstanceSystemBinding;                                // 0x0198(0x0020) (NativeAccessSpecifierPublic)
	struct FNiagaraParameterDataSetBindingCollection   SpawnInstanceOwnerBinding;                                 // 0x01B8(0x0020) (NativeAccessSpecifierPublic)
	TArray<struct FNiagaraParameterDataSetBindingCollection> SpawnInstanceEmitterBindings;                              // 0x01D8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraParameterDataSetBindingCollection   UpdateInstanceGlobalBinding;                               // 0x01E8(0x0020) (NativeAccessSpecifierPublic)
	struct FNiagaraParameterDataSetBindingCollection   UpdateInstanceSystemBinding;                               // 0x0208(0x0020) (NativeAccessSpecifierPublic)
	struct FNiagaraParameterDataSetBindingCollection   UpdateInstanceOwnerBinding;                                // 0x0228(0x0020) (NativeAccessSpecifierPublic)
	TArray<struct FNiagaraParameterDataSetBindingCollection> UpdateInstanceEmitterBindings;                             // 0x0248(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Niagara.MovieSceneNiagaraParameterSectionTemplate
// 0x0030 (0x0050 - 0x0020)
struct FMovieSceneNiagaraParameterSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FNiagaraVariable                            Parameter;                                                 // 0x0020(0x0030) (HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct Niagara.MovieSceneNiagaraBoolParameterSectionTemplate
// 0x0090 (0x00E0 - 0x0050)
struct FMovieSceneNiagaraBoolParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
	struct FMovieSceneBoolChannel                      BoolChannel;                                               // 0x0050(0x0090) (NativeAccessSpecifierPrivate)

};

// ScriptStruct Niagara.MovieSceneNiagaraColorParameterSectionTemplate
// 0x0280 (0x02D0 - 0x0050)
struct FMovieSceneNiagaraColorParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
	struct FMovieSceneFloatChannel                     RedChannel;                                                // 0x0050(0x00A0) (NativeAccessSpecifierPrivate)
	struct FMovieSceneFloatChannel                     GreenChannel;                                              // 0x00F0(0x00A0) (NativeAccessSpecifierPrivate)
	struct FMovieSceneFloatChannel                     BlueChannel;                                               // 0x0190(0x00A0) (NativeAccessSpecifierPrivate)
	struct FMovieSceneFloatChannel                     AlphaChannel;                                              // 0x0230(0x00A0) (NativeAccessSpecifierPrivate)

};

// ScriptStruct Niagara.MovieSceneNiagaraFloatParameterSectionTemplate
// 0x00A0 (0x00F0 - 0x0050)
struct FMovieSceneNiagaraFloatParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
	struct FMovieSceneFloatChannel                     FloatChannel;                                              // 0x0050(0x00A0) (NativeAccessSpecifierPrivate)

};

// ScriptStruct Niagara.MovieSceneNiagaraIntegerParameterSectionTemplate
// 0x0090 (0x00E0 - 0x0050)
struct FMovieSceneNiagaraIntegerParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
	struct FMovieSceneIntegerChannel                   IntegerChannel;                                            // 0x0050(0x0090) (NativeAccessSpecifierPrivate)

};

// ScriptStruct Niagara.MovieSceneNiagaraSystemTrackImplementation
// 0x0018 (0x0028 - 0x0010)
struct FMovieSceneNiagaraSystemTrackImplementation : public FMovieSceneTrackImplementation
{
	struct FFrameNumber                                SpawnSectionStartFrame;                                    // 0x0010(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFrameNumber                                SpawnSectionEndFrame;                                      // 0x0014(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	Niagara_ENiagaraSystemSpawnSectionStartBehavior    SpawnSectionStartBehavior;                                 // 0x0018(0x0001) ELEMENT_SIZE_MISMATCH (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_I4WK[0x3];                                     // 0x0018(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	Niagara_ENiagaraSystemSpawnSectionEvaluateBehavior SpawnSectionEvaluateBehavior;                              // 0x001C(0x0001) ELEMENT_SIZE_MISMATCH (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_2JWJ[0x3];                                     // 0x001C(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	Niagara_ENiagaraSystemSpawnSectionEndBehavior      SpawnSectionEndBehavior;                                   // 0x0020(0x0001) ELEMENT_SIZE_MISMATCH (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_2DJT[0x3];                                     // 0x0020(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	Niagara_ENiagaraAgeUpdateMode                      AgeUpdateMode;                                             // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_SMGE[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Niagara.MovieSceneNiagaraSystemTrackTemplate
// 0x0000 (0x0020 - 0x0020)
struct FMovieSceneNiagaraSystemTrackTemplate : public FMovieSceneEvalTemplate
{

};

// ScriptStruct Niagara.MovieSceneNiagaraVectorParameterSectionTemplate
// 0x0288 (0x02D8 - 0x0050)
struct FMovieSceneNiagaraVectorParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
	struct FMovieSceneFloatChannel                     VectorChannels[0x4];                                       // 0x0050(0x0280) (NativeAccessSpecifierPrivate)
	int                                                ChannelsUsed;                                              // 0x02D0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_8ZRQ[0x4];                                     // 0x02D4(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Niagara.NiagaraRandInfo
// 0x000C
struct FNiagaraRandInfo
{
	int                                                Seed1;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Seed2;                                                     // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Seed3;                                                     // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Niagara.NiagaraScriptVariableBinding
// 0x000C
struct FNiagaraScriptVariableBinding
{
	struct FName                                       Name;                                                      // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Niagara.NiagaraVariableInfo
// 0x0050
struct FNiagaraVariableInfo
{
	struct FNiagaraVariable                            Variable;                                                  // 0x0000(0x0030) (HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       definition;                                                // 0x0030(0x0018) (NativeAccessSpecifierPublic)
	class UNiagaraDataInterface*                       DataInterface;                                             // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Niagara.NiagaraSystemUpdateContext
// 0x0038
struct FNiagaraSystemUpdateContext
{
	TArray<class UNiagaraComponent*>                   ComponentsToReset;                                         // 0x0000(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UNiagaraComponent*>                   ComponentsToReInit;                                        // 0x0010(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UNiagaraSystem*>                      SystemSimsToDestroy;                                       // 0x0020(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_XF95[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Niagara.NiagaraFunctionSignature
// 0x0090
struct FNiagaraFunctionSignature
{
	struct FName                                       Name;                                                      // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CBWK[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FNiagaraVariable>                    Inputs;                                                    // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraVariable>                    Outputs;                                                   // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       OwnerName;                                                 // 0x0030(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bRequiresContext : 1;                                      // 0x003C(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bMemberFunction : 1;                                       // 0x003C(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bExperimental : 1;                                         // 0x003C(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsCPU : 1;                                          // 0x003C(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsGPU : 1;                                          // 0x003C(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bWriteFunction : 1;                                        // 0x003C(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C14Y[0x3];                                     // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FName, struct FName>                   FunctionSpecifiers;                                        // 0x0040(0x0050) (NativeAccessSpecifierPublic)

};

// ScriptStruct Niagara.BasicParticleData
// 0x001C
struct FBasicParticleData
{
	struct FVector                                     Position;                                                  // 0x0000(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Size;                                                      // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Velocity;                                                  // 0x0010(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Niagara.MeshTriCoordinate
// 0x0010
struct FMeshTriCoordinate
{
	int                                                Tri;                                                       // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     BaryCoord;                                                 // 0x0004(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Niagara.NiagaraGraphViewSettings
// 0x0010
struct FNiagaraGraphViewSettings
{
	struct FVector2D                                   Location;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              Zoom;                                                      // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bIsValid;                                                  // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_2XLZ[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Niagara.NiagaraCollisionEventPayload
// 0x002C
struct FNiagaraCollisionEventPayload
{
	struct FVector                                     CollisionPos;                                              // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     collisionNormal;                                           // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     CollisionVelocity;                                         // 0x0018(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ParticleIndex;                                             // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PhysicalMaterialIndex;                                     // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Niagara.NiagaraPlatformSetConflictEntry
// 0x0010
struct FNiagaraPlatformSetConflictEntry
{
	struct FName                                       ProfileName;                                               // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                QualityLevelMask;                                          // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Niagara.NiagaraPlatformSetConflictInfo
// 0x0018
struct FNiagaraPlatformSetConflictInfo
{
	int                                                SetAIndex;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SetBIndex;                                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraPlatformSetConflictEntry>    Conflicts;                                                 // 0x0008(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Niagara.NiagaraScalabilityManager
// 0x0040
struct FNiagaraScalabilityManager
{
	class UNiagaraEffectType*                          EffectType;                                                // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UNiagaraComponent*>                   ManagedComponents;                                         // 0x0008(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DAPA[0x28];                                    // 0x0018(0x0028) MISSED OFFSET (PADDING)

};

// ScriptStruct Niagara.NiagaraModuleDependency
// 0x0028
struct FNiagaraModuleDependency
{
	struct FName                                       ID;                                                        // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Niagara_ENiagaraModuleDependencyType               Type;                                                      // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Niagara_ENiagaraModuleDependencyScriptConstraint   ScriptConstraint;                                          // 0x000D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JGP8[0x2];                                     // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       Description;                                               // 0x0010(0x0018) (Edit, AssetRegistrySearchable, NativeAccessSpecifierPublic)

};

// ScriptStruct Niagara.NiagaraScriptHighlight
// 0x0028
struct FNiagaraScriptHighlight
{
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       DisplayName;                                               // 0x0010(0x0018) (Edit, NativeAccessSpecifierPublic)

};

// ScriptStruct Niagara.NiagaraSystemCompileRequest
// 0x0080
struct FNiagaraSystemCompileRequest
{
	unsigned char                                      UnknownData_LA0R[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UObject*>                             RootObjects;                                               // 0x0008(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OXCP[0x68];                                    // 0x0018(0x0068) MISSED OFFSET (PADDING)

};

// ScriptStruct Niagara.EmitterCompiledScriptPair
// 0x0078
struct FEmitterCompiledScriptPair
{
	unsigned char                                      UnknownData_121S[0x78];                                    // 0x0000(0x0078) MISSED OFFSET (PADDING)

};

// ScriptStruct Niagara.NiagaraEmitterCompiledData
// 0x0170
struct FNiagaraEmitterCompiledData
{
	TArray<struct FName>                               SpawnAttributes;                                           // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraVariable                            EmitterSpawnIntervalVar;                                   // 0x0010(0x0030) (HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraVariable                            EmitterInterpSpawnStartDTVar;                              // 0x0040(0x0030) (HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraVariable                            EmitterSpawnGroupVar;                                      // 0x0070(0x0030) (HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraVariable                            EmitterAgeVar;                                             // 0x00A0(0x0030) (HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraVariable                            EmitterRandomSeedVar;                                      // 0x00D0(0x0030) (HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraVariable                            EmitterTotalSpawnedParticlesVar;                           // 0x0100(0x0030) (HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraDataSetCompiledData                 DataSetCompiledData;                                       // 0x0130(0x0040) (NativeAccessSpecifierPublic)

};

// ScriptStruct Niagara.NiagaraInputConditionMetadata
// 0x0020
struct FNiagaraInputConditionMetadata
{
	struct FName                                       InputName;                                                 // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M5FD[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FString>                             TargetValues;                                              // 0x0010(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Niagara.NiagaraVariableMetaData
// 0x0100
struct FNiagaraVariableMetaData
{
	struct FText                                       Description;                                               // 0x0000(0x0018) (Edit, NativeAccessSpecifierPublic)
	struct FText                                       CategoryName;                                              // 0x0018(0x0018) (Edit, NativeAccessSpecifierPublic)
	bool                                               bAdvancedDisplay;                                          // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R8GL[0x3];                                     // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                EditorSortPriority;                                        // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInlineEditConditionToggle;                                // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DNVF[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FNiagaraInputConditionMetadata              EditCondition;                                             // 0x0040(0x0020) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraInputConditionMetadata              VisibleCondition;                                          // 0x0060(0x0020) (Edit, NativeAccessSpecifierPublic)
	TMap<struct FName, struct FString>                 PropertyMetaData;                                          // 0x0080(0x0050) (Edit, NativeAccessSpecifierPublic)
	struct FName                                       ScopeName;                                                 // 0x00D0(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	Niagara_ENiagaraScriptParameterUsage               Usage;                                                     // 0x00DC(0x0001) ELEMENT_SIZE_MISMATCH (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_DHUJ[0x3];                                     // 0x00DC(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	bool                                               bIsStaticSwitch;                                           // 0x00E0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_N0OM[0x3];                                     // 0x00E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                StaticSwitchDefaultValue;                                  // 0x00E4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bAddedToNodeGraphDeepCopy;                                 // 0x00E8(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bOutputIsPersistent;                                       // 0x00E9(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_R6A0[0x2];                                     // 0x00EA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       CachedNamespacelessVariableName;                           // 0x00EC(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bCreatedInSystemEditor;                                    // 0x00F8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bUseLegacyNameString;                                      // 0x00F9(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_XTM5[0x6];                                     // 0x00FA(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct Niagara.NiagaraParameterScopeInfo
// 0x0018
struct FNiagaraParameterScopeInfo
{
	Niagara_ENiagaraParameterScope                     Scope;                                                     // 0x0000(0x0001) ELEMENT_SIZE_MISMATCH (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_CX4K[0x3];                                     // 0x0000(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData_YLEX[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     NamespaceString;                                           // 0x0008(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct Niagara.NiagaraCompileHashVisitorDebugInfo
// 0x0030
struct FNiagaraCompileHashVisitorDebugInfo
{
	struct FString                                     Object;                                                    // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             PropertyKeys;                                              // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             PropertyValues;                                            // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Niagara.NiagaraID
// 0x0008
struct FNiagaraID
{
	int                                                Index;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AcquireTag;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Niagara.NiagaraSpawnInfo
// 0x0010
struct FNiagaraSpawnInfo
{
	int                                                count;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InterpStartDt;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              IntervalDt;                                                // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SpawnGroup;                                                // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Niagara.NiagaraMatrix
// 0x0040
struct FNiagaraMatrix
{
	struct FVector4                                    Row0;                                                      // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                                    Row1;                                                      // 0x0010(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                                    Row2;                                                      // 0x0020(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                                    Row3;                                                      // 0x0030(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Niagara.NiagaraTestStructInner
// 0x0018
struct FNiagaraTestStructInner
{
	struct FVector                                     InnerVector1;                                              // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     InnerVector2;                                              // 0x000C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Niagara.NiagaraTestStruct
// 0x0048
struct FNiagaraTestStruct
{
	struct FVector                                     Vector1;                                                   // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Vector2;                                                   // 0x000C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraTestStructInner                     InnerStruct1;                                              // 0x0018(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FNiagaraTestStructInner                     InnerStruct2;                                              // 0x0030(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Niagara.NiagaraParameterMap
// 0x0001
struct FNiagaraParameterMap
{
	unsigned char                                      UnknownData_2H07[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Niagara.NiagaraNumeric
// 0x0001
struct FNiagaraNumeric
{
	unsigned char                                      UnknownData_S1NV[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Niagara.NiagaraBool
// 0x0004
struct FNiagaraBool
{
	int                                                value;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct Niagara.NiagaraInt32
// 0x0004
struct FNiagaraInt32
{
	int                                                value;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Niagara.NiagaraFloat
// 0x0004
struct FNiagaraFloat
{
	float                                              value;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Niagara.NiagaraVariant
// 0x0028
struct FNiagaraVariant
{
	class UObject*                                     Object;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UNiagaraDataInterface*                       DataInterface;                                             // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<unsigned char>                              Bytes;                                                     // 0x0010(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	Niagara_ENiagaraVariantMode                        CurrentMode;                                               // 0x0020(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_ETEX[0x3];                                     // 0x0020(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData_CG98[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Niagara.NiagaraWorldManagerTickFunction
// 0x0008 (0x0030 - 0x0028)
struct FNiagaraWorldManagerTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData_TAMF[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
