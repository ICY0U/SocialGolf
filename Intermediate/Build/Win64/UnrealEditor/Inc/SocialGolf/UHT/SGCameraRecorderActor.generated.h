// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Camera/SGCameraRecorderActor.h"

#ifdef SOCIALGOLF_SGCameraRecorderActor_generated_h
#error "SGCameraRecorderActor.generated.h already included, missing '#pragma once' in SGCameraRecorderActor.h"
#endif
#define SOCIALGOLF_SGCameraRecorderActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class USGCameraRecorder;

// ********** Begin Class ASGCameraRecorderActor ***************************************************
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGCameraRecorderActor_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCameraRecorderComponent); \
	DECLARE_FUNCTION(execDeleteRecording); \
	DECLARE_FUNCTION(execSaveRecordingToDesktop); \
	DECLARE_FUNCTION(execGetRecordingCount); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execIsRecording); \
	DECLARE_FUNCTION(execStopPlayback); \
	DECLARE_FUNCTION(execPlayLatestRecording); \
	DECLARE_FUNCTION(execStopRecording); \
	DECLARE_FUNCTION(execStartRecording);


SOCIALGOLF_API UClass* Z_Construct_UClass_ASGCameraRecorderActor_NoRegister();

#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGCameraRecorderActor_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASGCameraRecorderActor(); \
	friend struct Z_Construct_UClass_ASGCameraRecorderActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOCIALGOLF_API UClass* Z_Construct_UClass_ASGCameraRecorderActor_NoRegister(); \
public: \
	DECLARE_CLASS2(ASGCameraRecorderActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SocialGolf"), Z_Construct_UClass_ASGCameraRecorderActor_NoRegister) \
	DECLARE_SERIALIZER(ASGCameraRecorderActor)


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGCameraRecorderActor_h_11_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASGCameraRecorderActor(ASGCameraRecorderActor&&) = delete; \
	ASGCameraRecorderActor(const ASGCameraRecorderActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASGCameraRecorderActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASGCameraRecorderActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASGCameraRecorderActor) \
	NO_API virtual ~ASGCameraRecorderActor();


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGCameraRecorderActor_h_8_PROLOG
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGCameraRecorderActor_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGCameraRecorderActor_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGCameraRecorderActor_h_11_INCLASS_NO_PURE_DECLS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGCameraRecorderActor_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASGCameraRecorderActor;

// ********** End Class ASGCameraRecorderActor *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGCameraRecorderActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
