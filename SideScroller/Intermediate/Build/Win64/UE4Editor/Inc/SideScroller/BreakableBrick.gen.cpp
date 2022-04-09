// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SideScroller/BreakableBrick.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBreakableBrick() {}
// Cross Module References
	SIDESCROLLER_API UClass* Z_Construct_UClass_ABreakableBrick_NoRegister();
	SIDESCROLLER_API UClass* Z_Construct_UClass_ABreakableBrick();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SideScroller();
// End Cross Module References
	void ABreakableBrick::StaticRegisterNativesABreakableBrick()
	{
	}
	UClass* Z_Construct_UClass_ABreakableBrick_NoRegister()
	{
		return ABreakableBrick::StaticClass();
	}
	struct Z_Construct_UClass_ABreakableBrick_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABreakableBrick_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SideScroller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABreakableBrick_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BreakableBrick.h" },
		{ "ModuleRelativePath", "BreakableBrick.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABreakableBrick_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABreakableBrick>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABreakableBrick_Statics::ClassParams = {
		&ABreakableBrick::StaticClass,
		"Engine",
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
		METADATA_PARAMS(Z_Construct_UClass_ABreakableBrick_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABreakableBrick_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABreakableBrick()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABreakableBrick_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABreakableBrick, 2392600836);
	template<> SIDESCROLLER_API UClass* StaticClass<ABreakableBrick>()
	{
		return ABreakableBrick::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABreakableBrick(Z_Construct_UClass_ABreakableBrick, &ABreakableBrick::StaticClass, TEXT("/Script/SideScroller"), TEXT("ABreakableBrick"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABreakableBrick);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
