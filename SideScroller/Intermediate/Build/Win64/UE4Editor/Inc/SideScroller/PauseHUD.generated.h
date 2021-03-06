// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SIDESCROLLER_PauseHUD_generated_h
#error "PauseHUD.generated.h already included, missing '#pragma once' in PauseHUD.h"
#endif
#define SIDESCROLLER_PauseHUD_generated_h

#define SideScroller_Source_SideScroller_PauseHUD_h_17_SPARSE_DATA
#define SideScroller_Source_SideScroller_PauseHUD_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnQuitClicked); \
	DECLARE_FUNCTION(execOnMainMenuClicked); \
	DECLARE_FUNCTION(execOnResumeClicked);


#define SideScroller_Source_SideScroller_PauseHUD_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnQuitClicked); \
	DECLARE_FUNCTION(execOnMainMenuClicked); \
	DECLARE_FUNCTION(execOnResumeClicked);


#define SideScroller_Source_SideScroller_PauseHUD_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPauseHUD(); \
	friend struct Z_Construct_UClass_UPauseHUD_Statics; \
public: \
	DECLARE_CLASS(UPauseHUD, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SideScroller"), NO_API) \
	DECLARE_SERIALIZER(UPauseHUD)


#define SideScroller_Source_SideScroller_PauseHUD_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUPauseHUD(); \
	friend struct Z_Construct_UClass_UPauseHUD_Statics; \
public: \
	DECLARE_CLASS(UPauseHUD, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SideScroller"), NO_API) \
	DECLARE_SERIALIZER(UPauseHUD)


#define SideScroller_Source_SideScroller_PauseHUD_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPauseHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPauseHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPauseHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPauseHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPauseHUD(UPauseHUD&&); \
	NO_API UPauseHUD(const UPauseHUD&); \
public:


#define SideScroller_Source_SideScroller_PauseHUD_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPauseHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPauseHUD(UPauseHUD&&); \
	NO_API UPauseHUD(const UPauseHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPauseHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPauseHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPauseHUD)


#define SideScroller_Source_SideScroller_PauseHUD_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ResumeButton() { return STRUCT_OFFSET(UPauseHUD, ResumeButton); } \
	FORCEINLINE static uint32 __PPO__MainMenuButton() { return STRUCT_OFFSET(UPauseHUD, MainMenuButton); } \
	FORCEINLINE static uint32 __PPO__QuitButton() { return STRUCT_OFFSET(UPauseHUD, QuitButton); }


#define SideScroller_Source_SideScroller_PauseHUD_h_14_PROLOG
#define SideScroller_Source_SideScroller_PauseHUD_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SideScroller_Source_SideScroller_PauseHUD_h_17_PRIVATE_PROPERTY_OFFSET \
	SideScroller_Source_SideScroller_PauseHUD_h_17_SPARSE_DATA \
	SideScroller_Source_SideScroller_PauseHUD_h_17_RPC_WRAPPERS \
	SideScroller_Source_SideScroller_PauseHUD_h_17_INCLASS \
	SideScroller_Source_SideScroller_PauseHUD_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SideScroller_Source_SideScroller_PauseHUD_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SideScroller_Source_SideScroller_PauseHUD_h_17_PRIVATE_PROPERTY_OFFSET \
	SideScroller_Source_SideScroller_PauseHUD_h_17_SPARSE_DATA \
	SideScroller_Source_SideScroller_PauseHUD_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	SideScroller_Source_SideScroller_PauseHUD_h_17_INCLASS_NO_PURE_DECLS \
	SideScroller_Source_SideScroller_PauseHUD_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIDESCROLLER_API UClass* StaticClass<class UPauseHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SideScroller_Source_SideScroller_PauseHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
