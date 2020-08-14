// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BasisCore/Public/AOSAttributeSet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAOSAttributeSet() {}
// Cross Module References
	BASISCORE_API UClass* Z_Construct_UClass_UAOSAttributeSet_NoRegister();
	BASISCORE_API UClass* Z_Construct_UClass_UAOSAttributeSet();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
	UPackage* Z_Construct_UPackage__Script_BasisCore();
// End Cross Module References
	void UAOSAttributeSet::StaticRegisterNativesUAOSAttributeSet()
	{
	}
	UClass* Z_Construct_UClass_UAOSAttributeSet_NoRegister()
	{
		return UAOSAttributeSet::StaticClass();
	}
	struct Z_Construct_UClass_UAOSAttributeSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAOSAttributeSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAttributeSet,
		(UObject* (*)())Z_Construct_UPackage__Script_BasisCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAOSAttributeSet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AOSAttributeSet.h" },
		{ "ModuleRelativePath", "Public/AOSAttributeSet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAOSAttributeSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAOSAttributeSet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAOSAttributeSet_Statics::ClassParams = {
		&UAOSAttributeSet::StaticClass,
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
		0x003000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAOSAttributeSet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAOSAttributeSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAOSAttributeSet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAOSAttributeSet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAOSAttributeSet, 4058336977);
	template<> BASISCORE_API UClass* StaticClass<UAOSAttributeSet>()
	{
		return UAOSAttributeSet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAOSAttributeSet(Z_Construct_UClass_UAOSAttributeSet, &UAOSAttributeSet::StaticClass, TEXT("/Script/BasisCore"), TEXT("UAOSAttributeSet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAOSAttributeSet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
