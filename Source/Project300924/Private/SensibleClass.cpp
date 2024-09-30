// Fill out your copyright notice in the Description page of Project Settings.


#include "SensibleClass.h"


// Sets default values
ASensibleClass::ASensibleClass()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	_Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = _Root;
	_Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	_Mesh -> SetupAttachment(_Root);
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ASensibleClass::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASensibleClass::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

