// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "HGameMode.generated.h"

/**
 * 
 */
UCLASS()
class BASISCORE_API AHGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	UFUNCTION()
		bool LoginServer(const FText& id, const FText& pw);
public:
	AHGameMode();
};
