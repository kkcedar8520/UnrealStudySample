// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "AOSAttributeSet.generated.h"

/**
 * 
 */
UCLASS()
class BASISCORE_API UAOSAttributeSet : public UAttributeSet
{
	GENERATED_BODY()
public:
	UMyAttributeSet();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
		FGameplayAttributeData Health;
};
