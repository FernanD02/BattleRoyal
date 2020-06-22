// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "FalseGravityCharacter.h"
#include "FalseGravityMovementComponent.h"
#include "Components/InputComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/PlayerController.h"
#include "Kismet/KismetMathLibrary.h"
#include "Engine/World.h"

AFalseGravityCharacter::AFalseGravityCharacter(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer.SetDefaultSubobjectClass<UFalseGravityMovementComponent>(ACharacter::CharacterMovementComponentName))
{
	if (UFalseGravityMovementComponent* Gravity = GetGravityMovementComponent())
	{
		Gravity->SetMaxNewGravityDegrees(MaxNewGravityDegrees);
		Gravity->SetMaxDistanceToFloor(GravityTraceLength);
		Gravity->SetGravityInterpolationSpeed(GravityInterpolationSpeed);
		Gravity->SetGravityFallingInterpolationSpeed(GravityFallingInterpolationSpeed);
		Gravity->SetGravityEnabled(bGravityEnabled);
		Gravity->SetUseCustomGravityTraceLength(bUseCustomGravityTraceLength);
		Gravity->SetResetGravityOnTraceFail(bResetGravityOnTraceFail);
		Gravity->SetDebugTraceEnabled(bDebugTraceEnabled);
		//UE_LOG(LogTemp, Warning, TEXT("AFalseGravityCharacter: Gravity valid"))
	}
	else
	{
		//UE_LOG(LogTemp, Warning, TEXT("AFalseGravityCharacter: Gravity failed"))
	}

	//YawComponent = CreateDefaultSubobject<USceneComponent>(TEXT("YawComponent"));
	//if (YawComponent)
	//{
		//YawComponent->AlwaysLoadOnClient = true;
		//YawComponent->AlwaysLoadOnServer = true;
		//YawComponent->bOwnerNoSee = false;
		//YawComponent->MeshComponentUpdateFlag = EMeshComponentUpdateFlag::AlwaysTickPose;
		//YawComponent->bCastDynamicShadow = true;
		//YawComponent->bAffectDynamicIndirectLighting = true;
		//YawComponent->PrimaryComponentTick.TickGroup = TG_PrePhysics;
		//YawComponent->SetupAttachment(RootComponent);
		//static FName MeshCollisionProfileName(TEXT("CharacterMesh"));
		//YawComponent->SetCollisionProfileName(MeshCollisionProfileName);
		//YawComponent->SetGenerateOverlapEvents(false);
		//YawComponent->SetCanEverAffectNavigation(false);
	//}

	//UE_LOG(LogTemp, Warning, TEXT("AGravityCharacter: Gravity = %s"), *FString(!!Gravity ? "valid" : "failed"))
}

UFalseGravityMovementComponent* AFalseGravityCharacter::GetGravityMovementComponent()
{
	return Cast<UFalseGravityMovementComponent>(GetMovementComponent());
}

void AFalseGravityCharacter::FaceRotation(FRotator NewControlRotation, float DeltaTime = 0.f)
{
	// Only if we actually are going to use any component of rotation.
	if (bUseControllerRotationPitch || bUseControllerRotationYaw || bUseControllerRotationRoll)
	{
		//UE_LOG(LogTemp, Warning, TEXT("AFalseGravityCharacter: FaceRotation: NewC: Pitch:%f Yaw:%f Roll:%f"), NewControlRotation.Pitch, NewControlRotation.Yaw, NewControlRotation.Roll)
		/*if (APlayerController* PC = Cast<APlayerController>(Controller))
		{
			const FRotator OldPitch = NewControlRotation - PC->GetControlRotation();
			UE_LOG(LogTemp, Warning, TEXT("AFalseGravityCharacter: FaceRotation: OldPitch Pitch:%f Yaw:%f Roll:%f"), OldPitch.Pitch, OldPitch.Yaw, OldPitch.Roll)
		}*/

		const FRotator CurrentRotation = GetActorRotation();

		//FQuat TestQuat = FRotator(0.f, NewControlRotation.Yaw, 0.f).Quaternion();

		//YawComponent->SetRelativeRotation(TestQuat);
		//FRotator Test = YawComponent->GetComponentRotation();
		//YawComponent->SetRelativeRotation(FRotator(0.f, 0.f, 0.f).Quaternion());
		//YawComponent->AddRelativeRotation(TestQuat.Inverse());
		//SetActorRotation(Test);

		//GetMesh()->CalcNewComponentToWorld()

		//return;

		if (bUseControllerRotationPitch)
		{
			AddActorLocalRotation(FRotator(NewControlRotation.Pitch, 0.f, 0.f));
		}

		if (bUseControllerRotationYaw)
		{
			
			FQuat CurrentQuat = CurrentRotation.Quaternion();
			//FQuat Temp = CurrentQuat;
			//CurrentQuat.X = -Temp.Y;
			//CurrentQuat.Y = Temp.X;
			//CurrentQuat.Z = -Temp.W;
			//CurrentQuat.W = Temp.Z;
			FQuat CurrentFixedQuat = AbsoluteToRelative(CurrentQuat);
			FRotator CurrentFixedRotation = CurrentFixedQuat.Rotator();

			//uint8 i = 0;
			if ((FMath::Abs(CurrentFixedRotation.Pitch) + FMath::Abs(CurrentFixedRotation.Roll)) > 1.5f)
			{
				CurrentFixedQuat = AbsoluteToRelative(CurrentFixedQuat);
				CurrentFixedRotation = CurrentFixedQuat.Rotator();
				//UE_LOG(LogTemp, Warning, TEXT("AFalseGravityCharacter: FaceRotation: TryF: Pitch:%f Roll:%f"), CurrentFixedRotation.Pitch, CurrentFixedRotation.Roll);
				//i++;
			}

			//FQuat NewQuat = NewControlRotation.Quaternion() * CurrentFixedQuat.Inverse();

			//float DeltaYaw = NewControlRotation.Yaw - CurrentFixedRotation.Yaw;

			FQuat NewQuat = FRotator(0.f, NewControlRotation.Yaw, 0.f).Quaternion() * FRotator(0.f, CurrentFixedRotation.Yaw, 0.f).Quaternion().Inverse();
			//FQuat NewQuat = NewControlRotation.Quaternion() * CurrentFixedQuat.Inverse();
			//float DeltaYaw = NewQuat.Rotator().Yaw;

			//DeltaYaw = FMath::Clamp(DeltaYaw, -5.f, 5.f);

			//if (FMath::IsNearlyEqual(FMath::Abs(DeltaYaw), 180.f, 0.1f))
			//{
				//UE_LOG(LogTemp, Warning, TEXT("AFalseGravityCharacter: FaceRotation: DeltaYaw:%f"), DeltaYaw);
			//}
			//UE_LOG(LogTemp, Warning, TEXT("AFalseGravityCharacter: FaceRotation: CurrentQuat: X:%f Y:%f Z:%f W:%f"), CurrentQuat.X, CurrentQuat.Y, CurrentQuat.Z, CurrentQuat.W);



			//if (FMath::Abs(DeltaYaw) < 89.f)
			//{
			//	//AddActorLocalRotation(FRotator(0.f, DeltaYaw, 0.f));
			//	AddActorLocalRotation(NewQuat);
			//}
			//AddActorLocalRotation(FRotator(0.f, DeltaYaw, 0.f));
			AddActorLocalRotation(NewQuat);
			//UE_LOG(LogTemp, Warning, TEXT("AFalseGravityCharacter: FaceRotation: NewC: Pitch:%f Yaw:%f Roll:%f"), NewControlRotation.Pitch, NewControlRotation.Yaw, NewControlRotation.Roll);
			//UE_LOG(LogTemp, Warning, TEXT("AFalseGravityCharacter: FaceRotation: Rela: Pitch:%f Yaw:%f Roll:%f delta:%f"), CurrentFixedRotation.Pitch, CurrentFixedRotation.Yaw, CurrentFixedRotation.Roll, DeltaYaw);
				
			
		}

		if (bUseControllerRotationRoll)
		{
			AddActorLocalRotation(FRotator(0.f, 0.f, NewControlRotation.Roll));
		}

		//SetActorRotation(NewControlRotation);
	}
}

void AFalseGravityCharacter::BeginPlay()
{
	Super::BeginPlay();

	if (UFalseGravityMovementComponent* Gravity = GetGravityMovementComponent())
	{
		Gravity->SetMaxNewGravityDegrees(MaxNewGravityDegrees);
		Gravity->SetMaxDistanceToFloor(GravityTraceLength);
		Gravity->SetGravityInterpolationSpeed(GravityInterpolationSpeed);
		Gravity->SetGravityFallingInterpolationSpeed(GravityFallingInterpolationSpeed);
		Gravity->SetGravityEnabled(bGravityEnabled);
		Gravity->SetUseCustomGravityTraceLength(bUseCustomGravityTraceLength);
		Gravity->SetResetGravityOnTraceFail(bResetGravityOnTraceFail);
		Gravity->SetDebugTraceEnabled(bDebugTraceEnabled);
		//UE_LOG(LogTemp, Warning, TEXT("AFalseGravityCharacter: Gravity valid begin play"))
	}
}

FQuat AFalseGravityCharacter::AbsoluteToRelative(FQuat QuatToFix)
{
	FQuat Delta = FQuat::FindBetweenVectors(FVector(0.f, 0.f, 1.f), QuatToFix.GetAxisZ());

	FQuat Yaw = Delta.Inverse() * QuatToFix;

	return Yaw;

	/*//WorldQuat - world quaternion
	//const FQuat WorldQuat = QuatToFix;
	const float ToDegrees = (180.f) / PI;
	FVector Vector;
	FQuat DeltaQuat;

	Vector = QuatToFix.GetAxisZ();
	float Roll = ToDegrees * FMath::Atan2(Vector.Y, Vector.Z);
	DeltaQuat = FQuat(FRotator(0.f, 0.f, Roll));
	QuatToFix = DeltaQuat.Inverse() * QuatToFix;

	Vector = QuatToFix.GetAxisZ();
	float Pitch = -ToDegrees * FMath::Atan2(Vector.X, Vector.Z);
	DeltaQuat = FQuat(FRotator(Pitch, 0.f, 0.f));
	QuatToFix = DeltaQuat.Inverse() * QuatToFix;

	//FQuat DeltaQuat(FRotator(Pitch, 0.f, Roll));
	//FQuat CurrentFixedQuat = DeltaQuat.Inverse() * QuatToFix;
	//CurrentFixedQuat - relative to FVector(0,0,1) quaternion
	return QuatToFix;*/
}

void AFalseGravityCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up gameplay key bindings
	check(PlayerInputComponent);
	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &AFalseGravityCharacter::AddGravityYawTargetInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &AFalseGravityCharacter::AddGravityYawTargetRateInput);

	PlayerInputComponent->BindAxis("LookUp", this, &AFalseGravityCharacter::AddGravityPitchTargetInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &AFalseGravityCharacter::AddGravityPitchTargetRateInput);

	PlayerInputComponent->BindAxis("MoveForward", this, &AFalseGravityCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AFalseGravityCharacter::MoveRight);
}

void AFalseGravityCharacter::GravityTeleport(FVector Location, FVector Normal, bool bFlip)
{
	const FQuat NewQuat = RootComponent->GetComponentQuat();
	//const FRotator NewRotation = NewQuat->.;

	const FQuat DeltaFixed = FQuat::FindBetweenVectors(Normal, NewQuat.GetAxisZ());

	const FQuat FixedQuat = NewQuat * DeltaFixed;
	const FRotator FixedRotation = FixedQuat.Rotator();

	//UE_LOG(LogTemp, Warning, TEXT("AFalseGravityCharacter: FixedRotation: yaw: %f"), FixedRotation.Yaw);

	const FQuat DeltaControl = FQuat::FindBetweenVectors(FVector(0.f, 0.f, 1.f), FixedQuat.GetAxisZ());

	const FQuat ControlQuat = DeltaControl.Inverse() * FixedQuat;
	//const float Angle = (180.f) / PI * FMath::Acos(FVector::DotProduct(NewQuat.GetForwardVector(), ControlQuat.GetForwardVector()));
	//const FRotator ControlRotation = Angle > 90.f ? ControlQuat.Inverse().Rotator() : ControlQuat.Rotator();
	const FRotator ControlRotation = ControlQuat.Rotator();

	//UE_LOG(LogTemp, Warning, TEXT("AFalseGravityCharacter: Angle: %f"), Angle);

	TeleportTo(Location, FixedRotation, false, false);

	SyncGravityDirection(Normal * -1.f);

	//SetControlYaw(ControlRotation.Yaw < 0 ? 360.f + ControlRotation.Yaw : ControlRotation.Yaw);
	SetControlYaw(ControlRotation.Yaw);

	if (AController* CurrentController = GetController())
	{
		//FRotator OldRotation = CurrentController->GetControlRotation();
		//SetControlYaw(OldRotation.Yaw);
	}
	
}

void AFalseGravityCharacter::SyncGravityDirection_Implementation(FVector GravityDirectionIn)
{
	GetGravityMovementComponent()->SetGravityDirection(GravityDirectionIn);
}

void AFalseGravityCharacter::SetControlYaw_Implementation(float Yaw)
{
	if (AController* CurrentController = GetController())
	{
		FRotator NewRotation = CurrentController->GetControlRotation();
		NewRotation.Yaw = Yaw;
		CurrentController->SetControlRotation(NewRotation);
	}
}

void AFalseGravityCharacter::SetMaxNewGravityDegrees(float MaxNewGravityDegreesIn)
{
	if (MaxNewGravityDegreesIn >= 0)
	{
		MaxNewGravityDegrees = MaxNewGravityDegreesIn;
		if (UFalseGravityMovementComponent* Gravity = GetGravityMovementComponent())
		{
			Gravity->SetMaxNewGravityDegrees(MaxNewGravityDegrees);
		}
	}
}

void AFalseGravityCharacter::SetGravityTraceLength(float GravityTraceLengthIn)
{
	if (GravityTraceLengthIn >= 0)
	{
		GravityTraceLength = GravityTraceLengthIn;
		if (UFalseGravityMovementComponent* Gravity = GetGravityMovementComponent())
		{
			Gravity->SetMaxDistanceToFloor(GravityTraceLength);
		}
	}
}

void AFalseGravityCharacter::SetGravityInterpolationSpeed(float GravityInterpolationSpeedIn)
{
	if (GravityInterpolationSpeedIn >= 0)
	{
		GravityInterpolationSpeed = GravityInterpolationSpeedIn;
		if (UFalseGravityMovementComponent* Gravity = GetGravityMovementComponent())
		{
			Gravity->SetGravityInterpolationSpeed(GravityInterpolationSpeed);
		}
	}
}

void AFalseGravityCharacter::SetGravityFallingInterpolationSpeed(float GravityFallingInterpolationSpeedIn)
{
	if (GravityFallingInterpolationSpeedIn >= 0)
	{
		GravityFallingInterpolationSpeed = GravityFallingInterpolationSpeedIn;
		if (UFalseGravityMovementComponent* Gravity = GetGravityMovementComponent())
		{
			Gravity->SetGravityFallingInterpolationSpeed(GravityFallingInterpolationSpeed);
		}
	}
}

void AFalseGravityCharacter::SetGravityEnabled(bool bGravityEnabledIn)
{
	bGravityEnabled = bGravityEnabledIn;
	if (UFalseGravityMovementComponent* Gravity = GetGravityMovementComponent())
	{
		Gravity->SetGravityEnabled(bGravityEnabled);
	}
};

void AFalseGravityCharacter::SetUseCustomGravityTraceLength(bool bUseCustomGravityTraceLengthIn)
{
	bUseCustomGravityTraceLength = bUseCustomGravityTraceLengthIn;
	if (UFalseGravityMovementComponent* Gravity = GetGravityMovementComponent())
	{
		Gravity->SetUseCustomGravityTraceLength(bUseCustomGravityTraceLength);
	}
};

void AFalseGravityCharacter::SetResetGravityOnTraceFail(bool bResetGravityOnTraceFailIn)
{
	bResetGravityOnTraceFail = bResetGravityOnTraceFailIn;
	if (UFalseGravityMovementComponent* Gravity = GetGravityMovementComponent())
	{
		Gravity->SetResetGravityOnTraceFail(bResetGravityOnTraceFail);
	}
};

void AFalseGravityCharacter::SetDebugTraceEnabled(bool bDebugTraceEnabledIn)
{
	bDebugTraceEnabled = bDebugTraceEnabledIn;
	if (UFalseGravityMovementComponent* Gravity = GetGravityMovementComponent())
	{
		Gravity->SetDebugTraceEnabled(bDebugTraceEnabled);
	}
};

void AFalseGravityCharacter::SetMinGravityCameraPitch(float MinGravityCameraPitchIn)
{
	if (MinGravityCameraPitchIn >= -180.f && MinGravityCameraPitchIn <= 180.f)
	{
		MinGravityCameraPitch = MinGravityCameraPitchIn;
	}
}

void AFalseGravityCharacter::SetMaxGravityCameraPitch(float MaxGravityCameraPitchIn)
{
	if (MaxGravityCameraPitchIn >= -180.f && MaxGravityCameraPitchIn <= 180.f)
	{
		MaxGravityCameraPitch = MaxGravityCameraPitchIn;
	}
}

void AFalseGravityCharacter::SetBaseGravityTurnRate(float BaseGravityTurnRateIn)
{
	BaseGravityTurnRate = BaseGravityTurnRateIn;
}

void AFalseGravityCharacter::SetBaseGravityLookUpRate(float BaseGravityLookUpRateIn)
{
	BaseGravityLookUpRate = BaseGravityLookUpRateIn;
}

/*void AFalseGravityCharacter::SetGravityYawTarget(USceneComponent* GravityYawTargetIn)
{
	if (GravityYawTargetIn)
	{
		GravityYawTarget = GravityYawTargetIn;
	}
}*/

/*void AFalseGravityCharacter::SetGravityPitchTarget(USceneComponent* GravityPitchTargetIn)
{
	if (GravityPitchTargetIn)
	{
		GravityPitchTarget = GravityPitchTargetIn;
	}
}*/

void AFalseGravityCharacter::AddGravityYawTargetInput(float Val)
{
	if (Controller && Controller->IsLocalPlayerController())
	{
		/*if (GravityYawTarget == RootComponent)
		{
			AddActorLocalRotation(FRotator(0.f, Val, 0.f));
		}
		else
		{
			GravityYawTarget->AddRelativeRotation(FRotator(0.f, Val, 0.f));
		}*/
		
		if (APlayerController* PC = Cast<APlayerController>(Controller))
		{
			PC->AddYawInput(Val);
		}
	}
}

void AFalseGravityCharacter::AddGravityPitchTargetInput(float Val)
{
	if (Controller && Controller->IsLocalPlayerController())
	{
		if (APlayerController* PC = Cast<APlayerController>(Controller))
		{
			/*const float OldPitch = PC->GetControlRotation().Pitch;
			float NewPitch = OldPitch + Val;
			if (NewPitch > 180.f)
				NewPitch -= 360.f;
			if (NewPitch < -180.f)
				NewPitch += 360.f;
			UE_LOG(LogTemp, Warning, TEXT("AFalseGravityCharacter: AddGravityPitchTargetInput: OldPitch:%f NewPitch:%f"), OldPitch, NewPitch)
			NewPitch = FMath::Clamp(NewPitch, MinGravityCameraPitch, MaxGravityCameraPitch);
			UE_LOG(LogTemp, Warning, TEXT("AFalseGravityCharacter: AddGravityPitchTargetInput: clamp OldPitch:%f NewPitch:%f"), OldPitch, NewPitch)
			Val = NewPitch - OldPitch;*/

			PC->AddPitchInput(Val);
			//CameraRelativeRot.Pitch = CameraNewPitch;
			//GravityPitchTarget->SetRelativeRotation(FQuat(GravityPitchTarget->RelativeRotation)*FQuat(FRotator(NewPitch, 0.f, 0.f)));
		}
		/*if (GravityPitchTarget)
		{
			FRotator OldRotation = GravityPitchTarget->RelativeRotation;
			float NewPitch = OldRotation.Pitch - Val;
			if (NewPitch > 180.f)
				NewPitch -= 360.f;
			else if (NewPitch < -180.f)
				NewPitch += 360.f;
			NewPitch = FMath::Clamp(NewPitch, MinGravityCameraPitch, MaxGravityCameraPitch);
			OldRotation.Pitch = NewPitch;
			GravityPitchTarget->SetRelativeRotation(OldRotation);
		}*/
	}
}

void AFalseGravityCharacter::AddGravityYawTargetRateInput(float Rate)
{
	// calculate delta for this frame from the rate information
	AddGravityYawTargetInput(Rate * BaseGravityTurnRate * GetWorld()->GetDeltaSeconds());
}

void AFalseGravityCharacter::AddGravityPitchTargetRateInput(float Rate)
{
	// calculate delta for this frame from the rate information
	AddGravityPitchTargetInput(Rate * BaseGravityLookUpRate * GetWorld()->GetDeltaSeconds());
}

void AFalseGravityCharacter::MoveForward(float Val)
{
	if (Controller && Val != 0.0f)
	{
		// find out which way is forward
		//const FRotator Rotation = Controller->GetControlRotation();
		//const FRotator YawRotation(0, Rotation.Yaw, 0);
		const FRotator YawRotation = GetActorRotation();
		//const FRotator YawRotation = GetMesh()->GetComponentRotation();

		GetActorForwardVector();

		// get forward vector
		const FVector Direction = GetActorForwardVector(); //FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Val);
	}
}

void AFalseGravityCharacter::MoveRight(float Val)
{
	if (Controller && Val != 0.0f)
	{
		// find out which way is right
		//const FRotator Rotation = Controller->GetControlRotation();
		//const FRotator YawRotation(0, Rotation.Yaw, 0);
		const FRotator YawRotation = GetActorRotation();
		//const FRotator YawRotation = GetMesh()->GetComponentRotation();

		// get right vector 
		const FVector Direction = GetActorRightVector();// FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		// add movement in that direction
		AddMovementInput(Direction, Val);
	}
}