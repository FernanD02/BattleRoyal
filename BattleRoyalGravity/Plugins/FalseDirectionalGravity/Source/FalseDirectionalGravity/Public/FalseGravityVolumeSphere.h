// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "FalseGravityVolumeBase.h"

#include "FalseGravityVolumeSphere.generated.h"

class UShapeComponent;

UENUM(BlueprintType)
enum class EGravitySphereDirection : uint8
{
	GSD_Inside	UMETA(DisplayName = "Inside"),
	GSD_Outside	UMETA(DisplayName = "Outside")
};

UCLASS()
class FALSEDIRECTIONALGRAVITY_API AFalseGravityVolumeSphere : public AFalseGravityVolumeBase
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AFalseGravityVolumeSphere();
	//AOriAnimalManager(const FObjectInitializer& ObjectInitializer);
	//~AOriAnimalManager();


public:
	// Called every frame
	//virtual void Tick(float DeltaTime) override;

	UPROPERTY(Category = "Gravity", EditAnywhere, BlueprintReadOnly)
	float Radius = 100.f;

	UPROPERTY(Category = "Gravity", EditAnywhere, BlueprintReadOnly)
	EGravitySphereDirection Direction = EGravitySphereDirection::GSD_Inside;

	virtual FVector GetGravity(FVector ActorPos) override;

	virtual void OnConstruction(const FTransform& Transform) override;

};