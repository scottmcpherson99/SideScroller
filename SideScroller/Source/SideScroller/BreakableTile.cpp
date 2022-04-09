// Fill out your copyright notice in the Description page of Project Settings.


#include "BreakableTile.h"
#include "Components/BoxComponent.h"

ABreakableTile::ABreakableTile()
{

	TriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComp"));
	TriggerBox->SetupAttachment(RootComponent);
}

