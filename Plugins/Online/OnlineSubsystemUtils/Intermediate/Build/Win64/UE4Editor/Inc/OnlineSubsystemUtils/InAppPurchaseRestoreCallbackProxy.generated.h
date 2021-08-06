// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInAppPurchaseRestoreInfo;
struct FInAppPurchaseProductRequest;
class APlayerController;
class UInAppPurchaseRestoreCallbackProxy;
#ifdef ONLINESUBSYSTEMUTILS_InAppPurchaseRestoreCallbackProxy_generated_h
#error "InAppPurchaseRestoreCallbackProxy.generated.h already included, missing '#pragma once' in InAppPurchaseRestoreCallbackProxy.h"
#endif
#define ONLINESUBSYSTEMUTILS_InAppPurchaseRestoreCallbackProxy_generated_h

#define TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy_h_11_DELEGATE \
struct _Script_OnlineSubsystemUtils_eventInAppPurchaseRestoreResult_Parms \
{ \
	TEnumAsByte<EInAppPurchaseState::Type> CompletionStatus; \
	TArray<FInAppPurchaseRestoreInfo> InAppRestorePurchaseInformation; \
}; \
static inline void FInAppPurchaseRestoreResult_DelegateWrapper(const FMulticastScriptDelegate& InAppPurchaseRestoreResult, EInAppPurchaseState::Type CompletionStatus, TArray<FInAppPurchaseRestoreInfo> const& InAppRestorePurchaseInformation) \
{ \
	_Script_OnlineSubsystemUtils_eventInAppPurchaseRestoreResult_Parms Parms; \
	Parms.CompletionStatus=CompletionStatus; \
	Parms.InAppRestorePurchaseInformation=InAppRestorePurchaseInformation; \
	InAppPurchaseRestoreResult.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy_h_16_SPARSE_DATA
#define TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateProxyObjectForInAppPurchaseRestore);


#define TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateProxyObjectForInAppPurchaseRestore);


#define TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInAppPurchaseRestoreCallbackProxy(); \
	friend struct Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy_Statics; \
public: \
	DECLARE_CLASS(UInAppPurchaseRestoreCallbackProxy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), ONLINESUBSYSTEMUTILS_API) \
	DECLARE_SERIALIZER(UInAppPurchaseRestoreCallbackProxy)


#define TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUInAppPurchaseRestoreCallbackProxy(); \
	friend struct Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy_Statics; \
public: \
	DECLARE_CLASS(UInAppPurchaseRestoreCallbackProxy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), ONLINESUBSYSTEMUTILS_API) \
	DECLARE_SERIALIZER(UInAppPurchaseRestoreCallbackProxy)


#define TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMUTILS_API UInAppPurchaseRestoreCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInAppPurchaseRestoreCallbackProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, UInAppPurchaseRestoreCallbackProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInAppPurchaseRestoreCallbackProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ONLINESUBSYSTEMUTILS_API UInAppPurchaseRestoreCallbackProxy(UInAppPurchaseRestoreCallbackProxy&&); \
	ONLINESUBSYSTEMUTILS_API UInAppPurchaseRestoreCallbackProxy(const UInAppPurchaseRestoreCallbackProxy&); \
public:


#define TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMUTILS_API UInAppPurchaseRestoreCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ONLINESUBSYSTEMUTILS_API UInAppPurchaseRestoreCallbackProxy(UInAppPurchaseRestoreCallbackProxy&&); \
	ONLINESUBSYSTEMUTILS_API UInAppPurchaseRestoreCallbackProxy(const UInAppPurchaseRestoreCallbackProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, UInAppPurchaseRestoreCallbackProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInAppPurchaseRestoreCallbackProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInAppPurchaseRestoreCallbackProxy)


#define TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy_h_16_PRIVATE_PROPERTY_OFFSET
#define TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy_h_13_PROLOG
#define TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy_h_16_PRIVATE_PROPERTY_OFFSET \
	TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy_h_16_SPARSE_DATA \
	TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy_h_16_RPC_WRAPPERS \
	TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy_h_16_INCLASS \
	TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy_h_16_PRIVATE_PROPERTY_OFFSET \
	TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy_h_16_SPARSE_DATA \
	TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy_h_16_INCLASS_NO_PURE_DECLS \
	TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy_h_16_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class InAppPurchaseRestoreCallbackProxy."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<class UInAppPurchaseRestoreCallbackProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
