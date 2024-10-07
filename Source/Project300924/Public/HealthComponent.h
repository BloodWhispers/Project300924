#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Components/ArrowComponent.h"
#include "Components/BoxComponent.h"
#include "HealthComponent.generated.h"

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class PROJECT300924_API UHealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UHealthComponent();

protected:
	
	UPROPERTY(VisibleAnywhere,BlueprintReadWrite)
	TObjectPtr<UArrowComponent> _Arrow;
	UPROPERTY(VisibleAnywhere,BlueprintReadWrite)
	TObjectPtr<UBoxComponent> _Collider;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TObjectPtr<UStaticMeshComponent> _Mesh;
	
	virtual void BeginPlay() override;
	UFUNCTION()
	void Handle_ColliderHit(AActor* DamagedActor, float Damage, const class UDamageType* DamageType,
		class AController* InstigatedBy, AActor* DamageCauser);
};
