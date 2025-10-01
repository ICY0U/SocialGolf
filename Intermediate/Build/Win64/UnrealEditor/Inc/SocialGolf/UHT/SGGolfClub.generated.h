// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Golf/SGGolfClub.h"

#ifdef SOCIALGOLF_SGGolfClub_generated_h
#error "SGGolfClub.generated.h already included, missing '#pragma once' in SGGolfClub.h"
#endif
#define SOCIALGOLF_SGGolfClub_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FLinearColor;

// ********** Begin Class USGGolfClubData **********************************************************
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Golf_SGGolfClub_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetClubColor);


SOCIALGOLF_API UClass* Z_Construct_UClass_USGGolfClubData_NoRegister();

#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Golf_SGGolfClub_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSGGolfClubData(); \
	friend struct Z_Construct_UClass_USGGolfClubData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOCIALGOLF_API UClass* Z_Construct_UClass_USGGolfClubData_NoRegister(); \
public: \
	DECLARE_CLASS2(USGGolfClubData, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SocialGolf"), Z_Construct_UClass_USGGolfClubData_NoRegister) \
	DECLARE_SERIALIZER(USGGolfClubData)


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Golf_SGGolfClub_h_23_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USGGolfClubData(USGGolfClubData&&) = delete; \
	USGGolfClubData(const USGGolfClubData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USGGolfClubData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USGGolfClubData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USGGolfClubData) \
	NO_API virtual ~USGGolfClubData();


#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Golf_SGGolfClub_h_20_PROLOG
#define FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Golf_SGGolfClub_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Golf_SGGolfClub_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Golf_SGGolfClub_h_23_INCLASS_NO_PURE_DECLS \
	FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Golf_SGGolfClub_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USGGolfClubData;

// ********** End Class USGGolfClubData ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Golf_SGGolfClub_h

// ********** Begin Enum EGolfClubType *************************************************************
#define FOREACH_ENUM_EGOLFCLUBTYPE(op) \
	op(EGolfClubType::Driver) \
	op(EGolfClubType::Iron3) \
	op(EGolfClubType::Iron5) \
	op(EGolfClubType::Iron7) \
	op(EGolfClubType::Iron9) \
	op(EGolfClubType::PitchingWedge) \
	op(EGolfClubType::SandWedge) \
	op(EGolfClubType::Putter) 

enum class EGolfClubType : uint8;
template<> struct TIsUEnumClass<EGolfClubType> { enum { Value = true }; };
template<> SOCIALGOLF_API UEnum* StaticEnum<EGolfClubType>();
// ********** End Enum EGolfClubType ***************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
