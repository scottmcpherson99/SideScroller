// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperSpriteActor.h"
#include "Components/ArrowComponent.h"
#include "Shooter.generated.h"

/**
 * 
 */
UCLASS()
class SIDESCROLLER_API AShooter : public APaperSpriteActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AShooter();


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn", Meta = (MakeEditWidget = true))
		FVector spawnVector;

	UPROPERTY(Category = Sprite, VisibleAnywhere, BlueprintReadOnly, meta = (ExposeFunctionCategories = "Sprite,Rendering,Physics,Components|Sprite", AllowPrivateAccess = "true"))
		class UPaperSpriteComponent* spriteComp;

	class ACharacter* playerCharacter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RayTrace")
		float traceLength;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void ShootArrow();

	void ResetDoOncetimer();

	bool bDoOnce;

	UPROPERTY()
		FTimerHandle resetDoOnce;

	UPROPERTY()
		FTimerHandle shootArrowTimer;

	//enemy to spawn
	UPROPERTY(EditAnywhere, Category = "Type of enemy to spawn")
		TSubclassOf<class ABullet> enemyToSpawn;
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
