// Copyright Epic Games, Inc. All Rights Reserved.

#include "UnrealSideRunnerCPPGameMode.h"
#include "UnrealSideRunnerCPPCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnrealSideRunnerCPPGameMode::AUnrealSideRunnerCPPGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
