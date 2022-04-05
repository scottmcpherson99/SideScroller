// Fill out your copyright notice in the Description page of Project Settings.


#include "MainMenuGameModeBase.h"
#include "Blueprint/UserWidget.h"
#include "MainMenuHUD.h"

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
}