// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BasisCore/Public/HGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHGameMode() {}
// Cross Module References
	BASISCORE_API UClass* Z_Construct_UClass_AHGameMode_NoRegister();
	BASISCORE_API UClass* Z_Construct_UClass_AHGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_BasisCore();
// End Cross Module References
	DEFINE_FUNCTION(AHGameMode::execLoginServer)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_id);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_pw);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->LoginServer(Z_Param_Out_id,Z_Param_Out_pw);
		P_NATIVE_END;
	}
	void AHGameMode::StaticRegisterNativesAHGameMode()
	{
		UClass* Class = AHGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoginServer", &AHGameMode::execLoginServer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AHGameMode_LoginServer_Statics
	{
		struct HGameMode_eventLoginServer_Parms
		{
			FText id;
			FText pw;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pw_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_pw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_id_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AHGameMode_LoginServer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HGameMode_eventLoginServer_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHGameMode_LoginServer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HGameMode_eventLoginServer_Parms), &Z_Construct_UFunction_AHGameMode_LoginServer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHGameMode_LoginServer_Statics::NewProp_pw_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_AHGameMode_LoginServer_Statics::NewProp_pw = { "pw", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HGameMode_eventLoginServer_Parms, pw), METADATA_PARAMS(Z_Construct_UFunction_AHGameMode_LoginServer_Statics::NewProp_pw_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AHGameMode_LoginServer_Statics::NewProp_pw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHGameMode_LoginServer_Statics::NewProp_id_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_AHGameMode_LoginServer_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HGameMode_eventLoginServer_Parms, id), METADATA_PARAMS(Z_Construct_UFunction_AHGameMode_LoginServer_Statics::NewProp_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AHGameMode_LoginServer_Statics::NewProp_id_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHGameMode_LoginServer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHGameMode_LoginServer_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHGameMode_LoginServer_Statics::NewProp_pw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHGameMode_LoginServer_Statics::NewProp_id,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHGameMode_LoginServer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHGameMode_LoginServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHGameMode, nullptr, "LoginServer", nullptr, nullptr, sizeof(HGameMode_eventLoginServer_Parms), Z_Construct_UFunction_AHGameMode_LoginServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHGameMode_LoginServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHGameMode_LoginServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHGameMode_LoginServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHGameMode_LoginServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHGameMode_LoginServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AHGameMode_NoRegister()
	{
		return AHGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AHGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BasisCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AHGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AHGameMode_LoginServer, "LoginServer" }, // 3274644081
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "HGameMode.h" },
		{ "ModuleRelativePath", "Public/HGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHGameMode_Statics::ClassParams = {
		&AHGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AHGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHGameMode, 3444529337);
	template<> BASISCORE_API UClass* StaticClass<AHGameMode>()
	{
		return AHGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHGameMode(Z_Construct_UClass_AHGameMode, &AHGameMode::StaticClass, TEXT("/Script/BasisCore"), TEXT("AHGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
