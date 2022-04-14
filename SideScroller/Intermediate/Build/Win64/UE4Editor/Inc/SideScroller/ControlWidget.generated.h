// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SIDESCROLLER_ControlWidget_generated_h
#error "ControlWidget.generated.h already included, missing '#pragma once' in ControlWidget.h"
#endif
#define SIDESCROLLER_ControlWidget_generated_h

#define SideScroller_Source_SideScroller_ControlWidget_h_16_SPARSE_DATA
#define SideScroller_Source_SideScroller_ControlWidget_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnCloseClicked);


#define SideScroller_Source_SideScroller_ControlWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnCloseClicked);


#define SideScroller_Source_SideScroller_ControlWidget_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUControlWidget(); \
	friend struct Z_Construct_UClass_UControlWidget_Statics; \
public: \
	DECLARE_CLASS(UControlWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SideScroller"), NO_API) \
	DECLARE_SERIALIZER(UControlWidget)


#define SideScroller_Source_SideScroller_ControlWidget_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUControlWidget(); \
	friend struct Z_Construct_UClass_UControlWidget_Statics; \
public: \
	DECLARE_CLASS(UControlWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SideScroller"), NO_API) \
	DECLARE_SERIALIZER(UControlWidget)


#define SideScroller_Source_SideScroller_ControlWidget_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UControlWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UControlWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UControlWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UControlWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UControlWidget(UControlWidget&&); \
	NO_API UControlWidget(const UControlWidget&); \
public:


#define SideScroller_Source_SideScroller_ControlWidget_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UControlWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UControlWidget(UControlWidget&&); \
	NO_API UControlWidget(const UControlWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UControlWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UControlWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UControlWidget)


#define SideScroller_Source_SideScroller_ControlWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CloseButton() { return STRUCT_OFFSET(UControlWidget, CloseButton); }


#define SideScroller_Source_SideScroller_ControlWidget_h_13_PROLOG
#define SideScroller_Source_SideScroller_ControlWidget_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SideScroller_Source_SideScroller_ControlWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	SideScroller_Source_SideScroller_ControlWidget_h_16_SPARSE_DATA \
	SideScroller_Source_SideScroller_ControlWidget_h_16_RPC_WRAPPERS \
	SideScroller_Source_SideScroller_ControlWidget_h_16_INCLASS \
	SideScroller_Source_SideScroller_ControlWidget_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SideScroller_Source_SideScroller_ControlWidget_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SideScroller_Source_SideScroller_ControlWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	SideScroller_Source_SideScroller_ControlWidget_h_16_SPARSE_DATA \
	SideScroller_Source_SideScroller_ControlWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	SideScroller_Source_SideScroller_ControlWidget_h_16_INCLASS_NO_PURE_DECLS \
	SideScroller_Source_SideScroller_ControlWidget_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIDESCROLLER_API UClass* StaticClass<class UControlWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SideScroller_Source_SideScroller_ControlWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
