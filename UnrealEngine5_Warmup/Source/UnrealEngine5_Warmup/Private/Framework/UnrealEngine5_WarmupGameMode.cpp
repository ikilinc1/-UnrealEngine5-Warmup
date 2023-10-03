// Copyright Epic Games, Inc. All Rights Reserved.

#include "Framework/UnrealEngine5_WarmupGameMode.h"
#include "Player/UnrealEngine5_WarmupCharacter.h"
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
