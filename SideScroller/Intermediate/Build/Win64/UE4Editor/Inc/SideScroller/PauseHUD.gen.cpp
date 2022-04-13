// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SideScroller/PauseHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePauseHUD() {}
// Cross Module References
	SIDESCROLLER_API UClass* Z_Construct_UClass_UPauseHUD_NoRegister();
	SIDESCROLLER_API UClass* Z_Construct_UClass_UPauseHUD();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SideScroller();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPauseHUD::execOnQuitClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnQuitClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPauseHUD::execOnMainMenuClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMainMenuClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPauseHUD::execOnResumeClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnResumeClicked();
		P_NATIVE_END;
	}
	void UPauseHUD::StaticRegisterNativesUPauseHUD()
	{
		UClass* Class = UPauseHUD::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnMainMenuClicked", &UPauseHUD::execOnMainMenuClicked },
			{ "OnQuitClicked", &UPauseHUD::execOnQuitClicked },
			{ "OnResumeClicked", &UPauseHUD::execOnResumeClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPauseHUD_OnMainMenuClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPauseHUD_OnMainMenuClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PauseHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPauseHUD_OnMainMenuClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPauseHUD, nullptr, "OnMainMenuClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPauseHUD_OnMainMenuClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseHUD_OnMainMenuClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPauseHUD_OnMainMenuClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPauseHUD_OnMainMenuClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPauseHUD_OnQuitClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPauseHUD_OnQuitClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PauseHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPauseHUD_OnQuitClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPauseHUD, nullptr, "OnQuitClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPauseHUD_OnQuitClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseHUD_OnQuitClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPauseHUD_OnQuitClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPauseHUD_OnQuitClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPauseHUD_OnResumeClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPauseHUD_OnResumeClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PauseHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPauseHUD_OnResumeClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPauseHUD, nullptr, "OnResumeClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPauseHUD_OnResumeClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseHUD_OnResumeClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPauseHUD_OnResumeClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPauseHUD_OnResumeClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPauseHUD_NoRegister()
	{
		return UPauseHUD::StaticClass();
	}
	struct Z_Construct_UClass_UPauseHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResumeButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ResumeButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainMenuButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MainMenuButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuitButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QuitButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPauseHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SideScroller,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPauseHUD_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPauseHUD_OnMainMenuClicked, "OnMainMenuClicked" }, // 2647773151
		{ &Z_Construct_UFunction_UPauseHUD_OnQuitClicked, "OnQuitClicked" }, // 900705883
		{ &Z_Construct_UFunction_UPauseHUD_OnResumeClicked, "OnResumeClicked" }, // 1862350619
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPauseHUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PauseHUD.h" },
		{ "ModuleRelativePath", "PauseHUD.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPauseHUD_Statics::NewProp_ResumeButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PauseHUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PauseHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPauseHUD_Statics::NewProp_ResumeButton = { "ResumeButton", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPauseHUD, ResumeButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPauseHUD_Statics::NewProp_ResumeButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPauseHUD_Statics::NewProp_ResumeButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPauseHUD_Statics::NewProp_MainMenuButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PauseHUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PauseHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPauseHUD_Statics::NewProp_MainMenuButton = { "MainMenuButton", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPauseHUD, MainMenuButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPauseHUD_Statics::NewProp_MainMenuButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPauseHUD_Statics::NewProp_MainMenuButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPauseHUD_Statics::NewProp_QuitButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PauseHUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PauseHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPauseHUD_Statics::NewProp_QuitButton = { "QuitButton", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPauseHUD, QuitButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPauseHUD_Statics::NewProp_QuitButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPauseHUD_Statics::NewProp_QuitButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPauseHUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPauseHUD_Statics::NewProp_ResumeButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPauseHUD_Statics::NewProp_MainMenuButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPauseHUD_Statics::NewProp_QuitButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPauseHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPauseHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPauseHUD_Statics::ClassParams = {
		&UPauseHUD::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPauseHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPauseHUD_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPauseHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPauseHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPauseHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPauseHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPauseHUD, 940548285);
	template<> SIDESCROLLER_API UClass* StaticClass<UPauseHUD>()
	{
		return UPauseHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPauseHUD(Z_Construct_UClass_UPauseHUD, &UPauseHUD::StaticClass, TEXT("/Script/SideScroller"), TEXT("UPauseHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPauseHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
