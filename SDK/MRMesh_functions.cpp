﻿// Name: DBD, Version: 5.3.2

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x036A0A10
//		Name   -> Function MRMesh.MeshReconstructorBase.StopReconstruction
//		Flags  -> (Native, Public, BlueprintCallable)
void UMeshReconstructorBase::StopReconstruction()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MRMesh.MeshReconstructorBase.StopReconstruction"));

	UMeshReconstructorBase_StopReconstruction_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x047EE2E0
//		Name   -> Function MRMesh.MeshReconstructorBase.StartReconstruction
//		Flags  -> (Native, Public, BlueprintCallable)
void UMeshReconstructorBase::StartReconstruction()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MRMesh.MeshReconstructorBase.StartReconstruction"));

	UMeshReconstructorBase_StartReconstruction_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x036A05B0
//		Name   -> Function MRMesh.MeshReconstructorBase.PauseReconstruction
//		Flags  -> (Native, Public, BlueprintCallable)
void UMeshReconstructorBase::PauseReconstruction()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MRMesh.MeshReconstructorBase.PauseReconstruction"));

	UMeshReconstructorBase_PauseReconstruction_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x047EE2B0
//		Name   -> Function MRMesh.MeshReconstructorBase.IsReconstructionStarted
//		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMeshReconstructorBase::IsReconstructionStarted()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MRMesh.MeshReconstructorBase.IsReconstructionStarted"));

	UMeshReconstructorBase_IsReconstructionStarted_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x047EE280
//		Name   -> Function MRMesh.MeshReconstructorBase.IsReconstructionPaused
//		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMeshReconstructorBase::IsReconstructionPaused()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MRMesh.MeshReconstructorBase.IsReconstructionPaused"));

	UMeshReconstructorBase_IsReconstructionPaused_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x047EE180
//		Name   -> Function MRMesh.MeshReconstructorBase.DisconnectMRMesh
//		Flags  -> (Native, Public)
void UMeshReconstructorBase::DisconnectMRMesh()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MRMesh.MeshReconstructorBase.DisconnectMRMesh"));

	UMeshReconstructorBase_DisconnectMRMesh_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x047EE070
//		Name   -> Function MRMesh.MeshReconstructorBase.ConnectMRMesh
//		Flags  -> (Native, Public)
// Parameters:
//		class UMRMeshComponent*                            Mesh                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMeshReconstructorBase::ConnectMRMesh(class UMRMeshComponent* Mesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MRMesh.MeshReconstructorBase.ConnectMRMesh"));

	UMeshReconstructorBase_ConnectMRMesh_Params params {};
	params.Mesh = Mesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> DelegateFunction MRMesh.MockDataMeshTrackerComponent.OnMockDataMeshTrackerUpdated__DelegateSignature
//		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FVector>                             Vertices                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<int>                                        Triangles                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FVector>                             Normals                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<float>                                      Confidence                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMockDataMeshTrackerComponent::OnMockDataMeshTrackerUpdated__DelegateSignature(int Index, TArray<struct FVector> Vertices, TArray<int> Triangles, TArray<struct FVector> Normals, TArray<float> Confidence)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction MRMesh.MockDataMeshTrackerComponent.OnMockDataMeshTrackerUpdated__DelegateSignature"));

	UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature_Params params {};
	params.Index = Index;
	params.Vertices = Vertices;
	params.Triangles = Triangles;
	params.Normals = Normals;
	params.Confidence = Confidence;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x047EE1A0
//		Name   -> Function MRMesh.MockDataMeshTrackerComponent.DisconnectMRMesh
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UMRMeshComponent*                            InMRMeshPtr                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMockDataMeshTrackerComponent::DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MRMesh.MockDataMeshTrackerComponent.DisconnectMRMesh"));

	UMockDataMeshTrackerComponent_DisconnectMRMesh_Params params {};
	params.InMRMeshPtr = InMRMeshPtr;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x047EE100
//		Name   -> Function MRMesh.MockDataMeshTrackerComponent.ConnectMRMesh
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UMRMeshComponent*                            InMRMeshPtr                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMockDataMeshTrackerComponent::ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MRMesh.MockDataMeshTrackerComponent.ConnectMRMesh"));

	UMockDataMeshTrackerComponent_ConnectMRMesh_Params params {};
	params.InMRMeshPtr = InMRMeshPtr;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x047EE240
//		Name   -> Function MRMesh.MRMeshComponent.IsConnected
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMRMeshComponent::IsConnected()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MRMesh.MRMeshComponent.IsConnected"));

	UMRMeshComponent_IsConnected_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x047EE220
//		Name   -> Function MRMesh.MRMeshComponent.ForceNavMeshUpdate
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UMRMeshComponent::ForceNavMeshUpdate()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MRMesh.MRMeshComponent.ForceNavMeshUpdate"));

	UMRMeshComponent_ForceNavMeshUpdate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x047EE040
//		Name   -> Function MRMesh.MRMeshComponent.Clear
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UMRMeshComponent::Clear()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MRMesh.MRMeshComponent.Clear"));

	UMRMeshComponent_Clear_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
