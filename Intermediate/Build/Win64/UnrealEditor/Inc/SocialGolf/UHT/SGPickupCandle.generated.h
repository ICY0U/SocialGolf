// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Lighting/SGPickupCandle.h"

#ifdef SOCIALGOLF_SGPickupCandle_generated_h
#error "SGPickupCandle.generated.h already included, missing '#pragma once' in SGPickupCandle.h"
#endif
#define SOCIALGOLF_SGPickupCandle_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class APawn;

// ********** Begin Delegate FOnPickupCandleStateChanged *******************************************
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Lighting_SGPickupCandle_h_19_DELEGATE \
SOCIALGOLF_API void FOnPickupCandleStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnPickupCandleStateChanged, bool bIsPickedUp, bool bIsLit);


// ********** End Delegate FOnPickupCandleStateChanged *********************************************

// ********** Begin Class ASGPickupCandle **********************************************************
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Lighting_SGPickupCandle_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnToggleCandlePressed); \
	DECLARE_FUNCTION(execOnFlickerTimelineUpdate); \
	DECLARE_FUNCTION(execOnRep_CurrentHolder); \
	DECLARE_FUNCTION(execOnRep_IsLit); \
	DECLARE_FUNCTION(execOnRep_IsPickedUp); \
	DECLARE_FUNCTION(execGetCurrentHolder); \
	DECLARE_FUNCTION(execIsLit); \
	DECLARE_FUNCTION(execIsPickedUp); \
	DECLARE_FUNCTION(execExtinguishCandle); \
	DECLARE_FUNCTION(execLightCandle); \
	DECLARE_FUNCTION(execToggleCandle); \
	DECLARE_FUNCTION(execDropCandle); \
	DECLARE_FUNCTION(execPickupCandle);


SOCIALGOLF_API UClass* Z_Construct_UClass_ASGPickupCandle_NoRegister();

#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Lighting_SGPickupCandle_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASGPickupCandle(); \
	friend struct Z_Construct_UClass_ASGPickupCandle_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOCIALGOLF_API UClass* Z_Construct_UClass_ASGPickupCandle_NoRegister(); \
public: \
	DECLARE_CLASS2(ASGPickupCandle, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SocialGolf"), Z_Construct_UClass_ASGPickupCandle_NoRegister) \
	DECLARE_SERIALIZER(ASGPickupCandle) \
	virtual UObject* _getUObject() const override { return const_cast<ASGPickupCandle*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bIsPickedUp=NETFIELD_REP_START, \
		bIsLit, \
		CurrentHolder, \
		NETFIELD_REP_END=CurrentHolder	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Lighting_SGPickupCandle_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASGPickupCandle(ASGPickupCandle&&) = delete; \
	ASGPickupCandle(const ASGPickupCandle&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASGPickupCandle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASGPickupCandle); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASGPickupCandle) \
	NO_API virtual ~ASGPickupCandle();


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Lighting_SGPickupCandle_h_21_PROLOG
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Lighting_SGPickupCandle_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Lighting_SGPickupCandle_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Lighting_SGPickupCandle_h_24_INCLASS_NO_PURE_DECLS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Lighting_SGPickupCandle_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASGPickupCandle;

// ********** End Class ASGPickupCandle ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Lighting_SGPickupCandle_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
