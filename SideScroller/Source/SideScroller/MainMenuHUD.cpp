// Fill out your copyright notice in the Description page of Project Settings.


#include "MainMenuHUD.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"
#include "MainMenuGameModeBase.h"


void UMainMenuHUD::NativeConstruct()
{
	if (NewGameButton)
	{
		NewGameButton->OnClicked.AddDynamic(this, &UMainMenuHUD::OnNewGameClicked);
	}

	if (QuitButton)
	{
		QuitButton->OnClicked.AddDynamic(this, &UMainMenuHUD::OnQuitClicked);
	}

	if (ControlButton)
	{
		ControlButton->OnClicked.AddDynamic(this, &UMainMenuHUD::OnControlClicked);
	}

	if (HowToButton)
	{
		HowToButton->OnClicked.AddDynamic(this, &UMainMenuHUD::OnHowToClicked);
	}
}


void UMainMenuHUD::OnNewGameClicked()
{
	UGameplayStatics::OpenLevel(GetWorld(), "Level1");
}

void UMainMenuHUD::OnQuitClicked()
{
	UKismetSystemLibrary::QuitGame(GetWorld(), UGameplayStatics::GetPlayerController(GetWorld(), 0), EQuitPreference::Quit, true);
}

void UMainMenuHUD::OnControlClicked()
{
	AMainMenuGameModeBase* gameMode = (AMainMenuGameModeBase*)GetWorld()->GetAuthGameMode();
	if (gameMode)
	{
		gameMode->SwitchWidget(1);
	}
}

void UMainMenuHUD::OnHowToClicked()
{
	AMainMenuGameModeBase* gameMode = (AMainMenuGameModeBase*)GetWorld()->GetAuthGameMode();
	if (gameMode)
	{
		gameMode->SwitchWidget(2);
	}
}
