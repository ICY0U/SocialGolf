// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/SGMaterialShowcase.h"

#ifdef SOCIALGOLF_SGMaterialShowcase_generated_h
#error "SGMaterialShowcase.generated.h already included, missing '#pragma once' in SGMaterialShowcase.h"
#endif
#define SOCIALGOLF_SGMaterialShowcase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UMaterialInterface;

// ********** Begin Class ASGMaterialShowcase ******************************************************
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Materials_SGMaterialShowcase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnMaterialChanged); \
	DECLARE_FUNCTION(execGetCurrentMaterialInfo); \
	DECLARE_FUNCTION(execToggleMaterialType); \
	DECLARE_FUNCTION(execCycleMaterial);


SOCIALGOLF_API UClass* Z_Construct_UClass_ASGMaterialShowcase_NoRegister();

#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Materials_SGMaterialShowcase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASGMaterialShowcase(); \
	friend struct Z_Construct_UClass_ASGMaterialShowcase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOCIALGOLF_API UClass* Z_Construct_UClass_ASGMaterialShowcase_NoRegister(); \
public: \
	DECLARE_CLASS2(ASGMaterialShowcase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SocialGolf"), Z_Construct_UClass_ASGMaterialShowcase_NoRegister) \
	DECLARE_SERIALIZER(ASGMaterialShowcase) \
	virtual UObject* _getUObject() const override { return const_cast<ASGMaterialShowcase*>(this); }


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Materials_SGMaterialShowcase_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASGMaterialShowcase(ASGMaterialShowcase&&) = delete; \
	ASGMaterialShowcase(const ASGMaterialShowcase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASGMaterialShowcase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASGMaterialShowcase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASGMaterialShowcase) \
	NO_API virtual ~ASGMaterialShowcase();


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Materials_SGMaterialShowcase_h_12_PROLOG
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Materials_SGMaterialShowcase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Materials_SGMaterialShowcase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Materials_SGMaterialShowcase_h_15_INCLASS_NO_PURE_DECLS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Materials_SGMaterialShowcase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASGMaterialShowcase;

// ********** End Class ASGMaterialShowcase ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Materials_SGMaterialShowcase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
