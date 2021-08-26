// Fill out your copyright notice in the Description page of Project Settings.


#include "PawnBase.h"
#include "Components/CapsuleComponent.h"
// Sets default values
APawnBase::APawnBase()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	CapsuleComp = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule Component"));
	//set as root component in hierarchy
	RootComponent = CapsuleComp;
	
	BodyBaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Base Mesh"));
	BodyBaseMesh->SetupAttachment(RootComponent);

	BodyTurretMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Turret Mesh"));
	BodyTurretMesh->SetupAttachment(BodyBaseMesh);

	ProjectileSpawnPosition = CreateDefaultSubobject<USceneComponent>("Projectile Spawn Position");
	ProjectileSpawnPosition->SetupAttachment(BodyTurretMesh);	
}

