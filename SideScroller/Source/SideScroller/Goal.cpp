// Fill out your copyright notice in the Description page of Project Settings.


#include "Goal.h"
#include "SideScrollerGameModeBase.h"
#include "PlayerCharacter.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"
#include "PaperFlipbookComponent.h"

AGoal::AGoal()
{
	TriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComp"));
	TriggerBox->SetupAttachment(RootComponent);


	spriteComponent = CreateDefaultSubobject<UPaperFlipbookComponent>(TEXT("MeshComp"));
	spriteComponent->SetupAttachment(RootComponent);
	spriteComponent->SetEnableGravity(false);
}


void AGoal::BeginPlay()
{
	Super::BeginPlay();

	TriggerBox->OnComponentBeginOverlap.AddDynamic(this, &AGoal::OnTriggerBoxOverlap);
}


void AGoal::OnTriggerBoxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	APlayerCharacter* playerCharacter = Cast<APlayerCharacter>(OtherActor);

	if (playerCharacter != nullptr)
	{
		ASideScrollerGameModeBase* gameMode = Cast<ASideScrollerGameModeBase>(GetWorld()->GetAuthGameMode());

		if (gameMode != nullptr)
		{
			
			UGameplayStatics::OpenLevel(GetWorld(), gameMode->GetNextLevelName(), true);

		}
	}
}