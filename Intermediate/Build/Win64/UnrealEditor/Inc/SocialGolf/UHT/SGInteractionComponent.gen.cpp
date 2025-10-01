// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SocialGolf/Interaction/SGInteractionComponent.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSGInteractionComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGFocusableComponent_NoRegister();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGInteractionComponent();
SOCIALGOLF_API UClass* Z_Construct_UClass_USGInteractionComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_SocialGolf();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USGInteractionComponent Function MulticastDrawTrace **********************
struct SGInteractionComponent_eventMulticastDrawTrace_Parms
{
	FVector Start;
	FVector End;
	bool bHit;
	FHitResult Hit;
};
static FName NAME_USGInteractionComponent_MulticastDrawTrace = FName(TEXT("MulticastDrawTrace"));
void USGInteractionComponent::MulticastDrawTrace(FVector const& Start, FVector const& End, bool bHit, FHitResult Hit)
{
	SGInteractionComponent_eventMulticastDrawTrace_Parms Parms;
	Parms.Start=Start;
	Parms.End=End;
	Parms.bHit=bHit ? true : false;
	Parms.Hit=Hit;
	UFunction* Func = FindFunctionChecked(NAME_USGInteractionComponent_MulticastDrawTrace);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_USGInteractionComponent_MulticastDrawTrace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interaction/SGInteractionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
	static const UECodeGen_Private::FStructPropertyParams NewProp_End;
	static void NewProp_bHit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USGInteractionComponent_MulticastDrawTrace_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGInteractionComponent_eventMulticastDrawTrace_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Start_MetaData), NewProp_Start_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USGInteractionComponent_MulticastDrawTrace_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGInteractionComponent_eventMulticastDrawTrace_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_End_MetaData), NewProp_End_MetaData) };
void Z_Construct_UFunction_USGInteractionComponent_MulticastDrawTrace_Statics::NewProp_bHit_SetBit(void* Obj)
{
	((SGInteractionComponent_eventMulticastDrawTrace_Parms*)Obj)->bHit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USGInteractionComponent_MulticastDrawTrace_Statics::NewProp_bHit = { "bHit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SGInteractionComponent_eventMulticastDrawTrace_Parms), &Z_Construct_UFunction_USGInteractionComponent_MulticastDrawTrace_Statics::NewProp_bHit_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USGInteractionComponent_MulticastDrawTrace_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGInteractionComponent_eventMulticastDrawTrace_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGInteractionComponent_MulticastDrawTrace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGInteractionComponent_MulticastDrawTrace_Statics::NewProp_Start,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGInteractionComponent_MulticastDrawTrace_Statics::NewProp_End,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGInteractionComponent_MulticastDrawTrace_Statics::NewProp_bHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGInteractionComponent_MulticastDrawTrace_Statics::NewProp_Hit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGInteractionComponent_MulticastDrawTrace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGInteractionComponent_MulticastDrawTrace_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGInteractionComponent, nullptr, "MulticastDrawTrace", Z_Construct_UFunction_USGInteractionComponent_MulticastDrawTrace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGInteractionComponent_MulticastDrawTrace_Statics::PropPointers), sizeof(SGInteractionComponent_eventMulticastDrawTrace_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00884C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGInteractionComponent_MulticastDrawTrace_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGInteractionComponent_MulticastDrawTrace_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(SGInteractionComponent_eventMulticastDrawTrace_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGInteractionComponent_MulticastDrawTrace()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGInteractionComponent_MulticastDrawTrace_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGInteractionComponent::execMulticastDrawTrace)
{
	P_GET_STRUCT(FVector,Z_Param_Start);
	P_GET_STRUCT(FVector,Z_Param_End);
	P_GET_UBOOL(Z_Param_bHit);
	P_GET_STRUCT(FHitResult,Z_Param_Hit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastDrawTrace_Implementation(Z_Param_Start,Z_Param_End,Z_Param_bHit,Z_Param_Hit);
	P_NATIVE_END;
}
// ********** End Class USGInteractionComponent Function MulticastDrawTrace ************************

// ********** Begin Class USGInteractionComponent Function ServerInteract **************************
struct SGInteractionComponent_eventServerInteract_Parms
{
	AActor* Target;
};
static FName NAME_USGInteractionComponent_ServerInteract = FName(TEXT("ServerInteract"));
void USGInteractionComponent::ServerInteract(AActor* Target)
{
	SGInteractionComponent_eventServerInteract_Parms Parms;
	Parms.Target=Target;
	UFunction* Func = FindFunctionChecked(NAME_USGInteractionComponent_ServerInteract);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_USGInteractionComponent_ServerInteract_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interaction/SGInteractionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USGInteractionComponent_ServerInteract_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGInteractionComponent_eventServerInteract_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGInteractionComponent_ServerInteract_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGInteractionComponent_ServerInteract_Statics::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGInteractionComponent_ServerInteract_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGInteractionComponent_ServerInteract_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGInteractionComponent, nullptr, "ServerInteract", Z_Construct_UFunction_USGInteractionComponent_ServerInteract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGInteractionComponent_ServerInteract_Statics::PropPointers), sizeof(SGInteractionComponent_eventServerInteract_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGInteractionComponent_ServerInteract_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGInteractionComponent_ServerInteract_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(SGInteractionComponent_eventServerInteract_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGInteractionComponent_ServerInteract()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGInteractionComponent_ServerInteract_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGInteractionComponent::execServerInteract)
{
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerInteract_Implementation(Z_Param_Target);
	P_NATIVE_END;
}
// ********** End Class USGInteractionComponent Function ServerInteract ****************************

// ********** Begin Class USGInteractionComponent Function ServerReportTrace ***********************
struct SGInteractionComponent_eventServerReportTrace_Parms
{
	FVector Start;
	FVector End;
	bool bHit;
	FHitResult Hit;
};
static FName NAME_USGInteractionComponent_ServerReportTrace = FName(TEXT("ServerReportTrace"));
void USGInteractionComponent::ServerReportTrace(FVector const& Start, FVector const& End, bool bHit, FHitResult Hit)
{
	SGInteractionComponent_eventServerReportTrace_Parms Parms;
	Parms.Start=Start;
	Parms.End=End;
	Parms.bHit=bHit ? true : false;
	Parms.Hit=Hit;
	UFunction* Func = FindFunctionChecked(NAME_USGInteractionComponent_ServerReportTrace);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_USGInteractionComponent_ServerReportTrace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interaction/SGInteractionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
	static const UECodeGen_Private::FStructPropertyParams NewProp_End;
	static void NewProp_bHit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USGInteractionComponent_ServerReportTrace_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGInteractionComponent_eventServerReportTrace_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Start_MetaData), NewProp_Start_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USGInteractionComponent_ServerReportTrace_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGInteractionComponent_eventServerReportTrace_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_End_MetaData), NewProp_End_MetaData) };
void Z_Construct_UFunction_USGInteractionComponent_ServerReportTrace_Statics::NewProp_bHit_SetBit(void* Obj)
{
	((SGInteractionComponent_eventServerReportTrace_Parms*)Obj)->bHit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USGInteractionComponent_ServerReportTrace_Statics::NewProp_bHit = { "bHit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SGInteractionComponent_eventServerReportTrace_Parms), &Z_Construct_UFunction_USGInteractionComponent_ServerReportTrace_Statics::NewProp_bHit_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USGInteractionComponent_ServerReportTrace_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGInteractionComponent_eventServerReportTrace_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGInteractionComponent_ServerReportTrace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGInteractionComponent_ServerReportTrace_Statics::NewProp_Start,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGInteractionComponent_ServerReportTrace_Statics::NewProp_End,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGInteractionComponent_ServerReportTrace_Statics::NewProp_bHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGInteractionComponent_ServerReportTrace_Statics::NewProp_Hit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGInteractionComponent_ServerReportTrace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGInteractionComponent_ServerReportTrace_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGInteractionComponent, nullptr, "ServerReportTrace", Z_Construct_UFunction_USGInteractionComponent_ServerReportTrace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGInteractionComponent_ServerReportTrace_Statics::PropPointers), sizeof(SGInteractionComponent_eventServerReportTrace_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00A80C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGInteractionComponent_ServerReportTrace_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGInteractionComponent_ServerReportTrace_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(SGInteractionComponent_eventServerReportTrace_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGInteractionComponent_ServerReportTrace()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGInteractionComponent_ServerReportTrace_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGInteractionComponent::execServerReportTrace)
{
	P_GET_STRUCT(FVector,Z_Param_Start);
	P_GET_STRUCT(FVector,Z_Param_End);
	P_GET_UBOOL(Z_Param_bHit);
	P_GET_STRUCT(FHitResult,Z_Param_Hit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerReportTrace_Implementation(Z_Param_Start,Z_Param_End,Z_Param_bHit,Z_Param_Hit);
	P_NATIVE_END;
}
// ********** End Class USGInteractionComponent Function ServerReportTrace *************************

// ********** Begin Class USGInteractionComponent Function StartFocusDetection *********************
struct Z_Construct_UFunction_USGInteractionComponent_StartFocusDetection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interaction|Focus" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Focus functions\n" },
#endif
		{ "ModuleRelativePath", "Interaction/SGInteractionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Focus functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGInteractionComponent_StartFocusDetection_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGInteractionComponent, nullptr, "StartFocusDetection", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGInteractionComponent_StartFocusDetection_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGInteractionComponent_StartFocusDetection_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGInteractionComponent_StartFocusDetection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGInteractionComponent_StartFocusDetection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGInteractionComponent::execStartFocusDetection)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartFocusDetection();
	P_NATIVE_END;
}
// ********** End Class USGInteractionComponent Function StartFocusDetection ***********************

// ********** Begin Class USGInteractionComponent Function StopFocusDetection **********************
struct Z_Construct_UFunction_USGInteractionComponent_StopFocusDetection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interaction|Focus" },
		{ "ModuleRelativePath", "Interaction/SGInteractionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGInteractionComponent_StopFocusDetection_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGInteractionComponent, nullptr, "StopFocusDetection", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGInteractionComponent_StopFocusDetection_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGInteractionComponent_StopFocusDetection_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGInteractionComponent_StopFocusDetection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGInteractionComponent_StopFocusDetection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGInteractionComponent::execStopFocusDetection)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopFocusDetection();
	P_NATIVE_END;
}
// ********** End Class USGInteractionComponent Function StopFocusDetection ************************

// ********** Begin Class USGInteractionComponent Function TryInteract *****************************
struct Z_Construct_UFunction_USGInteractionComponent_TryInteract_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Interaction/SGInteractionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGInteractionComponent_TryInteract_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGInteractionComponent, nullptr, "TryInteract", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGInteractionComponent_TryInteract_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGInteractionComponent_TryInteract_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGInteractionComponent_TryInteract()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGInteractionComponent_TryInteract_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGInteractionComponent::execTryInteract)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TryInteract();
	P_NATIVE_END;
}
// ********** End Class USGInteractionComponent Function TryInteract *******************************

// ********** Begin Class USGInteractionComponent Function UpdateFocusDetection ********************
struct Z_Construct_UFunction_USGInteractionComponent_UpdateFocusDetection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Focus detection\n" },
#endif
		{ "ModuleRelativePath", "Interaction/SGInteractionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Focus detection" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGInteractionComponent_UpdateFocusDetection_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGInteractionComponent, nullptr, "UpdateFocusDetection", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGInteractionComponent_UpdateFocusDetection_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGInteractionComponent_UpdateFocusDetection_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGInteractionComponent_UpdateFocusDetection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGInteractionComponent_UpdateFocusDetection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGInteractionComponent::execUpdateFocusDetection)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateFocusDetection();
	P_NATIVE_END;
}
// ********** End Class USGInteractionComponent Function UpdateFocusDetection **********************

// ********** Begin Class USGInteractionComponent **************************************************
void USGInteractionComponent::StaticRegisterNativesUSGInteractionComponent()
{
	UClass* Class = USGInteractionComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "MulticastDrawTrace", &USGInteractionComponent::execMulticastDrawTrace },
		{ "ServerInteract", &USGInteractionComponent::execServerInteract },
		{ "ServerReportTrace", &USGInteractionComponent::execServerReportTrace },
		{ "StartFocusDetection", &USGInteractionComponent::execStartFocusDetection },
		{ "StopFocusDetection", &USGInteractionComponent::execStopFocusDetection },
		{ "TryInteract", &USGInteractionComponent::execTryInteract },
		{ "UpdateFocusDetection", &USGInteractionComponent::execUpdateFocusDetection },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_USGInteractionComponent;
UClass* USGInteractionComponent::GetPrivateStaticClass()
{
	using TClass = USGInteractionComponent;
	if (!Z_Registration_Info_UClass_USGInteractionComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SGInteractionComponent"),
			Z_Registration_Info_UClass_USGInteractionComponent.InnerSingleton,
			StaticRegisterNativesUSGInteractionComponent,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_USGInteractionComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_USGInteractionComponent_NoRegister()
{
	return USGInteractionComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USGInteractionComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Interaction/SGInteractionComponent.h" },
		{ "ModuleRelativePath", "Interaction/SGInteractionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceDistance_MetaData[] = {
		{ "Category", "Interaction|Trace" },
		{ "ModuleRelativePath", "Interaction/SGInteractionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceChannel_MetaData[] = {
		{ "Category", "Interaction|Trace" },
		{ "ModuleRelativePath", "Interaction/SGInteractionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseSphereTrace_MetaData[] = {
		{ "Category", "Interaction|Trace" },
		{ "ModuleRelativePath", "Interaction/SGInteractionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceRadius_MetaData[] = {
		{ "Category", "Interaction|Trace" },
		{ "EditCondition", "bUseSphereTrace" },
		{ "ModuleRelativePath", "Interaction/SGInteractionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableFocusDetection_MetaData[] = {
		{ "Category", "Interaction|Focus" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Focus settings\n" },
#endif
		{ "ModuleRelativePath", "Interaction/SGInteractionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Focus settings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FocusUpdateRate_MetaData[] = {
		{ "Category", "Interaction|Focus" },
		{ "ModuleRelativePath", "Interaction/SGInteractionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDebugInteraction_MetaData[] = {
		{ "Category", "Interaction|Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// How often to check for focus changes\n" },
#endif
		{ "ModuleRelativePath", "Interaction/SGInteractionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How often to check for focus changes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugDuration_MetaData[] = {
		{ "Category", "Interaction|Debug" },
		{ "ModuleRelativePath", "Interaction/SGInteractionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugThickness_MetaData[] = {
		{ "Category", "Interaction|Debug" },
		{ "ModuleRelativePath", "Interaction/SGInteractionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugLineColor_MetaData[] = {
		{ "Category", "Interaction|Debug" },
		{ "ModuleRelativePath", "Interaction/SGInteractionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugHitColor_MetaData[] = {
		{ "Category", "Interaction|Debug" },
		{ "ModuleRelativePath", "Interaction/SGInteractionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugActorBoxColor_MetaData[] = {
		{ "Category", "Interaction|Debug" },
		{ "ModuleRelativePath", "Interaction/SGInteractionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentFocusedActor_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Focus tracking\n" },
#endif
		{ "ModuleRelativePath", "Interaction/SGInteractionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Focus tracking" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentFocusedComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Interaction/SGInteractionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceDistance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
	static void NewProp_bUseSphereTrace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSphereTrace;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceRadius;
	static void NewProp_bEnableFocusDetection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableFocusDetection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FocusUpdateRate;
	static void NewProp_bDebugInteraction_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugInteraction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugThickness;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DebugLineColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DebugHitColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DebugActorBoxColor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentFocusedActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentFocusedComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USGInteractionComponent_MulticastDrawTrace, "MulticastDrawTrace" }, // 2002129759
		{ &Z_Construct_UFunction_USGInteractionComponent_ServerInteract, "ServerInteract" }, // 879131586
		{ &Z_Construct_UFunction_USGInteractionComponent_ServerReportTrace, "ServerReportTrace" }, // 197418480
		{ &Z_Construct_UFunction_USGInteractionComponent_StartFocusDetection, "StartFocusDetection" }, // 1255885700
		{ &Z_Construct_UFunction_USGInteractionComponent_StopFocusDetection, "StopFocusDetection" }, // 515747342
		{ &Z_Construct_UFunction_USGInteractionComponent_TryInteract, "TryInteract" }, // 2830870102
		{ &Z_Construct_UFunction_USGInteractionComponent_UpdateFocusDetection, "UpdateFocusDetection" }, // 967583066
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USGInteractionComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USGInteractionComponent_Statics::NewProp_TraceDistance = { "TraceDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGInteractionComponent, TraceDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceDistance_MetaData), NewProp_TraceDistance_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USGInteractionComponent_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGInteractionComponent, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceChannel_MetaData), NewProp_TraceChannel_MetaData) }; // 756624936
void Z_Construct_UClass_USGInteractionComponent_Statics::NewProp_bUseSphereTrace_SetBit(void* Obj)
{
	((USGInteractionComponent*)Obj)->bUseSphereTrace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USGInteractionComponent_Statics::NewProp_bUseSphereTrace = { "bUseSphereTrace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USGInteractionComponent), &Z_Construct_UClass_USGInteractionComponent_Statics::NewProp_bUseSphereTrace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseSphereTrace_MetaData), NewProp_bUseSphereTrace_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USGInteractionComponent_Statics::NewProp_TraceRadius = { "TraceRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGInteractionComponent, TraceRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceRadius_MetaData), NewProp_TraceRadius_MetaData) };
void Z_Construct_UClass_USGInteractionComponent_Statics::NewProp_bEnableFocusDetection_SetBit(void* Obj)
{
	((USGInteractionComponent*)Obj)->bEnableFocusDetection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USGInteractionComponent_Statics::NewProp_bEnableFocusDetection = { "bEnableFocusDetection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USGInteractionComponent), &Z_Construct_UClass_USGInteractionComponent_Statics::NewProp_bEnableFocusDetection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableFocusDetection_MetaData), NewProp_bEnableFocusDetection_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USGInteractionComponent_Statics::NewProp_FocusUpdateRate = { "FocusUpdateRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGInteractionComponent, FocusUpdateRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FocusUpdateRate_MetaData), NewProp_FocusUpdateRate_MetaData) };
void Z_Construct_UClass_USGInteractionComponent_Statics::NewProp_bDebugInteraction_SetBit(void* Obj)
{
	((USGInteractionComponent*)Obj)->bDebugInteraction = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USGInteractionComponent_Statics::NewProp_bDebugInteraction = { "bDebugInteraction", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USGInteractionComponent), &Z_Construct_UClass_USGInteractionComponent_Statics::NewProp_bDebugInteraction_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDebugInteraction_MetaData), NewProp_bDebugInteraction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USGInteractionComponent_Statics::NewProp_DebugDuration = { "DebugDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGInteractionComponent, DebugDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugDuration_MetaData), NewProp_DebugDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USGInteractionComponent_Statics::NewProp_DebugThickness = { "DebugThickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGInteractionComponent, DebugThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugThickness_MetaData), NewProp_DebugThickness_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USGInteractionComponent_Statics::NewProp_DebugLineColor = { "DebugLineColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGInteractionComponent, DebugLineColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugLineColor_MetaData), NewProp_DebugLineColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USGInteractionComponent_Statics::NewProp_DebugHitColor = { "DebugHitColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGInteractionComponent, DebugHitColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugHitColor_MetaData), NewProp_DebugHitColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USGInteractionComponent_Statics::NewProp_DebugActorBoxColor = { "DebugActorBoxColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGInteractionComponent, DebugActorBoxColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugActorBoxColor_MetaData), NewProp_DebugActorBoxColor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USGInteractionComponent_Statics::NewProp_CurrentFocusedActor = { "CurrentFocusedActor", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGInteractionComponent, CurrentFocusedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentFocusedActor_MetaData), NewProp_CurrentFocusedActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USGInteractionComponent_Statics::NewProp_CurrentFocusedComponent = { "CurrentFocusedComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGInteractionComponent, CurrentFocusedComponent), Z_Construct_UClass_USGFocusableComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentFocusedComponent_MetaData), NewProp_CurrentFocusedComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USGInteractionComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGInteractionComponent_Statics::NewProp_TraceDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGInteractionComponent_Statics::NewProp_TraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGInteractionComponent_Statics::NewProp_bUseSphereTrace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGInteractionComponent_Statics::NewProp_TraceRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGInteractionComponent_Statics::NewProp_bEnableFocusDetection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGInteractionComponent_Statics::NewProp_FocusUpdateRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGInteractionComponent_Statics::NewProp_bDebugInteraction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGInteractionComponent_Statics::NewProp_DebugDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGInteractionComponent_Statics::NewProp_DebugThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGInteractionComponent_Statics::NewProp_DebugLineColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGInteractionComponent_Statics::NewProp_DebugHitColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGInteractionComponent_Statics::NewProp_DebugActorBoxColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGInteractionComponent_Statics::NewProp_CurrentFocusedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGInteractionComponent_Statics::NewProp_CurrentFocusedComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USGInteractionComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USGInteractionComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_SocialGolf,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USGInteractionComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USGInteractionComponent_Statics::ClassParams = {
	&USGInteractionComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USGInteractionComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USGInteractionComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USGInteractionComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USGInteractionComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USGInteractionComponent()
{
	if (!Z_Registration_Info_UClass_USGInteractionComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USGInteractionComponent.OuterSingleton, Z_Construct_UClass_USGInteractionComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USGInteractionComponent.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void USGInteractionComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_bDebugInteraction(TEXT("bDebugInteraction"));
	const bool bIsValid = true
		&& Name_bDebugInteraction == ClassReps[(int32)ENetFields_Private::bDebugInteraction].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in USGInteractionComponent"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR(USGInteractionComponent);
USGInteractionComponent::~USGInteractionComponent() {}
// ********** End Class USGInteractionComponent ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Interaction_SGInteractionComponent_h__Script_SocialGolf_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USGInteractionComponent, USGInteractionComponent::StaticClass, TEXT("USGInteractionComponent"), &Z_Registration_Info_UClass_USGInteractionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USGInteractionComponent), 1086607743U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Interaction_SGInteractionComponent_h__Script_SocialGolf_2607844343(TEXT("/Script/SocialGolf"),
	Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Interaction_SGInteractionComponent_h__Script_SocialGolf_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Interaction_SGInteractionComponent_h__Script_SocialGolf_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
