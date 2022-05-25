// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "SavePlayerStats.generated.h"

/**
 * 
 */
UCLASS()
class SIDESCROLLER_API USavePlayerStats : public USaveGame
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	float lives;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	float coins;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
		FName levelName;

public:
	float GetLives();

	float GetCoins();

	FName GetLevelName();

	void SetLives(float lives_);

	void SetCoins(float coins_);

	void SetLevelName(FName LevelName_);
};
