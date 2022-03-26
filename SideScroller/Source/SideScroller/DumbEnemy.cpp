// Fill out your copyright notice in the Description page of Project Settings.


#include "DumbEnemy.h"
#include "GameFramework/CharacterMovementComponent.h"



void ADumbEnemy::Tick(float DeltaTime)
{
	AddMovementInput(FVector(movementSpeed * DeltaTime, 0.0f, 0.0f));
}