#include "FirstActor.h"
#include "C:\Users\m012613m\Documents\GitHub\Project300924\Intermediate\Build\Win64\x64\Project300924Editor\Development\UnrealEd\SharedPCH.UnrealEd.Project.ValApi.Cpp20.h"
#include "Components/ArrowComponent.h"
#include "Components/BoxComponent.h"

AFirstActor::AFirstActor()
{
	
}


void AFirstActor::BeginPlay()
{
	Super::BeginPlay();
	//_Collider->OnComponentHit.AddUniqueDynamic((this,))
	
}

void AFirstActor::Handle_ColliderHit(UPrimitiveComponent* HitComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	UE_LOG(LogTemp, Display, TEXT("I've Been Hit"));
}

