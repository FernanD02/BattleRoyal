// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "FalseGravityVolumeBase.h"

#include "Components/ShapeComponent.h"
#include "FalseGravityCharacter.h"
#include "FalseGravityMovementComponent.h"

AFalseGravityVolumeBase::AFalseGravityVolumeBase()
{
	
}

void AFalseGravityVolumeBase::BeginPlay()
{
	//VisibilityCone->OnComponentBeginOverlap.RemoveDynamic(this, &AOriAICharacterBase::OnVisibilityConeBeginOverlap);
	//GravityShape->OnComponentBeginOverlap.AddDynamic(this, &AFalseGravityVolumeBase::GravityShapeBeginOverlap);
	//VisibilityCone->OnComponentEndOverlap.RemoveDynamic(this, &AOriAICharacterBase::OnVisibilityConeEndOverlap);
	//GravityShape->OnComponentEndOverlap.AddDynamic(this, &AFalseGravityVolumeBase::GravityShapeEndOverlap);
}

FVector AFalseGravityVolumeBase::GetGravity(FVector ActorPos)
{
	return FVector(0.f, 0.f, -1.f);
}

void AFalseGravityVolumeBase::GravityShapeBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	UE_LOG(LogTemp, Log, TEXT("FalseGravityVolumeBase: GravityShapeBeginOverlap"))
	if (AFalseGravityCharacter* GravityCharacter = Cast<AFalseGravityCharacter>(OtherActor))
	{
		UE_LOG(LogTemp, Log, TEXT("FalseGravityVolumeBase: GravityShapeBeginOverlap GravityCharacter valid"))
		if (UFalseGravityMovementComponent* GravityMovementComponent = GravityCharacter->GetGravityMovementComponent())
		{
			UE_LOG(LogTemp, Log, TEXT("FalseGravityVolumeBase: GravityShapeBeginOverlap GravityMovementComponent valid"))
			if (AFalseGravityVolumeBase* GravityVolumeBase = GravityMovementComponent->GetGravityVolume())
			{
				UE_LOG(LogTemp, Log, TEXT("FalseGravityVolumeBase: GravityShapeBeginOverlap GravityVolumeBase valid"))
				if (Priority >= GravityVolumeBase->Priority)
				{
					UE_LOG(LogTemp, Log, TEXT("FalseGravityVolumeBase: GravityShapeBeginOverlap Priority valid"))
					GravityMovementComponent->SetGravityVolume(this);
				}
			}
			else
			{
				UE_LOG(LogTemp, Log, TEXT("FalseGravityVolumeBase: GravityShapeBeginOverlap GravityVolumeBase failed"))
				if (GravityMovementComponent->GetGravityVolume() != this)
				{
					UE_LOG(LogTemp, Log, TEXT("FalseGravityVolumeBase: GravityShapeBeginOverlap GravityVolume different"))
					GravityMovementComponent->SetGravityVolume(this);
				}
			}
		}
	}
}