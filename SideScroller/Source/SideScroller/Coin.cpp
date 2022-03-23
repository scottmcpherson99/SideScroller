// Fill out your copyright notice in the Description page of Project Settings.


#include "Coin.h"
#include "PlayerCharacter.h"
#include "Components/BoxComponent.h"

ACoin::ACoin()
{
	
}

void ACoin::BeginPlay()
{
	Super::BeginPlay();

	TriggerBox->OnComponentBeginOverlap.AddDynamic(this, &ACoin::OnTriggerBoxOverlap);
}

void ACoin::OnTriggerBoxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	APlayerCharacter* playerCharacter = Cast<APlayerCharacter>(OtherActor);
	
	UE_LOG(LogTemp, Warning, TEXT("Overlap Occured, Checking if it's a player."));

	if (playerCharacter)
	{
		UE_LOG(LogTemp, Warning, TEXT("Overlap is a player."));

		playerCharacter->CollectCoin();
		Destroy();
	}
}
