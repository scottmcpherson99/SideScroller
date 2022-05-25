// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SideScroller/SideEnemy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSideEnemy() {}
// Cross Module References
	SIDESCROLLER_API UClass* Z_Construct_UClass_ASideEnemy_NoRegister();
	SIDESCROLLER_API UClass* Z_Construct_UClass_ASideEnemy();
	SIDESCROLLER_API UClass* Z_Construct_UClass_AEnemyBase();
	UPackage* Z_Construct_UPackage__Script_SideScroller();
// End Cross Module References
	void ASideEnemy::StaticRegisterNativesASideEnemy()
	{
	}
	UClass* Z_Construct_UClass_ASideEnemy_NoRegister()
	{
		return ASideEnemy::StaticClass();
	}
	struct Z_Construct_UClass_ASideEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASideEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SideScroller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASideEnemy_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SideEnemy.h" },
		{ "ModuleRelativePath", "SideEnemy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASideEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASideEnemy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASideEnemy_Statics::ClassParams = {
		&ASideEnemy::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASideEnemy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASideEnemy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASideEnemy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASideEnemy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASideEnemy, 2080600881);
	template<> SIDESCROLLER_API UClass* StaticClass<ASideEnemy>()
	{
		return ASideEnemy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASideEnemy(Z_Construct_UClass_ASideEnemy, &ASideEnemy::StaticClass, TEXT("/Script/SideScroller"), TEXT("ASideEnemy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASideEnemy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
