// Fill out your copyright notice in the Description page of Project Settings.


#include "GameScreenHUD.h"

void UGameScreenHUD::UpdatePlayerCoins(float coins_)
{
	PlayerCoins->SetText(FText::AsNumber(coins_));
}