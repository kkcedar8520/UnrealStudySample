// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BasisCore/Public/SampleActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSampleActor() {}
// Cross Module References
	BASISCORE_API UClass* Z_Construct_UClass_ASampleActor_NoRegister();
	BASISCORE_API UClass* Z_Construct_UClass_ASampleActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BasisCore();
	BASISCORE_API UClass* Z_Construct_UClass_UGameInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASampleActor::execBeginPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginPlay();
		P_NATIVE_END;
	}
	void ASampleActor::StaticRegisterNativesASampleActor()
	{
		UClass* Class = ASampleActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginPlay", &ASampleActor::execBeginPlay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASampleActor_BeginPlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASampleActor_BeginPlay_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//UFUNCTION(BlueprintCallable)\n//\x09void OnSampleEvent();\n" },
		{ "ModuleRelativePath", "Public/SampleActor.h" },
		{ "ToolTip", "UFUNCTION(BlueprintCallable)\n       void OnSampleEvent();" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASampleActor_BeginPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASampleActor, nullptr, "BeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASampleActor_BeginPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASampleActor_BeginPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASampleActor_BeginPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASampleActor_BeginPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASampleActor_NoRegister()
	{
		return ASampleActor::StaticClass();
	}
	struct Z_Construct_UClass_ASampleActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASampleActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BasisCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASampleActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASampleActor_BeginPlay, "BeginPlay" }, // 2574145401
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASampleActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SampleActor.h" },
		{ "ModuleRelativePath", "Public/SampleActor.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASampleActor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGameInterface_NoRegister, (int32)VTABLE_OFFSET(ASampleActor, IGameInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASampleActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASampleActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASampleActor_Statics::ClassParams = {
		&ASampleActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASampleActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASampleActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASampleActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASampleActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASampleActor, 1272419990);
	template<> BASISCORE_API UClass* StaticClass<ASampleActor>()
	{
		return ASampleActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASampleActor(Z_Construct_UClass_ASampleActor, &ASampleActor::StaticClass, TEXT("/Script/BasisCore"), TEXT("ASampleActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASampleActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
