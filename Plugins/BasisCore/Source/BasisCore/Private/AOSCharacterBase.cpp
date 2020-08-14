// Fill out your copyright notice in the Description page of Project Settings.


#include "AOSCharacterBase.h"

// Sets default values
AAOSCharacterBase::AAOSCharacterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	AbilitySystem = CreateDefaultSubobject<UMyAbilitySystemComponent>(TEXT("AbilitySystem"));
	AttributeSet = CreateDefaultSubobject<UMyAttributeSet>(TEXT("AttributeSet"));
}

// Called when the game starts or when spawned
void AAOSCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAOSCharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAOSCharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AAOSCharacterBase::ActivateAbilityInClass(TSubclassOf<UGameplayAbility> Ability)
{
	if (AbilitySystem && Ability)
	{
		AbilitySystem->TryActivateAbilityByClass(Ability);
	}
}
UAbilitySystemComponent * AAOSCharacterBase::GetAbilitySystemComponent() const
{
	return Cast<UAbilitySystemComponent>(AbilitySystem);
}

void AAOSCharacterBase::OnEffectAction()
{
	ActivateAbilityInClass(AbilityClass);
}