// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ONLINESUBSYSTEM_TurnBasedMatchInterface_generated_h
#error "TurnBasedMatchInterface.generated.h already included, missing '#pragma once' in TurnBasedMatchInterface.h"
#endif
#define ONLINESUBSYSTEM_TurnBasedMatchInterface_generated_h

#define TestProjectDedi_Plugins_Online_OnlineSubsystem_Source_Public_Interfaces_TurnBasedMatchInterface_h_13_SPARSE_DATA
#define TestProjectDedi_Plugins_Online_OnlineSubsystem_Source_Public_Interfaces_TurnBasedMatchInterface_h_13_RPC_WRAPPERS
#define TestProjectDedi_Plugins_Online_OnlineSubsystem_Source_Public_Interfaces_TurnBasedMatchInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define TestProjectDedi_Plugins_Online_OnlineSubsystem_Source_Public_Interfaces_TurnBasedMatchInterface_h_13_EVENT_PARMS \
	struct TurnBasedMatchInterface_eventOnMatchEnded_Parms \
	{ \
		FString Match; \
	}; \
	struct TurnBasedMatchInterface_eventOnMatchReceivedTurn_Parms \
	{ \
		FString Match; \
		bool bDidBecomeActive; \
	};


#define TestProjectDedi_Plugins_Online_OnlineSubsystem_Source_Public_Interfaces_TurnBasedMatchInterface_h_13_CALLBACK_WRAPPERS
#define TestProjectDedi_Plugins_Online_OnlineSubsystem_Source_Public_Interfaces_TurnBasedMatchInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTurnBasedMatchInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTurnBasedMatchInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTurnBasedMatchInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTurnBasedMatchInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTurnBasedMatchInterface(UTurnBasedMatchInterface&&); \
	NO_API UTurnBasedMatchInterface(const UTurnBasedMatchInterface&); \
public:


#define TestProjectDedi_Plugins_Online_OnlineSubsystem_Source_Public_Interfaces_TurnBasedMatchInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTurnBasedMatchInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTurnBasedMatchInterface(UTurnBasedMatchInterface&&); \
	NO_API UTurnBasedMatchInterface(const UTurnBasedMatchInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTurnBasedMatchInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTurnBasedMatchInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTurnBasedMatchInterface)


#define TestProjectDedi_Plugins_Online_OnlineSubsystem_Source_Public_Interfaces_TurnBasedMatchInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUTurnBasedMatchInterface(); \
	friend struct Z_Construct_UClass_UTurnBasedMatchInterface_Statics; \
public: \
	DECLARE_CLASS(UTurnBasedMatchInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/OnlineSubsystem"), NO_API) \
	DECLARE_SERIALIZER(UTurnBasedMatchInterface)


#define TestProjectDedi_Plugins_Online_OnlineSubsystem_Source_Public_Interfaces_TurnBasedMatchInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	TestProjectDedi_Plugins_Online_OnlineSubsystem_Source_Public_Interfaces_TurnBasedMatchInterface_h_13_GENERATED_UINTERFACE_BODY() \
	TestProjectDedi_Plugins_Online_OnlineSubsystem_Source_Public_Interfaces_TurnBasedMatchInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestProjectDedi_Plugins_Online_OnlineSubsystem_Source_Public_Interfaces_TurnBasedMatchInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	TestProjectDedi_Plugins_Online_OnlineSubsystem_Source_Public_Interfaces_TurnBasedMatchInterface_h_13_GENERATED_UINTERFACE_BODY() \
	TestProjectDedi_Plugins_Online_OnlineSubsystem_Source_Public_Interfaces_TurnBasedMatchInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestProjectDedi_Plugins_Online_OnlineSubsystem_Source_Public_Interfaces_TurnBasedMatchInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ITurnBasedMatchInterface() {} \
public: \
	typedef UTurnBasedMatchInterface UClassType; \
	typedef ITurnBasedMatchInterface ThisClass; \
	static void Execute_OnMatchEnded(UObject* O, const FString& Match); \
	static void Execute_OnMatchReceivedTurn(UObject* O, const FString& Match, bool bDidBecomeActive); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define TestProjectDedi_Plugins_Online_OnlineSubsystem_Source_Public_Interfaces_TurnBasedMatchInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~ITurnBasedMatchInterface() {} \
public: \
	typedef UTurnBasedMatchInterface UClassType; \
	typedef ITurnBasedMatchInterface ThisClass; \
	static void Execute_OnMatchEnded(UObject* O, const FString& Match); \
	static void Execute_OnMatchReceivedTurn(UObject* O, const FString& Match, bool bDidBecomeActive); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define TestProjectDedi_Plugins_Online_OnlineSubsystem_Source_Public_Interfaces_TurnBasedMatchInterface_h_10_PROLOG \
	TestProjectDedi_Plugins_Online_OnlineSubsystem_Source_Public_Interfaces_TurnBasedMatchInterface_h_13_EVENT_PARMS


#define TestProjectDedi_Plugins_Online_OnlineSubsystem_Source_Public_Interfaces_TurnBasedMatchInterface_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestProjectDedi_Plugins_Online_OnlineSubsystem_Source_Public_Interfaces_TurnBasedMatchInterface_h_13_SPARSE_DATA \
	TestProjectDedi_Plugins_Online_OnlineSubsystem_Source_Public_Interfaces_TurnBasedMatchInterface_h_13_RPC_WRAPPERS \
	TestProjectDedi_Plugins_Online_OnlineSubsystem_Source_Public_Interfaces_TurnBasedMatchInterface_h_13_CALLBACK_WRAPPERS \
	TestProjectDedi_Plugins_Online_OnlineSubsystem_Source_Public_Interfaces_TurnBasedMatchInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestProjectDedi_Plugins_Online_OnlineSubsystem_Source_Public_Interfaces_TurnBasedMatchInterface_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestProjectDedi_Plugins_Online_OnlineSubsystem_Source_Public_Interfaces_TurnBasedMatchInterface_h_13_SPARSE_DATA \
	TestProjectDedi_Plugins_Online_OnlineSubsystem_Source_Public_Interfaces_TurnBasedMatchInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	TestProjectDedi_Plugins_Online_OnlineSubsystem_Source_Public_Interfaces_TurnBasedMatchInterface_h_13_CALLBACK_WRAPPERS \
	TestProjectDedi_Plugins_Online_OnlineSubsystem_Source_Public_Interfaces_TurnBasedMatchInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEM_API UClass* StaticClass<class UTurnBasedMatchInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TestProjectDedi_Plugins_Online_OnlineSubsystem_Source_Public_Interfaces_TurnBasedMatchInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
