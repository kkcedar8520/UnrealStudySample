// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BasisCore/Public/GameInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameInterface() {}
// Cross Module References
	BASISCORE_API UClass* Z_Construct_UClass_UGameInterface_NoRegister();
	BASISCORE_API UClass* Z_Construct_UClass_UGameInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_BasisCore();
// End Cross Module References
	DEFINE_FUNCTION(IGameInterface::execOnImpPostBeginPlay_Implementation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnImpPostBeginPlay_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IGameInterface::execOnImpPostBeginPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnImpPostBeginPlay_Implementation();
		P_NATIVE_END;
	}
	void IGameInterface::OnImpPostBeginPlay()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnImpPostBeginPlay instead.");
	}
	void UGameInterface::StaticRegisterNativesUGameInterface()
	{
		UClass* Class = UGameInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnImpPostBeginPlay", &IGameInterface::execOnImpPostBeginPlay },
			{ "OnImpPostBeginPlay_Implementation", &IGameInterface::execOnImpPostBeginPlay_Implementation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameInterface_OnImpPostBeginPlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameInterface_OnImpPostBeginPlay_Statics::Function_MetaDataParams[] = {
		{ "Category", "CJH" },
		{ "ModuleRelativePath", "Public/GameInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameInterface_OnImpPostBeginPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameInterface, nullptr, "OnImpPostBeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameInterface_OnImpPostBeginPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameInterface_OnImpPostBeginPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameInterface_OnImpPostBeginPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameInterface_OnImpPostBeginPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameInterface_OnImpPostBeginPlay_Implementation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameInterface_OnImpPostBeginPlay_Implementation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameInterface_OnImpPostBeginPlay_Implementation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameInterface, nullptr, "OnImpPostBeginPlay_Implementation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameInterface_OnImpPostBeginPlay_Implementation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameInterface_OnImpPostBeginPlay_Implementation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameInterface_OnImpPostBeginPlay_Implementation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameInterface_OnImpPostBeginPlay_Implementation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGameInterface_NoRegister()
	{
		return UGameInterface::StaticClass();
	}
	struct Z_Construct_UClass_UGameInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_BasisCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameInterface_OnImpPostBeginPlay, "OnImpPostBeginPlay" }, // 2397271027
		{ &Z_Construct_UFunction_UGameInterface_OnImpPostBeginPlay_Implementation, "OnImpPostBeginPlay_Implementation" }, // 781084075
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IGameInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameInterface_Statics::ClassParams = {
		&UGameInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UGameInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameInterface, 334721797);
	template<> BASISCORE_API UClass* StaticClass<UGameInterface>()
	{
		return UGameInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameInterface(Z_Construct_UClass_UGameInterface, &UGameInterface::StaticClass, TEXT("/Script/BasisCore"), TEXT("UGameInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameInterface);
	static FName NAME_UGameInterface_OnImpPostBeginPlay = FName(TEXT("OnImpPostBeginPlay"));
	void IGameInterface::Execute_OnImpPostBeginPlay(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UGameInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UGameInterface_OnImpPostBeginPlay);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IGameInterface*)(O->GetNativeInterfaceAddress(UGameInterface::StaticClass())))
		{
			I->OnImpPostBeginPlay_Implementation();
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
