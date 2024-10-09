#include "Target.h"
#include "HealthComponent.h"


UTarget::UTarget()
{
	PrimaryComponentTick.bCanEverTick = false;
	_PointsValue = 1;
}

void UTarget::BeginPlay()
{
	Super::BeginPlay();
	AActor* Owner = GetOwner();
	_Health = Owner->FindComponentByClass<UHealthComponent>();
	if(_Health == nullptr)
	{
		_Health = NewObject<UHealthComponent>(Owner, TEXT("Health"));
		Owner->AddInstanceComponent(_Health);
		_Health->RegisterComponent();
		Owner->Modify();
		//above let's it create during runtime, otherwise will stop on beginplay
	}
	_Health->OnDead.AddUniqueDynamic(this, &UTarget::Handle_HealthDead);
	OnTargetRegister.Broadcast(this);
}

void UTarget::Handle_HealthDead(AController* causer)
{
	OnDestroyed.Broadcast(this,causer,_PointsValue);
	GetOwner()->Destroy();
}
void UTarget::Handle_GameRuleRequestTargets()
{
	OnTargetRegister.Broadcast(this);
}