//// Fill out your copyright notice in the Description page of Project Settings.
//
//#pragma once
//
//#include "CoreMinimal.h"
//#include "Components/PrimitiveComponent.h"
//#include "MyPrimitiveComponent.generated.h"
//
///**
// * 
// */
//UCLASS(ClassGroup = (CJH), meta = (BlueprintSpawnableComponent))
//class ARENABATTLE_API UMyPrimitiveComponent : public UPrimitiveComponent
//{
//	GENERATED_BODY()
//public:
//	virtual FPrimitiveSceneProxy* CreateSceneProxy()override;//Essential
//
//
//	TArray<uint32> Indices;
//	TArray<FVector> Vertices;
//
//	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=Material)
//	TSubclassOf<UMaterial*> Material;
//
//	UMyPrimitiveComponent::UMyPrimitiveComponent()
//	{
//		static ConstructorHelpers::FObjectFinder<UMaterial>Matel(TEXT(""));
//		if ((Matel.Succeeded())
//		{
//			Material= Matel.Object;
//		}
//			Vertices.Add(FVector(10, 0, 0));
//			Vertices.Add(FVector(0, 10, 0));
//			Vertices.Add(FVector(0, 0, 10));
//
//			Indices.Add(0);
//			Indices.Add(1);
//			Indices.Add(2);
//		
//	}
//};
