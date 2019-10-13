// Fill out your copyright notice in the Description page of Project Settings.


#include "MagMan.h"
#include "Engine/World.h"
#include "Components/InputComponent.h"
#include "DrawDebugHelpers.h"
DEFINE_LOG_CATEGORY(testLog)




// Sets default values
AMagMan::AMagMan()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

}

// Called when the game starts or when spawned
void AMagMan::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMagMan::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

FHitResult AMagMan::MakeRay(FColor col)
{
	float lineTraceDist = 1000.0f;
	float lineStartOffset = 50.0f;
	FVector rayStart = GetActorLocation() + (GetActorForwardVector() * lineStartOffset);
	FVector rayEnd = rayStart + (GetActorForwardVector() * lineTraceDist);
	struct FHitResult outHit;
	//set trace params
	FCollisionQueryParams traceParams = FCollisionQueryParams(FName(TEXT("InteractTrace")), true);
	traceParams.bTraceComplex = true;
	traceParams.bReturnPhysicalMaterial = true;
	//reinit hit info
	FHitResult hit = FHitResult(ForceInit);

	DrawDebugLine(GetWorld(), rayStart, rayEnd, col, false, 1, 0, 1);

	GetWorld()->LineTraceSingleByChannel(hit, rayStart, rayEnd, ECC_GameTraceChannel3, traceParams);
	
	return(hit);

	
}

void AMagMan::BlueRay()
{
	FHitResult hit = MakeRay(FColor::Blue);
	if(GetDebugName(hit.GetActor())!="NULL")
	{
		UE_LOG(testLog, Log, TEXT("GETTING %s"), *GetDebugName(hit.GetActor()));
		//hit.Actor.Cast
	}
	
	
}

void AMagMan::RedRay()
{
	FHitResult hit = MakeRay(FColor::Red);
	UE_LOG(testLog, Log, TEXT("GETTING %s"), *GetDebugName(hit.GetActor()));

}

void AMagMan::MoveForward(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorForwardVector(), Value);
	}
}

void AMagMan::MoveRight(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorRightVector(), Value);
	}
}



void AMagMan::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	//Super::SetupPlayerInputComponent(PlayerInputComponent);
	// set up gameplay key bindings
	check(PlayerInputComponent);

	// Bind jump events
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);
	
	// Bind movement events
	PlayerInputComponent->BindAxis("MoveForward", this, &AMagMan::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AMagMan::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &AMagMan::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &AMagMan::LookUpAtRate);
}

void AMagMan::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void AMagMan::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}


