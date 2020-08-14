#pragma once


#include"GameInterface.h"
#include"SampleActor.generated.h"

DECLARE_EVENT(ASampleActor,FSampleEvent);
UCLASS()
class BASISCORE_API ASampleActor :public AActor, public IGameInterface
{
	GENERATED_BODY()
public:
	ASampleActor();
	FSampleEvent OnSample;

	//UFUNCTION(BlueprintCallable)
	//	void OnSampleEvent();
	
	UFUNCTION()
	virtual void BeginPlay()override;
/*
	//UFUNCTION()
	//virtual void OnNatPostBeginPlay_Implementation()override;*/

};