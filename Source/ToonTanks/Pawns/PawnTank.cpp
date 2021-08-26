// Fill out your copyright notice in the Description page of Project Settings.

#include "PawnTank.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
// Called when the game starts or when spawned

APawnTank::APawnTank()
{	
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Camera SpringArm"));
	SpringArm->SetupAttachment(RootComponent);

    Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm);
}

void APawnTank::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APawnTank::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APawnTank::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}
