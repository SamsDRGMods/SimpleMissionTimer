#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GooPuddleStatusEffectTrigger.generated.h"

class UDamageClass;
class UStatusEffect;

USTRUCT(BlueprintType)
struct FGooPuddleStatusEffectTrigger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    TArray<UDamageClass*> Trigger;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStatusEffect> NewStatusEffect;
    
    FSD_API FGooPuddleStatusEffectTrigger();
};

