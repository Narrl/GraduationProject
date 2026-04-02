// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Structs/BuildingData.h"
#include "BuildingSystemFL.generated.h"

/**
 * 
 */
UCLASS()
class GRADUATIONPROJECT_API UBuildingSystemFL : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BuildingSystem", meta = (DisplayName = "Get Building Data By Tag"))
	static FBuildingData GetBuildingDataByTag(class UDataTable* BuildingDataTable, const FGameplayTag& BuildingType, const FGameplayTag& ResourceType);
	
	
};
