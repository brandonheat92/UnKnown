// Copyright Epic Games, Inc. All Rights Reserved.

#include "UnknownGameMode.h"
#include "UnknownCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnknownGameMode::AUnknownGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
