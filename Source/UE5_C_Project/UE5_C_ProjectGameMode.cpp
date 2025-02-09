// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE5_C_ProjectGameMode.h"
#include "UE5_C_ProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUE5_C_ProjectGameMode::AUE5_C_ProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
