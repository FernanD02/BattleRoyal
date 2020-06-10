// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "FalseGravityVolumeSphere.h"

#include "Components/SphereComponent.h"

AFalseGravityVolumeSphere::AFalseGravityVolumeSphere()
{
	USphereComponent* SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("GravitySphere"));
	//SphereComponent->SetCollisionProfileName(TEXT("OverlapAll"));
	//SphereComponent->SetCollisionResponseToChannel(ECollisionChannel::ECC_WorldStatic, ECollisionResponse::ECR_Ignore);
	SphereComponent->CanCharacterStepUpOn = ECB_No;
	SphereComponent->SetShouldUpdatePhysicsVolume(true);
	SphereComponent->bCheckAsyncSceneOnMove = false;
	SphereComponent->SetCanEverAffectNavigation(false);
	SphereComponent->SetSphereRadius(Radius, true);
	SphereComponent->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Overlap);

	RootComponent = GravityShape = SphereComponent;
}

FVector AFalseGravityVolumeSphere::GetGravity(FVector ActorPos)
{
	switch (Direction)
	{
	case EGravitySphereDirection::GSD_Inside:	return (GetActorLocation() - ActorPos).GetSafeNormal();
	case EGravitySphereDirection::GSD_Outside:	return (ActorPos - GetActorLocation()).GetSafeNormal();
	}
	return FVector(0.f, 0.f, -1.f);
}

void AFalseGravityVolumeSphere::OnConstruction(const FTransform& Transform)
{
	if (USphereComponent* SphereComponent = Cast<USphereComponent>(GravityShape))
	{
		SphereComponent->SetSphereRadius(Radius, true);
	}
}