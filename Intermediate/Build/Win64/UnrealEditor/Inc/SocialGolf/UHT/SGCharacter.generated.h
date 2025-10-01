// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/SGCharacter.h"

#ifdef SOCIALGOLF_SGCharacter_generated_h
#error "SGCharacter.generated.h already included, missing '#pragma once' in SGCharacter.h"
#endif
#define SOCIALGOLF_SGCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class ASGPickupCandle;
class USGGolfClubManager;

// ********** Begin Class ASGCharacter *************************************************************
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Characters_SGCharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_HeldCandle); \
	DECLARE_FUNCTION(execOnRep_IsSitting); \
	DECLARE_FUNCTION(execSetMouseSensitivity); \
	DECLARE_FUNCTION(execGetGolfClubManager); \
	DECLARE_FUNCTION(execIsHoldingCandle); \
	DECLARE_FUNCTION(execGetHeldCandle); \
	DECLARE_FUNCTION(execSetHeldCandle); \
	DECLARE_FUNCTION(execForceStandUp); \
	DECLARE_FUNCTION(execIsSitting); \
	DECLARE_FUNCTION(execSetSittingState); \
	DECLARE_FUNCTION(execToggleDebugCollision);


SOCIALGOLF_API UClass* Z_Construct_UClass_ASGCharacter_NoRegister();

#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Characters_SGCharacter_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASGCharacter(); \
	friend struct Z_Construct_UClass_ASGCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOCIALGOLF_API UClass* Z_Construct_UClass_ASGCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(ASGCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SocialGolf"), Z_Construct_UClass_ASGCharacter_NoRegister) \
	DECLARE_SERIALIZER(ASGCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<ASGCharacter*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bIsSitting=NETFIELD_REP_START, \
		HeldCandle, \
		NETFIELD_REP_END=HeldCandle	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Characters_SGCharacter_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASGCharacter(ASGCharacter&&) = delete; \
	ASGCharacter(const ASGCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASGCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASGCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASGCharacter) \
	NO_API virtual ~ASGCharacter();


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Characters_SGCharacter_h_15_PROLOG
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Characters_SGCharacter_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Characters_SGCharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Characters_SGCharacter_h_18_INCLASS_NO_PURE_DECLS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Characters_SGCharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASGCharacter;

// ********** End Class ASGCharacter ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Characters_SGCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
