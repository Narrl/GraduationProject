


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

