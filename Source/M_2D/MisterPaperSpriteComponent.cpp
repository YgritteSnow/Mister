// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "MisterPaperSpriteComponent.h"
#include "CoreMinimal.h"

UMisterPaperSpriteComponent::UMisterPaperSpriteComponent(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UMisterPaperSpriteComponent::UseSubSprite(bool bUseSub)
{
	if (bUseSub)
	{
		SetSprite(SourceSprite);
	}
	else
	{
		SetSprite(SubSourceSprite);
	}
}