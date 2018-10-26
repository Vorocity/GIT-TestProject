// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "GIT_TestProjectGameMode.h"
#include "GIT_TestProjectHUD.h"
#include "GIT_TestProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGIT_TestProjectGameMode::AGIT_TestProjectGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AGIT_TestProjectHUD::StaticClass();
}
