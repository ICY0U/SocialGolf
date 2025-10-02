// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Basketball/SGBasketball.h"

#ifdef SOCIALGOLF_SGBasketball_generated_h
#error "SGBasketball.generated.h already included, missing '#pragma once' in SGBasketball.h"
#endif
#define SOCIALGOLF_SGBasketball_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class ASGBasketballHoop;
class ASGCharacter;
class UPrimitiveComponent;
class USGBasketballPhysicsMaterial;
class USphereComponent;
class UStaticMeshComponent;
struct FHitResult;

// ********** Begin Class ASGBasketball ************************************************************
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Basketball_SGBasketball_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastOnBasketballDropped_Implementation(FVector const& DropLocation); \
	virtual void MulticastOnBasketballPickedUp_Implementation(ASGCharacter* Player); \
	virtual void MulticastOnBasketballThrown_Implementation(FVector const& Direction, float Power, FVector const& StartLocation); \
	virtual void ServerThrowBall_Implementation(FVector const& ThrowDirection, float ThrowPower); \
	virtual void ServerDropBall_Implementation(); \
	virtual void ServerPickupBall_Implementation(ASGCharacter* Player); \
	DECLARE_FUNCTION(execPredictBounceVelocity); \
	DECLARE_FUNCTION(execCalculateRealisticBasketballSpin); \
	DECLARE_FUNCTION(execCalculateRealisticSpin); \
	DECLARE_FUNCTION(execPlayEnhancedBounceSound); \
	DECLARE_FUNCTION(execApplySpinDecay); \
	DECLARE_FUNCTION(execApplyEnhancedBouncePhysics); \
	DECLARE_FUNCTION(execOnHit); \
	DECLARE_FUNCTION(execOnRep_HoldingPlayer); \
	DECLARE_FUNCTION(execOnRep_IsBeingHeld); \
	DECLARE_FUNCTION(execGetBallMesh); \
	DECLARE_FUNCTION(execGetCollisionComponent); \
	DECLARE_FUNCTION(execHasBeenThrown); \
	DECLARE_FUNCTION(execGetLastThrower); \
	DECLARE_FUNCTION(execGetHoldingPlayer); \
	DECLARE_FUNCTION(execIsBeingHeld); \
	DECLARE_FUNCTION(execPlayBounceSound); \
	DECLARE_FUNCTION(execRegisterMissedShot); \
	DECLARE_FUNCTION(execNotifyGameManagerOfScore); \
	DECLARE_FUNCTION(execNotifyGameManagerOfThrow); \
	DECLARE_FUNCTION(execMulticastOnBasketballDropped); \
	DECLARE_FUNCTION(execMulticastOnBasketballPickedUp); \
	DECLARE_FUNCTION(execMulticastOnBasketballThrown); \
	DECLARE_FUNCTION(execServerThrowBall); \
	DECLARE_FUNCTION(execServerDropBall); \
	DECLARE_FUNCTION(execServerPickupBall); \
	DECLARE_FUNCTION(execCanInteract); \
	DECLARE_FUNCTION(execOnInteract); \
	DECLARE_FUNCTION(execShowThrowPrediction); \
	DECLARE_FUNCTION(execDrawTrajectoryVisualization); \
	DECLARE_FUNCTION(execPredictTrajectoryPath); \
	DECLARE_FUNCTION(execCalculateEnhancedInitialVelocity); \
	DECLARE_FUNCTION(execCalculateInitialVelocity); \
	DECLARE_FUNCTION(execPredictAndShowTrajectory); \
	DECLARE_FUNCTION(execThrowBall); \
	DECLARE_FUNCTION(execDropBall); \
	DECLARE_FUNCTION(execPickupBall); \
	DECLARE_FUNCTION(execCanBePickedUp);


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Basketball_SGBasketball_h_20_CALLBACK_WRAPPERS
SOCIALGOLF_API UClass* Z_Construct_UClass_ASGBasketball_NoRegister();

#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Basketball_SGBasketball_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASGBasketball(); \
	friend struct Z_Construct_UClass_ASGBasketball_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOCIALGOLF_API UClass* Z_Construct_UClass_ASGBasketball_NoRegister(); \
public: \
	DECLARE_CLASS2(ASGBasketball, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SocialGolf"), Z_Construct_UClass_ASGBasketball_NoRegister) \
	DECLARE_SERIALIZER(ASGBasketball) \
	virtual UObject* _getUObject() const override { return const_cast<ASGBasketball*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		BallRadius=NETFIELD_REP_START, \
		PickupRange, \
		LastThrowPower, \
		LastThrowDirection, \
		bIsBeingHeld, \
		HoldingPlayer, \
		bHasBeenThrown, \
		LastThrower, \
		NETFIELD_REP_END=LastThrower	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Basketball_SGBasketball_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASGBasketball(ASGBasketball&&) = delete; \
	ASGBasketball(const ASGBasketball&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASGBasketball); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASGBasketball); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASGBasketball) \
	NO_API virtual ~ASGBasketball();


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Basketball_SGBasketball_h_17_PROLOG
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Basketball_SGBasketball_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Basketball_SGBasketball_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Basketball_SGBasketball_h_20_CALLBACK_WRAPPERS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Basketball_SGBasketball_h_20_INCLASS_NO_PURE_DECLS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Basketball_SGBasketball_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASGBasketball;

// ********** End Class ASGBasketball **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Basketball_SGBasketball_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
