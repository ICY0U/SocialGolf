// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Save/SGCameraSaveGame.h"

#ifdef SOCIALGOLF_SGCameraSaveGame_generated_h
#error "SGCameraSaveGame.generated.h already included, missing '#pragma once' in SGCameraSaveGame.h"
#endif
#define SOCIALGOLF_SGCameraSaveGame_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FCameraRecordingData;

// ********** Begin Class USGCameraSaveGame ********************************************************
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Save_SGCameraSaveGame_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHasCameraDataForLocation); \
	DECLARE_FUNCTION(execGetCameraDataForLocation); \
	DECLARE_FUNCTION(execSaveCameraDataForLocation); \
	DECLARE_FUNCTION(execClearAllRecordings); \
	DECLARE_FUNCTION(execGetRecordingCount); \
	DECLARE_FUNCTION(execRemoveRecording); \
	DECLARE_FUNCTION(execAddRecording);


SOCIALGOLF_API UClass* Z_Construct_UClass_USGCameraSaveGame_NoRegister();

#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Save_SGCameraSaveGame_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSGCameraSaveGame(); \
	friend struct Z_Construct_UClass_USGCameraSaveGame_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOCIALGOLF_API UClass* Z_Construct_UClass_USGCameraSaveGame_NoRegister(); \
public: \
	DECLARE_CLASS2(USGCameraSaveGame, USaveGame, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SocialGolf"), Z_Construct_UClass_USGCameraSaveGame_NoRegister) \
	DECLARE_SERIALIZER(USGCameraSaveGame)


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Save_SGCameraSaveGame_h_11_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USGCameraSaveGame(USGCameraSaveGame&&) = delete; \
	USGCameraSaveGame(const USGCameraSaveGame&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USGCameraSaveGame); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USGCameraSaveGame); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USGCameraSaveGame) \
	NO_API virtual ~USGCameraSaveGame();


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Save_SGCameraSaveGame_h_8_PROLOG
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Save_SGCameraSaveGame_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Save_SGCameraSaveGame_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Save_SGCameraSaveGame_h_11_INCLASS_NO_PURE_DECLS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Save_SGCameraSaveGame_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USGCameraSaveGame;

// ********** End Class USGCameraSaveGame **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Save_SGCameraSaveGame_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
