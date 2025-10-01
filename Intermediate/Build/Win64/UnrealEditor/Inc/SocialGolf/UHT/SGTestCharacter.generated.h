// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/SGTestCharacter.h"

#ifdef SOCIALGOLF_SGTestCharacter_generated_h
#error "SGTestCharacter.generated.h already included, missing '#pragma once' in SGTestCharacter.h"
#endif
#define SOCIALGOLF_SGTestCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class USGCameraManager;

// ********** Begin Class ASGTestCharacter *********************************************************
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Characters_SGTestCharacter_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCameraManager); \
	DECLARE_FUNCTION(execOnDropCameraPressed); \
	DECLARE_FUNCTION(execOnToggleCameraPressed); \
	DECLARE_FUNCTION(execOnInteractPressed);


SOCIALGOLF_API UClass* Z_Construct_UClass_ASGTestCharacter_NoRegister();

#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Characters_SGTestCharacter_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASGTestCharacter(); \
	friend struct Z_Construct_UClass_ASGTestCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOCIALGOLF_API UClass* Z_Construct_UClass_ASGTestCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(ASGTestCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SocialGolf"), Z_Construct_UClass_ASGTestCharacter_NoRegister) \
	DECLARE_SERIALIZER(ASGTestCharacter)


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Characters_SGTestCharacter_h_11_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASGTestCharacter(ASGTestCharacter&&) = delete; \
	ASGTestCharacter(const ASGTestCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASGTestCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASGTestCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASGTestCharacter) \
	NO_API virtual ~ASGTestCharacter();


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Characters_SGTestCharacter_h_8_PROLOG
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Characters_SGTestCharacter_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Characters_SGTestCharacter_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Characters_SGTestCharacter_h_11_INCLASS_NO_PURE_DECLS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Characters_SGTestCharacter_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASGTestCharacter;

// ********** End Class ASGTestCharacter ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Characters_SGTestCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
