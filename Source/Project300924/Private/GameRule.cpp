#include "GameRule.h"


// Sets default values for this component's properties
UGameRule::UGameRule()
{
	PrimaryComponentTick.bCanEverTick = true;

}
void UGameRule::Init()
{
	Super::BeginPlay();
}

void UGameRule::BroadcastComplete()
{
	OnComplete.Broadcast();
}

void UGameRule::BroadcastPointsScored(AController* scorer, int points)
{
	OnPointsScored.Broadcast(scorer, points);
}

