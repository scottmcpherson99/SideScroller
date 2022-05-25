// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SideScroller/CloudEnemy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCloudEnemy() {}
// Cross Module References
	SIDESCROLLER_API UClass* Z_Construct_UClass_ACloudEnemy_NoRegister();
	SIDESCROLLER_API UClass* Z_Construct_UClass_ACloudEnemy();
	SIDESCROLLER_API UClass* Z_Construct_UClass_AEnemyBase();
	UPackage* Z_Construct_UPackage__Script_SideScroller();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SIDESCROLLER_API UClass* Z_Construct_UClass_ADumbEnemy_NoRegister();
// End Cross Module References
	void ACloudEnemy::StaticRegisterNativesACloudEnemy()
	{
	}
	UClass* Z_Construct_UClass_ACloudEnemy_NoRegister()
	{
		return ACloudEnemy::StaticClass();
	}
	struct Z_Construct_UClass_ACloudEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_enemyToSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_enemyToSpawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACloudEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SideScroller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACloudEnemy_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CloudEnemy.h" },
		{ "ModuleRelativePath", "CloudEnemy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACloudEnemy_Statics::NewProp_enemyToSpawn_MetaData[] = {
		{ "Category", "Type of enemy to spawn" },
		{ "Comment", "//enemy to spawn\n" },
		{ "ModuleRelativePath", "CloudEnemy.h" },
		{ "ToolTip", "enemy to spawn" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACloudEnemy_Statics::NewProp_enemyToSpawn = { "enemyToSpawn", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACloudEnemy, enemyToSpawn), Z_Construct_UClass_ADumbEnemy_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACloudEnemy_Statics::NewProp_enemyToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACloudEnemy_Statics::NewProp_enemyToSpawn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACloudEnemy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACloudEnemy_Statics::NewProp_enemyToSpawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACloudEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACloudEnemy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACloudEnemy_Statics::ClassParams = {
		&ACloudEnemy::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACloudEnemy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACloudEnemy_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACloudEnemy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACloudEnemy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACloudEnemy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACloudEnemy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACloudEnemy, 2366241511);
	template<> SIDESCROLLER_API UClass* StaticClass<ACloudEnemy>()
	{
		return ACloudEnemy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACloudEnemy(Z_Construct_UClass_ACloudEnemy, &ACloudEnemy::StaticClass, TEXT("/Script/SideScroller"), TEXT("ACloudEnemy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACloudEnemy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
