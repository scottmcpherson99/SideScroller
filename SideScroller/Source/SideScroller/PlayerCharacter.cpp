// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/InputComponent.h"
#include "PaperFlipbookComponent.h"
#include "SideScrollerGameModeBase.h"
#include "SavePlayerStats.h"




void APlayerCharacter::LoadPlayerStats()
{
	GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Orange, FString::Printf(TEXT("Looking for Save Game Slot")));

	if (UGameplayStatics::DoesSaveGameExist(FString("Slot1"), 0))
	{
		GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Green, FString::Printf(TEXT("Found Save Game Slot!")));
		USavePlayerStats* loadGameObj_ = Cast<USavePlayerStats>(UGameplayStatics::LoadGameFromSlot(FString("Slot1"), 0));
		
		lives = loadGameObj_->GetLives();
		coins = loadGameObj_->GetCoins();
		savePlayerStats = loadGameObj_;

	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Red, FString::Printf(TEXT("Did not find Save Game Slot!")));

	}
}

void APlayerCharacter::SavePlayerStats()
{
	savePlayerStats = Cast<USavePlayerStats>(UGameplayStatics::CreateSaveGameObject(USavePlayerStats::StaticClass()));

	if (savePlayerStats != nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Green, FString::Printf(TEXT("Save player stats was not a nullptr!")));

		savePlayerStats->SetLives(lives);
		savePlayerStats->SetCoins(coins);
	}
	UGameplayStatics::SaveGameToSlot(savePlayerStats, FString("Slot1"), 0);
}

void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();

	LoadPlayerStats();
	
	
	ASideScrollerGameModeBase* gameMode = (ASideScrollerGameModeBase*)GetWorld()->GetAuthGameMode();
	if (gameMode)
	{
		gameMode->UpdatePlayerStats(coins, lives);
	}
}

APlayerCharacter::APlayerCharacter()
{
	// Create a camera boom attached to the root (capsule)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 500.0f;
	CameraBoom->SocketOffset = FVector(0.0f, 0.0f, 75.0f);
	CameraBoom->SetUsingAbsoluteRotation(true);
	CameraBoom->bDoCollisionTest = false;
	CameraBoom->SetRelativeRotation(FRotator(0.0f, -90.0f, 0.0f));

	// Create an orthographic camera (no perspective) and attach it to the boom
	SideViewCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("SideViewCamera"));
	SideViewCameraComponent->ProjectionMode = ECameraProjectionMode::Orthographic;
	SideViewCameraComponent->OrthoWidth = 2048.0f;
	SideViewCameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);

	// Prevent all automatic rotation behavior on the camera, character, and camera component
	CameraBoom->SetUsingAbsoluteRotation(true);
	SideViewCameraComponent->bUsePawnControlRotation = false;
	SideViewCameraComponent->bAutoActivate = true;
	GetCharacterMovement()->bOrientRotationToMovement = false;

	
}


void APlayerCharacter::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	UpdateCharacter();
}



/// //////////////////////////////////////////////////////////////////////
/// Input
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	//set up gameplay key bindings
	check(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveRight", this, &APlayerCharacter::MoveRight);

	PlayerInputComponent->BindAction("Pause", IE_Pressed, this, &APlayerCharacter::PauseGame);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &APlayerCharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &APlayerCharacter::StopJumping);
}

void APlayerCharacter::MoveRight(float value_)
{
	if (Controller && (value_ != 0.0f))
	{
		AddMovementInput(FVector(1.0f * value_, 0.0f, 0.0f));
	}
}

void APlayerCharacter::PauseGame()
{
	ASideScrollerGameModeBase* gameMode = (ASideScrollerGameModeBase*)GetWorld()->GetAuthGameMode();
	if (gameMode)
	{
		gameMode->Pause();
	}

}
//////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////
// Animation

void APlayerCharacter::UpdateAnimation()
{
	const FVector PlayerVelocity = GetVelocity();
	const float PlayerSpeedSqr = PlayerVelocity.SizeSquared();

	// Are we moving or standing still?
	UPaperFlipbook* DesiredAnimation = (PlayerSpeedSqr > 0.0f) ? RunningAnimation : IdleAnimation;
	if (GetSprite()->GetFlipbook() != DesiredAnimation)
	{
		GetSprite()->SetFlipbook(DesiredAnimation);
	}
}


void APlayerCharacter::UpdateCharacter()
{
	UpdateAnimation();

	// Now setup the rotation of the controller based on the direction we are travelling
	const FVector PlayerVelocity = GetVelocity();
	float TravelDirection = PlayerVelocity.X;
	// Set the rotation so that the character faces his direction of travel.
	if (Controller != nullptr)
	{
		if (TravelDirection < 0.0f)
		{
			Controller->SetControlRotation(FRotator(0.0, 180.0f, 0.0f));
		}
		else if (TravelDirection > 0.0f)
		{
			Controller->SetControlRotation(FRotator(0.0f, 0.0f, 0.0f));
		}
	}
}

//////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////
// Gameplay

void APlayerCharacter::CollectCoin()
{
	coins++;
	if (coins >= 10)
	{
		coins = 0;
		lives++;

	}
	ASideScrollerGameModeBase* gameMode = (ASideScrollerGameModeBase*)GetWorld()->GetAuthGameMode();
	if (gameMode)
	{
		gameMode->UpdatePlayerStats(coins, lives);
	}
}


void APlayerCharacter::IncrementLives(float lives_)
{
	lives += lives_;
}


void APlayerCharacter::PlayerDeath()
{
	if (lives > 0)
	{
		lives--;
		SavePlayerStats();

		UGameplayStatics::OpenLevel(GetWorld(), FName(UGameplayStatics::GetCurrentLevelName(GetWorld(), true)));
	
	}
	else
	{
		UKismetSystemLibrary::QuitGame(GetWorld(), UGameplayStatics::GetPlayerController(GetWorld(), 0), EQuitPreference::Quit, true);
	}
}


//////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////
// Getters

float APlayerCharacter::GetCoins()
{
	return coins;
}

float APlayerCharacter::GetLives()
{
	return lives;
}
///////////////////////////////////////////////////////////////////////////