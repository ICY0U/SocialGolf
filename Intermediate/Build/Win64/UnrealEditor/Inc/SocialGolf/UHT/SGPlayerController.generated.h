// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Framework/SGPlayerController.h"

#ifdef SOCIALGOLF_SGPlayerController_generated_h
#error "SGPlayerController.generated.h already included, missing '#pragma once' in SGPlayerController.h"
#endif
#define SOCIALGOLF_SGPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class USGReplayManager;

// ********** Begin Class ASGPlayerController ******************************************************
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Framework_SGPlayerController_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSwitchToCameraView); \
	DECLARE_FUNCTION(execPreviousCameraView); \
	DECLARE_FUNCTION(execNextCameraView); \
	DECLARE_FUNCTION(execSwitchToCameraView4); \
	DECLARE_FUNCTION(execSwitchToCameraView3); \
	DECLARE_FUNCTION(execSwitchToCameraView2); \
	DECLARE_FUNCTION(execSwitchToCameraView1); \
	DECLARE_FUNCTION(execExportCameraRecording); \
	DECLARE_FUNCTION(execPlayCameraRecording); \
	DECLARE_FUNCTION(execStopCameraRecording); \
	DECLARE_FUNCTION(execStartCameraRecording); \
	DECLARE_FUNCTION(execSpawnGolfTee); \
	DECLARE_FUNCTION(execDropCandle); \
	DECLARE_FUNCTION(execReleaseGolfShot); \
	DECLARE_FUNCTION(execStartChargingGolfShot); \
	DECLARE_FUNCTION(execHitGolfBallForwardInput); \
	DECLARE_FUNCTION(execListGolfBallStatus); \
	DECLARE_FUNCTION(execResetGolfBall); \
	DECLARE_FUNCTION(execHitGolfBallAt); \
	DECLARE_FUNCTION(execHitGolfBallForward); \
	DECLARE_FUNCTION(execSpawnGolfBall); \
	DECLARE_FUNCTION(execForcePickupNearestCandle); \
	DECLARE_FUNCTION(execDebugInteractionTrace); \
	DECLARE_FUNCTION(execResetCharacterRotation); \
	DECLARE_FUNCTION(execRotateCharacterModel); \
	DECLARE_FUNCTION(execForceTestCandleToggle); \
	DECLARE_FUNCTION(execFixPickupCandleIssues); \
	DECLARE_FUNCTION(execSetCharacterToRandomBrightColors); \
	DECLARE_FUNCTION(execSetCharacterToRedBlue); \
	DECLARE_FUNCTION(execCycleCharacterHeadMaterial); \
	DECLARE_FUNCTION(execCycleCharacterTorsoMaterial); \
	DECLARE_FUNCTION(execRandomizeCharacterAppearance); \
	DECLARE_FUNCTION(execListAllPickupCandles); \
	DECLARE_FUNCTION(execDropAllPickupCandles); \
	DECLARE_FUNCTION(execSpawnPickupCandle); \
	DECLARE_FUNCTION(execToggleAllCandles); \
	DECLARE_FUNCTION(execExtinguishAllCandles); \
	DECLARE_FUNCTION(execLightAllCandles); \
	DECLARE_FUNCTION(execSpawnTestCandle); \
	DECLARE_FUNCTION(execForceStandUpFromBench); \
	DECLARE_FUNCTION(execEmergencyTeleportToSafeLocation); \
	DECLARE_FUNCTION(execEnsureProperCameraSetup); \
	DECLARE_FUNCTION(execDisableGameInput); \
	DECLARE_FUNCTION(execEnableGameInput); \
	DECLARE_FUNCTION(execQuickLoad); \
	DECLARE_FUNCTION(execQuickSave); \
	DECLARE_FUNCTION(execGetReplayManager); \
	DECLARE_FUNCTION(execPlayLastReplay); \
	DECLARE_FUNCTION(execQuickSaveReplay); \
	DECLARE_FUNCTION(execOpenReplayUI); \
	DECLARE_FUNCTION(execStopReplayRecording); \
	DECLARE_FUNCTION(execStartReplayRecording); \
	DECLARE_FUNCTION(execToggleReplayRecording);


SOCIALGOLF_API UClass* Z_Construct_UClass_ASGPlayerController_NoRegister();

#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Framework_SGPlayerController_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASGPlayerController(); \
	friend struct Z_Construct_UClass_ASGPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOCIALGOLF_API UClass* Z_Construct_UClass_ASGPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(ASGPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SocialGolf"), Z_Construct_UClass_ASGPlayerController_NoRegister) \
	DECLARE_SERIALIZER(ASGPlayerController)


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Framework_SGPlayerController_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASGPlayerController(ASGPlayerController&&) = delete; \
	ASGPlayerController(const ASGPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASGPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASGPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASGPlayerController) \
	NO_API virtual ~ASGPlayerController();


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Framework_SGPlayerController_h_10_PROLOG
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Framework_SGPlayerController_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Framework_SGPlayerController_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Framework_SGPlayerController_h_13_INCLASS_NO_PURE_DECLS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Framework_SGPlayerController_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASGPlayerController;

// ********** End Class ASGPlayerController ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Framework_SGPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
