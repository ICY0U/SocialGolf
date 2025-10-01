// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/SGFocusableComponent.h"

#ifdef SOCIALGOLF_SGFocusableComponent_generated_h
#error "SGFocusableComponent.generated.h already included, missing '#pragma once' in SGFocusableComponent.h"
#endif
#define SOCIALGOLF_SGFocusableComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FOnFocusChanged *******************************************************
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Core_SGFocusableComponent_h_9_DELEGATE \
SOCIALGOLF_API void FOnFocusChanged_DelegateWrapper(const FMulticastScriptDelegate& OnFocusChanged);


// ********** End Delegate FOnFocusChanged *********************************************************

// ********** Begin Class USGFocusableComponent ****************************************************
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Core_SGFocusableComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnScaleTimelineFinished); \
	DECLARE_FUNCTION(execOnScaleTimelineUpdate); \
	DECLARE_FUNCTION(execIsFocused); \
	DECLARE_FUNCTION(execEndFocus); \
	DECLARE_FUNCTION(execBeginFocus);


SOCIALGOLF_API UClass* Z_Construct_UClass_USGFocusableComponent_NoRegister();

#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Core_SGFocusableComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSGFocusableComponent(); \
	friend struct Z_Construct_UClass_USGFocusableComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOCIALGOLF_API UClass* Z_Construct_UClass_USGFocusableComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(USGFocusableComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SocialGolf"), Z_Construct_UClass_USGFocusableComponent_NoRegister) \
	DECLARE_SERIALIZER(USGFocusableComponent)


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Core_SGFocusableComponent_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USGFocusableComponent(USGFocusableComponent&&) = delete; \
	USGFocusableComponent(const USGFocusableComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USGFocusableComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USGFocusableComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USGFocusableComponent) \
	NO_API virtual ~USGFocusableComponent();


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Core_SGFocusableComponent_h_15_PROLOG
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Core_SGFocusableComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Core_SGFocusableComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Core_SGFocusableComponent_h_18_INCLASS_NO_PURE_DECLS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Core_SGFocusableComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USGFocusableComponent;

// ********** End Class USGFocusableComponent ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Core_SGFocusableComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
