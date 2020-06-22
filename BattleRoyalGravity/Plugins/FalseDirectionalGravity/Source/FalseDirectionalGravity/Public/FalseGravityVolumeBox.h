// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "FalseGravityVolumeBase.h"

#include "FalseGravityVolumeBox.generated.h"

class UShapeComponent;

UCLASS()
class FALSEDIRECTIONALGRAVITY_API AFalseGravityVolumeBox : public AFalseGravityVolumeBase
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AFalseGravityVolumeBox();
	//AOriAnimalManager(const FObjectInitializer& ObjectInitializer);
	//~AOriAnimalManager();

	UPROPERTY(Transient)
	UArrowComponent* ArrowComponent;

public:
	// Called every frame
	//virtual void Tick(float DeltaTime) override;

	UPROPERTY(Category = "Gravity", EditAnywhere, BlueprintReadOnly)
	FVector Size = FVector(100.f,100.f,100.f);

	virtual FVector GetGravity(FVector ActorPos) override;

	virtual void OnConstruction(const FTransform& Transform) override;

};