// Fill out your copyright notice in the Description page of Project Settings.

#include "TechDemo.h"
#include "TechDemoTalkableAICharacter.h"


// Sets default values
ATechDemoTalkableAICharacter::ATechDemoTalkableAICharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATechDemoTalkableAICharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATechDemoTalkableAICharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ATechDemoTalkableAICharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

