


#include "Public/Components/BuildableManagerComponent.h"


UBuildableManagerComponent::UBuildableManagerComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}


// Called when the game starts
void UBuildableManagerComponent::BeginPlay()
{
	Super::BeginPlay();
	
}

void UBuildableManagerComponent::ToggleBuildMode()
{
}

void UBuildableManagerComponent::SpawnPreview()
{
}

void UBuildableManagerComponent::UpdatePreviewLocation()
{
}

