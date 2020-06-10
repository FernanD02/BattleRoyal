// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "FalseGravityCharacter.generated.h"

class UFalseGravityMovementComponent;
class USceneComponent;

// Gravity character class which overrides gravity movement component
UCLASS()
class FALSEDIRECTIONALGRAVITY_API AFalseGravityCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AFalseGravityCharacter(const FObjectInitializer& ObjectInitializer);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Character")
	UFalseGravityMovementComponent* GetGravityMovementComponent();

	virtual void FaceRotation(FRotator NewControlRotation, float DeltaTime) override;

	virtual void BeginPlay() override;

protected:

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(Category = "Gravity", EditAnywhere, BlueprintReadOnly)
	bool bGravityEnabled = true;

	// Max degrees to set new gravity from floor
	UPROPERTY(Category = "Gravity", EditAnywhere, BlueprintReadOnly, meta = (ClampMin = "0", UIMin = "0", UIMax = "90"))
	float MaxNewGravityDegrees = 60.f;

	UPROPERTY(Category = "Gravity", EditAnywhere, BlueprintReadOnly)
	bool bUseCustomGravityTraceLength = true;

	// Distance after character start use volume gravity
	UPROPERTY(Category = "Gravity", EditAnywhere, BlueprintReadOnly, meta = (ClampMin = "0", UIMin = "0", UIMax = "200"))
	float GravityTraceLength = 25.f;

	// Change gravity speed on floor
	UPROPERTY(Category = "Gravity", EditAnywhere, BlueprintReadOnly, meta = (ClampMin = "0", UIMin = "0", UIMax = "15"))
	float GravityInterpolationSpeed = 7.5f;

	UPROPERTY(Category = "Gravity", EditAnywhere, BlueprintReadOnly)
	bool bResetGravityOnTraceFail = false;

	// Change gravity speed out floor
	UPROPERTY(Category = "Gravity", EditAnywhere, BlueprintReadOnly, meta = (ClampMin = "0", UIMin = "0", UIMax = "15"))
	float GravityFallingInterpolationSpeed = 2.5f;

	// Base turn rate, in deg/sec. Other scaling may affect final turn rate !!Needs only for TurnAtRate!!
	UPROPERTY(Category = "Gravity", EditAnywhere, BlueprintReadOnly, meta = (UIMin = "0", UIMax = "180"))
	float BaseGravityTurnRate = 45.f;

	// Base look up/down rate, in deg/sec. Other scaling may affect final rate !!Needs only for LookUpAtRate!!
	UPROPERTY(Category = "Gravity", EditAnywhere, BlueprintReadOnly, meta = (UIMin = "0", UIMax = "180"))
	float BaseGravityLookUpRate = 45.f;

	UPROPERTY(Category = "Gravity", EditAnywhere, BlueprintReadOnly)
	bool bDebugTraceEnabled = false;

public:

	// Min pitch for GravityCameraHandler (pitch from -180 to 180) !!This works with valid GravityPitchTarget!!
	UPROPERTY(Category = "Gravity", EditAnywhere, BlueprintReadOnly, meta = (ClampMin = "-180", ClampMax = "180", UIMin = "-180", UIMax = "180"))
	float MinGravityCameraPitch = -90.f;

	// Max pitch for GravityCameraHandler (pitch from -180 to 180) !!This works with valid GravityPitchTarget!!
	UPROPERTY(Category = "Gravity", EditAnywhere, BlueprintReadOnly, meta = (ClampMin = "-180", ClampMax = "180", UIMin = "-180", UIMax = "180"))
	float MaxGravityCameraPitch = 90.f;

protected:

	// Target spring arm or camera, can be root component (or any other scene component that should be controlled) !!This works only if Turn, TurnAtRate not overriden!!
	//UPROPERTY(Category = "Gravity", EditAnywhere, BlueprintReadOnly)
	//USceneComponent* GravityYawTarget;

	// Target spring arm or camera, not be root component  (or any other scene component that should be controlled) !!This works only if LookUp, LookUpAtRate not overriden!!
	//UPROPERTY(Category = "Gravity", EditAnywhere, BlueprintReadOnly)
	//USceneComponent* GravityPitchTarget;

public:

	UFUNCTION(Category = "Gravity", BlueprintCallable, BlueprintAuthorityOnly)
	void GravityTeleport(FVector Location, FVector Normal, bool bFlip);

	UFUNCTION(NetMulticast, Reliable)
	void SyncGravityDirection(FVector GravityDirectionIn);

	UFUNCTION(Client, Reliable)
	void SetControlYaw(float Yaw);

	// Distance after character start use volume gravity, above 0	
	UFUNCTION(Category = "Gravity", BlueprintCallable)
	void SetGravityTraceLength(float GravityTraceLengthIn);

	// Max degrees to set new gravity from floor, above 0
	UFUNCTION(Category = "Gravity", BlueprintCallable)
	void SetMaxNewGravityDegrees(float MaxNewGravityDegreesIn);

	// Change gravity speed on floor, above 0
	UFUNCTION(Category = "Gravity", BlueprintCallable)
	void SetGravityInterpolationSpeed(float GravityInterpolationSpeedIn);

	// Change gravity speed out floor, above 0
	UFUNCTION(Category = "Gravity", BlueprintCallable)
	void SetGravityFallingInterpolationSpeed(float GravityFallingInterpolationSpeedIn);

	// Min pitch for GravityCameraHandler (pitch from -180 to 180) !!This works with valid GravityPitchTarget!!
	UFUNCTION(Category = "Gravity", BlueprintCallable)
	void SetMinGravityCameraPitch(float MinGravityCameraPitchIn);

	// Max pitch for GravityCameraHandler (pitch from -180 to 180) !!This works with valid GravityPitchTarget!!
	UFUNCTION(Category = "Gravity", BlueprintCallable)
	void SetMaxGravityCameraPitch(float MaxGravityCameraPitchIn);

	// Base turn rate, in deg/sec. Other scaling may affect final turn rate !!Needs only for TurnAtRate!!
	UFUNCTION(Category = "Gravity", BlueprintCallable)
	void SetBaseGravityTurnRate(float BaseGravityTurnRateIn);

	// Base look up/down rate, in deg/sec. Other scaling may affect final rate !!Needs only for LookUpAtRate!!
	UFUNCTION(Category = "Gravity", BlueprintCallable)
	void SetBaseGravityLookUpRate(float BaseGravityLookUpRateIn);

	// Target spring arm or camera, can be root component (or any other scene component that should be controlled) !!This works only if Turn, TurnAtRate not overriden!!
	//UFUNCTION(Category = "Gravity", BlueprintCallable)
	//void SetGravityYawTarget(USceneComponent* GravityYawTargetIn);

	// Target spring arm or camera, not be root component  (or any other scene component that should be controlled) !!This works only if LookUp, LookUpAtRate not overriden!!
	//UFUNCTION(Category = "Gravity", BlueprintCallable)
	//void SetGravityPitchTarget(USceneComponent* GravityPitchTargetIn);

	UFUNCTION(Category = "Gravity", BlueprintCallable)
	void SetGravityEnabled(bool bGravityEnabledIn);

	UFUNCTION(Category = "Gravity", BlueprintCallable)
	void SetUseCustomGravityTraceLength(bool bUseCustomGravityTraceLengthIn);

	UFUNCTION(Category = "Gravity", BlueprintCallable)
	void SetResetGravityOnTraceFail(bool bResetGravityOnTraceFailIn);

	UFUNCTION(Category = "Gravity", BlueprintCallable)
	void SetDebugTraceEnabled(bool bDebugTraceEnabledIn);

public:

	virtual void AddGravityYawTargetInput(float Val);

	virtual void AddGravityPitchTargetInput(float Val);

	virtual void AddGravityYawTargetRateInput(float Rate);

	virtual void AddGravityPitchTargetRateInput(float Rate);

	virtual void MoveForward(float Val);

	virtual void MoveRight(float Val);

	float GetMaxNewGravityDegrees() const { return MaxNewGravityDegrees; }

	float GetGravityTraceLength() const { return GravityTraceLength; }

	float GetGravityInterpolationSpeed() const { return GravityInterpolationSpeed; }

	float GetGravityFallingInterpolationSpeed() const { return GravityFallingInterpolationSpeed; }

	float GetGravityEnabled() const { return bGravityEnabled; }

	float GetUseCustomGravityTraceLength() const { return bUseCustomGravityTraceLength; }

	float GetResetGravityOnTraceFail() const { return bResetGravityOnTraceFail; }

	float GetDebugTraceEnabled() const { return bDebugTraceEnabled; }

private:

	FQuat AbsoluteToRelative(FQuat QuatToFix);

	//UPROPERTY()
	//USceneComponent* YawComponent;

};
