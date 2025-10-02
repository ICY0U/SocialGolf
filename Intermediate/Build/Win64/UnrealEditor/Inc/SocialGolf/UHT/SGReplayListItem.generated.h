// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Replay/SGReplayListItem.h"

#ifdef SOCIALGOLF_SGReplayListItem_generated_h
#error "SGReplayListItem.generated.h already included, missing '#pragma once' in SGReplayListItem.h"
#endif
#define SOCIALGOLF_SGReplayListItem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FSGReplayData;

// ********** Begin Delegate FOnReplayItemSelected *************************************************
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Replay_SGReplayListItem_h_11_DELEGATE \
SOCIALGOLF_API void FOnReplayItemSelected_DelegateWrapper(const FMulticastScriptDelegate& OnReplayItemSelected, const FString& ReplayName);


// ********** End Delegate FOnReplayItemSelected ***************************************************

// ********** Begin Delegate FOnReplayItemDelete ***************************************************
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Replay_SGReplayListItem_h_12_DELEGATE \
SOCIALGOLF_API void FOnReplayItemDelete_DelegateWrapper(const FMulticastScriptDelegate& OnReplayItemDelete, const FString& ReplayName);


// ********** End Delegate FOnReplayItemDelete *****************************************************

// ********** Begin Class USGReplayListItem ********************************************************
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Replay_SGReplayListItem_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnDeleteButtonClicked); \
	DECLARE_FUNCTION(execOnSelectButtonClicked); \
	DECLARE_FUNCTION(execGetReplayName); \
	DECLARE_FUNCTION(execSetReplayData);


SOCIALGOLF_API UClass* Z_Construct_UClass_USGReplayListItem_NoRegister();

#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Replay_SGReplayListItem_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSGReplayListItem(); \
	friend struct Z_Construct_UClass_USGReplayListItem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOCIALGOLF_API UClass* Z_Construct_UClass_USGReplayListItem_NoRegister(); \
public: \
	DECLARE_CLASS2(USGReplayListItem, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SocialGolf"), Z_Construct_UClass_USGReplayListItem_NoRegister) \
	DECLARE_SERIALIZER(USGReplayListItem)


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Replay_SGReplayListItem_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USGReplayListItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USGReplayListItem(USGReplayListItem&&) = delete; \
	USGReplayListItem(const USGReplayListItem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USGReplayListItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USGReplayListItem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USGReplayListItem) \
	NO_API virtual ~USGReplayListItem();


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Replay_SGReplayListItem_h_14_PROLOG
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Replay_SGReplayListItem_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Replay_SGReplayListItem_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Replay_SGReplayListItem_h_17_INCLASS_NO_PURE_DECLS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Replay_SGReplayListItem_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USGReplayListItem;

// ********** End Class USGReplayListItem **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Replay_SGReplayListItem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
