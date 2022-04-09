// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SideScroller/GameScreenHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameScreenHUD() {}
// Cross Module References
	SIDESCROLLER_API UClass* Z_Construct_UClass_UGameScreenHUD_NoRegister();
	SIDESCROLLER_API UClass* Z_Construct_UClass_UGameScreenHUD();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SideScroller();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	void UGameScreenHUD::StaticRegisterNativesUGameScreenHUD()
	{
	}
	UClass* Z_Construct_UClass_UGameScreenHUD_NoRegister()
	{
		return UGameScreenHUD::StaticClass();
	}
	struct Z_Construct_UClass_UGameScreenHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerCoins_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerCoins;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerLives_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerLives;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelName_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LevelName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameScreenHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SideScroller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameScreenHUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GameScreenHUD.h" },
		{ "ModuleRelativePath", "GameScreenHUD.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameScreenHUD_Statics::NewProp_PlayerCoins_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "GameScreenHUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GameScreenHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameScreenHUD_Statics::NewProp_PlayerCoins = { "PlayerCoins", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameScreenHUD, PlayerCoins), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameScreenHUD_Statics::NewProp_PlayerCoins_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameScreenHUD_Statics::NewProp_PlayerCoins_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameScreenHUD_Statics::NewProp_PlayerLives_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "GameScreenHUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GameScreenHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameScreenHUD_Statics::NewProp_PlayerLives = { "PlayerLives", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameScreenHUD, PlayerLives), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameScreenHUD_Statics::NewProp_PlayerLives_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameScreenHUD_Statics::NewProp_PlayerLives_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameScreenHUD_Statics::NewProp_LevelName_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "GameScreenHUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GameScreenHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameScreenHUD_Statics::NewProp_LevelName = { "LevelName", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameScreenHUD, LevelName), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameScreenHUD_Statics::NewProp_LevelName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameScreenHUD_Statics::NewProp_LevelName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameScreenHUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameScreenHUD_Statics::NewProp_PlayerCoins,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameScreenHUD_Statics::NewProp_PlayerLives,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameScreenHUD_Statics::NewProp_LevelName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameScreenHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameScreenHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameScreenHUD_Statics::ClassParams = {
		&UGameScreenHUD::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGameScreenHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameScreenHUD_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameScreenHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameScreenHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameScreenHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameScreenHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameScreenHUD, 3699172710);
	template<> SIDESCROLLER_API UClass* StaticClass<UGameScreenHUD>()
	{
		return UGameScreenHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameScreenHUD(Z_Construct_UClass_UGameScreenHUD, &UGameScreenHUD::StaticClass, TEXT("/Script/SideScroller"), TEXT("UGameScreenHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameScreenHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
