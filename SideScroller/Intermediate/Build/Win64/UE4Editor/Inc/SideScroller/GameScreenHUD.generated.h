// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SIDESCROLLER_GameScreenHUD_generated_h
#error "GameScreenHUD.generated.h already included, missing '#pragma once' in GameScreenHUD.h"
#endif
#define SIDESCROLLER_GameScreenHUD_generated_h

#define SideScroller_Source_SideScroller_GameScreenHUD_h_16_SPARSE_DATA
#define SideScroller_Source_SideScroller_GameScreenHUD_h_16_RPC_WRAPPERS
#define SideScroller_Source_SideScroller_GameScreenHUD_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define SideScroller_Source_SideScroller_GameScreenHUD_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameScreenHUD(); \
	friend struct Z_Construct_UClass_UGameScreenHUD_Statics; \
public: \
	DECLARE_CLASS(UGameScreenHUD, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SideScroller"), NO_API) \
	DECLARE_SERIALIZER(UGameScreenHUD)


#define SideScroller_Source_SideScroller_GameScreenHUD_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUGameScreenHUD(); \
	friend struct Z_Construct_UClass_UGameScreenHUD_Statics; \
public: \
	DECLARE_CLASS(UGameScreenHUD, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SideScroller"), NO_API) \
	DECLARE_SERIALIZER(UGameScreenHUD)


#define SideScroller_Source_SideScroller_GameScreenHUD_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameScreenHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameScreenHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameScreenHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameScreenHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameScreenHUD(UGameScreenHUD&&); \
	NO_API UGameScreenHUD(const UGameScreenHUD&); \
public:


#define SideScroller_Source_SideScroller_GameScreenHUD_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameScreenHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameScreenHUD(UGameScreenHUD&&); \
	NO_API UGameScreenHUD(const UGameScreenHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameScreenHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameScreenHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameScreenHUD)


#define SideScroller_Source_SideScroller_GameScreenHUD_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlayerCoins() { return STRUCT_OFFSET(UGameScreenHUD, PlayerCoins); } \
	FORCEINLINE static uint32 __PPO__PlayerLives() { return STRUCT_OFFSET(UGameScreenHUD, PlayerLives); }


#define SideScroller_Source_SideScroller_GameScreenHUD_h_13_PROLOG
#define SideScroller_Source_SideScroller_GameScreenHUD_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SideScroller_Source_SideScroller_GameScreenHUD_h_16_PRIVATE_PROPERTY_OFFSET \
	SideScroller_Source_SideScroller_GameScreenHUD_h_16_SPARSE_DATA \
	SideScroller_Source_SideScroller_GameScreenHUD_h_16_RPC_WRAPPERS \
	SideScroller_Source_SideScroller_GameScreenHUD_h_16_INCLASS \
	SideScroller_Source_SideScroller_GameScreenHUD_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SideScroller_Source_SideScroller_GameScreenHUD_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SideScroller_Source_SideScroller_GameScreenHUD_h_16_PRIVATE_PROPERTY_OFFSET \
	SideScroller_Source_SideScroller_GameScreenHUD_h_16_SPARSE_DATA \
	SideScroller_Source_SideScroller_GameScreenHUD_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	SideScroller_Source_SideScroller_GameScreenHUD_h_16_INCLASS_NO_PURE_DECLS \
	SideScroller_Source_SideScroller_GameScreenHUD_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIDESCROLLER_API UClass* StaticClass<class UGameScreenHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SideScroller_Source_SideScroller_GameScreenHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
