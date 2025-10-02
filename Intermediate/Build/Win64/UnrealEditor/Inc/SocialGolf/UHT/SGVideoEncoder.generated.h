// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Camera/SGVideoEncoder.h"

#ifdef SOCIALGOLF_SGVideoEncoder_generated_h
#error "SGVideoEncoder.generated.h already included, missing '#pragma once' in SGVideoEncoder.h"
#endif
#define SOCIALGOLF_SGVideoEncoder_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USGVideoEncoder **********************************************************
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGVideoEncoder_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetEncodingProgress); \
	DECLARE_FUNCTION(execIsEncoding); \
	DECLARE_FUNCTION(execCancelVideoEncoding); \
	DECLARE_FUNCTION(execFinishVideoEncoding); \
	DECLARE_FUNCTION(execStartVideoEncoding);


SOCIALGOLF_API UClass* Z_Construct_UClass_USGVideoEncoder_NoRegister();

#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGVideoEncoder_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSGVideoEncoder(); \
	friend struct Z_Construct_UClass_USGVideoEncoder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOCIALGOLF_API UClass* Z_Construct_UClass_USGVideoEncoder_NoRegister(); \
public: \
	DECLARE_CLASS2(USGVideoEncoder, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SocialGolf"), Z_Construct_UClass_USGVideoEncoder_NoRegister) \
	DECLARE_SERIALIZER(USGVideoEncoder)


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGVideoEncoder_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USGVideoEncoder(USGVideoEncoder&&) = delete; \
	USGVideoEncoder(const USGVideoEncoder&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USGVideoEncoder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USGVideoEncoder); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USGVideoEncoder) \
	NO_API virtual ~USGVideoEncoder();


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGVideoEncoder_h_18_PROLOG
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGVideoEncoder_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGVideoEncoder_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGVideoEncoder_h_21_INCLASS_NO_PURE_DECLS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGVideoEncoder_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USGVideoEncoder;

// ********** End Class USGVideoEncoder ************************************************************

// ********** Begin Class USGFFmpegVideoEncoder ****************************************************
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGVideoEncoder_h_83_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateFFmpegCommand); \
	DECLARE_FUNCTION(execIsFFmpegAvailable);


SOCIALGOLF_API UClass* Z_Construct_UClass_USGFFmpegVideoEncoder_NoRegister();

#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGVideoEncoder_h_83_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSGFFmpegVideoEncoder(); \
	friend struct Z_Construct_UClass_USGFFmpegVideoEncoder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOCIALGOLF_API UClass* Z_Construct_UClass_USGFFmpegVideoEncoder_NoRegister(); \
public: \
	DECLARE_CLASS2(USGFFmpegVideoEncoder, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SocialGolf"), Z_Construct_UClass_USGFFmpegVideoEncoder_NoRegister) \
	DECLARE_SERIALIZER(USGFFmpegVideoEncoder)


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGVideoEncoder_h_83_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USGFFmpegVideoEncoder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USGFFmpegVideoEncoder(USGFFmpegVideoEncoder&&) = delete; \
	USGFFmpegVideoEncoder(const USGFFmpegVideoEncoder&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USGFFmpegVideoEncoder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USGFFmpegVideoEncoder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USGFFmpegVideoEncoder) \
	NO_API virtual ~USGFFmpegVideoEncoder();


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGVideoEncoder_h_80_PROLOG
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGVideoEncoder_h_83_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGVideoEncoder_h_83_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGVideoEncoder_h_83_INCLASS_NO_PURE_DECLS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGVideoEncoder_h_83_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USGFFmpegVideoEncoder;

// ********** End Class USGFFmpegVideoEncoder ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Camera_SGVideoEncoder_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
