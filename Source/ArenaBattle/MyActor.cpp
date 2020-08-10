// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"
#include"ArenaBattleGameMode.h"
// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	PointLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("POINTLIGHT"));
	LightSphere = CreateDefaultSubobject<USphereComponent>(TEXT("SPhere"));
	

	RootComponent = PointLight;

	LightSphere->SetupAttachment(PointLight);
	LightSphere->InitSphereRadius(200.0f);

	LightSphere->SetCollisionProfileName(TEXT("Trigger"));
	LightSphere->SetCollisionResponseToChannel(ECC_Pawn,ECR_Ignore);// type of reaction after impact 
	LightSphere->SetupAttachment(RootComponent);
	
	
	//LightSphere->OnComponentBeginOverlap.AddDynamic(this, &AMyActor::BeginOverlap);
	//LightSphere->OnComponentEndOverlap.AddDynamic(this, &AMyActor::EndOverlap);
}


// Called when the game starts or when spawned_
void AMyActor::BeginPlay()
{
	Super::BeginPlay();

	AGameModeBase* GameMode = UGameplayStatics::GetGameMode(GetWorld());

	AArenaBattleGameMode* gm = Cast< AArenaBattleGameMode>(GameMode);
	gm->MyStandarddDelegate.AddUObject(this, &AMyActor::EnableLight);
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyActor::ToggleLight()
{
	PointLight->ToggleVisibility();
}

void AMyActor::BeginOverlap
(
	UPrimitiveComponent* OverlappedComponent,
	AActor* OtherActor,
	UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex,
	bool bFromSweep,
	const FHitResult & SweepResult)
{
	ToggleLight();
}
void AMyActor::EndOverlap(
	UPrimitiveComponent* OverlappedComponent,
	AActor* OtherActor,
	UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex)
{
	Destroy();
}

void  AMyActor::NotifyActorBeginOverlap(AActor* OtherActor)
{
	AGameModeBase* GameMode = UGameplayStatics::GetGameMode(GetWorld());

	AArenaBattleGameMode* gm = Cast< AArenaBattleGameMode>(GameMode);
	gm->MyStandarddDelegate.Broadcast();//Validation
	//ToggleLight();
 }
void  AMyActor::NotifyActorEndOverlap(AActor* OtherActor)
{
	
	GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Blue, *(OtherActor->GetName()));
 }


void AMyActor::PickUp()
{
	SetActorTickEnabled(false);
	SetActorHiddenInGame(true);
	SetActorEnableCollision(false);
}

void AMyActor::PutDown(FTransform Target)
{
	SetActorTickEnabled(true);
	SetActorHiddenInGame(false);
	SetActorEnableCollision(true);
	SetActorLocation(Target.GetLocation());
}

void AMyActor::EnableLight()
{
	PointLight->SetVisibility(true);
}
