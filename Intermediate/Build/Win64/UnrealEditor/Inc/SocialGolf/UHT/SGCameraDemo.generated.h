// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Demo/SGCameraDemo.h"

#ifdef SOCIALGOLF_SGCameraDemo_generated_h
#error "SGCameraDemo.generated.h already included, missing '#pragma once' in SGCameraDemo.h"
#endif
#define SOCIALGOLF_SGCameraDemo_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

enum class ECameraRecorderState : uint8;

// ********** Begin Class ASGCameraDemo ************************************************************
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Demo_SGCameraDemo_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRecordingProgress); \
	DECLARE_FUNCTION(execOnRecordingStateChanged); \
	DECLARE_FUNCTION(execSimulateContentWarningGameplay); \
	DECLARE_FUNCTION(execClearAllRecordings); \
	DECLARE_FUNCTION(execExportAllRecordings); \
	DECLARE_FUNCTION(execPlayAllRecordings); \
	DECLARE_FUNCTION(execStopRecordingAllCameras); \
	DECLARE_FUNCTION(execStartRecordingAllCameras);


SOCIALGOLF_API UClass* Z_Construct_UClass_ASGCameraDemo_NoRegister();

#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Demo_SGCameraDemo_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASGCameraDemo(); \
	friend struct Z_Construct_UClass_ASGCameraDemo_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOCIALGOLF_API UClass* Z_Construct_UClass_ASGCameraDemo_NoRegister(); \
public: \
	DECLARE_CLASS2(ASGCameraDemo, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SocialGolf"), Z_Construct_UClass_ASGCameraDemo_NoRegister) \
	DECLARE_SERIALIZER(ASGCameraDemo)


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Demo_SGCameraDemo_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASGCameraDemo(ASGCameraDemo&&) = delete; \
	ASGCameraDemo(const ASGCameraDemo&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASGCameraDemo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASGCameraDemo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASGCameraDemo) \
	NO_API virtual ~ASGCameraDemo();


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Demo_SGCameraDemo_h_13_PROLOG
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Demo_SGCameraDemo_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Demo_SGCameraDemo_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Demo_SGCameraDemo_h_16_INCLASS_NO_PURE_DECLS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Demo_SGCameraDemo_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASGCameraDemo;

// ********** End Class ASGCameraDemo **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Demo_SGCameraDemo_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
