// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SideScroller/Shooter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooter() {}
// Cross Module References
	SIDESCROLLER_API UClass* Z_Construct_UClass_AShooter_NoRegister();
	SIDESCROLLER_API UClass* Z_Construct_UClass_AShooter();
	PAPER2D_API UClass* Z_Construct_UClass_APaperSpriteActor();
	UPackage* Z_Construct_UPackage__Script_SideScroller();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSpriteComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SIDESCROLLER_API UClass* Z_Construct_UClass_ABullet_NoRegister();
// End Cross Module References
	void AShooter::StaticRegisterNativesAShooter()
	{
	}
	UClass* Z_Construct_UClass_AShooter_NoRegister()
	{
		return AShooter::StaticClass();
	}
	struct Z_Construct_UClass_AShooter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_spawnVector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_spawnVector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_spriteComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_spriteComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_traceLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_traceLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_resetDoOnce_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_resetDoOnce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_shootArrowTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_shootArrowTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_enemyToSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_enemyToSpawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShooter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APaperSpriteActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SideScroller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Shooter.h" },
		{ "ModuleRelativePath", "Shooter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooter_Statics::NewProp_spawnVector_MetaData[] = {
		{ "Category", "Spawn" },
		{ "MakeEditWidget", "TRUE" },
		{ "ModuleRelativePath", "Shooter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShooter_Statics::NewProp_spawnVector = { "spawnVector", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooter, spawnVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AShooter_Statics::NewProp_spawnVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooter_Statics::NewProp_spawnVector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooter_Statics::NewProp_spriteComp_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Sprite" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "Sprite,Rendering,Physics,Components|Sprite" },
		{ "ModuleRelativePath", "Shooter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooter_Statics::NewProp_spriteComp = { "spriteComp", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooter, spriteComp), Z_Construct_UClass_UPaperSpriteComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooter_Statics::NewProp_spriteComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooter_Statics::NewProp_spriteComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooter_Statics::NewProp_traceLength_MetaData[] = {
		{ "Category", "RayTrace" },
		{ "ModuleRelativePath", "Shooter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooter_Statics::NewProp_traceLength = { "traceLength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooter, traceLength), METADATA_PARAMS(Z_Construct_UClass_AShooter_Statics::NewProp_traceLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooter_Statics::NewProp_traceLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooter_Statics::NewProp_resetDoOnce_MetaData[] = {
		{ "ModuleRelativePath", "Shooter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShooter_Statics::NewProp_resetDoOnce = { "resetDoOnce", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooter, resetDoOnce), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_AShooter_Statics::NewProp_resetDoOnce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooter_Statics::NewProp_resetDoOnce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooter_Statics::NewProp_shootArrowTimer_MetaData[] = {
		{ "ModuleRelativePath", "Shooter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShooter_Statics::NewProp_shootArrowTimer = { "shootArrowTimer", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooter, shootArrowTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_AShooter_Statics::NewProp_shootArrowTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooter_Statics::NewProp_shootArrowTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooter_Statics::NewProp_enemyToSpawn_MetaData[] = {
		{ "Category", "Type of enemy to spawn" },
		{ "Comment", "//enemy to spawn\n" },
		{ "ModuleRelativePath", "Shooter.h" },
		{ "ToolTip", "enemy to spawn" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AShooter_Statics::NewProp_enemyToSpawn = { "enemyToSpawn", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooter, enemyToSpawn), Z_Construct_UClass_ABullet_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AShooter_Statics::NewProp_enemyToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooter_Statics::NewProp_enemyToSpawn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShooter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooter_Statics::NewProp_spawnVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooter_Statics::NewProp_spriteComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooter_Statics::NewProp_traceLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooter_Statics::NewProp_resetDoOnce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooter_Statics::NewProp_shootArrowTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooter_Statics::NewProp_enemyToSpawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShooter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShooter_Statics::ClassParams = {
		&AShooter::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AShooter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AShooter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AShooter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShooter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShooter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShooter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShooter, 2281587364);
	template<> SIDESCROLLER_API UClass* StaticClass<AShooter>()
	{
		return AShooter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShooter(Z_Construct_UClass_AShooter, &AShooter::StaticClass, TEXT("/Script/SideScroller"), TEXT("AShooter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShooter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
