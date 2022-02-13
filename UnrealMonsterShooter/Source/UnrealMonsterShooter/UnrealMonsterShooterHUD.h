// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "UnrealMonsterShooterHUD.generated.h"

UCLASS()
class AUnrealMonsterShooterHUD : public AHUD
{
	GENERATED_BODY()

public:
	AUnrealMonsterShooterHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

