// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interaction/SGInteractionComponent.h"

#ifdef SOCIALGOLF_SGInteractionComponent_generated_h
#error "SGInteractionComponent.generated.h already included, missing '#pragma once' in SGInteractionComponent.h"
#endif
#define SOCIALGOLF_SGInteractionComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
struct FHitResult;

// ********** Begin Class USGInteractionComponent **************************************************
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Interaction_SGInteractionComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastDrawTrace_Implementation(FVector const& Start, FVector const& End, bool bHit, FHitResult Hit); \
	virtual void ServerReportTrace_Implementation(FVector const& Start, FVector const& End, bool bHit, FHitResult Hit); \
	virtual void ServerInteract_Implementation(AActor* Target); \
	DECLARE_FUNCTION(execUpdateFocusDetection); \
	DECLARE_FUNCTION(execMulticastDrawTrace); \
	DECLARE_FUNCTION(execServerReportTrace); \
	DECLARE_FUNCTION(execServerInteract); \
	DECLARE_FUNCTION(execStopFocusDetection); \
	DECLARE_FUNCTION(execStartFocusDetection); \
	DECLARE_FUNCTION(execTryInteract);


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Interaction_SGInteractionComponent_h_11_CALLBACK_WRAPPERS
SOCIALGOLF_API UClass* Z_Construct_UClass_USGInteractionComponent_NoRegister();

#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Interaction_SGInteractionComponent_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSGInteractionComponent(); \
	friend struct Z_Construct_UClass_USGInteractionComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOCIALGOLF_API UClass* Z_Construct_UClass_USGInteractionComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(USGInteractionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SocialGolf"), Z_Construct_UClass_USGInteractionComponent_NoRegister) \
	DECLARE_SERIALIZER(USGInteractionComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bDebugInteraction=NETFIELD_REP_START, \
		NETFIELD_REP_END=bDebugInteraction	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Interaction_SGInteractionComponent_h_11_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USGInteractionComponent(USGInteractionComponent&&) = delete; \
	USGInteractionComponent(const USGInteractionComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USGInteractionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USGInteractionComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USGInteractionComponent) \
	NO_API virtual ~USGInteractionComponent();


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Interaction_SGInteractionComponent_h_8_PROLOG
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Interaction_SGInteractionComponent_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Interaction_SGInteractionComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Interaction_SGInteractionComponent_h_11_CALLBACK_WRAPPERS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Interaction_SGInteractionComponent_h_11_INCLASS_NO_PURE_DECLS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Interaction_SGInteractionComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USGInteractionComponent;

// ********** End Class USGInteractionComponent ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Interaction_SGInteractionComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
