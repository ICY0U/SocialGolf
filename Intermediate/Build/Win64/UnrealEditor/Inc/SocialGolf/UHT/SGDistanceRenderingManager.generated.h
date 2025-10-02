// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Rendering/SGDistanceRenderingManager.h"

#ifdef SOCIALGOLF_SGDistanceRenderingManager_generated_h
#error "SGDistanceRenderingManager.generated.h already included, missing '#pragma once' in SGDistanceRenderingManager.h"
#endif
#define SOCIALGOLF_SGDistanceRenderingManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UObject;
class USGDistanceRenderingComponent;
class USGDistanceRenderingManager;
enum class EDistanceRenderingLevel : uint8;
struct FSGDistanceRenderingSettings;
struct FSGRenderingManagerStats;

// ********** Begin ScriptStruct FSGRenderingManagerStats ******************************************
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Rendering_SGDistanceRenderingManager_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSGRenderingManagerStats_Statics; \
	static class UScriptStruct* StaticStruct();


struct FSGRenderingManagerStats;
// ********** End ScriptStruct FSGRenderingManagerStats ********************************************

// ********** Begin ScriptStruct FSGRenderingLevelChangeRequest ************************************
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Rendering_SGDistanceRenderingManager_h_47_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSGRenderingLevelChangeRequest_Statics; \
	SOCIALGOLF_API static class UScriptStruct* StaticStruct();


struct FSGRenderingLevelChangeRequest;
// ********** End ScriptStruct FSGRenderingLevelChangeRequest **************************************

// ********** Begin Class USGDistanceRenderingManager **********************************************
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Rendering_SGDistanceRenderingManager_h_74_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execShowDebugInfo); \
	DECLARE_FUNCTION(execResetAllObjects); \
	DECLARE_FUNCTION(execToggleDistanceRendering); \
	DECLARE_FUNCTION(execApplyGlobalSettings); \
	DECLARE_FUNCTION(execGetRegisteredObjects); \
	DECLARE_FUNCTION(execGetRegisteredObjectCount); \
	DECLARE_FUNCTION(execDumpRenderingStats); \
	DECLARE_FUNCTION(execGetStats); \
	DECLARE_FUNCTION(execForceUpdateAllObjects); \
	DECLARE_FUNCTION(execSetGlobalRenderingEnabled); \
	DECLARE_FUNCTION(execUpdateAllObjects); \
	DECLARE_FUNCTION(execQueueRenderingLevelChange); \
	DECLARE_FUNCTION(execUnregisterObject); \
	DECLARE_FUNCTION(execRegisterObject); \
	DECLARE_FUNCTION(execGet);


SOCIALGOLF_API UClass* Z_Construct_UClass_USGDistanceRenderingManager_NoRegister();

#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Rendering_SGDistanceRenderingManager_h_74_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSGDistanceRenderingManager(); \
	friend struct Z_Construct_UClass_USGDistanceRenderingManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOCIALGOLF_API UClass* Z_Construct_UClass_USGDistanceRenderingManager_NoRegister(); \
public: \
	DECLARE_CLASS2(USGDistanceRenderingManager, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SocialGolf"), Z_Construct_UClass_USGDistanceRenderingManager_NoRegister) \
	DECLARE_SERIALIZER(USGDistanceRenderingManager)


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Rendering_SGDistanceRenderingManager_h_74_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USGDistanceRenderingManager(USGDistanceRenderingManager&&) = delete; \
	USGDistanceRenderingManager(const USGDistanceRenderingManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USGDistanceRenderingManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USGDistanceRenderingManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USGDistanceRenderingManager) \
	NO_API virtual ~USGDistanceRenderingManager();


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Rendering_SGDistanceRenderingManager_h_71_PROLOG
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Rendering_SGDistanceRenderingManager_h_74_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Rendering_SGDistanceRenderingManager_h_74_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Rendering_SGDistanceRenderingManager_h_74_INCLASS_NO_PURE_DECLS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Rendering_SGDistanceRenderingManager_h_74_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USGDistanceRenderingManager;

// ********** End Class USGDistanceRenderingManager ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Rendering_SGDistanceRenderingManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
