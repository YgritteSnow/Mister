// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "M_2DGameMode.h"
#include "M_2DCharacter.h"

AM_2DGameMode::AM_2DGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = AM_2DCharacter::StaticClass();	
}
