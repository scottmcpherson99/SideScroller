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
#ifdef SIDESCROLLER_Goal_generated_h
#error "Goal.generated.h already included, missing '#pragma once' in Goal.h"
#endif
#define SIDESCROLLER_Goal_generated_h

#define SideScroller_Source_SideScroller_Goal_h_15_SPARSE_DATA
#define SideScroller_Source_SideScroller_Goal_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnTriggerBoxOverlap);


#define SideScroller_Source_SideScroller_Goal_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnTriggerBoxOverlap);


#define SideScroller_Source_SideScroller_Goal_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGoal(); \
	friend struct Z_Construct_UClass_AGoal_Statics; \
public: \
	DECLARE_CLASS(AGoal, APaperSpriteActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SideScroller"), NO_API) \
	DECLARE_SERIALIZER(AGoal)


#define SideScroller_Source_SideScroller_Goal_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAGoal(); \
	friend struct Z_Construct_UClass_AGoal_Statics; \
public: \
	DECLARE_CLASS(AGoal, APaperSpriteActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SideScroller"), NO_API) \
	DECLARE_SERIALIZER(AGoal)


#define SideScroller_Source_SideScroller_Goal_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGoal(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGoal) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGoal); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGoal); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGoal(AGoal&&); \
	NO_API AGoal(const AGoal&); \
public:


#define SideScroller_Source_SideScroller_Goal_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGoal(AGoal&&); \
	NO_API AGoal(const AGoal&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGoal); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGoal); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGoal)


#define SideScroller_Source_SideScroller_Goal_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TriggerBox() { return STRUCT_OFFSET(AGoal, TriggerBox); } \
	FORCEINLINE static uint32 __PPO__spriteComponent() { return STRUCT_OFFSET(AGoal, spriteComponent); }


#define SideScroller_Source_SideScroller_Goal_h_12_PROLOG
#define SideScroller_Source_SideScroller_Goal_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SideScroller_Source_SideScroller_Goal_h_15_PRIVATE_PROPERTY_OFFSET \
	SideScroller_Source_SideScroller_Goal_h_15_SPARSE_DATA \
	SideScroller_Source_SideScroller_Goal_h_15_RPC_WRAPPERS \
	SideScroller_Source_SideScroller_Goal_h_15_INCLASS \
	SideScroller_Source_SideScroller_Goal_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SideScroller_Source_SideScroller_Goal_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SideScroller_Source_SideScroller_Goal_h_15_PRIVATE_PROPERTY_OFFSET \
	SideScroller_Source_SideScroller_Goal_h_15_SPARSE_DATA \
	SideScroller_Source_SideScroller_Goal_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	SideScroller_Source_SideScroller_Goal_h_15_INCLASS_NO_PURE_DECLS \
	SideScroller_Source_SideScroller_Goal_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIDESCROLLER_API UClass* StaticClass<class AGoal>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SideScroller_Source_SideScroller_Goal_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
