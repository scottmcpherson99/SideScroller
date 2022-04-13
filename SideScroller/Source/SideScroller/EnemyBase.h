// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperCharacter.h"
#include "EnemyBase.generated.h"

/**
 * 
 */
UCLASS()
class SIDESCROLLER_API AEnemyBase : public APaperCharacter
{
	GENERATED_BODY()
public:
		AEnemyBase();

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
			float movementSpeed;

		bool bForward = true;
protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Collision")
		class UBoxComponent* TriggerBox;


	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


	UFUNCTION()
		void OnTriggerBoxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);


};
