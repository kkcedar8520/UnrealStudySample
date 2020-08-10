// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once
#include"MyActor.h"
#include "GameFramework/GameModeBase.h"
#include "ArenaBattleGameMode.generated.h"

DECLARE_MULTICAST_DELEGATE(FStandardDelegateSignature);

UCLASS(minimalapi)
class AArenaBattleGameMode : public AGameModeBase
{
	GENERATED_BODY()
public:
	AMyActor* SpawnedActor;
	UFUNCTION()
	void DestroyActorFunction();

	FStandardDelegateSignature MyStandarddDelegate;
public:
	virtual void BeginPlay()override;
public:
	AArenaBattleGameMode();
};



