// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SideScroller/SideScrollerGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSideScrollerGameModeBase() {}
// Cross Module References
	SIDESCROLLER_API UClass* Z_Construct_UClass_ASideScrollerGameModeBase_NoRegister();
	SIDESCROLLER_API UClass* Z_Construct_UClass_ASideScrollerGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_SideScroller();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	SIDESCROLLER_API UClass* Z_Construct_UClass_UGameScreenHUD_NoRegister();
// End Cross Module References
	void ASideScrollerGameModeBase::StaticRegisterNativesASideScrollerGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ASideScrollerGameModeBase_NoRegister()
	{
		return ASideScrollerGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ASideScrollerGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameScreenHUDWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GameScreenHUDWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_gameWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_levelTimeLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_levelTimeLength;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASideScrollerGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SideScroller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASideScrollerGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SideScrollerGameModeBase.h" },
		{ "ModuleRelativePath", "SideScrollerGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASideScrollerGameModeBase_Statics::NewProp_GameScreenHUDWidget_MetaData[] = {
		{ "Category", "Widget" },
		{ "Comment", "//widget class to use for our hud screen\n" },
		{ "ModuleRelativePath", "SideScrollerGameModeBase.h" },
		{ "ToolTip", "widget class to use for our hud screen" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASideScrollerGameModeBase_Statics::NewProp_GameScreenHUDWidget = { "GameScreenHUDWidget", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASideScrollerGameModeBase, GameScreenHUDWidget), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASideScrollerGameModeBase_Statics::NewProp_GameScreenHUDWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASideScrollerGameModeBase_Statics::NewProp_GameScreenHUDWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASideScrollerGameModeBase_Statics::NewProp_gameWidget_MetaData[] = {
		{ "Category", "Widget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SideScrollerGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASideScrollerGameModeBase_Statics::NewProp_gameWidget = { "gameWidget", nullptr, (EPropertyFlags)0x00200800000a0809, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASideScrollerGameModeBase, gameWidget), Z_Construct_UClass_UGameScreenHUD_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASideScrollerGameModeBase_Statics::NewProp_gameWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASideScrollerGameModeBase_Statics::NewProp_gameWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASideScrollerGameModeBase_Statics::NewProp_levelTimeLength_MetaData[] = {
		{ "Category", "Game Settings" },
		{ "ModuleRelativePath", "SideScrollerGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASideScrollerGameModeBase_Statics::NewProp_levelTimeLength = { "levelTimeLength", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASideScrollerGameModeBase, levelTimeLength), METADATA_PARAMS(Z_Construct_UClass_ASideScrollerGameModeBase_Statics::NewProp_levelTimeLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASideScrollerGameModeBase_Statics::NewProp_levelTimeLength_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASideScrollerGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASideScrollerGameModeBase_Statics::NewProp_GameScreenHUDWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASideScrollerGameModeBase_Statics::NewProp_gameWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASideScrollerGameModeBase_Statics::NewProp_levelTimeLength,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASideScrollerGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASideScrollerGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASideScrollerGameModeBase_Statics::ClassParams = {
		&ASideScrollerGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASideScrollerGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASideScrollerGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASideScrollerGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASideScrollerGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASideScrollerGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASideScrollerGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASideScrollerGameModeBase, 2927400426);
	template<> SIDESCROLLER_API UClass* StaticClass<ASideScrollerGameModeBase>()
	{
		return ASideScrollerGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASideScrollerGameModeBase(Z_Construct_UClass_ASideScrollerGameModeBase, &ASideScrollerGameModeBase::StaticClass, TEXT("/Script/SideScroller"), TEXT("ASideScrollerGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASideScrollerGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
