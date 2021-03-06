#pragma once
#include "CoreMinimal.h"
#include "ItemAggregator.h"
#include "AggregatorVisibilityChangedDelegateDelegate.h"
#include "UsableAggregator.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UUsableAggregator : public UItemAggregator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FAggregatorVisibilityChangedDelegate OnVisibilityChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText UsingText;
    
public:
    UUsableAggregator();
    UFUNCTION(BlueprintCallable)
    float GetProgress();
    
};

