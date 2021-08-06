// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineBlueprintSupport/Classes/K2Node_LeaderboardQuery.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_LeaderboardQuery() {}
// Cross Module References
	ONLINEBLUEPRINTSUPPORT_API UClass* Z_Construct_UClass_UK2Node_LeaderboardQuery_NoRegister();
	ONLINEBLUEPRINTSUPPORT_API UClass* Z_Construct_UClass_UK2Node_LeaderboardQuery();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_BaseAsyncTask();
	UPackage* Z_Construct_UPackage__Script_OnlineBlueprintSupport();
// End Cross Module References
	void UK2Node_LeaderboardQuery::StaticRegisterNativesUK2Node_LeaderboardQuery()
	{
	}
	UClass* Z_Construct_UClass_UK2Node_LeaderboardQuery_NoRegister()
	{
		return UK2Node_LeaderboardQuery::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_LeaderboardQuery_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_LeaderboardQuery_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_BaseAsyncTask,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineBlueprintSupport,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_LeaderboardQuery_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_LeaderboardQuery.h" },
		{ "ModuleRelativePath", "Classes/K2Node_LeaderboardQuery.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_LeaderboardQuery_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_LeaderboardQuery>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_LeaderboardQuery_Statics::ClassParams = {
		&UK2Node_LeaderboardQuery::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_LeaderboardQuery_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_LeaderboardQuery_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_LeaderboardQuery()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK2Node_LeaderboardQuery_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK2Node_LeaderboardQuery, 243776380);
	template<> ONLINEBLUEPRINTSUPPORT_API UClass* StaticClass<UK2Node_LeaderboardQuery>()
	{
		return UK2Node_LeaderboardQuery::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK2Node_LeaderboardQuery(Z_Construct_UClass_UK2Node_LeaderboardQuery, &UK2Node_LeaderboardQuery::StaticClass, TEXT("/Script/OnlineBlueprintSupport"), TEXT("UK2Node_LeaderboardQuery"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_LeaderboardQuery);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
