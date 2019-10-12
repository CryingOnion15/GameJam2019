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
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMagneticCube_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMagneticCube>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMagneticCube_Statics::ClassParams = {
		&AMagneticCube::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
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
	IMPLEMENT_CLASS(AMagneticCube, 1760685237);
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
