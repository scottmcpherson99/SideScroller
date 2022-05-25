// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GameFramework/SaveGame.h"
#include "MainMenuGameModeBase.generated.h"

/**
 * 
 */

//enum to display which widget to display
UENUM(BlueprintType)
enum class EMainMenuWidget : uint8
{
	EMAINMENUFROMCONTROL UMETA(DisplayName = "MainMenuControl"),
	EMAINMENUFROMHOWTO UMETA(DisplayName = "MainMenuHowTo"),
	ECONTROLS UMETA(Displayname = "Controls"),
	EHOWTO UMETA(DisplayName = "HowTo")
};

UCLASS()
class SIDESCROLLER_API AMainMenuGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	AMainMenuGameModeBase();

	virtual void BeginPlay() override;

	// switch the current widget that is on display
	void SwitchWidget(EMainMenuWidget widget_);

	void CreateNewGame();
protected:
	//widget class to use for our hud screen
	UPROPERTY(EditAnywhere, Category = "Widget")
		TSubclassOf<UUserWidget> MainMenuHUDWidget;

	UPROPERTY(VisibleInstanceOnly, Category = "Widget")
		class UMainMenuHUD* mainMenuWidget;

	//widget class to use for our hud screen
	UPROPERTY(EditAnywhere, Category = "Widget")
		TSubclassOf<UUserWidget> ControlHUDWidget;

	UPROPERTY(VisibleInstanceOnly, Category = "Widget")
		class UControlWidget* controlWidget;

	//widget class to use for our hud screen
	UPROPERTY(EditAnywhere, Category = "Widget")
		TSubclassOf<UUserWidget> HowToHUDWidget;

	UPROPERTY(VisibleInstanceOnly, Category = "Widget")
		class UHowToWidget* howToWidget;


	class USavePlayerStats* savePlayerStats;

	//save game state
	UPROPERTY(EditAnywhere, Category = "Save Game")
		TSubclassOf<class USavePlayerStats> saveState;

};
