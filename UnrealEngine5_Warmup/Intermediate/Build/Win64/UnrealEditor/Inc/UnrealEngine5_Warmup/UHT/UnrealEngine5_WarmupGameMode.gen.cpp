// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEngine5_Warmup/UnrealEngine5_WarmupGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealEngine5_WarmupGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UNREALENGINE5_WARMUP_API UClass* Z_Construct_UClass_AUnrealEngine5_WarmupGameMode();
	UNREALENGINE5_WARMUP_API UClass* Z_Construct_UClass_AUnrealEngine5_WarmupGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEngine5_Warmup();
// End Cross Module References
	void AUnrealEngine5_WarmupGameMode::StaticRegisterNativesAUnrealEngine5_WarmupGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUnrealEngine5_WarmupGameMode);
	UClass* Z_Construct_UClass_AUnrealEngine5_WarmupGameMode_NoRegister()
	{
		return AUnrealEngine5_WarmupGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AUnrealEngine5_WarmupGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUnrealEngine5_WarmupGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEngine5_Warmup,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUnrealEngine5_WarmupGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealEngine5_WarmupGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "UnrealEngine5_WarmupGameMode.h" },
		{ "ModuleRelativePath", "UnrealEngine5_WarmupGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnrealEngine5_WarmupGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnrealEngine5_WarmupGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUnrealEngine5_WarmupGameMode_Statics::ClassParams = {
		&AUnrealEngine5_WarmupGameMode::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUnrealEngine5_WarmupGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AUnrealEngine5_WarmupGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AUnrealEngine5_WarmupGameMode()
	{
		if (!Z_Registration_Info_UClass_AUnrealEngine5_WarmupGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUnrealEngine5_WarmupGameMode.OuterSingleton, Z_Construct_UClass_AUnrealEngine5_WarmupGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AUnrealEngine5_WarmupGameMode.OuterSingleton;
	}
	template<> UNREALENGINE5_WARMUP_API UClass* StaticClass<AUnrealEngine5_WarmupGameMode>()
	{
		return AUnrealEngine5_WarmupGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnrealEngine5_WarmupGameMode);
	AUnrealEngine5_WarmupGameMode::~AUnrealEngine5_WarmupGameMode() {}
	struct Z_CompiledInDeferFile_FID_UnrealEngine5__UnrealEngine5_Warmup_UnrealEngine5_Warmup_Source_UnrealEngine5_Warmup_UnrealEngine5_WarmupGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5__UnrealEngine5_Warmup_UnrealEngine5_Warmup_Source_UnrealEngine5_Warmup_UnrealEngine5_WarmupGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AUnrealEngine5_WarmupGameMode, AUnrealEngine5_WarmupGameMode::StaticClass, TEXT("AUnrealEngine5_WarmupGameMode"), &Z_Registration_Info_UClass_AUnrealEngine5_WarmupGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUnrealEngine5_WarmupGameMode), 579297474U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5__UnrealEngine5_Warmup_UnrealEngine5_Warmup_Source_UnrealEngine5_Warmup_UnrealEngine5_WarmupGameMode_h_1446849881(TEXT("/Script/UnrealEngine5_Warmup"),
		Z_CompiledInDeferFile_FID_UnrealEngine5__UnrealEngine5_Warmup_UnrealEngine5_Warmup_Source_UnrealEngine5_Warmup_UnrealEngine5_WarmupGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5__UnrealEngine5_Warmup_UnrealEngine5_Warmup_Source_UnrealEngine5_Warmup_UnrealEngine5_WarmupGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
