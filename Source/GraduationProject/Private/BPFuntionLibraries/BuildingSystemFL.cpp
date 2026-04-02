// Fill out your copyright notice in the Description page of Project Settings.

#include "BPFuntionLibraries/BuildingSystemFL.h"

FBuildingData UBuildingSystemFL::GetBuildingDataByTag(class UDataTable* BuildingDataTable,
                                                      const FGameplayTag& BuildingType,
                                                      const FGameplayTag& ResourceType)
{
	FBuildingData BuildingData;
	BuildingData.TraceChannel = ETraceTypeQuery::TraceTypeQuery_MAX; // Default value to indicate not found
	
	if (!BuildingDataTable)
	{
		UE_LOG(LogTemp, Warning, TEXT("BuildingDataTable is null!"));
		return BuildingData;
	}
	
	// Get all rows from the data table
	TArray<FBuildingData*> AllRows;
	BuildingDataTable->GetAllRows<FBuildingData>(TEXT("GetBuildingDataByTag"), AllRows);
	
	// Search for matching row by BuildingType and ResourceType
	for (FBuildingData* Row : AllRows)
	{
		if (Row && Row->BuildingType == BuildingType && Row->ResourceType == ResourceType)
		{
			BuildingData = *Row;
			break;
		}
	}
	
	return BuildingData;

}
