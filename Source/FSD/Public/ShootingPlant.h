#pragma once
#include "CoreMinimal.h"
#include "EnemyPawn.h"
#include "ShootingPlant.generated.h"

class AActor;

UCLASS()
class AShootingPlant : public AEnemyPawn {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool IsVisible;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_Target, meta=(AllowPrivateAccess=true))
    AActor* Target;
    
public:
    AShootingPlant();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetTarget(AActor* NewTarget);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_Target();
    
};

