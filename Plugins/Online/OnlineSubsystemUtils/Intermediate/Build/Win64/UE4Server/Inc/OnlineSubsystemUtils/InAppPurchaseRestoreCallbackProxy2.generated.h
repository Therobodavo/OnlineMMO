// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EInAppPurchaseStatus : uint8;
struct FInAppPurchaseRestoreInfo2;
struct FInAppPurchaseProductRequest2;
class APlayerController;
class UInAppPurchaseRestoreCallbackProxy2;
#ifdef ONLINESUBSYSTEMUTILS_InAppPurchaseRestoreCallbackProxy2_generated_h
#error "InAppPurchaseRestoreCallbackProxy2.generated.h already included, missing '#pragma once' in InAppPurchaseRestoreCallbackProxy2.h"
#endif
#define ONLINESUBSYSTEMUTILS_InAppPurchaseRestoreCallbackProxy2_generated_h

#define TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy2_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo2_Statics; \
	ONLINESUBSYSTEMUTILS_API static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMUTILS_API UScriptStruct* StaticStruct<struct FInAppPurchaseRestoreInfo2>();

#define TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy2_h_35_DELEGATE \
struct _Script_OnlineSubsystemUtils_eventInAppPurchaseRestoreResult2_Parms \
{ \
	EInAppPurchaseStatus PurchaseStatus; \
	TArray<FInAppPurchaseRestoreInfo2> InAppPurchaseRestoreInfo; \
}; \
static inline void FInAppPurchaseRestoreResult2_DelegateWrapper(const FMulticastScriptDelegate& InAppPurchaseRestoreResult2, EInAppPurchaseStatus PurchaseStatus, TArray<FInAppPurchaseRestoreInfo2> const& InAppPurchaseRestoreInfo) \
{ \
	_Script_OnlineSubsystemUtils_eventInAppPurchaseRestoreResult2_Parms Parms; \
	Parms.PurchaseStatus=PurchaseStatus; \
	Parms.InAppPurchaseRestoreInfo=InAppPurchaseRestoreInfo; \
	InAppPurchaseRestoreResult2.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy2_h_40_SPARSE_DATA
#define TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy2_h_40_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateProxyObjectForInAppPurchaseRestore);


#define TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy2_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateProxyObjectForInAppPurchaseRestore);


#define TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy2_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInAppPurchaseRestoreCallbackProxy2(); \
	friend struct Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy2_Statics; \
public: \
	DECLARE_CLASS(UInAppPurchaseRestoreCallbackProxy2, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), ONLINESUBSYSTEMUTILS_API) \
	DECLARE_SERIALIZER(UInAppPurchaseRestoreCallbackProxy2)


#define TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy2_h_40_INCLASS \
private: \
	static void StaticRegisterNativesUInAppPurchaseRestoreCallbackProxy2(); \
	friend struct Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy2_Statics; \
public: \
	DECLARE_CLASS(UInAppPurchaseRestoreCallbackProxy2, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), ONLINESUBSYSTEMUTILS_API) \
	DECLARE_SERIALIZER(UInAppPurchaseRestoreCallbackProxy2)


#define TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy2_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMUTILS_API UInAppPurchaseRestoreCallbackProxy2(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInAppPurchaseRestoreCallbackProxy2) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, UInAppPurchaseRestoreCallbackProxy2); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInAppPurchaseRestoreCallbackProxy2); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ONLINESUBSYSTEMUTILS_API UInAppPurchaseRestoreCallbackProxy2(UInAppPurchaseRestoreCallbackProxy2&&); \
	ONLINESUBSYSTEMUTILS_API UInAppPurchaseRestoreCallbackProxy2(const UInAppPurchaseRestoreCallbackProxy2&); \
public:


#define TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy2_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMUTILS_API UInAppPurchaseRestoreCallbackProxy2(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ONLINESUBSYSTEMUTILS_API UInAppPurchaseRestoreCallbackProxy2(UInAppPurchaseRestoreCallbackProxy2&&); \
	ONLINESUBSYSTEMUTILS_API UInAppPurchaseRestoreCallbackProxy2(const UInAppPurchaseRestoreCallbackProxy2&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, UInAppPurchaseRestoreCallbackProxy2); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInAppPurchaseRestoreCallbackProxy2); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInAppPurchaseRestoreCallbackProxy2)


#define TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy2_h_40_PRIVATE_PROPERTY_OFFSET
#define TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy2_h_37_PROLOG
#define TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy2_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy2_h_40_PRIVATE_PROPERTY_OFFSET \
	TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy2_h_40_SPARSE_DATA \
	TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy2_h_40_RPC_WRAPPERS \
	TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy2_h_40_INCLASS \
	TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy2_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy2_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy2_h_40_PRIVATE_PROPERTY_OFFSET \
	TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy2_h_40_SPARSE_DATA \
	TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy2_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy2_h_40_INCLASS_NO_PURE_DECLS \
	TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy2_h_40_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class InAppPurchaseRestoreCallbackProxy2."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<class UInAppPurchaseRestoreCallbackProxy2>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TestProjectDedi_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy2_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
