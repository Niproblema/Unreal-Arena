// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "ArenaGameMode.h"
#include "ArenaCharacter.h"
#include "UObject/ConstructorHelpers.h"

AArenaGameMode::AArenaGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Blueprints/Characters/BP_TP_Base"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
