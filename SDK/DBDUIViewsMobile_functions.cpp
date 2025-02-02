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
//		Offset -> 0x02BC0400
//		Name   -> Function DBDUIViewsMobile.MobileBaseUserWidget.TutorialAnimationFinished
//		Flags  -> (Final, Native, Private)
void UMobileBaseUserWidget::TutorialAnimationFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsMobile.MobileBaseUserWidget.TutorialAnimationFinished"));

	UMobileBaseUserWidget_TutorialAnimationFinished_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02BC03E0
//		Name   -> Function DBDUIViewsMobile.MobileBaseUserWidget.TryBroadcastOnHighlightWidgetClicked
//		Flags  -> (Final, Native, Protected, BlueprintCallable)
void UMobileBaseUserWidget::TryBroadcastOnHighlightWidgetClicked()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsMobile.MobileBaseUserWidget.TryBroadcastOnHighlightWidgetClicked"));

	UMobileBaseUserWidget_TryBroadcastOnHighlightWidgetClicked_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02ADBB20
//		Name   -> Function DBDUIViewsMobile.MobileBaseUserWidget.TriggerTutorialVisuals
//		Flags  -> (Native, Public, BlueprintCallable)
void UMobileBaseUserWidget::TriggerTutorialVisuals()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsMobile.MobileBaseUserWidget.TriggerTutorialVisuals"));

	UMobileBaseUserWidget_TriggerTutorialVisuals_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02BC0190
//		Name   -> Function DBDUIViewsMobile.MobileBaseUserWidget.PropagateOnHighlightWidgetClicked
//		Flags  -> (Final, Native, Public)
// Parameters:
//		struct FName                                       onBoardingID                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMobileBaseUserWidget::PropagateOnHighlightWidgetClicked(const struct FName& onBoardingID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsMobile.MobileBaseUserWidget.PropagateOnHighlightWidgetClicked"));

	UMobileBaseUserWidget_PropagateOnHighlightWidgetClicked_Params params {};
	params.onBoardingID = onBoardingID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function DBDUIViewsMobile.MobileBaseUserWidget.OnSynchronizeProperties
//		Flags  -> (Event, Public, BlueprintEvent)
void UMobileBaseUserWidget::OnSynchronizeProperties()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsMobile.MobileBaseUserWidget.OnSynchronizeProperties"));

	UMobileBaseUserWidget_OnSynchronizeProperties_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02BC0160
//		Name   -> Function DBDUIViewsMobile.MobileBaseUserWidget.IsInTutorialState
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMobileBaseUserWidget::IsInTutorialState()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsMobile.MobileBaseUserWidget.IsInTutorialState"));

	UMobileBaseUserWidget_IsInTutorialState_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02ADBAE0
//		Name   -> Function DBDUIViewsMobile.MobileBaseUserWidget.FinishTutorialVisuals
//		Flags  -> (Native, Public, BlueprintCallable)
void UMobileBaseUserWidget::FinishTutorialVisuals()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsMobile.MobileBaseUserWidget.FinishTutorialVisuals"));

	UMobileBaseUserWidget_FinishTutorialVisuals_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02BBFF90
//		Name   -> Function DBDUIViewsMobile.UMGAtlantaCustomMatchLobbyScreen.HandleEditConfigButtonClicked
//		Flags  -> (Final, Native, Protected)
void UUMGAtlantaCustomMatchLobbyScreen::HandleEditConfigButtonClicked()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsMobile.UMGAtlantaCustomMatchLobbyScreen.HandleEditConfigButtonClicked"));

	UUMGAtlantaCustomMatchLobbyScreen_HandleEditConfigButtonClicked_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02BBFFD0
//		Name   -> Function DBDUIViewsMobile.UMGPageScrollWidget.HandlePageButtonClicked
//		Flags  -> (Final, Native, Public)
// Parameters:
//		int                                                pageIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUMGPageScrollWidget::HandlePageButtonClicked(int pageIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsMobile.UMGPageScrollWidget.HandlePageButtonClicked"));

	UUMGPageScrollWidget_HandlePageButtonClicked_Params params {};
	params.pageIndex = pageIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> DelegateFunction DBDUIViewsMobile.UMGBaseButtonWidget.OnBaseButtonReleased__DelegateSignature
//		Flags  -> (MulticastDelegate, Public, Delegate)
void UUMGBaseButtonWidget::OnBaseButtonReleased__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction DBDUIViewsMobile.UMGBaseButtonWidget.OnBaseButtonReleased__DelegateSignature"));

	UUMGBaseButtonWidget_OnBaseButtonReleased__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> DelegateFunction DBDUIViewsMobile.UMGBaseButtonWidget.OnBaseButtonPressed__DelegateSignature
//		Flags  -> (MulticastDelegate, Public, Delegate)
void UUMGBaseButtonWidget::OnBaseButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction DBDUIViewsMobile.UMGBaseButtonWidget.OnBaseButtonPressed__DelegateSignature"));

	UUMGBaseButtonWidget_OnBaseButtonPressed__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> DelegateFunction DBDUIViewsMobile.UMGBaseButtonWidget.OnBaseButtonLongPress__DelegateSignature
//		Flags  -> (MulticastDelegate, Public, Delegate)
void UUMGBaseButtonWidget::OnBaseButtonLongPress__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction DBDUIViewsMobile.UMGBaseButtonWidget.OnBaseButtonLongPress__DelegateSignature"));

	UUMGBaseButtonWidget_OnBaseButtonLongPress__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> DelegateFunction DBDUIViewsMobile.UMGBaseButtonWidget.OnBaseButtonClicked__DelegateSignature
//		Flags  -> (MulticastDelegate, Public, Delegate)
void UUMGBaseButtonWidget::OnBaseButtonClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction DBDUIViewsMobile.UMGBaseButtonWidget.OnBaseButtonClicked__DelegateSignature"));

	UUMGBaseButtonWidget_OnBaseButtonClicked__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02BBFF50
//		Name   -> Function DBDUIViewsMobile.UMGBaseButtonWidget.HandleButtonReleasedEvent
//		Flags  -> (Native, Protected, BlueprintCallable)
void UUMGBaseButtonWidget::HandleButtonReleasedEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsMobile.UMGBaseButtonWidget.HandleButtonReleasedEvent"));

	UUMGBaseButtonWidget_HandleButtonReleasedEvent_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02ADBAA0
//		Name   -> Function DBDUIViewsMobile.UMGBaseButtonWidget.HandleButtonPressedEvent
//		Flags  -> (Native, Protected, BlueprintCallable)
void UUMGBaseButtonWidget::HandleButtonPressedEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsMobile.UMGBaseButtonWidget.HandleButtonPressedEvent"));

	UUMGBaseButtonWidget_HandleButtonPressedEvent_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02BBFF30
//		Name   -> Function DBDUIViewsMobile.UMGBaseButtonWidget.HandleButtonLongPressEvent
//		Flags  -> (Native, Protected, BlueprintCallable)
void UUMGBaseButtonWidget::HandleButtonLongPressEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsMobile.UMGBaseButtonWidget.HandleButtonLongPressEvent"));

	UUMGBaseButtonWidget_HandleButtonLongPressEvent_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02BBFF10
//		Name   -> Function DBDUIViewsMobile.UMGBaseButtonWidget.HandleButtonHoveredEvent
//		Flags  -> (Native, Protected, BlueprintCallable)
void UUMGBaseButtonWidget::HandleButtonHoveredEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsMobile.UMGBaseButtonWidget.HandleButtonHoveredEvent"));

	UUMGBaseButtonWidget_HandleButtonHoveredEvent_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02ADBB00
//		Name   -> Function DBDUIViewsMobile.UMGBaseButtonWidget.HandleButtonClickedEvent
//		Flags  -> (Native, Protected, BlueprintCallable)
void UUMGBaseButtonWidget::HandleButtonClickedEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsMobile.UMGBaseButtonWidget.HandleButtonClickedEvent"));

	UUMGBaseButtonWidget_HandleButtonClickedEvent_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02BBFEF0
//		Name   -> Function DBDUIViewsMobile.UMGAtlantaMatchConfigScreen.HandleBackButtonClicked
//		Flags  -> (Final, Native, Protected)
void UUMGAtlantaMatchConfigScreen::HandleBackButtonClicked()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsMobile.UMGAtlantaMatchConfigScreen.HandleBackButtonClicked"));

	UUMGAtlantaMatchConfigScreen_HandleBackButtonClicked_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02BC0230
//		Name   -> Function DBDUIViewsMobile.UMGAtlantaRequestRoleButton.SetIsActive
//		Flags  -> (Final, Native, Protected, BlueprintCallable)
// Parameters:
//		bool                                               IsActive                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUMGAtlantaRequestRoleButton::SetIsActive(bool IsActive)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsMobile.UMGAtlantaRequestRoleButton.SetIsActive"));

	UUMGAtlantaRequestRoleButton_SetIsActive_Params params {};
	params.IsActive = IsActive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2EC10
//		Name   -> Function DBDUIViewsMobile.UMGAtlantaRequestRoleButton.OnToggleActiveState
//		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsActive                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUMGAtlantaRequestRoleButton::OnToggleActiveState(bool IsActive)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsMobile.UMGAtlantaRequestRoleButton.OnToggleActiveState"));

	UUMGAtlantaRequestRoleButton_OnToggleActiveState_Params params {};
	params.IsActive = IsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02BBFE30
//		Name   -> Function DBDUIViewsMobile.UMGAtlantaRequestRoleButton.GetIsActive
//		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUMGAtlantaRequestRoleButton::GetIsActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsMobile.UMGAtlantaRequestRoleButton.GetIsActive"));

	UUMGAtlantaRequestRoleButton_GetIsActive_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02BBFE70
//		Name   -> Function DBDUIViewsMobile.UMGBaseFriendListContextualMenuWidget.HandleActionTriggered
//		Flags  -> (Final, Native, Protected, BlueprintCallable)
// Parameters:
//		DBDUIViewsMobile_EActionOnFriendType               actionType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUMGBaseFriendListContextualMenuWidget::HandleActionTriggered(DBDUIViewsMobile_EActionOnFriendType actionType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsMobile.UMGBaseFriendListContextualMenuWidget.HandleActionTriggered"));

	UUMGBaseFriendListContextualMenuWidget_HandleActionTriggered_Params params {};
	params.actionType = actionType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02BC0360
//		Name   -> Function DBDUIViewsMobile.UMGBaseFriendListElement.TriggerActionOnThisFriend
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		DBDUIViewsMobile_EActionOnFriendType               actionType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUMGBaseFriendListElement::TriggerActionOnThisFriend(DBDUIViewsMobile_EActionOnFriendType actionType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsMobile.UMGBaseFriendListElement.TriggerActionOnThisFriend"));

	UUMGBaseFriendListElement_TriggerActionOnThisFriend_Params params {};
	params.actionType = actionType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02BC0340
//		Name   -> Function DBDUIViewsMobile.UMGExpandableListWidget.ToggleExpansion
//		Flags  -> (Final, Native, Protected)
void UUMGExpandableListWidget::ToggleExpansion()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsMobile.UMGExpandableListWidget.ToggleExpansion"));

	UUMGExpandableListWidget_ToggleExpansion_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02BC0070
//		Name   -> Function DBDUIViewsMobile.UMGFriendElementWidget.HandleSelectionButton
//		Flags  -> (Final, Native, Protected)
void UUMGFriendElementWidget::HandleSelectionButton()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsMobile.UMGFriendElementWidget.HandleSelectionButton"));

	UUMGFriendElementWidget_HandleSelectionButton_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02BBFFB0
//		Name   -> Function DBDUIViewsMobile.UMGFriendElementWidget.HandleFavoriteButtonClicked
//		Flags  -> (Final, Native, Protected, BlueprintCallable)
void UUMGFriendElementWidget::HandleFavoriteButtonClicked()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsMobile.UMGFriendElementWidget.HandleFavoriteButtonClicked"));

	UUMGFriendElementWidget_HandleFavoriteButtonClicked_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02BBFF70
//		Name   -> Function DBDUIViewsMobile.UMGFriendPartyListElementWidget.HandleCancelInviteButtonClicked
//		Flags  -> (Final, Native, Protected)
void UUMGFriendPartyListElementWidget::HandleCancelInviteButtonClicked()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsMobile.UMGFriendPartyListElementWidget.HandleCancelInviteButtonClicked"));

	UUMGFriendPartyListElementWidget_HandleCancelInviteButtonClicked_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02BC0090
//		Name   -> Function DBDUIViewsMobile.UMGFriendSearchBarWidget.HandleTextInputChanged
//		Flags  -> (Final, Native, Private, HasOutParms)
// Parameters:
//		struct FText                                       textInput                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UUMGFriendSearchBarWidget::HandleTextInputChanged(const struct FText& textInput)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsMobile.UMGFriendSearchBarWidget.HandleTextInputChanged"));

	UUMGFriendSearchBarWidget_HandleTextInputChanged_Params params {};
	params.textInput = textInput;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02BC0050
//		Name   -> Function DBDUIViewsMobile.UMGFriendSearchBarWidget.HandleSearchButtonClicked
//		Flags  -> (Final, Native, Private)
void UUMGFriendSearchBarWidget::HandleSearchButtonClicked()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsMobile.UMGFriendSearchBarWidget.HandleSearchButtonClicked"));

	UUMGFriendSearchBarWidget_HandleSearchButtonClicked_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02BC02B0
//		Name   -> Function DBDUIViewsMobile.UMGScrollListPageButton.SetIsSelected
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               selected                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUMGScrollListPageButton::SetIsSelected(bool selected)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsMobile.UMGScrollListPageButton.SetIsSelected"));

	UUMGScrollListPageButton_SetIsSelected_Params params {};
	params.selected = selected;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02BBFE50
//		Name   -> Function DBDUIViewsMobile.UMGScrollListPageButton.HandleActionButtonClick
//		Flags  -> (Final, Native, Public)
void UUMGScrollListPageButton::HandleActionButtonClick()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function DBDUIViewsMobile.UMGScrollListPageButton.HandleActionButtonClick"));

	UUMGScrollListPageButton_HandleActionButtonClick_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
