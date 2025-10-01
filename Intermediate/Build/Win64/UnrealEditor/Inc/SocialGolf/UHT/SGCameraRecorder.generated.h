// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Camera/SGCameraRecorder.h"

#ifdef SOCIALGOLF_SGCameraRecorder_generated_h
#error "SGCameraRecorder.generated.h already included, missing '#pragma once' in SGCameraRecorder.h"
#endif
#define SOCIALGOLF_SGCameraRecorder_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

enum class ECameraRecorderState : uint8;
struct FCameraRecordingData;

// ********** Begin ScriptStruct FCameraRecordingData **********************************************
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGCameraRecorder_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCameraRecordingData_Statics; \
	SOCIALGOLF_API static class UScriptStruct* StaticStruct();


struct FCameraRecordingData;
// ********** End ScriptStruct FCameraRecordingData ************************************************

// ********** Begin Delegate FOnRecordingStateChanged **********************************************
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGCameraRecorder_h_62_DELEGATE \
SOCIALGOLF_API void FOnRecordingStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnRecordingStateChanged, ECameraRecorderState NewState);


// ********** End Delegate FOnRecordingStateChanged ************************************************

// ********** Begin Delegate FOnRecordingProgress **************************************************
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGCameraRecorder_h_63_DELEGATE \
SOCIALGOLF_API void FOnRecordingProgress_DelegateWrapper(const FMulticastScriptDelegate& OnRecordingProgress, float CurrentTime, float TotalTime);


// ********** End Delegate FOnRecordingProgress ****************************************************

// ********** Begin Class USGCameraRecorder ********************************************************
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGCameraRecorder_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execIsRecording); \
	DECLARE_FUNCTION(execGetRecordingData); \
	DECLARE_FUNCTION(execGetRecordingCount); \
	DECLARE_FUNCTION(execSaveRecordingsToSave); \
	DECLARE_FUNCTION(execLoadRecordingsFromSave); \
	DECLARE_FUNCTION(execDeleteRecording); \
	DECLARE_FUNCTION(execSaveRecordingToDesktop); \
	DECLARE_FUNCTION(execSeekToTime); \
	DECLARE_FUNCTION(execResumePlayback); \
	DECLARE_FUNCTION(execPausePlayback); \
	DECLARE_FUNCTION(execStopPlayback); \
	DECLARE_FUNCTION(execPlayRecording); \
	DECLARE_FUNCTION(execResumeRecording); \
	DECLARE_FUNCTION(execPauseRecording); \
	DECLARE_FUNCTION(execStopRecording); \
	DECLARE_FUNCTION(execStartRecording);


SOCIALGOLF_API UClass* Z_Construct_UClass_USGCameraRecorder_NoRegister();

#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGCameraRecorder_h_68_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSGCameraRecorder(); \
	friend struct Z_Construct_UClass_USGCameraRecorder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOCIALGOLF_API UClass* Z_Construct_UClass_USGCameraRecorder_NoRegister(); \
public: \
	DECLARE_CLASS2(USGCameraRecorder, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SocialGolf"), Z_Construct_UClass_USGCameraRecorder_NoRegister) \
	DECLARE_SERIALIZER(USGCameraRecorder) \
	virtual UObject* _getUObject() const override { return const_cast<USGCameraRecorder*>(this); }


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGCameraRecorder_h_68_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USGCameraRecorder(USGCameraRecorder&&) = delete; \
	USGCameraRecorder(const USGCameraRecorder&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USGCameraRecorder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USGCameraRecorder); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USGCameraRecorder) \
	NO_API virtual ~USGCameraRecorder();


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGCameraRecorder_h_65_PROLOG
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGCameraRecorder_h_68_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGCameraRecorder_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGCameraRecorder_h_68_INCLASS_NO_PURE_DECLS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGCameraRecorder_h_68_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USGCameraRecorder;

// ********** End Class USGCameraRecorder **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGCameraRecorder_h

// ********** Begin Enum ECameraRecorderState ******************************************************
#define FOREACH_ENUM_ECAMERARECORDERSTATE(op) \
	op(ECameraRecorderState::Idle) \
	op(ECameraRecorderState::Recording) \
	op(ECameraRecorderState::Playing) \
	op(ECameraRecorderState::Paused) 

enum class ECameraRecorderState : uint8;
template<> struct TIsUEnumClass<ECameraRecorderState> { enum { Value = true }; };
template<> SOCIALGOLF_API UEnum* StaticEnum<ECameraRecorderState>();
// ********** End Enum ECameraRecorderState ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
