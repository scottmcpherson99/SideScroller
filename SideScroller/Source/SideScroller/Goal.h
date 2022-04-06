// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperSpriteActor.h"
#include "Goal.generated.h"

/**
 * 
 */
UCLASS()
class SIDESCROLLER_API AGoal : public APaperSpriteActor
{
	GENERATED_BODY()

public:
	AGoal();


protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Collision")
		class UBoxComponent* TriggerBox;

	/** Sprite component */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = SpriteComponent, meta = (AllowPrivateAccess = "true"))
		class UPaperFlipbookComponent* spriteComponent;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


	UFUNCTION()
		void OnTriggerBoxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};
