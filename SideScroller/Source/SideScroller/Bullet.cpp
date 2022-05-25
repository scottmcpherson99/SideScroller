// Fill out your copyright notice in the Description page of Project Settings.


#include "Bullet.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "PlayerCharacter.h"
#include "Wall.h"


void ABullet::Tick(float DeltaTime)
{
	AddMovementInput(FVector(movementSpeed * DeltaTime, 0.0f, 0.0f));
}

void ABullet::BeginPlay()
{
	Super::BeginPlay();
	GetCharacterMovement()->GravityScale = 0.f;
}

void ABullet::OnTriggerBoxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{

	//APlayerCharacter* playerCharacter = Cast<APlayerCharacter>(OtherActor);
	playerCharacter = Cast<APlayerCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0));
	
	if (playerCharacter == OtherActor)
	{
		playerCharacter->PlayerDeath();
	}

	else
	{
		AWall* tile = Cast<AWall>(OtherActor);

		if (tile)
		{
			Destroy(true, false);
		}
	}
}
