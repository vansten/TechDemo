// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Character.h"
#include "TechDemoPlayerCharacter.generated.h"

UCLASS()
class TECHDEMO_API ATechDemoPlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, Category = "Camera")
	UCameraComponent* TPPCamera;

	UPROPERTY(EditAnywhere, Category = "Camera")
	USpringArmComponent* TPPCameraArm;

public:
	// Sets default values for this character's properties
	ATechDemoPlayerCharacter();
};
