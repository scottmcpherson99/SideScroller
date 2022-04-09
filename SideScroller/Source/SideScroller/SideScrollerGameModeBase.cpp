// Copyright Epic Games, Inc. All Rights Reserved.


#include "SideScrollerGameModeBase.h"
#include "Blueprint/UserWidget.h"
#include "GameScreenHUD.h"
#include "Kismet/GameplayStatics.h"

ASideScrollerGameModeBase::ASideScrollerGameModeBase()
{
	
}

void ASideScrollerGameModeBase::BeginPlay()
{
	if (IsValid(GameScreenHUDWidget))
	{
		gameWidget = Cast<UGameScreenHUD>(CreateWidget(GetWorld(), GameScreenHUDWidget));
		gameWidget->AddToViewport();
		gameWidget->UpdateLevelName(FName(UGameplayStatics::GetCurrentLevelName(GetWorld(), true)));
	}
}

void ASideScrollerGameModeBase::UpdatePlayerStats(float coins_, float lives_)
{
	gameWidget->UpdatePlayerCoins(coins_);
	gameWidget->UpdatePlayerLives(lives_);

}

FName ASideScrollerGameModeBase::GetNextLevelName()
{
	for (int i = 0; i < sizeof(levelNames); i++)
	{
		if (levelNames[i] == FName(UGameplayStatics::GetCurrentLevelName(GetWorld(), true)))
		{
			return levelNames[i + 1];
		}
	}
	return FName("MainMenu");
}