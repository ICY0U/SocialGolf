// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Rendering/SGDistanceRenderingQuickSetup.h"

#ifdef SOCIALGOLF_SGDistanceRenderingQuickSetup_generated_h
#error "SGDistanceRenderingQuickSetup.generated.h already included, missing '#pragma once' in SGDistanceRenderingQuickSetup.h"
#endif
#define SOCIALGOLF_SGDistanceRenderingQuickSetup_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USGQuickDistanceRenderingComponent ***************************************
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Rendering_SGDistanceRenderingQuickSetup_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetupDistanceRendering);


SOCIALGOLF_API UClass* Z_Construct_UClass_USGQuickDistanceRenderingComponent_NoRegister();

#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Rendering_SGDistanceRenderingQuickSetup_h_58_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSGQuickDistanceRenderingComponent(); \
	friend struct Z_Construct_UClass_USGQuickDistanceRenderingComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOCIALGOLF_API UClass* Z_Construct_UClass_USGQuickDistanceRenderingComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(USGQuickDistanceRenderingComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SocialGolf"), Z_Construct_UClass_USGQuickDistanceRenderingComponent_NoRegister) \
	DECLARE_SERIALIZER(USGQuickDistanceRenderingComponent)


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Rendering_SGDistanceRenderingQuickSetup_h_58_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USGQuickDistanceRenderingComponent(USGQuickDistanceRenderingComponent&&) = delete; \
	USGQuickDistanceRenderingComponent(const USGQuickDistanceRenderingComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USGQuickDistanceRenderingComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USGQuickDistanceRenderingComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USGQuickDistanceRenderingComponent) \
	NO_API virtual ~USGQuickDistanceRenderingComponent();


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Rendering_SGDistanceRenderingQuickSetup_h_55_PROLOG
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Rendering_SGDistanceRenderingQuickSetup_h_58_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Rendering_SGDistanceRenderingQuickSetup_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Rendering_SGDistanceRenderingQuickSetup_h_58_INCLASS_NO_PURE_DECLS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Rendering_SGDistanceRenderingQuickSetup_h_58_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USGQuickDistanceRenderingComponent;

// ********** End Class USGQuickDistanceRenderingComponent *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Rendering_SGDistanceRenderingQuickSetup_h

// ********** Begin Enum EQuickSetupType ***********************************************************
#define FOREACH_ENUM_EQUICKSETUPTYPE(op) \
	op(Environment) \
	op(Vegetation) \
	op(GolfCourse) \
	op(UIElements) \
	op(Custom) 
// ********** End Enum EQuickSetupType *************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
