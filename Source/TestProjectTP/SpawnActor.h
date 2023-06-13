// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "SpawnActor.generated.h"

UCLASS()
class TESTPROJECTTP_API ATPCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ATPCharacter();

	//Define functions and variables here

	//Creates a new function, callable in BPs, in category "Abilities"
	UFUNCTION(BlueprintCallable, Category = "Abilities") void SpawnActor();	

	//Creates variable actorBPToSpawn, which is an Actor and can be edited anywhere
	UPROPERTY(EditAnywhere) TSubclassOf<AActor> actorBPToSpawn;	

	//Creates variable spawnPos to adjust spawn position
	UPROPERTY(EditAnywhere) FTransform spawnPos;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
