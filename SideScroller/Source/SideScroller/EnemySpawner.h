// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnemySpawner.generated.h"

UCLASS()
class SIDESCROLLER_API AEnemySpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemySpawner();




	UPROPERTY(EditAnywhere, Category = "Type of enemy to spawn")
		TSubclassOf<class ADumbEnemy> enemyToSpawn;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Collision")
		class UBoxComponent* TriggerBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn", Meta = (MakeEditWidget = true))
		FVector spawnVector;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Spawn")
		class UArrowComponent* spawnArrow;


	UFUNCTION()
		void OnTriggerBoxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	FVector EnemySpawnerVec;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
