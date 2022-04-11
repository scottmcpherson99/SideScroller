// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESideScrollerPlayState : uint8;
#ifdef SIDESCROLLER_SideScrollerGameModeBase_generated_h
#error "SideScrollerGameModeBase.generated.h already included, missing '#pragma once' in SideScrollerGameModeBase.h"
#endif
#define SIDESCROLLER_SideScrollerGameModeBase_generated_h

#define SideScroller_Source_SideScroller_SideScrollerGameModeBase_h_24_SPARSE_DATA
#define SideScroller_Source_SideScroller_SideScrollerGameModeBase_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCurrentState);


#define SideScroller_Source_SideScroller_SideScrollerGameModeBase_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrentState);


#define SideScroller_Source_SideScroller_SideScrollerGameModeBase_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASideScrollerGameModeBase(); \
	friend struct Z_Construct_UClass_ASideScrollerGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ASideScrollerGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/SideScroller"), NO_API) \
	DECLARE_SERIALIZER(ASideScrollerGameModeBase)


#define SideScroller_Source_SideScroller_SideScrollerGameModeBase_h_24_INCLASS \
private: \
	static void StaticRegisterNativesASideScrollerGameModeBase(); \
	friend struct Z_Construct_UClass_ASideScrollerGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ASideScrollerGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/SideScroller"), NO_API) \
	DECLARE_SERIALIZER(ASideScrollerGameModeBase)


#define SideScroller_Source_SideScroller_SideScrollerGameModeBase_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASideScrollerGameModeBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASideScrollerGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASideScrollerGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASideScrollerGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASideScrollerGameModeBase(ASideScrollerGameModeBase&&); \
	NO_API ASideScrollerGameModeBase(const ASideScrollerGameModeBase&); \
public:


#define SideScroller_Source_SideScroller_SideScrollerGameModeBase_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASideScrollerGameModeBase(ASideScrollerGameModeBase&&); \
	NO_API ASideScrollerGameModeBase(const ASideScrollerGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASideScrollerGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASideScrollerGameModeBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASideScrollerGameModeBase)


#define SideScroller_Source_SideScroller_SideScrollerGameModeBase_h_24_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__GameScreenHUDWidget() { return STRUCT_OFFSET(ASideScrollerGameModeBase, GameScreenHUDWidget); } \
	FORCEINLINE static uint32 __PPO__PauseScreenHUDWidget() { return STRUCT_OFFSET(ASideScrollerGameModeBase, PauseScreenHUDWidget); } \
	FORCEINLINE static uint32 __PPO__gameWidget() { return STRUCT_OFFSET(ASideScrollerGameModeBase, gameWidget); } \
	FORCEINLINE static uint32 __PPO__pauseWidget() { return STRUCT_OFFSET(ASideScrollerGameModeBase, pauseWidget); } \
	FORCEINLINE static uint32 __PPO__levelTimeLength() { return STRUCT_OFFSET(ASideScrollerGameModeBase, levelTimeLength); }


#define SideScroller_Source_SideScroller_SideScrollerGameModeBase_h_21_PROLOG
#define SideScroller_Source_SideScroller_SideScrollerGameModeBase_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SideScroller_Source_SideScroller_SideScrollerGameModeBase_h_24_PRIVATE_PROPERTY_OFFSET \
	SideScroller_Source_SideScroller_SideScrollerGameModeBase_h_24_SPARSE_DATA \
	SideScroller_Source_SideScroller_SideScrollerGameModeBase_h_24_RPC_WRAPPERS \
	SideScroller_Source_SideScroller_SideScrollerGameModeBase_h_24_INCLASS \
	SideScroller_Source_SideScroller_SideScrollerGameModeBase_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SideScroller_Source_SideScroller_SideScrollerGameModeBase_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SideScroller_Source_SideScroller_SideScrollerGameModeBase_h_24_PRIVATE_PROPERTY_OFFSET \
	SideScroller_Source_SideScroller_SideScrollerGameModeBase_h_24_SPARSE_DATA \
	SideScroller_Source_SideScroller_SideScrollerGameModeBase_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	SideScroller_Source_SideScroller_SideScrollerGameModeBase_h_24_INCLASS_NO_PURE_DECLS \
	SideScroller_Source_SideScroller_SideScrollerGameModeBase_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIDESCROLLER_API UClass* StaticClass<class ASideScrollerGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SideScroller_Source_SideScroller_SideScrollerGameModeBase_h


#define FOREACH_ENUM_ESIDESCROLLERPLAYSTATE(op) \
	op(ESideScrollerPlayState::EPlaying) \
	op(ESideScrollerPlayState::EPAUSE) 

enum class ESideScrollerPlayState : uint8;
template<> SIDESCROLLER_API UEnum* StaticEnum<ESideScrollerPlayState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
