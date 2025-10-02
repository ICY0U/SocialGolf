// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Replay/SGReplayWidget.h"

#ifdef SOCIALGOLF_SGReplayWidget_generated_h
#error "SGReplayWidget.generated.h already included, missing '#pragma once' in SGReplayWidget.h"
#endif
#define SOCIALGOLF_SGReplayWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UObject;
class USGReplayManager;
enum class EReplayEventType : uint8;

// ********** Begin Delegate FOnReplaySelected *****************************************************
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Replay_SGReplayWidget_h_16_DELEGATE \
SOCIALGOLF_API void FOnReplaySelected_DelegateWrapper(const FMulticastScriptDelegate& OnReplaySelected, const FString& ReplayName);


// ********** End Delegate FOnReplaySelected *******************************************************

// ********** Begin Class USGReplayWidget **********************************************************
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Replay_SGReplayWidget_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnReplaySaved); \
	DECLARE_FUNCTION(execOnEventRecorded); \
	DECLARE_FUNCTION(execOnPlaybackStateChanged); \
	DECLARE_FUNCTION(execOnRecordingStateChanged); \
	DECLARE_FUNCTION(execOnReplayListSelectionChanged); \
	DECLARE_FUNCTION(execOnCameraModeChanged); \
	DECLARE_FUNCTION(execOnSpeedSliderChanged); \
	DECLARE_FUNCTION(execOnPlaybackSliderChanged); \
	DECLARE_FUNCTION(execOnRefreshListButtonClicked); \
	DECLARE_FUNCTION(execOnSaveReplayButtonClicked); \
	DECLARE_FUNCTION(execOnDeleteReplayButtonClicked); \
	DECLARE_FUNCTION(execOnLoadReplayButtonClicked); \
	DECLARE_FUNCTION(execOnNextCameraButtonClicked); \
	DECLARE_FUNCTION(execOnPausePlayButtonClicked); \
	DECLARE_FUNCTION(execOnStopPlayButtonClicked); \
	DECLARE_FUNCTION(execOnPlayButtonClicked); \
	DECLARE_FUNCTION(execOnPauseRecordButtonClicked); \
	DECLARE_FUNCTION(execOnStopRecordButtonClicked); \
	DECLARE_FUNCTION(execOnRecordButtonClicked); \
	DECLARE_FUNCTION(execSetCameraMode); \
	DECLARE_FUNCTION(execNextCamera); \
	DECLARE_FUNCTION(execSaveCurrentReplay); \
	DECLARE_FUNCTION(execDeleteSelectedReplay); \
	DECLARE_FUNCTION(execLoadSelectedReplay); \
	DECLARE_FUNCTION(execTogglePlayPause); \
	DECLARE_FUNCTION(execPausePlayback); \
	DECLARE_FUNCTION(execStopPlayback); \
	DECLARE_FUNCTION(execStartPlayback); \
	DECLARE_FUNCTION(execPauseRecording); \
	DECLARE_FUNCTION(execStopRecording); \
	DECLARE_FUNCTION(execStartRecording); \
	DECLARE_FUNCTION(execRefreshReplayList); \
	DECLARE_FUNCTION(execRefreshUI); \
	DECLARE_FUNCTION(execInitializeReplayWidget);


SOCIALGOLF_API UClass* Z_Construct_UClass_USGReplayWidget_NoRegister();

#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Replay_SGReplayWidget_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSGReplayWidget(); \
	friend struct Z_Construct_UClass_USGReplayWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOCIALGOLF_API UClass* Z_Construct_UClass_USGReplayWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(USGReplayWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SocialGolf"), Z_Construct_UClass_USGReplayWidget_NoRegister) \
	DECLARE_SERIALIZER(USGReplayWidget)


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Replay_SGReplayWidget_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USGReplayWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USGReplayWidget(USGReplayWidget&&) = delete; \
	USGReplayWidget(const USGReplayWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USGReplayWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USGReplayWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USGReplayWidget) \
	NO_API virtual ~USGReplayWidget();


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Replay_SGReplayWidget_h_18_PROLOG
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Replay_SGReplayWidget_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Replay_SGReplayWidget_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Replay_SGReplayWidget_h_21_INCLASS_NO_PURE_DECLS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Replay_SGReplayWidget_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USGReplayWidget;

// ********** End Class USGReplayWidget ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Replay_SGReplayWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
