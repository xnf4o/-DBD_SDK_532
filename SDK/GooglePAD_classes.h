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

// Class GooglePAD.GooglePADFunctionLibrary
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UGooglePADFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class GooglePAD.GooglePADFunctionLibrary"));
		return ptr;
	}



	GooglePAD_EGooglePADErrorCode STATIC_ShowCellularDataConfirmation();
	GooglePAD_EGooglePADErrorCode STATIC_RequestRemoval(const struct FString& Name);
	GooglePAD_EGooglePADErrorCode STATIC_RequestInfo(TArray<struct FString> AssetPacks);
	GooglePAD_EGooglePADErrorCode STATIC_RequestDownload(TArray<struct FString> AssetPacks);
	void STATIC_ReleaseDownloadState(int State);
	void STATIC_ReleaseAssetPackLocation(int Location);
	int STATIC_GetTotalBytesToDownload(int State);
	GooglePAD_EGooglePADStorageMethod STATIC_GetStorageMethod(int Location);
	GooglePAD_EGooglePADErrorCode STATIC_GetShowCellularDataConfirmationStatus(GooglePAD_EGooglePADCellularDataConfirmStatus* status);
	GooglePAD_EGooglePADDownloadStatus STATIC_GetDownloadStatus(int State);
	GooglePAD_EGooglePADErrorCode STATIC_GetDownloadState(const struct FString& Name, int* State);
	int STATIC_GetBytesDownloaded(int State);
	struct FString STATIC_GetAssetsPath(int Location);
	GooglePAD_EGooglePADErrorCode STATIC_GetAssetPackLocation(const struct FString& Name, int* Location);
	GooglePAD_EGooglePADErrorCode STATIC_CancelDownload(TArray<struct FString> AssetPacks);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
