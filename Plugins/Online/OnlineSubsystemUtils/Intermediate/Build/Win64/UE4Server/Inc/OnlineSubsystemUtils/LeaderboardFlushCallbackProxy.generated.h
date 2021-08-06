// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class ULeaderboardFlushCallbackProxy;
#ifdef ONLINESUBSYSTEMUTILS_LeaderboardFlushCallbackProxy_generated_h
#error "LeaderboardFlushCallbackProxy.generated.h already included, missing '#pragma once' in LeaderboardFlushCallbackProxy.h"
#endif
#define ONLINESUBSYSTEMUTILS_LeaderboardFlushCallbackProxy_generated_h

#define TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardFlushCallbackProxy_h_11_DELEGATE \
struct _Script_OnlineSubsystemUtils_eventOnLeaderboardFlushed_Parms \
{ \
	FName SessionName; \
}; \
static inline void FOnLeaderboardFlushed_DelegateWrapper(const FMulticastScriptDelegate& OnLeaderboardFlushed, FName SessionName) \
{ \
	_Script_OnlineSubsystemUtils_eventOnLeaderboardFlushed_Parms Parms; \
	Parms.SessionName=SessionName; \
	OnLeaderboardFlushed.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardFlushCallbackProxy_h_16_SPARSE_DATA
#define TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardFlushCallbackProxy_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateProxyObjectForFlush);


#define TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardFlushCallbackProxy_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateProxyObjectForFlush);


#define TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardFlushCallbackProxy_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULeaderboardFlushCallbackProxy(); \
	friend struct Z_Construct_UClass_ULeaderboardFlushCallbackProxy_Statics; \
public: \
	DECLARE_CLASS(ULeaderboardFlushCallbackProxy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), ONLINESUBSYSTEMUTILS_API) \
	DECLARE_SERIALIZER(ULeaderboardFlushCallbackProxy)


#define TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardFlushCallbackProxy_h_16_INCLASS \
private: \
	static void StaticRegisterNativesULeaderboardFlushCallbackProxy(); \
	friend struct Z_Construct_UClass_ULeaderboardFlushCallbackProxy_Statics; \
public: \
	DECLARE_CLASS(ULeaderboardFlushCallbackProxy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), ONLINESUBSYSTEMUTILS_API) \
	DECLARE_SERIALIZER(ULeaderboardFlushCallbackProxy)


#define TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardFlushCallbackProxy_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMUTILS_API ULeaderboardFlushCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULeaderboardFlushCallbackProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, ULeaderboardFlushCallbackProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULeaderboardFlushCallbackProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ONLINESUBSYSTEMUTILS_API ULeaderboardFlushCallbackProxy(ULeaderboardFlushCallbackProxy&&); \
	ONLINESUBSYSTEMUTILS_API ULeaderboardFlushCallbackProxy(const ULeaderboardFlushCallbackProxy&); \
public:


#define TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardFlushCallbackProxy_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMUTILS_API ULeaderboardFlushCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ONLINESUBSYSTEMUTILS_API ULeaderboardFlushCallbackProxy(ULeaderboardFlushCallbackProxy&&); \
	ONLINESUBSYSTEMUTILS_API ULeaderboardFlushCallbackProxy(const ULeaderboardFlushCallbackProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, ULeaderboardFlushCallbackProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULeaderboardFlushCallbackProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULeaderboardFlushCallbackProxy)


#define TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardFlushCallbackProxy_h_16_PRIVATE_PROPERTY_OFFSET
#define TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardFlushCallbackProxy_h_13_PROLOG
#define TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardFlushCallbackProxy_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardFlushCallbackProxy_h_16_PRIVATE_PROPERTY_OFFSET \
	TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardFlushCallbackProxy_h_16_SPARSE_DATA \
	TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardFlushCallbackProxy_h_16_RPC_WRAPPERS \
	TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardFlushCallbackProxy_h_16_INCLASS \
	TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardFlushCallbackProxy_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardFlushCallbackProxy_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardFlushCallbackProxy_h_16_PRIVATE_PROPERTY_OFFSET \
	TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardFlushCallbackProxy_h_16_SPARSE_DATA \
	TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardFlushCallbackProxy_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardFlushCallbackProxy_h_16_INCLASS_NO_PURE_DECLS \
	TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardFlushCallbackProxy_h_16_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LeaderboardFlushCallbackProxy."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<class ULeaderboardFlushCallbackProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardFlushCallbackProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
