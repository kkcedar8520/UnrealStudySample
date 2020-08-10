// Copyright Epic Games, Inc. All Rights Reserved.

//#include""

#include "ArenaBattleGameMode.h"
#include"MyPawn.h"
#include"MyCharacter.h"
#include "ArenaBattleCharacter.h"
#include "UObject/ConstructorHelpers.h"

AArenaBattleGameMode::AArenaBattleGameMode()
{
	// set default pawn class to our Blueprinted character 
	DefaultPawnClass = AMyCharacter::StaticClass();

}
void AArenaBattleGameMode::BeginPlay()
{
	Super::BeginPlay();

}
void AArenaBattleGameMode::DestroyActorFunction()
{
	if (SpawnedActor != nullptr)
	{
		SpawnedActor->Destroy();

	}
}
