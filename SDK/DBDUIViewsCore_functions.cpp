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
//		Offset -> 0x02ADC860
//		Name   -> Function DBDUIViewsCore.CoreBaseUserWidget.UpdateScale
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreBaseUserWidget::UpdateScale(float Scale)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreBaseUserWidget.UpdateScale"));

	UCoreBaseUserWidget_UpdateScale_Params params {};
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02ADBC60
//		Name   -> Function DBDUIViewsCore.CoreBaseUserWidget.RegisterForInput
//		Flags  -> (Final, Native, Protected, BlueprintCallable)
void UCoreBaseUserWidget::RegisterForInput()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreBaseUserWidget.RegisterForInput"));

	UCoreBaseUserWidget_RegisterForInput_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function DBDUIViewsCore.CoreBaseUserWidget.OnControlModeChangedBP
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		DBDSharedTypes_EControlMode                        controlMode                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreBaseUserWidget::OnControlModeChangedBP(DBDSharedTypes_EControlMode controlMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreBaseUserWidget.OnControlModeChangedBP"));

	UCoreBaseUserWidget_OnControlModeChangedBP_Params params {};
	params.controlMode = controlMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02ADB710
//		Name   -> Function DBDUIViewsCore.CoreBaseUserWidget.DeregisterFromInput
//		Flags  -> (Final, Native, Protected, BlueprintCallable)
void UCoreBaseUserWidget::DeregisterFromInput()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreBaseUserWidget.DeregisterFromInput"));

	UCoreBaseUserWidget_DeregisterFromInput_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function DBDUIViewsCore.CharacterTooltipWidget.SetTooltipData
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FCharacterTooltipViewData                   characterViewData                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UCharacterTooltipWidget::SetTooltipData(const struct FCharacterTooltipViewData& characterViewData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CharacterTooltipWidget.SetTooltipData"));

	UCharacterTooltipWidget_SetTooltipData_Params params {};
	params.characterViewData = characterViewData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02ADC190
//		Name   -> Function DBDUIViewsCore.CharacterTooltipWidget.SetLevel
//		Flags  -> (Final, Native, Protected, BlueprintCallable)
// Parameters:
//		int                                                Level                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCharacterTooltipWidget::SetLevel(int Level)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CharacterTooltipWidget.SetLevel"));

	UCharacterTooltipWidget_SetLevel_Params params {};
	params.Level = Level;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02ADBE20
//		Name   -> Function DBDUIViewsCore.CharacterTooltipWidget.SetDifficulty
//		Flags  -> (Final, Native, Protected, BlueprintCallable)
// Parameters:
//		DBDSharedTypes_ECharacterDifficulty                Difficulty                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCharacterTooltipWidget::SetDifficulty(DBDSharedTypes_ECharacterDifficulty Difficulty)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CharacterTooltipWidget.SetDifficulty"));

	UCharacterTooltipWidget_SetDifficulty_Params params {};
	params.Difficulty = Difficulty;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02ADC3A0
//		Name   -> Function DBDUIViewsCore.CoreBaseLoadoutPartWidget.SetLoadoutStackCount
//		Flags  -> (Final, Native, Protected, BlueprintCallable)
// Parameters:
//		int                                                StackCount                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreBaseLoadoutPartWidget::SetLoadoutStackCount(int StackCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreBaseLoadoutPartWidget.SetLoadoutStackCount"));

	UCoreBaseLoadoutPartWidget_SetLoadoutStackCount_Params params {};
	params.StackCount = StackCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02ADC320
//		Name   -> Function DBDUIViewsCore.CoreBaseLoadoutPartWidget.SetLoadoutPartRarity
//		Flags  -> (Final, Native, Protected, BlueprintCallable)
// Parameters:
//		DBDSharedTypes_EItemRarity                         Rarity                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreBaseLoadoutPartWidget::SetLoadoutPartRarity(DBDSharedTypes_EItemRarity Rarity)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreBaseLoadoutPartWidget.SetLoadoutPartRarity"));

	UCoreBaseLoadoutPartWidget_SetLoadoutPartRarity_Params params {};
	params.Rarity = Rarity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02ADC210
//		Name   -> Function DBDUIViewsCore.CoreBaseLoadoutPartWidget.SetLoadoutPartIcon
//		Flags  -> (Final, Native, Protected, BlueprintCallable)
void UCoreBaseLoadoutPartWidget::SetLoadoutPartIcon()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreBaseLoadoutPartWidget.SetLoadoutPartIcon"));

	UCoreBaseLoadoutPartWidget_SetLoadoutPartIcon_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02ADC790
//		Name   -> Function DBDUIViewsCore.CoreBaseHudWidget.ShouldPlayFocusAnimation
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UCoreBaseHudWidget::ShouldPlayFocusAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreBaseHudWidget.ShouldPlayFocusAnimation"));

	UCoreBaseHudWidget_ShouldPlayFocusAnimation_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02ADBAC0
//		Name   -> Function DBDUIViewsCore.CoreBaseHudWidget.PlayFocusAnimation
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
void UCoreBaseHudWidget::PlayFocusAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreBaseHudWidget.PlayFocusAnimation"));

	UCoreBaseHudWidget_PlayFocusAnimation_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02ADC4B0
//		Name   -> Function DBDUIViewsCore.CoreButtonPromptWidget.SetText
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UCoreButtonPromptWidget::SetText(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreButtonPromptWidget.SetText"));

	UCoreButtonPromptWidget_SetText_Params params {};
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02ADC0C0
//		Name   -> Function DBDUIViewsCore.CoreButtonPromptWidget.SetInputKey
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FKey                                        Key                                                        (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreButtonPromptWidget::SetInputKey(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreButtonPromptWidget.SetInputKey"));

	UCoreButtonPromptWidget_SetInputKey_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02ADBC80
//		Name   -> Function DBDUIViewsCore.CoreButtonPromptWidget.SetAction
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		DBDInput_EUIActionType                             actionType                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreButtonPromptWidget::SetAction(DBDInput_EUIActionType actionType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreButtonPromptWidget.SetAction"));

	UCoreButtonPromptWidget_SetAction_Params params {};
	params.actionType = actionType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function DBDUIViewsCore.CoreButtonPromptWidget.EnablePrompts
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void UCoreButtonPromptWidget::EnablePrompts()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreButtonPromptWidget.EnablePrompts"));

	UCoreButtonPromptWidget_EnablePrompts_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function DBDUIViewsCore.CoreButtonPromptWidget.DisablePrompts
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void UCoreButtonPromptWidget::DisablePrompts()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreButtonPromptWidget.DisablePrompts"));

	UCoreButtonPromptWidget_DisablePrompts_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02ADC710
//		Name   -> Function DBDUIViewsCore.CoreButtonWidget.SetVisible
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		DBDUIViewsCore_EButtonWidgetVisibility             visible                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreButtonWidget::SetVisible(DBDUIViewsCore_EButtonWidgetVisibility visible)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreButtonWidget.SetVisible"));

	UCoreButtonWidget_SetVisible_Params params {};
	params.visible = visible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02ADC420
//		Name   -> Function DBDUIViewsCore.CoreButtonWidget.SetPressable
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               isPressable                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreButtonWidget::SetPressable(bool isPressable)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreButtonWidget.SetPressable"));

	UCoreButtonWidget_SetPressable_Params params {};
	params.isPressable = isPressable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02ADC030
//		Name   -> Function DBDUIViewsCore.CoreButtonWidget.SetHoverable
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               isHoverable                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreButtonWidget::SetHoverable(bool isHoverable)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreButtonWidget.SetHoverable"));

	UCoreButtonWidget_SetHoverable_Params params {};
	params.isHoverable = isHoverable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02ADBFB0
//		Name   -> Function DBDUIViewsCore.CoreButtonWidget.SetHoldable
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               isHoldable                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreButtonWidget::SetHoldable(bool isHoldable)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreButtonWidget.SetHoldable"));

	UCoreButtonWidget_SetHoldable_Params params {};
	params.isHoldable = isHoldable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02ADBEA0
//		Name   -> Function DBDUIViewsCore.CoreButtonWidget.SetEnabled
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               IsEnabled                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreButtonWidget::SetEnabled(bool IsEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreButtonWidget.SetEnabled"));

	UCoreButtonWidget_SetEnabled_Params params {};
	params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02ADBD80
//		Name   -> Function DBDUIViewsCore.CoreButtonWidget.SetClickable
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               isClickable                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreButtonWidget::SetClickable(bool isClickable)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreButtonWidget.SetClickable"));

	UCoreButtonWidget_SetClickable_Params params {};
	params.isClickable = isClickable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02ADBD00
//		Name   -> Function DBDUIViewsCore.CoreButtonWidget.SetChargeable
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               isChargeable                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreButtonWidget::SetChargeable(bool isChargeable)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreButtonWidget.SetChargeable"));

	UCoreButtonWidget_SetChargeable_Params params {};
	params.isChargeable = isChargeable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function DBDUIViewsCore.CoreButtonWidget.OnUnhovered
//		Flags  -> (Event, Protected, BlueprintEvent)
void UCoreButtonWidget::OnUnhovered()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreButtonWidget.OnUnhovered"));

	UCoreButtonWidget_OnUnhovered_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function DBDUIViewsCore.CoreButtonWidget.OnReleased
//		Flags  -> (Event, Protected, BlueprintEvent)
void UCoreButtonWidget::OnReleased()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreButtonWidget.OnReleased"));

	UCoreButtonWidget_OnReleased_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function DBDUIViewsCore.CoreButtonWidget.OnPressed
//		Flags  -> (Event, Protected, BlueprintEvent)
void UCoreButtonWidget::OnPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreButtonWidget.OnPressed"));

	UCoreButtonWidget_OnPressed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02ADBB20
//		Name   -> Function DBDUIViewsCore.CoreButtonWidget.OnInternalUnhovered
//		Flags  -> (Native, Protected)
void UCoreButtonWidget::OnInternalUnhovered()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreButtonWidget.OnInternalUnhovered"));

	UCoreButtonWidget_OnInternalUnhovered_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02ADBB00
//		Name   -> Function DBDUIViewsCore.CoreButtonWidget.OnInternalReleased
//		Flags  -> (Native, Protected)
void UCoreButtonWidget::OnInternalReleased()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreButtonWidget.OnInternalReleased"));

	UCoreButtonWidget_OnInternalReleased_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02ADBAE0
//		Name   -> Function DBDUIViewsCore.CoreButtonWidget.OnInternalPressed
//		Flags  -> (Native, Protected)
void UCoreButtonWidget::OnInternalPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreButtonWidget.OnInternalPressed"));

	UCoreButtonWidget_OnInternalPressed_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02ADBAC0
//		Name   -> Function DBDUIViewsCore.CoreButtonWidget.OnInternalHovered
//		Flags  -> (Native, Protected)
void UCoreButtonWidget::OnInternalHovered()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreButtonWidget.OnInternalHovered"));

	UCoreButtonWidget_OnInternalHovered_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02ADBAA0
//		Name   -> Function DBDUIViewsCore.CoreButtonWidget.OnInternalClicked
//		Flags  -> (Native, Protected)
void UCoreButtonWidget::OnInternalClicked()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreButtonWidget.OnInternalClicked"));

	UCoreButtonWidget_OnInternalClicked_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function DBDUIViewsCore.CoreButtonWidget.OnHovered
//		Flags  -> (Event, Protected, BlueprintEvent)
void UCoreButtonWidget::OnHovered()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreButtonWidget.OnHovered"));

	UCoreButtonWidget_OnHovered_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function DBDUIViewsCore.CoreButtonWidget.OnClicked
//		Flags  -> (Event, Protected, BlueprintEvent)
void UCoreButtonWidget::OnClicked()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreButtonWidget.OnClicked"));

	UCoreButtonWidget_OnClicked_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AE82D0
//		Name   -> Function DBDUIViewsCore.CoreRewardWidget.GetHitZone
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UDBDButton*                                  ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UDBDButton* UCoreRewardWidget::GetHitZone()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreRewardWidget.GetHitZone"));

	UCoreRewardWidget_GetHitZone_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function DBDUIViewsCore.CoreRewardWidget.ClearData
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void UCoreRewardWidget::ClearData()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreRewardWidget.ClearData"));

	UCoreRewardWidget_ClearData_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function DBDUIViewsCore.CoreCharacterRewardWidget.SetData
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FCharacterRewardViewData                    CharacterRewardViewData                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UCoreCharacterRewardWidget::SetData(const struct FCharacterRewardViewData& CharacterRewardViewData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreCharacterRewardWidget.SetData"));

	UCoreCharacterRewardWidget_SetData_Params params {};
	params.CharacterRewardViewData = CharacterRewardViewData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function DBDUIViewsCore.CoreCurrencyRewardWidget.SetData
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FCurrencyRewardViewData                     CurrencyRewardViewData                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UCoreCurrencyRewardWidget::SetData(const struct FCurrencyRewardViewData& CurrencyRewardViewData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreCurrencyRewardWidget.SetData"));

	UCoreCurrencyRewardWidget_SetData_Params params {};
	params.CurrencyRewardViewData = CurrencyRewardViewData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function DBDUIViewsCore.CoreCustomizationRewardWidget.SetData
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FCustomizationRewardViewData                CustomizationRewardViewData                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UCoreCustomizationRewardWidget::SetData(const struct FCustomizationRewardViewData& CustomizationRewardViewData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreCustomizationRewardWidget.SetData"));

	UCoreCustomizationRewardWidget_SetData_Params params {};
	params.CustomizationRewardViewData = CustomizationRewardViewData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function DBDUIViewsCore.CoreEndGameCollapseBarWidget.UpdateBarProgression
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		float                                              Progress                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreEndGameCollapseBarWidget::UpdateBarProgression(float Progress)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreEndGameCollapseBarWidget.UpdateBarProgression"));

	UCoreEndGameCollapseBarWidget_UpdateBarProgression_Params params {};
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function DBDUIViewsCore.CoreEndGameCollapseBarWidget.PlayToZeroAnimation
//		Flags  -> (Event, Protected, BlueprintEvent)
void UCoreEndGameCollapseBarWidget::PlayToZeroAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreEndGameCollapseBarWidget.PlayToZeroAnimation"));

	UCoreEndGameCollapseBarWidget_PlayToZeroAnimation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02ADB980
//		Name   -> Function DBDUIViewsCore.CoreExternalEffectsWidget.HideExternalPerk
//		Flags  -> (Final, Native, Private, HasOutParms)
// Parameters:
//		struct FName                                       PerkId                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreExternalEffectsWidget::HideExternalPerk(const struct FName& PerkId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreExternalEffectsWidget.HideExternalPerk"));

	UCoreExternalEffectsWidget_HideExternalPerk_Params params {};
	params.PerkId = PerkId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02ADB8E0
//		Name   -> Function DBDUIViewsCore.CoreExternalEffectsWidget.HideExternalAddon
//		Flags  -> (Final, Native, Private, HasOutParms)
// Parameters:
//		struct FName                                       AddonID                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreExternalEffectsWidget::HideExternalAddon(const struct FName& AddonID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreExternalEffectsWidget.HideExternalAddon"));

	UCoreExternalEffectsWidget_HideExternalAddon_Params params {};
	params.AddonID = AddonID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02ADC580
//		Name   -> Function DBDUIViewsCore.CoreGameManualCategoryButton.SetText
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FText                                       Title                                                      (ConstParm, Parm, NativeAccessSpecifierPublic)
//		struct FText                                       Description                                                (ConstParm, Parm, NativeAccessSpecifierPublic)
void UCoreGameManualCategoryButton::SetText(const struct FText& Title, const struct FText& Description)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreGameManualCategoryButton.SetText"));

	UCoreGameManualCategoryButton_SetText_Params params {};
	params.Title = Title;
	params.Description = Description;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02ADC840
//		Name   -> Function DBDUIViewsCore.CoreGameManualPanelWidget.ToggleGameManualMenuState
//		Flags  -> (Final, Native, Protected, BlueprintCallable)
void UCoreGameManualPanelWidget::ToggleGameManualMenuState()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreGameManualPanelWidget.ToggleGameManualMenuState"));

	UCoreGameManualPanelWidget_ToggleGameManualMenuState_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02ADC7C0
//		Name   -> Function DBDUIViewsCore.CoreGameManualPanelWidget.ShowHelpTopics
//		Flags  -> (Final, Native, Protected, BlueprintCallable)
// Parameters:
//		DBDSharedTypes_EHelpType                           categoryType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreGameManualPanelWidget::ShowHelpTopics(DBDSharedTypes_EHelpType categoryType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreGameManualPanelWidget.ShowHelpTopics"));

	UCoreGameManualPanelWidget_ShowHelpTopics_Params params {};
	params.categoryType = categoryType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02ADBF30
//		Name   -> Function DBDUIViewsCore.CoreGameManualPanelWidget.SetGameManualMenuState
//		Flags  -> (Final, Native, Protected, BlueprintCallable)
// Parameters:
//		DBDUIViewInterfaces_EGameManualMenuState           menuState                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreGameManualPanelWidget::SetGameManualMenuState(DBDUIViewInterfaces_EGameManualMenuState menuState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreGameManualPanelWidget.SetGameManualMenuState"));

	UCoreGameManualPanelWidget_SetGameManualMenuState_Params params {};
	params.menuState = menuState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02ADBE00
//		Name   -> Function DBDUIViewsCore.CoreGameManualPanelWidget.SetCurrentOnbardingMenuSubtitle
//		Flags  -> (Final, Native, Protected, BlueprintCallable)
void UCoreGameManualPanelWidget::SetCurrentOnbardingMenuSubtitle()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreGameManualPanelWidget.SetCurrentOnbardingMenuSubtitle"));

	UCoreGameManualPanelWidget_SetCurrentOnbardingMenuSubtitle_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function DBDUIViewsCore.CoreGameManualPanelWidget.ResetScrolls
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               resetTopicsScroll                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreGameManualPanelWidget::ResetScrolls(bool resetTopicsScroll)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreGameManualPanelWidget.ResetScrolls"));

	UCoreGameManualPanelWidget_ResetScrolls_Params params {};
	params.resetTopicsScroll = resetTopicsScroll;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02ADBBC0
//		Name   -> Function DBDUIViewsCore.CoreGameManualPanelWidget.OnTopicTabChanged
//		Flags  -> (Final, Native, Protected)
// Parameters:
//		int                                                tabIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreGameManualPanelWidget::OnTopicTabChanged(int tabIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreGameManualPanelWidget.OnTopicTabChanged"));

	UCoreGameManualPanelWidget_OnTopicTabChanged_Params params {};
	params.tabIndex = tabIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02ADBC40
//		Name   -> Function DBDUIViewsCore.CoreHudAlertWidget.PopAlert
//		Flags  -> (Final, Native, Private)
void UCoreHudAlertWidget::PopAlert()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreHudAlertWidget.PopAlert"));

	UCoreHudAlertWidget_PopAlert_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02ADBB40
//		Name   -> Function DBDUIViewsCore.CoreHudAlertWidget.OnPopAlertComplete
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class UUITweenInstance*                            tween                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreHudAlertWidget::OnPopAlertComplete(class UUITweenInstance* tween)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreHudAlertWidget.OnPopAlertComplete"));

	UCoreHudAlertWidget_OnPopAlertComplete_Params params {};
	params.tween = tween;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02ADBA20
//		Name   -> Function DBDUIViewsCore.CoreHudAlertWidget.OnClearAlertsComplete
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class UUITweenInstance*                            tween                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreHudAlertWidget::OnClearAlertsComplete(class UUITweenInstance* tween)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreHudAlertWidget.OnClearAlertsComplete"));

	UCoreHudAlertWidget_OnClearAlertsComplete_Params params {};
	params.tween = tween;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02ADB8B0
//		Name   -> Function DBDUIViewsCore.CoreHudAlertWidget.GetRemainingTime
//		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UCoreHudAlertWidget::GetRemainingTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreHudAlertWidget.GetRemainingTime"));

	UCoreHudAlertWidget_GetRemainingTime_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02ADB7F0
//		Name   -> Function DBDUIViewsCore.CoreHudAlertWidget.GetPendingAlerts
//		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		TArray<class UCoreBaseUserWidget*>                 ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<class UCoreBaseUserWidget*> UCoreHudAlertWidget::GetPendingAlerts()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreHudAlertWidget.GetPendingAlerts"));

	UCoreHudAlertWidget_GetPendingAlerts_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02ADB730
//		Name   -> Function DBDUIViewsCore.CoreHudAlertWidget.GetAlerts
//		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		TArray<class UCoreBaseUserWidget*>                 ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<class UCoreBaseUserWidget*> UCoreHudAlertWidget::GetAlerts()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreHudAlertWidget.GetAlerts"));

	UCoreHudAlertWidget_GetAlerts_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02ADB6F0
//		Name   -> Function DBDUIViewsCore.CoreHudAlertWidget.ClearAlerts
//		Flags  -> (Final, Native, Private)
void UCoreHudAlertWidget::ClearAlerts()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreHudAlertWidget.ClearAlerts"));

	UCoreHudAlertWidget_ClearAlerts_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function DBDUIViewsCore.CoreHudScoreAlertItem.SetData
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FScoreAlertViewData                         Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UCoreHudScoreAlertItem::SetData(const struct FScoreAlertViewData& Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreHudScoreAlertItem.SetData"));

	UCoreHudScoreAlertItem_SetData_Params params {};
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function DBDUIViewsCore.CoreHudStatusEffectAlertItem.SetData
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FStatusEffectAlertViewData                  Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UCoreHudStatusEffectAlertItem::SetData(const struct FStatusEffectAlertViewData& Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreHudStatusEffectAlertItem.SetData"));

	UCoreHudStatusEffectAlertItem_SetData_Params params {};
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AE2E50
//		Name   -> Function DBDUIViewsCore.CoreInputPromptTextWidget.SetText
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UCoreInputPromptTextWidget::SetText(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreInputPromptTextWidget.SetText"));

	UCoreInputPromptTextWidget_SetText_Params params {};
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AE2BE0
//		Name   -> Function DBDUIViewsCore.CoreInputPromptTextWidget.SetInputKey
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FKey                                        InputKey                                                   (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreInputPromptTextWidget::SetInputKey(const struct FKey& InputKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreInputPromptTextWidget.SetInputKey"));

	UCoreInputPromptTextWidget_SetInputKey_Params params {};
	params.InputKey = InputKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AE2CB0
//		Name   -> Function DBDUIViewsCore.CoreInputPromptWidget.SetInputKey
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FKey                                        InputKey                                                   (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreInputPromptWidget::SetInputKey(const struct FKey& InputKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreInputPromptWidget.SetInputKey"));

	UCoreInputPromptWidget_SetInputKey_Params params {};
	params.InputKey = InputKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AE28C0
//		Name   -> Function DBDUIViewsCore.CoreInputPromptWidget.PromptNotFound
//		Flags  -> (Final, Native, Protected, BlueprintCallable)
void UCoreInputPromptWidget::PromptNotFound()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreInputPromptWidget.PromptNotFound"));

	UCoreInputPromptWidget_PromptNotFound_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AE1FF0
//		Name   -> Function DBDUIViewsCore.CoreInputPromptWidget.GetInputShortDisplayName
//		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UCoreInputPromptWidget::GetInputShortDisplayName()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreInputPromptWidget.GetInputShortDisplayName"));

	UCoreInputPromptWidget_GetInputShortDisplayName_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function DBDUIViewsCore.CoreInputPromptWidget.DisplayPrompt
//		Flags  -> (Event, Protected, BlueprintEvent)
void UCoreInputPromptWidget::DisplayPrompt()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreInputPromptWidget.DisplayPrompt"));

	UCoreInputPromptWidget_DisplayPrompt_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AE2D80
//		Name   -> Function DBDUIViewsCore.CoreInteractionProgressWidget.SetProficiencies
//		Flags  -> (Final, Native, Protected, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<struct FStatusEffectViewData>               proficiencyDatas                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreInteractionProgressWidget::SetProficiencies(TArray<struct FStatusEffectViewData> proficiencyDatas)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreInteractionProgressWidget.SetProficiencies"));

	UCoreInteractionProgressWidget_SetProficiencies_Params params {};
	params.proficiencyDatas = proficiencyDatas;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AE3060
//		Name   -> Function DBDUIViewsCore.CoreInteractionPromptActionWidget.StopIdleAnimation
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UCoreInteractionPromptActionWidget::StopIdleAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreInteractionPromptActionWidget.StopIdleAnimation"));

	UCoreInteractionPromptActionWidget_StopIdleAnimation_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AE2970
//		Name   -> Function DBDUIViewsCore.CoreInteractionPromptActionWidget.SetInputKey2
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FKey                                        InputKey2                                                  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreInteractionPromptActionWidget::SetInputKey2(const struct FKey& InputKey2)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreInteractionPromptActionWidget.SetInputKey2"));

	UCoreInteractionPromptActionWidget_SetInputKey2_Params params {};
	params.InputKey2 = InputKey2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AE28A0
//		Name   -> Function DBDUIViewsCore.CoreInteractionPromptActionWidget.PlayIdleAnimation
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UCoreInteractionPromptActionWidget::PlayIdleAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreInteractionPromptActionWidget.PlayIdleAnimation"));

	UCoreInteractionPromptActionWidget_PlayIdleAnimation_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AE2570
//		Name   -> Function DBDUIViewsCore.CoreInteractionPromptActionWidget.HasSecondPrompt
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UCoreInteractionPromptActionWidget::HasSecondPrompt()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreInteractionPromptActionWidget.HasSecondPrompt"));

	UCoreInteractionPromptActionWidget_HasSecondPrompt_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02AE2B10
//		Name   -> Function DBDUIViewsCore.CoreInteractionPromptActionMovementWidget.SetInputKey4
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FKey                                        InputKey4                                                  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreInteractionPromptActionMovementWidget::SetInputKey4(const struct FKey& InputKey4)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreInteractionPromptActionMovementWidget.SetInputKey4"));

	UCoreInteractionPromptActionMovementWidget_SetInputKey4_Params params {};
	params.InputKey4 = InputKey4;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AE2A40
//		Name   -> Function DBDUIViewsCore.CoreInteractionPromptActionMovementWidget.SetInputKey3
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FKey                                        InputKey3                                                  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreInteractionPromptActionMovementWidget::SetInputKey3(const struct FKey& InputKey3)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreInteractionPromptActionMovementWidget.SetInputKey3"));

	UCoreInteractionPromptActionMovementWidget_SetInputKey3_Params params {};
	params.InputKey3 = InputKey3;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AE25E0
//		Name   -> Function DBDUIViewsCore.CoreInteractionPromptActionMovementWidget.HasThirdPrompt
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UCoreInteractionPromptActionMovementWidget::HasThirdPrompt()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreInteractionPromptActionMovementWidget.HasThirdPrompt"));

	UCoreInteractionPromptActionMovementWidget_HasThirdPrompt_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02AE21C0
//		Name   -> Function DBDUIViewsCore.CoreInteractionPromptActionMovementWidget.HasFourthPrompt
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UCoreInteractionPromptActionMovementWidget::HasFourthPrompt()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreInteractionPromptActionMovementWidget.HasFourthPrompt"));

	UCoreInteractionPromptActionMovementWidget_HasFourthPrompt_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function DBDUIViewsCore.CoreInteractionPromptWidget.SetData
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FInteractionPromptViewData                  Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UCoreInteractionPromptWidget::SetData(const struct FInteractionPromptViewData& Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreInteractionPromptWidget.SetData"));

	UCoreInteractionPromptWidget_SetData_Params params {};
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AE2730
//		Name   -> Function DBDUIViewsCore.CoreInteractionPromptWidget.OnLargeTextSettingsChanged
//		Flags  -> (Final, Native, Private)
// Parameters:
//		bool                                               isLargeTextEnabled                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreInteractionPromptWidget::OnLargeTextSettingsChanged(bool isLargeTextEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreInteractionPromptWidget.OnLargeTextSettingsChanged"));

	UCoreInteractionPromptWidget_OnLargeTextSettingsChanged_Params params {};
	params.isLargeTextEnabled = isLargeTextEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function DBDUIViewsCore.CoreInteractionPromptWidget.ClearData
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void UCoreInteractionPromptWidget::ClearData()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreInteractionPromptWidget.ClearData"));

	UCoreInteractionPromptWidget_ClearData_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function DBDUIViewsCore.CoreOnboardingMenuTitleWidget.SetOnboardingMenuTitle
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       menuTitle                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UCoreOnboardingMenuTitleWidget::SetOnboardingMenuTitle(const struct FText& menuTitle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreOnboardingMenuTitleWidget.SetOnboardingMenuTitle"));

	UCoreOnboardingMenuTitleWidget_SetOnboardingMenuTitle_Params params {};
	params.menuTitle = menuTitle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function DBDUIViewsCore.CoreOnboardingMenuTitleWidget.SetOnboardingMenuSubtitle
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       menuTitle                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UCoreOnboardingMenuTitleWidget::SetOnboardingMenuSubtitle(const struct FText& menuTitle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreOnboardingMenuTitleWidget.SetOnboardingMenuSubtitle"));

	UCoreOnboardingMenuTitleWidget_SetOnboardingMenuSubtitle_Params params {};
	params.menuTitle = menuTitle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function DBDUIViewsCore.CoreOnboardingMenuTitleWidget.SetOnboardingMenuDoubleTitle
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       menuTitle                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FText                                       menuSubTitle                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UCoreOnboardingMenuTitleWidget::SetOnboardingMenuDoubleTitle(const struct FText& menuTitle, const struct FText& menuSubTitle)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreOnboardingMenuTitleWidget.SetOnboardingMenuDoubleTitle"));

	UCoreOnboardingMenuTitleWidget_SetOnboardingMenuDoubleTitle_Params params {};
	params.menuTitle = menuTitle;
	params.menuSubTitle = menuSubTitle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function DBDUIViewsCore.CoreOnboardingMenuTitleWidget.ResetOnboardingMenuSubtitle
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void UCoreOnboardingMenuTitleWidget::ResetOnboardingMenuSubtitle()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreOnboardingMenuTitleWidget.ResetOnboardingMenuSubtitle"));

	UCoreOnboardingMenuTitleWidget_ResetOnboardingMenuSubtitle_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AE2F20
//		Name   -> Function DBDUIViewsCore.CoreOnboardingMenuWidget.SetTitleText
//		Flags  -> (Final, Native, Protected, BlueprintCallable)
// Parameters:
//		bool                                               IsInTutorial                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreOnboardingMenuWidget::SetTitleText(bool IsInTutorial)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreOnboardingMenuWidget.SetTitleText"));

	UCoreOnboardingMenuWidget_SetTitleText_Params params {};
	params.IsInTutorial = IsInTutorial;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AE28E0
//		Name   -> Function DBDUIViewsCore.CoreOnboardingMenuWidget.SetBackButtonText
//		Flags  -> (Final, Native, Protected, BlueprintCallable)
// Parameters:
//		bool                                               isFTUE                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreOnboardingMenuWidget::SetBackButtonText(bool isFTUE)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreOnboardingMenuWidget.SetBackButtonText"));

	UCoreOnboardingMenuWidget_SetBackButtonText_Params params {};
	params.isFTUE = isFTUE;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AE27C0
//		Name   -> Function DBDUIViewsCore.CoreOnboardingMenuWidget.OnOnboardingTabChanged
//		Flags  -> (Final, Native, Public)
// Parameters:
//		int                                                tabIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreOnboardingMenuWidget::OnOnboardingTabChanged(int tabIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreOnboardingMenuWidget.OnOnboardingTabChanged"));

	UCoreOnboardingMenuWidget_OnOnboardingTabChanged_Params params {};
	params.tabIndex = tabIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AE2FB0
//		Name   -> Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.SetVisual
//		Flags  -> (Final, Native, Protected, BlueprintCallable)
void UCoreOnboardingTutorialButtonWidget::SetVisual()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.SetVisual"));

	UCoreOnboardingTutorialButtonWidget_SetVisual_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.SetUIEnabled
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreOnboardingTutorialButtonWidget::SetUIEnabled(bool Enabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.SetUIEnabled"));

	UCoreOnboardingTutorialButtonWidget_SetUIEnabled_Params params {};
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.SetData
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FOnboardingTutorialButtonViewData           viewData                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		bool                                               isRefreshingWithAnimation                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreOnboardingTutorialButtonWidget::SetData(const struct FOnboardingTutorialButtonViewData& viewData, bool isRefreshingWithAnimation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.SetData"));

	UCoreOnboardingTutorialButtonWidget_SetData_Params params {};
	params.viewData = viewData;
	params.isRefreshingWithAnimation = isRefreshingWithAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AE2880
//		Name   -> Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.OnRewardReleased
//		Flags  -> (Final, Native, Private)
void UCoreOnboardingTutorialButtonWidget::OnRewardReleased()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.OnRewardReleased"));

	UCoreOnboardingTutorialButtonWidget_OnRewardReleased_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AE2860
//		Name   -> Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.OnRewardPressed
//		Flags  -> (Final, Native, Private)
void UCoreOnboardingTutorialButtonWidget::OnRewardPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.OnRewardPressed"));

	UCoreOnboardingTutorialButtonWidget_OnRewardPressed_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AE2840
//		Name   -> Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.OnRewardClicked
//		Flags  -> (Final, Native, Private)
void UCoreOnboardingTutorialButtonWidget::OnRewardClicked()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.OnRewardClicked"));

	UCoreOnboardingTutorialButtonWidget_OnRewardClicked_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AE26E0
//		Name   -> Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.IsInUnavailableStep
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UCoreOnboardingTutorialButtonWidget::IsInUnavailableStep()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.IsInUnavailableStep"));

	UCoreOnboardingTutorialButtonWidget_IsInUnavailableStep_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function DBDUIViewsCore.CoreOnboardingTutorialPanelWidget.SetTutorialSeparators
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		struct FString                                     completedStepId                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreOnboardingTutorialPanelWidget::SetTutorialSeparators(const struct FString& completedStepId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreOnboardingTutorialPanelWidget.SetTutorialSeparators"));

	UCoreOnboardingTutorialPanelWidget_SetTutorialSeparators_Params params {};
	params.completedStepId = completedStepId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function DBDUIViewsCore.CoreOnboardingTutorialPanelWidget.SetTutorialDescription
//		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FText                                       Description                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		bool                                               isWarning                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreOnboardingTutorialPanelWidget::SetTutorialDescription(const struct FText& Description, bool isWarning)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreOnboardingTutorialPanelWidget.SetTutorialDescription"));

	UCoreOnboardingTutorialPanelWidget_SetTutorialDescription_Params params {};
	params.Description = Description;
	params.isWarning = isWarning;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AE2710
//		Name   -> Function DBDUIViewsCore.CoreOnboardingTutorialPanelWidget.NextPendingButtonUpdated
//		Flags  -> (Final, Native, Private)
void UCoreOnboardingTutorialPanelWidget::NextPendingButtonUpdated()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreOnboardingTutorialPanelWidget.NextPendingButtonUpdated"));

	UCoreOnboardingTutorialPanelWidget_NextPendingButtonUpdated_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AE1FD0
//		Name   -> Function DBDUIViewsCore.CoreOnboardingTutorialPanelWidget.CheckNextPendingButtonUpdate
//		Flags  -> (Final, Native, Private)
void UCoreOnboardingTutorialPanelWidget::CheckNextPendingButtonUpdate()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreOnboardingTutorialPanelWidget.CheckNextPendingButtonUpdate"));

	UCoreOnboardingTutorialPanelWidget_CheckNextPendingButtonUpdate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function DBDUIViewsCore.CorePlayerStatusKillerEffectWidget.SetKillerData
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPlayerStatusViewData                       Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UCorePlayerStatusKillerEffectWidget::SetKillerData(const struct FPlayerStatusViewData& Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CorePlayerStatusKillerEffectWidget.SetKillerData"));

	UCorePlayerStatusKillerEffectWidget_SetKillerData_Params params {};
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02ADBAE0
//		Name   -> Function DBDUIViewsCore.CorePlayerStatusKillerEffectWidget.ClearVisual
//		Flags  -> (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
void UCorePlayerStatusKillerEffectWidget::ClearVisual()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CorePlayerStatusKillerEffectWidget.ClearVisual"));

	UCorePlayerStatusKillerEffectWidget_ClearVisual_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function DBDUIViewsCore.CorePlayerStatusKillerEffectK07Widget.AfflictionHit
//		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
void UCorePlayerStatusKillerEffectK07Widget::AfflictionHit()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CorePlayerStatusKillerEffectK07Widget.AfflictionHit"));

	UCorePlayerStatusKillerEffectK07Widget_AfflictionHit_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AE2FD0
//		Name   -> Function DBDUIViewsCore.CorePlayerStatusWidget.ShouldPlaySleepAnimation
//		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		DBDSharedTypes_ESleepingUIState                    newSleepState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UCorePlayerStatusWidget::ShouldPlaySleepAnimation(DBDSharedTypes_ESleepingUIState newSleepState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CorePlayerStatusWidget.ShouldPlaySleepAnimation"));

	UCorePlayerStatusWidget_ShouldPlaySleepAnimation_Params params {};
	params.newSleepState = newSleepState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02AE2650
//		Name   -> Function DBDUIViewsCore.CorePlayerStatusWidget.HasTimerProgressChanged
//		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              newTimerProgress                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UCorePlayerStatusWidget::HasTimerProgressChanged(float newTimerProgress)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CorePlayerStatusWidget.HasTimerProgressChanged"));

	UCorePlayerStatusWidget_HasTimerProgressChanged_Params params {};
	params.newTimerProgress = newTimerProgress;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02AE2460
//		Name   -> Function DBDUIViewsCore.CorePlayerStatusWidget.HasPlayerStatusDataChanged
//		Flags  -> (Final, Native, Protected, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FPlayerStatusViewData                       newViewData                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UCorePlayerStatusWidget::HasPlayerStatusDataChanged(const struct FPlayerStatusViewData& newViewData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CorePlayerStatusWidget.HasPlayerStatusDataChanged"));

	UCorePlayerStatusWidget_HasPlayerStatusDataChanged_Params params {};
	params.newViewData = newViewData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02AE23D0
//		Name   -> Function DBDUIViewsCore.CorePlayerStatusWidget.HasPlayerStateChanged
//		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		DBDSharedTypes_EPlayerStatus                       newPlayerState                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UCorePlayerStatusWidget::HasPlayerStateChanged(DBDSharedTypes_EPlayerStatus newPlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CorePlayerStatusWidget.HasPlayerStateChanged"));

	UCorePlayerStatusWidget_HasPlayerStateChanged_Params params {};
	params.newPlayerState = newPlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02AE2340
//		Name   -> Function DBDUIViewsCore.CorePlayerStatusWidget.HasObsessionStateChanged
//		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		DBDSharedTypes_EObsessionUIState                   newObsessionState                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UCorePlayerStatusWidget::HasObsessionStateChanged(DBDSharedTypes_EObsessionUIState newObsessionState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CorePlayerStatusWidget.HasObsessionStateChanged"));

	UCorePlayerStatusWidget_HasObsessionStateChanged_Params params {};
	params.newObsessionState = newObsessionState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02AE2230
//		Name   -> Function DBDUIViewsCore.CorePlayerStatusWidget.HasKillerStatusDataChanged
//		Flags  -> (Final, Native, Protected, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FPlayerStatusViewData                       newViewData                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UCorePlayerStatusWidget::HasKillerStatusDataChanged(const struct FPlayerStatusViewData& newViewData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CorePlayerStatusWidget.HasKillerStatusDataChanged"));

	UCorePlayerStatusWidget_HasKillerStatusDataChanged_Params params {};
	params.newViewData = newViewData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02AE20B0
//		Name   -> Function DBDUIViewsCore.CorePlayerStatusWidget.GetPlayerStateChangeType
//		Flags  -> (Final, Native, Protected, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FPlayerStatusViewData                       newViewData                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		DBDSharedTypes_EPlayerStateChangeType              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
DBDSharedTypes_EPlayerStateChangeType UCorePlayerStatusWidget::GetPlayerStateChangeType(const struct FPlayerStatusViewData& newViewData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CorePlayerStatusWidget.GetPlayerStateChangeType"));

	UCorePlayerStatusWidget_GetPlayerStateChangeType_Params params {};
	params.newViewData = newViewData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02AE2090
//		Name   -> Function DBDUIViewsCore.CorePlayerStatusWidget.GetKillerStatusEffectWidget
//		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UCorePlayerStatusKillerEffectWidget*         ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCorePlayerStatusKillerEffectWidget* UCorePlayerStatusWidget::GetKillerStatusEffectWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CorePlayerStatusWidget.GetKillerStatusEffectWidget"));

	UCorePlayerStatusWidget_GetKillerStatusEffectWidget_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function DBDUIViewsCore.CoreProgressionRewardWidget.SetData
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FProgressionRewardViewData                  ProgressionRewardViewData                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UCoreProgressionRewardWidget::SetData(const struct FProgressionRewardViewData& ProgressionRewardViewData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreProgressionRewardWidget.SetData"));

	UCoreProgressionRewardWidget_SetData_Params params {};
	params.ProgressionRewardViewData = ProgressionRewardViewData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AE8D80
//		Name   -> Function DBDUIViewsCore.CoreRewardWrapperWidget.SetData
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FRewardWrapperViewData                      viewData                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UCoreRewardWrapperWidget::SetData(const struct FRewardWrapperViewData& viewData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreRewardWrapperWidget.SetData"));

	UCoreRewardWrapperWidget_SetData_Params params {};
	params.viewData = viewData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AE8330
//		Name   -> Function DBDUIViewsCore.CoreRewardWrapperWidget.GetRewardWidget
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UCoreRewardWidget*                           ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCoreRewardWidget* UCoreRewardWrapperWidget::GetRewardWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreRewardWrapperWidget.GetRewardWidget"));

	UCoreRewardWrapperWidget_GetRewardWidget_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02AE81B0
//		Name   -> Function DBDUIViewsCore.CoreRewardWrapperWidget.ClearData
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UCoreRewardWrapperWidget::ClearData()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreRewardWrapperWidget.ClearData"));

	UCoreRewardWrapperWidget_ClearData_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AE8350
//		Name   -> Function DBDUIViewsCore.CoreScreenIndicatorsContainerWidget.GetScreenIndicatorsMap
//		Flags  -> (Final, Native, Protected, BlueprintCallable)
// Parameters:
//		TMap<struct FString, class UCoreScreenIndicatorWidget*> ReturnValue                                                (ExportObject, Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
TMap<struct FString, class UCoreScreenIndicatorWidget*> UCoreScreenIndicatorsContainerWidget::GetScreenIndicatorsMap()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreScreenIndicatorsContainerWidget.GetScreenIndicatorsMap"));

	UCoreScreenIndicatorsContainerWidget_GetScreenIndicatorsMap_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02AE81D0
//		Name   -> Function DBDUIViewsCore.CoreScreenIndicatorsContainerWidget.FindScreenIndicatorKey
//		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UCoreScreenIndicatorWidget*                  value                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UCoreScreenIndicatorsContainerWidget::FindScreenIndicatorKey(class UCoreScreenIndicatorWidget* value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreScreenIndicatorsContainerWidget.FindScreenIndicatorKey"));

	UCoreScreenIndicatorsContainerWidget_FindScreenIndicatorKey_Params params {};
	params.value = value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function DBDUIViewsCore.CoreScreenIndicatorWidget.SetData
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FScreenIndicatorViewData                    Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UCoreScreenIndicatorWidget::SetData(const struct FScreenIndicatorViewData& Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreScreenIndicatorWidget.SetData"));

	UCoreScreenIndicatorWidget_SetData_Params params {};
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function DBDUIViewsCore.CoreScreenIndicatorWidget.ClearData
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void UCoreScreenIndicatorWidget::ClearData()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreScreenIndicatorWidget.ClearData"));

	UCoreScreenIndicatorWidget_ClearData_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AE9130
//		Name   -> Function DBDUIViewsCore.CoreSelectableButtonWidget.SetSelected
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               IsSelected                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreSelectableButtonWidget::SetSelected(bool IsSelected)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreSelectableButtonWidget.SetSelected"));

	UCoreSelectableButtonWidget_SetSelected_Params params {};
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function DBDUIViewsCore.CoreSelectableButtonWidget.OnSelected
//		Flags  -> (Event, Protected, BlueprintEvent)
void UCoreSelectableButtonWidget::OnSelected()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreSelectableButtonWidget.OnSelected"));

	UCoreSelectableButtonWidget_OnSelected_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AE87E0
//		Name   -> Function DBDUIViewsCore.CoreSelectableButtonWidget.IsSelected
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UCoreSelectableButtonWidget::IsSelected()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreSelectableButtonWidget.IsSelected"));

	UCoreSelectableButtonWidget_IsSelected_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02AE8800
//		Name   -> Function DBDUIViewsCore.CoreStartSequenceWidget.OnHideStartSequenceComplete
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class UUITweenInstance*                            tween                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreStartSequenceWidget::OnHideStartSequenceComplete(class UUITweenInstance* tween)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreStartSequenceWidget.OnHideStartSequenceComplete"));

	UCoreStartSequenceWidget_OnHideStartSequenceComplete_Params params {};
	params.tween = tween;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function DBDUIViewsCore.CoreStatusEffectIcon.UpdateWidget
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void UCoreStatusEffectIcon::UpdateWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreStatusEffectIcon.UpdateWidget"));

	UCoreStatusEffectIcon_UpdateWidget_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function DBDUIViewsCore.CoreStatusEffectIcon.UpdatePercentageFill
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Percentage                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreStatusEffectIcon::UpdatePercentageFill(float Percentage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreStatusEffectIcon.UpdatePercentageFill"));

	UCoreStatusEffectIcon_UpdatePercentageFill_Params params {};
	params.Percentage = Percentage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AE91C0
//		Name   -> Function DBDUIViewsCore.CoreStatusEffectIcon.SetStatusEffectData
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FStatusEffectViewData                       Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UCoreStatusEffectIcon::SetStatusEffectData(const struct FStatusEffectViewData& Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreStatusEffectIcon.SetStatusEffectData"));

	UCoreStatusEffectIcon_SetStatusEffectData_Params params {};
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AE9030
//		Name   -> Function DBDUIViewsCore.CoreStatusEffectIcon.SetInactiveTicks
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                inactiveTicks                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreStatusEffectIcon::SetInactiveTicks(int inactiveTicks)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreStatusEffectIcon.SetInactiveTicks"));

	UCoreStatusEffectIcon_SetInactiveTicks_Params params {};
	params.inactiveTicks = inactiveTicks;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AE8460
//		Name   -> Function DBDUIViewsCore.CoreStatusEffectIcon.GetStatusEffectData
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FStatusEffectViewData                       ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FStatusEffectViewData UCoreStatusEffectIcon::GetStatusEffectData()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreStatusEffectIcon.GetStatusEffectData"));

	UCoreStatusEffectIcon_GetStatusEffectData_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02AE82F0
//		Name   -> Function DBDUIViewsCore.CoreStatusEffectIcon.GetInactiveTicks
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UCoreStatusEffectIcon::GetInactiveTicks()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreStatusEffectIcon.GetInactiveTicks"));

	UCoreStatusEffectIcon_GetInactiveTicks_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02AE8490
//		Name   -> Function DBDUIViewsCore.CoreStatusEffectWidget.GetStatusEffectMap
//		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		TMap<struct FName, class UCoreStatusEffectIcon*>   ReturnValue                                                (ExportObject, Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
TMap<struct FName, class UCoreStatusEffectIcon*> UCoreStatusEffectWidget::GetStatusEffectMap()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreStatusEffectWidget.GetStatusEffectMap"));

	UCoreStatusEffectWidget_GetStatusEffectMap_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02AE8AD0
//		Name   -> Function DBDUIViewsCore.CoreTabContainerWidget.SetAllTabsEnabled
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreTabContainerWidget::SetAllTabsEnabled(bool Enabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreTabContainerWidget.SetAllTabsEnabled"));

	UCoreTabContainerWidget_SetAllTabsEnabled_Params params {};
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AE8A50
//		Name   -> Function DBDUIViewsCore.CoreTabContainerWidget.SelectTab
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                tabIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreTabContainerWidget::SelectTab(int tabIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreTabContainerWidget.SelectTab"));

	UCoreTabContainerWidget_SelectTab_Params params {};
	params.tabIndex = tabIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AE8A30
//		Name   -> Function DBDUIViewsCore.CoreTabContainerWidget.SelectPreviousTab
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UCoreTabContainerWidget::SelectPreviousTab()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreTabContainerWidget.SelectPreviousTab"));

	UCoreTabContainerWidget_SelectPreviousTab_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AE8A10
//		Name   -> Function DBDUIViewsCore.CoreTabContainerWidget.SelectNextTab
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UCoreTabContainerWidget::SelectNextTab()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreTabContainerWidget.SelectNextTab"));

	UCoreTabContainerWidget_SelectNextTab_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AE8880
//		Name   -> Function DBDUIViewsCore.CoreTabContainerWidget.OnSelectedTabChanged
//		Flags  -> (Final, Native, Private)
// Parameters:
//		int                                                newTabIndex                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreTabContainerWidget::OnSelectedTabChanged(int newTabIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreTabContainerWidget.OnSelectedTabChanged"));

	UCoreTabContainerWidget_OnSelectedTabChanged_Params params {};
	params.newTabIndex = newTabIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AE8640
//		Name   -> Function DBDUIViewsCore.CoreTabContainerWidget.Init
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TArray<struct FText>                               tabTitles                                                  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                selectedIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreTabContainerWidget::Init(TArray<struct FText> tabTitles, int selectedIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreTabContainerWidget.Init"));

	UCoreTabContainerWidget_Init_Params params {};
	params.tabTitles = tabTitles;
	params.selectedIndex = selectedIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AE8190
//		Name   -> Function DBDUIViewsCore.CoreTabContainerWidget.Clear
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UCoreTabContainerWidget::Clear()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreTabContainerWidget.Clear"));

	UCoreTabContainerWidget_Clear_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function DBDUIViewsCore.CoreTabWidget.SetVisualState
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		DBDUIViewsCore_ETabWidgetState                     newState                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreTabWidget::SetVisualState(DBDUIViewsCore_ETabWidgetState newState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreTabWidget.SetVisualState"));

	UCoreTabWidget_SetVisualState_Params params {};
	params.newState = newState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AE8170
//		Name   -> Function DBDUIViewsCore.CoreTabWidget.ButtonClicked
//		Flags  -> (Final, Native, Private)
void UCoreTabWidget::ButtonClicked()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreTabWidget.ButtonClicked"));

	UCoreTabWidget_ButtonClicked_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function DBDUIViewsCore.CoreTutorialObjectiveItem.SetObjectiveCompleted
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               removeAfterCompletion                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreTutorialObjectiveItem::SetObjectiveCompleted(bool removeAfterCompletion)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreTutorialObjectiveItem.SetObjectiveCompleted"));

	UCoreTutorialObjectiveItem_SetObjectiveCompleted_Params params {};
	params.removeAfterCompletion = removeAfterCompletion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function DBDUIViewsCore.CoreTutorialObjectiveItem.InitObjective
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTutorialObjectivesViewData                 interactionsViewData                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UCoreTutorialObjectiveItem::InitObjective(const struct FTutorialObjectivesViewData& interactionsViewData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreTutorialObjectiveItem.InitObjective"));

	UCoreTutorialObjectiveItem_InitObjective_Params params {};
	params.interactionsViewData = interactionsViewData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AE8990
//		Name   -> Function DBDUIViewsCore.CoreTutorialObjectivesContainer.OnTutorialObjectiveCompleted
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class UCoreTutorialObjectiveItem*                  Item                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCoreTutorialObjectivesContainer::OnTutorialObjectiveCompleted(class UCoreTutorialObjectiveItem* Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CoreTutorialObjectivesContainer.OnTutorialObjectiveCompleted"));

	UCoreTutorialObjectivesContainer_OnTutorialObjectiveCompleted_Params params {};
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AE9390
//		Name   -> Function DBDUIViewsCore.CurrencyTooltipWidget.SetTooltipData
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FCurrencyTooltipViewData                    currencyViewData                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UCurrencyTooltipWidget::SetTooltipData(const struct FCurrencyTooltipViewData& currencyViewData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CurrencyTooltipWidget.SetTooltipData"));

	UCurrencyTooltipWidget_SetTooltipData_Params params {};
	params.currencyViewData = currencyViewData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function DBDUIViewsCore.CustomizationTooltipWidget.SetTooltipData
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FCustomizationTooltipViewData               customizationViewData                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UCustomizationTooltipWidget::SetTooltipData(const struct FCustomizationTooltipViewData& customizationViewData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CustomizationTooltipWidget.SetTooltipData"));

	UCustomizationTooltipWidget_SetTooltipData_Params params {};
	params.customizationViewData = customizationViewData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AE9270
//		Name   -> Function DBDUIViewsCore.CustomizationTooltipWidget.SetStatusText
//		Flags  -> (Final, Native, Protected, BlueprintCallable)
// Parameters:
//		bool                                               IsEquipped                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               IsOwned                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               IsLocked                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCustomizationTooltipWidget::SetStatusText(bool IsEquipped, bool IsOwned, bool IsLocked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.CustomizationTooltipWidget.SetStatusText"));

	UCustomizationTooltipWidget_SetStatusText_Params params {};
	params.IsEquipped = IsEquipped;
	params.IsOwned = IsOwned;
	params.IsLocked = IsLocked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AE8CB0
//		Name   -> Function DBDUIViewsCore.DBDImage.SetBrushFromTextureWithDefault
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UTexture2D*                                  Texture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               matchSize                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDBDImage::SetBrushFromTextureWithDefault(class UTexture2D* Texture, bool matchSize)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.DBDImage.SetBrushFromTextureWithDefault"));

	UDBDImage_SetBrushFromTextureWithDefault_Params params {};
	params.Texture = Texture;
	params.matchSize = matchSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AE8B60
//		Name   -> Function DBDUIViewsCore.DBDImage.SetBrushFromSoftTextureWithDefault
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               matchSize                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDBDImage::SetBrushFromSoftTextureWithDefault(bool matchSize)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.DBDImage.SetBrushFromSoftTextureWithDefault"));

	UDBDImage_SetBrushFromSoftTextureWithDefault_Params params {};
	params.matchSize = matchSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AE90B0
//		Name   -> Function DBDUIViewsCore.DBDRichTextBlock.SetIsUpperCase
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               isUpperCase                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDBDRichTextBlock::SetIsUpperCase(bool isUpperCase)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.DBDRichTextBlock.SetIsUpperCase"));

	UDBDRichTextBlock_SetIsUpperCase_Params params {};
	params.isUpperCase = isUpperCase;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AE8EE0
//		Name   -> Function DBDUIViewsCore.DBDRichTextBlock.SetHTMLText
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FText                                       InText                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UDBDRichTextBlock::SetHTMLText(const struct FText& InText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.DBDRichTextBlock.SetHTMLText"));

	UDBDRichTextBlock_SetHTMLText_Params params {};
	params.InText = InText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AE8FB0
//		Name   -> Function DBDUIViewsCore.DBDRichTextBlock.SetHasUndocking
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               hasUndocking                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDBDRichTextBlock::SetHasUndocking(bool hasUndocking)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.DBDRichTextBlock.SetHasUndocking"));

	UDBDRichTextBlock_SetHasUndocking_Params params {};
	params.hasUndocking = hasUndocking;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AE8900
//		Name   -> Function DBDUIViewsCore.DBDRichTextBlock.OnSwitchDockStateChanged
//		Flags  -> (Final, Native, Protected)
// Parameters:
//		bool                                               isDocked                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDBDRichTextBlock::OnSwitchDockStateChanged(bool isDocked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.DBDRichTextBlock.OnSwitchDockStateChanged"));

	UDBDRichTextBlock_OnSwitchDockStateChanged_Params params {};
	params.isDocked = isDocked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AE8310
//		Name   -> Function DBDUIViewsCore.DBDRichTextBlock.GetIsUpperCase
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UDBDRichTextBlock::GetIsUpperCase()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.DBDRichTextBlock.GetIsUpperCase"));

	UDBDRichTextBlock_GetIsUpperCase_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02AE82B0
//		Name   -> Function DBDUIViewsCore.DBDRichTextBlock.GetHasUndocking
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UDBDRichTextBlock::GetHasUndocking()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.DBDRichTextBlock.GetHasUndocking"));

	UDBDRichTextBlock_GetHasUndocking_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02AEC750
//		Name   -> Function DBDUIViewsCore.DBDScrollBox.UpdateDisplayPrompt
//		Flags  -> (Final, Native, Protected, BlueprintCallable)
void UDBDScrollBox::UpdateDisplayPrompt()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.DBDScrollBox.UpdateDisplayPrompt"));

	UDBDScrollBox_UpdateDisplayPrompt_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AEB620
//		Name   -> Function DBDUIViewsCore.DBDScrollBox.OnControlModeChanged
//		Flags  -> (Final, Native, Protected, BlueprintCallable)
// Parameters:
//		DBDSharedTypes_EControlMode                        controlMode                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDBDScrollBox::OnControlModeChanged(DBDSharedTypes_EControlMode controlMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.DBDScrollBox.OnControlModeChanged"));

	UDBDScrollBox_OnControlModeChanged_Params params {};
	params.controlMode = controlMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AEB600
//		Name   -> Function DBDUIViewsCore.DBDScrollBox.IsMouseOver
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UDBDScrollBox::IsMouseOver()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.DBDScrollBox.IsMouseOver"));

	UDBDScrollBox_IsMouseOver_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02AEB560
//		Name   -> Function DBDUIViewsCore.DBDScrollBox.HandleControllerInput
//		Flags  -> (Final, Native, Protected, BlueprintCallable)
// Parameters:
//		float                                              analogValue                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDBDScrollBox::HandleControllerInput(float analogValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.DBDScrollBox.HandleControllerInput"));

	UDBDScrollBox_HandleControllerInput_Params params {};
	params.analogValue = analogValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AEBF50
//		Name   -> Function DBDUIViewsCore.DBDTextBlock.SetUndockedProperties
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FDBDTextDockingProperties                   undockedProperties                                         (Parm, NativeAccessSpecifierPublic)
void UDBDTextBlock::SetUndockedProperties(const struct FDBDTextDockingProperties& undockedProperties)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.DBDTextBlock.SetUndockedProperties"));

	UDBDTextBlock_SetUndockedProperties_Params params {};
	params.undockedProperties = undockedProperties;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AEBDB0
//		Name   -> Function DBDUIViewsCore.DBDTextBlock.SetOverrideUndockedPropertiesWithLargeText
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               overrideUndockedPropertiesWithLargeText                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDBDTextBlock::SetOverrideUndockedPropertiesWithLargeText(bool overrideUndockedPropertiesWithLargeText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.DBDTextBlock.SetOverrideUndockedPropertiesWithLargeText"));

	UDBDTextBlock_SetOverrideUndockedPropertiesWithLargeText_Params params {};
	params.overrideUndockedPropertiesWithLargeText = overrideUndockedPropertiesWithLargeText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AEBBD0
//		Name   -> Function DBDUIViewsCore.DBDTextBlock.SetLargeTextProperties
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FDBDTextDockingProperties                   largeTextProperties                                        (Parm, NativeAccessSpecifierPublic)
void UDBDTextBlock::SetLargeTextProperties(const struct FDBDTextDockingProperties& largeTextProperties)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.DBDTextBlock.SetLargeTextProperties"));

	UDBDTextBlock_SetLargeTextProperties_Params params {};
	params.largeTextProperties = largeTextProperties;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AEBB50
//		Name   -> Function DBDUIViewsCore.DBDTextBlock.SetIsUpperCase
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               isUpperCase                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDBDTextBlock::SetIsUpperCase(bool isUpperCase)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.DBDTextBlock.SetIsUpperCase"));

	UDBDTextBlock_SetIsUpperCase_Params params {};
	params.isUpperCase = isUpperCase;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AEB950
//		Name   -> Function DBDUIViewsCore.DBDTextBlock.SetHasUndocking
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               hasUndocking                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDBDTextBlock::SetHasUndocking(bool hasUndocking)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.DBDTextBlock.SetHasUndocking"));

	UDBDTextBlock_SetHasUndocking_Params params {};
	params.hasUndocking = hasUndocking;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AEB8D0
//		Name   -> Function DBDUIViewsCore.DBDTextBlock.SetHasLargeText
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               hasLargeText                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDBDTextBlock::SetHasLargeText(bool hasLargeText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.DBDTextBlock.SetHasLargeText"));

	UDBDTextBlock_SetHasLargeText_Params params {};
	params.hasLargeText = hasLargeText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AEB730
//		Name   -> Function DBDUIViewsCore.DBDTextBlock.OnSwitchDockStateChanged
//		Flags  -> (Final, Native, Protected)
// Parameters:
//		bool                                               isDocked                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDBDTextBlock::OnSwitchDockStateChanged(bool isDocked)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.DBDTextBlock.OnSwitchDockStateChanged"));

	UDBDTextBlock_OnSwitchDockStateChanged_Params params {};
	params.isDocked = isDocked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AEB6A0
//		Name   -> Function DBDUIViewsCore.DBDTextBlock.OnLargeTextSettingsChanged
//		Flags  -> (Final, Native, Protected)
// Parameters:
//		bool                                               isLargeText                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDBDTextBlock::OnLargeTextSettingsChanged(bool isLargeText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.DBDTextBlock.OnLargeTextSettingsChanged"));

	UDBDTextBlock_OnLargeTextSettingsChanged_Params params {};
	params.isLargeText = isLargeText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AEB460
//		Name   -> Function DBDUIViewsCore.DBDTextBlock.GetUndockedProperties
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FDBDTextDockingProperties                   ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FDBDTextDockingProperties UDBDTextBlock::GetUndockedProperties()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.DBDTextBlock.GetUndockedProperties"));

	UDBDTextBlock_GetUndockedProperties_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02AEB440
//		Name   -> Function DBDUIViewsCore.DBDTextBlock.GetOverrideUndockedPropertiesWithLargeText
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UDBDTextBlock::GetOverrideUndockedPropertiesWithLargeText()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.DBDTextBlock.GetOverrideUndockedPropertiesWithLargeText"));

	UDBDTextBlock_GetOverrideUndockedPropertiesWithLargeText_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02AEB340
//		Name   -> Function DBDUIViewsCore.DBDTextBlock.GetLargeTextProperties
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FDBDTextDockingProperties                   ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FDBDTextDockingProperties UDBDTextBlock::GetLargeTextProperties()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.DBDTextBlock.GetLargeTextProperties"));

	UDBDTextBlock_GetLargeTextProperties_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02AEB320
//		Name   -> Function DBDUIViewsCore.DBDTextBlock.GetIsUpperCase
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UDBDTextBlock::GetIsUpperCase()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.DBDTextBlock.GetIsUpperCase"));

	UDBDTextBlock_GetIsUpperCase_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02AEB300
//		Name   -> Function DBDUIViewsCore.DBDTextBlock.GetHasUndocking
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UDBDTextBlock::GetHasUndocking()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.DBDTextBlock.GetHasUndocking"));

	UDBDTextBlock_GetHasUndocking_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02AEB2E0
//		Name   -> Function DBDUIViewsCore.DBDTextBlock.GetHasLargeText
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UDBDTextBlock::GetHasLargeText()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.DBDTextBlock.GetHasLargeText"));

	UDBDTextBlock_GetHasLargeText_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02AEC5C0
//		Name   -> Function DBDUIViewsCore.DBDTooltipManager.ShowCustomizationTooltip
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FCustomizationTooltipViewData               tooltipViewData                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FGeometry                                   triggerGeometry                                            (ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UDBDTooltipManager::ShowCustomizationTooltip(const struct FCustomizationTooltipViewData& tooltipViewData, const struct FGeometry& triggerGeometry)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.DBDTooltipManager.ShowCustomizationTooltip"));

	UDBDTooltipManager_ShowCustomizationTooltip_Params params {};
	params.tooltipViewData = tooltipViewData;
	params.triggerGeometry = triggerGeometry;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AEC3F0
//		Name   -> Function DBDUIViewsCore.DBDTooltipManager.ShowCurrencyTooltip
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FCurrencyTooltipViewData                    tooltipViewData                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FGeometry                                   triggerGeometry                                            (ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UDBDTooltipManager::ShowCurrencyTooltip(const struct FCurrencyTooltipViewData& tooltipViewData, const struct FGeometry& triggerGeometry)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.DBDTooltipManager.ShowCurrencyTooltip"));

	UDBDTooltipManager_ShowCurrencyTooltip_Params params {};
	params.tooltipViewData = tooltipViewData;
	params.triggerGeometry = triggerGeometry;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AEC1B0
//		Name   -> Function DBDUIViewsCore.DBDTooltipManager.ShowCharacterTooltip
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FCharacterTooltipViewData                   tooltipViewData                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FGeometry                                   triggerGeometry                                            (ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UDBDTooltipManager::ShowCharacterTooltip(const struct FCharacterTooltipViewData& tooltipViewData, const struct FGeometry& triggerGeometry)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.DBDTooltipManager.ShowCharacterTooltip"));

	UDBDTooltipManager_ShowCharacterTooltip_Params params {};
	params.tooltipViewData = tooltipViewData;
	params.triggerGeometry = triggerGeometry;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AEB5E0
//		Name   -> Function DBDUIViewsCore.DBDTooltipManager.HideTooltip
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UDBDTooltipManager::HideTooltip()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.DBDTooltipManager.HideTooltip"));

	UDBDTooltipManager_HideTooltip_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AEBAD0
//		Name   -> Function DBDUIViewsCore.DBDWrapBox.SetInnerSlotPadding
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector2D                                   InPadding                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDBDWrapBox::SetInnerSlotPadding(const struct FVector2D& InPadding)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.DBDWrapBox.SetInnerSlotPadding"));

	UDBDWrapBox_SetInnerSlotPadding_Params params {};
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AEB9D0
//		Name   -> Function DBDUIViewsCore.DBDWrapBox.SetHorizontalAlignment
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TEnumAsByte<SlateCore_EHorizontalAlignment>        InHorizontalAlignment                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDBDWrapBox::SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.DBDWrapBox.SetHorizontalAlignment"));

	UDBDWrapBox_SetHorizontalAlignment_Params params {};
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AEB250
//		Name   -> Function DBDUIViewsCore.DBDWrapBox.AddChildToWrapBox
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UWidget*                                     Content                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UDBDWrapBoxSlot*                             ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UDBDWrapBoxSlot* UDBDWrapBox::AddChildToWrapBox(class UWidget* Content)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.DBDWrapBox.AddChildToWrapBox"));

	UDBDWrapBox_AddChildToWrapBox_Params params {};
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02AEC130
//		Name   -> Function DBDUIViewsCore.DBDWrapBoxSlot.SetVerticalAlignment
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TEnumAsByte<SlateCore_EVerticalAlignment>          InVerticalAlignment                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDBDWrapBoxSlot::SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.DBDWrapBoxSlot.SetVerticalAlignment"));

	UDBDWrapBoxSlot_SetVerticalAlignment_Params params {};
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AEBE30
//		Name   -> Function DBDUIViewsCore.DBDWrapBoxSlot.SetPadding
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FMargin                                     InPadding                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UDBDWrapBoxSlot::SetPadding(const struct FMargin& InPadding)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.DBDWrapBoxSlot.SetPadding"));

	UDBDWrapBoxSlot_SetPadding_Params params {};
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AEBA50
//		Name   -> Function DBDUIViewsCore.DBDWrapBoxSlot.SetHorizontalAlignment
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TEnumAsByte<SlateCore_EHorizontalAlignment>        InHorizontalAlignment                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDBDWrapBoxSlot::SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.DBDWrapBoxSlot.SetHorizontalAlignment"));

	UDBDWrapBoxSlot_SetHorizontalAlignment_Params params {};
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AEB850
//		Name   -> Function DBDUIViewsCore.DBDWrapBoxSlot.SetFillSpanWhenLessThan
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              InFillSpanWhenLessThan                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDBDWrapBoxSlot::SetFillSpanWhenLessThan(float InFillSpanWhenLessThan)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.DBDWrapBoxSlot.SetFillSpanWhenLessThan"));

	UDBDWrapBoxSlot_SetFillSpanWhenLessThan_Params params {};
	params.InFillSpanWhenLessThan = InFillSpanWhenLessThan;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AEB7C0
//		Name   -> Function DBDUIViewsCore.DBDWrapBoxSlot.SetFillEmptySpace
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               InbFillEmptySpace                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDBDWrapBoxSlot::SetFillEmptySpace(bool InbFillEmptySpace)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.DBDWrapBoxSlot.SetFillEmptySpace"));

	UDBDWrapBoxSlot_SetFillEmptySpace_Params params {};
	params.InbFillEmptySpace = InbFillEmptySpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AEBEC0
//		Name   -> Function DBDUIViewsCore.TestWidget.SetShowWorkbench
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               showWorkbench                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTestWidget::SetShowWorkbench(bool showWorkbench)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsCore.TestWidget.SetShowWorkbench"));

	UTestWidget_SetShowWorkbench_Params params {};
	params.showWorkbench = showWorkbench;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
