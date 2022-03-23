// Fill out your copyright notice in the Description page of Project Settings.


#include "DeathBox.h"
#include "PlayerCharacter.h"
#include "Components/BoxComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ADeathBox::ADeathBox()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	TriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComp"));
	TriggerBox->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void ADeathBox::BeginPlay()
{
	Super::BeginPlay();

	TriggerBox->OnComponentBeginOverlap.AddDynamic(this, &ADeathBox::OnTriggerBoxOverlap);
}

void ADeathBox::OnTriggerBoxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	APlayerCharacter* playerCharacter = Cast<APlayerCharacter>(OtherActor);

	if (playerCharacter)
	{
		if (playerCharacter->GetLives() > 0)
		{
			playerCharacter->IncrementLives(-1);
			UGameplayStatics::OpenLevel(GetWorld(), FName(UGameplayStatics::GetCurrentLevelName(GetWorld(), true)));
		}
		else
		{
			UKismetSystemLibrary::QuitGame(GetWorld(), UGameplayStatics::GetPlayerController(GetWorld(), 0), EQuitPreference::Quit, true);
		}
	}
}

// Called every frame
void ADeathBox::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

