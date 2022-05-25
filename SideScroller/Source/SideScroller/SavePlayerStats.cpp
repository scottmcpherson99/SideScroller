// Fill out your copyright notice in the Description page of Project Settings.


#include "SavePlayerStats.h"

float USavePlayerStats::GetCoins()
{
	return coins;
}

FName USavePlayerStats::GetLevelName()
{
	return levelName;
}

float USavePlayerStats::GetLives()
{
	return lives;
}

void USavePlayerStats::SetLives(float lives_)
{
	lives = lives_;
}

void USavePlayerStats::SetCoins(float coins_)
{
	coins = coins_;
}


void USavePlayerStats::SetLevelName(FName levelName_)
{
	levelName = levelName_;
}
