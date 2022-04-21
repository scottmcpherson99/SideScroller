// Fill out your copyright notice in the Description page of Project Settings.


#include "MainMenuGameModeBase.h"
#include "Blueprint/UserWidget.h"
#include "MainMenuHUD.h"
#include "ControlWidget.h"
#include "HowToWidget.h"
#include "Kismet/GameplayStatics.h"
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

void AMainMenuGameModeBase::SwitchWidget(int widget_)
{
	switch (widget_)
	{
	case 0:
		if (IsValid(mainMenuWidget))
		{
			mainMenuWidget->AddToViewport();
			howToWidget->RemoveFromViewport();
		}
		break;

	case 1:
		if (IsValid(controlWidget))
		{
			controlWidget->AddToViewport();
			mainMenuWidget->RemoveFromViewport();
		}
		break;

	case 2:
		UE_LOG(LogTemp, Warning, TEXT("Clicked Button"));

		if (IsValid(howToWidget))
		{
			UE_LOG(LogTemp, Warning, TEXT("Added to viewport"));

			howToWidget->AddToViewport();
			mainMenuWidget->RemoveFromViewport();
		}
		break;

	case 3:
		if (IsValid(mainMenuWidget))
		{
			mainMenuWidget->AddToViewport();
			controlWidget->RemoveFromViewport();
		}
		break;
	}
	
}
