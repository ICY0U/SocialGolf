// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Basketball/SGBasketballPhysicsMaterial.h"

#ifdef SOCIALGOLF_SGBasketballPhysicsMaterial_generated_h
#error "SGBasketballPhysicsMaterial.generated.h already included, missing '#pragma once' in SGBasketballPhysicsMaterial.h"
#endif
#define SOCIALGOLF_SGBasketballPhysicsMaterial_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class USGBasketballPhysicsMaterial;
enum class EBasketballSurfaceType : uint8;

// ********** Begin Class USGBasketballPhysicsMaterial *********************************************
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Basketball_SGBasketballPhysicsMaterial_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateForSurface); \
	DECLARE_FUNCTION(execCalculateSpinInfluencedBounce); \
	DECLARE_FUNCTION(execGetVelocityBasedRestitution);


SOCIALGOLF_API UClass* Z_Construct_UClass_USGBasketballPhysicsMaterial_NoRegister();

#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Basketball_SGBasketballPhysicsMaterial_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSGBasketballPhysicsMaterial(); \
	friend struct Z_Construct_UClass_USGBasketballPhysicsMaterial_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOCIALGOLF_API UClass* Z_Construct_UClass_USGBasketballPhysicsMaterial_NoRegister(); \
public: \
	DECLARE_CLASS2(USGBasketballPhysicsMaterial, UPhysicalMaterial, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SocialGolf"), Z_Construct_UClass_USGBasketballPhysicsMaterial_NoRegister) \
	DECLARE_SERIALIZER(USGBasketballPhysicsMaterial)


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Basketball_SGBasketballPhysicsMaterial_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USGBasketballPhysicsMaterial(USGBasketballPhysicsMaterial&&) = delete; \
	USGBasketballPhysicsMaterial(const USGBasketballPhysicsMaterial&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USGBasketballPhysicsMaterial); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USGBasketballPhysicsMaterial); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USGBasketballPhysicsMaterial) \
	NO_API virtual ~USGBasketballPhysicsMaterial();


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Basketball_SGBasketballPhysicsMaterial_h_17_PROLOG
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Basketball_SGBasketballPhysicsMaterial_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Basketball_SGBasketballPhysicsMaterial_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Basketball_SGBasketballPhysicsMaterial_h_20_INCLASS_NO_PURE_DECLS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Basketball_SGBasketballPhysicsMaterial_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USGBasketballPhysicsMaterial;

// ********** End Class USGBasketballPhysicsMaterial ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Basketball_SGBasketballPhysicsMaterial_h

// ********** Begin Enum EBasketballSurfaceType ****************************************************
#define FOREACH_ENUM_EBASKETBALLSURFACETYPE(op) \
	op(EBasketballSurfaceType::Court_Wood) \
	op(EBasketballSurfaceType::Court_Concrete) \
	op(EBasketballSurfaceType::Grass) \
	op(EBasketballSurfaceType::Sand) \
	op(EBasketballSurfaceType::Metal) \
	op(EBasketballSurfaceType::Generic) 

enum class EBasketballSurfaceType : uint8;
template<> struct TIsUEnumClass<EBasketballSurfaceType> { enum { Value = true }; };
template<> SOCIALGOLF_API UEnum* StaticEnum<EBasketballSurfaceType>();
// ********** End Enum EBasketballSurfaceType ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
