// Copyright Epic Games, Inc. All Rights Reserved.

#include "UnrealMonsterShooterGameMode.h"
#include "UnrealMonsterShooterHUD.h"
#include "UnrealMonsterShooterCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnrealMonsterShooterGameMode::AUnrealMonsterShooterGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AUnrealMonsterShooterHUD::StaticClass();
}
