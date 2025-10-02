// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Replay/SGReplayTypes.h"

#ifdef SOCIALGOLF_SGReplayTypes_generated_h
#error "SGReplayTypes.generated.h already included, missing '#pragma once' in SGReplayTypes.h"
#endif
#define SOCIALGOLF_SGReplayTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSGReplayFrameData ************************************************
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Replay_SGReplayTypes_h_36_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSGReplayFrameData_Statics; \
	static class UScriptStruct* StaticStruct();


struct FSGReplayFrameData;
// ********** End ScriptStruct FSGReplayFrameData **************************************************

// ********** Begin ScriptStruct FSGReplayEvent ****************************************************
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Replay_SGReplayTypes_h_78_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSGReplayEvent_Statics; \
	static class UScriptStruct* StaticStruct();


struct FSGReplayEvent;
// ********** End ScriptStruct FSGReplayEvent ******************************************************

// ********** Begin ScriptStruct FSGReplayData *****************************************************
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Replay_SGReplayTypes_h_112_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSGReplayData_Statics; \
	static class UScriptStruct* StaticStruct();


struct FSGReplayData;
// ********** End ScriptStruct FSGReplayData *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Replay_SGReplayTypes_h

// ********** Begin Enum EReplayEventType **********************************************************
#define FOREACH_ENUM_EREPLAYEVENTTYPE(op) \
	op(EReplayEventType::GolfShot) \
	op(EReplayEventType::PlayerMovement) \
	op(EReplayEventType::BallMovement) \
	op(EReplayEventType::CameraChange) \
	op(EReplayEventType::ClubChange) \
	op(EReplayEventType::Interaction) \
	op(EReplayEventType::ScoreEvent) \
	op(EReplayEventType::HoleComplete) 

enum class EReplayEventType : uint8;
template<> struct TIsUEnumClass<EReplayEventType> { enum { Value = true }; };
template<> SOCIALGOLF_API UEnum* StaticEnum<EReplayEventType>();
// ********** End Enum EReplayEventType ************************************************************

// ********** Begin Enum ECameraReplayMode *********************************************************
#define FOREACH_ENUM_ECAMERAREPLAYMODE(op) \
	op(ECameraReplayMode::FirstPerson) \
	op(ECameraReplayMode::ThirdPerson) \
	op(ECameraReplayMode::Cinematic) \
	op(ECameraReplayMode::BallFollow) \
	op(ECameraReplayMode::StaticOverview) \
	op(ECameraReplayMode::SideView) \
	op(ECameraReplayMode::BehindShot) 

enum class ECameraReplayMode : uint8;
template<> struct TIsUEnumClass<ECameraReplayMode> { enum { Value = true }; };
template<> SOCIALGOLF_API UEnum* StaticEnum<ECameraReplayMode>();
// ********** End Enum ECameraReplayMode ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
