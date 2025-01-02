// Copyright Epic Games, Inc. All Rights Reserved.

#include "Project_GetawayGameMode.h"
#include "Project_GetawayCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProject_GetawayGameMode::AProject_GetawayGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
