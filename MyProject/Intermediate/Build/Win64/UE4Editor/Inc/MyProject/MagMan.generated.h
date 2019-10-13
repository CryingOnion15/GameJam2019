// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FColor;
struct FHitResult;
#ifdef MYPROJECT_MagMan_generated_h
#error "MagMan.generated.h already included, missing '#pragma once' in MagMan.h"
#endif
#define MYPROJECT_MagMan_generated_h

#define MyProject_Source_MyProject_MagMan_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMakeRay) \
	{ \
		P_GET_STRUCT(FColor,Z_Param_col); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FHitResult*)Z_Param__Result=P_THIS->MakeRay(Z_Param_col); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRedRay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RedRay(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBlueRay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BlueRay(); \
		P_NATIVE_END; \
	}


#define MyProject_Source_MyProject_MagMan_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMakeRay) \
	{ \
		P_GET_STRUCT(FColor,Z_Param_col); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FHitResult*)Z_Param__Result=P_THIS->MakeRay(Z_Param_col); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRedRay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RedRay(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBlueRay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BlueRay(); \
		P_NATIVE_END; \
	}


#define MyProject_Source_MyProject_MagMan_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMagMan(); \
	friend struct Z_Construct_UClass_AMagMan_Statics; \
public: \
	DECLARE_CLASS(AMagMan, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AMagMan)


#define MyProject_Source_MyProject_MagMan_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAMagMan(); \
	friend struct Z_Construct_UClass_AMagMan_Statics; \
public: \
	DECLARE_CLASS(AMagMan, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AMagMan)


#define MyProject_Source_MyProject_MagMan_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMagMan(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMagMan) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMagMan); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMagMan); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMagMan(AMagMan&&); \
	NO_API AMagMan(const AMagMan&); \
public:


#define MyProject_Source_MyProject_MagMan_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMagMan(AMagMan&&); \
	NO_API AMagMan(const AMagMan&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMagMan); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMagMan); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMagMan)


#define MyProject_Source_MyProject_MagMan_h_14_PRIVATE_PROPERTY_OFFSET
#define MyProject_Source_MyProject_MagMan_h_10_PROLOG
#define MyProject_Source_MyProject_MagMan_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_MagMan_h_14_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_MagMan_h_14_RPC_WRAPPERS \
	MyProject_Source_MyProject_MagMan_h_14_INCLASS \
	MyProject_Source_MyProject_MagMan_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Source_MyProject_MagMan_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_MagMan_h_14_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_MagMan_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Source_MyProject_MagMan_h_14_INCLASS_NO_PURE_DECLS \
	MyProject_Source_MyProject_MagMan_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_API UClass* StaticClass<class AMagMan>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Source_MyProject_MagMan_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
