// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cut1/Cut1GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCut1GameMode() {}
// Cross Module References
	CUT1_API UClass* Z_Construct_UClass_ACut1GameMode();
	CUT1_API UClass* Z_Construct_UClass_ACut1GameMode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Cut1();
// End Cross Module References
	void ACut1GameMode::StaticRegisterNativesACut1GameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACut1GameMode);
	UClass* Z_Construct_UClass_ACut1GameMode_NoRegister()
	{
		return ACut1GameMode::StaticClass();
	}
	struct Z_Construct_UClass_ACut1GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACut1GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Cut1,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACut1GameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACut1GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Cut1GameMode.h" },
		{ "ModuleRelativePath", "Cut1GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACut1GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACut1GameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACut1GameMode_Statics::ClassParams = {
		&ACut1GameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACut1GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ACut1GameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ACut1GameMode()
	{
		if (!Z_Registration_Info_UClass_ACut1GameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACut1GameMode.OuterSingleton, Z_Construct_UClass_ACut1GameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACut1GameMode.OuterSingleton;
	}
	template<> CUT1_API UClass* StaticClass<ACut1GameMode>()
	{
		return ACut1GameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACut1GameMode);
	ACut1GameMode::~ACut1GameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_Cut_Cut1_Source_Cut1_Cut1GameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_Cut_Cut1_Source_Cut1_Cut1GameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACut1GameMode, ACut1GameMode::StaticClass, TEXT("ACut1GameMode"), &Z_Registration_Info_UClass_ACut1GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACut1GameMode), 3127524882U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_Cut_Cut1_Source_Cut1_Cut1GameMode_h_2625298843(TEXT("/Script/Cut1"),
		Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_Cut_Cut1_Source_Cut1_Cut1GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_Cut_Cut1_Source_Cut1_Cut1GameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
