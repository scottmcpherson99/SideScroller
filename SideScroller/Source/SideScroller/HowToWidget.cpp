// Fill out your copyright notice in the Description page of Project Settings.


#include "HowToWidget.h"
#include "MainMenuGameModeBase.h"

void UHowToWidget::NativeConstruct()
{

	if (CloseButton)
	{
		CloseButton->OnClicked.AddDynamic(this, &UHowToWidget::OnCloseClicked);
	}
}

void UHowToWidget::OnCloseClicked()
{
	AMainMenuGameModeBase* gameMode = (AMainMenuGameModeBase*)GetWorld()->GetAuthGameMode();
	if (gameMode)
	{
		gameMode->SwitchWidget(EMainMenuWidget::EMAINMENUFROMHOWTO);
	}
}