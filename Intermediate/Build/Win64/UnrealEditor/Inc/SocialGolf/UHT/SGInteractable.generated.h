// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/SGInteractable.h"

#ifdef SOCIALGOLF_SGInteractable_generated_h
#error "SGInteractable.generated.h already included, missing '#pragma once' in SGInteractable.h"
#endif
#define SOCIALGOLF_SGInteractable_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class APawn;

// ********** Begin Interface USGInteractable ******************************************************
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Core_SGInteractable_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Interact_Implementation(APawn* InstigatorPawn) {}; \
	virtual FText GetInteractionText_Implementation() const { return FText::GetEmpty(); }; \
	DECLARE_FUNCTION(execInteract); \
	DECLARE_FUNCTION(execGetInteractionText);


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Core_SGInteractable_h_9_CALLBACK_WRAPPERS
SOCIALGOLF_API UClass* Z_Construct_UClass_USGInteractable_NoRegister();

#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Core_SGInteractable_h_9_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USGInteractable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USGInteractable(USGInteractable&&) = delete; \
	USGInteractable(const USGInteractable&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USGInteractable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USGInteractable); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USGInteractable) \
	virtual ~USGInteractable() = default;


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Core_SGInteractable_h_9_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSGInteractable(); \
	friend struct Z_Construct_UClass_USGInteractable_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOCIALGOLF_API UClass* Z_Construct_UClass_USGInteractable_NoRegister(); \
public: \
	DECLARE_CLASS2(USGInteractable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/SocialGolf"), Z_Construct_UClass_USGInteractable_NoRegister) \
	DECLARE_SERIALIZER(USGInteractable)


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Core_SGInteractable_h_9_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Core_SGInteractable_h_9_GENERATED_UINTERFACE_BODY() \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Core_SGInteractable_h_9_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Core_SGInteractable_h_9_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISGInteractable() {} \
public: \
	typedef USGInteractable UClassType; \
	typedef ISGInteractable ThisClass; \
	static FText Execute_GetInteractionText(const UObject* O); \
	static void Execute_Interact(UObject* O, APawn* InstigatorPawn); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Core_SGInteractable_h_6_PROLOG
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Core_SGInteractable_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Core_SGInteractable_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Core_SGInteractable_h_9_CALLBACK_WRAPPERS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Core_SGInteractable_h_9_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USGInteractable;

// ********** End Interface USGInteractable ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Core_SGInteractable_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
