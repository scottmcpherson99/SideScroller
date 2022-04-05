// Fill out your copyright notice in the Description page of Project Settings.


#include "MainMenuHUD.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"


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
}


void UMainMenuHUD::OnNewGameClicked()
{
	UGameplayStatics::OpenLevel(GetWorld(), "Level1");
}

void UMainMenuHUD::OnQuitClicked()
{
	UKismetSystemLibrary::QuitGame(GetWorld(), UGameplayStatics::GetPlayerController(GetWorld(), 0), EQuitPreference::Quit, true);
}
