// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SIDESCROLLER_MainMenuGameModeBase_generated_h
#error "MainMenuGameModeBase.generated.h already included, missing '#pragma once' in MainMenuGameModeBase.h"
#endif
#define SIDESCROLLER_MainMenuGameModeBase_generated_h

#define SideScroller_Source_SideScroller_MainMenuGameModeBase_h_27_SPARSE_DATA
#define SideScroller_Source_SideScroller_MainMenuGameModeBase_h_27_RPC_WRAPPERS
#define SideScroller_Source_SideScroller_MainMenuGameModeBase_h_27_RPC_WRAPPERS_NO_PURE_DECLS
#define SideScroller_Source_SideScroller_MainMenuGameModeBase_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMainMenuGameModeBase(); \
	friend struct Z_Construct_UClass_AMainMenuGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AMainMenuGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/SideScroller"), NO_API) \
	DECLARE_SERIALIZER(AMainMenuGameModeBase)


#define SideScroller_Source_SideScroller_MainMenuGameModeBase_h_27_INCLASS \
private: \
	static void StaticRegisterNativesAMainMenuGameModeBase(); \
	friend struct Z_Construct_UClass_AMainMenuGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AMainMenuGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/SideScroller"), NO_API) \
	DECLARE_SERIALIZER(AMainMenuGameModeBase)


#define SideScroller_Source_SideScroller_MainMenuGameModeBase_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMainMenuGameModeBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMainMenuGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainMenuGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainMenuGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainMenuGameModeBase(AMainMenuGameModeBase&&); \
	NO_API AMainMenuGameModeBase(const AMainMenuGameModeBase&); \
public:


#define SideScroller_Source_SideScroller_MainMenuGameModeBase_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainMenuGameModeBase(AMainMenuGameModeBase&&); \
	NO_API AMainMenuGameModeBase(const AMainMenuGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainMenuGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainMenuGameModeBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMainMenuGameModeBase)


#define SideScroller_Source_SideScroller_MainMenuGameModeBase_h_27_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MainMenuHUDWidget() { return STRUCT_OFFSET(AMainMenuGameModeBase, MainMenuHUDWidget); } \
	FORCEINLINE static uint32 __PPO__mainMenuWidget() { return STRUCT_OFFSET(AMainMenuGameModeBase, mainMenuWidget); } \
	FORCEINLINE static uint32 __PPO__ControlHUDWidget() { return STRUCT_OFFSET(AMainMenuGameModeBase, ControlHUDWidget); } \
	FORCEINLINE static uint32 __PPO__controlWidget() { return STRUCT_OFFSET(AMainMenuGameModeBase, controlWidget); } \
	FORCEINLINE static uint32 __PPO__HowToHUDWidget() { return STRUCT_OFFSET(AMainMenuGameModeBase, HowToHUDWidget); } \
	FORCEINLINE static uint32 __PPO__howToWidget() { return STRUCT_OFFSET(AMainMenuGameModeBase, howToWidget); } \
	FORCEINLINE static uint32 __PPO__saveState() { return STRUCT_OFFSET(AMainMenuGameModeBase, saveState); }


#define SideScroller_Source_SideScroller_MainMenuGameModeBase_h_24_PROLOG
#define SideScroller_Source_SideScroller_MainMenuGameModeBase_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SideScroller_Source_SideScroller_MainMenuGameModeBase_h_27_PRIVATE_PROPERTY_OFFSET \
	SideScroller_Source_SideScroller_MainMenuGameModeBase_h_27_SPARSE_DATA \
	SideScroller_Source_SideScroller_MainMenuGameModeBase_h_27_RPC_WRAPPERS \
	SideScroller_Source_SideScroller_MainMenuGameModeBase_h_27_INCLASS \
	SideScroller_Source_SideScroller_MainMenuGameModeBase_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SideScroller_Source_SideScroller_MainMenuGameModeBase_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SideScroller_Source_SideScroller_MainMenuGameModeBase_h_27_PRIVATE_PROPERTY_OFFSET \
	SideScroller_Source_SideScroller_MainMenuGameModeBase_h_27_SPARSE_DATA \
	SideScroller_Source_SideScroller_MainMenuGameModeBase_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	SideScroller_Source_SideScroller_MainMenuGameModeBase_h_27_INCLASS_NO_PURE_DECLS \
	SideScroller_Source_SideScroller_MainMenuGameModeBase_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIDESCROLLER_API UClass* StaticClass<class AMainMenuGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SideScroller_Source_SideScroller_MainMenuGameModeBase_h


#define FOREACH_ENUM_EMAINMENUWIDGET(op) \
	op(EMainMenuWidget::EMAINMENUFROMCONTROL) \
	op(EMainMenuWidget::EMAINMENUFROMHOWTO) \
	op(EMainMenuWidget::ECONTROLS) \
	op(EMainMenuWidget::EHOWTO) 

enum class EMainMenuWidget : uint8;
template<> SIDESCROLLER_API UEnum* StaticEnum<EMainMenuWidget>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
