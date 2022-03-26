// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SIDESCROLLER_SideEnemy_generated_h
#error "SideEnemy.generated.h already included, missing '#pragma once' in SideEnemy.h"
#endif
#define SIDESCROLLER_SideEnemy_generated_h

#define SideScroller_Source_SideScroller_SideEnemy_h_15_SPARSE_DATA
#define SideScroller_Source_SideScroller_SideEnemy_h_15_RPC_WRAPPERS
#define SideScroller_Source_SideScroller_SideEnemy_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define SideScroller_Source_SideScroller_SideEnemy_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASideEnemy(); \
	friend struct Z_Construct_UClass_ASideEnemy_Statics; \
public: \
	DECLARE_CLASS(ASideEnemy, AEnemyBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SideScroller"), NO_API) \
	DECLARE_SERIALIZER(ASideEnemy)


#define SideScroller_Source_SideScroller_SideEnemy_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASideEnemy(); \
	friend struct Z_Construct_UClass_ASideEnemy_Statics; \
public: \
	DECLARE_CLASS(ASideEnemy, AEnemyBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SideScroller"), NO_API) \
	DECLARE_SERIALIZER(ASideEnemy)


#define SideScroller_Source_SideScroller_SideEnemy_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASideEnemy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASideEnemy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASideEnemy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASideEnemy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASideEnemy(ASideEnemy&&); \
	NO_API ASideEnemy(const ASideEnemy&); \
public:


#define SideScroller_Source_SideScroller_SideEnemy_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASideEnemy() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASideEnemy(ASideEnemy&&); \
	NO_API ASideEnemy(const ASideEnemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASideEnemy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASideEnemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASideEnemy)


#define SideScroller_Source_SideScroller_SideEnemy_h_15_PRIVATE_PROPERTY_OFFSET
#define SideScroller_Source_SideScroller_SideEnemy_h_12_PROLOG
#define SideScroller_Source_SideScroller_SideEnemy_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SideScroller_Source_SideScroller_SideEnemy_h_15_PRIVATE_PROPERTY_OFFSET \
	SideScroller_Source_SideScroller_SideEnemy_h_15_SPARSE_DATA \
	SideScroller_Source_SideScroller_SideEnemy_h_15_RPC_WRAPPERS \
	SideScroller_Source_SideScroller_SideEnemy_h_15_INCLASS \
	SideScroller_Source_SideScroller_SideEnemy_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SideScroller_Source_SideScroller_SideEnemy_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SideScroller_Source_SideScroller_SideEnemy_h_15_PRIVATE_PROPERTY_OFFSET \
	SideScroller_Source_SideScroller_SideEnemy_h_15_SPARSE_DATA \
	SideScroller_Source_SideScroller_SideEnemy_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	SideScroller_Source_SideScroller_SideEnemy_h_15_INCLASS_NO_PURE_DECLS \
	SideScroller_Source_SideScroller_SideEnemy_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIDESCROLLER_API UClass* StaticClass<class ASideEnemy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SideScroller_Source_SideScroller_SideEnemy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
