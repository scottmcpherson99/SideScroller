// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/TextBlock.h"
#include "GameScreenHUD.generated.h"

/**
 * 
 */
UCLASS()
class SIDESCROLLER_API UGameScreenHUD : public UUserWidget
{
	GENERATED_BODY()
		
protected:
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
		class UTextBlock* PlayerCoins;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
		class UTextBlock* PlayerLives;

public:
	void UpdatePlayerCoins(float coins_);
	void UpdatePlayerLives(float lives_);
};
