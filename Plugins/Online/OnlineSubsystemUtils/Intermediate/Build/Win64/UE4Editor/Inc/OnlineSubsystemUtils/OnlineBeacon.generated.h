// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ONLINESUBSYSTEMUTILS_OnlineBeacon_generated_h
#error "OnlineBeacon.generated.h already included, missing '#pragma once' in OnlineBeacon.h"
#endif
#define ONLINESUBSYSTEMUTILS_OnlineBeacon_generated_h

#define TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeacon_h_34_SPARSE_DATA
#define TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeacon_h_34_RPC_WRAPPERS
#define TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeacon_h_34_RPC_WRAPPERS_NO_PURE_DECLS
#define TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeacon_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOnlineBeacon(); \
	friend struct Z_Construct_UClass_AOnlineBeacon_Statics; \
public: \
	DECLARE_CLASS(AOnlineBeacon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), NO_API) \
	DECLARE_SERIALIZER(AOnlineBeacon)


#define TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeacon_h_34_INCLASS \
private: \
	static void StaticRegisterNativesAOnlineBeacon(); \
	friend struct Z_Construct_UClass_AOnlineBeacon_Statics; \
public: \
	DECLARE_CLASS(AOnlineBeacon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), NO_API) \
	DECLARE_SERIALIZER(AOnlineBeacon)


#define TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeacon_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AOnlineBeacon(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOnlineBeacon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOnlineBeacon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOnlineBeacon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOnlineBeacon(AOnlineBeacon&&); \
	NO_API AOnlineBeacon(const AOnlineBeacon&); \
public:


#define TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeacon_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AOnlineBeacon(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOnlineBeacon(AOnlineBeacon&&); \
	NO_API AOnlineBeacon(const AOnlineBeacon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOnlineBeacon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOnlineBeacon); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOnlineBeacon)


#define TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeacon_h_34_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BeaconConnectionInitialTimeout() { return STRUCT_OFFSET(AOnlineBeacon, BeaconConnectionInitialTimeout); } \
	FORCEINLINE static uint32 __PPO__BeaconConnectionTimeout() { return STRUCT_OFFSET(AOnlineBeacon, BeaconConnectionTimeout); } \
	FORCEINLINE static uint32 __PPO__NetDriver() { return STRUCT_OFFSET(AOnlineBeacon, NetDriver); }


#define TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeacon_h_31_PROLOG
#define TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeacon_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeacon_h_34_PRIVATE_PROPERTY_OFFSET \
	TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeacon_h_34_SPARSE_DATA \
	TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeacon_h_34_RPC_WRAPPERS \
	TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeacon_h_34_INCLASS \
	TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeacon_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeacon_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeacon_h_34_PRIVATE_PROPERTY_OFFSET \
	TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeacon_h_34_SPARSE_DATA \
	TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeacon_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeacon_h_34_INCLASS_NO_PURE_DECLS \
	TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeacon_h_34_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class OnlineBeacon."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<class AOnlineBeacon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeacon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
