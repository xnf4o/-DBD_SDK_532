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

// Class OnlineTransactions.BloodwebManagerMock
// 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
class UBloodwebManagerMock : public UObject
{
public:
	unsigned char                                      UnknownData_3WHY[0x18];                                    // 0x0030(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class OnlineTransactions.BloodwebManagerMock"));
		return ptr;
	}



};

// Class OnlineTransactions.OnlineTransactionResponseBase
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UOnlineTransactionResponseBase : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class OnlineTransactions.OnlineTransactionResponseBase"));
		return ptr;
	}



};

// Class OnlineTransactions.ForceRefreshBloodMarketTransactionResponse
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UForceRefreshBloodMarketTransactionResponse : public UOnlineTransactionResponseBase
{
public:
	unsigned char                                      UnknownData_40W6[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class OnlineTransactions.ForceRefreshBloodMarketTransactionResponse"));
		return ptr;
	}



};

// Class OnlineTransactions.ForceRefreshBloodMarketTransaction
// 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
class UForceRefreshBloodMarketTransaction : public UObject
{
public:
	unsigned char                                      UnknownData_PNJE[0x48];                                    // 0x0030(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class OnlineTransactions.ForceRefreshBloodMarketTransaction"));
		return ptr;
	}



};

// Class OnlineTransactions.OnlineTransaction
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UOnlineTransaction : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class OnlineTransactions.OnlineTransaction"));
		return ptr;
	}



};

// Class OnlineTransactions.OnlineTransactionServiceComponent
// 0x0068 (FullSize[0x0120] - InheritedSize[0x00B8])
class UOnlineTransactionServiceComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_DM6V[0x68];                                    // 0x00B8(0x0068) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class OnlineTransactions.OnlineTransactionServiceComponent"));
		return ptr;
	}



};

// Class OnlineTransactions.WalletHandlerMock
// 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
class UWalletHandlerMock : public UObject
{
public:
	unsigned char                                      UnknownData_05JI[0x18];                                    // 0x0030(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class OnlineTransactions.WalletHandlerMock"));
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
