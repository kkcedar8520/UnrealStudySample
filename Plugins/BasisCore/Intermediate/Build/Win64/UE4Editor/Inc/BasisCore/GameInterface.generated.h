// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BASISCORE_GameInterface_generated_h
#error "GameInterface.generated.h already included, missing '#pragma once' in GameInterface.h"
#endif
#define BASISCORE_GameInterface_generated_h

#define ArenaBattle_Plugins_BasisCore_Source_BasisCore_Public_GameInterface_h_12_SPARSE_DATA
#define ArenaBattle_Plugins_BasisCore_Source_BasisCore_Public_GameInterface_h_12_RPC_WRAPPERS \
	virtual void OnImpPostBeginPlay_Implementation() {}; \
 \
	DECLARE_FUNCTION(execOnImpPostBeginPlay_Implementation); \
	DECLARE_FUNCTION(execOnImpPostBeginPlay);


#define ArenaBattle_Plugins_BasisCore_Source_BasisCore_Public_GameInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnImpPostBeginPlay_Implementation); \
	DECLARE_FUNCTION(execOnImpPostBeginPlay);


#define ArenaBattle_Plugins_BasisCore_Source_BasisCore_Public_GameInterface_h_12_EVENT_PARMS
#define ArenaBattle_Plugins_BasisCore_Source_BasisCore_Public_GameInterface_h_12_CALLBACK_WRAPPERS
#define ArenaBattle_Plugins_BasisCore_Source_BasisCore_Public_GameInterface_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameInterface(UGameInterface&&); \
	NO_API UGameInterface(const UGameInterface&); \
public:


#define ArenaBattle_Plugins_BasisCore_Source_BasisCore_Public_GameInterface_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameInterface(UGameInterface&&); \
	NO_API UGameInterface(const UGameInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameInterface)


#define ArenaBattle_Plugins_BasisCore_Source_BasisCore_Public_GameInterface_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUGameInterface(); \
	friend struct Z_Construct_UClass_UGameInterface_Statics; \
public: \
	DECLARE_CLASS(UGameInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/BasisCore"), NO_API) \
	DECLARE_SERIALIZER(UGameInterface)


#define ArenaBattle_Plugins_BasisCore_Source_BasisCore_Public_GameInterface_h_12_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	ArenaBattle_Plugins_BasisCore_Source_BasisCore_Public_GameInterface_h_12_GENERATED_UINTERFACE_BODY() \
	ArenaBattle_Plugins_BasisCore_Source_BasisCore_Public_GameInterface_h_12_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ArenaBattle_Plugins_BasisCore_Source_BasisCore_Public_GameInterface_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	ArenaBattle_Plugins_BasisCore_Source_BasisCore_Public_GameInterface_h_12_GENERATED_UINTERFACE_BODY() \
	ArenaBattle_Plugins_BasisCore_Source_BasisCore_Public_GameInterface_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ArenaBattle_Plugins_BasisCore_Source_BasisCore_Public_GameInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IGameInterface() {} \
public: \
	typedef UGameInterface UClassType; \
	typedef IGameInterface ThisClass; \
	static void Execute_OnImpPostBeginPlay(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define ArenaBattle_Plugins_BasisCore_Source_BasisCore_Public_GameInterface_h_12_INCLASS_IINTERFACE \
protected: \
	virtual ~IGameInterface() {} \
public: \
	typedef UGameInterface UClassType; \
	typedef IGameInterface ThisClass; \
	static void Execute_OnImpPostBeginPlay(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define ArenaBattle_Plugins_BasisCore_Source_BasisCore_Public_GameInterface_h_9_PROLOG \
	ArenaBattle_Plugins_BasisCore_Source_BasisCore_Public_GameInterface_h_12_EVENT_PARMS


#define ArenaBattle_Plugins_BasisCore_Source_BasisCore_Public_GameInterface_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArenaBattle_Plugins_BasisCore_Source_BasisCore_Public_GameInterface_h_12_SPARSE_DATA \
	ArenaBattle_Plugins_BasisCore_Source_BasisCore_Public_GameInterface_h_12_RPC_WRAPPERS \
	ArenaBattle_Plugins_BasisCore_Source_BasisCore_Public_GameInterface_h_12_CALLBACK_WRAPPERS \
	ArenaBattle_Plugins_BasisCore_Source_BasisCore_Public_GameInterface_h_12_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ArenaBattle_Plugins_BasisCore_Source_BasisCore_Public_GameInterface_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArenaBattle_Plugins_BasisCore_Source_BasisCore_Public_GameInterface_h_12_SPARSE_DATA \
	ArenaBattle_Plugins_BasisCore_Source_BasisCore_Public_GameInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ArenaBattle_Plugins_BasisCore_Source_BasisCore_Public_GameInterface_h_12_CALLBACK_WRAPPERS \
	ArenaBattle_Plugins_BasisCore_Source_BasisCore_Public_GameInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BASISCORE_API UClass* StaticClass<class UGameInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ArenaBattle_Plugins_BasisCore_Source_BasisCore_Public_GameInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
