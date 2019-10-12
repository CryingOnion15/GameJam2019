// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/MagnaMan.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMagnaMan() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_AMagnaMan_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_AMagnaMan();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
	void AMagnaMan::StaticRegisterNativesAMagnaMan()
	{
	}
	UClass* Z_Construct_UClass_AMagnaMan_NoRegister()
	{
		return AMagnaMan::StaticClass();
	}
	struct Z_Construct_UClass_AMagnaMan_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMagnaMan_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagnaMan_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MagnaMan.h" },
		{ "ModuleRelativePath", "MagnaMan.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMagnaMan_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMagnaMan>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMagnaMan_Statics::ClassParams = {
		&AMagnaMan::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMagnaMan_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMagnaMan_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMagnaMan()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMagnaMan_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMagnaMan, 3092462382);
	template<> MYPROJECT_API UClass* StaticClass<AMagnaMan>()
	{
		return AMagnaMan::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMagnaMan(Z_Construct_UClass_AMagnaMan, &AMagnaMan::StaticClass, TEXT("/Script/MyProject"), TEXT("AMagnaMan"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMagnaMan);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
