// Fill out your copyright notice in the Description page of Project Settings.


#include "MainMenuGameModeBase.h"
#include "Blueprint/UserWidget.h"
#include "MainMenuHUD.h"
#include "ControlWidget.h"
#include "HowToWidget.h"
#include "Kismet/GameplayStatics.h"
#include "SavePlayerStats.h"
#include "PlayerCharacter.h"
AMainMenuGameModeBase::AMainMenuGameModeBase()
{

}

void AMainMenuGameModeBase::BeginPlay()
{
	if (IsValid(MainMenuHUDWidget))
	{
		mainMenuWidget = Cast<UMainMenuHUD>(CreateWidget(GetWorld(), MainMenuHUDWidget));
		mainMenuWidget->AddToViewport();
	}

	if (IsValid(ControlHUDWidget))
	{
		controlWidget = Cast<UControlWidget>(CreateWidget(GetWorld(), ControlHUDWidget));
	}

	if (IsValid(HowToHUDWidget))
	{
		UE_LOG(LogTemp, Warning, TEXT("Is valid"));
		howToWidget = Cast<UHowToWidget>(CreateWidget(GetWorld(), HowToHUDWidget));
	}

	APlayerController* playerController = UGameplayStatics::GetPlayerController(this, 0);
	ACharacter* playerCharacter = UGameplayStatics::GetPlayerCharacter(this, 0);
	if (playerController != nullptr)
	{
		playerController->bShowMouseCursor = true;

		if (playerCharacter != nullptr)
		{
			playerCharacter->DisableInput(playerController);
		}
	}


}

void AMainMenuGameModeBase::SwitchWidget(EMainMenuWidget widget_)
{
	// choose which widget is being displayed
	switch (widget_)
	{
	case EMainMenuWidget::EMAINMENUFROMHOWTO:
		if (IsValid(mainMenuWidget))
		{
			mainMenuWidget->AddToViewport();
			howToWidget->RemoveFromViewport();
		}
		break;

	case EMainMenuWidget::ECONTROLS:
		if (IsValid(controlWidget))
		{
			controlWidget->AddToViewport();
			mainMenuWidget->RemoveFromViewport();
		}
		break;

	case EMainMenuWidget::EHOWTO:
		UE_LOG(LogTemp, Warning, TEXT("Clicked Button"));

		if (IsValid(howToWidget))
		{
			UE_LOG(LogTemp, Warning, TEXT("Added to viewport"));

			howToWidget->AddToViewport();
			mainMenuWidget->RemoveFromViewport();
		}
		break;

	case EMainMenuWidget::EMAINMENUFROMCONTROL:
		if (IsValid(mainMenuWidget))
		{
			mainMenuWidget->AddToViewport();
			controlWidget->RemoveFromViewport();
		}
		break;
	}
	
}

void AMainMenuGameModeBase::CreateNewGame()
{
	GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Orange, FString::Printf(TEXT("Creating save game")));


	savePlayerStats = Cast<USavePlayerStats>(UGameplayStatics::CreateSaveGameObject(USavePlayerStats::StaticClass()));


	if (savePlayerStats != nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Green, FString::Printf(TEXT("Save player stats was not a nullptr!")));

		savePlayerStats->SetLives(3);
		savePlayerStats->SetCoins(0);
		savePlayerStats->SetLevelName(FName("Level1"));
	}
	UGameplayStatics::SaveGameToSlot(savePlayerStats, FString("Slot1"), 0);
}
