// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SIDESCROLLER_SavePlayerStats_generated_h
#error "SavePlayerStats.generated.h already included, missing '#pragma once' in SavePlayerStats.h"
#endif
#define SIDESCROLLER_SavePlayerStats_generated_h

#define SideScroller_Source_SideScroller_SavePlayerStats_h_15_SPARSE_DATA
#define SideScroller_Source_SideScroller_SavePlayerStats_h_15_RPC_WRAPPERS
#define SideScroller_Source_SideScroller_SavePlayerStats_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define SideScroller_Source_SideScroller_SavePlayerStats_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSavePlayerStats(); \
	friend struct Z_Construct_UClass_USavePlayerStats_Statics; \
public: \
	DECLARE_CLASS(USavePlayerStats, USaveGame, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SideScroller"), NO_API) \
	DECLARE_SERIALIZER(USavePlayerStats)


#define SideScroller_Source_SideScroller_SavePlayerStats_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUSavePlayerStats(); \
	friend struct Z_Construct_UClass_USavePlayerStats_Statics; \
public: \
	DECLARE_CLASS(USavePlayerStats, USaveGame, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SideScroller"), NO_API) \
	DECLARE_SERIALIZER(USavePlayerStats)


#define SideScroller_Source_SideScroller_SavePlayerStats_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USavePlayerStats(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USavePlayerStats) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USavePlayerStats); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USavePlayerStats); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USavePlayerStats(USavePlayerStats&&); \
	NO_API USavePlayerStats(const USavePlayerStats&); \
public:


#define SideScroller_Source_SideScroller_SavePlayerStats_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USavePlayerStats(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USavePlayerStats(USavePlayerStats&&); \
	NO_API USavePlayerStats(const USavePlayerStats&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USavePlayerStats); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USavePlayerStats); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USavePlayerStats)


#define SideScroller_Source_SideScroller_SavePlayerStats_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__lives() { return STRUCT_OFFSET(USavePlayerStats, lives); } \
	FORCEINLINE static uint32 __PPO__coins() { return STRUCT_OFFSET(USavePlayerStats, coins); } \
	FORCEINLINE static uint32 __PPO__levelName() { return STRUCT_OFFSET(USavePlayerStats, levelName); }


#define SideScroller_Source_SideScroller_SavePlayerStats_h_12_PROLOG
#define SideScroller_Source_SideScroller_SavePlayerStats_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SideScroller_Source_SideScroller_SavePlayerStats_h_15_PRIVATE_PROPERTY_OFFSET \
	SideScroller_Source_SideScroller_SavePlayerStats_h_15_SPARSE_DATA \
	SideScroller_Source_SideScroller_SavePlayerStats_h_15_RPC_WRAPPERS \
	SideScroller_Source_SideScroller_SavePlayerStats_h_15_INCLASS \
	SideScroller_Source_SideScroller_SavePlayerStats_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SideScroller_Source_SideScroller_SavePlayerStats_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SideScroller_Source_SideScroller_SavePlayerStats_h_15_PRIVATE_PROPERTY_OFFSET \
	SideScroller_Source_SideScroller_SavePlayerStats_h_15_SPARSE_DATA \
	SideScroller_Source_SideScroller_SavePlayerStats_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	SideScroller_Source_SideScroller_SavePlayerStats_h_15_INCLASS_NO_PURE_DECLS \
	SideScroller_Source_SideScroller_SavePlayerStats_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIDESCROLLER_API UClass* StaticClass<class USavePlayerStats>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SideScroller_Source_SideScroller_SavePlayerStats_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
