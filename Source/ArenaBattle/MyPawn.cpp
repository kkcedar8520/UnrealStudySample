// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPawn.h"

// Sets default values
AMyPawn::AMyPawn()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Capsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CAPSULE"));
	Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MESH"));
	Spring = CreateDefaultSubobject<USpringArmComponent>(TEXT("SPRINGARM"));
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("CAMERA"));
	Movement = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("MOVEMENT"));
	PointLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("LIGHT"));

	RootComponent = Capsule;

	Mesh->SetupAttachment(Capsule);
	Spring->SetupAttachment(Capsule);
	Camera->SetupAttachment(Capsule);
	PointLight->SetupAttachment(Capsule);


	PointLight->SetRelativeLocation(FVector(0.0f, 0.0f, 50.0f));
	PointLight->SetLightColor(FLinearColor::Red);
	PointLight->SetVisibleFlag(true);

	Capsule->SetCapsuleHalfHeight(88.0f);
	Capsule->SetCapsuleRadius(34.0f);
	Mesh->SetRelativeLocationAndRotation(FVector(0, 0, -90.0f), FRotator(0.0f, -90.0f,0.0f));
	
	Spring->TargetArmLength = 400.0f;
	Spring->SetRelativeRotation(FRotator(-15.0f, 0.0f, 0.0f));
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> SK_CARDBOARD
	(TEXT("SkeletalMesh'/Game/InfinityBladeWarriors/Character/CompleteCharacters/SK_CharM_Cardboard.SK_CharM_Cardboard'"));

	if (SK_CARDBOARD.Succeeded())
	{
		Mesh->SetSkeletalMesh(SK_CARDBOARD.Object);

	}

}

// Called when the game starts or when spawned
void AMyPawn::BeginPlay()
{
	Super::BeginPlay();
	
	for (AActor* Component : Children)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Blue, *Component->GetFName().ToString());
	}
	
	//CDO CREATE SINCE INSTANCE ADD COMPONENT
	for (UActorComponent* Component : GetInstanceComponents())
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Blue, *Component->GetFName().ToString());
	}
	//ADD COMPONENTS
	for (UActorComponent* Component : GetComponents())
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Blue, *Component->GetFName().ToString());
	}

}

// Called every frame
void AMyPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis(TEXT("MoveFoward"), this, &AMyPawn::MoveFoward);
	PlayerInputComponent->BindAxis(TEXT("MoveRight"), this, &AMyPawn::MoveRight);
}

void AMyPawn::ToggleLight()
{
	PointLight->ToggleVisibility();
}

void  AMyPawn::MoveFoward(float value)
{
	AddMovementInput(GetActorForwardVector(), value);

}
void  AMyPawn::MoveRight(float value)
{
	AddMovementInput(GetActorRightVector(), value);
}