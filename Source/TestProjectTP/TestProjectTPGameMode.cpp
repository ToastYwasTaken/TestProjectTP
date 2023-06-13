// Copyright Epic Games, Inc. All Rights Reserved.

#include "TestProjectTPGameMode.h"
#include "TestProjectTPCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATestProjectTPGameMode::ATestProjectTPGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
