// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BreakableTile.h"
#include "BreakableWall.generated.h"

/**
 * 
 */
UCLASS()
class SIDESCROLLER_API ABreakableWall : public ABreakableTile
{
	GENERATED_BODY()
	
public:
	ABreakableWall();


	UPROPERTY(EditAnywhere, Category = "Type of drop to spawn")
		TSubclassOf<class ACoin> dropToSpawn;

protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
		void OnTriggerBoxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	void DeleteWall();

	FTimerHandle destroyTimer;
};
