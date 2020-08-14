// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BasisCore/Public/AOSCharacterBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAOSCharacterBase() {}
// Cross Module References
	BASISCORE_API UClass* Z_Construct_UClass_AAOSCharacterBase_NoRegister();
	BASISCORE_API UClass* Z_Construct_UClass_AAOSCharacterBase();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_BasisCore();
// End Cross Module References
	void AAOSCharacterBase::StaticRegisterNativesAAOSCharacterBase()
	{
	}
	UClass* Z_Construct_UClass_AAOSCharacterBase_NoRegister()
	{
		return AAOSCharacterBase::StaticClass();
	}
	struct Z_Construct_UClass_AAOSCharacterBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAOSCharacterBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_BasisCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAOSCharacterBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AOSCharacterBase.h" },
		{ "ModuleRelativePath", "Public/AOSCharacterBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAOSCharacterBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAOSCharacterBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAOSCharacterBase_Statics::ClassParams = {
		&AAOSCharacterBase::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAOSCharacterBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAOSCharacterBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAOSCharacterBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAOSCharacterBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAOSCharacterBase, 1707562043);
	template<> BASISCORE_API UClass* StaticClass<AAOSCharacterBase>()
	{
		return AAOSCharacterBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAOSCharacterBase(Z_Construct_UClass_AAOSCharacterBase, &AAOSCharacterBase::StaticClass, TEXT("/Script/BasisCore"), TEXT("AAOSCharacterBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAOSCharacterBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
