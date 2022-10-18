// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ShipActor.generated.h"

UCLASS()
class TESTFPS_API AShipActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AShipActor();
	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* VisualMesh;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ShipActor")
		float shipSpeed;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
