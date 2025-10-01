// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Camera/SGSimplePickupableCamera.h"

#ifdef SOCIALGOLF_SGSimplePickupableCamera_generated_h
#error "SGSimplePickupableCamera.generated.h already included, missing '#pragma once' in SGSimplePickupableCamera.h"
#endif
#define SOCIALGOLF_SGSimplePickupableCamera_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class APawn;
class USGCameraRecorder;

// ********** Begin Class ASGSimplePickupableCamera ************************************************
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGSimplePickupableCamera_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnDropCameraPressed); \
	DECLARE_FUNCTION(execOnToggleCameraPressed); \
	DECLARE_FUNCTION(execGetCameraRecorder); \
	DECLARE_FUNCTION(execGetCurrentOwner); \
	DECLARE_FUNCTION(execIsCameraViewActive); \
	DECLARE_FUNCTION(execIsPickedUp); \
	DECLARE_FUNCTION(execToggleCameraView); \
	DECLARE_FUNCTION(execDrop); \
	DECLARE_FUNCTION(execPickUp);


SOCIALGOLF_API UClass* Z_Construct_UClass_ASGSimplePickupableCamera_NoRegister();

#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGSimplePickupableCamera_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASGSimplePickupableCamera(); \
	friend struct Z_Construct_UClass_ASGSimplePickupableCamera_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOCIALGOLF_API UClass* Z_Construct_UClass_ASGSimplePickupableCamera_NoRegister(); \
public: \
	DECLARE_CLASS2(ASGSimplePickupableCamera, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SocialGolf"), Z_Construct_UClass_ASGSimplePickupableCamera_NoRegister) \
	DECLARE_SERIALIZER(ASGSimplePickupableCamera) \
	virtual UObject* _getUObject() const override { return const_cast<ASGSimplePickupableCamera*>(this); }


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGSimplePickupableCamera_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASGSimplePickupableCamera(ASGSimplePickupableCamera&&) = delete; \
	ASGSimplePickupableCamera(const ASGSimplePickupableCamera&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASGSimplePickupableCamera); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASGSimplePickupableCamera); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASGSimplePickupableCamera) \
	NO_API virtual ~ASGSimplePickupableCamera();


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGSimplePickupableCamera_h_14_PROLOG
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGSimplePickupableCamera_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGSimplePickupableCamera_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGSimplePickupableCamera_h_17_INCLASS_NO_PURE_DECLS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGSimplePickupableCamera_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASGSimplePickupableCamera;

// ********** End Class ASGSimplePickupableCamera **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGSimplePickupableCamera_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
