// Fill out your copyright notice in the Description page of Project Settings.


#include "ControlWidget.h"
#include "MainMenuGameModeBase.h"


void UControlWidget::NativeConstruct()
{

	if (CloseButton)
	{
		CloseButton->OnClicked.AddDynamic(this, &UControlWidget::OnCloseClicked);
	}
}

void UControlWidget::OnCloseClicked()
{
	AMainMenuGameModeBase* gameMode = (AMainMenuGameModeBase*)GetWorld()->GetAuthGameMode();
	if (gameMode)
	{
		gameMode->SwitchWidget(3);
	}
}

