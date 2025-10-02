// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Rendering/SGDistanceRenderingBlueprintLibrary.h"

#ifdef SOCIALGOLF_SGDistanceRenderingBlueprintLibrary_generated_h
#error "SGDistanceRenderingBlueprintLibrary.generated.h already included, missing '#pragma once' in SGDistanceRenderingBlueprintLibrary.h"
#endif
#define SOCIALGOLF_SGDistanceRenderingBlueprintLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UObject;
class USGDistanceRenderingComponent;
class USGDistanceRenderingManager;
enum class EDistanceRenderingLevel : uint8;
struct FSGDistanceRenderingSettings;
struct FSGRenderingManagerStats;

// ********** Begin Class USGDistanceRenderingBlueprintLibrary *************************************
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Rendering_SGDistanceRenderingBlueprintLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetUIElementRenderingSettings); \
	DECLARE_FUNCTION(execGetVegetationRenderingSettings); \
	DECLARE_FUNCTION(execGetEnvironmentObjectRenderingSettings); \
	DECLARE_FUNCTION(execGetGolfCourseRenderingSettings); \
	DECLARE_FUNCTION(execGetDistanceToNearestPlayer); \
	DECLARE_FUNCTION(execGetDistanceBetweenActors); \
	DECLARE_FUNCTION(execCalculateRenderingLevelForDistance); \
	DECLARE_FUNCTION(execToggleDistanceRenderingDebug); \
	DECLARE_FUNCTION(execGetDistanceRenderingStats); \
	DECLARE_FUNCTION(execShowDistanceRenderingStats); \
	DECLARE_FUNCTION(execForceUpdateAllDistanceRendering); \
	DECLARE_FUNCTION(execIsDistanceRenderingEnabled); \
	DECLARE_FUNCTION(execEnableDistanceRendering); \
	DECLARE_FUNCTION(execCreateDistanceRenderingSettings); \
	DECLARE_FUNCTION(execGetDefaultDistanceRenderingSettings); \
	DECLARE_FUNCTION(execApplyGlobalDistanceRenderingSettings); \
	DECLARE_FUNCTION(execSetupDistanceRenderingForActorsOfClass); \
	DECLARE_FUNCTION(execSetupDistanceRenderingForActorsWithTag); \
	DECLARE_FUNCTION(execSetupDistanceRenderingForActors); \
	DECLARE_FUNCTION(execGetDistanceRenderingComponent); \
	DECLARE_FUNCTION(execRemoveDistanceRenderingFromActor); \
	DECLARE_FUNCTION(execAddDistanceRenderingToActor); \
	DECLARE_FUNCTION(execGetDistanceRenderingManager);


SOCIALGOLF_API UClass* Z_Construct_UClass_USGDistanceRenderingBlueprintLibrary_NoRegister();

#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Rendering_SGDistanceRenderingBlueprintLibrary_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSGDistanceRenderingBlueprintLibrary(); \
	friend struct Z_Construct_UClass_USGDistanceRenderingBlueprintLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOCIALGOLF_API UClass* Z_Construct_UClass_USGDistanceRenderingBlueprintLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(USGDistanceRenderingBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SocialGolf"), Z_Construct_UClass_USGDistanceRenderingBlueprintLibrary_NoRegister) \
	DECLARE_SERIALIZER(USGDistanceRenderingBlueprintLibrary)


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Rendering_SGDistanceRenderingBlueprintLibrary_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USGDistanceRenderingBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USGDistanceRenderingBlueprintLibrary(USGDistanceRenderingBlueprintLibrary&&) = delete; \
	USGDistanceRenderingBlueprintLibrary(const USGDistanceRenderingBlueprintLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USGDistanceRenderingBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USGDistanceRenderingBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USGDistanceRenderingBlueprintLibrary) \
	NO_API virtual ~USGDistanceRenderingBlueprintLibrary();


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Rendering_SGDistanceRenderingBlueprintLibrary_h_14_PROLOG
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Rendering_SGDistanceRenderingBlueprintLibrary_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Rendering_SGDistanceRenderingBlueprintLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Rendering_SGDistanceRenderingBlueprintLibrary_h_17_INCLASS_NO_PURE_DECLS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Rendering_SGDistanceRenderingBlueprintLibrary_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USGDistanceRenderingBlueprintLibrary;

// ********** End Class USGDistanceRenderingBlueprintLibrary ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Rendering_SGDistanceRenderingBlueprintLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
