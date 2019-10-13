// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/MagMan.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMagMan() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_AMagMan_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_AMagMan();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_MyProject();
	MYPROJECT_API UFunction* Z_Construct_UFunction_AMagMan_BlueRay();
	MYPROJECT_API UFunction* Z_Construct_UFunction_AMagMan_MakeRay();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	MYPROJECT_API UFunction* Z_Construct_UFunction_AMagMan_RedRay();
// End Cross Module References
	void AMagMan::StaticRegisterNativesAMagMan()
	{
		UClass* Class = AMagMan::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BlueRay", &AMagMan::execBlueRay },
			{ "MakeRay", &AMagMan::execMakeRay },
			{ "RedRay", &AMagMan::execRedRay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMagMan_BlueRay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMagMan_BlueRay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MagMan.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMagMan_BlueRay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMagMan, nullptr, "BlueRay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMagMan_BlueRay_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMagMan_BlueRay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMagMan_BlueRay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMagMan_BlueRay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMagMan_MakeRay_Statics
	{
		struct MagMan_eventMakeRay_Parms
		{
			FColor col;
			FHitResult ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_col;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMagMan_MakeRay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagMan_eventMakeRay_Parms, ReturnValue), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMagMan_MakeRay_Statics::NewProp_col = { "col", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MagMan_eventMakeRay_Parms, col), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMagMan_MakeRay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMagMan_MakeRay_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMagMan_MakeRay_Statics::NewProp_col,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMagMan_MakeRay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MagMan.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMagMan_MakeRay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMagMan, nullptr, "MakeRay", nullptr, nullptr, sizeof(MagMan_eventMakeRay_Parms), Z_Construct_UFunction_AMagMan_MakeRay_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMagMan_MakeRay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMagMan_MakeRay_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMagMan_MakeRay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMagMan_MakeRay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMagMan_MakeRay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMagMan_RedRay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMagMan_RedRay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MagMan.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMagMan_RedRay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMagMan, nullptr, "RedRay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMagMan_RedRay_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMagMan_RedRay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMagMan_RedRay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMagMan_RedRay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMagMan_NoRegister()
	{
		return AMagMan::StaticClass();
	}
	struct Z_Construct_UClass_AMagMan_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMagMan_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMagMan_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMagMan_BlueRay, "BlueRay" }, // 3248645300
		{ &Z_Construct_UFunction_AMagMan_MakeRay, "MakeRay" }, // 3644542988
		{ &Z_Construct_UFunction_AMagMan_RedRay, "RedRay" }, // 1142895875
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagMan_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MagMan.h" },
		{ "ModuleRelativePath", "MagMan.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagMan_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */" },
		{ "ModuleRelativePath", "MagMan.h" },
		{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMagMan_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMagMan, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_AMagMan_Statics::NewProp_BaseLookUpRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMagMan_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMagMan_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "MagMan.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMagMan_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMagMan, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_AMagMan_Statics::NewProp_BaseTurnRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMagMan_Statics::NewProp_BaseTurnRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMagMan_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagMan_Statics::NewProp_BaseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagMan_Statics::NewProp_BaseTurnRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMagMan_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMagMan>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMagMan_Statics::ClassParams = {
		&AMagMan::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMagMan_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AMagMan_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AMagMan_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMagMan_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMagMan()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMagMan_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMagMan, 105780920);
	template<> MYPROJECT_API UClass* StaticClass<AMagMan>()
	{
		return AMagMan::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMagMan(Z_Construct_UClass_AMagMan, &AMagMan::StaticClass, TEXT("/Script/MyProject"), TEXT("AMagMan"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMagMan);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
