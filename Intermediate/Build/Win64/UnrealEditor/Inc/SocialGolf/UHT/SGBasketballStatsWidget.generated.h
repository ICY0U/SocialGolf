// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Basketball/SGBasketballStatsWidget.h"

#ifdef SOCIALGOLF_SGBasketballStatsWidget_generated_h
#error "SGBasketballStatsWidget.generated.h already included, missing '#pragma once' in SGBasketballStatsWidget.h"
#endif
#define SOCIALGOLF_SGBasketballStatsWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FBasketballPlayerStats;

// ********** Begin Class USGBasketballStatsWidget *************************************************
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Basketball_SGBasketballStatsWidget_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetVisibilityState); \
	DECLARE_FUNCTION(execGetLocalPlayerStats); \
	DECLARE_FUNCTION(execGetTopPlayer); \
	DECLARE_FUNCTION(execGetAllPlayerStats); \
	DECLARE_FUNCTION(execGetGameTimeRemaining); \
	DECLARE_FUNCTION(execIsGameActive); \
	DECLARE_FUNCTION(execResetGame); \
	DECLARE_FUNCTION(execEndGame); \
	DECLARE_FUNCTION(execStartGame);


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Basketball_SGBasketballStatsWidget_h_10_CALLBACK_WRAPPERS
SOCIALGOLF_API UClass* Z_Construct_UClass_USGBasketballStatsWidget_NoRegister();

#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Basketball_SGBasketballStatsWidget_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSGBasketballStatsWidget(); \
	friend struct Z_Construct_UClass_USGBasketballStatsWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOCIALGOLF_API UClass* Z_Construct_UClass_USGBasketballStatsWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(USGBasketballStatsWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SocialGolf"), Z_Construct_UClass_USGBasketballStatsWidget_NoRegister) \
	DECLARE_SERIALIZER(USGBasketballStatsWidget)


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Basketball_SGBasketballStatsWidget_h_10_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USGBasketballStatsWidget(USGBasketballStatsWidget&&) = delete; \
	USGBasketballStatsWidget(const USGBasketballStatsWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USGBasketballStatsWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USGBasketballStatsWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USGBasketballStatsWidget) \
	NO_API virtual ~USGBasketballStatsWidget();


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Basketball_SGBasketballStatsWidget_h_7_PROLOG
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Basketball_SGBasketballStatsWidget_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Basketball_SGBasketballStatsWidget_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Basketball_SGBasketballStatsWidget_h_10_CALLBACK_WRAPPERS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Basketball_SGBasketballStatsWidget_h_10_INCLASS_NO_PURE_DECLS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Basketball_SGBasketballStatsWidget_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USGBasketballStatsWidget;

// ********** End Class USGBasketballStatsWidget ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Basketball_SGBasketballStatsWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
