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
// Parameters
//---------------------------------------------------------------------------

// Function CustomMeshComponent.CustomMeshComponent.SetCustomMeshTriangles
struct UCustomMeshComponent_SetCustomMeshTriangles_Params
{
	TArray<struct FCustomMeshTriangle>                 Triangles;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CustomMeshComponent.CustomMeshComponent.ClearCustomMeshTriangles
struct UCustomMeshComponent_ClearCustomMeshTriangles_Params
{
};

// Function CustomMeshComponent.CustomMeshComponent.AddCustomMeshTriangles
struct UCustomMeshComponent_AddCustomMeshTriangles_Params
{
	TArray<struct FCustomMeshTriangle>                 Triangles;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
