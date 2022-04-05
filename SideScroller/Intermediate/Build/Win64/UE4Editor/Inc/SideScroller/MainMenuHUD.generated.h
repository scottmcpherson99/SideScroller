// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SIDESCROLLER_MainMenuHUD_generated_h
#error "MainMenuHUD.generated.h already included, missing '#pragma once' in MainMenuHUD.h"
#endif
#define SIDESCROLLER_MainMenuHUD_generated_h

#define SideScroller_Source_SideScroller_MainMenuHUD_h_17_SPARSE_DATA
#define SideScroller_Source_SideScroller_MainMenuHUD_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnQuitClicked); \
	DECLARE_FUNCTION(execOnNewGameClicked);


#define SideScroller_Source_SideScroller_MainMenuHUD_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnQuitClicked); \
	DECLARE_FUNCTION(execOnNewGameClicked);


#define SideScroller_Source_SideScroller_MainMenuHUD_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMainMenuHUD(); \
	friend struct Z_Construct_UClass_UMainMenuHUD_Statics; \
public: \
	DECLARE_CLASS(UMainMenuHUD, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SideScroller"), NO_API) \
	DECLARE_SERIALIZER(UMainMenuHUD)


#define SideScroller_Source_SideScroller_MainMenuHUD_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUMainMenuHUD(); \
	friend struct Z_Construct_UClass_UMainMenuHUD_Statics; \
public: \
	DECLARE_CLASS(UMainMenuHUD, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SideScroller"), NO_API) \
	DECLARE_SERIALIZER(UMainMenuHUD)


#define SideScroller_Source_SideScroller_MainMenuHUD_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMainMenuHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMainMenuHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMainMenuHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMainMenuHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMainMenuHUD(UMainMenuHUD&&); \
	NO_API UMainMenuHUD(const UMainMenuHUD&); \
public:


#define SideScroller_Source_SideScroller_MainMenuHUD_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMainMenuHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMainMenuHUD(UMainMenuHUD&&); \
	NO_API UMainMenuHUD(const UMainMenuHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMainMenuHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMainMenuHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMainMenuHUD)


#define SideScroller_Source_SideScroller_MainMenuHUD_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__NewGameButton() { return STRUCT_OFFSET(UMainMenuHUD, NewGameButton); } \
	FORCEINLINE static uint32 __PPO__QuitButton() { return STRUCT_OFFSET(UMainMenuHUD, QuitButton); }


#define SideScroller_Source_SideScroller_MainMenuHUD_h_14_PROLOG
#define SideScroller_Source_SideScroller_MainMenuHUD_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SideScroller_Source_SideScroller_MainMenuHUD_h_17_PRIVATE_PROPERTY_OFFSET \
	SideScroller_Source_SideScroller_MainMenuHUD_h_17_SPARSE_DATA \
	SideScroller_Source_SideScroller_MainMenuHUD_h_17_RPC_WRAPPERS \
	SideScroller_Source_SideScroller_MainMenuHUD_h_17_INCLASS \
	SideScroller_Source_SideScroller_MainMenuHUD_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SideScroller_Source_SideScroller_MainMenuHUD_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SideScroller_Source_SideScroller_MainMenuHUD_h_17_PRIVATE_PROPERTY_OFFSET \
	SideScroller_Source_SideScroller_MainMenuHUD_h_17_SPARSE_DATA \
	SideScroller_Source_SideScroller_MainMenuHUD_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	SideScroller_Source_SideScroller_MainMenuHUD_h_17_INCLASS_NO_PURE_DECLS \
	SideScroller_Source_SideScroller_MainMenuHUD_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIDESCROLLER_API UClass* StaticClass<class UMainMenuHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SideScroller_Source_SideScroller_MainMenuHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
