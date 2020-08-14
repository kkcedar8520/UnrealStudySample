// Fill out your copyright notice in the Description page of Project Settings.


#include "HGameMode.h"

	// set default pawn class to our Blueprinted character

AHGameMode::AHGameMode()
{
	//static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	//if (PlayerPawnBPClass.Class != NULL)
	//{
	//	DefaultPawnClass = PlayerPawnBPClass.Class;
	//}
}

bool AHGameMode::LoginServer(const FText& id, const FText& pw)
{
	char szID[256] = { 0, };
	std::string idbuffer =
		TCHAR_TO_UTF8(*id.ToString());//unreal transition byte
	return true;
}