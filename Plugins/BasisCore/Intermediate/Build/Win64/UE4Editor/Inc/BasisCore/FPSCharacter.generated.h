// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BASISCORE_FPSCharacter_generated_h
#error "FPSCharacter.generated.h already included, missing '#pragma once' in FPSCharacter.h"
#endif
#define BASISCORE_FPSCharacter_generated_h

#define ArenaBattle_Plugins_BasisCore_Source_BasisCore_Public_FPSCharacter_h_15_SPARSE_DATA
#define ArenaBattle_Plugins_BasisCore_Source_BasisCore_Public_FPSCharacter_h_15_RPC_WRAPPERS
#define ArenaBattle_Plugins_BasisCore_Source_BasisCore_Public_FPSCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define ArenaBattle_Plugins_BasisCore_Source_BasisCore_Public_FPSCharacter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSCharacter(); \
	friend struct Z_Construct_UClass_AFPSCharacter_Statics; \
public: \
	DECLARE_CLASS(AFPSCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BasisCore"), NO_API) \
	DECLARE_SERIALIZER(AFPSCharacter)


#define ArenaBattle_Plugins_BasisCore_Source_BasisCore_Public_FPSCharacter_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAFPSCharacter(); \
	friend struct Z_Construct_UClass_AFPSCharacter_Statics; \
public: \
	DECLARE_CLASS(AFPSCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BasisCore"), NO_API) \
	DECLARE_SERIALIZER(AFPSCharacter)


#define ArenaBattle_Plugins_BasisCore_Source_BasisCore_Public_FPSCharacter_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSCharacter(AFPSCharacter&&); \
	NO_API AFPSCharacter(const AFPSCharacter&); \
public:


#define ArenaBattle_Plugins_BasisCore_Source_BasisCore_Public_FPSCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSCharacter(AFPSCharacter&&); \
	NO_API AFPSCharacter(const AFPSCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPSCharacter)


#define ArenaBattle_Plugins_BasisCore_Source_BasisCore_Public_FPSCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AFPSCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AFPSCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AFPSCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AFPSCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AFPSCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AFPSCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AFPSCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AFPSCharacter, L_MotionController); }


#define ArenaBattle_Plugins_BasisCore_Source_BasisCore_Public_FPSCharacter_h_12_PROLOG
#define ArenaBattle_Plugins_BasisCore_Source_BasisCore_Public_FPSCharacter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArenaBattle_Plugins_BasisCore_Source_BasisCore_Public_FPSCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	ArenaBattle_Plugins_BasisCore_Source_BasisCore_Public_FPSCharacter_h_15_SPARSE_DATA \
	ArenaBattle_Plugins_BasisCore_Source_BasisCore_Public_FPSCharacter_h_15_RPC_WRAPPERS \
	ArenaBattle_Plugins_BasisCore_Source_BasisCore_Public_FPSCharacter_h_15_INCLASS \
	ArenaBattle_Plugins_BasisCore_Source_BasisCore_Public_FPSCharacter_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ArenaBattle_Plugins_BasisCore_Source_BasisCore_Public_FPSCharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArenaBattle_Plugins_BasisCore_Source_BasisCore_Public_FPSCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	ArenaBattle_Plugins_BasisCore_Source_BasisCore_Public_FPSCharacter_h_15_SPARSE_DATA \
	ArenaBattle_Plugins_BasisCore_Source_BasisCore_Public_FPSCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ArenaBattle_Plugins_BasisCore_Source_BasisCore_Public_FPSCharacter_h_15_INCLASS_NO_PURE_DECLS \
	ArenaBattle_Plugins_BasisCore_Source_BasisCore_Public_FPSCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BASISCORE_API UClass* StaticClass<class AFPSCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ArenaBattle_Plugins_BasisCore_Source_BasisCore_Public_FPSCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
