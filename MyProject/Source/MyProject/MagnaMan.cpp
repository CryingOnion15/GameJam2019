// Fill out your copyright notice in the Description page of Project Settings.


#include "MagnaMan.h"
#include "Components/MeshComponent.h"

// Sets default values
AMagnaMan::AMagnaMan()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMagnaMan::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMagnaMan::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMagnaMan::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

