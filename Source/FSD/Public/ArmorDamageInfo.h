#pragma once
#include "CoreMinimal.h"
#include "EArmorDamageType.h"
#include "ArmorDamageInfo.generated.h"

USTRUCT(BlueprintType)
struct FArmorDamageInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 ArmorIndexMask;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    EArmorDamageType BreakType;
    
    FSD_API FArmorDamageInfo();
};

