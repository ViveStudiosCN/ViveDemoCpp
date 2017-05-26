// Fill out your copyright notice in the Description page of Project Settings.

#include "ViveDemoCpp.h"
#include "DemoPawn.h"
#include "MotionControllerComponent.h"
#include "HeadMountedDisplay.h"

DEFINE_LOG_CATEGORY_STATIC(OutputLog, All, All)

// Sets default values
ADemoPawn::ADemoPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	UE_LOG(OutputLog, Warning, TEXT("ADemoPawn Born"));

	
}

// Called when the game starts or when spawned
void ADemoPawn::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(OutputLog, Warning, TEXT("BeginPlay()"));

	TArray<UMotionControllerComponent*> comps;



	//controllerLeft = CreateDefaultSubobject<UMotionControllerComponent>(TEXT(""))
}

// Called every frame
void ADemoPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ADemoPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

