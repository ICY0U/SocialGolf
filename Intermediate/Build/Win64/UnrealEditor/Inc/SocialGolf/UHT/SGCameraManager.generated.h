// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Camera/SGCameraManager.h"

#ifdef SOCIALGOLF_SGCameraManager_generated_h
#error "SGCameraManager.generated.h already included, missing '#pragma once' in SGCameraManager.h"
#endif
#define SOCIALGOLF_SGCameraManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class ASGPickupableCamera;
class UObject;
class USGCameraManager;

// ********** Begin Delegate FOnCameraViewChanged **************************************************
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGCameraManager_h_12_DELEGATE \
SOCIALGOLF_API void FOnCameraViewChanged_DelegateWrapper(const FMulticastScriptDelegate& OnCameraViewChanged, bool bIsCameraView);


// ********** End Delegate FOnCameraViewChanged ****************************************************

// ********** Begin Class USGCameraManager *********************************************************
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGCameraManager_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGet); \
	DECLARE_FUNCTION(execIsRecording); \
	DECLARE_FUNCTION(execGetCurrentCamera); \
	DECLARE_FUNCTION(execIsCameraViewActive); \
	DECLARE_FUNCTION(execHasCamera); \
	DECLARE_FUNCTION(execStopRecording); \
	DECLARE_FUNCTION(execStartRecording); \
	DECLARE_FUNCTION(execToggleCameraView); \
	DECLARE_FUNCTION(execDropCamera); \
	DECLARE_FUNCTION(execPickUpCamera);


SOCIALGOLF_API UClass* Z_Construct_UClass_USGCameraManager_NoRegister();

#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGCameraManager_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSGCameraManager(); \
	friend struct Z_Construct_UClass_USGCameraManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOCIALGOLF_API UClass* Z_Construct_UClass_USGCameraManager_NoRegister(); \
public: \
	DECLARE_CLASS2(USGCameraManager, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SocialGolf"), Z_Construct_UClass_USGCameraManager_NoRegister) \
	DECLARE_SERIALIZER(USGCameraManager)


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGCameraManager_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USGCameraManager(USGCameraManager&&) = delete; \
	USGCameraManager(const USGCameraManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USGCameraManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USGCameraManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USGCameraManager) \
	NO_API virtual ~USGCameraManager();


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGCameraManager_h_14_PROLOG
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGCameraManager_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGCameraManager_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGCameraManager_h_17_INCLASS_NO_PURE_DECLS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGCameraManager_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USGCameraManager;

// ********** End Class USGCameraManager ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGCameraManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
