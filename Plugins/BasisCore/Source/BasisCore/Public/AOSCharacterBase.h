// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include"AOSAbilitySystemComponent.h"
#include "AOSCharacterBase.generated.h"

UCLASS()
class BASISCORE_API AAOSCharacterBase : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AAOSCharacterBase();

	UFUNCTION();
	void OnEffectAction();


	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = AbilitySystem)
		class UAOSAttributeSet*					AttributeSet;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = AbilitySystem, meta = (AllowPrivateAccess = "true"))
		class UAOSAbilitySystemComponent*		AbilitySystem;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Abilities)
		TSubclassOf<MyGameplayAbility>			AbilityClass;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Abilities)
		FGameplayAbilitySpecHandle				AbilityHandles;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Abilities)
		FGameplayTagContainer					GameplayTagContainer;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Abilities)
		TArray<TSubclassOf<UGameplayEffect>> PassiveGameplayEffects;

public:
	void ActivateAbilityInClass(TSubclassOf<UGameplayAbility> Ability);
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
public:
	class UAbilitySystemComponent* GetAbilitySystemComponent() const override;
};
