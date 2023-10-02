// Copyright Epic Games, Inc. All Rights Reserved.

#include "UnrealEngine5_WarmupGameMode.h"
#include "UnrealEngine5_WarmupCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnrealEngine5_WarmupGameMode::AUnrealEngine5_WarmupGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
