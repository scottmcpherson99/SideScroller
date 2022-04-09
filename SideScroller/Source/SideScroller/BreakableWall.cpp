// Fill out your copyright notice in the Description page of Project Settings.


#include "BreakableWall.h"
#include "Components/BoxComponent.h"
#include "PlayerCharacter.h"
#include "Coin.h"

ABreakableWall::ABreakableWall()
{

}

void ABreakableWall::BeginPlay()
{
	Super::BeginPlay();

	TriggerBox->OnComponentBeginOverlap.AddDynamic(this, &ABreakableWall::OnTriggerBoxOverlap);
}

void ABreakableWall::OnTriggerBoxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	APlayerCharacter* playerCharacter = Cast<APlayerCharacter>(OtherActor);

	if (playerCharacter)
	{
		//check for valid world
		UWorld* const world = GetWorld();

		//explode the bomb
		if (world)
		{
			//decrease the timer by 1 every second
			world->GetTimerManager().SetTimer(destroyTimer, this, &ABreakableWall::DeleteWall, 0.1f, false);
		}


	}
}

void ABreakableWall::DeleteWall()
{
	//set the spawn parameters
	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = this;
	SpawnParams.Instigator = GetInstigator();
	FVector spawnVec = GetActorLocation();

	GetWorld()->SpawnActor<ACoin>(dropToSpawn, spawnVec, FRotator(0.0f, 0.0f, 0.0f), SpawnParams);

	Destroy();
}