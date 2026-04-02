// Fill out your copyright notice in the Description page of Project Settings.


#include "Buildables/BuildableActorBase.h"

#include "BPFuntionLibraries/BuildingSystemFL.h"


// Sets default values
ABuildableActorBase::ABuildableActorBase()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Buildable Mesh"));
	StaticMesh->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void ABuildableActorBase::BeginPlay()
{
	Super::BeginPlay();
	
}

void ABuildableActorBase::SetBuildableMesh_Implementation()
{
	UE_LOG(LogTemp, Error, TEXT("SetBuildableMesh not overriden in %s"), *GetName());
}

// Called every frame
void ABuildableActorBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

