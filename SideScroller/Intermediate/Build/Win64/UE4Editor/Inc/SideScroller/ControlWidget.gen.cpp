// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SideScroller/ControlWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlWidget() {}
// Cross Module References
	SIDESCROLLER_API UClass* Z_Construct_UClass_UControlWidget_NoRegister();
	SIDESCROLLER_API UClass* Z_Construct_UClass_UControlWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SideScroller();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UControlWidget::execOnCloseClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCloseClicked();
		P_NATIVE_END;
	}
	void UControlWidget::StaticRegisterNativesUControlWidget()
	{
		UClass* Class = UControlWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCloseClicked", &UControlWidget::execOnCloseClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UControlWidget_OnCloseClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlWidget_OnCloseClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ControlWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlWidget_OnCloseClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlWidget, nullptr, "OnCloseClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlWidget_OnCloseClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlWidget_OnCloseClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlWidget_OnCloseClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UControlWidget_OnCloseClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UControlWidget_NoRegister()
	{
		return UControlWidget::StaticClass();
	}
	struct Z_Construct_UClass_UControlWidget_Statics
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
	UObject* (*const Z_Construct_UClass_UControlWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SideScroller,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UControlWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UControlWidget_OnCloseClicked, "OnCloseClicked" }, // 3137647257
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ControlWidget.h" },
		{ "ModuleRelativePath", "ControlWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlWidget_Statics::NewProp_CloseButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ControlWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ControlWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UControlWidget_Statics::NewProp_CloseButton = { "CloseButton", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UControlWidget, CloseButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UControlWidget_Statics::NewProp_CloseButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlWidget_Statics::NewProp_CloseButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UControlWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlWidget_Statics::NewProp_CloseButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UControlWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UControlWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UControlWidget_Statics::ClassParams = {
		&UControlWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UControlWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UControlWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UControlWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UControlWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UControlWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UControlWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UControlWidget, 1974042248);
	template<> SIDESCROLLER_API UClass* StaticClass<UControlWidget>()
	{
		return UControlWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UControlWidget(Z_Construct_UClass_UControlWidget, &UControlWidget::StaticClass, TEXT("/Script/SideScroller"), TEXT("UControlWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UControlWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
