// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacter.h"
#include"ArenaBattleGameMode.h"
#include"DrawDebugHelpers.h"

// Sets default values
AMyCharacter::AMyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MaxCombo = 4;
	AttackEndComboState();


	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SPRINGARM"));
	Camera= CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));


	SpringArm->SetupAttachment(GetCapsuleComponent());
	Camera->SetupAttachment(SpringArm);


	GetMesh()->SetRelativeLocationAndRotation(FVector(0.0F, 0.0F, -90.0F), FRotator(0.0F, -90.0F, 0.0F));
	SpringArm->TargetArmLength = 400.0f;

	static ConstructorHelpers::FObjectFinder<USkeletalMesh> SK_CHARM_BASE(
		TEXT("SkeletalMesh'/Game/InfinityBladeWarriors/Character/CompleteCharacters/sk_CharM_Base.sk_CharM_Base'"));

	if (SK_CHARM_BASE.Succeeded())
	{
		GetMesh()->SetSkeletalMesh(SK_CHARM_BASE.Object);
	}
	GetMesh()->SetAnimationMode(EAnimationMode::AnimationBlueprint);
	static ConstructorHelpers::FClassFinder<UAnimInstance> Default_Anim(TEXT("/Game/BP/ABP_Character"));
	
	GetMesh()->SetAnimInstanceClass(Default_Anim.Class);
	

	SetControlMode(EControlMode::DIABLO);

	ArmLengthSpeed = 3.0f;
	ArmRotationSpeed = 10.0f;
	GetCharacterMovement()->JumpZVelocity = 800.0f;

	IsAttacking = false;

	//ColliSionChannel
	GetCapsuleComponent()->SetCollisionProfileName(TEXT("ABCharacter"));

	AttackRange = 200.0f;
	AttackRadius = 50.0f;




	
}

// Called when the game starts or when spawned
void AMyCharacter::BeginPlay()
{
	Super::BeginPlay();

	AGameModeBase* GameMode = UGameplayStatics::GetGameMode(GetWorld());

	AArenaBattleGameMode* gm = Cast< AArenaBattleGameMode>(GameMode);
	MyDelegateHandle=gm->MyStandarddDelegate.AddUObject(this, &AMyCharacter::EnableLight);

	FName WeaponSokect(TEXT("hand_rSocket"));
	auto CurWeapon = GetWorld()->SpawnActor<AABWeapon>(FVector::ZeroVector, FRotator::ZeroRotator);

	if (nullptr != CurWeapon)
	{
		CurWeapon->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetIncludingScale, WeaponSokect);
	}
} 

// Called every frame
void AMyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	SpringArm->TargetArmLength = FMath::FInterpTo(SpringArm->TargetArmLength, ArmLengthTo, DeltaTime, ArmLengthSpeed);

	switch (CurrentControlMode)
	{
	case EControlMode::DIABLO:
		SpringArm->SetRelativeRotation(FMath::RInterpTo(SpringArm->GetRelativeRotation(), ArmRotationTo, DeltaTime, ArmRotationSpeed));
		break;
	default:
		break;
	}
	switch (CurrentControlMode)
	{
	case EControlMode::DIABLO:
		if (DirectionToMove.SizeSquared() > 0.0f)
		{
			GetController()->SetControlRotation(FRotationMatrix::MakeFromX(DirectionToMove).Rotator());
			AddMovementInput(DirectionToMove);
		}
		break;
	default:
		break;
	}

}

void AMyCharacter::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	 AnimInstance = Cast<UABAnimInstance>(GetMesh()->GetAnimInstance());

	 AnimInstance->OnAttackHitCheck.AddUObject(this, &AMyCharacter::AttackCheck);
	if (AnimInstance != nullptr)
	{
		AnimInstance->OnMontageEnded.AddDynamic(this, &AMyCharacter::OnAttackingMontageEnded);
		AnimInstance->OnNextAttackCheck.AddUObject(this, &AMyCharacter::OnNextAttackCheck);
			/*AnimInstance->OnNextAttackCheck.AddLambda([this]()->void {

			CanNextCombo = false;
			if (IsComboInputOn)
			{
				AttackStartComboState();
				AnimInstance->JumpToAttackMontageSection(CurrentCombo);
			}
		});*/
	}
}
// Called to bind functionality to input
void AMyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis(TEXT("MoveFoward"), this, &AMyCharacter::MoveFoward);
	PlayerInputComponent->BindAxis(TEXT("MoveRight"), this, &AMyCharacter::MoveRight);

	PlayerInputComponent->BindAxis(TEXT("Lookup"), this, &AMyCharacter::LookUp);
	PlayerInputComponent->BindAxis(TEXT("Turn"), this, &AMyCharacter::Turn);

	PlayerInputComponent->BindAction(TEXT("ViewChange"), EInputEvent::IE_Pressed, this, &AMyCharacter::ViewChange);
	PlayerInputComponent->BindAction(TEXT("Jump"), EInputEvent::IE_Pressed, this, &AMyCharacter::Jump);
	PlayerInputComponent->BindAction(TEXT("Attack"), EInputEvent::IE_Pressed, this, &AMyCharacter::Attack);

}

void AMyCharacter::MoveRight(float Value)
{
	switch (CurrentControlMode)
	{
		case EControlMode::GTA:
		{
			AddMovementInput(FRotationMatrix(GetControlRotation()).GetUnitAxis(EAxis::Y), Value);
		}
		break;
		case EControlMode::DIABLO:
		{
			DirectionToMove.Y = Value;
			break;
		}
		
	default:
		break;
	}
	
	//AddMovementInput(GetActorRightVector());
}
void AMyCharacter::MoveFoward(float Value)
{
	switch (CurrentControlMode)
	{
	case EControlMode::GTA:
	{
		AddMovementInput(FRotationMatrix(GetControlRotation()).GetUnitAxis(EAxis::X), Value);
	}
	break;
	case EControlMode::DIABLO:
	{
		DirectionToMove.X = Value;
		break;
	}

	default:
		break;
	}
	//AddMovementInput(GetActorForwardVector());
}

void AMyCharacter::LookUp(float Value)
{

	switch (CurrentControlMode)
	{
	case EControlMode::GTA:
		AddControllerPitchInput(Value);
		break;
	}
}
void AMyCharacter::Turn(float Value)
{

	switch (CurrentControlMode)
	{
	case EControlMode::GTA:
		AddControllerYawInput(Value);
		break;
	}
	
}
void AMyCharacter::Attack()
{
	 AnimInstance = Cast<UABAnimInstance>(GetMesh()->GetAnimInstance());
	

		if (IsAttacking)
		{
			if (CanNextCombo)
			{
				IsComboInputOn = true;

			}
		}
		else
		{
			AttackStartComboState();
			AnimInstance->PlayAttackMontage();
			AnimInstance->JumpToAttackMontageSection(CurrentCombo);
			IsAttacking = true;
		}
}

void AMyCharacter::AttackCheck()
{

	FHitResult HitResult;
	FCollisionQueryParams Params(NAME_None, false, this);
	bool bResult = GetWorld()->SweepSingleByChannel(
		HitResult,
		GetActorLocation(),
		GetActorLocation() + GetActorForwardVector()*AttackRange,
		FQuat::Identity,
		ECollisionChannel::ECC_GameTraceChannel2,
		FCollisionShape::MakeSphere(AttackRadius),
		Params);
#if ENABLE_DRAW_DEBUG
	FVector TraceVec = GetActorForwardVector()*AttackRange;
	FVector Center = GetActorLocation() + TraceVec * 0.5f;
	float HalfHeight = AttackRange * 0.5F + AttackRadius;
	FQuat CapsuleRot = FRotationMatrix::MakeFromZ(TraceVec).ToQuat();
	FColor DrawColor = bResult ? FColor::Green : FColor::Red;
	float DebugLifeTime = 5.0f;

	DrawDebugCapsule(GetWorld(), Center, HalfHeight, AttackRadius, CapsuleRot, DrawColor, false,DebugLifeTime);
#endif 
	if (bResult)
	{
		if (HitResult.Actor.IsValid())
		{
			
			FDamageEvent DamageEvent;
			HitResult.Actor->TakeDamage(50.0f, DamageEvent, GetController(), this);
		}
	}

}

float AMyCharacter::TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent,
	class AController* EventInstrigator, AActor*DamageCauser)
{
	float FinalDamage = Super::TakeDamage(DamageAmount, DamageEvent, EventInstrigator, DamageCauser);

	if (FinalDamage > 0.0f)
	{
		AnimInstance->SetDeadAnim();
		SetActorEnableCollision(false);
	}
	return FinalDamage;

}

void AMyCharacter::SetControlMode(EControlMode ControlMode)
{
	
	CurrentControlMode = ControlMode;

	switch (CurrentControlMode)
	{
	case EControlMode::GTA:
	{
		//SpringArm->TargetArmLength = 450.f;
		//SpringArm->SetRelativeRotation(FRotator::ZeroRotator);

		ArmLengthTo = 450.0f;

		SpringArm->bUsePawnControlRotation = true;
		SpringArm->bInheritYaw = true;
		SpringArm->bInheritPitch = true;
		SpringArm->bInheritRoll = true;

		SpringArm->bDoCollisionTest = true;
		bUseControllerRotationYaw = false;


		GetCharacterMovement()->bOrientRotationToMovement = true;
		GetCharacterMovement()->bUseControllerDesiredRotation = false;
		GetCharacterMovement()->RotationRate = FRotator(0.0f, 720.0f, 0.0f);
	}
	break;
	case EControlMode::DIABLO:
	{

		//SpringArm->TargetArmLength = 800.0f;
		//SpringArm->SetRelativeRotation(FRotator(-45.0f, 0.0f, 0.0f));

		ArmLengthTo = 800.0f;
		ArmRotationTo = FRotator(-45.0f,0.0f,0.0f);
		SpringArm->bUsePawnControlRotation = false;
		SpringArm->bInheritYaw = false;
		SpringArm->bInheritPitch = false;
		SpringArm->bInheritRoll = false;

		SpringArm->bDoCollisionTest = false;
		
		bUseControllerRotationYaw = false;
		GetCharacterMovement()->bOrientRotationToMovement = false;
		GetCharacterMovement()->bUseControllerDesiredRotation = true;
		GetCharacterMovement()->RotationRate = FRotator(0.0f, 720.0f, 0.0f);

		
		break;


	}
	break;
	}

	
}
void AMyCharacter::ViewChange()
{
	switch (CurrentControlMode)
	{
	case EControlMode::GTA:
	{
		GetController()->SetControlRotation(GetActorRotation());
		SetControlMode(EControlMode::DIABLO);
		break;

	}
	case EControlMode::DIABLO:
	{
		GetController()->SetControlRotation(GetActorRotation());
		SetControlMode(EControlMode::GTA);
		break;

	}
	default:
		break;
	}
}
void AMyCharacter::OnAttackingMontageEnded(UAnimMontage* Montage, bool Interrupted)
{
	IsAttacking = false;
	AttackEndComboState();
}
void AMyCharacter::EnableLight()
{
	GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Yellow, TEXT("Delegate"));

	AGameModeBase* GameMode = UGameplayStatics::GetGameMode(GetWorld());

	AArenaBattleGameMode* gm = Cast< AArenaBattleGameMode>(GameMode);
	gm->MyStandarddDelegate.Remove(MyDelegateHandle);
}

void AMyCharacter::AttackStartComboState()
{
	CanNextCombo = true;
	IsComboInputOn = false;
	CurrentCombo = FMath::Clamp<int32>(CurrentCombo + 1, 1, MaxCombo);
}
void AMyCharacter::AttackEndComboState()
{
	IsComboInputOn = false;
	CanNextCombo = false;
	CurrentCombo = 0;
}
void AMyCharacter::OnNextAttackCheck()
{
	CanNextCombo = false;
	if (IsComboInputOn)
	{
		AttackStartComboState();
		AnimInstance->JumpToAttackMontageSection(CurrentCombo);
	}
}
//void AMyCharacter::DropIntm()
//{
//
//	if (MyInventory->CurrentInventory.Num() == 0)return;
//	AMyActor* item = MyInventory->CurrentInventory.Last();
//
//	MyInventory->RemoveFormInventory(item);
//
//	FVector ItemOringin;
//	FVector ItemBounds;
//	item->GetActorBounds(false, ItemOringin, ItemBounds);
//	
//	FTransform PutDownLocation=GetTransform()+FTransform(RootComponent->GetForwardVector()*ItemBounds.GetMax());
//	item->PutDown(PutDownLocation);
//
//	item->PutDown(PutDownLocation);
//}
//
//
//void AMyCharacter::TakeItm(AMyActor* InventoryItem)
//
//{
//	InventoryItem->PickUp();
//	MyInventory->AddToInventory(InventoryItem);
//}

//
//void  AMyCharacter::NotifyHit()
//{
//
//}