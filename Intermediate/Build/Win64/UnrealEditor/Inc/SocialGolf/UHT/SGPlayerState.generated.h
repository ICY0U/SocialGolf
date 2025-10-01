// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Framework/SGPlayerState.h"

#ifdef SOCIALGOLF_SGPlayerState_generated_h
#error "SGPlayerState.generated.h already included, missing '#pragma once' in SGPlayerState.h"
#endif
#define SOCIALGOLF_SGPlayerState_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ASGPlayerState ***********************************************************
SOCIALGOLF_API UClass* Z_Construct_UClass_ASGPlayerState_NoRegister();

#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Framework_SGPlayerState_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASGPlayerState(); \
	friend struct Z_Construct_UClass_ASGPlayerState_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOCIALGOLF_API UClass* Z_Construct_UClass_ASGPlayerState_NoRegister(); \
public: \
	DECLARE_CLASS2(ASGPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SocialGolf"), Z_Construct_UClass_ASGPlayerState_NoRegister) \
	DECLARE_SERIALIZER(ASGPlayerState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		DisplayName=NETFIELD_REP_START, \
		NETFIELD_REP_END=DisplayName	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Framework_SGPlayerState_h_9_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASGPlayerState(ASGPlayerState&&) = delete; \
	ASGPlayerState(const ASGPlayerState&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASGPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASGPlayerState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASGPlayerState) \
	NO_API virtual ~ASGPlayerState();


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Framework_SGPlayerState_h_6_PROLOG
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Framework_SGPlayerState_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Framework_SGPlayerState_h_9_INCLASS_NO_PURE_DECLS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Framework_SGPlayerState_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASGPlayerState;

// ********** End Class ASGPlayerState *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Framework_SGPlayerState_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
