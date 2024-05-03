// Fill out your copyright notice in the Description page of Project Settings.


#include "MyAICharacter.h"

AMyAICharacter::AMyAICharacter()
{
    // Set this character to call Tick() every frame
    PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AMyAICharacter::BeginPlay()
{
    Super::BeginPlay();
}

// Called every frame
void AMyAICharacter::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // Add any AI character specific logic here
}

