// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "Sec05TestingGroundsGameMode.h"
#include "Sec05TestingGroundsHUD.h"
#include "Sec05TestingGroundsCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASec05TestingGroundsGameMode::ASec05TestingGroundsGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ASec05TestingGroundsHUD::StaticClass();
}
