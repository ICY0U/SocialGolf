// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actors/SGBench.h"

#ifdef SOCIALGOLF_SGBench_generated_h
#error "SGBench.generated.h already included, missing '#pragma once' in SGBench.h"
#endif
#define SOCIALGOLF_SGBench_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class ASGCharacter;

// ********** Begin Class ASGBench *****************************************************************
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Actors_SGBench_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSitWorldRotation); \
	DECLARE_FUNCTION(execGetSitWorldPosition); \
	DECLARE_FUNCTION(execOnRep_CurrentSittingCharacter); \
	DECLARE_FUNCTION(execGetSittingCharacter); \
	DECLARE_FUNCTION(execIsBenchOccupied); \
	DECLARE_FUNCTION(execStandUpFromBench); \
	DECLARE_FUNCTION(execSitOnBench);


SOCIALGOLF_API UClass* Z_Construct_UClass_ASGBench_NoRegister();

#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Actors_SGBench_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASGBench(); \
	friend struct Z_Construct_UClass_ASGBench_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOCIALGOLF_API UClass* Z_Construct_UClass_ASGBench_NoRegister(); \
public: \
	DECLARE_CLASS2(ASGBench, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SocialGolf"), Z_Construct_UClass_ASGBench_NoRegister) \
	DECLARE_SERIALIZER(ASGBench) \
	virtual UObject* _getUObject() const override { return const_cast<ASGBench*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentSittingCharacter=NETFIELD_REP_START, \
		NETFIELD_REP_END=CurrentSittingCharacter	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Actors_SGBench_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASGBench(ASGBench&&) = delete; \
	ASGBench(const ASGBench&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASGBench); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASGBench); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASGBench) \
	NO_API virtual ~ASGBench();


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Actors_SGBench_h_13_PROLOG
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Actors_SGBench_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Actors_SGBench_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Actors_SGBench_h_16_INCLASS_NO_PURE_DECLS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Actors_SGBench_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASGBench;

// ********** End Class ASGBench *******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Actors_SGBench_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
