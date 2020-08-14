// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BasisCore/Public/AOSGameplayEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAOSGameplayEffect() {}
// Cross Module References
	BASISCORE_API UClass* Z_Construct_UClass_UAOSGameplayEffect_NoRegister();
	BASISCORE_API UClass* Z_Construct_UClass_UAOSGameplayEffect();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect();
	UPackage* Z_Construct_UPackage__Script_BasisCore();
// End Cross Module References
	void UAOSGameplayEffect::StaticRegisterNativesUAOSGameplayEffect()
	{
	}
	UClass* Z_Construct_UClass_UAOSGameplayEffect_NoRegister()
	{
		return UAOSGameplayEffect::StaticClass();
	}
	struct Z_Construct_UClass_UAOSGameplayEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAOSGameplayEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayEffect,
		(UObject* (*)())Z_Construct_UPackage__Script_BasisCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAOSGameplayEffect_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AOSGameplayEffect.h" },
		{ "ModuleRelativePath", "Public/AOSGameplayEffect.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAOSGameplayEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAOSGameplayEffect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAOSGameplayEffect_Statics::ClassParams = {
		&UAOSGameplayEffect::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAOSGameplayEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAOSGameplayEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAOSGameplayEffect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAOSGameplayEffect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAOSGameplayEffect, 909935891);
	template<> BASISCORE_API UClass* StaticClass<UAOSGameplayEffect>()
	{
		return UAOSGameplayEffect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAOSGameplayEffect(Z_Construct_UClass_UAOSGameplayEffect, &UAOSGameplayEffect::StaticClass, TEXT("/Script/BasisCore"), TEXT("UAOSGameplayEffect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAOSGameplayEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
