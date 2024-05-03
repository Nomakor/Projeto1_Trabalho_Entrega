// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cut1/MyAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyAIController() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	CUT1_API UClass* Z_Construct_UClass_AMyAIController();
	CUT1_API UClass* Z_Construct_UClass_AMyAIController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Cut1();
// End Cross Module References
	void AMyAIController::StaticRegisterNativesAMyAIController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyAIController);
	UClass* Z_Construct_UClass_AMyAIController_NoRegister()
	{
		return AMyAIController::StaticClass();
	}
	struct Z_Construct_UClass_AMyAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SightDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SightDistance;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PatrolPoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PatrolPoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PatrolPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxWalkSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxWalkSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinAnalogWalkSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinAnalogWalkSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BrakingDecelerationWalking_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BrakingDecelerationWalking;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AcceptanceRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AcceptanceRadius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_Cut1,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyAIController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyAIController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "MyAIController.h" },
		{ "ModuleRelativePath", "MyAIController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyAIController_Statics::NewProp_SightDistance_MetaData[] = {
		{ "Category", "AI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sight distance for the AI to detect the player\n" },
#endif
		{ "ModuleRelativePath", "MyAIController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sight distance for the AI to detect the player" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyAIController_Statics::NewProp_SightDistance = { "SightDistance", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyAIController, SightDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyAIController_Statics::NewProp_SightDistance_MetaData), Z_Construct_UClass_AMyAIController_Statics::NewProp_SightDistance_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyAIController_Statics::NewProp_PatrolPoints_Inner = { "PatrolPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyAIController_Statics::NewProp_PatrolPoints_MetaData[] = {
		{ "Category", "AI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Patrol points for the AI to patrol\n" },
#endif
		{ "ModuleRelativePath", "MyAIController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Patrol points for the AI to patrol" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMyAIController_Statics::NewProp_PatrolPoints = { "PatrolPoints", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyAIController, PatrolPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyAIController_Statics::NewProp_PatrolPoints_MetaData), Z_Construct_UClass_AMyAIController_Statics::NewProp_PatrolPoints_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyAIController_Statics::NewProp_MaxWalkSpeed_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "MyAIController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyAIController_Statics::NewProp_MaxWalkSpeed = { "MaxWalkSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyAIController, MaxWalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyAIController_Statics::NewProp_MaxWalkSpeed_MetaData), Z_Construct_UClass_AMyAIController_Statics::NewProp_MaxWalkSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyAIController_Statics::NewProp_MinAnalogWalkSpeed_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "MyAIController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyAIController_Statics::NewProp_MinAnalogWalkSpeed = { "MinAnalogWalkSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyAIController, MinAnalogWalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyAIController_Statics::NewProp_MinAnalogWalkSpeed_MetaData), Z_Construct_UClass_AMyAIController_Statics::NewProp_MinAnalogWalkSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyAIController_Statics::NewProp_BrakingDecelerationWalking_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "MyAIController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyAIController_Statics::NewProp_BrakingDecelerationWalking = { "BrakingDecelerationWalking", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyAIController, BrakingDecelerationWalking), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyAIController_Statics::NewProp_BrakingDecelerationWalking_MetaData), Z_Construct_UClass_AMyAIController_Statics::NewProp_BrakingDecelerationWalking_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyAIController_Statics::NewProp_AcceptanceRadius_MetaData[] = {
		{ "Category", "AI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Radius within which the AI considers a point reached\n" },
#endif
		{ "ModuleRelativePath", "MyAIController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Radius within which the AI considers a point reached" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyAIController_Statics::NewProp_AcceptanceRadius = { "AcceptanceRadius", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyAIController, AcceptanceRadius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyAIController_Statics::NewProp_AcceptanceRadius_MetaData), Z_Construct_UClass_AMyAIController_Statics::NewProp_AcceptanceRadius_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyAIController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyAIController_Statics::NewProp_SightDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyAIController_Statics::NewProp_PatrolPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyAIController_Statics::NewProp_PatrolPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyAIController_Statics::NewProp_MaxWalkSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyAIController_Statics::NewProp_MinAnalogWalkSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyAIController_Statics::NewProp_BrakingDecelerationWalking,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyAIController_Statics::NewProp_AcceptanceRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyAIController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyAIController_Statics::ClassParams = {
		&AMyAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMyAIController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyAIController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyAIController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyAIController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMyAIController()
	{
		if (!Z_Registration_Info_UClass_AMyAIController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyAIController.OuterSingleton, Z_Construct_UClass_AMyAIController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyAIController.OuterSingleton;
	}
	template<> CUT1_API UClass* StaticClass<AMyAIController>()
	{
		return AMyAIController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyAIController);
	AMyAIController::~AMyAIController() {}
	struct Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_Cut_Cut1_Source_Cut1_MyAIController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_Cut_Cut1_Source_Cut1_MyAIController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyAIController, AMyAIController::StaticClass, TEXT("AMyAIController"), &Z_Registration_Info_UClass_AMyAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyAIController), 549453863U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_Cut_Cut1_Source_Cut1_MyAIController_h_3961325332(TEXT("/Script/Cut1"),
		Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_Cut_Cut1_Source_Cut1_MyAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_Cut_Cut1_Source_Cut1_MyAIController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
