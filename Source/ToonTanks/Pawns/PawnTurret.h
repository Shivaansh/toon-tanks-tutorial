// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PawnBase.h"
#include "PawnTurret.generated.h"

/**
 * 
 */
UCLASS()
class TOONTANKS_API APawnTurret : public APawnBase
{
	GENERATED_BODY()

	public:
		// APawnTurret();
		// Called every frame
		virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input


	private:

		UPROPERTY(EditAnywhere, BluePrintReadWrite, Category = "Combat", meta = (AllowPrivateAccess = "true")) 
		float fireRate = 2.0f;

		void CheckFireCondition();

		FTimerHandle FireRateTimerHandle;

	protected:

		virtual void BeginPlay() override;

	
};
