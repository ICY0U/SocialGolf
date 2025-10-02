// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Basketball/SGBasketballGameManager.h"

#ifdef SOCIALGOLF_SGBasketballGameManager_generated_h
#error "SGBasketballGameManager.generated.h already included, missing '#pragma once' in SGBasketballGameManager.h"
#endif
#define SOCIALGOLF_SGBasketballGameManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class ASGBasketballHoop;
class ASGCharacter;
struct FBasketballPlayerStats;

// ********** Begin ScriptStruct FBasketballPlayerStats ********************************************
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Basketball_SGBasketballGameManager_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBasketballPlayerStats_Statics; \
	SOCIALGOLF_API static class UScriptStruct* StaticStruct();


struct FBasketballPlayerStats;
// ********** End ScriptStruct FBasketballPlayerStats **********************************************

// ********** Begin Class ASGBasketballGameManager *************************************************
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Basketball_SGBasketballGameManager_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastOnPlayerScored_Implementation(const FString& PlayerName, int32 NewScore); \
	virtual void MulticastOnGameEnded_Implementation(); \
	virtual void MulticastOnGameStarted_Implementation(); \
	virtual void ServerResetGame_Implementation(); \
	virtual void ServerEndGame_Implementation(); \
	virtual void ServerStartGame_Implementation(); \
	DECLARE_FUNCTION(execGetTopPlayer); \
	DECLARE_FUNCTION(execGetAllPlayerStats); \
	DECLARE_FUNCTION(execMulticastOnPlayerScored); \
	DECLARE_FUNCTION(execMulticastOnGameEnded); \
	DECLARE_FUNCTION(execMulticastOnGameStarted); \
	DECLARE_FUNCTION(execServerResetGame); \
	DECLARE_FUNCTION(execServerEndGame); \
	DECLARE_FUNCTION(execServerStartGame); \
	DECLARE_FUNCTION(execOnBasketballThrown); \
	DECLARE_FUNCTION(execOnBasketballScored); \
	DECLARE_FUNCTION(execGetBasketballCount); \
	DECLARE_FUNCTION(execCleanupBasketballs); \
	DECLARE_FUNCTION(execSpawnBasketball); \
	DECLARE_FUNCTION(execUnregisterHoop); \
	DECLARE_FUNCTION(execRegisterHoop); \
	DECLARE_FUNCTION(execUpdatePlayerStats); \
	DECLARE_FUNCTION(execGetPlayerStats); \
	DECLARE_FUNCTION(execUnregisterPlayer); \
	DECLARE_FUNCTION(execRegisterPlayer); \
	DECLARE_FUNCTION(execGetGameTimeRemaining); \
	DECLARE_FUNCTION(execIsGameActive); \
	DECLARE_FUNCTION(execResetGame); \
	DECLARE_FUNCTION(execEndGame); \
	DECLARE_FUNCTION(execStartGame);


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Basketball_SGBasketballGameManager_h_45_CALLBACK_WRAPPERS
SOCIALGOLF_API UClass* Z_Construct_UClass_ASGBasketballGameManager_NoRegister();

#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Basketball_SGBasketballGameManager_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASGBasketballGameManager(); \
	friend struct Z_Construct_UClass_ASGBasketballGameManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOCIALGOLF_API UClass* Z_Construct_UClass_ASGBasketballGameManager_NoRegister(); \
public: \
	DECLARE_CLASS2(ASGBasketballGameManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SocialGolf"), Z_Construct_UClass_ASGBasketballGameManager_NoRegister) \
	DECLARE_SERIALIZER(ASGBasketballGameManager) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bGameActive=NETFIELD_REP_START, \
		GameTimeRemaining, \
		PlayerStats, \
		NETFIELD_REP_END=PlayerStats	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Basketball_SGBasketballGameManager_h_45_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASGBasketballGameManager(ASGBasketballGameManager&&) = delete; \
	ASGBasketballGameManager(const ASGBasketballGameManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASGBasketballGameManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASGBasketballGameManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASGBasketballGameManager) \
	NO_API virtual ~ASGBasketballGameManager();


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Basketball_SGBasketballGameManager_h_42_PROLOG
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Basketball_SGBasketballGameManager_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Basketball_SGBasketballGameManager_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Basketball_SGBasketballGameManager_h_45_CALLBACK_WRAPPERS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Basketball_SGBasketballGameManager_h_45_INCLASS_NO_PURE_DECLS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Basketball_SGBasketballGameManager_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASGBasketballGameManager;

// ********** End Class ASGBasketballGameManager ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Basketball_SGBasketballGameManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
