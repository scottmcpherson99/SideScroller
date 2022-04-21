// Fill out your copyright notice in the Description page of Project Settings.


#include "CloudEnemy.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "PlayerCharacter.h"
#include "DumbEnemy.h"

ACloudEnemy::ACloudEnemy()
{
	
}

void ACloudEnemy::BeginPlay()
{
	Super::BeginPlay();
	GetWorld()->GetTimerManager().SetTimer(enemySpawnTimer, this, &ACloudEnemy::SpawnEnemy, 5.0, true);
}

void ACloudEnemy::Tick(float DeltaTime)
{
	float XDirection, ZDirection;

	if (playerCharacter->GetActorLocation().X > GetActorLocation().X)
	{
		XDirection = -1;
	}
	else
	{
		XDirection = 1;
	}

	ZDirection = 500 - (GetActorLocation().Z - playerCharacter->GetActorLocation().Z);
	AddMovementInput(FVector(movementSpeed * DeltaTime * XDirection, 0.0f, 0.0f));
	SetActorLocation(FVector(GetActorLocation().X, GetActorLocation().Y, playerCharacter->GetActorLocation().Z + 450));
}




	

void ACloudEnemy::SpawnEnemy()
{
	UWorld* world = GetWorld();

	if (world)
	{
		//set the spawn parameters
		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = this;
		SpawnParams.Instigator = GetInstigator();
		FVector EnemySpawnerVec;

		EnemySpawnerVec = FVector(GetActorLocation().X, GetActorLocation().Y, GetActorLocation().Z - 100);

		if (enemyToSpawn != nullptr)
		{
			world->SpawnActor<ADumbEnemy>(enemyToSpawn, EnemySpawnerVec, FRotator(0.0f, 0.0f, 0.0f), SpawnParams);
		}
	}
}