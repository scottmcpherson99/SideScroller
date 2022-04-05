// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "SavePlayerStats.generated.h"

/**
 * 
 */
UCLASS()
class SIDESCROLLER_API USavePlayerStats : public USaveGame
{
	GENERATED_BODY()
	
protected:
	float lives;
	float coins;
};
