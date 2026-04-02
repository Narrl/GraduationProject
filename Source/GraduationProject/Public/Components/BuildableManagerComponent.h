

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Components/ActorComponent.h"
#include "BuildableManagerComponent.generated.h"


UCLASS(Blueprintable, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GRADUATIONPROJECT_API UBuildableManagerComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UBuildableManagerComponent();

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Private")
	FGameplayTagContainer AllBuildableTags;
	
	
	
	UFUNCTION(BlueprintCallable)
	void ToggleBuildMode();
	
	UFUNCTION(BlueprintCallable)
	void SpawnPreview();
	
	UFUNCTION(BlueprintCallable)
	void UpdatePreviewLocation();
	
};
