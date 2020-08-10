//// Fill out your copyright notice in the Description page of Project Settings.
//
//
//#include "MyPrimitiveComponent.h"
//
//class FMyVertexBuffer :public FVertexBuffer
//{
//public:
//	TArray<FVector>Vertices;
//
//	virtual void InitRHI()override
//	{
//		FRHIResourceCreateInfo CreateInfo;
//		VertexBufferRHI = RHICreateVertexBuffer(Vertices.Num()*sizeof(FVector),BUF_Static,CreateInfo);
//		void* VertexBufferData=
//			RHILockVertexBuffer(VertexBufferRHI, 0,Vertices.Num*sizeof(FVector),RLM_WriteOnly);
//		{
//			FMemory::Memcpy(VertexBufferData, 0, Vertices.GetData(), Vertices.Num() * sizeof(FVector) );
//		}
//		RHIUnlockVertexBuffer(VertexBufferRHI);
//
//	}
//};
//class FMyIndexBuffer :public FIndexBuffer
//{
//public:
//	TArray<uint32> Indices;
//
//
//
//	virtual void InitRHI()override
//	{
//		FRHIResourceCreateInfo CreateInfo;
//		IndexBufferRHI = RHICreateIndexBuffer(Indices.Num() * sizeof(int32), BUF_Static, CreateInfo);
//		void* IndexBufferData =
//			RHILockInexBuffer(IndexBufferRHI, 0, Indices.Num * sizeof(FVector), RLM_WriteOnly);
//		{
//			FMemory::Memcpy(IndexBufferData, 0, Indices.GetData(), Indices.Num() * sizeof(FVector));
//		}
//		RHILockInexBuffer(IndexBufferRHI);
//
//	}
//};
//class FMySceneProxy :public FPrimitiveSceneProxy
//{
//public:
//	FMySceneProxy(UMyPrimitiveComponent* Component): 
//		FPrimitiveSceneProxy(Component), 
//		Indices(Component->Indices),
//		TheMaterial(Component->Material)
//	{
//		VertexBuffer = FMyVertexBuffer();
//		IndexBuffer = FMyIndexBuffer();
//		for (FVector v: Component->Vertices)
//		{
//			Vertices.Add(FDynamicMeshVertex(v));
//		}
//		IndexBuffer.Indices;
//	}
//	virtual ~FMySceneProxy(){}
//	uint32 GetMemoryFootprint()const override
//	{
//		return sizeof(*this);
//	}
//
//	virtual SIZE_T GetTypeHash() const override;
//	{
//		static size_T UniquePointer;
//		return reinterpret_cast<size_t>(&UniquePointer);
//	 }
//	virtual void GetDynamicMeshElements()
//	{
//		
//		
//		for (int32 VieIndex = 0; VieIndex < Views.Num(); VieIndex++)
//		{
//			FDynamicMeshBuilder MeshBuilder(ERHIFeatureLevel::SM5);
//			MeshBuilder.AddVErties(Vuertices);
//			MeshBuilder.AddTriangles(Indices);
//				MeshBuilder.GetMesh();
//		}
//		
//	}
//
//public:
//	TArray<FDynamicMeshVertex>	Vertices;
//	TArray<int32>				Indices;
//	FMyVertexBuffer				VertexBuffer;
//	FMyIndexBuffer				IndexBuffer;
//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Material)
//		TSubclassOf<UMaterial*> TheMaterial;
//};
//FPrimitiveSceneProxy* UMyPrimitiveComponent::CreateSceneProxy()
//{
//	FPrimitiveSceneProxy* Proxy = nullptr;
//	Proxy = new FMySceneProxy(this);
//}