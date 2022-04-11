// Fill out your copyright notice in the Description page of Project Settings.


#include "PauseHUD.h"
#include "SideScrollerGameModeBase.h"


void UPauseHUD::NativeConstruct()
{
	if (ResumeButton)
	{
		ResumeButton->OnClicked.AddDynamic(this, &UPauseHUD::OnResumeClicked);
	}

}


void UPauseHUD::OnResumeClicked()
{
	ASideScrollerGameModeBase* gameMode = (ASideScrollerGameModeBase*)GetWorld()->GetAuthGameMode();

	if (gameMode)
	{
		gameMode->UnPause();
	}
}