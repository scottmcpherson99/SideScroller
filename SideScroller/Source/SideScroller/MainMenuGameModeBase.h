// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MainMenuGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class SIDESCROLLER_API AMainMenuGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	AMainMenuGameModeBase();

	virtual void BeginPlay() override;


protected:
	//widget class to use for our hud screen
	UPROPERTY(EditAnywhere, Category = "Widget")
		TSubclassOf<UUserWidget> MainMenuHUDWidget;

	UPROPERTY(VisibleInstanceOnly, Category = "Widget")
		class UMainMenuHUD* mainMenuWidget;
};
