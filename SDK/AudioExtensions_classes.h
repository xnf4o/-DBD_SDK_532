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

// Class AudioExtensions.SoundfieldEncodingSettingsBase
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class USoundfieldEncodingSettingsBase : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AudioExtensions.SoundfieldEncodingSettingsBase"));
		return ptr;
	}



};

// Class AudioExtensions.AudioEndpointSettingsBase
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UAudioEndpointSettingsBase : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AudioExtensions.AudioEndpointSettingsBase"));
		return ptr;
	}



};

// Class AudioExtensions.SpatializationPluginSourceSettingsBase
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class USpatializationPluginSourceSettingsBase : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AudioExtensions.SpatializationPluginSourceSettingsBase"));
		return ptr;
	}



};

// Class AudioExtensions.OcclusionPluginSourceSettingsBase
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UOcclusionPluginSourceSettingsBase : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AudioExtensions.OcclusionPluginSourceSettingsBase"));
		return ptr;
	}



};

// Class AudioExtensions.SoundModulationPluginSourceSettingsBase
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class USoundModulationPluginSourceSettingsBase : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AudioExtensions.SoundModulationPluginSourceSettingsBase"));
		return ptr;
	}



};

// Class AudioExtensions.ReverbPluginSourceSettingsBase
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UReverbPluginSourceSettingsBase : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AudioExtensions.ReverbPluginSourceSettingsBase"));
		return ptr;
	}



};

// Class AudioExtensions.SoundfieldEndpointSettingsBase
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class USoundfieldEndpointSettingsBase : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AudioExtensions.SoundfieldEndpointSettingsBase"));
		return ptr;
	}



};

// Class AudioExtensions.SoundfieldEffectSettingsBase
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class USoundfieldEffectSettingsBase : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AudioExtensions.SoundfieldEffectSettingsBase"));
		return ptr;
	}



};

// Class AudioExtensions.SoundfieldEffectBase
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class USoundfieldEffectBase : public UObject
{
public:
	class USoundfieldEffectSettingsBase*               Settings;                                                  // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class AudioExtensions.SoundfieldEffectBase"));
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
