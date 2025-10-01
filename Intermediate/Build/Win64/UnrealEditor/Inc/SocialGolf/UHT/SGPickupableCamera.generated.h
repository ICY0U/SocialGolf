// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Camera/SGPickupableCamera.h"

#ifdef SOCIALGOLF_SGPickupableCamera_generated_h
#error "SGPickupableCamera.generated.h already included, missing '#pragma once' in SGPickupableCamera.h"
#endif
#define SOCIALGOLF_SGPickupableCamera_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class APawn;
class USGCameraRecorder;

// ********** Begin Class ASGPickupableCamera ******************************************************
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGPickupableCamera_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCameraRecorder); \
	DECLARE_FUNCTION(execGetCurrentOwner); \
	DECLARE_FUNCTION(execIsPickedUp); \
	DECLARE_FUNCTION(execDrop); \
	DECLARE_FUNCTION(execPickUp);


SOCIALGOLF_API UClass* Z_Construct_UClass_ASGPickupableCamera_NoRegister();

#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGPickupableCamera_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASGPickupableCamera(); \
	friend struct Z_Construct_UClass_ASGPickupableCamera_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOCIALGOLF_API UClass* Z_Construct_UClass_ASGPickupableCamera_NoRegister(); \
public: \
	DECLARE_CLASS2(ASGPickupableCamera, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SocialGolf"), Z_Construct_UClass_ASGPickupableCamera_NoRegister) \
	DECLARE_SERIALIZER(ASGPickupableCamera) \
	virtual UObject* _getUObject() const override { return const_cast<ASGPickupableCamera*>(this); }


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGPickupableCamera_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASGPickupableCamera(ASGPickupableCamera&&) = delete; \
	ASGPickupableCamera(const ASGPickupableCamera&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASGPickupableCamera); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASGPickupableCamera); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASGPickupableCamera) \
	NO_API virtual ~ASGPickupableCamera();


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGPickupableCamera_h_13_PROLOG
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGPickupableCamera_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGPickupableCamera_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGPickupableCamera_h_16_INCLASS_NO_PURE_DECLS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGPickupableCamera_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASGPickupableCamera;

// ********** End Class ASGPickupableCamera ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGPickupableCamera_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
