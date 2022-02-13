// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealMonsterShooter/UnrealMonsterShooterGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealMonsterShooterGameMode() {}
// Cross Module References
	UNREALMONSTERSHOOTER_API UClass* Z_Construct_UClass_AUnrealMonsterShooterGameMode_NoRegister();
	UNREALMONSTERSHOOTER_API UClass* Z_Construct_UClass_AUnrealMonsterShooterGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_UnrealMonsterShooter();
// End Cross Module References
	void AUnrealMonsterShooterGameMode::StaticRegisterNativesAUnrealMonsterShooterGameMode()
	{
	}
	UClass* Z_Construct_UClass_AUnrealMonsterShooterGameMode_NoRegister()
	{
		return AUnrealMonsterShooterGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AUnrealMonsterShooterGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUnrealMonsterShooterGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealMonsterShooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealMonsterShooterGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "UnrealMonsterShooterGameMode.h" },
		{ "ModuleRelativePath", "UnrealMonsterShooterGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnrealMonsterShooterGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnrealMonsterShooterGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUnrealMonsterShooterGameMode_Statics::ClassParams = {
		&AUnrealMonsterShooterGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AUnrealMonsterShooterGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUnrealMonsterShooterGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUnrealMonsterShooterGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUnrealMonsterShooterGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUnrealMonsterShooterGameMode, 4029739809);
	template<> UNREALMONSTERSHOOTER_API UClass* StaticClass<AUnrealMonsterShooterGameMode>()
	{
		return AUnrealMonsterShooterGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUnrealMonsterShooterGameMode(Z_Construct_UClass_AUnrealMonsterShooterGameMode, &AUnrealMonsterShooterGameMode::StaticClass, TEXT("/Script/UnrealMonsterShooter"), TEXT("AUnrealMonsterShooterGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnrealMonsterShooterGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
