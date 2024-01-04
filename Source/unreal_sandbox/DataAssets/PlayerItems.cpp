// Fill out your copyright notice in the Description page of Project Settings.


#include "DataAssets/PlayerItems.h"

USTRUCT()
struct FMyAssetInfo {
    GENERATED_BODY()

        UPROPERTY(EditAnywhere)
        FString AssetName;

    UPROPERTY(EditAnywhere)
        UTexture2D* AssetThumbnail;

    UPROPERTY(EditAnywhere)
        UStaticMesh* AssetStaticMesh;
};


UCLASS()
class PROJECTExample_API UExampleDataAsset : public UDataAsset {
    GENERATED_BODY()

        UPROPERTY(EditAnywhere)
        TArray<FMyAssetInfo> AssetItems;
};