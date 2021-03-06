// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/TextBlock.h"
#include "Components/Button.h"
#include "PauseHUD.generated.h"

/**
 * 
 */
UCLASS()
class SIDESCROLLER_API UPauseHUD : public UUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UButton* ResumeButton;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UButton* MainMenuButton;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UButton* QuitButton;


	UFUNCTION()
		void OnResumeClicked();

	UFUNCTION()
		void OnMainMenuClicked();

	UFUNCTION()
		void OnQuitClicked();

	virtual void NativeConstruct() override;
};
