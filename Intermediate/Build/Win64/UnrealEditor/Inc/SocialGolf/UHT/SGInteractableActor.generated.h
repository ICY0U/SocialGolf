// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actors/SGInteractableActor.h"

#ifdef SOCIALGOLF_SGInteractableActor_generated_h
#error "SGInteractableActor.generated.h already included, missing '#pragma once' in SGInteractableActor.h"
#endif
#define SOCIALGOLF_SGInteractableActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ASGInteractableActor *****************************************************
SOCIALGOLF_API UClass* Z_Construct_UClass_ASGInteractableActor_NoRegister();

#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Actors_SGInteractableActor_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASGInteractableActor(); \
	friend struct Z_Construct_UClass_ASGInteractableActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOCIALGOLF_API UClass* Z_Construct_UClass_ASGInteractableActor_NoRegister(); \
public: \
	DECLARE_CLASS2(ASGInteractableActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SocialGolf"), Z_Construct_UClass_ASGInteractableActor_NoRegister) \
	DECLARE_SERIALIZER(ASGInteractableActor) \
	virtual UObject* _getUObject() const override { return const_cast<ASGInteractableActor*>(this); }


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Actors_SGInteractableActor_h_10_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASGInteractableActor(ASGInteractableActor&&) = delete; \
	ASGInteractableActor(const ASGInteractableActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASGInteractableActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASGInteractableActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASGInteractableActor) \
	NO_API virtual ~ASGInteractableActor();


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Actors_SGInteractableActor_h_7_PROLOG
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Actors_SGInteractableActor_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Actors_SGInteractableActor_h_10_INCLASS_NO_PURE_DECLS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Actors_SGInteractableActor_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASGInteractableActor;

// ********** End Class ASGInteractableActor *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Actors_SGInteractableActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
