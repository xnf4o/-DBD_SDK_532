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

// Class MagicLeapAudio.MagicLeapAudioFunctionLibrary
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UMagicLeapAudioFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class MagicLeapAudio.MagicLeapAudioFunctionLibrary"));
		return ptr;
	}



	bool STATIC_SetOnAudioJackUnpluggedDelegate(const struct FScriptDelegate& ResultDelegate);
	bool STATIC_SetOnAudioJackPluggedDelegate(const struct FScriptDelegate& ResultDelegate);
	bool STATIC_SetMicMute(bool IsMuted);
	bool STATIC_IsMicMuted();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
