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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lives_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_lives;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_coins_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_coins;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_levelName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_levelName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USavePlayerStats_Statics::NewProp_lives_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "SavePlayerStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USavePlayerStats_Statics::NewProp_lives = { "lives", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USavePlayerStats, lives), METADATA_PARAMS(Z_Construct_UClass_USavePlayerStats_Statics::NewProp_lives_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USavePlayerStats_Statics::NewProp_lives_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USavePlayerStats_Statics::NewProp_coins_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "SavePlayerStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USavePlayerStats_Statics::NewProp_coins = { "coins", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USavePlayerStats, coins), METADATA_PARAMS(Z_Construct_UClass_USavePlayerStats_Statics::NewProp_coins_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USavePlayerStats_Statics::NewProp_coins_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USavePlayerStats_Statics::NewProp_levelName_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "SavePlayerStats.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USavePlayerStats_Statics::NewProp_levelName = { "levelName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USavePlayerStats, levelName), METADATA_PARAMS(Z_Construct_UClass_USavePlayerStats_Statics::NewProp_levelName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USavePlayerStats_Statics::NewProp_levelName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USavePlayerStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USavePlayerStats_Statics::NewProp_lives,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USavePlayerStats_Statics::NewProp_coins,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USavePlayerStats_Statics::NewProp_levelName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USavePlayerStats_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USavePlayerStats>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USavePlayerStats_Statics::ClassParams = {
		&USavePlayerStats::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USavePlayerStats_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USavePlayerStats_Statics::PropPointers),
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
	IMPLEMENT_CLASS(USavePlayerStats, 3280841156);
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
