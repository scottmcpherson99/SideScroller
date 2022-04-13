// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "SideScrollerGameModeBase.generated.h"

/**
 * 
 */

//enum to store current stat of gameplay
UENUM(BlueprintType)
enum class ESideScrollerPlayState : uint8
{
	EPlaying UMETA(DisplayName = "playing"),
	EPAUSE UMETA(DisplayName = "pause")
};

UCLASS()
class SIDESCROLLER_API ASideScrollerGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	ASideScrollerGameModeBase();

	virtual void BeginPlay() override;

	void UpdatePlayerStats(float coins_, float lives_);

	FName GetNextLevelName();

	//returns the current play state
	UFUNCTION(BlueprintPure, Category = "State")
	ESideScrollerPlayState GetCurrentState() const;

	//sets a new playing state
	void SetCurrentState(ESideScrollerPlayState NewState);


	void Pause();
	void UnPause();
protected:
	//widget class to use for our hud screen
	UPROPERTY(EditAnywhere, Category = "Widget")
		TSubclassOf<UUserWidget> GameScreenHUDWidget;

	//widget class to use for our hud screen
	UPROPERTY(EditAnywhere, Category = "Widget")
		TSubclassOf<UUserWidget> PauseScreenHUDWidget;

	UPROPERTY(VisibleInstanceOnly, Category = "Widget")
		class UGameScreenHUD* gameWidget;

	UPROPERTY(VisibleInstanceOnly, Category = "Widget")
		class UPauseHUD* pauseWidget;

	UPROPERTY(EditAnywhere, Category = "Game Settings")
		float levelTimeLength = 100;

	FName levelNames[3] = { FName("Level1"), FName("Level2"), FName("MainMenu")};


	FTimerHandle levelTimer;

	void LevelTime();


	//turn off movement for enemies
	TArray<AActor*> foundActors;
private:
	//keeps track of the current state
	ESideScrollerPlayState currentState;

	//handle any function calls that rely upon changing the playing state
	void HandleNewState(ESideScrollerPlayState newState);
};
