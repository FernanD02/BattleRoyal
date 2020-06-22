// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "FalseGravityVolumeBox.h"
#include "Components/ArrowComponent.h"

#include "Components/BoxComponent.h"

AFalseGravityVolumeBox::AFalseGravityVolumeBox()
{
	UBoxComponent* BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("GravityBox"));
	//BoxComponent->SetCollisionProfileName(TEXT("OverlapAll"));
	//BoxComponent->SetCollisionResponseToChannel(ECollisionChannel::ECC_WorldStatic, ECollisionResponse::ECR_Ignore);
	BoxComponent->CanCharacterStepUpOn = ECB_No;
	BoxComponent->SetShouldUpdatePhysicsVolume(true);
	BoxComponent->bCheckAsyncSceneOnMove = false;
	BoxComponent->SetCanEverAffectNavigation(false);
	BoxComponent->SetBoxExtent(Size, true);
	BoxComponent->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Overlap);

	ArrowComponent = CreateEditorOnlyDefaultSubobject<UArrowComponent>(TEXT("GravityArrow"));
	if (ArrowComponent)
	{
		float X = Size.X / 200.f;
		float Y = Size.Y / 200.f;
		float Z = Size.Z / 200.f;
		float Scale = (X + Y + Z) / 3.f;
		ArrowComponent->ArrowColor = FColor(150, 200, 255);
		ArrowComponent->SetRelativeRotation(FRotator(-90.f, 0.f, 0.f));
		ArrowComponent->SetRelativeScale3D(FVector(Scale, Scale, Scale));
		ArrowComponent->bTreatAsASprite = true;
		//ArrowComponent->SpriteInfo.Category = TEXT("Gravity");
		//ArrowComponent->SpriteInfo.DisplayName = FText(NSLOCTEXT("GravityCategory", "GravityBox", "GravityBox"));
		ArrowComponent->SetupAttachment(BoxComponent);
		ArrowComponent->bIsScreenSizeScaled = true;
		ArrowComponent->bHiddenInGame = true;
	}

	RootComponent = GravityShape = BoxComponent;
}

FVector AFalseGravityVolumeBox::GetGravity(FVector ActorPos)
{
	return GetActorUpVector() * -1.f;
}

void AFalseGravityVolumeBox::OnConstruction(const FTransform& Transform)
{
	if (UBoxComponent* BoxComponent = Cast<UBoxComponent>(GravityShape))
	{
		float X = Size.X / 200.f;
		float Y = Size.Y / 200.f;
		float Z = Size.Z / 200.f;
		float Scale = (X + Y + Z) / 3.f;
		ArrowComponent->SetRelativeScale3D(FVector(Scale, Scale, Scale));
		BoxComponent->SetBoxExtent(Size, true);
	}
}