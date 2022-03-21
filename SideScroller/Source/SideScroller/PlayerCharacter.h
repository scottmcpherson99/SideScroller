// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperCharacter.h"
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

public:
	APlayerCharacter();

protected:
	// APlayerCharacter Interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
