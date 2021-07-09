// Copyright Epic Games, Inc. All Rights Reserved.

#include "HogwartsGameMode.h"
#include "HogwartsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AHogwartsGameMode::AHogwartsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
