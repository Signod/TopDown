// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.

#include "TopDown.h"
#include "TopDownGameMode.h"
#include "TopDownPlayerController.h"
#include "TopDownCharacter.h"

ATopDownGameMode::ATopDownGameMode(const class FPostConstructInitializeProperties& PCIP) : Super(PCIP)
{
	// use our custom PlayerController class
	PlayerControllerClass = ATopDownPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Blueprints/MyCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}