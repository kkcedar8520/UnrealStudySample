// Fill out your copyright notice in the Description page of Project Settings.


#include "ABAnimInstance.h"
#include"MyCharacter.h"

UABAnimInstance::UABAnimInstance()
{
	CurretPawnSpeed = 0.0f;
	IsInAir = false;
	IsDead = false;


	static ConstructorHelpers::FObjectFinder<UAnimMontage> ATTTACK_MONTAGE(TEXT("/Game/BP/AttackMontage"));
	if (ATTTACK_MONTAGE.Succeeded())
	{
		AttakcMontage = ATTTACK_MONTAGE.Object;
	}
}

 void UABAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	 Super::NativeUpdateAnimation(DeltaSeconds);

	 auto Pawn = TryGetPawnOwner();
	 if (!::IsValid(Pawn))return;

	 if (!IsDead)
	 {
		 CurretPawnSpeed = Pawn->GetVelocity().Size();
		 auto Character = Cast<AMyCharacter>(Pawn);
		 if (::IsValid(Character))
		 {
			 IsInAir = Character->GetCharacterMovement()->IsFalling();
		 }
	 }

 }
 void UABAnimInstance::PlayAttackMontage()
 {

		 Montage_Play(AttakcMontage,1.0F);
 }

 void UABAnimInstance::JumpToAttackMontageSection(int32 NewSection)
 {
	 
	 Montage_IsPlaying(AttakcMontage);
	 Montage_JumpToSection(UABAnimInstance::GetAttackMontageSectionName(NewSection),AttakcMontage);
 }

 void UABAnimInstance::AnimNotify_AttackHitCheck()
 {
	 OnAttackHitCheck.Broadcast();
 }

 void UABAnimInstance::AnimNotify_NextAttackCheck()
 {
	 OnNextAttackCheck.Broadcast();
 }
 FName UABAnimInstance::GetAttackMontageSectionName(int32 Section)
 {
	 //FMath::IsWithinInclusive<int32>(Section, 1, 4), NAME_None);
	 return FName(*FString::Printf(TEXT("Attack%d"), Section));
 }