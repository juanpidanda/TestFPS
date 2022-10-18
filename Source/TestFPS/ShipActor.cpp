// Fill out your copyright notice in the Description page of Project Settings.

#include "ShipActor.h"

// Sets default values
AShipActor::AShipActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	VisualMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	VisualMesh->SetupAttachment(RootComponent);

	/*static ConstructorHelpers::FObjectFinder<UStaticMesh> CubeVisualAsset(TEXT("/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube"));
	if (CubeVisualAsset.Succeeded()) {
		//VisualMesh->SetStaticMesh(CubeVisualAsset.Object);
		//VisualMesh->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	}*/
}

// Called when the game starts or when spawned
void AShipActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AShipActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	/*Unreal Tuto
	FVector NewLocation = GetActorLocation();
	FRotator NewRotation = GetActorRotation();

	float RunningTime = GetGameTimeSinceCreation();
	float DeltaHeight = (FMath::Sin(RunningTime + DeltaTime) - FMath::Sin(RunningTime));
	NewLocation.Z += DeltaHeight * 20.0f;
	float DeltaRotation = DeltaTime * 20.0f;
	NewRotation.Yaw += DeltaRotation;
	SetActorLocationAndRotation(NewLocation, NewRotation);*/

	FVector ShipNewLocation = GetActorLocation();
	float RunningTime = GetGameTimeSinceCreation();
	ShipNewLocation.X += shipSpeed;
	SetActorLocation(ShipNewLocation);

}

