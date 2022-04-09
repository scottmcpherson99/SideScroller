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

	TriggerBox->SetWorldLocation(GetActorLocation());
}

void ACoin::OnTriggerBoxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	APlayerCharacter* playerCharacter = Cast<APlayerCharacter>(OtherActor);
	
	if (playerCharacter)
	{

		playerCharacter->CollectCoin();
		Destroy();
	}
}
