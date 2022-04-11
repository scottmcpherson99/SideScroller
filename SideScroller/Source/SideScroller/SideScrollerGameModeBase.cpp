// Copyright Epic Games, Inc. All Rights Reserved.


#include "SideScrollerGameModeBase.h"
#include "Blueprint/UserWidget.h"
#include "GameScreenHUD.h"
#include "Kismet/GameplayStatics.h"
#include "PlayerCharacter.h"

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

	
		//decrease the timer by 1 every second
		GetWorld()->GetTimerManager().SetTimer(levelTimer, this, &ASideScrollerGameModeBase::LevelTime, 1.f, true);
	

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

void ASideScrollerGameModeBase::LevelTime()
{
	if (IsValid(GameScreenHUDWidget))
	{
		levelTimeLength--;
		gameWidget->UpdateTimer(levelTimeLength);

		if (levelTimeLength <= 0)
		{
			APlayerCharacter* playerCharacter = Cast<APlayerCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
			playerCharacter->PlayerDeath();
		}
	}
}