// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Components/SphereComponent.h"
#include "MyAIController.generated.h"

/**
 * 
 */
UCLASS()
class CUT1_API AMyAIController : public AAIController
{
	GENERATED_BODY()
	

    // Patrol logic
    void Patrol()
    {
        // Move to the next patrol point
        MoveToLocation(PatrolPoints[CurrentPatrolIndex], AcceptanceRadius);

        // Check if reached the patrol point
        float DistanceToPatrolPoint = FVector::Dist(PatrolPoints[CurrentPatrolIndex], GetPawn()->GetActorLocation());
        if (DistanceToPatrolPoint <= AcceptanceRadius)
        {
            // Move to the next patrol point index
            CurrentPatrolIndex = (CurrentPatrolIndex + 1) % PatrolPoints.Num();
        }
    }


public:

    AMyAIController();

    virtual void Tick(float DeltaTime) override;

protected:
    // Sight distance for the AI to detect the player
    UPROPERTY(EditAnywhere, Category = "AI")
    float SightDistance;

    // Whether the AI is currently chasing the player
    bool bIsChasing;

    // Patrol points for the AI to patrol
    UPROPERTY(EditAnywhere, Category = "AI")
    TArray<FVector> PatrolPoints;

    UPROPERTY(EditAnywhere, Category = "AI")
    float MaxWalkSpeed;

    UPROPERTY(EditAnywhere, Category = "AI")
    float MinAnalogWalkSpeed;

    UPROPERTY(EditAnywhere, Category = "AI")
    float BrakingDecelerationWalking;


    // Index of the current patrol point
    int32 CurrentPatrolIndex;

    // Radius within which the AI considers a point reached
    UPROPERTY(EditAnywhere, Category = "AI")
    float AcceptanceRadius;

   
};
