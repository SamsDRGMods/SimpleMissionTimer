#pragma once
#include "CoreMinimal.h"
#include "ObjectInfoComponent.h"
#include "PlayerInfoComponent.generated.h"

class UDialogDataAsset;
class APlayerCharacter;

UCLASS(meta=(BlueprintSpawnableComponent))
class FSD_API UPlayerInfoComponent : public UObjectInfoComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDialogDataAsset> LookAtShout;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, Transient, meta=(AllowPrivateAccess=true))
    APlayerCharacter* Character;
    
public:
    UPlayerInfoComponent();
};

