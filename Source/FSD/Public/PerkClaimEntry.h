#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PerkClaimEntry.generated.h"

USTRUCT(BlueprintType)
struct FPerkClaimEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGuid PerkID;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 currentRank;
    
    FSD_API FPerkClaimEntry();
};

