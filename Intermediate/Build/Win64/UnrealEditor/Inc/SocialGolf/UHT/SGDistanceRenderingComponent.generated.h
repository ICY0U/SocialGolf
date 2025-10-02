// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Rendering/SGDistanceRenderingComponent.h"

#ifdef SOCIALGOLF_SGDistanceRenderingComponent_generated_h
#error "SGDistanceRenderingComponent.generated.h already included, missing '#pragma once' in SGDistanceRenderingComponent.h"
#endif
#define SOCIALGOLF_SGDistanceRenderingComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

enum class EDistanceRenderingLevel : uint8;

// ********** Begin Class USGDistanceRenderingComponent ********************************************
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Rendering_SGDistanceRenderingComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetVisibility); \
	DECLARE_FUNCTION(execApplyRenderingLevel); \
	DECLARE_FUNCTION(execIsCulled); \
	DECLARE_FUNCTION(execIsVisible); \
	DECLARE_FUNCTION(execGetCurrentRenderingLevel); \
	DECLARE_FUNCTION(execGetDistanceToNearestPlayer); \
	DECLARE_FUNCTION(execCalculateTargetRenderingLevel); \
	DECLARE_FUNCTION(execUpdateDistanceToPlayers); \
	DECLARE_FUNCTION(execSetRenderingLevel);


SOCIALGOLF_API UClass* Z_Construct_UClass_USGDistanceRenderingComponent_NoRegister();

#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Rendering_SGDistanceRenderingComponent_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSGDistanceRenderingComponent(); \
	friend struct Z_Construct_UClass_USGDistanceRenderingComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOCIALGOLF_API UClass* Z_Construct_UClass_USGDistanceRenderingComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(USGDistanceRenderingComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SocialGolf"), Z_Construct_UClass_USGDistanceRenderingComponent_NoRegister) \
	DECLARE_SERIALIZER(USGDistanceRenderingComponent)


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Rendering_SGDistanceRenderingComponent_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USGDistanceRenderingComponent(USGDistanceRenderingComponent&&) = delete; \
	USGDistanceRenderingComponent(const USGDistanceRenderingComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USGDistanceRenderingComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USGDistanceRenderingComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USGDistanceRenderingComponent) \
	NO_API virtual ~USGDistanceRenderingComponent();


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Rendering_SGDistanceRenderingComponent_h_9_PROLOG
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Rendering_SGDistanceRenderingComponent_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Rendering_SGDistanceRenderingComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Rendering_SGDistanceRenderingComponent_h_12_INCLASS_NO_PURE_DECLS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Rendering_SGDistanceRenderingComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USGDistanceRenderingComponent;

// ********** End Class USGDistanceRenderingComponent **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Rendering_SGDistanceRenderingComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
