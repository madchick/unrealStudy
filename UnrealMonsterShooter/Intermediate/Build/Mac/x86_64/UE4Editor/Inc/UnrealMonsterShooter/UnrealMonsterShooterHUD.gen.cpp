// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealMonsterShooter/UnrealMonsterShooterHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealMonsterShooterHUD() {}
// Cross Module References
	UNREALMONSTERSHOOTER_API UClass* Z_Construct_UClass_AUnrealMonsterShooterHUD_NoRegister();
	UNREALMONSTERSHOOTER_API UClass* Z_Construct_UClass_AUnrealMonsterShooterHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_UnrealMonsterShooter();
// End Cross Module References
	void AUnrealMonsterShooterHUD::StaticRegisterNativesAUnrealMonsterShooterHUD()
	{
	}
	UClass* Z_Construct_UClass_AUnrealMonsterShooterHUD_NoRegister()
	{
		return AUnrealMonsterShooterHUD::StaticClass();
	}
	struct Z_Construct_UClass_AUnrealMonsterShooterHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUnrealMonsterShooterHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealMonsterShooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealMonsterShooterHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "UnrealMonsterShooterHUD.h" },
		{ "ModuleRelativePath", "UnrealMonsterShooterHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnrealMonsterShooterHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnrealMonsterShooterHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUnrealMonsterShooterHUD_Statics::ClassParams = {
		&AUnrealMonsterShooterHUD::StaticClass,
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
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AUnrealMonsterShooterHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUnrealMonsterShooterHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUnrealMonsterShooterHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUnrealMonsterShooterHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUnrealMonsterShooterHUD, 3697351932);
	template<> UNREALMONSTERSHOOTER_API UClass* StaticClass<AUnrealMonsterShooterHUD>()
	{
		return AUnrealMonsterShooterHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUnrealMonsterShooterHUD(Z_Construct_UClass_AUnrealMonsterShooterHUD, &AUnrealMonsterShooterHUD::StaticClass, TEXT("/Script/UnrealMonsterShooter"), TEXT("AUnrealMonsterShooterHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnrealMonsterShooterHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
