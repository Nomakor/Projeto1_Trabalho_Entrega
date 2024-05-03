// Copyright Epic Games, Inc. All Rights Reserved.

#include "Cut1GameMode.h"
#include "Cut1Character.h"
#include "UObject/ConstructorHelpers.h"
#include "MyAICharacter.h"
#include "MyAIController.h"

ACut1GameMode::ACut1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
void ACut1GameMode::BeginPlay()
{
    Super::BeginPlay();

    // Spawn the AI character
    AMyAICharacter* NewAICharacter = GetWorld()->SpawnActor<AMyAICharacter>(AMyAICharacter::StaticClass(), SpawnLocation, SpawnRotation);

    // Check if the AI character was successfully spawned
    if (NewAICharacter)
    {
        // Spawn the AI controller
        AMyAIController* NewAIController = GetWorld()->SpawnActor<AMyAIController>(AMyAIController::StaticClass(), SpawnLocation, SpawnRotation);

        // Check if the AI controller was successfully spawned
        if (NewAIController)
        {
            // Possess the AI character with the AI controller
            NewAIController->Possess(NewAICharacter);
        }
        else
        {
            // Handle error: AI controller spawn failed
            UE_LOG(LogTemp, Error, TEXT("Failed to spawn AI controller."));
        }
    }
    else
    {
        // Handle error: AI character spawn failed
        UE_LOG(LogTemp, Error, TEXT("Failed to spawn AI character."));
    }
}

void ACut1GameMode::SpawnAI()
{
}
