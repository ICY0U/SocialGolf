// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/SGHUD.h"

#ifdef SOCIALGOLF_SGHUD_generated_h
#error "SGHUD.generated.h already included, missing '#pragma once' in SGHUD.h"
#endif
#define SOCIALGOLF_SGHUD_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ASGHUD *******************************************************************
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_UI_SGHUD_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execToggleNetworkStats); \
	DECLARE_FUNCTION(execToggleFPSDisplay);


SOCIALGOLF_API UClass* Z_Construct_UClass_ASGHUD_NoRegister();

#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_UI_SGHUD_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASGHUD(); \
	friend struct Z_Construct_UClass_ASGHUD_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOCIALGOLF_API UClass* Z_Construct_UClass_ASGHUD_NoRegister(); \
public: \
	DECLARE_CLASS2(ASGHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/SocialGolf"), Z_Construct_UClass_ASGHUD_NoRegister) \
	DECLARE_SERIALIZER(ASGHUD)


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_UI_SGHUD_h_9_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASGHUD(ASGHUD&&) = delete; \
	ASGHUD(const ASGHUD&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASGHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASGHUD); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASGHUD) \
	NO_API virtual ~ASGHUD();


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_UI_SGHUD_h_6_PROLOG
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_UI_SGHUD_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_UI_SGHUD_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_UI_SGHUD_h_9_INCLASS_NO_PURE_DECLS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_UI_SGHUD_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASGHUD;

// ********** End Class ASGHUD *********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_UI_SGHUD_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
