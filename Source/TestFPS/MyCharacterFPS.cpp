// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacterFPS.h"

// Sets default values
AMyCharacterFPS::AMyCharacterFPS()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyCharacterFPS::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyCharacterFPS::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyCharacterFPS::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AMyCharacterFPS::DummyFunction() {
	GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Cyan, TEXT("Jumping"));
}

void AMyCharacterFPS::Walk() {

}

void AMyCharacterFPS::DummyCode() {

}