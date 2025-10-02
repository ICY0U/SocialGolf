// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Replay/SGReplayManager.h"

#ifdef SOCIALGOLF_SGReplayManager_generated_h
#error "SGReplayManager.generated.h already included, missing '#pragma once' in SGReplayManager.h"
#endif
#define SOCIALGOLF_SGReplayManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

enum class ECameraReplayMode : uint8;
enum class EReplayEventType : uint8;
struct FSGReplayData;

// ********** Begin Delegate FOnReplayRecordingStateChanged ****************************************
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Replay_SGReplayManager_h_13_DELEGATE \
SOCIALGOLF_API void FOnReplayRecordingStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnReplayRecordingStateChanged, bool bIsRecording, float CurrentDuration);


// ********** End Delegate FOnReplayRecordingStateChanged ******************************************

// ********** Begin Delegate FOnReplayPlaybackStateChanged *****************************************
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Replay_SGReplayManager_h_14_DELEGATE \
SOCIALGOLF_API void FOnReplayPlaybackStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnReplayPlaybackStateChanged, bool bIsPlaying, float CurrentTime, float TotalDuration);


// ********** End Delegate FOnReplayPlaybackStateChanged *******************************************

// ********** Begin Delegate FOnReplayEventRecorded ************************************************
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Replay_SGReplayManager_h_15_DELEGATE \
SOCIALGOLF_API void FOnReplayEventRecorded_DelegateWrapper(const FMulticastScriptDelegate& OnReplayEventRecorded, EReplayEventType EventType, const FString& Description);


// ********** End Delegate FOnReplayEventRecorded **************************************************

// ********** Begin Delegate FOnReplaySaved ********************************************************
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Replay_SGReplayManager_h_16_DELEGATE \
SOCIALGOLF_API void FOnReplaySaved_DelegateWrapper(const FMulticastScriptDelegate& OnReplaySaved, bool bSuccess, const FString& ReplayName);


// ********** End Delegate FOnReplaySaved **********************************************************

// ********** Begin Class USGReplayManager *********************************************************
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Replay_SGReplayManager_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetTotalFrames); \
	DECLARE_FUNCTION(execGetPlaybackTime); \
	DECLARE_FUNCTION(execGetRecordingDuration); \
	DECLARE_FUNCTION(execClearCurrentReplay); \
	DECLARE_FUNCTION(execGetCurrentReplayData); \
	DECLARE_FUNCTION(execDeleteReplay); \
	DECLARE_FUNCTION(execGetAvailableReplays); \
	DECLARE_FUNCTION(execLoadReplay); \
	DECLARE_FUNCTION(execSaveReplay); \
	DECLARE_FUNCTION(execRecordHoleComplete); \
	DECLARE_FUNCTION(execRecordGolfShot); \
	DECLARE_FUNCTION(execRecordEvent); \
	DECLARE_FUNCTION(execGetCurrentCameraMode); \
	DECLARE_FUNCTION(execNextCameraMode); \
	DECLARE_FUNCTION(execSetCameraMode); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execSetPlaybackSpeed); \
	DECLARE_FUNCTION(execSetPlaybackTime); \
	DECLARE_FUNCTION(execResumePlayback); \
	DECLARE_FUNCTION(execPausePlayback); \
	DECLARE_FUNCTION(execStopPlayback); \
	DECLARE_FUNCTION(execStartPlayback); \
	DECLARE_FUNCTION(execIsRecording); \
	DECLARE_FUNCTION(execResumeRecording); \
	DECLARE_FUNCTION(execPauseRecording); \
	DECLARE_FUNCTION(execStopRecording); \
	DECLARE_FUNCTION(execStartRecording);


SOCIALGOLF_API UClass* Z_Construct_UClass_USGReplayManager_NoRegister();

#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Replay_SGReplayManager_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSGReplayManager(); \
	friend struct Z_Construct_UClass_USGReplayManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOCIALGOLF_API UClass* Z_Construct_UClass_USGReplayManager_NoRegister(); \
public: \
	DECLARE_CLASS2(USGReplayManager, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SocialGolf"), Z_Construct_UClass_USGReplayManager_NoRegister) \
	DECLARE_SERIALIZER(USGReplayManager)


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Replay_SGReplayManager_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USGReplayManager(USGReplayManager&&) = delete; \
	USGReplayManager(const USGReplayManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USGReplayManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USGReplayManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USGReplayManager) \
	NO_API virtual ~USGReplayManager();


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Replay_SGReplayManager_h_18_PROLOG
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Replay_SGReplayManager_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Replay_SGReplayManager_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Replay_SGReplayManager_h_21_INCLASS_NO_PURE_DECLS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Replay_SGReplayManager_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USGReplayManager;

// ********** End Class USGReplayManager ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Replay_SGReplayManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
