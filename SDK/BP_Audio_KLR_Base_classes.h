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

// BlueprintGeneratedClass BP_Audio_KLR_Base.BP_Audio_KLR_Base_C
// 0x0038 (FullSize[0x00F0] - InheritedSize[0x00B8])
class UBP_Audio_KLR_Base_C : public UKillerAudioHandlerComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAkAudioBank*                                _killerAudioBank;                                          // 0x00C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                               _defaultAudioStatusStartEvent;                             // 0x00C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkComponent*                                _audioComponent;                                           // 0x00D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                               _isInMenu;                                                 // 0x00D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)
	unsigned char                                      UnknownData_41Q0[0x3];                                     // 0x00D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       _audioCharacterName;                                       // 0x00DC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UAkAudioEvent*                               _audioStartEvent;                                          // 0x00E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_Audio_KLR_Base.BP_Audio_KLR_Base_C"));
		return ptr;
	}



	void SelectAudioStatusStartEvent(bool IsInMenu, class UAkAudioEvent** audioEvent);
	void OnKillerSoundbankLoaded(AkAudio_EAkResult Result);
	void GetAudioCharacterName(class ADBDBasePlayer* Player, struct FName* AudioCharacterName);
	void InititializeComponent();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void Soundbank_Killer_Unloaded(AkAudio_EAkResult Result);
	void TriggerSurvivorDamageHitAudioSFX(class ACamperPlayer* camper, DBDSharedTypes_EAttackType attackType, bool causedKO, bool isWeaponHit, bool isLightHit);
	void HitImpactOnSurvivorSFX(class ACamperPlayer* camper, DBDSharedTypes_EAttackType attackType, bool isWeaponHit);
	void ExecuteUbergraph_BP_Audio_KLR_Base(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
