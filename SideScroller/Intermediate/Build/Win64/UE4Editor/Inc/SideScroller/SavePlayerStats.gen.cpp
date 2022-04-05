// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SideScroller/SavePlayerStats.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSavePlayerStats() {}
// Cross Module References
	SIDESCROLLER_API UClass* Z_Construct_UClass_USavePlayerStats_NoRegister();
	SIDESCROLLER_API UClass* Z_Construct_UClass_USavePlayerStats();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	UPackage* Z_Construct_UPackage__Script_SideScroller();
// End Cross Module References
	void USavePlayerStats::StaticRegisterNativesUSavePlayerStats()
	{
	}
	UClass* Z_Construct_UClass_USavePlayerStats_NoRegister()
	{
		return USavePlayerStats::StaticClass();
	}
	struct Z_Construct_UClass_USavePlayerStats_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USavePlayerStats_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_SideScroller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USavePlayerStats_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SavePlayerStats.h" },
		{ "ModuleRelativePath", "SavePlayerStats.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USavePlayerStats_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USavePlayerStats>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USavePlayerStats_Statics::ClassParams = {
		&USavePlayerStats::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USavePlayerStats_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USavePlayerStats_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USavePlayerStats()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USavePlayerStats_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USavePlayerStats, 3514481886);
	template<> SIDESCROLLER_API UClass* StaticClass<USavePlayerStats>()
	{
		return USavePlayerStats::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USavePlayerStats(Z_Construct_UClass_USavePlayerStats, &USavePlayerStats::StaticClass, TEXT("/Script/SideScroller"), TEXT("USavePlayerStats"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USavePlayerStats);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
