// Copyright Epic Games, Inc. All Rights Reserved.


#include "SideScrollerGameModeBase.h"
#include "Blueprint/UserWidget.h"
#include "GameScreenHUD.h"
#include "PauseHUD.h"
#include "Kismet/GameplayStatics.h"
#include "PlayerCharacter.h"
#include "DumbEnemy.h"

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

	if (IsValid(PauseScreenHUDWidget))
	{
		pauseWidget = Cast<UPauseHUD>(CreateWidget(GetWorld(), PauseScreenHUDWidget));
	}
		//decrease the timer by 1 every second
		GetWorld()->GetTimerManager().SetTimer(levelTimer, this, &ASideScrollerGameModeBase::LevelTime, 1.f, true);
	
		SetCurrentState(ESideScrollerPlayState::EPlaying);

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

//////////////////////////////////////////////////////////////////////////
// States
ESideScrollerPlayState ASideScrollerGameModeBase::GetCurrentState() const
{
	return currentState;
}

void ASideScrollerGameModeBase::SetCurrentState(ESideScrollerPlayState NewState)
{

	//set the current state
	currentState = NewState;

	//handle the new current state
	HandleNewState(currentState);
}


void ASideScrollerGameModeBase::HandleNewState(ESideScrollerPlayState newState)
{
	ACharacter* playerCharacter = UGameplayStatics::GetPlayerCharacter(this, 0);
	APlayerController* playerController = UGameplayStatics::GetPlayerController(this, 0);

	switch (newState)
	{
		//if the game is playing
	case ESideScrollerPlayState::EPlaying :
		playerController->bShowMouseCursor = false;

		//resume the enemy movement
		UGameplayStatics::GetAllActorsOfClass(GetWorld(), ADumbEnemy::StaticClass(), foundActors);

		for (auto Actor : foundActors)
		{
			ADumbEnemy* enemyActor = Cast<ADumbEnemy>(Actor);

			if (enemyActor != nullptr)
			{
				enemyActor->bPause = false;
				if (enemyActor->bForward == true)
				{
					enemyActor->movementSpeed = -50.f;
				}
				else if (enemyActor->bForward == false)
				{
					enemyActor->movementSpeed = 50.f;
				}
			}
		}
		break;

	case ESideScrollerPlayState::EPAUSE :
		playerController->bShowMouseCursor = true;

		// stop the enemy movemnet
		UGameplayStatics::GetAllActorsOfClass(GetWorld(), ADumbEnemy::StaticClass(), foundActors);
		
		for (auto Actor : foundActors)
		{
			ADumbEnemy* enemyActor = Cast<ADumbEnemy>(Actor);

			if (enemyActor != nullptr)
			{
				enemyActor->movementSpeed = 0.f;
			}
		}
		break;
	}
}

void ASideScrollerGameModeBase::Pause()
{
	currentState = ESideScrollerPlayState::EPAUSE;
	HandleNewState(currentState);
	if (IsValid(PauseScreenHUDWidget))
	{
		pauseWidget->AddToViewport();

		ACharacter* playerCharacter = UGameplayStatics::GetPlayerCharacter(this, 0);
		APlayerController* playerController = UGameplayStatics::GetPlayerController(this, 0);
	}
}

void ASideScrollerGameModeBase::UnPause()
{
	currentState = ESideScrollerPlayState::EPlaying;
	HandleNewState(currentState);
	pauseWidget->RemoveFromViewport();

	ACharacter* playerCharacter = UGameplayStatics::GetPlayerCharacter(this, 0);
	APlayerController* playerController = UGameplayStatics::GetPlayerController(this, 0);

	if (playerCharacter != nullptr)
	{
		playerCharacter->EnableInput(playerController);
	}
}
//////////////////////////////////////////////////////////////////////////
void ASideScrollerGameModeBase::LevelTime()
{
	if (currentState == ESideScrollerPlayState::EPlaying)
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
}

