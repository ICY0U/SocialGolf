// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/SGMaterialPreset.h"

#ifdef SOCIALGOLF_SGMaterialPreset_generated_h
#error "SGMaterialPreset.generated.h already included, missing '#pragma once' in SGMaterialPreset.h"
#endif
#define SOCIALGOLF_SGMaterialPreset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UMaterialInterface;

// ********** Begin ScriptStruct FSGMaterialPresetInfo *********************************************
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Materials_SGMaterialPreset_h_10_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSGMaterialPresetInfo_Statics; \
	static class UScriptStruct* StaticStruct();


struct FSGMaterialPresetInfo;
// ********** End ScriptStruct FSGMaterialPresetInfo ***********************************************

// ********** Begin Class USGMaterialPreset ********************************************************
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Materials_SGMaterialPreset_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetStandardPresetName); \
	DECLARE_FUNCTION(execGetUVPresetName); \
	DECLARE_FUNCTION(execGetStandardPresetCount); \
	DECLARE_FUNCTION(execGetUVPresetCount); \
	DECLARE_FUNCTION(execGetStandardPresetMaterial); \
	DECLARE_FUNCTION(execGetUVPresetMaterial);


SOCIALGOLF_API UClass* Z_Construct_UClass_USGMaterialPreset_NoRegister();

#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Materials_SGMaterialPreset_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSGMaterialPreset(); \
	friend struct Z_Construct_UClass_USGMaterialPreset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOCIALGOLF_API UClass* Z_Construct_UClass_USGMaterialPreset_NoRegister(); \
public: \
	DECLARE_CLASS2(USGMaterialPreset, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SocialGolf"), Z_Construct_UClass_USGMaterialPreset_NoRegister) \
	DECLARE_SERIALIZER(USGMaterialPreset)


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Materials_SGMaterialPreset_h_36_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USGMaterialPreset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USGMaterialPreset(USGMaterialPreset&&) = delete; \
	USGMaterialPreset(const USGMaterialPreset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USGMaterialPreset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USGMaterialPreset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USGMaterialPreset) \
	NO_API virtual ~USGMaterialPreset();


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Materials_SGMaterialPreset_h_33_PROLOG
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Materials_SGMaterialPreset_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Materials_SGMaterialPreset_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Materials_SGMaterialPreset_h_36_INCLASS_NO_PURE_DECLS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Materials_SGMaterialPreset_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USGMaterialPreset;

// ********** End Class USGMaterialPreset **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Materials_SGMaterialPreset_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
