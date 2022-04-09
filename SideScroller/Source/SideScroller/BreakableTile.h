// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperSpriteActor.h"
#include "BreakableTile.generated.h"

/**
 * 
 */
UCLASS()
class SIDESCROLLER_API ABreakableTile : public APaperSpriteActor
{
	GENERATED_BODY()
	
public:
	ABreakableTile();
protected:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Collision")
		class UBoxComponent* TriggerBox;
};
