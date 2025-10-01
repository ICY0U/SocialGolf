// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Lighting/SGCandle.h"

#ifdef SOCIALGOLF_SGCandle_generated_h
#error "SGCandle.generated.h already included, missing '#pragma once' in SGCandle.h"
#endif
#define SOCIALGOLF_SGCandle_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FOnCandleLightChanged *************************************************
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Lighting_SGCandle_h_18_DELEGATE \
SOCIALGOLF_API void FOnCandleLightChanged_DelegateWrapper(const FMulticastScriptDelegate& OnCandleLightChanged, bool bIsLit);


// ********** End Delegate FOnCandleLightChanged ***************************************************

// ********** Begin Class ASGCandle ****************************************************************
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Lighting_SGCandle_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnFlickerTimelineUpdate); \
	DECLARE_FUNCTION(execOnRep_IsLit); \
	DECLARE_FUNCTION(execIsLit); \
	DECLARE_FUNCTION(execToggleCandle); \
	DECLARE_FUNCTION(execExtinguishCandle); \
	DECLARE_FUNCTION(execLightCandle);


SOCIALGOLF_API UClass* Z_Construct_UClass_ASGCandle_NoRegister();

#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Lighting_SGCandle_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASGCandle(); \
	friend struct Z_Construct_UClass_ASGCandle_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOCIALGOLF_API UClass* Z_Construct_UClass_ASGCandle_NoRegister(); \
public: \
	DECLARE_CLASS2(ASGCandle, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SocialGolf"), Z_Construct_UClass_ASGCandle_NoRegister) \
	DECLARE_SERIALIZER(ASGCandle) \
	virtual UObject* _getUObject() const override { return const_cast<ASGCandle*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bIsLit=NETFIELD_REP_START, \
		NETFIELD_REP_END=bIsLit	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Lighting_SGCandle_h_23_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASGCandle(ASGCandle&&) = delete; \
	ASGCandle(const ASGCandle&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASGCandle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASGCandle); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASGCandle) \
	NO_API virtual ~ASGCandle();


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Lighting_SGCandle_h_20_PROLOG
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Lighting_SGCandle_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Lighting_SGCandle_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Lighting_SGCandle_h_23_INCLASS_NO_PURE_DECLS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Lighting_SGCandle_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASGCandle;

// ********** End Class ASGCandle ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Lighting_SGCandle_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
