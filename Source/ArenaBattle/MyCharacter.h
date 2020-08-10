// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include"ArenaBattle.h"
#include"MyActorComponent.h"
#include"MyActor.h"
#include"ABAnimInstance.h"
#include"ABWeapon.h"
#include "GameFramework/Character.h"
#include "MyCharacter.generated.h"




UCLASS()
class ARENABATTLE_API AMyCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMyCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void PostInitializeComponents()override;
	// Called to bind functionality to input 

	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent,
		class AController* EventInstrigator, AActor*DamageCauser);

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


	UPROPERTY(VisibleAnywhere, Category = Camera)
		USpringArmComponent* SpringArm;
	UPROPERTY(VisibleAnywhere, Category = Camera)
		UCameraComponent* Camera;

	UPROPERTY(VisibleAnywhere, Category = Camera)
		UMyActorComponent* MyInventory;


	UFUNCTION(BlueprintCallable, Category = "lGIHT")
		void EnableLight();
	//UFUNCTION()
	//	void DropIntm();
	//UFUNCTION()
	//	void TakeItm(AMyActor* MyActor);

//	void  NotifyHit();

	FDelegateHandle MyDelegateHandle;

private:
	void MoveFoward(float Value);
	void MoveRight(float Value);
	void LookUp(float Value);
	void Turn(float Value);

	void Attack();

	void AttackStartComboState();
	void AttackEndComboState();
	void AttackCheck();

	void ViewChange();

	UFUNCTION()
		void OnAttackingMontageEnded(UAnimMontage* Montage, bool Interrupted);
	UFUNCTION()
		void OnNextAttackCheck();
	enum class EControlMode
	{
		GTA,
		DIABLO,
	};


	
	void SetControlMode(EControlMode ControlMode);

	EControlMode CurrentControlMode = EControlMode::GTA;
	FVector DirectionToMove = FVector::ZeroVector;


	float ArmLengthTo = 0.0f;
	FRotator ArmRotationTo = FRotator::ZeroRotator;
	float ArmLengthSpeed = 0.0f;
	float ArmRotationSpeed = 0.0f;
private:
	UPROPERTY()

		UABAnimInstance* AnimInstance;
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = Attack, Meta = (AllowPrivateAccess = true))
		bool IsAttacking;
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = Attack, Meta = (AllowPrivateAccess = true))
		bool CanNextCombo;
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = Attack, Meta = (AllowPrivateAccess = true))
		bool IsComboInputOn;

	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = Attack, Meta = (AllowPrivateAccess = true))
		int32 CurrentCombo;

	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = Attack, Meta = (AllowPrivateAccess = true))
		int32 MaxCombo;

	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = Attack, Meta = (AllowPrivateAccess = true))
	float AttackRange;
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = Attack, Meta = (AllowPrivateAccess = true))
	float AttackRadius;
};
