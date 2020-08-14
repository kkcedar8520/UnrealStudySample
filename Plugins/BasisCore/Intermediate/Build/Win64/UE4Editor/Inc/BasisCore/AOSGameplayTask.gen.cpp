// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BasisCore/Public/AOSGameplayTask.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAOSGameplayTask() {}
// Cross Module References
	BASISCORE_API UClass* Z_Construct_UClass_UAOSGameplayTask_NoRegister();
	BASISCORE_API UClass* Z_Construct_UClass_UAOSGameplayTask();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTask();
	UPackage* Z_Construct_UPackage__Script_BasisCore();
// End Cross Module References
	void UAOSGameplayTask::StaticRegisterNativesUAOSGameplayTask()
	{
	}
	UClass* Z_Construct_UClass_UAOSGameplayTask_NoRegister()
	{
		return UAOSGameplayTask::StaticClass();
	}
	struct Z_Construct_UClass_UAOSGameplayTask_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAOSGameplayTask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayTask,
		(UObject* (*)())Z_Construct_UPackage__Script_BasisCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAOSGameplayTask_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AOSGameplayTask.h" },
		{ "ModuleRelativePath", "Public/AOSGameplayTask.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAOSGameplayTask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAOSGameplayTask>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAOSGameplayTask_Statics::ClassParams = {
		&UAOSGameplayTask::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAOSGameplayTask_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAOSGameplayTask_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAOSGameplayTask()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAOSGameplayTask_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAOSGameplayTask, 2648206311);
	template<> BASISCORE_API UClass* StaticClass<UAOSGameplayTask>()
	{
		return UAOSGameplayTask::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAOSGameplayTask(Z_Construct_UClass_UAOSGameplayTask, &UAOSGameplayTask::StaticClass, TEXT("/Script/BasisCore"), TEXT("UAOSGameplayTask"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAOSGameplayTask);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
