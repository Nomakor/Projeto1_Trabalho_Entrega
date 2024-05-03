// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Cut1GameMode.generated.h"

UCLASS(minimalapi)
class ACut1GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ACut1GameMode();

    // Called when the game starts
    virtual void BeginPlay() override;

protected:
    // Spawns AI character and controller
    void SpawnAI();

    // Location and rotation to spawn AI
    FVector SpawnLocation;
    FRotator SpawnRotation;
};



