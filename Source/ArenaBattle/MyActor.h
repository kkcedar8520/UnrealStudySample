// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ArenaBattle.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS()
class ARENABATTLE_API AMyActor : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(VisibleAnywhere,Category=Light)
	class UPointLightComponent* PointLight;
	UPROPERTY(VisibleAnywhere,Category=Colision)
	class USphereComponent*		LightSphere;
	UFUNCTION(BlueprintCallable,Category="Toggle")
	void	ToggleLight();

	UFUNCTION(BlueprintCallable, Category = "lGIHT")
		void EnableLight();


public:	
	// Sets default values for this actor's properties
	AMyActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void EndOverlap(
		UPrimitiveComponent* OverlappedComponent,
		AActor* OtherActor, 
		UPrimitiveComponent* OtherComp, 
		int32 OtherBodyIndex);

	UFUNCTION()
	void BeginOverlap(
		UPrimitiveComponent* OverlappedComponent,
		AActor* OtherActor, 
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult & SweepResult);

public:
	UFUNCTION()
	virtual void NotifyActorBeginOverlap(AActor* OtherActor)override;
	UFUNCTION()
	virtual void NotifyActorEndOverlap(AActor* OtherActor)override;

	UFUNCTION()
		virtual void PickUp();

	UFUNCTION()
		virtual void PutDown(FTransform Target);
};
