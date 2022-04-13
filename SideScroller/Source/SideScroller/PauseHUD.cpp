// Fill out your copyright notice in the Description page of Project Settings.


#include "PauseHUD.h"
#include "SideScrollerGameModeBase.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"


void UPauseHUD::NativeConstruct()
{
	if (ResumeButton)
	{
		ResumeButton->OnClicked.AddDynamic(this, &UPauseHUD::OnResumeClicked);
	}

	if (MainMenuButton)
	{
		MainMenuButton->OnClicked.AddDynamic(this, &UPauseHUD::OnMainMenuClicked);
	}

	if (QuitButton)
	{
		QuitButton->OnClicked.AddDynamic(this, &UPauseHUD::OnQuitClicked);
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

void UPauseHUD::OnMainMenuClicked()
{

	UGameplayStatics::OpenLevel(GetWorld(), FName("MainMenu"));

}


void UPauseHUD::OnQuitClicked()
{

	UKismetSystemLibrary::QuitGame(GetWorld(), UGameplayStatics::GetPlayerController(GetWorld(), 0), EQuitPreference::Quit, true);

}