// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "GameFramework/Actor.h"
#include "Paper2D/Classes/PaperSpriteComponent.h"
#include "MisterPaperSpriteComponent.generated.h"

UCLASS(ShowCategories = (Mobility), ClassGroup = Mister, meta = (BlueprintSpawnableComponent))
class M_2D_API UMisterPaperSpriteComponent : public UPaperSpriteComponent
{
	GENERATED_UCLASS_BODY()

private:
	UPROPERTY(Category = Sprite, EditAnywhere, BlueprintReadOnly, meta = (DisplayThumbnail = "true"))
	UPaperSprite* SubSourceSprite;
public:

	UFUNCTION(BlueprintCallable, Category = Mister)
	void UseSubSprite(bool bUseSub);
};
