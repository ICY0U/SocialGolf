// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Lighting/SGAdvancedCandle.h"

#ifdef SOCIALGOLF_SGAdvancedCandle_generated_h
#error "SGAdvancedCandle.generated.h already included, missing '#pragma once' in SGAdvancedCandle.h"
#endif
#define SOCIALGOLF_SGAdvancedCandle_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

enum class ECandleLightMode : uint8;
enum class ECandleType : uint8;

// ********** Begin ScriptStruct FCandlePreset *****************************************************
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Lighting_SGAdvancedCandle_h_42_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCandlePreset_Statics; \
	SOCIALGOLF_API static class UScriptStruct* StaticStruct();


struct FCandlePreset;
// ********** End ScriptStruct FCandlePreset *******************************************************

// ********** Begin Delegate FOnAdvancedCandleLightChanged *****************************************
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Lighting_SGAdvancedCandle_h_77_DELEGATE \
SOCIALGOLF_API void FOnAdvancedCandleLightChanged_DelegateWrapper(const FMulticastScriptDelegate& OnAdvancedCandleLightChanged, bool bIsLit, ECandleType CandleType);


// ********** End Delegate FOnAdvancedCandleLightChanged *******************************************

// ********** Begin Class ASGAdvancedCandle ********************************************************
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Lighting_SGAdvancedCandle_h_82_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAutoRelight); \
	DECLARE_FUNCTION(execOnColorTimelineUpdate); \
	DECLARE_FUNCTION(execOnFlickerTimelineUpdate); \
	DECLARE_FUNCTION(execOnRep_CandleType); \
	DECLARE_FUNCTION(execOnRep_IsLit); \
	DECLARE_FUNCTION(execGetLightMode); \
	DECLARE_FUNCTION(execGetCandleType); \
	DECLARE_FUNCTION(execIsLit); \
	DECLARE_FUNCTION(execSetLightMode); \
	DECLARE_FUNCTION(execSetCandleType); \
	DECLARE_FUNCTION(execToggleCandle); \
	DECLARE_FUNCTION(execExtinguishCandle); \
	DECLARE_FUNCTION(execLightCandle);


SOCIALGOLF_API UClass* Z_Construct_UClass_ASGAdvancedCandle_NoRegister();

#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Lighting_SGAdvancedCandle_h_82_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASGAdvancedCandle(); \
	friend struct Z_Construct_UClass_ASGAdvancedCandle_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOCIALGOLF_API UClass* Z_Construct_UClass_ASGAdvancedCandle_NoRegister(); \
public: \
	DECLARE_CLASS2(ASGAdvancedCandle, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SocialGolf"), Z_Construct_UClass_ASGAdvancedCandle_NoRegister) \
	DECLARE_SERIALIZER(ASGAdvancedCandle) \
	virtual UObject* _getUObject() const override { return const_cast<ASGAdvancedCandle*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bIsLit=NETFIELD_REP_START, \
		ReplicatedCandleType, \
		NETFIELD_REP_END=ReplicatedCandleType	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Lighting_SGAdvancedCandle_h_82_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASGAdvancedCandle(ASGAdvancedCandle&&) = delete; \
	ASGAdvancedCandle(const ASGAdvancedCandle&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASGAdvancedCandle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASGAdvancedCandle); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASGAdvancedCandle) \
	NO_API virtual ~ASGAdvancedCandle();


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Lighting_SGAdvancedCandle_h_79_PROLOG
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Lighting_SGAdvancedCandle_h_82_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Lighting_SGAdvancedCandle_h_82_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Lighting_SGAdvancedCandle_h_82_INCLASS_NO_PURE_DECLS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Lighting_SGAdvancedCandle_h_82_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASGAdvancedCandle;

// ********** End Class ASGAdvancedCandle **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Lighting_SGAdvancedCandle_h

// ********** Begin Enum ECandleType ***************************************************************
#define FOREACH_ENUM_ECANDLETYPE(op) \
	op(ECandleType::SmallCandle) \
	op(ECandleType::MediumCandle) \
	op(ECandleType::LargeCandle) \
	op(ECandleType::Torch) \
	op(ECandleType::Lantern) \
	op(ECandleType::OilLamp) 

enum class ECandleType : uint8;
template<> struct TIsUEnumClass<ECandleType> { enum { Value = true }; };
template<> SOCIALGOLF_API UEnum* StaticEnum<ECandleType>();
// ********** End Enum ECandleType *****************************************************************

// ********** Begin Enum ECandleLightMode **********************************************************
#define FOREACH_ENUM_ECANDLELIGHTMODE(op) \
	op(ECandleLightMode::Realistic) \
	op(ECandleLightMode::Steady) \
	op(ECandleLightMode::Dramatic) \
	op(ECandleLightMode::Magical) 

enum class ECandleLightMode : uint8;
template<> struct TIsUEnumClass<ECandleLightMode> { enum { Value = true }; };
template<> SOCIALGOLF_API UEnum* StaticEnum<ECandleLightMode>();
// ********** End Enum ECandleLightMode ************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
