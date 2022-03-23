// Fill out your copyright notice in the Description page of Project Settings.


#include "Collectable.h"
#include "PaperFlipbookComponent.h"
#include "Components/BoxComponent.h"

// Sets default values
ACollectable::ACollectable()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	spriteComponent = CreateDefaultSubobject<UPaperFlipbookComponent>(TEXT("MeshComp"));
	spriteComponent->SetupAttachment(RootComponent);
	spriteComponent->SetEnableGravity(false);
	
	TriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComp"));
	TriggerBox->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void ACollectable::BeginPlay()
{
	Super::BeginPlay();
	
}


// Called every frame
void ACollectable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

