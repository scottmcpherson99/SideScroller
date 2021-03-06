// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyBase.h"
#include "Components/BoxComponent.h"
#include "PlayerCharacter.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "Wall.h"

AEnemyBase::AEnemyBase()
{
	TriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComp"));
	TriggerBox->SetupAttachment(RootComponent);

	movementSpeed = -50.f;

}

void AEnemyBase::BeginPlay()
{
	Super::BeginPlay();

	TriggerBox->OnComponentBeginOverlap.AddDynamic(this, &AEnemyBase::OnTriggerBoxOverlap);


	playerCharacter = Cast<APlayerCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0));
}


void AEnemyBase::OnTriggerBoxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//APlayerCharacter* playerCharacter = Cast<APlayerCharacter>(OtherActor);

	if (playerCharacter == OtherActor)
	{
		playerCharacter->PlayerDeath();
	}

	else
	{
		AWall* tile = Cast<AWall>(OtherActor);

		if (tile)
		{
			if (bForward == true)
			{
				bForward = false;
			}
			else if (bForward == false)
			{
				bForward = true;
			}
			movementSpeed *= -1;
			RootComponent->AddLocalRotation(FQuat(FVector(0.0f, 0.0f, 1.0f), 3.14));

		}
	}
}