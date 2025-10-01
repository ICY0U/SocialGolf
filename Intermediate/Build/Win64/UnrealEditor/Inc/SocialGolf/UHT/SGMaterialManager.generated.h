// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/SGMaterialManager.h"

#ifdef SOCIALGOLF_SGMaterialManager_generated_h
#error "SGMaterialManager.generated.h already included, missing '#pragma once' in SGMaterialManager.h"
#endif
#define SOCIALGOLF_SGMaterialManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UMaterialInterface;

// ********** Begin Delegate FOnMaterialChanged ****************************************************
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Materials_SGMaterialManager_h_10_DELEGATE \
SOCIALGOLF_API void FOnMaterialChanged_DelegateWrapper(const FMulticastScriptDelegate& OnMaterialChanged, int32 MaterialIndex, UMaterialInterface* NewMaterial);


// ********** End Delegate FOnMaterialChanged ******************************************************

// ********** Begin Class USGMaterialManager *******************************************************
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Materials_SGMaterialManager_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_bUseUVPresets); \
	DECLARE_FUNCTION(execOnRep_CurrentStandardPresetIndex); \
	DECLARE_FUNCTION(execOnRep_CurrentUVPresetIndex); \
	DECLARE_FUNCTION(execApplyCurrentMaterial); \
	DECLARE_FUNCTION(execInitializeMaterialManager); \
	DECLARE_FUNCTION(execGetCurrentPresetName); \
	DECLARE_FUNCTION(execTogglePresetType); \
	DECLARE_FUNCTION(execPreviousStandardPreset); \
	DECLARE_FUNCTION(execNextStandardPreset); \
	DECLARE_FUNCTION(execPreviousUVPreset); \
	DECLARE_FUNCTION(execNextUVPreset); \
	DECLARE_FUNCTION(execSetStandardPreset); \
	DECLARE_FUNCTION(execSetUVPreset);


SOCIALGOLF_API UClass* Z_Construct_UClass_USGMaterialManager_NoRegister();

#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Materials_SGMaterialManager_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSGMaterialManager(); \
	friend struct Z_Construct_UClass_USGMaterialManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOCIALGOLF_API UClass* Z_Construct_UClass_USGMaterialManager_NoRegister(); \
public: \
	DECLARE_CLASS2(USGMaterialManager, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SocialGolf"), Z_Construct_UClass_USGMaterialManager_NoRegister) \
	DECLARE_SERIALIZER(USGMaterialManager) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentUVPresetIndex=NETFIELD_REP_START, \
		CurrentStandardPresetIndex, \
		bUseUVPresets, \
		NETFIELD_REP_END=bUseUVPresets	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Materials_SGMaterialManager_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USGMaterialManager(USGMaterialManager&&) = delete; \
	USGMaterialManager(const USGMaterialManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USGMaterialManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USGMaterialManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USGMaterialManager) \
	NO_API virtual ~USGMaterialManager();


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Materials_SGMaterialManager_h_12_PROLOG
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Materials_SGMaterialManager_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Materials_SGMaterialManager_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Materials_SGMaterialManager_h_15_INCLASS_NO_PURE_DECLS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Materials_SGMaterialManager_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USGMaterialManager;

// ********** End Class USGMaterialManager *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Materials_SGMaterialManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
