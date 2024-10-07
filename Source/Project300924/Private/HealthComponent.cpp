#include "HealthComponent.h"

UHealthComponent::UHealthComponent()
{

}

void UHealthComponent::BeginPlay()
{
	Super::BeginPlay();
	
}

void UHealthComponent::Handle_ColliderHit(AActor* DamagedActor, float Damage, const UDamageType* DamageType,
	AController* InstigatedBy, AActor* DamageCauser)
{
}
