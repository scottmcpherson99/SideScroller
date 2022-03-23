// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SIDESCROLLER_Collectable_generated_h
#error "Collectable.generated.h already included, missing '#pragma once' in Collectable.h"
#endif
#define SIDESCROLLER_Collectable_generated_h

#define SideScroller_Source_SideScroller_Collectable_h_12_SPARSE_DATA
#define SideScroller_Source_SideScroller_Collectable_h_12_RPC_WRAPPERS
#define SideScroller_Source_SideScroller_Collectable_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define SideScroller_Source_SideScroller_Collectable_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACollectable(); \
	friend struct Z_Construct_UClass_ACollectable_Statics; \
public: \
	DECLARE_CLASS(ACollectable, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SideScroller"), NO_API) \
	DECLARE_SERIALIZER(ACollectable)


#define SideScroller_Source_SideScroller_Collectable_h_12_INCLASS \
private: \
	static void StaticRegisterNativesACollectable(); \
	friend struct Z_Construct_UClass_ACollectable_Statics; \
public: \
	DECLARE_CLASS(ACollectable, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SideScroller"), NO_API) \
	DECLARE_SERIALIZER(ACollectable)


#define SideScroller_Source_SideScroller_Collectable_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACollectable(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACollectable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACollectable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACollectable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACollectable(ACollectable&&); \
	NO_API ACollectable(const ACollectable&); \
public:


#define SideScroller_Source_SideScroller_Collectable_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACollectable(ACollectable&&); \
	NO_API ACollectable(const ACollectable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACollectable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACollectable); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACollectable)


#define SideScroller_Source_SideScroller_Collectable_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__spriteComponent() { return STRUCT_OFFSET(ACollectable, spriteComponent); } \
	FORCEINLINE static uint32 __PPO__TriggerBox() { return STRUCT_OFFSET(ACollectable, TriggerBox); }


#define SideScroller_Source_SideScroller_Collectable_h_9_PROLOG
#define SideScroller_Source_SideScroller_Collectable_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SideScroller_Source_SideScroller_Collectable_h_12_PRIVATE_PROPERTY_OFFSET \
	SideScroller_Source_SideScroller_Collectable_h_12_SPARSE_DATA \
	SideScroller_Source_SideScroller_Collectable_h_12_RPC_WRAPPERS \
	SideScroller_Source_SideScroller_Collectable_h_12_INCLASS \
	SideScroller_Source_SideScroller_Collectable_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SideScroller_Source_SideScroller_Collectable_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SideScroller_Source_SideScroller_Collectable_h_12_PRIVATE_PROPERTY_OFFSET \
	SideScroller_Source_SideScroller_Collectable_h_12_SPARSE_DATA \
	SideScroller_Source_SideScroller_Collectable_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	SideScroller_Source_SideScroller_Collectable_h_12_INCLASS_NO_PURE_DECLS \
	SideScroller_Source_SideScroller_Collectable_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIDESCROLLER_API UClass* StaticClass<class ACollectable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SideScroller_Source_SideScroller_Collectable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
