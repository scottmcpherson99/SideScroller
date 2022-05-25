// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SideScroller/MainMenuGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainMenuGameModeBase() {}
// Cross Module References
	SIDESCROLLER_API UEnum* Z_Construct_UEnum_SideScroller_EMainMenuWidget();
	UPackage* Z_Construct_UPackage__Script_SideScroller();
	SIDESCROLLER_API UClass* Z_Construct_UClass_AMainMenuGameModeBase_NoRegister();
	SIDESCROLLER_API UClass* Z_Construct_UClass_AMainMenuGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	SIDESCROLLER_API UClass* Z_Construct_UClass_UMainMenuHUD_NoRegister();
	SIDESCROLLER_API UClass* Z_Construct_UClass_UControlWidget_NoRegister();
	SIDESCROLLER_API UClass* Z_Construct_UClass_UHowToWidget_NoRegister();
	SIDESCROLLER_API UClass* Z_Construct_UClass_USavePlayerStats_NoRegister();
// End Cross Module References
	static UEnum* EMainMenuWidget_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SideScroller_EMainMenuWidget, Z_Construct_UPackage__Script_SideScroller(), TEXT("EMainMenuWidget"));
		}
		return Singleton;
	}
	template<> SIDESCROLLER_API UEnum* StaticEnum<EMainMenuWidget>()
	{
		return EMainMenuWidget_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMainMenuWidget(EMainMenuWidget_StaticEnum, TEXT("/Script/SideScroller"), TEXT("EMainMenuWidget"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SideScroller_EMainMenuWidget_Hash() { return 1488059340U; }
	UEnum* Z_Construct_UEnum_SideScroller_EMainMenuWidget()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SideScroller();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMainMenuWidget"), 0, Get_Z_Construct_UEnum_SideScroller_EMainMenuWidget_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMainMenuWidget::EMAINMENUFROMCONTROL", (int64)EMainMenuWidget::EMAINMENUFROMCONTROL },
				{ "EMainMenuWidget::EMAINMENUFROMHOWTO", (int64)EMainMenuWidget::EMAINMENUFROMHOWTO },
				{ "EMainMenuWidget::ECONTROLS", (int64)EMainMenuWidget::ECONTROLS },
				{ "EMainMenuWidget::EHOWTO", (int64)EMainMenuWidget::EHOWTO },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n * \n *///enum to display which widget to display\n" },
				{ "ECONTROLS.Displayname", "Controls" },
				{ "ECONTROLS.Name", "EMainMenuWidget::ECONTROLS" },
				{ "EHOWTO.DisplayName", "HowTo" },
				{ "EHOWTO.Name", "EMainMenuWidget::EHOWTO" },
				{ "EMAINMENUFROMCONTROL.DisplayName", "MainMenuControl" },
				{ "EMAINMENUFROMCONTROL.Name", "EMainMenuWidget::EMAINMENUFROMCONTROL" },
				{ "EMAINMENUFROMHOWTO.DisplayName", "MainMenuHowTo" },
				{ "EMAINMENUFROMHOWTO.Name", "EMainMenuWidget::EMAINMENUFROMHOWTO" },
				{ "ModuleRelativePath", "MainMenuGameModeBase.h" },
				{ "ToolTip", "//enum to display which widget to display" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SideScroller,
				nullptr,
				"EMainMenuWidget",
				"EMainMenuWidget",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void AMainMenuGameModeBase::StaticRegisterNativesAMainMenuGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AMainMenuGameModeBase_NoRegister()
	{
		return AMainMenuGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AMainMenuGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainMenuHUDWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_MainMenuHUDWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mainMenuWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mainMenuWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControlHUDWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ControlHUDWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_controlWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_controlWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HowToHUDWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_HowToHUDWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_howToWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_howToWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_saveState_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_saveState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMainMenuGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SideScroller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainMenuGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MainMenuGameModeBase.h" },
		{ "ModuleRelativePath", "MainMenuGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainMenuGameModeBase_Statics::NewProp_MainMenuHUDWidget_MetaData[] = {
		{ "Category", "Widget" },
		{ "Comment", "//widget class to use for our hud screen\n" },
		{ "ModuleRelativePath", "MainMenuGameModeBase.h" },
		{ "ToolTip", "widget class to use for our hud screen" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMainMenuGameModeBase_Statics::NewProp_MainMenuHUDWidget = { "MainMenuHUDWidget", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainMenuGameModeBase, MainMenuHUDWidget), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMainMenuGameModeBase_Statics::NewProp_MainMenuHUDWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainMenuGameModeBase_Statics::NewProp_MainMenuHUDWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainMenuGameModeBase_Statics::NewProp_mainMenuWidget_MetaData[] = {
		{ "Category", "Widget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainMenuGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainMenuGameModeBase_Statics::NewProp_mainMenuWidget = { "mainMenuWidget", nullptr, (EPropertyFlags)0x00200800000a0809, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainMenuGameModeBase, mainMenuWidget), Z_Construct_UClass_UMainMenuHUD_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMainMenuGameModeBase_Statics::NewProp_mainMenuWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainMenuGameModeBase_Statics::NewProp_mainMenuWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainMenuGameModeBase_Statics::NewProp_ControlHUDWidget_MetaData[] = {
		{ "Category", "Widget" },
		{ "Comment", "//widget class to use for our hud screen\n" },
		{ "ModuleRelativePath", "MainMenuGameModeBase.h" },
		{ "ToolTip", "widget class to use for our hud screen" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMainMenuGameModeBase_Statics::NewProp_ControlHUDWidget = { "ControlHUDWidget", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainMenuGameModeBase, ControlHUDWidget), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMainMenuGameModeBase_Statics::NewProp_ControlHUDWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainMenuGameModeBase_Statics::NewProp_ControlHUDWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainMenuGameModeBase_Statics::NewProp_controlWidget_MetaData[] = {
		{ "Category", "Widget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainMenuGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainMenuGameModeBase_Statics::NewProp_controlWidget = { "controlWidget", nullptr, (EPropertyFlags)0x00200800000a0809, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainMenuGameModeBase, controlWidget), Z_Construct_UClass_UControlWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMainMenuGameModeBase_Statics::NewProp_controlWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainMenuGameModeBase_Statics::NewProp_controlWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainMenuGameModeBase_Statics::NewProp_HowToHUDWidget_MetaData[] = {
		{ "Category", "Widget" },
		{ "Comment", "//widget class to use for our hud screen\n" },
		{ "ModuleRelativePath", "MainMenuGameModeBase.h" },
		{ "ToolTip", "widget class to use for our hud screen" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMainMenuGameModeBase_Statics::NewProp_HowToHUDWidget = { "HowToHUDWidget", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainMenuGameModeBase, HowToHUDWidget), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMainMenuGameModeBase_Statics::NewProp_HowToHUDWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainMenuGameModeBase_Statics::NewProp_HowToHUDWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainMenuGameModeBase_Statics::NewProp_howToWidget_MetaData[] = {
		{ "Category", "Widget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainMenuGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainMenuGameModeBase_Statics::NewProp_howToWidget = { "howToWidget", nullptr, (EPropertyFlags)0x00200800000a0809, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainMenuGameModeBase, howToWidget), Z_Construct_UClass_UHowToWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMainMenuGameModeBase_Statics::NewProp_howToWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainMenuGameModeBase_Statics::NewProp_howToWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainMenuGameModeBase_Statics::NewProp_saveState_MetaData[] = {
		{ "Category", "Save Game" },
		{ "Comment", "//save game state\n" },
		{ "ModuleRelativePath", "MainMenuGameModeBase.h" },
		{ "ToolTip", "save game state" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMainMenuGameModeBase_Statics::NewProp_saveState = { "saveState", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainMenuGameModeBase, saveState), Z_Construct_UClass_USavePlayerStats_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMainMenuGameModeBase_Statics::NewProp_saveState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainMenuGameModeBase_Statics::NewProp_saveState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMainMenuGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainMenuGameModeBase_Statics::NewProp_MainMenuHUDWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainMenuGameModeBase_Statics::NewProp_mainMenuWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainMenuGameModeBase_Statics::NewProp_ControlHUDWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainMenuGameModeBase_Statics::NewProp_controlWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainMenuGameModeBase_Statics::NewProp_HowToHUDWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainMenuGameModeBase_Statics::NewProp_howToWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainMenuGameModeBase_Statics::NewProp_saveState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMainMenuGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainMenuGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMainMenuGameModeBase_Statics::ClassParams = {
		&AMainMenuGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMainMenuGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMainMenuGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMainMenuGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMainMenuGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMainMenuGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMainMenuGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMainMenuGameModeBase, 4283296342);
	template<> SIDESCROLLER_API UClass* StaticClass<AMainMenuGameModeBase>()
	{
		return AMainMenuGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMainMenuGameModeBase(Z_Construct_UClass_AMainMenuGameModeBase, &AMainMenuGameModeBase::StaticClass, TEXT("/Script/SideScroller"), TEXT("AMainMenuGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMainMenuGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
