// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef SIDESCROLLER_BreakableWall_generated_h
#error "BreakableWall.generated.h already included, missing '#pragma once' in BreakableWall.h"
#endif
#define SIDESCROLLER_BreakableWall_generated_h

#define SideScroller_Source_SideScroller_BreakableWall_h_15_SPARSE_DATA
#define SideScroller_Source_SideScroller_BreakableWall_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnTriggerBoxOverlap);


#define SideScroller_Source_SideScroller_BreakableWall_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnTriggerBoxOverlap);


#define SideScroller_Source_SideScroller_BreakableWall_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABreakableWall(); \
	friend struct Z_Construct_UClass_ABreakableWall_Statics; \
public: \
	DECLARE_CLASS(ABreakableWall, ABreakableTile, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SideScroller"), NO_API) \
	DECLARE_SERIALIZER(ABreakableWall)


#define SideScroller_Source_SideScroller_BreakableWall_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABreakableWall(); \
	friend struct Z_Construct_UClass_ABreakableWall_Statics; \
public: \
	DECLARE_CLASS(ABreakableWall, ABreakableTile, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SideScroller"), NO_API) \
	DECLARE_SERIALIZER(ABreakableWall)


#define SideScroller_Source_SideScroller_BreakableWall_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABreakableWall(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABreakableWall) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABreakableWall); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABreakableWall); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABreakableWall(ABreakableWall&&); \
	NO_API ABreakableWall(const ABreakableWall&); \
public:


#define SideScroller_Source_SideScroller_BreakableWall_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABreakableWall(ABreakableWall&&); \
	NO_API ABreakableWall(const ABreakableWall&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABreakableWall); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABreakableWall); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABreakableWall)


#define SideScroller_Source_SideScroller_BreakableWall_h_15_PRIVATE_PROPERTY_OFFSET
#define SideScroller_Source_SideScroller_BreakableWall_h_12_PROLOG
#define SideScroller_Source_SideScroller_BreakableWall_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SideScroller_Source_SideScroller_BreakableWall_h_15_PRIVATE_PROPERTY_OFFSET \
	SideScroller_Source_SideScroller_BreakableWall_h_15_SPARSE_DATA \
	SideScroller_Source_SideScroller_BreakableWall_h_15_RPC_WRAPPERS \
	SideScroller_Source_SideScroller_BreakableWall_h_15_INCLASS \
	SideScroller_Source_SideScroller_BreakableWall_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SideScroller_Source_SideScroller_BreakableWall_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SideScroller_Source_SideScroller_BreakableWall_h_15_PRIVATE_PROPERTY_OFFSET \
	SideScroller_Source_SideScroller_BreakableWall_h_15_SPARSE_DATA \
	SideScroller_Source_SideScroller_BreakableWall_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	SideScroller_Source_SideScroller_BreakableWall_h_15_INCLASS_NO_PURE_DECLS \
	SideScroller_Source_SideScroller_BreakableWall_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIDESCROLLER_API UClass* StaticClass<class ABreakableWall>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SideScroller_Source_SideScroller_BreakableWall_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
