#pragma once
#include "CoreMinimal.h"
#include "ManagedEncounterItem.generated.h"

class UEnemyDescriptor;

USTRUCT(BlueprintType)
struct FManagedEncounterItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UEnemyDescriptor* descriptor;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    int32 Amount;
    
    FSD_API FManagedEncounterItem();
};

