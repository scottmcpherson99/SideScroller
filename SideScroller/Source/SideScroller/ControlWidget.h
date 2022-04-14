// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "ControlWidget.generated.h"

/**
 * 
 */
UCLASS()
class SIDESCROLLER_API UControlWidget : public UUserWidget
{
	GENERATED_BODY()
protected:
		UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UButton* CloseButton;
	

	UFUNCTION()
		void OnCloseClicked();


	virtual void NativeConstruct() override;
};
