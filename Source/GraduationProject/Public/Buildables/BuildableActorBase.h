// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameFramework/Actor.h"
#include "BuildableActorBase.generated.h"

UCLASS(Abstract)
class GRADUATIONPROJECT_API ABuildableActorBase : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ABuildableActorBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(BlueprintReadOnly, Category = "Components")
	TObjectPtr<UStaticMeshComponent> StaticMesh;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Tags")
	FGameplayTag BuildingType;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Tags")
	FGameplayTag ResourceType;



	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Building")
	void SetBuildableMesh();

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
