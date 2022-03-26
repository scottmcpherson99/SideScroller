// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SIDESCROLLER_Wall_generated_h
#error "Wall.generated.h already included, missing '#pragma once' in Wall.h"
#endif
#define SIDESCROLLER_Wall_generated_h

#define SideScroller_Source_SideScroller_Wall_h_15_SPARSE_DATA
#define SideScroller_Source_SideScroller_Wall_h_15_RPC_WRAPPERS
#define SideScroller_Source_SideScroller_Wall_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define SideScroller_Source_SideScroller_Wall_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWall(); \
	friend struct Z_Construct_UClass_AWall_Statics; \
public: \
	DECLARE_CLASS(AWall, ATile, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SideScroller"), NO_API) \
	DECLARE_SERIALIZER(AWall)


#define SideScroller_Source_SideScroller_Wall_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAWall(); \
	friend struct Z_Construct_UClass_AWall_Statics; \
public: \
	DECLARE_CLASS(AWall, ATile, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SideScroller"), NO_API) \
	DECLARE_SERIALIZER(AWall)


#define SideScroller_Source_SideScroller_Wall_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWall(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWall) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWall); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWall); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWall(AWall&&); \
	NO_API AWall(const AWall&); \
public:


#define SideScroller_Source_SideScroller_Wall_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWall(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWall(AWall&&); \
	NO_API AWall(const AWall&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWall); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWall); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWall)


#define SideScroller_Source_SideScroller_Wall_h_15_PRIVATE_PROPERTY_OFFSET
#define SideScroller_Source_SideScroller_Wall_h_12_PROLOG
#define SideScroller_Source_SideScroller_Wall_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SideScroller_Source_SideScroller_Wall_h_15_PRIVATE_PROPERTY_OFFSET \
	SideScroller_Source_SideScroller_Wall_h_15_SPARSE_DATA \
	SideScroller_Source_SideScroller_Wall_h_15_RPC_WRAPPERS \
	SideScroller_Source_SideScroller_Wall_h_15_INCLASS \
	SideScroller_Source_SideScroller_Wall_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SideScroller_Source_SideScroller_Wall_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SideScroller_Source_SideScroller_Wall_h_15_PRIVATE_PROPERTY_OFFSET \
	SideScroller_Source_SideScroller_Wall_h_15_SPARSE_DATA \
	SideScroller_Source_SideScroller_Wall_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	SideScroller_Source_SideScroller_Wall_h_15_INCLASS_NO_PURE_DECLS \
	SideScroller_Source_SideScroller_Wall_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIDESCROLLER_API UClass* StaticClass<class AWall>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SideScroller_Source_SideScroller_Wall_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
