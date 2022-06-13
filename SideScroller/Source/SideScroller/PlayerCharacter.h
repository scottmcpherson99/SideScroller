 // Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperCharacter.h"
#include "Blueprint/UserWidget.h"
#include "GameScreenHUD.h"
#include "GameFramework/SaveGame.h"
#include "PlayerCharacter.generated.h"

/**
 * 
 */
UCLASS()
class SIDESCROLLER_API APlayerCharacter : public APaperCharacter
{
	GENERATED_BODY()
		/** Camera boom positioning the camera beside the character */
		UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class USpringArmComponent* CameraBoom;

	/** Side view camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class UCameraComponent* SideViewCameraComponent;


	virtual void Tick(float DeltaSeconds) override;


	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//jump
	virtual void Jump() override;

	//stop jump
	virtual void StopJumping() override;

public:
	APlayerCharacter();

	void CollectCoin();
	
	float GetCoins();

	float GetLives();

	void IncrementLives(float lives_);

	void PlayerDeath();

	

	//save game state
	UPROPERTY(EditAnywhere, Category = "Save Game")
		TSubclassOf<class USavePlayerStats> saveState;

	class USavePlayerStats* savePlayerStats;
protected:


	// APlayerCharacter Interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//move the character sideways
	void MoveRight(float value_);

	//pause the game
	void PauseGame();

	// The animation to play while running around
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
		class UPaperFlipbook* RunningAnimation;

	// The animation to play while idle (standing still)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
		class UPaperFlipbook* IdleAnimation;

	// The animation to play while jumping
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
		class UPaperFlipbook* JumpingAnimation;

	//jumping sound
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Sound)
		class USoundBase* jumpSound;


	//jumping sound
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Sound)
		class USoundBase* walkSound;

	bool playJumpSound;

	bool playWalkSound;

	void ResetJumpSound();

	void ResetWalkSound();

	/** Called to choose the correct animation to play based on the character's movement state */
	void UpdateAnimation();

	void UpdateCharacter();

	void LoadPlayerStats();

	void SavePlayerStats();
	float coins = 0;

	float lives = 3;

};
   