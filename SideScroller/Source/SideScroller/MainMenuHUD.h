// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "MainMenuHUD.generated.h"

/**
 * 
 */
UCLASS()
class SIDESCROLLER_API UMainMenuHUD : public UUserWidget
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UButton* NewGameButton;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UButton* QuitButton;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UButton* ControlButton;

	UFUNCTION()
		void OnNewGameClicked();

	UFUNCTION()
		void OnQuitClicked();


	UFUNCTION()
		void OnControlClicked();


	virtual void NativeConstruct() override;
};
