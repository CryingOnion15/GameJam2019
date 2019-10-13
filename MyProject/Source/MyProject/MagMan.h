// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MagMan.generated.h"
DECLARE_LOG_CATEGORY_EXTERN(testLog, Log, All);

UCLASS()
class MYPROJECT_API AMagMan : public ACharacter
{
	
	GENERATED_BODY()

public:
	AMagMan();

	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		float BaseTurnRate;

	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		float BaseLookUpRate;
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	// APawn interface
	virtual void SetupPlayerInputComponent(UInputComponent* InputComponent) override;

	/**
	 * Called via input to turn at a given rate.
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void TurnAtRate(float Rate);

	/**
	 * Called via input to turn look up/down at a given rate.
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void LookUpAtRate(float Rate);

	

public:

	/** Handles moving forward/backward */
	void MoveForward(float Val);

	/** Handles stafing movement, left and right */
	void MoveRight(float Val);
	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
		void BlueRay();

	UFUNCTION(BlueprintCallable)
		void RedRay();
	UFUNCTION(BlueprintCallable)
		FHitResult MakeRay(FColor col);

};
