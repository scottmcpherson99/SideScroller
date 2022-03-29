// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemySpawner.h"
#include "Components/BoxComponent.h"
#include "DumbEnemy.h"
#include "PlayerCharacter.h"
#include "Components/ArrowComponent.h"

// Sets default values
AEnemySpawner::AEnemySpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	TriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComp"));
	TriggerBox->SetupAttachment(RootComponent);

	spawnArrow = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrowComp"));
	spawnArrow->SetupAttachment(TriggerBox);
}

// Called when the game starts or when spawned
void AEnemySpawner::BeginPlay()
{
	Super::BeginPlay();

	TriggerBox->OnComponentBeginOverlap.AddDynamic(this, &AEnemySpawner::OnTriggerBoxOverlap);

	spawnArrow->SetWorldLocation(FVector(spawnVector.X + TriggerBox->GetComponentLocation().X, spawnVector.Y + TriggerBox->GetComponentLocation().Y, spawnVector.Z + TriggerBox->GetComponentLocation().Z));
	EnemySpawnerVec = FVector(spawnVector.X + TriggerBox->GetComponentLocation().X, spawnVector.Y + TriggerBox->GetComponentLocation().Y, spawnVector.Z + TriggerBox->GetComponentLocation().Z);
}

// Called every frame
void AEnemySpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEnemySpawner::OnTriggerBoxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{

	APlayerCharacter* playerCharacter = Cast<APlayerCharacter>(OtherActor);

	if (playerCharacter)
	{
		UWorld* world = GetWorld();

		if (world)
		{
			//set the spawn parameters
			FActorSpawnParameters SpawnParams;
			SpawnParams.Owner = this;
			SpawnParams.Instigator = GetInstigator();

			world->SpawnActor<ADumbEnemy>(enemyToSpawn, EnemySpawnerVec, FRotator(0.0f, 0.0f, 0.0f), SpawnParams);
		}
	}
}

