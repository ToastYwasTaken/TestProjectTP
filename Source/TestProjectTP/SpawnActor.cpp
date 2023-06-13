// Fill out your copyright notice in the Description page of Project Settings.


#include "SpawnActor.h"

// Sets default values
ATPCharacter::ATPCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATPCharacter::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ATPCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ATPCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

//A = Actor, call in .h defined functions here
//This spawns the selected BluePrint on actor's position
void ATPCharacter::SpawnActor() {
	FActorSpawnParameters spawnParams;
	spawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

	//Spawn actorBPToSpawn Blueprint
	//Replace GetActorTransform() with spawnPos to modify spawn location relative to player
	GetWorld()->SpawnActor<AActor>(actorBPToSpawn, GetActorTransform(), spawnParams);
}

