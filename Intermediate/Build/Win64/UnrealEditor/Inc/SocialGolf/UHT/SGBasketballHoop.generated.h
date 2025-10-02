// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Basketball/SGBasketballHoop.h"

#ifdef SOCIALGOLF_SGBasketballHoop_generated_h
#error "SGBasketballHoop.generated.h already included, missing '#pragma once' in SGBasketballHoop.h"
#endif
#define SOCIALGOLF_SGBasketballHoop_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UBoxComponent;
class UPrimitiveComponent;
struct FHitResult;
struct FLinearColor;

// ********** Begin Class ASGBasketballHoop ********************************************************
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Basketball_SGBasketballHoop_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastOnBackboardHit_Implementation(); \
	virtual void MulticastOnRimHit_Implementation(); \
	virtual void MulticastOnScore_Implementation(); \
	virtual void ServerResetStats_Implementation(); \
	DECLARE_FUNCTION(execSetNetColor); \
	DECLARE_FUNCTION(execSetRimColor); \
	DECLARE_FUNCTION(execSetBackboardColor); \
	DECLARE_FUNCTION(execSetPostColor); \
	DECLARE_FUNCTION(execUpdateHoopColors); \
	DECLARE_FUNCTION(execAnimateNetOnScore); \
	DECLARE_FUNCTION(execMulticastOnBackboardHit); \
	DECLARE_FUNCTION(execMulticastOnRimHit); \
	DECLARE_FUNCTION(execMulticastOnScore); \
	DECLARE_FUNCTION(execOnBackboardCollisionHit); \
	DECLARE_FUNCTION(execOnRimCollisionHit); \
	DECLARE_FUNCTION(execOnPreScoringZoneEndOverlap); \
	DECLARE_FUNCTION(execOnPreScoringZoneBeginOverlap); \
	DECLARE_FUNCTION(execOnScoringZoneBeginOverlap); \
	DECLARE_FUNCTION(execGetScoringZone); \
	DECLARE_FUNCTION(execGetSuccessfulShots); \
	DECLARE_FUNCTION(execGetTotalShots); \
	DECLARE_FUNCTION(execServerResetStats); \
	DECLARE_FUNCTION(execPlayScoreEffects); \
	DECLARE_FUNCTION(execPlayBackboardHitSound); \
	DECLARE_FUNCTION(execPlayRimHitSound); \
	DECLARE_FUNCTION(execPlayScoreSound); \
	DECLARE_FUNCTION(execRegisterWithGameManager); \
	DECLARE_FUNCTION(execResetStats); \
	DECLARE_FUNCTION(execGetAccuracy); \
	DECLARE_FUNCTION(execRegisterScore); \
	DECLARE_FUNCTION(execRegisterShot);


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Basketball_SGBasketballHoop_h_17_CALLBACK_WRAPPERS
SOCIALGOLF_API UClass* Z_Construct_UClass_ASGBasketballHoop_NoRegister();

#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Basketball_SGBasketballHoop_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASGBasketballHoop(); \
	friend struct Z_Construct_UClass_ASGBasketballHoop_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOCIALGOLF_API UClass* Z_Construct_UClass_ASGBasketballHoop_NoRegister(); \
public: \
	DECLARE_CLASS2(ASGBasketballHoop, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SocialGolf"), Z_Construct_UClass_ASGBasketballHoop_NoRegister) \
	DECLARE_SERIALIZER(ASGBasketballHoop) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		TotalShots=NETFIELD_REP_START, \
		SuccessfulShots, \
		NETFIELD_REP_END=SuccessfulShots	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Basketball_SGBasketballHoop_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASGBasketballHoop(ASGBasketballHoop&&) = delete; \
	ASGBasketballHoop(const ASGBasketballHoop&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASGBasketballHoop); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASGBasketballHoop); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASGBasketballHoop) \
	NO_API virtual ~ASGBasketballHoop();


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Basketball_SGBasketballHoop_h_14_PROLOG
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Basketball_SGBasketballHoop_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Basketball_SGBasketballHoop_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Basketball_SGBasketballHoop_h_17_CALLBACK_WRAPPERS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Basketball_SGBasketballHoop_h_17_INCLASS_NO_PURE_DECLS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Basketball_SGBasketballHoop_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASGBasketballHoop;

// ********** End Class ASGBasketballHoop **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Basketball_SGBasketballHoop_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
