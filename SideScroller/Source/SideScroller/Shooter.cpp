// Fill out your copyright notice in the Description page of Project Settings.


#include "Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "Engine/EngineTypes.h"
#include "PaperSpriteComponent.h"
#include "PlayerCharacter.h"	
#include "DrawDebugHelpers.h"
#include "EnemyBase.h"
#include "Bullet.h"
#include "Shooter.h"

// Sets default values
AShooter::AShooter()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	spriteComp = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("SpriteComp"));
	spriteComp->SetupAttachment(RootComponent);

	bDoOnce = true;

	traceLength = 500;
}

void AShooter::BeginPlay()
{
	Super::BeginPlay();

	playerCharacter = Cast<APlayerCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0));
}

void AShooter::ShootArrow()
{
	UE_LOG(LogTemp, Warning, TEXT("Player Detected!"));
}

void AShooter::ResetDoOncetimer()
{
	bDoOnce = true;
	GetWorldTimerManager().ClearTimer(resetDoOnce);
}

void AShooter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	FVector Start = spriteComp->GetComponentLocation();
	FVector End = spriteComp->GetComponentLocation() + spawnVector;

	
	FHitResult Hit;
	FCollisionQueryParams TraceParams;
	bool bHit = GetWorld()->LineTraceSingleByChannel(Hit, Start, End, ECC_Pawn, TraceParams);
	DrawDebugLine(GetWorld(), Start, End, FColor::Orange, false, 0.1f);

	if (bHit)
	{
		
		if (Hit.GetActor() == UGameplayStatics::GetPlayerCharacter(GetWorld(), 0))
		{
			GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Orange, FString::Printf(TEXT("Trace Hit: Player")));

			//set the spawn parameters
			FActorSpawnParameters SpawnParams;
			SpawnParams.Owner = this;
			SpawnParams.Instigator = GetInstigator();

			FVector EnemySpawnerVec;
			EnemySpawnerVec = FVector(GetActorLocation().X - 150.f, GetActorLocation().Y, GetActorLocation().Z);

			GetWorld()->SpawnActor<ABullet>(enemyToSpawn, EnemySpawnerVec, FRotator(0.0f, 0.0f, 0.0f), SpawnParams);
		}
	}
	bHit = false;
	
}
