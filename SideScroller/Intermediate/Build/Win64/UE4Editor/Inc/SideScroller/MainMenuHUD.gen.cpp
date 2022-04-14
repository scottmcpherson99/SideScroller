// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SideScroller/MainMenuHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainMenuHUD() {}
// Cross Module References
	SIDESCROLLER_API UClass* Z_Construct_UClass_UMainMenuHUD_NoRegister();
	SIDESCROLLER_API UClass* Z_Construct_UClass_UMainMenuHUD();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SideScroller();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UMainMenuHUD::execOnControlClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnControlClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMainMenuHUD::execOnQuitClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnQuitClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMainMenuHUD::execOnNewGameClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnNewGameClicked();
		P_NATIVE_END;
	}
	void UMainMenuHUD::StaticRegisterNativesUMainMenuHUD()
	{
		UClass* Class = UMainMenuHUD::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnControlClicked", &UMainMenuHUD::execOnControlClicked },
			{ "OnNewGameClicked", &UMainMenuHUD::execOnNewGameClicked },
			{ "OnQuitClicked", &UMainMenuHUD::execOnQuitClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMainMenuHUD_OnControlClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainMenuHUD_OnControlClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainMenuHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenuHUD_OnControlClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenuHUD, nullptr, "OnControlClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMainMenuHUD_OnControlClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuHUD_OnControlClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMainMenuHUD_OnControlClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMainMenuHUD_OnControlClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMainMenuHUD_OnNewGameClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainMenuHUD_OnNewGameClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainMenuHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenuHUD_OnNewGameClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenuHUD, nullptr, "OnNewGameClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMainMenuHUD_OnNewGameClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuHUD_OnNewGameClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMainMenuHUD_OnNewGameClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMainMenuHUD_OnNewGameClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMainMenuHUD_OnQuitClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainMenuHUD_OnQuitClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainMenuHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenuHUD_OnQuitClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenuHUD, nullptr, "OnQuitClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMainMenuHUD_OnQuitClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenuHUD_OnQuitClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMainMenuHUD_OnQuitClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMainMenuHUD_OnQuitClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMainMenuHUD_NoRegister()
	{
		return UMainMenuHUD::StaticClass();
	}
	struct Z_Construct_UClass_UMainMenuHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewGameButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewGameButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuitButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QuitButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControlButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ControlButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMainMenuHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SideScroller,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMainMenuHUD_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMainMenuHUD_OnControlClicked, "OnControlClicked" }, // 3628079913
		{ &Z_Construct_UFunction_UMainMenuHUD_OnNewGameClicked, "OnNewGameClicked" }, // 3504112279
		{ &Z_Construct_UFunction_UMainMenuHUD_OnQuitClicked, "OnQuitClicked" }, // 3068990521
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenuHUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MainMenuHUD.h" },
		{ "ModuleRelativePath", "MainMenuHUD.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenuHUD_Statics::NewProp_NewGameButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MainMenuHUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainMenuHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenuHUD_Statics::NewProp_NewGameButton = { "NewGameButton", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainMenuHUD, NewGameButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainMenuHUD_Statics::NewProp_NewGameButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuHUD_Statics::NewProp_NewGameButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenuHUD_Statics::NewProp_QuitButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MainMenuHUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainMenuHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenuHUD_Statics::NewProp_QuitButton = { "QuitButton", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainMenuHUD, QuitButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainMenuHUD_Statics::NewProp_QuitButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuHUD_Statics::NewProp_QuitButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenuHUD_Statics::NewProp_ControlButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MainMenuHUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainMenuHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenuHUD_Statics::NewProp_ControlButton = { "ControlButton", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainMenuHUD, ControlButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainMenuHUD_Statics::NewProp_ControlButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuHUD_Statics::NewProp_ControlButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMainMenuHUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuHUD_Statics::NewProp_NewGameButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuHUD_Statics::NewProp_QuitButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenuHUD_Statics::NewProp_ControlButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMainMenuHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMainMenuHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMainMenuHUD_Statics::ClassParams = {
		&UMainMenuHUD::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMainMenuHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuHUD_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMainMenuHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenuHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMainMenuHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMainMenuHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMainMenuHUD, 3522873214);
	template<> SIDESCROLLER_API UClass* StaticClass<UMainMenuHUD>()
	{
		return UMainMenuHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMainMenuHUD(Z_Construct_UClass_UMainMenuHUD, &UMainMenuHUD::StaticClass, TEXT("/Script/SideScroller"), TEXT("UMainMenuHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMainMenuHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
