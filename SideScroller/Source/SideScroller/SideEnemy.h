// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemyBase.h"
#include "SideEnemy.generated.h"

/**
 * 
 */
UCLASS()
class SIDESCROLLER_API ASideEnemy : public AEnemyBase
{
	GENERATED_BODY()

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
