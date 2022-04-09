// Fill out your copyright notice in the Description page of Project Settings.


#include "GameScreenHUD.h"
#include "Kismet/GameplayStatics.h"

void UGameScreenHUD::UpdatePlayerCoins(float coins_)
{
	PlayerCoins->SetText(FText::AsNumber(coins_));
}

void UGameScreenHUD::UpdatePlayerLives(float lives_)
{
	PlayerLives->SetText(FText::AsNumber(lives_));
}


void UGameScreenHUD::UpdateLevelName(FName name_)
{
	LevelName->SetText(FText::FromName(name_));
}