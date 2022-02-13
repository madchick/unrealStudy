// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealSideRunnerCPP/UnrealSideRunnerCPPGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealSideRunnerCPPGameMode() {}
// Cross Module References
	UNREALSIDERUNNERCPP_API UClass* Z_Construct_UClass_AUnrealSideRunnerCPPGameMode_NoRegister();
	UNREALSIDERUNNERCPP_API UClass* Z_Construct_UClass_AUnrealSideRunnerCPPGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_UnrealSideRunnerCPP();
// End Cross Module References
	void AUnrealSideRunnerCPPGameMode::StaticRegisterNativesAUnrealSideRunnerCPPGameMode()
	{
	}
	UClass* Z_Construct_UClass_AUnrealSideRunnerCPPGameMode_NoRegister()
	{
		return AUnrealSideRunnerCPPGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AUnrealSideRunnerCPPGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUnrealSideRunnerCPPGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealSideRunnerCPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealSideRunnerCPPGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "UnrealSideRunnerCPPGameMode.h" },
		{ "ModuleRelativePath", "UnrealSideRunnerCPPGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnrealSideRunnerCPPGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnrealSideRunnerCPPGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUnrealSideRunnerCPPGameMode_Statics::ClassParams = {
		&AUnrealSideRunnerCPPGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AUnrealSideRunnerCPPGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUnrealSideRunnerCPPGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUnrealSideRunnerCPPGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUnrealSideRunnerCPPGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUnrealSideRunnerCPPGameMode, 2166357824);
	template<> UNREALSIDERUNNERCPP_API UClass* StaticClass<AUnrealSideRunnerCPPGameMode>()
	{
		return AUnrealSideRunnerCPPGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUnrealSideRunnerCPPGameMode(Z_Construct_UClass_AUnrealSideRunnerCPPGameMode, &AUnrealSideRunnerCPPGameMode::StaticClass, TEXT("/Script/UnrealSideRunnerCPP"), TEXT("AUnrealSideRunnerCPPGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnrealSideRunnerCPPGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
