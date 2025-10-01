// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SaveSystem/SGSaveManager.h"

#ifdef SOCIALGOLF_SGSaveManager_generated_h
#error "SGSaveManager.generated.h already included, missing '#pragma once' in SGSaveManager.h"
#endif
#define SOCIALGOLF_SGSaveManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class USGSaveGame;

// ********** Begin Delegate FOnSaveComplete *******************************************************
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_SaveSystem_SGSaveManager_h_13_DELEGATE \
SOCIALGOLF_API void FOnSaveComplete_DelegateWrapper(const FMulticastScriptDelegate& OnSaveComplete, bool bSuccess, const FString& ErrorMessage);


// ********** End Delegate FOnSaveComplete *********************************************************

// ********** Begin Delegate FOnLoadComplete *******************************************************
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_SaveSystem_SGSaveManager_h_14_DELEGATE \
SOCIALGOLF_API void FOnLoadComplete_DelegateWrapper(const FMulticastScriptDelegate& OnLoadComplete, bool bSuccess, const FString& ErrorMessage);


// ********** End Delegate FOnLoadComplete *********************************************************

// ********** Begin Class USGSaveManager ***********************************************************
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_SaveSystem_SGSaveManager_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHasCurrentSave); \
	DECLARE_FUNCTION(execGetCurrentSave); \
	DECLARE_FUNCTION(execGetSaveGameInfo); \
	DECLARE_FUNCTION(execGetAllSaveSlots); \
	DECLARE_FUNCTION(execQuickLoad); \
	DECLARE_FUNCTION(execQuickSave); \
	DECLARE_FUNCTION(execDeleteSave); \
	DECLARE_FUNCTION(execDoesSaveExist); \
	DECLARE_FUNCTION(execLoadGame); \
	DECLARE_FUNCTION(execSaveGame);


SOCIALGOLF_API UClass* Z_Construct_UClass_USGSaveManager_NoRegister();

#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_SaveSystem_SGSaveManager_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSGSaveManager(); \
	friend struct Z_Construct_UClass_USGSaveManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOCIALGOLF_API UClass* Z_Construct_UClass_USGSaveManager_NoRegister(); \
public: \
	DECLARE_CLASS2(USGSaveManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SocialGolf"), Z_Construct_UClass_USGSaveManager_NoRegister) \
	DECLARE_SERIALIZER(USGSaveManager)


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_SaveSystem_SGSaveManager_h_23_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USGSaveManager(USGSaveManager&&) = delete; \
	USGSaveManager(const USGSaveManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USGSaveManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USGSaveManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USGSaveManager) \
	NO_API virtual ~USGSaveManager();


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_SaveSystem_SGSaveManager_h_20_PROLOG
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_SaveSystem_SGSaveManager_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_SaveSystem_SGSaveManager_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_SaveSystem_SGSaveManager_h_23_INCLASS_NO_PURE_DECLS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_SaveSystem_SGSaveManager_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USGSaveManager;

// ********** End Class USGSaveManager *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_SaveSystem_SGSaveManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
