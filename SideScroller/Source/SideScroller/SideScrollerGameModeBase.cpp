// Copyright Epic Games, Inc. All Rights Reserved.


#include "SideScrollerGameModeBase.h"
#include "Blueprint/UserWidget.h"
#include "GameScreenHUD.h"

ASideScrollerGameModeBase::ASideScrollerGameModeBase()
{

}

void ASideScrollerGameModeBase::BeginPlay()
{
	UE_LOG(LogTemp, Warning, TEXT("Play has begun!"));
	if (IsValid(GameScreenHUDWidget))
	{
		gameWidget = Cast<UGameScreenHUD>(CreateWidget(GetWorld(), GameScreenHUDWidget));
		gameWidget->AddToViewport();
		UE_LOG(LogTemp, Warning, TEXT("Added to viewport"));
	}
}

void ASideScrollerGameModeBase::UpdatePlayerStats(float coins_)
{
	gameWidget->UpdatePlayerCoins(coins_);
}
