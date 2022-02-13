// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef UNREALMONSTERSHOOTER_UnrealMonsterShooterProjectile_generated_h
#error "UnrealMonsterShooterProjectile.generated.h already included, missing '#pragma once' in UnrealMonsterShooterProjectile.h"
#endif
#define UNREALMONSTERSHOOTER_UnrealMonsterShooterProjectile_generated_h

#define UnrealMonsterShooter_Source_UnrealMonsterShooter_UnrealMonsterShooterProjectile_h_15_SPARSE_DATA
#define UnrealMonsterShooter_Source_UnrealMonsterShooter_UnrealMonsterShooterProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define UnrealMonsterShooter_Source_UnrealMonsterShooter_UnrealMonsterShooterProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define UnrealMonsterShooter_Source_UnrealMonsterShooter_UnrealMonsterShooterProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUnrealMonsterShooterProjectile(); \
	friend struct Z_Construct_UClass_AUnrealMonsterShooterProjectile_Statics; \
public: \
	DECLARE_CLASS(AUnrealMonsterShooterProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealMonsterShooter"), NO_API) \
	DECLARE_SERIALIZER(AUnrealMonsterShooterProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define UnrealMonsterShooter_Source_UnrealMonsterShooter_UnrealMonsterShooterProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAUnrealMonsterShooterProjectile(); \
	friend struct Z_Construct_UClass_AUnrealMonsterShooterProjectile_Statics; \
public: \
	DECLARE_CLASS(AUnrealMonsterShooterProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealMonsterShooter"), NO_API) \
	DECLARE_SERIALIZER(AUnrealMonsterShooterProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define UnrealMonsterShooter_Source_UnrealMonsterShooter_UnrealMonsterShooterProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUnrealMonsterShooterProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUnrealMonsterShooterProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUnrealMonsterShooterProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUnrealMonsterShooterProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUnrealMonsterShooterProjectile(AUnrealMonsterShooterProjectile&&); \
	NO_API AUnrealMonsterShooterProjectile(const AUnrealMonsterShooterProjectile&); \
public:


#define UnrealMonsterShooter_Source_UnrealMonsterShooter_UnrealMonsterShooterProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUnrealMonsterShooterProjectile(AUnrealMonsterShooterProjectile&&); \
	NO_API AUnrealMonsterShooterProjectile(const AUnrealMonsterShooterProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUnrealMonsterShooterProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUnrealMonsterShooterProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUnrealMonsterShooterProjectile)


#define UnrealMonsterShooter_Source_UnrealMonsterShooter_UnrealMonsterShooterProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AUnrealMonsterShooterProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AUnrealMonsterShooterProjectile, ProjectileMovement); }


#define UnrealMonsterShooter_Source_UnrealMonsterShooter_UnrealMonsterShooterProjectile_h_12_PROLOG
#define UnrealMonsterShooter_Source_UnrealMonsterShooter_UnrealMonsterShooterProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealMonsterShooter_Source_UnrealMonsterShooter_UnrealMonsterShooterProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	UnrealMonsterShooter_Source_UnrealMonsterShooter_UnrealMonsterShooterProjectile_h_15_SPARSE_DATA \
	UnrealMonsterShooter_Source_UnrealMonsterShooter_UnrealMonsterShooterProjectile_h_15_RPC_WRAPPERS \
	UnrealMonsterShooter_Source_UnrealMonsterShooter_UnrealMonsterShooterProjectile_h_15_INCLASS \
	UnrealMonsterShooter_Source_UnrealMonsterShooter_UnrealMonsterShooterProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealMonsterShooter_Source_UnrealMonsterShooter_UnrealMonsterShooterProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealMonsterShooter_Source_UnrealMonsterShooter_UnrealMonsterShooterProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	UnrealMonsterShooter_Source_UnrealMonsterShooter_UnrealMonsterShooterProjectile_h_15_SPARSE_DATA \
	UnrealMonsterShooter_Source_UnrealMonsterShooter_UnrealMonsterShooterProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealMonsterShooter_Source_UnrealMonsterShooter_UnrealMonsterShooterProjectile_h_15_INCLASS_NO_PURE_DECLS \
	UnrealMonsterShooter_Source_UnrealMonsterShooter_UnrealMonsterShooterProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALMONSTERSHOOTER_API UClass* StaticClass<class AUnrealMonsterShooterProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealMonsterShooter_Source_UnrealMonsterShooter_UnrealMonsterShooterProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
