#pragma once



#include "UObject/Interface.h"
#include"GameInterface.generated.h"


UINTERFACE()
class BASISCORE_API UGameInterface :public UInterface
{
	GENERATED_BODY()
};


class BASISCORE_API IGameInterface
{
	GENERATED_BODY()

public:

	
	UFUNCTION(BlueprintNativeEvent, Category = CJH)
		void OnImpPostBeginPlay();

	UFUNCTION()
	virtual	void OnImpPostBeginPlay_Implementation();



	//UFUNCTION( Category = CJH)
	//virtual	 void OnPostBeginPlay();

	//UFUNCTION(//BlueprintImplementableEvent,
	//	//BlueprintCallable,

	//	BlueprintNativeEvent,
	//	Category = CJH)
	//	void OnNatPostBeginPlay();

	//UFUNCTION()
	//virtual void OnNatPostBeginPlay_Implementation();
};
