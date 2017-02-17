// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/PlayerController.h"
#include "TechDemoGameplayPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class TECHDEMO_API ATechDemoGameplayPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	ATechDemoGameplayPlayerController();

	virtual void SetupInputComponent() override;

	virtual void Tick(float DeltaSeconds) override;

protected:
	void MoveForward(float Value);
	void MoveRight(float Value);
	void LookVertical(float Value);
	void LookHorizontal(float Value);

	void Interact();
};
