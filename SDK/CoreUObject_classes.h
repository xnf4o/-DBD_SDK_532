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

// Class CoreUObject.Object
// 0x0030
class UObject
{
public:
	static class TUObjectArray*                        GObjects;                                                  // 0x0000(0x0008)
	void*                                              VfTable;                                                   // 0x0000(0x0008) NOT AUTO-GENERATED PROPERTY
	int32_t                                            Flags;                                                     // 0x0008(0x0004) NOT AUTO-GENERATED PROPERTY
	int32_t                                            InternalIndex;                                             // 0x000C(0x0004) NOT AUTO-GENERATED PROPERTY
	class UClass*                                      Class;                                                     // 0x0010(0x0008) NOT AUTO-GENERATED PROPERTY
	FName                                              Name;                                                      // 0x0018(0x000C) NOT AUTO-GENERATED PROPERTY
	unsigned char                                      pad_377V7GIEZ5[0x04];                                      // 0x0024(0x0004) NOT AUTO-GENERATED PROPERTY
	class UObject*                                     Outer;                                                     // 0x0028(0x0008) NOT AUTO-GENERATED PROPERTY


	static inline TUObjectArray& GetGlobalObjects()
	{
		return *GObjects;
	}

	std::string GetName() const;

	std::string GetFullName() const;

	template<typename T>
	static T* FindObject(const std::string& name)
	{
		for (int i = 0; i < GetGlobalObjects().Num(); ++i)
		{
			auto object = GetGlobalObjects().GetByIndex(i);
	
			if (object == nullptr)
			{
				continue;
			}
	
			if (object->GetFullName() == name)
			{
				return static_cast<T*>(object);
			}
		}
		return nullptr;
	}

	template<typename T>
	static T* FindObject()
	{
		auto v = T::StaticClass();
		for (int i = 0; i < CG::UObject::GetGlobalObjects().Num(); ++i)
		{
			auto object = CG::UObject::GetGlobalObjects().GetByIndex(i);

			if (object == nullptr)
			{
				continue;
			}

			if (object->IsA(v))
			{
				return static_cast<T*>(object);
			}
		}
		return nullptr;
	}

	template<typename T>
	static std::vector<T*> FindObjects(const std::string& name)
	{
		std::vector<T*> ret;
		for (int i = 0; i < GetGlobalObjects().Num(); ++i)
		{
			auto object = GetGlobalObjects().GetByIndex(i);

			if (object == nullptr)
			{
				continue;
			}

			if (object->GetFullName() == name)
			{
				ret.push_back(static_cast<T*>(object));
			}
		}
		return ret;
	}

	template<typename T>
	static std::vector<T*> FindObjects()
	{
		std::vector<T*> ret;
		auto v = T::StaticClass();
		for (int i = 0; i < CG::UObject::GetGlobalObjects().Num(); ++i)
		{
			auto object = CG::UObject::GetGlobalObjects().GetByIndex(i);

			if (object == nullptr)
			{
				continue;
			}

			if (object->IsA(v))
			{
				ret.push_back(static_cast<T*>(object));
			}
		}
		return ret;
	}

	static UClass* FindClass(const std::string& name)
	{
		return FindObject<UClass>(name);
	}

	template<typename T>
	static T* GetObjectCasted(std::size_t index)
	{
		return static_cast<T*>(GetGlobalObjects().GetByIndex(index));
	}

	bool IsA(UClass* cmp) const;

	inline void ProcessEvent(class UFunction* function, void* parms)
	{
		// return;
		GetVFunction<void(*)(UObject*, class UFunction*, void*)>(this, 66)(this, function, parms);
	}

	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class CoreUObject.Object"));
		return ptr;
	}



	void ExecuteUbergraph(int EntryPoint);
};

// Class CoreUObject.Interface
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UInterface : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class CoreUObject.Interface"));
		return ptr;
	}



};

// Class CoreUObject.GCObjectReferencer
// 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
class UGCObjectReferencer : public UObject
{
public:
	unsigned char                                      UnknownData_1WMD[0x48];                                    // 0x0030(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class CoreUObject.GCObjectReferencer"));
		return ptr;
	}



};

// Class CoreUObject.TextBuffer
// 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
class UTextBuffer : public UObject
{
public:
	unsigned char                                      UnknownData_8A8N[0x28];                                    // 0x0030(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class CoreUObject.TextBuffer"));
		return ptr;
	}



};

// Class CoreUObject.Field
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UField : public UObject
{
public:
	class UField*                                      Next;                                                      // 0x0030(0x0008) NOT AUTO-GENERATED PROPERTY


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class CoreUObject.Field"));
		return ptr;
	}



};

// Class CoreUObject.Struct
// 0x0080 (FullSize[0x00B8] - InheritedSize[0x0038])
class UStruct : public UField, public FStructBaseChain
{
public:
	class UStruct*                                     SuperField;                                                // 0x0048(0x0008) NOT AUTO-GENERATED PROPERTY
	class UField*                                      Children;                                                  // 0x0050(0x0008) NOT AUTO-GENERATED PROPERTY
	class FField*                                      ChildProperties;                                           // 0x0058(0x0008) NOT AUTO-GENERATED PROPERTY
	int32_t                                            PropertySize;                                              // 0x0060(0x0004) NOT AUTO-GENERATED PROPERTY
	int32_t                                            MinAlignment;                                              // 0x0064(0x0004) NOT AUTO-GENERATED PROPERTY
	TArray<uint8_t_t_t>                                Script;                                                    // 0x0068(0x0010) NOT AUTO-GENERATED PROPERTY
	class FProperty*                                   PropertyLink;                                              // 0x0078(0x0008) NOT AUTO-GENERATED PROPERTY
	class FProperty*                                   RefLink;                                                   // 0x0080(0x0008) NOT AUTO-GENERATED PROPERTY
	class FProperty*                                   DestructorLink;                                            // 0x0088(0x0008) NOT AUTO-GENERATED PROPERTY
	class FProperty*                                   PostConstructLink;                                         // 0x0090(0x0008) NOT AUTO-GENERATED PROPERTY
	TArray<UObject*>                                   ScriptAndPropertyObjectReferences;                         // 0x0098(0x0010) NOT AUTO-GENERATED PROPERTY
	class FUnresolvedScriptPropertiesArray*            UnresolvedScriptProperties;                                // 0x00A8(0x0008) NOT AUTO-GENERATED PROPERTY
	class FUnversionedStructSchema*                    UnversionedSchema;                                         // 0x00B0(0x0008) NOT AUTO-GENERATED PROPERTY


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class CoreUObject.Struct"));
		return ptr;
	}



};

// Class CoreUObject.ScriptStruct
// 0x0010 (FullSize[0x00C8] - InheritedSize[0x00B8])
class UScriptStruct : public UStruct
{
public:
	unsigned char                                      UnknownData_HMOR[0x10];                                    // 0x00B8(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class CoreUObject.ScriptStruct"));
		return ptr;
	}



};

// Class CoreUObject.Package
// 0x0078 (FullSize[0x00A8] - InheritedSize[0x0030])
class UPackage : public UObject
{
public:
	unsigned char                                      UnknownData_B2TZ[0x78];                                    // 0x0030(0x0078) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class CoreUObject.Package"));
		return ptr;
	}



};

// Class CoreUObject.Class
// 0x0188 (FullSize[0x0240] - InheritedSize[0x00B8])
class UClass : public UStruct
{
public:
	unsigned char                                      UnknownData_LTRI[0x188];                                   // 0x00B8(0x0188) MISSED OFFSET (PADDING)


template<typename T>
	inline T* CreateDefaultObject()
	{
		return static_cast<T*>(CreateDefaultObject());
	}

	inline UObject* CreateDefaultObject()
	{
		// return nullptr;
		return GetVFunction<UObject*(*)(UClass*)>(this, /*FUNC_INDEX*/)(this);
	}

	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class CoreUObject.Class"));
		return ptr;
	}



};

// Class CoreUObject.Function
// 0x0030 (FullSize[0x00E8] - InheritedSize[0x00B8])
class UFunction : public UStruct
{
public:
	int32_t                                            FunctionFlags;                                             // 0x00B8(0x0004) NOT AUTO-GENERATED PROPERTY
	uint8_t_t                                          NumParms;                                                  // 0x00BC(0x0001) NOT AUTO-GENERATED PROPERTY
	uint16_t_t                                         ParmsSize;                                                 // 0x00BD(0x0002) NOT AUTO-GENERATED PROPERTY
	unsigned char                                      pad_7L1FPP9UJZ[0x01];                                      // 0x00BF(0x0001) NOT AUTO-GENERATED PROPERTY
	uint16_t_t                                         ReturnValueOffset;                                         // 0x00C0(0x0002) NOT AUTO-GENERATED PROPERTY
	uint16_t_t                                         RPCId;                                                     // 0x00C2(0x0002) NOT AUTO-GENERATED PROPERTY
	uint16_t_t                                         RPCResponseId;                                             // 0x00C4(0x0002) NOT AUTO-GENERATED PROPERTY
	unsigned char                                      pad_CHK9L3W0GQ[0x02];                                      // 0x00C6(0x0002) NOT AUTO-GENERATED PROPERTY
	class UProperty*                                   FirstPropertyToInit;                                       // 0x00C8(0x0008) NOT AUTO-GENERATED PROPERTY
	class UFunction*                                   EventGraphFunction;                                        // 0x00D0(0x0008) NOT AUTO-GENERATED PROPERTY
	int32_t                                            EventGraphCallOffset;                                      // 0x00D8(0x0004) NOT AUTO-GENERATED PROPERTY
	unsigned char                                      pad_RXXDUQY2UA[0x04];                                      // 0x00DC(0x0004) NOT AUTO-GENERATED PROPERTY
	void*                                              Func;                                                      // 0x00E0(0x0008) NOT AUTO-GENERATED PROPERTY


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class CoreUObject.Function"));
		return ptr;
	}



};

// Class CoreUObject.DelegateFunction
// 0x0000 (FullSize[0x00E8] - InheritedSize[0x00E8])
class UDelegateFunction : public UFunction
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class CoreUObject.DelegateFunction"));
		return ptr;
	}



};

// Class CoreUObject.SparseDelegateFunction
// 0x0018 (FullSize[0x0100] - InheritedSize[0x00E8])
class USparseDelegateFunction : public UDelegateFunction
{
public:
	unsigned char                                      UnknownData_P560[0x18];                                    // 0x00E8(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class CoreUObject.SparseDelegateFunction"));
		return ptr;
	}



};

// Class CoreUObject.DynamicClass
// 0x0080 (FullSize[0x02C0] - InheritedSize[0x0240])
class UDynamicClass : public UClass
{
public:
	unsigned char                                      UnknownData_0RPY[0x80];                                    // 0x0240(0x0080) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class CoreUObject.DynamicClass"));
		return ptr;
	}



};

// Class CoreUObject.PackageMap
// 0x00B8 (FullSize[0x00E8] - InheritedSize[0x0030])
class UPackageMap : public UObject
{
public:
	unsigned char                                      UnknownData_HAGJ[0xB8];                                    // 0x0030(0x00B8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class CoreUObject.PackageMap"));
		return ptr;
	}



};

// Class CoreUObject.Enum
// 0x0030 (FullSize[0x0068] - InheritedSize[0x0038])
class UEnum : public UField
{
public:
	unsigned char                                      UnknownData_BXR7[0x30];                                    // 0x0038(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class CoreUObject.Enum"));
		return ptr;
	}



};

// Class CoreUObject.LinkerPlaceholderClass
// 0x01B8 (FullSize[0x03F8] - InheritedSize[0x0240])
class ULinkerPlaceholderClass : public UClass
{
public:
	unsigned char                                      UnknownData_K8TZ[0x1B8];                                   // 0x0240(0x01B8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class CoreUObject.LinkerPlaceholderClass"));
		return ptr;
	}



};

// Class CoreUObject.LinkerPlaceholderExportObject
// 0x00C8 (FullSize[0x00F8] - InheritedSize[0x0030])
class ULinkerPlaceholderExportObject : public UObject
{
public:
	unsigned char                                      UnknownData_KCD6[0xC8];                                    // 0x0030(0x00C8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class CoreUObject.LinkerPlaceholderExportObject"));
		return ptr;
	}



};

// Class CoreUObject.LinkerPlaceholderFunction
// 0x01B8 (FullSize[0x02A0] - InheritedSize[0x00E8])
class ULinkerPlaceholderFunction : public UFunction
{
public:
	unsigned char                                      UnknownData_BBWW[0x1B8];                                   // 0x00E8(0x01B8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class CoreUObject.LinkerPlaceholderFunction"));
		return ptr;
	}



};

// Class CoreUObject.MetaData
// 0x00A0 (FullSize[0x00D0] - InheritedSize[0x0030])
class UMetaData : public UObject
{
public:
	unsigned char                                      UnknownData_LI6V[0xA0];                                    // 0x0030(0x00A0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class CoreUObject.MetaData"));
		return ptr;
	}



};

// Class CoreUObject.ObjectRedirector
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UObjectRedirector : public UObject
{
public:
	unsigned char                                      UnknownData_7A1H[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class CoreUObject.ObjectRedirector"));
		return ptr;
	}



};

// Class CoreUObject.Property
// 0x0048 (FullSize[0x0080] - InheritedSize[0x0038])
class UProperty : public UField
{
public:
	unsigned char                                      UnknownData_833V[0x48];                                    // 0x0038(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class CoreUObject.Property"));
		return ptr;
	}



};

// Class CoreUObject.EnumProperty
// 0x0010 (FullSize[0x0090] - InheritedSize[0x0080])
class UEnumProperty : public UProperty
{
public:
	unsigned char                                      UnknownData_3BWQ[0x10];                                    // 0x0080(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class CoreUObject.EnumProperty"));
		return ptr;
	}



};

// Class CoreUObject.ArrayProperty
// 0x0008 (FullSize[0x0088] - InheritedSize[0x0080])
class UArrayProperty : public UProperty
{
public:
	unsigned char                                      UnknownData_ULJA[0x8];                                     // 0x0080(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class CoreUObject.ArrayProperty"));
		return ptr;
	}



};

// Class CoreUObject.ObjectPropertyBase
// 0x0008 (FullSize[0x0088] - InheritedSize[0x0080])
class UObjectPropertyBase : public UProperty
{
public:
	unsigned char                                      UnknownData_ED3E[0x8];                                     // 0x0080(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class CoreUObject.ObjectPropertyBase"));
		return ptr;
	}



};

// Class CoreUObject.BoolProperty
// 0x0008 (FullSize[0x0088] - InheritedSize[0x0080])
class UBoolProperty : public UProperty
{
public:
	unsigned char                                      UnknownData_2SGN[0x8];                                     // 0x0080(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class CoreUObject.BoolProperty"));
		return ptr;
	}



};

// Class CoreUObject.NumericProperty
// 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
class UNumericProperty : public UProperty
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class CoreUObject.NumericProperty"));
		return ptr;
	}



};

// Class CoreUObject.ByteProperty
// 0x0008 (FullSize[0x0088] - InheritedSize[0x0080])
class UByteProperty : public UNumericProperty
{
public:
	unsigned char                                      UnknownData_2AYZ[0x8];                                     // 0x0080(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class CoreUObject.ByteProperty"));
		return ptr;
	}



};

// Class CoreUObject.ObjectProperty
// 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
class UObjectProperty : public UObjectPropertyBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class CoreUObject.ObjectProperty"));
		return ptr;
	}



};

// Class CoreUObject.ClassProperty
// 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
class UClassProperty : public UObjectProperty
{
public:
	unsigned char                                      UnknownData_YXM9[0x8];                                     // 0x0088(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class CoreUObject.ClassProperty"));
		return ptr;
	}



};

// Class CoreUObject.DelegateProperty
// 0x0008 (FullSize[0x0088] - InheritedSize[0x0080])
class UDelegateProperty : public UProperty
{
public:
	unsigned char                                      UnknownData_AID4[0x8];                                     // 0x0080(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class CoreUObject.DelegateProperty"));
		return ptr;
	}



};

// Class CoreUObject.DoubleProperty
// 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
class UDoubleProperty : public UNumericProperty
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class CoreUObject.DoubleProperty"));
		return ptr;
	}



};

// Class CoreUObject.FloatProperty
// 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
class UFloatProperty : public UNumericProperty
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class CoreUObject.FloatProperty"));
		return ptr;
	}



};

// Class CoreUObject.IntProperty
// 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
class UIntProperty : public UNumericProperty
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class CoreUObject.IntProperty"));
		return ptr;
	}



};

// Class CoreUObject.Int8Property
// 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
class UInt8Property : public UNumericProperty
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class CoreUObject.Int8Property"));
		return ptr;
	}



};

// Class CoreUObject.Int16Property
// 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
class UInt16Property : public UNumericProperty
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class CoreUObject.Int16Property"));
		return ptr;
	}



};

// Class CoreUObject.Int64Property
// 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
class UInt64Property : public UNumericProperty
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class CoreUObject.Int64Property"));
		return ptr;
	}



};

// Class CoreUObject.InterfaceProperty
// 0x0008 (FullSize[0x0088] - InheritedSize[0x0080])
class UInterfaceProperty : public UProperty
{
public:
	unsigned char                                      UnknownData_KFUM[0x8];                                     // 0x0080(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class CoreUObject.InterfaceProperty"));
		return ptr;
	}



};

// Class CoreUObject.LazyObjectProperty
// 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
class ULazyObjectProperty : public UObjectPropertyBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class CoreUObject.LazyObjectProperty"));
		return ptr;
	}



};

// Class CoreUObject.MapProperty
// 0x0028 (FullSize[0x00A8] - InheritedSize[0x0080])
class UMapProperty : public UProperty
{
public:
	unsigned char                                      UnknownData_15GS[0x28];                                    // 0x0080(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class CoreUObject.MapProperty"));
		return ptr;
	}



};

// Class CoreUObject.MulticastDelegateProperty
// 0x0008 (FullSize[0x0088] - InheritedSize[0x0080])
class UMulticastDelegateProperty : public UProperty
{
public:
	unsigned char                                      UnknownData_5AMB[0x8];                                     // 0x0080(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class CoreUObject.MulticastDelegateProperty"));
		return ptr;
	}



};

// Class CoreUObject.MulticastInlineDelegateProperty
// 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
class UMulticastInlineDelegateProperty : public UMulticastDelegateProperty
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class CoreUObject.MulticastInlineDelegateProperty"));
		return ptr;
	}



};

// Class CoreUObject.MulticastSparseDelegateProperty
// 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
class UMulticastSparseDelegateProperty : public UMulticastDelegateProperty
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class CoreUObject.MulticastSparseDelegateProperty"));
		return ptr;
	}



};

// Class CoreUObject.NameProperty
// 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
class UNameProperty : public UProperty
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class CoreUObject.NameProperty"));
		return ptr;
	}



};

// Class CoreUObject.SetProperty
// 0x0020 (FullSize[0x00A0] - InheritedSize[0x0080])
class USetProperty : public UProperty
{
public:
	unsigned char                                      UnknownData_G4V1[0x20];                                    // 0x0080(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class CoreUObject.SetProperty"));
		return ptr;
	}



};

// Class CoreUObject.SoftObjectProperty
// 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
class USoftObjectProperty : public UObjectPropertyBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class CoreUObject.SoftObjectProperty"));
		return ptr;
	}



};

// Class CoreUObject.SoftClassProperty
// 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
class USoftClassProperty : public USoftObjectProperty
{
public:
	unsigned char                                      UnknownData_KMZS[0x8];                                     // 0x0088(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class CoreUObject.SoftClassProperty"));
		return ptr;
	}



};

// Class CoreUObject.StrProperty
// 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
class UStrProperty : public UProperty
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class CoreUObject.StrProperty"));
		return ptr;
	}



};

// Class CoreUObject.StructProperty
// 0x0008 (FullSize[0x0088] - InheritedSize[0x0080])
class UStructProperty : public UProperty
{
public:
	unsigned char                                      UnknownData_SYCB[0x8];                                     // 0x0080(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class CoreUObject.StructProperty"));
		return ptr;
	}



};

// Class CoreUObject.UInt16Property
// 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
class UUInt16Property : public UNumericProperty
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class CoreUObject.UInt16Property"));
		return ptr;
	}



};

// Class CoreUObject.UInt32Property
// 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
class UUInt32Property : public UNumericProperty
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class CoreUObject.UInt32Property"));
		return ptr;
	}



};

// Class CoreUObject.UInt64Property
// 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
class UUInt64Property : public UNumericProperty
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class CoreUObject.UInt64Property"));
		return ptr;
	}



};

// Class CoreUObject.WeakObjectProperty
// 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
class UWeakObjectProperty : public UObjectPropertyBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class CoreUObject.WeakObjectProperty"));
		return ptr;
	}



};

// Class CoreUObject.TextProperty
// 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
class UTextProperty : public UProperty
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class CoreUObject.TextProperty"));
		return ptr;
	}



};

// Class CoreUObject.PropertyWrapper
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UPropertyWrapper : public UObject
{
public:
	unsigned char                                      UnknownData_2827[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class CoreUObject.PropertyWrapper"));
		return ptr;
	}



};

// Class CoreUObject.MulticastDelegatePropertyWrapper
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class UMulticastDelegatePropertyWrapper : public UPropertyWrapper
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class CoreUObject.MulticastDelegatePropertyWrapper"));
		return ptr;
	}



};

// Class CoreUObject.MulticastInlineDelegatePropertyWrapper
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class UMulticastInlineDelegatePropertyWrapper : public UMulticastDelegatePropertyWrapper
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass(_xor_("Class CoreUObject.MulticastInlineDelegatePropertyWrapper"));
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
