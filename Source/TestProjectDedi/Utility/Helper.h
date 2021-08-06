#pragma once

#include "CoreMinimal.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/World.h"

/**
 * 
 */
class TESTPROJECTDEDI_API Helper
{
public:
	Helper();
	~Helper();
	/// <summary>
	/// Load Blueprints in a constructor
	/// </summary>
	/// <typeparam name="T">- actual class the blueprint uses</typeparam>
	/// <typeparam name="U">- base class the blueprint should use as storage</typeparam>
	/// <param name="dir">- directory the blueprint is at</param>
	/// <returns>safe pointer of blueprint</returns>
	template <class T, class U>
	static TSubclassOf<U> LoadBP(FString dir)
	{
		ConstructorHelpers::FClassFinder<T> loader(*dir);
		if (loader.Succeeded())
		{
			return loader.Class;
		}
		else
		{
			return NULL;
		}
	}

	/// <summary>
	/// Validates passed in object to make sure it exists and is useable
	/// </summary>
	/// <param name="Obj">- Object being checked</param>
	/// <returns>bool whether object is valid or not to use</returns>
	static bool Validate(UObject* Obj)
	{
		return Obj->IsValidLowLevel() && !Obj->IsPendingKill();
	}

	/// <summary>
	/// Gets DisplayName of enum values
	/// </summary>
	/// <param name="Enum">- name of enum type</param>
	/// <param name="EnumValue">- id value for displayname</param>
	/// <returns>FString for the DisplayName of the enum ID</returns>
	static const FString EnumToString(const TCHAR* Enum, int32 EnumValue)
	{
		const UEnum* EnumPtr = FindObject<UEnum>(ANY_PACKAGE, Enum, true);
		if (!EnumPtr)
			return NSLOCTEXT("Enum not found", "Enum not found", "Enum not found").ToString();

		return EnumPtr->GetNameStringByIndex((int32)EnumValue);
	}
};
