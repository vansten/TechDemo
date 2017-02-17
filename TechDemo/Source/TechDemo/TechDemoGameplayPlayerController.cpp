// Fill out your copyright notice in the Description page of Project Settings.

#include "TechDemo.h"
#include "TechDemoGameplayPlayerController.h"
#include "TechDemoPlayerCharacter.h"

ATechDemoGameplayPlayerController::ATechDemoGameplayPlayerController() : Super()
{
	AutoReceiveInput = EAutoReceiveInput::Player0;
	PrimaryActorTick.bCanEverTick = true;
}

void ATechDemoGameplayPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
	check(InputComponent && "How the fuck InputComponent is null pointer?!");

	InputComponent->BindAxis("MoveForward", this, &ATechDemoGameplayPlayerController::MoveForward);
	InputComponent->BindAxis("MoveRight", this, &ATechDemoGameplayPlayerController::MoveRight);
	InputComponent->BindAxis("LookHorizontal", this, &ATechDemoGameplayPlayerController::LookHorizontal);
	InputComponent->BindAxis("LookVertical", this, &ATechDemoGameplayPlayerController::LookVertical);

	InputComponent->BindAction("Interact", EInputEvent::IE_Released, this, &ATechDemoGameplayPlayerController::Interact);
}

void ATechDemoGameplayPlayerController::Tick(float DeltaSeconds)
{
	/* TODO:
	 * Look for interactable objects and/or talkable ai characters
	 */
}

void ATechDemoGameplayPlayerController::MoveForward(float Value)
{
	ATechDemoPlayerCharacter* playerPawn = Cast<ATechDemoPlayerCharacter>(GetControlledPawn());
	if(playerPawn)
	{
		playerPawn->AddMovementInput(FRotationMatrix(GetControlRotation()).GetUnitAxis(EAxis::X), Value);
	}
}

void ATechDemoGameplayPlayerController::MoveRight(float Value)
{
	ATechDemoPlayerCharacter* playerPawn = Cast<ATechDemoPlayerCharacter>(GetControlledPawn());
	if(playerPawn)
	{
		playerPawn->AddMovementInput(FRotationMatrix(GetControlRotation()).GetUnitAxis(EAxis::Y), Value);
	}
}

void ATechDemoGameplayPlayerController::LookVertical(float Value)
{
	AddPitchInput(Value);
}

void ATechDemoGameplayPlayerController::LookHorizontal(float Value)
{
	AddYawInput(Value);
}

void ATechDemoGameplayPlayerController::Interact()
{
	/* TODO:
	 * Check if some interactables and/or talkable ai character is in range and Interact with them
	 */
}