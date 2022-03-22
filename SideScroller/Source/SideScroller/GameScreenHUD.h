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

public:
	void UpdatePlayerCoins(float coins_);
};
