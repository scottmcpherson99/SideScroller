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
	SIDESCROLLER_API UEnum* Z_Construct_UEnum_SideScroller_ESideScrollerPlayState();
	UPackage* Z_Construct_UPackage__Script_SideScroller();
	SIDESCROLLER_API UClass* Z_Construct_UClass_ASideScrollerGameModeBase_NoRegister();
	SIDESCROLLER_API UClass* Z_Construct_UClass_ASideScrollerGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	SIDESCROLLER_API UClass* Z_Construct_UClass_UGameScreenHUD_NoRegister();
	SIDESCROLLER_API UClass* Z_Construct_UClass_UPauseHUD_NoRegister();
// End Cross Module References
	static UEnum* ESideScrollerPlayState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SideScroller_ESideScrollerPlayState, Z_Construct_UPackage__Script_SideScroller(), TEXT("ESideScrollerPlayState"));
		}
		return Singleton;
	}
	template<> SIDESCROLLER_API UEnum* StaticEnum<ESideScrollerPlayState>()
	{
		return ESideScrollerPlayState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESideScrollerPlayState(ESideScrollerPlayState_StaticEnum, TEXT("/Script/SideScroller"), TEXT("ESideScrollerPlayState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SideScroller_ESideScrollerPlayState_Hash() { return 2147441U; }
	UEnum* Z_Construct_UEnum_SideScroller_ESideScrollerPlayState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SideScroller();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESideScrollerPlayState"), 0, Get_Z_Construct_UEnum_SideScroller_ESideScrollerPlayState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESideScrollerPlayState::EPlaying", (int64)ESideScrollerPlayState::EPlaying },
				{ "ESideScrollerPlayState::EPAUSE", (int64)ESideScrollerPlayState::EPAUSE },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n * \n *///enum to store current stat of gameplay\n" },
				{ "EPAUSE.DisplayName", "pause" },
				{ "EPAUSE.Name", "ESideScrollerPlayState::EPAUSE" },
				{ "EPlaying.DisplayName", "playing" },
				{ "EPlaying.Name", "ESideScrollerPlayState::EPlaying" },
				{ "ModuleRelativePath", "SideScrollerGameModeBase.h" },
				{ "ToolTip", "//enum to store current stat of gameplay" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SideScroller,
				nullptr,
				"ESideScrollerPlayState",
				"ESideScrollerPlayState",
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
	DEFINE_FUNCTION(ASideScrollerGameModeBase::execGetCurrentState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESideScrollerPlayState*)Z_Param__Result=P_THIS->GetCurrentState();
		P_NATIVE_END;
	}
	void ASideScrollerGameModeBase::StaticRegisterNativesASideScrollerGameModeBase()
	{
		UClass* Class = ASideScrollerGameModeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentState", &ASideScrollerGameModeBase::execGetCurrentState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASideScrollerGameModeBase_GetCurrentState_Statics
	{
		struct SideScrollerGameModeBase_eventGetCurrentState_Parms
		{
			ESideScrollerPlayState ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASideScrollerGameModeBase_GetCurrentState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASideScrollerGameModeBase_GetCurrentState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SideScrollerGameModeBase_eventGetCurrentState_Parms, ReturnValue), Z_Construct_UEnum_SideScroller_ESideScrollerPlayState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASideScrollerGameModeBase_GetCurrentState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASideScrollerGameModeBase_GetCurrentState_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASideScrollerGameModeBase_GetCurrentState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASideScrollerGameModeBase_GetCurrentState_Statics::Function_MetaDataParams[] = {
		{ "Category", "State" },
		{ "Comment", "//returns the current play state\n" },
		{ "ModuleRelativePath", "SideScrollerGameModeBase.h" },
		{ "ToolTip", "returns the current play state" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASideScrollerGameModeBase_GetCurrentState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASideScrollerGameModeBase, nullptr, "GetCurrentState", nullptr, nullptr, sizeof(SideScrollerGameModeBase_eventGetCurrentState_Parms), Z_Construct_UFunction_ASideScrollerGameModeBase_GetCurrentState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASideScrollerGameModeBase_GetCurrentState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASideScrollerGameModeBase_GetCurrentState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASideScrollerGameModeBase_GetCurrentState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASideScrollerGameModeBase_GetCurrentState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASideScrollerGameModeBase_GetCurrentState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASideScrollerGameModeBase_NoRegister()
	{
		return ASideScrollerGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ASideScrollerGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameScreenHUDWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GameScreenHUDWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PauseScreenHUDWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PauseScreenHUDWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_gameWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pauseWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pauseWidget;
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
	const FClassFunctionLinkInfo Z_Construct_UClass_ASideScrollerGameModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASideScrollerGameModeBase_GetCurrentState, "GetCurrentState" }, // 2226231131
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASideScrollerGameModeBase_Statics::Class_MetaDataParams[] = {
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASideScrollerGameModeBase_Statics::NewProp_PauseScreenHUDWidget_MetaData[] = {
		{ "Category", "Widget" },
		{ "Comment", "//widget class to use for our hud screen\n" },
		{ "ModuleRelativePath", "SideScrollerGameModeBase.h" },
		{ "ToolTip", "widget class to use for our hud screen" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASideScrollerGameModeBase_Statics::NewProp_PauseScreenHUDWidget = { "PauseScreenHUDWidget", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASideScrollerGameModeBase, PauseScreenHUDWidget), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASideScrollerGameModeBase_Statics::NewProp_PauseScreenHUDWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASideScrollerGameModeBase_Statics::NewProp_PauseScreenHUDWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASideScrollerGameModeBase_Statics::NewProp_gameWidget_MetaData[] = {
		{ "Category", "Widget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SideScrollerGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASideScrollerGameModeBase_Statics::NewProp_gameWidget = { "gameWidget", nullptr, (EPropertyFlags)0x00200800000a0809, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASideScrollerGameModeBase, gameWidget), Z_Construct_UClass_UGameScreenHUD_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASideScrollerGameModeBase_Statics::NewProp_gameWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASideScrollerGameModeBase_Statics::NewProp_gameWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASideScrollerGameModeBase_Statics::NewProp_pauseWidget_MetaData[] = {
		{ "Category", "Widget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SideScrollerGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASideScrollerGameModeBase_Statics::NewProp_pauseWidget = { "pauseWidget", nullptr, (EPropertyFlags)0x00200800000a0809, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASideScrollerGameModeBase, pauseWidget), Z_Construct_UClass_UPauseHUD_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASideScrollerGameModeBase_Statics::NewProp_pauseWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASideScrollerGameModeBase_Statics::NewProp_pauseWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASideScrollerGameModeBase_Statics::NewProp_levelTimeLength_MetaData[] = {
		{ "Category", "Game Settings" },
		{ "ModuleRelativePath", "SideScrollerGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASideScrollerGameModeBase_Statics::NewProp_levelTimeLength = { "levelTimeLength", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASideScrollerGameModeBase, levelTimeLength), METADATA_PARAMS(Z_Construct_UClass_ASideScrollerGameModeBase_Statics::NewProp_levelTimeLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASideScrollerGameModeBase_Statics::NewProp_levelTimeLength_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASideScrollerGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASideScrollerGameModeBase_Statics::NewProp_GameScreenHUDWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASideScrollerGameModeBase_Statics::NewProp_PauseScreenHUDWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASideScrollerGameModeBase_Statics::NewProp_gameWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASideScrollerGameModeBase_Statics::NewProp_pauseWidget,
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
		FuncInfo,
		Z_Construct_UClass_ASideScrollerGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(ASideScrollerGameModeBase, 938359575);
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
