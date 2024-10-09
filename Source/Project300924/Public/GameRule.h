#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameRule.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FGameRuleCompletesignature);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGameRulePointsScoredSignature,
	AController*, scorer, int, points);

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class PROJECT300924_API UGameRule : public UActorComponent
{
	GENERATED_BODY()
	
public:
	UGameRule();
	FGameRuleCompletesignature OnComplete;
	FGameRulePointsScoredSignature OnPointsScored;

	UFUNCTION()
	virtual void Init();
protected:
	void BroadcastComplete();
	void BroadcastPointsScored(AController* scorer, int points);
};
