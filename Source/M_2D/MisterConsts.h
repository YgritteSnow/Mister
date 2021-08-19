// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperSpriteActor.h"
#include "JjSpriteBase.generated.h"

/** Connection status for Concert client sessions */
UENUM()
enum class EMisterSwitchState : uint8
{
	AAA,
	BBB,

	MAX_COUNT,
};