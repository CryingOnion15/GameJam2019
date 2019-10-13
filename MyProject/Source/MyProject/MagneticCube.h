// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MagneticCube.generated.h"

UCLASS()
class MYPROJECT_API AMagneticCube : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMagneticCube();

	UPROPERTY(EditAnywhere)
		bool bRed = false;

	UPROPERTY(EditAnywhere)
		bool bBlue = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UStaticMeshComponent* CubeMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UBoxComponent* Cube;

	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category="Attract")
		bool bAttract = true;

	float ForceStrength;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	
	
	
	

};
