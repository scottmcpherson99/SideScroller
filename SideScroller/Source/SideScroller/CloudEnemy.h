// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemyBase.h"
#include "CloudEnemy.generated.h"

/**
 * 
 */
UCLASS()
class SIDESCROLLER_API ACloudEnemy : public AEnemyBase
{
	GENERATED_BODY()

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	bool bPause;

	//enemy to spawn
	UPROPERTY(EditAnywhere, Category = "Type of enemy to spawn")
		TSubclassOf<class ADumbEnemy> enemyToSpawn;


protected:
	ACloudEnemy();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;



	FTimerHandle enemySpawnTimer;

	void SpawnEnemy();
};
