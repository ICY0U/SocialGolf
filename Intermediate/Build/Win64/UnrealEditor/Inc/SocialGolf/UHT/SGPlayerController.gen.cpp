// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SocialGolf/Framework/SGPlayerController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSGPlayerController() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
SOCIALGOLF_API UClass* Z_Construct_UClass_ASGPlayerController();
SOCIALGOLF_API UClass* Z_Construct_UClass_ASGPlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_SocialGolf();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASGPlayerController Function DebugInteractionTrace ***********************
struct Z_Construct_UFunction_ASGPlayerController_DebugInteractionTrace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Debug|Interaction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Interaction debugging\n" },
#endif
		{ "ModuleRelativePath", "Framework/SGPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Interaction debugging" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGPlayerController_DebugInteractionTrace_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGPlayerController, nullptr, "DebugInteractionTrace", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGPlayerController_DebugInteractionTrace_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGPlayerController_DebugInteractionTrace_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGPlayerController_DebugInteractionTrace()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGPlayerController_DebugInteractionTrace_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGPlayerController::execDebugInteractionTrace)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DebugInteractionTrace();
	P_NATIVE_END;
}
// ********** End Class ASGPlayerController Function DebugInteractionTrace *************************

// ********** Begin Class ASGPlayerController Function DisableGameInput ****************************
struct Z_Construct_UFunction_ASGPlayerController_DisableGameInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Framework/SGPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGPlayerController_DisableGameInput_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGPlayerController, nullptr, "DisableGameInput", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGPlayerController_DisableGameInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGPlayerController_DisableGameInput_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGPlayerController_DisableGameInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGPlayerController_DisableGameInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGPlayerController::execDisableGameInput)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisableGameInput();
	P_NATIVE_END;
}
// ********** End Class ASGPlayerController Function DisableGameInput ******************************

// ********** Begin Class ASGPlayerController Function DropAllPickupCandles ************************
struct Z_Construct_UFunction_ASGPlayerController_DropAllPickupCandles_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Debug|Candles" },
		{ "ModuleRelativePath", "Framework/SGPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGPlayerController_DropAllPickupCandles_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGPlayerController, nullptr, "DropAllPickupCandles", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGPlayerController_DropAllPickupCandles_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGPlayerController_DropAllPickupCandles_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGPlayerController_DropAllPickupCandles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGPlayerController_DropAllPickupCandles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGPlayerController::execDropAllPickupCandles)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DropAllPickupCandles();
	P_NATIVE_END;
}
// ********** End Class ASGPlayerController Function DropAllPickupCandles **************************

// ********** Begin Class ASGPlayerController Function EmergencyTeleportToSafeLocation *************
struct Z_Construct_UFunction_ASGPlayerController_EmergencyTeleportToSafeLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Emergency recovery functions\n" },
#endif
		{ "ModuleRelativePath", "Framework/SGPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Emergency recovery functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGPlayerController_EmergencyTeleportToSafeLocation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGPlayerController, nullptr, "EmergencyTeleportToSafeLocation", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGPlayerController_EmergencyTeleportToSafeLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGPlayerController_EmergencyTeleportToSafeLocation_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGPlayerController_EmergencyTeleportToSafeLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGPlayerController_EmergencyTeleportToSafeLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGPlayerController::execEmergencyTeleportToSafeLocation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EmergencyTeleportToSafeLocation();
	P_NATIVE_END;
}
// ********** End Class ASGPlayerController Function EmergencyTeleportToSafeLocation ***************

// ********** Begin Class ASGPlayerController Function EnableGameInput *****************************
struct Z_Construct_UFunction_ASGPlayerController_EnableGameInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Input control functions\n" },
#endif
		{ "ModuleRelativePath", "Framework/SGPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input control functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGPlayerController_EnableGameInput_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGPlayerController, nullptr, "EnableGameInput", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGPlayerController_EnableGameInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGPlayerController_EnableGameInput_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGPlayerController_EnableGameInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGPlayerController_EnableGameInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGPlayerController::execEnableGameInput)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnableGameInput();
	P_NATIVE_END;
}
// ********** End Class ASGPlayerController Function EnableGameInput *******************************

// ********** Begin Class ASGPlayerController Function EnsureProperCameraSetup *********************
struct Z_Construct_UFunction_ASGPlayerController_EnsureProperCameraSetup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Multiplayer camera setup\n" },
#endif
		{ "ModuleRelativePath", "Framework/SGPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Multiplayer camera setup" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGPlayerController_EnsureProperCameraSetup_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGPlayerController, nullptr, "EnsureProperCameraSetup", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGPlayerController_EnsureProperCameraSetup_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGPlayerController_EnsureProperCameraSetup_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGPlayerController_EnsureProperCameraSetup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGPlayerController_EnsureProperCameraSetup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGPlayerController::execEnsureProperCameraSetup)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnsureProperCameraSetup();
	P_NATIVE_END;
}
// ********** End Class ASGPlayerController Function EnsureProperCameraSetup ***********************

// ********** Begin Class ASGPlayerController Function ExtinguishAllCandles ************************
struct Z_Construct_UFunction_ASGPlayerController_ExtinguishAllCandles_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Debug|Candles" },
		{ "ModuleRelativePath", "Framework/SGPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGPlayerController_ExtinguishAllCandles_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGPlayerController, nullptr, "ExtinguishAllCandles", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGPlayerController_ExtinguishAllCandles_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGPlayerController_ExtinguishAllCandles_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGPlayerController_ExtinguishAllCandles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGPlayerController_ExtinguishAllCandles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGPlayerController::execExtinguishAllCandles)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ExtinguishAllCandles();
	P_NATIVE_END;
}
// ********** End Class ASGPlayerController Function ExtinguishAllCandles **************************

// ********** Begin Class ASGPlayerController Function FixPickupCandleIssues ***********************
struct Z_Construct_UFunction_ASGPlayerController_FixPickupCandleIssues_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Debug|Candles" },
		{ "ModuleRelativePath", "Framework/SGPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGPlayerController_FixPickupCandleIssues_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGPlayerController, nullptr, "FixPickupCandleIssues", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGPlayerController_FixPickupCandleIssues_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGPlayerController_FixPickupCandleIssues_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGPlayerController_FixPickupCandleIssues()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGPlayerController_FixPickupCandleIssues_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGPlayerController::execFixPickupCandleIssues)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FixPickupCandleIssues();
	P_NATIVE_END;
}
// ********** End Class ASGPlayerController Function FixPickupCandleIssues *************************

// ********** Begin Class ASGPlayerController Function ForcePickupNearestCandle ********************
struct Z_Construct_UFunction_ASGPlayerController_ForcePickupNearestCandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Debug|Interaction" },
		{ "ModuleRelativePath", "Framework/SGPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGPlayerController_ForcePickupNearestCandle_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGPlayerController, nullptr, "ForcePickupNearestCandle", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGPlayerController_ForcePickupNearestCandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGPlayerController_ForcePickupNearestCandle_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGPlayerController_ForcePickupNearestCandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGPlayerController_ForcePickupNearestCandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGPlayerController::execForcePickupNearestCandle)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ForcePickupNearestCandle();
	P_NATIVE_END;
}
// ********** End Class ASGPlayerController Function ForcePickupNearestCandle **********************

// ********** Begin Class ASGPlayerController Function ForceStandUpFromBench ***********************
struct Z_Construct_UFunction_ASGPlayerController_ForceStandUpFromBench_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Framework/SGPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGPlayerController_ForceStandUpFromBench_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGPlayerController, nullptr, "ForceStandUpFromBench", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGPlayerController_ForceStandUpFromBench_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGPlayerController_ForceStandUpFromBench_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGPlayerController_ForceStandUpFromBench()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGPlayerController_ForceStandUpFromBench_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGPlayerController::execForceStandUpFromBench)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ForceStandUpFromBench();
	P_NATIVE_END;
}
// ********** End Class ASGPlayerController Function ForceStandUpFromBench *************************

// ********** Begin Class ASGPlayerController Function ForceTestCandleToggle ***********************
struct Z_Construct_UFunction_ASGPlayerController_ForceTestCandleToggle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Debug|Candles" },
		{ "ModuleRelativePath", "Framework/SGPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGPlayerController_ForceTestCandleToggle_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGPlayerController, nullptr, "ForceTestCandleToggle", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGPlayerController_ForceTestCandleToggle_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGPlayerController_ForceTestCandleToggle_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGPlayerController_ForceTestCandleToggle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGPlayerController_ForceTestCandleToggle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGPlayerController::execForceTestCandleToggle)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ForceTestCandleToggle();
	P_NATIVE_END;
}
// ********** End Class ASGPlayerController Function ForceTestCandleToggle *************************

// ********** Begin Class ASGPlayerController Function LightAllCandles *****************************
struct Z_Construct_UFunction_ASGPlayerController_LightAllCandles_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Debug|Candles" },
		{ "ModuleRelativePath", "Framework/SGPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGPlayerController_LightAllCandles_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGPlayerController, nullptr, "LightAllCandles", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGPlayerController_LightAllCandles_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGPlayerController_LightAllCandles_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGPlayerController_LightAllCandles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGPlayerController_LightAllCandles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGPlayerController::execLightAllCandles)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LightAllCandles();
	P_NATIVE_END;
}
// ********** End Class ASGPlayerController Function LightAllCandles *******************************

// ********** Begin Class ASGPlayerController Function ListAllPickupCandles ************************
struct Z_Construct_UFunction_ASGPlayerController_ListAllPickupCandles_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Debug|Candles" },
		{ "ModuleRelativePath", "Framework/SGPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGPlayerController_ListAllPickupCandles_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGPlayerController, nullptr, "ListAllPickupCandles", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGPlayerController_ListAllPickupCandles_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGPlayerController_ListAllPickupCandles_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGPlayerController_ListAllPickupCandles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGPlayerController_ListAllPickupCandles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGPlayerController::execListAllPickupCandles)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ListAllPickupCandles();
	P_NATIVE_END;
}
// ********** End Class ASGPlayerController Function ListAllPickupCandles **************************

// ********** Begin Class ASGPlayerController Function QuickLoad ***********************************
struct Z_Construct_UFunction_ASGPlayerController_QuickLoad_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save System" },
		{ "ModuleRelativePath", "Framework/SGPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGPlayerController_QuickLoad_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGPlayerController, nullptr, "QuickLoad", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGPlayerController_QuickLoad_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGPlayerController_QuickLoad_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGPlayerController_QuickLoad()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGPlayerController_QuickLoad_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGPlayerController::execQuickLoad)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->QuickLoad();
	P_NATIVE_END;
}
// ********** End Class ASGPlayerController Function QuickLoad *************************************

// ********** Begin Class ASGPlayerController Function QuickSave ***********************************
struct Z_Construct_UFunction_ASGPlayerController_QuickSave_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Save System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Save System functions\n" },
#endif
		{ "ModuleRelativePath", "Framework/SGPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Save System functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGPlayerController_QuickSave_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGPlayerController, nullptr, "QuickSave", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGPlayerController_QuickSave_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGPlayerController_QuickSave_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGPlayerController_QuickSave()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGPlayerController_QuickSave_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGPlayerController::execQuickSave)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->QuickSave();
	P_NATIVE_END;
}
// ********** End Class ASGPlayerController Function QuickSave *************************************

// ********** Begin Class ASGPlayerController Function ResetCharacterRotation **********************
struct Z_Construct_UFunction_ASGPlayerController_ResetCharacterRotation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Debug|Character" },
		{ "ModuleRelativePath", "Framework/SGPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGPlayerController_ResetCharacterRotation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGPlayerController, nullptr, "ResetCharacterRotation", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGPlayerController_ResetCharacterRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGPlayerController_ResetCharacterRotation_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGPlayerController_ResetCharacterRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGPlayerController_ResetCharacterRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGPlayerController::execResetCharacterRotation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetCharacterRotation();
	P_NATIVE_END;
}
// ********** End Class ASGPlayerController Function ResetCharacterRotation ************************

// ********** Begin Class ASGPlayerController Function RotateCharacterModel ************************
struct Z_Construct_UFunction_ASGPlayerController_RotateCharacterModel_Statics
{
	struct SGPlayerController_eventRotateCharacterModel_Parms
	{
		float YawOffset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Debug|Character" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Character debug functions\n" },
#endif
		{ "ModuleRelativePath", "Framework/SGPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Character debug functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_YawOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASGPlayerController_RotateCharacterModel_Statics::NewProp_YawOffset = { "YawOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGPlayerController_eventRotateCharacterModel_Parms, YawOffset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGPlayerController_RotateCharacterModel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGPlayerController_RotateCharacterModel_Statics::NewProp_YawOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGPlayerController_RotateCharacterModel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGPlayerController_RotateCharacterModel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGPlayerController, nullptr, "RotateCharacterModel", Z_Construct_UFunction_ASGPlayerController_RotateCharacterModel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGPlayerController_RotateCharacterModel_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASGPlayerController_RotateCharacterModel_Statics::SGPlayerController_eventRotateCharacterModel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGPlayerController_RotateCharacterModel_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGPlayerController_RotateCharacterModel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASGPlayerController_RotateCharacterModel_Statics::SGPlayerController_eventRotateCharacterModel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASGPlayerController_RotateCharacterModel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGPlayerController_RotateCharacterModel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGPlayerController::execRotateCharacterModel)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_YawOffset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RotateCharacterModel(Z_Param_YawOffset);
	P_NATIVE_END;
}
// ********** End Class ASGPlayerController Function RotateCharacterModel **************************

// ********** Begin Class ASGPlayerController Function SpawnPickupCandle ***************************
struct Z_Construct_UFunction_ASGPlayerController_SpawnPickupCandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Debug|Candles" },
		{ "ModuleRelativePath", "Framework/SGPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGPlayerController_SpawnPickupCandle_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGPlayerController, nullptr, "SpawnPickupCandle", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGPlayerController_SpawnPickupCandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGPlayerController_SpawnPickupCandle_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGPlayerController_SpawnPickupCandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGPlayerController_SpawnPickupCandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGPlayerController::execSpawnPickupCandle)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnPickupCandle();
	P_NATIVE_END;
}
// ********** End Class ASGPlayerController Function SpawnPickupCandle *****************************

// ********** Begin Class ASGPlayerController Function SpawnTestCandle *****************************
struct Z_Construct_UFunction_ASGPlayerController_SpawnTestCandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Debug|Candles" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Candle system debug functions\n" },
#endif
		{ "ModuleRelativePath", "Framework/SGPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Candle system debug functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGPlayerController_SpawnTestCandle_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGPlayerController, nullptr, "SpawnTestCandle", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGPlayerController_SpawnTestCandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGPlayerController_SpawnTestCandle_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGPlayerController_SpawnTestCandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGPlayerController_SpawnTestCandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGPlayerController::execSpawnTestCandle)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnTestCandle();
	P_NATIVE_END;
}
// ********** End Class ASGPlayerController Function SpawnTestCandle *******************************

// ********** Begin Class ASGPlayerController Function TestInputMappings ***************************
struct Z_Construct_UFunction_ASGPlayerController_TestInputMappings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Debug|Input" },
		{ "ModuleRelativePath", "Framework/SGPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGPlayerController_TestInputMappings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGPlayerController, nullptr, "TestInputMappings", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGPlayerController_TestInputMappings_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGPlayerController_TestInputMappings_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGPlayerController_TestInputMappings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGPlayerController_TestInputMappings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGPlayerController::execTestInputMappings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TestInputMappings();
	P_NATIVE_END;
}
// ********** End Class ASGPlayerController Function TestInputMappings *****************************

// ********** Begin Class ASGPlayerController Function TestPickupSystem ****************************
struct Z_Construct_UFunction_ASGPlayerController_TestPickupSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Debug|Candles" },
		{ "ModuleRelativePath", "Framework/SGPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGPlayerController_TestPickupSystem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGPlayerController, nullptr, "TestPickupSystem", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGPlayerController_TestPickupSystem_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGPlayerController_TestPickupSystem_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGPlayerController_TestPickupSystem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGPlayerController_TestPickupSystem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGPlayerController::execTestPickupSystem)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TestPickupSystem();
	P_NATIVE_END;
}
// ********** End Class ASGPlayerController Function TestPickupSystem ******************************

// ********** Begin Class ASGPlayerController Function ToggleAllCandles ****************************
struct Z_Construct_UFunction_ASGPlayerController_ToggleAllCandles_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Debug|Candles" },
		{ "ModuleRelativePath", "Framework/SGPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGPlayerController_ToggleAllCandles_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGPlayerController, nullptr, "ToggleAllCandles", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGPlayerController_ToggleAllCandles_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGPlayerController_ToggleAllCandles_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGPlayerController_ToggleAllCandles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGPlayerController_ToggleAllCandles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGPlayerController::execToggleAllCandles)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ToggleAllCandles();
	P_NATIVE_END;
}
// ********** End Class ASGPlayerController Function ToggleAllCandles ******************************

// ********** Begin Class ASGPlayerController Function ToggleFPSDisplay ****************************
struct Z_Construct_UFunction_ASGPlayerController_ToggleFPSDisplay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Framework/SGPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGPlayerController_ToggleFPSDisplay_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGPlayerController, nullptr, "ToggleFPSDisplay", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGPlayerController_ToggleFPSDisplay_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGPlayerController_ToggleFPSDisplay_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGPlayerController_ToggleFPSDisplay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGPlayerController_ToggleFPSDisplay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGPlayerController::execToggleFPSDisplay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ToggleFPSDisplay();
	P_NATIVE_END;
}
// ********** End Class ASGPlayerController Function ToggleFPSDisplay ******************************

// ********** Begin Class ASGPlayerController Function ToggleNetworkStats **************************
struct Z_Construct_UFunction_ASGPlayerController_ToggleNetworkStats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Debug functions\n" },
#endif
		{ "ModuleRelativePath", "Framework/SGPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Debug functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGPlayerController_ToggleNetworkStats_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASGPlayerController, nullptr, "ToggleNetworkStats", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASGPlayerController_ToggleNetworkStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASGPlayerController_ToggleNetworkStats_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ASGPlayerController_ToggleNetworkStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASGPlayerController_ToggleNetworkStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASGPlayerController::execToggleNetworkStats)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ToggleNetworkStats();
	P_NATIVE_END;
}
// ********** End Class ASGPlayerController Function ToggleNetworkStats ****************************

// ********** Begin Class ASGPlayerController ******************************************************
void ASGPlayerController::StaticRegisterNativesASGPlayerController()
{
	UClass* Class = ASGPlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DebugInteractionTrace", &ASGPlayerController::execDebugInteractionTrace },
		{ "DisableGameInput", &ASGPlayerController::execDisableGameInput },
		{ "DropAllPickupCandles", &ASGPlayerController::execDropAllPickupCandles },
		{ "EmergencyTeleportToSafeLocation", &ASGPlayerController::execEmergencyTeleportToSafeLocation },
		{ "EnableGameInput", &ASGPlayerController::execEnableGameInput },
		{ "EnsureProperCameraSetup", &ASGPlayerController::execEnsureProperCameraSetup },
		{ "ExtinguishAllCandles", &ASGPlayerController::execExtinguishAllCandles },
		{ "FixPickupCandleIssues", &ASGPlayerController::execFixPickupCandleIssues },
		{ "ForcePickupNearestCandle", &ASGPlayerController::execForcePickupNearestCandle },
		{ "ForceStandUpFromBench", &ASGPlayerController::execForceStandUpFromBench },
		{ "ForceTestCandleToggle", &ASGPlayerController::execForceTestCandleToggle },
		{ "LightAllCandles", &ASGPlayerController::execLightAllCandles },
		{ "ListAllPickupCandles", &ASGPlayerController::execListAllPickupCandles },
		{ "QuickLoad", &ASGPlayerController::execQuickLoad },
		{ "QuickSave", &ASGPlayerController::execQuickSave },
		{ "ResetCharacterRotation", &ASGPlayerController::execResetCharacterRotation },
		{ "RotateCharacterModel", &ASGPlayerController::execRotateCharacterModel },
		{ "SpawnPickupCandle", &ASGPlayerController::execSpawnPickupCandle },
		{ "SpawnTestCandle", &ASGPlayerController::execSpawnTestCandle },
		{ "TestInputMappings", &ASGPlayerController::execTestInputMappings },
		{ "TestPickupSystem", &ASGPlayerController::execTestPickupSystem },
		{ "ToggleAllCandles", &ASGPlayerController::execToggleAllCandles },
		{ "ToggleFPSDisplay", &ASGPlayerController::execToggleFPSDisplay },
		{ "ToggleNetworkStats", &ASGPlayerController::execToggleNetworkStats },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ASGPlayerController;
UClass* ASGPlayerController::GetPrivateStaticClass()
{
	using TClass = ASGPlayerController;
	if (!Z_Registration_Info_UClass_ASGPlayerController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SGPlayerController"),
			Z_Registration_Info_UClass_ASGPlayerController.InnerSingleton,
			StaticRegisterNativesASGPlayerController,
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
	return Z_Registration_Info_UClass_ASGPlayerController.InnerSingleton;
}
UClass* Z_Construct_UClass_ASGPlayerController_NoRegister()
{
	return ASGPlayerController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASGPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Framework/SGPlayerController.h" },
		{ "ModuleRelativePath", "Framework/SGPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowFPS_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Framework/SGPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGameInputEnabled_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Framework/SGPlayerController.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bShowFPS_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowFPS;
	static void NewProp_bGameInputEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGameInputEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASGPlayerController_DebugInteractionTrace, "DebugInteractionTrace" }, // 1086033367
		{ &Z_Construct_UFunction_ASGPlayerController_DisableGameInput, "DisableGameInput" }, // 3653181052
		{ &Z_Construct_UFunction_ASGPlayerController_DropAllPickupCandles, "DropAllPickupCandles" }, // 4133821981
		{ &Z_Construct_UFunction_ASGPlayerController_EmergencyTeleportToSafeLocation, "EmergencyTeleportToSafeLocation" }, // 1479929423
		{ &Z_Construct_UFunction_ASGPlayerController_EnableGameInput, "EnableGameInput" }, // 532150832
		{ &Z_Construct_UFunction_ASGPlayerController_EnsureProperCameraSetup, "EnsureProperCameraSetup" }, // 343219348
		{ &Z_Construct_UFunction_ASGPlayerController_ExtinguishAllCandles, "ExtinguishAllCandles" }, // 3426960129
		{ &Z_Construct_UFunction_ASGPlayerController_FixPickupCandleIssues, "FixPickupCandleIssues" }, // 273575567
		{ &Z_Construct_UFunction_ASGPlayerController_ForcePickupNearestCandle, "ForcePickupNearestCandle" }, // 1282517558
		{ &Z_Construct_UFunction_ASGPlayerController_ForceStandUpFromBench, "ForceStandUpFromBench" }, // 3864635853
		{ &Z_Construct_UFunction_ASGPlayerController_ForceTestCandleToggle, "ForceTestCandleToggle" }, // 1757903218
		{ &Z_Construct_UFunction_ASGPlayerController_LightAllCandles, "LightAllCandles" }, // 2607296473
		{ &Z_Construct_UFunction_ASGPlayerController_ListAllPickupCandles, "ListAllPickupCandles" }, // 266598314
		{ &Z_Construct_UFunction_ASGPlayerController_QuickLoad, "QuickLoad" }, // 291626661
		{ &Z_Construct_UFunction_ASGPlayerController_QuickSave, "QuickSave" }, // 114790928
		{ &Z_Construct_UFunction_ASGPlayerController_ResetCharacterRotation, "ResetCharacterRotation" }, // 2356471706
		{ &Z_Construct_UFunction_ASGPlayerController_RotateCharacterModel, "RotateCharacterModel" }, // 836268864
		{ &Z_Construct_UFunction_ASGPlayerController_SpawnPickupCandle, "SpawnPickupCandle" }, // 1364235835
		{ &Z_Construct_UFunction_ASGPlayerController_SpawnTestCandle, "SpawnTestCandle" }, // 161903288
		{ &Z_Construct_UFunction_ASGPlayerController_TestInputMappings, "TestInputMappings" }, // 3383149497
		{ &Z_Construct_UFunction_ASGPlayerController_TestPickupSystem, "TestPickupSystem" }, // 2568701454
		{ &Z_Construct_UFunction_ASGPlayerController_ToggleAllCandles, "ToggleAllCandles" }, // 2634106762
		{ &Z_Construct_UFunction_ASGPlayerController_ToggleFPSDisplay, "ToggleFPSDisplay" }, // 2600049387
		{ &Z_Construct_UFunction_ASGPlayerController_ToggleNetworkStats, "ToggleNetworkStats" }, // 2982250596
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASGPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_ASGPlayerController_Statics::NewProp_bShowFPS_SetBit(void* Obj)
{
	((ASGPlayerController*)Obj)->bShowFPS = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASGPlayerController_Statics::NewProp_bShowFPS = { "bShowFPS", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASGPlayerController), &Z_Construct_UClass_ASGPlayerController_Statics::NewProp_bShowFPS_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowFPS_MetaData), NewProp_bShowFPS_MetaData) };
void Z_Construct_UClass_ASGPlayerController_Statics::NewProp_bGameInputEnabled_SetBit(void* Obj)
{
	((ASGPlayerController*)Obj)->bGameInputEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASGPlayerController_Statics::NewProp_bGameInputEnabled = { "bGameInputEnabled", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASGPlayerController), &Z_Construct_UClass_ASGPlayerController_Statics::NewProp_bGameInputEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGameInputEnabled_MetaData), NewProp_bGameInputEnabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASGPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGPlayerController_Statics::NewProp_bShowFPS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGPlayerController_Statics::NewProp_bGameInputEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASGPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASGPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_SocialGolf,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASGPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASGPlayerController_Statics::ClassParams = {
	&ASGPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASGPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASGPlayerController_Statics::PropPointers),
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASGPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ASGPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASGPlayerController()
{
	if (!Z_Registration_Info_UClass_ASGPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASGPlayerController.OuterSingleton, Z_Construct_UClass_ASGPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASGPlayerController.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASGPlayerController);
ASGPlayerController::~ASGPlayerController() {}
// ********** End Class ASGPlayerController ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Framework_SGPlayerController_h__Script_SocialGolf_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASGPlayerController, ASGPlayerController::StaticClass, TEXT("ASGPlayerController"), &Z_Registration_Info_UClass_ASGPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASGPlayerController), 3562333229U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Framework_SGPlayerController_h__Script_SocialGolf_617513854(TEXT("/Script/SocialGolf"),
	Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Framework_SGPlayerController_h__Script_SocialGolf_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_D_Documents_game_SocialGolf_Starter_UE5_6_v2_Source_SocialGolf_Framework_SGPlayerController_h__Script_SocialGolf_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
