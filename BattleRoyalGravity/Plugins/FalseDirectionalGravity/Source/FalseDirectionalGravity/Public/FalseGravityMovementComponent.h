// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "FalseGravityMovementComponent.generated.h"

class AFalseGravityVolumeBase;

// Custom gravity movement component which moves provides directional gravity movement
UCLASS()
class FALSEDIRECTIONALGRAVITY_API UFalseGravityMovementComponent : public UCharacterMovementComponent
{
	GENERATED_BODY()
	
	UFalseGravityMovementComponent();
	
public:
	// Begin UCharacterMovementComponent overrides
	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction) override;
	virtual FVector CalcAnimRootMotionVelocity(const FVector& RootMotionDeltaMove, float DeltaSeconds, const FVector& CurrentVelocity) const override;
	virtual void StartFalling(int32 Iterations, float remainingTime, float timeTick, const FVector& Delta, const FVector& subLoc) override;
	virtual void PhysFalling(float deltaTime, int32 Iterations) override;
	virtual FVector GetFallingLateralAcceleration(float DeltaTime) override;
	virtual FVector NewFallVelocity(const FVector& InitialVelocity, const FVector& Gravity, float DeltaTime) const override;
	virtual void UpdateBasedMovement(float DeltaSeconds) override;
	virtual bool DoJump(bool bReplayingMoves) override;
	virtual FVector GetImpartedMovementBaseVelocity() const override;
	virtual void JumpOff(AActor* MovementBaseActor) override;
	virtual void FindFloor(const FVector& CapsuleLocation, FFindFloorResult& OutFloorResult, bool bZeroDelta, const FHitResult* DownwardSweepResult = NULL) const override;
	virtual void UpdateBasedRotation(FRotator& FinalRotation, const FRotator& ReducedRotation) override;
	virtual bool FloorSweepTest(struct FHitResult& OutHit, const FVector& Start, const FVector& End, ECollisionChannel TraceChannel, const struct FCollisionShape& CollisionShape, const struct FCollisionQueryParams& Params, const struct FCollisionResponseParams& ResponseParam) const override;
	virtual bool IsValidLandingSpot(const FVector& CapsuleLocation, const FHitResult& Hit) const override;
	virtual bool ShouldCheckForValidLandingSpot(float DeltaTime, const FVector& Delta, const FHitResult& Hit) const override;
	virtual bool ShouldComputePerchResult(const FHitResult& InHit, bool bCheckRadius = true) const override;
	virtual bool ComputePerchResult(const float TestRadius, const FHitResult& InHit, const float InMaxFloorDist, FFindFloorResult& OutPerchFloorResult) const override;
	virtual bool CanStepUp(const FHitResult& Hit) const override;
	virtual bool StepUp(const FVector& GravDir, const FVector& Delta, const FHitResult &Hit, struct UCharacterMovementComponent::FStepDownResult* OutStepDownResult = NULL) override;
	virtual void SetMovementMode(EMovementMode NewMovementMode, uint8 NewCustomMode = 0) override;
	virtual void SetDefaultMovementMode() override;
	virtual void AdjustFloorHeight() override;
	virtual bool CheckLedgeDirection(const FVector& OldLocation, const FVector& SideStep, const FVector& GravDir) const override;
	virtual FVector GetLedgeMove(const FVector& OldLocation, const FVector& Delta, const FVector& GravDir) const override;
	virtual void StartNewPhysics(float deltaTime, int32 Iterations) override;
	virtual void CalcVelocity(float DeltaTime, float Friction, bool bFluid, float BrakingDeceleration) override;
	virtual void ApplyAccumulatedForces(float DeltaSeconds) override;
	virtual bool IsWalkable(const FHitResult& Hit) const override;
	virtual void ComputeFloorDist(const FVector& CapsuleLocation, float LineDistance, float SweepDistance, FFindFloorResult& OutFloorResult, float SweepRadius, const FHitResult* DownwardSweepResult = NULL) const override;
	virtual bool IsWithinEdgeTolerance(const FVector& CapsuleLocation, const FVector& TestImpactPoint, const float CapsuleRadius) const override;
	virtual bool IsFalling() const override;
	// End UCharacterMovementComponent overrides

	// Return direction of current gravity volume
	UFUNCTION(Category = "Pawn|Components|CharacterMovement", BlueprintCallable)
	virtual FVector GetVolumeGravityDirection() const;

	// Return direction of current character gravity
	UFUNCTION(Category = "Pawn|Components|CharacterMovement", BlueprintCallable)
	virtual FVector GetGravityDirection(bool bAvoidZeroGravity = false) const;

	// Set gravity direction, may use non normalized vectors
	UFUNCTION(Category = "Pawn|Components|CharacterMovement", BlueprintCallable)
	virtual void SetGravityDirection(FVector NewGravityDirection);

	// Return is exist floor under character or not
	UFUNCTION(Category = "Pawn|Components|CharacterMovement", BlueprintCallable)
	virtual bool IsExistFloor() const { return bOnFloor; };

	void SetGravityVolume(AFalseGravityVolumeBase* GravityVolume) { CurrentGravityVolume = GravityVolume; };

	AFalseGravityVolumeBase* GetGravityVolume() const { return CurrentGravityVolume; };

	void SetMaxNewGravityDegrees(float MaxNewGravityDegreesIn) { MaxNewGravityDegrees = MaxNewGravityDegreesIn; };

	void SetMaxDistanceToFloor(float MaxDistanceToFloorIn) { MaxDistanceToFloor = MaxDistanceToFloorIn; };

	void SetGravityInterpolationSpeed(float GravityInterpolationSpeedIn) { GravityInterpolationSpeed = GravityInterpolationSpeedIn; };

	void SetGravityFallingInterpolationSpeed(float GravityFallingInterpolationSpeedIn) { GravityFallingInterpolationSpeed = GravityFallingInterpolationSpeedIn; };

	void SetGravityEnabled(bool bGravityEnabledIn) { bGravityEnabled = bGravityEnabledIn; };

	void SetUseCustomGravityTraceLength(bool bUseCustomGravityTraceLengthIn) { bUseCustomGravityTraceLength = bUseCustomGravityTraceLengthIn; };

	void SetResetGravityOnTraceFail(bool bResetGravityOnTraceFailIn) { bResetGravityOnTraceFail = bResetGravityOnTraceFailIn; };

	void SetDebugTraceEnabled(bool bDebugTraceEnabledIn) { bDebugTraceEnabled = bDebugTraceEnabledIn; };

protected:

	// Begin UCharacterMovementComponent overrides
	virtual void PhysFlying(float deltaTime, int32 Iterations) override;
	virtual float BoostAirControl(float DeltaTime, float TickAirControl, const FVector& FallAcceleration) override;
	virtual void OnMovementModeChanged(EMovementMode PreviousMovementMode, uint8 PreviousCustomMode) override;
	virtual void PerformMovement(float DeltaTime) override;
	virtual void HandleImpact(const FHitResult& Hit, float TimeSlice = 0.f, const FVector& MoveDelta = FVector::ZeroVector) override;
	virtual void ProcessLanded(const FHitResult& Hit, float remainingTime, int32 Iterations) override;

	// Tells if we are moving vertical / horizontal -> neccesary for all ground checks and fly
	virtual void MaintainHorizontalGroundVelocity() override;
	virtual float SlideAlongSurface(const FVector& Delta, float Time, const FVector& Normal, FHitResult& Hit, bool bHandleImpact) override;
	virtual void SetPostLandedPhysics(const FHitResult& Hit) override;
	virtual void PhysWalking(float deltaTime, int32 Iterations) override;
	virtual FVector ComputeGroundMovementDelta(const FVector& Delta, const FHitResult& RampHit, const bool bHitFromLineTrace) const override;
	virtual void MoveAlongFloor(const FVector& InVelocity, float DeltaSeconds, FStepDownResult* OutStepDownResult = NULL) override;
	virtual void SimulateMovement(float DeltaTime) override;

	// Setting actual acceleration to be relative to move
	virtual FVector ConstrainInputAcceleration(const FVector& InputAcceleration) const override;
	virtual FVector ScaleInputAcceleration(const FVector& InputAcceleration) const override;
	// End UCharacterMovementComponent overrides

	// Showing velocity, acceleration
	UPROPERTY(EditAnywhere, Category="Debug")
	bool bShowDebugLines = false;

private:
	FVector GetGravity() const;
	FVector GetComponentDesiredAxisZ() const;
	void UpdateComponentRotation();
	FORCEINLINE FQuat GetCapsuleRotation() const;
	FORCEINLINE FVector GetCapsuleAxisX() const;
	FORCEINLINE FVector GetCapsuleAxisZ() const;
	FORCEINLINE FVector GetSafeNormalPrecise(const FVector& V);
	bool IsWithinEdgeToleranceNew(const FVector& CapsuleLocation, const FVector& CapsuleDown, const FVector& TestImpactPoint, const float CapsuleRadius) const;
	bool bFallingRemovesSpeedZ;
	bool bIgnoreBaseRollMove;
	bool bOnFloor = false;

	// Gravity custom settings
	float MaxNewGravityDegrees;
	float MaxDistanceToFloor;
	float GravityInterpolationSpeed;
	float GravityFallingInterpolationSpeed;

	bool bGravityEnabled;
	bool bUseCustomGravityTraceLength;
	//float GravityTraceLength;
	bool bResetGravityOnTraceFail;
	bool bDebugTraceEnabled;

	UPROPERTY()
	AFalseGravityVolumeBase* CurrentGravityVolume;

	UPROPERTY()
	FVector CustomGravityDirection = FVector(0.f, 0.f, -1.f);
};
