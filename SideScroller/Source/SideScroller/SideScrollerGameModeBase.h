// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "SideScrollerGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class SIDESCROLLER_API ASideScrollerGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	ASideScrollerGameModeBase();

	virtual void BeginPlay() override;

	void UpdatePlayerStats(float coins_);
protected:
	//widget class to use for our hud screen
	UPROPERTY(EditAnywhere, Category = "Widget")
		TSubclassOf<UUserWidget> GameScreenHUDWidget;

	UPROPERTY(VisibleInstanceOnly, Category = "Widget")
		class UGameScreenHUD* gameWidget;

};
