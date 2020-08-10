// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActorComponent.h"

// Sets default values for this component's properties
UMyActorComponent::UMyActorComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	MaxCounter = 5;
	// ...
}



// Called when the game starts
void UMyActorComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
	

	GetWorld()->GetTimerManager().SetTimer(Timer, this, &UMyActorComponent::Spawn, 5.0F, true);

	
}


// Called every frame
void UMyActorComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	float fElapseTime=GetWorld()->GetTimerManager().GetTimerElapsed(Timer);

	GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, FString::Printf(TEXT("%10.4F"), fElapseTime));
	//AActor* Parent = GetOwner();

	//if (Parent != nullptr)
	//{
	//	Parent->SetActorLocation(
	//		Parent->GetActorLocation() +`
	//		FVector(
	//			FMath::FRandRange(-1, 1)*10.0F,
	//			FMath::FRandRange(-1, 1)*10.0F,
	//			FMath::FRandRange(-1, 1)*10.0F));
	//}
	//
}

void UMyActorComponent::Spawn()
{

	UWorld* pWorld = GetWorld();
	if (pWorld != nullptr)
	{
		
		MaxCounter--;
		FTransform SpawnLocation(FVector(0.0f, 0.0f+ MaxCounter*10, 170.0f));

		GetWorld()->SpawnActor(ActorToSpawn,&SpawnLocation);


		if (MaxCounter <= 0)
		{
			GetWorld()->GetTimerManager().ClearTimer(Timer);
		}
	}
}


//int32 UMyActorComponent::AddToInventory(AActor* ActorToAdd)
//{
//	return CurrentInventory.Add(ActorToAdd);
//}
//
//
//
//void UMyActorComponent::RemoveFormInventory( AActor* const ActorToAdd)
//{
//	 CurrentInventory.Remove(ActorToAdd.);
//	 
//}


