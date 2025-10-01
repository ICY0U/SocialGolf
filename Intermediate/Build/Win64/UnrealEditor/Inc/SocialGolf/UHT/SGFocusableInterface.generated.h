// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/SGFocusableInterface.h"

#ifdef SOCIALGOLF_SGFocusableInterface_generated_h
#error "SGFocusableInterface.generated.h already included, missing '#pragma once' in SGFocusableInterface.h"
#endif
#define SOCIALGOLF_SGFocusableInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface USGFocusableInterface ************************************************
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Core_SGFocusableInterface_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetFocusScaleDuration); \
	DECLARE_FUNCTION(execGetFocusScaleFactor); \
	DECLARE_FUNCTION(execIsFocused); \
	DECLARE_FUNCTION(execEndFocus); \
	DECLARE_FUNCTION(execBeginFocus);


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Core_SGFocusableInterface_h_10_CALLBACK_WRAPPERS
SOCIALGOLF_API UClass* Z_Construct_UClass_USGFocusableInterface_NoRegister();

#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Core_SGFocusableInterface_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USGFocusableInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USGFocusableInterface(USGFocusableInterface&&) = delete; \
	USGFocusableInterface(const USGFocusableInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USGFocusableInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USGFocusableInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USGFocusableInterface) \
	virtual ~USGFocusableInterface() = default;


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Core_SGFocusableInterface_h_10_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSGFocusableInterface(); \
	friend struct Z_Construct_UClass_USGFocusableInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOCIALGOLF_API UClass* Z_Construct_UClass_USGFocusableInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(USGFocusableInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/SocialGolf"), Z_Construct_UClass_USGFocusableInterface_NoRegister) \
	DECLARE_SERIALIZER(USGFocusableInterface)


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Core_SGFocusableInterface_h_10_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Core_SGFocusableInterface_h_10_GENERATED_UINTERFACE_BODY() \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Core_SGFocusableInterface_h_10_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Core_SGFocusableInterface_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISGFocusableInterface() {} \
public: \
	typedef USGFocusableInterface UClassType; \
	typedef ISGFocusableInterface ThisClass; \
	static void Execute_BeginFocus(UObject* O); \
	static void Execute_EndFocus(UObject* O); \
	static float Execute_GetFocusScaleDuration(const UObject* O); \
	static float Execute_GetFocusScaleFactor(const UObject* O); \
	static bool Execute_IsFocused(const UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Core_SGFocusableInterface_h_7_PROLOG
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Core_SGFocusableInterface_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Core_SGFocusableInterface_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Core_SGFocusableInterface_h_10_CALLBACK_WRAPPERS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Core_SGFocusableInterface_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USGFocusableInterface;

// ********** End Interface USGFocusableInterface **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Core_SGFocusableInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
