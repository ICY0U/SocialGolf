// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Golf/SGGolfTee.h"

#ifdef SOCIALGOLF_SGGolfTee_generated_h
#error "SGGolfTee.generated.h already included, missing '#pragma once' in SGGolfTee.h"
#endif
#define SOCIALGOLF_SGGolfTee_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class ASGGolfBall;

// ********** Begin Class ASGGolfTee ***************************************************************
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Golf_SGGolfTee_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetBall); \
	DECLARE_FUNCTION(execHasBall); \
	DECLARE_FUNCTION(execRemoveBall); \
	DECLARE_FUNCTION(execSpawnGolfBall);


SOCIALGOLF_API UClass* Z_Construct_UClass_ASGGolfTee_NoRegister();

#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Golf_SGGolfTee_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASGGolfTee(); \
	friend struct Z_Construct_UClass_ASGGolfTee_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOCIALGOLF_API UClass* Z_Construct_UClass_ASGGolfTee_NoRegister(); \
public: \
	DECLARE_CLASS2(ASGGolfTee, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SocialGolf"), Z_Construct_UClass_ASGGolfTee_NoRegister) \
	DECLARE_SERIALIZER(ASGGolfTee) \
	virtual UObject* _getUObject() const override { return const_cast<ASGGolfTee*>(this); }


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Golf_SGGolfTee_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASGGolfTee(ASGGolfTee&&) = delete; \
	ASGGolfTee(const ASGGolfTee&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASGGolfTee); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASGGolfTee); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASGGolfTee) \
	NO_API virtual ~ASGGolfTee();


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Golf_SGGolfTee_h_14_PROLOG
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Golf_SGGolfTee_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Golf_SGGolfTee_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Golf_SGGolfTee_h_17_INCLASS_NO_PURE_DECLS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Golf_SGGolfTee_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASGGolfTee;

// ********** End Class ASGGolfTee *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Golf_SGGolfTee_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
