// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SideScroller/HowToWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHowToWidget() {}
// Cross Module References
	SIDESCROLLER_API UClass* Z_Construct_UClass_UHowToWidget_NoRegister();
	SIDESCROLLER_API UClass* Z_Construct_UClass_UHowToWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SideScroller();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UHowToWidget::execOnCloseClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCloseClicked();
		P_NATIVE_END;
	}
	void UHowToWidget::StaticRegisterNativesUHowToWidget()
	{
		UClass* Class = UHowToWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCloseClicked", &UHowToWidget::execOnCloseClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHowToWidget_OnCloseClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHowToWidget_OnCloseClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HowToWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHowToWidget_OnCloseClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHowToWidget, nullptr, "OnCloseClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHowToWidget_OnCloseClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHowToWidget_OnCloseClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHowToWidget_OnCloseClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHowToWidget_OnCloseClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHowToWidget_NoRegister()
	{
		return UHowToWidget::StaticClass();
	}
	struct Z_Construct_UClass_UHowToWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CloseButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CloseButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHowToWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SideScroller,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHowToWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHowToWidget_OnCloseClicked, "OnCloseClicked" }, // 371184786
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHowToWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "HowToWidget.h" },
		{ "ModuleRelativePath", "HowToWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHowToWidget_Statics::NewProp_CloseButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "HowToWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HowToWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHowToWidget_Statics::NewProp_CloseButton = { "CloseButton", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHowToWidget, CloseButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHowToWidget_Statics::NewProp_CloseButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHowToWidget_Statics::NewProp_CloseButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHowToWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHowToWidget_Statics::NewProp_CloseButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHowToWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHowToWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHowToWidget_Statics::ClassParams = {
		&UHowToWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHowToWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHowToWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHowToWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHowToWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHowToWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHowToWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHowToWidget, 4236614660);
	template<> SIDESCROLLER_API UClass* StaticClass<UHowToWidget>()
	{
		return UHowToWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHowToWidget(Z_Construct_UClass_UHowToWidget, &UHowToWidget::StaticClass, TEXT("/Script/SideScroller"), TEXT("UHowToWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHowToWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
