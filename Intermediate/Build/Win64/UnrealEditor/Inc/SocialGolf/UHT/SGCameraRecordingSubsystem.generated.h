// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Camera/SGCameraRecordingSubsystem.h"

#ifdef SOCIALGOLF_SGCameraRecordingSubsystem_generated_h
#error "SGCameraRecordingSubsystem.generated.h already included, missing '#pragma once' in SGCameraRecordingSubsystem.h"
#endif
#define SOCIALGOLF_SGCameraRecordingSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UObject;
class USGCameraRecorder;
class USGCameraRecordingSubsystem;
enum class ECameraRecorderState : uint8;
struct FCameraRecordingData;

// ********** Begin Delegate FOnCameraRecordingEvent ***********************************************
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGCameraRecordingSubsystem_h_12_DELEGATE \
SOCIALGOLF_API void FOnCameraRecordingEvent_DelegateWrapper(const FMulticastScriptDelegate& OnCameraRecordingEvent, const FString& RecordingName);


// ********** End Delegate FOnCameraRecordingEvent *************************************************

// ********** Begin Class USGCameraRecordingSubsystem **********************************************
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGCameraRecordingSubsystem_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnCameraStateChanged); \
	DECLARE_FUNCTION(execGet); \
	DECLARE_FUNCTION(execExportRecordingToDesktop); \
	DECLARE_FUNCTION(execExportAllRecordingsToDesktop); \
	DECLARE_FUNCTION(execGetAllRecordings); \
	DECLARE_FUNCTION(execGetTotalRecordingCount); \
	DECLARE_FUNCTION(execUnregisterCameraRecorder); \
	DECLARE_FUNCTION(execRegisterCameraRecorder); \
	DECLARE_FUNCTION(execClearAllRecordings); \
	DECLARE_FUNCTION(execLoadCameraRecordings); \
	DECLARE_FUNCTION(execSaveCameraRecordings);


SOCIALGOLF_API UClass* Z_Construct_UClass_USGCameraRecordingSubsystem_NoRegister();

#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGCameraRecordingSubsystem_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSGCameraRecordingSubsystem(); \
	friend struct Z_Construct_UClass_USGCameraRecordingSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOCIALGOLF_API UClass* Z_Construct_UClass_USGCameraRecordingSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(USGCameraRecordingSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SocialGolf"), Z_Construct_UClass_USGCameraRecordingSubsystem_NoRegister) \
	DECLARE_SERIALIZER(USGCameraRecordingSubsystem)


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGCameraRecordingSubsystem_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USGCameraRecordingSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USGCameraRecordingSubsystem(USGCameraRecordingSubsystem&&) = delete; \
	USGCameraRecordingSubsystem(const USGCameraRecordingSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USGCameraRecordingSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USGCameraRecordingSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USGCameraRecordingSubsystem) \
	NO_API virtual ~USGCameraRecordingSubsystem();


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGCameraRecordingSubsystem_h_14_PROLOG
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGCameraRecordingSubsystem_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGCameraRecordingSubsystem_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGCameraRecordingSubsystem_h_17_INCLASS_NO_PURE_DECLS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGCameraRecordingSubsystem_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USGCameraRecordingSubsystem;

// ********** End Class USGCameraRecordingSubsystem ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGCameraRecordingSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
