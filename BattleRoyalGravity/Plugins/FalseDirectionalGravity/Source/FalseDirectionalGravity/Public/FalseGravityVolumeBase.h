// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "FalseGravityVolumeBase.generated.h"

class UShapeComponent;

UCLASS(abstract)
class FALSEDIRECTIONALGRAVITY_API AFalseGravityVolumeBase : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AFalseGravityVolumeBase();
	//AOriAnimalManager(const FObjectInitializer& ObjectInitializer);
	//~AOriAnimalManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	//virtual void Tick(float DeltaTime) override;

	UFUNCTION(Category = "Gravity", BlueprintCallable)
	virtual FVector GetGravity(FVector ActorPos);

	//More - better priority
	UPROPERTY(Category = "Gravity", EditAnywhere, BlueprintReadOnly)
	uint8 Priority;

protected:

	UPROPERTY()
	UShapeComponent* GravityShape;

public:

	UFUNCTION()
	virtual void GravityShapeBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

};