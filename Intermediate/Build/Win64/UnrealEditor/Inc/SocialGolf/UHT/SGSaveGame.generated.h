// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SaveSystem/SGSaveGame.h"

#ifdef SOCIALGOLF_SGSaveGame_generated_h
#error "SGSaveGame.generated.h already included, missing '#pragma once' in SGSaveGame.h"
#endif
#define SOCIALGOLF_SGSaveGame_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USGSaveGame **************************************************************
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_SaveSystem_SGSaveGame_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execInitializeDefaults); \
	DECLARE_FUNCTION(execIsValid); \
	DECLARE_FUNCTION(execGetFormattedTimestamp); \
	DECLARE_FUNCTION(execSetSlotInfo);


SOCIALGOLF_API UClass* Z_Construct_UClass_USGSaveGame_NoRegister();

#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_SaveSystem_SGSaveGame_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSGSaveGame(); \
	friend struct Z_Construct_UClass_USGSaveGame_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOCIALGOLF_API UClass* Z_Construct_UClass_USGSaveGame_NoRegister(); \
public: \
	DECLARE_CLASS2(USGSaveGame, USaveGame, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SocialGolf"), Z_Construct_UClass_USGSaveGame_NoRegister) \
	DECLARE_SERIALIZER(USGSaveGame)


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_SaveSystem_SGSaveGame_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USGSaveGame(USGSaveGame&&) = delete; \
	USGSaveGame(const USGSaveGame&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USGSaveGame); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USGSaveGame); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USGSaveGame) \
	NO_API virtual ~USGSaveGame();


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_SaveSystem_SGSaveGame_h_12_PROLOG
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_SaveSystem_SGSaveGame_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_SaveSystem_SGSaveGame_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_SaveSystem_SGSaveGame_h_15_INCLASS_NO_PURE_DECLS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_SaveSystem_SGSaveGame_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USGSaveGame;

// ********** End Class USGSaveGame ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_SaveSystem_SGSaveGame_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
