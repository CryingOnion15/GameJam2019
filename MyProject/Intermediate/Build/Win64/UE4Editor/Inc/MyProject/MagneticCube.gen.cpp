// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/MagneticCube.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMagneticCube() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_AMagneticCube_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_AMagneticCube();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MyProject();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AMagneticCube::StaticRegisterNativesAMagneticCube()
	{
	}
	UClass* Z_Construct_UClass_AMagneticCube_NoRegister()
	{
		return AMagneticCube::StaticClass();
	}
	struct Z_Construct_UClass_AMagneticCube_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAttract_MetaData[];
#endif
		static void NewProp_bAttract_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAttract;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cube_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Cube;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CubeMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CubeMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBlue_MetaData[];
#endif
		static void NewProp_bBlue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBlue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRed_MetaData[];
#endif
		static void NewProp_bRed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMagneticCube_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagneticCube_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MagneticCube.h" },
		{ "ModuleRelativePath", "MagneticCube.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagneticCube_Statics::NewProp_bAttract_MetaData[] = {
		{ "Category", "Attract" },
		{ "ModuleRelativePath", "MagneticCube.h" },
	};
#endif
	void Z_Construct_UClass_AMagneticCube_Statics::NewProp_bAttract_SetBit(void* Obj)
	{
		((AMagneticCube*)Obj)->bAttract = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMagneticCube_Statics::NewProp_bAttract = { "bAttract", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMagneticCube), &Z_Construct_UClass_AMagneticCube_Statics::NewProp_bAttract_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMagneticCube_Statics::NewProp_bAttract_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMagneticCube_Statics::NewProp_bAttract_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagneticCube_Statics::NewProp_Cube_MetaData[] = {
		{ "Category", "MagneticCube" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MagneticCube.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMagneticCube_Statics::NewProp_Cube = { "Cube", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMagneticCube, Cube), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMagneticCube_Statics::NewProp_Cube_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMagneticCube_Statics::NewProp_Cube_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagneticCube_Statics::NewProp_CubeMesh_MetaData[] = {
		{ "Category", "MagneticCube" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MagneticCube.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMagneticCube_Statics::NewProp_CubeMesh = { "CubeMesh", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMagneticCube, CubeMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMagneticCube_Statics::NewProp_CubeMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMagneticCube_Statics::NewProp_CubeMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagneticCube_Statics::NewProp_bBlue_MetaData[] = {
		{ "Category", "MagneticCube" },
		{ "ModuleRelativePath", "MagneticCube.h" },
	};
#endif
	void Z_Construct_UClass_AMagneticCube_Statics::NewProp_bBlue_SetBit(void* Obj)
	{
		((AMagneticCube*)Obj)->bBlue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMagneticCube_Statics::NewProp_bBlue = { "bBlue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMagneticCube), &Z_Construct_UClass_AMagneticCube_Statics::NewProp_bBlue_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMagneticCube_Statics::NewProp_bBlue_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMagneticCube_Statics::NewProp_bBlue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagneticCube_Statics::NewProp_bRed_MetaData[] = {
		{ "Category", "MagneticCube" },
		{ "ModuleRelativePath", "MagneticCube.h" },
	};
#endif
	void Z_Construct_UClass_AMagneticCube_Statics::NewProp_bRed_SetBit(void* Obj)
	{
		((AMagneticCube*)Obj)->bRed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMagneticCube_Statics::NewProp_bRed = { "bRed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMagneticCube), &Z_Construct_UClass_AMagneticCube_Statics::NewProp_bRed_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMagneticCube_Statics::NewProp_bRed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMagneticCube_Statics::NewProp_bRed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMagneticCube_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagneticCube_Statics::NewProp_bAttract,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagneticCube_Statics::NewProp_Cube,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagneticCube_Statics::NewProp_CubeMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagneticCube_Statics::NewProp_bBlue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagneticCube_Statics::NewProp_bRed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMagneticCube_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMagneticCube>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMagneticCube_Statics::ClassParams = {
		&AMagneticCube::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMagneticCube_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AMagneticCube_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AMagneticCube_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMagneticCube_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMagneticCube()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMagneticCube_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMagneticCube, 2507086558);
	template<> MYPROJECT_API UClass* StaticClass<AMagneticCube>()
	{
		return AMagneticCube::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMagneticCube(Z_Construct_UClass_AMagneticCube, &AMagneticCube::StaticClass, TEXT("/Script/MyProject"), TEXT("AMagneticCube"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMagneticCube);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
