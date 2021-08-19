// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "MisterPaperSpriteComponent.h"

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