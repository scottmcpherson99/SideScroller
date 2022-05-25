// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SIDESCROLLER_Shooter_generated_h
#error "Shooter.generated.h already included, missing '#pragma once' in Shooter.h"
#endif
#define SIDESCROLLER_Shooter_generated_h

#define SideScroller_Source_SideScroller_Shooter_h_16_SPARSE_DATA
#define SideScroller_Source_SideScroller_Shooter_h_16_RPC_WRAPPERS
#define SideScroller_Source_SideScroller_Shooter_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define SideScroller_Source_SideScroller_Shooter_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShooter(); \
	friend struct Z_Construct_UClass_AShooter_Statics; \
public: \
	DECLARE_CLASS(AShooter, APaperSpriteActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SideScroller"), NO_API) \
	DECLARE_SERIALIZER(AShooter)


#define SideScroller_Source_SideScroller_Shooter_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAShooter(); \
	friend struct Z_Construct_UClass_AShooter_Statics; \
public: \
	DECLARE_CLASS(AShooter, APaperSpriteActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SideScroller"), NO_API) \
	DECLARE_SERIALIZER(AShooter)


#define SideScroller_Source_SideScroller_Shooter_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShooter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShooter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShooter(AShooter&&); \
	NO_API AShooter(const AShooter&); \
public:


#define SideScroller_Source_SideScroller_Shooter_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShooter(AShooter&&); \
	NO_API AShooter(const AShooter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AShooter)


#define SideScroller_Source_SideScroller_Shooter_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__resetDoOnce() { return STRUCT_OFFSET(AShooter, resetDoOnce); } \
	FORCEINLINE static uint32 __PPO__shootArrowTimer() { return STRUCT_OFFSET(AShooter, shootArrowTimer); } \
	FORCEINLINE static uint32 __PPO__enemyToSpawn() { return STRUCT_OFFSET(AShooter, enemyToSpawn); }


#define SideScroller_Source_SideScroller_Shooter_h_13_PROLOG
#define SideScroller_Source_SideScroller_Shooter_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SideScroller_Source_SideScroller_Shooter_h_16_PRIVATE_PROPERTY_OFFSET \
	SideScroller_Source_SideScroller_Shooter_h_16_SPARSE_DATA \
	SideScroller_Source_SideScroller_Shooter_h_16_RPC_WRAPPERS \
	SideScroller_Source_SideScroller_Shooter_h_16_INCLASS \
	SideScroller_Source_SideScroller_Shooter_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SideScroller_Source_SideScroller_Shooter_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SideScroller_Source_SideScroller_Shooter_h_16_PRIVATE_PROPERTY_OFFSET \
	SideScroller_Source_SideScroller_Shooter_h_16_SPARSE_DATA \
	SideScroller_Source_SideScroller_Shooter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	SideScroller_Source_SideScroller_Shooter_h_16_INCLASS_NO_PURE_DECLS \
	SideScroller_Source_SideScroller_Shooter_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIDESCROLLER_API UClass* StaticClass<class AShooter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SideScroller_Source_SideScroller_Shooter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
