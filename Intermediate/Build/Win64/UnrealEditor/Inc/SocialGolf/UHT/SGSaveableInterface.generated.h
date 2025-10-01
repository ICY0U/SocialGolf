// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/SGSaveableInterface.h"

#ifdef SOCIALGOLF_SGSaveableInterface_generated_h
#error "SGSaveableInterface.generated.h already included, missing '#pragma once' in SGSaveableInterface.h"
#endif
#define SOCIALGOLF_SGSaveableInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FSGSaveData;

// ********** Begin Interface USGSaveableInterface *************************************************
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Core_SGSaveableInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSavePriority); \
	DECLARE_FUNCTION(execGetSaveID); \
	DECLARE_FUNCTION(execLoadData); \
	DECLARE_FUNCTION(execSaveData);


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Core_SGSaveableInterface_h_12_CALLBACK_WRAPPERS
SOCIALGOLF_API UClass* Z_Construct_UClass_USGSaveableInterface_NoRegister();

#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Core_SGSaveableInterface_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USGSaveableInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USGSaveableInterface(USGSaveableInterface&&) = delete; \
	USGSaveableInterface(const USGSaveableInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USGSaveableInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USGSaveableInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USGSaveableInterface) \
	virtual ~USGSaveableInterface() = default;


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Core_SGSaveableInterface_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSGSaveableInterface(); \
	friend struct Z_Construct_UClass_USGSaveableInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOCIALGOLF_API UClass* Z_Construct_UClass_USGSaveableInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(USGSaveableInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/SocialGolf"), Z_Construct_UClass_USGSaveableInterface_NoRegister) \
	DECLARE_SERIALIZER(USGSaveableInterface)


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Core_SGSaveableInterface_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Core_SGSaveableInterface_h_12_GENERATED_UINTERFACE_BODY() \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Core_SGSaveableInterface_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Core_SGSaveableInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISGSaveableInterface() {} \
public: \
	typedef USGSaveableInterface UClassType; \
	typedef ISGSaveableInterface ThisClass; \
	static FString Execute_GetSaveID(const UObject* O); \
	static int32 Execute_GetSavePriority(const UObject* O); \
	static bool Execute_LoadData(UObject* O, FSGSaveData const& SaveData); \
	static bool Execute_SaveData(const UObject* O, FSGSaveData& SaveData); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Core_SGSaveableInterface_h_9_PROLOG
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Core_SGSaveableInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Core_SGSaveableInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Core_SGSaveableInterface_h_12_CALLBACK_WRAPPERS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Core_SGSaveableInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USGSaveableInterface;

// ********** End Interface USGSaveableInterface ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Core_SGSaveableInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
