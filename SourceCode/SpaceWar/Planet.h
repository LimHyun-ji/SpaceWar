// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Planet.generated.h"

UCLASS()
class SPACEWAR_API APlanet : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APlanet();

	UPROPERTY(EditAnywhere, Category = "Collision Comp")
		class USphereComponent* collComp;
	UPROPERTY(EditAnywhere, Category = "mesh Comp")
		class UStaticMeshComponent* meshComp;
	UPROPERTY(EditDefaultsOnly, Category = "Spawn Position")
		class UArrowComponent* spawnPosition;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	UFUNCTION()
		FName GetPlanetName();

private:

	UPROPERTY(EditAnywhere, Category = "Setting", meta = (AllowAccessPrivate))
		FName planetName;

};
