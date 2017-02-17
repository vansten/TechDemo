// Fill out your copyright notice in the Description page of Project Settings.

#include "TechDemo.h"
#include "TechDemoPlayerCharacter.h"


// Sets default values
ATechDemoPlayerCharacter::ATechDemoPlayerCharacter()
{
	TPPCameraArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("TPP Camera Arm"));
	TPPCameraArm->SetupAttachment(GetMesh());
	TPPCameraArm->bUsePawnControlRotation = true;
	TPPCameraArm->TargetArmLength = 350.0f;

	TPPCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("TPP Camera"));
	TPPCamera->SetupAttachment(TPPCameraArm);

	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;
	bUseControllerRotationYaw = false;

	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f);
	GetCharacterMovement()->bOrientRotationToMovement = true;
}