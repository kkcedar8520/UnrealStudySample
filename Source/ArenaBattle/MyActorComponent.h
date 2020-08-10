// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include"ArenaBattle.h"
#include"MyActor.h"
#include "Components/ActorComponent.h"
#include "MyActorComponent.generated.h"


UCLASS( ClassGroup=(CJH), meta=(BlueprintSpawnableComponent) )//CJH::meta::You can create an instance on the blue printer.
class ARENABATTLE_API UMyActorComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	TArray<AMyActor*> CurrentInventory;
	//UFUNCTION()
		//int32 AddToInventory(AActor* ActorToAdd);
	//UFUNCTION()
		//void RemoveFormInventory( AActor* const ActorToAdd);

	
	
	UMyActorComponent();
	UFUNCTION(BlueprintCallable,Category=CJH)
	void Spawn();
	UPROPERTY(EditAnywhere, Category = Spawn)
	TSubclassOf<AActor> ActorToSpawn;
	UPROPERTY(EditAnywhere, Category = Spawn)
		int MaxCounter;

	FTimerHandle Timer;
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
