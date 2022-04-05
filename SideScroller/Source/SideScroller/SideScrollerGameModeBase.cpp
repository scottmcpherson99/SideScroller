// Copyright Epic Games, Inc. All Rights Reserved.


#include "SideScrollerGameModeBase.h"
#include "Blueprint/UserWidget.h"
#include "GameScreenHUD.h"

ASideScrollerGameModeBase::ASideScrollerGameModeBase()
{
	
}

void ASideScrollerGameModeBase::BeginPlay()
{
	if (IsValid(GameScreenHUDWidget))
	{
		gameWidget = Cast<UGameScreenHUD>(CreateWidget(GetWorld(), GameScreenHUDWidget));
		gameWidget->AddToViewport();
	}
}

void ASideScrollerGameModeBase::UpdatePlayerStats(float coins_, float lives_)
{
	gameWidget->UpdatePlayerCoins(coins_);
	gameWidget->UpdatePlayerLives(lives_);
}
