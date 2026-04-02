

#pragma once

#include "CoreMinimal.h"
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

	
	
};
