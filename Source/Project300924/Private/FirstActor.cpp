#include "C:\Users\m012613m\Documents\GitHub\Project300924\Intermediate\Build\Win64\x64\Project300924Editor\Development\UnrealEd\SharedPCH.UnrealEd.Project.ValApi.Cpp20.h"
#include "FirstActor.h"
#include "Components/ArrowComponent.h"
#include "Components/BoxComponent.h"

AFirstActor::AFirstActor()
{
	
}


void AFirstActor::BeginPlay()
{
	Super::BeginPlay();
	_Collider->OnComponentHit.AddUniqueDynamic((this,))
	
}

