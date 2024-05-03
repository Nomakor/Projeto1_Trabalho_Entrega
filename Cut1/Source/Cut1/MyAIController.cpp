// Fill out your copyright notice in the Description page of Project Settings.


#include "MyAIController.h"
#include "Cut1Character.h" // Assuming this is the player character class
#include "Engine/World.h"
#include "GameFramework/CharacterMovementComponent.h"

// Constructor
AMyAIController::AMyAIController()
{
    // Set some default values
    MaxWalkSpeed = 500.f; //Max Walk Speed
    MinAnalogWalkSpeed = 20.f; // Min Walk Speed
    BrakingDecelerationWalking = 2000.f; //Stopping Decel When Walking
    SightDistance = 2000.0f; // Maximum distance at which the AI can see the player
    bIsChasing = false;
    PatrolPoints.Add(FVector(0, 0, 0)); // Add patrol points here, e.g., (0,0,0), (1000,0,0), etc.
    CurrentPatrolIndex = 0;
}

// Called every frame
void AMyAIController::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // Get the player character
    ACut1Character* PlayerCharacter = Cast<ACut1Character>(GetWorld()->GetFirstPlayerController()->GetPawn());
    if (!PlayerCharacter)
    {
        // Player character not found, do nothing
        return;
    }

    // Calculate distance to the player
    float DistanceToPlayer = FVector::Dist(PlayerCharacter->GetActorLocation(), GetPawn()->GetActorLocation());

    // Check if the player is within sight distance
    if (DistanceToPlayer <= SightDistance)
    {
        // Player is within sight distance, start chasing
        bIsChasing = true;
    }
    else
    {
        // Player is not within sight distance, stop chasing
        bIsChasing = false;
    }

    // If chasing, move towards the player
    if (bIsChasing)
    {
        MoveToActor(PlayerCharacter, AcceptanceRadius); // Move towards the player
    }
    else
    {
        // Stop moving
        StopMovement();

        // If not chasing, return to patrol state
        Patrol();
    }
}

