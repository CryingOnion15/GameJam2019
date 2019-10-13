// Fill out your copyright notice in the Description page of Project Settings.


#include "MagneticCube.h"
#include "Components/BoxComponent.h"
#include "Engine/StaticMesh.h"
#include "ConstructorHelpers.h"
#include "Components/SphereComponent.h"

// Sets default values
AMagneticCube::AMagneticCube()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	
	CubeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Cube = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Collider"));

	RootComponent = CubeMesh;

	Cube->SetupAttachment(RootComponent);
	Cube->SetRelativeLocation(FVector(0.0f, 0.0f, -40.0f));
	
	static ConstructorHelpers::FObjectFinder<UStaticMesh>MeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	UStaticMesh* Asset = MeshAsset.Object;

	CubeMesh->SetStaticMesh(Asset);
	CubeMesh->SetWorldScale3D(FVector(0.8f));
	CubeMesh->SetSimulatePhysics(true);
	CubeMesh->SetCollisionProfileName(TEXT("Pawn"));
	
}
// Called when the game starts or when spawned
void AMagneticCube::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMagneticCube::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}



