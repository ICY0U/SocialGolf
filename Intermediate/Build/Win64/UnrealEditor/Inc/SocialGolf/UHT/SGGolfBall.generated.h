// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Golf/SGGolfBall.h"

#ifdef SOCIALGOLF_SGGolfBall_generated_h
#error "SGGolfBall.generated.h already included, missing '#pragma once' in SGGolfBall.h"
#endif
#define SOCIALGOLF_SGGolfBall_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UPrimitiveComponent;
enum class EGolfBallState : uint8;
struct FHitResult;

// ********** Begin Class ASGGolfBall **************************************************************
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Golf_SGGolfBall_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit); \
	DECLARE_FUNCTION(execGetBallRadius); \
	DECLARE_FUNCTION(execSetBallSize); \
	DECLARE_FUNCTION(execGetStrokeCount); \
	DECLARE_FUNCTION(execGetDistanceTraveled); \
	DECLARE_FUNCTION(execGetBallState); \
	DECLARE_FUNCTION(execGetBallVelocity); \
	DECLARE_FUNCTION(execGetCurrentSpeed); \
	DECLARE_FUNCTION(execIsBallStationary); \
	DECLARE_FUNCTION(execPlaceBall); \
	DECLARE_FUNCTION(execResetBall); \
	DECLARE_FUNCTION(execHitBallWithClub); \
	DECLARE_FUNCTION(execHitBall);


SOCIALGOLF_API UClass* Z_Construct_UClass_ASGGolfBall_NoRegister();

#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Golf_SGGolfBall_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASGGolfBall(); \
	friend struct Z_Construct_UClass_ASGGolfBall_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOCIALGOLF_API UClass* Z_Construct_UClass_ASGGolfBall_NoRegister(); \
public: \
	DECLARE_CLASS2(ASGGolfBall, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SocialGolf"), Z_Construct_UClass_ASGGolfBall_NoRegister) \
	DECLARE_SERIALIZER(ASGGolfBall)


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Golf_SGGolfBall_h_23_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASGGolfBall(ASGGolfBall&&) = delete; \
	ASGGolfBall(const ASGGolfBall&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASGGolfBall); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASGGolfBall); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASGGolfBall) \
	NO_API virtual ~ASGGolfBall();


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Golf_SGGolfBall_h_20_PROLOG
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Golf_SGGolfBall_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Golf_SGGolfBall_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Golf_SGGolfBall_h_23_INCLASS_NO_PURE_DECLS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Golf_SGGolfBall_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASGGolfBall;

// ********** End Class ASGGolfBall ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Golf_SGGolfBall_h

// ********** Begin Enum EGolfBallState ************************************************************
#define FOREACH_ENUM_EGOLFBALLSTATE(op) \
	op(EGolfBallState::Stationary) \
	op(EGolfBallState::InFlight) \
	op(EGolfBallState::Rolling) \
	op(EGolfBallState::InWater) \
	op(EGolfBallState::OutOfBounds) 

enum class EGolfBallState : uint8;
template<> struct TIsUEnumClass<EGolfBallState> { enum { Value = true }; };
template<> SOCIALGOLF_API UEnum* StaticEnum<EGolfBallState>();
// ********** End Enum EGolfBallState **************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
