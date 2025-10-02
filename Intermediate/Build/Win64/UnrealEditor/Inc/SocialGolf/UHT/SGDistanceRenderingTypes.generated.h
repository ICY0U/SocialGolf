// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Rendering/SGDistanceRenderingTypes.h"

#ifdef SOCIALGOLF_SGDistanceRenderingTypes_generated_h
#error "SGDistanceRenderingTypes.generated.h already included, missing '#pragma once' in SGDistanceRenderingTypes.h"
#endif
#define SOCIALGOLF_SGDistanceRenderingTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
enum class EDistanceRenderingLevel : uint8;

// ********** Begin ScriptStruct FSGDistanceRenderingSettings **************************************
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Rendering_SGDistanceRenderingTypes_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSGDistanceRenderingSettings_Statics; \
	static class UScriptStruct* StaticStruct();


struct FSGDistanceRenderingSettings;
// ********** End ScriptStruct FSGDistanceRenderingSettings ****************************************

// ********** Begin ScriptStruct FSGObjectRenderingData ********************************************
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Rendering_SGDistanceRenderingTypes_h_71_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSGObjectRenderingData_Statics; \
	static class UScriptStruct* StaticStruct();


struct FSGObjectRenderingData;
// ********** End ScriptStruct FSGObjectRenderingData **********************************************

// ********** Begin Delegate FOnObjectRenderingLevelChanged ****************************************
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Rendering_SGDistanceRenderingTypes_h_118_DELEGATE \
SOCIALGOLF_API void FOnObjectRenderingLevelChanged_DelegateWrapper(const FMulticastScriptDelegate& OnObjectRenderingLevelChanged, AActor* Actor, EDistanceRenderingLevel OldLevel, EDistanceRenderingLevel NewLevel);


// ********** End Delegate FOnObjectRenderingLevelChanged ******************************************

// ********** Begin Delegate FOnRenderingPerformanceUpdate *****************************************
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Rendering_SGDistanceRenderingTypes_h_121_DELEGATE \
SOCIALGOLF_API void FOnRenderingPerformanceUpdate_DelegateWrapper(const FMulticastScriptDelegate& OnRenderingPerformanceUpdate, int32 TotalObjects, int32 VisibleObjects, float AverageDistance);


// ********** End Delegate FOnRenderingPerformanceUpdate *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Rendering_SGDistanceRenderingTypes_h

// ********** Begin Enum EDistanceRenderingLevel ***************************************************
#define FOREACH_ENUM_EDISTANCERENDERINGLEVEL(op) \
	op(EDistanceRenderingLevel::None) \
	op(EDistanceRenderingLevel::VeryLow) \
	op(EDistanceRenderingLevel::Low) \
	op(EDistanceRenderingLevel::Medium) \
	op(EDistanceRenderingLevel::High) \
	op(EDistanceRenderingLevel::VeryHigh) 

enum class EDistanceRenderingLevel : uint8;
template<> struct TIsUEnumClass<EDistanceRenderingLevel> { enum { Value = true }; };
template<> SOCIALGOLF_API UEnum* StaticEnum<EDistanceRenderingLevel>();
// ********** End Enum EDistanceRenderingLevel *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
