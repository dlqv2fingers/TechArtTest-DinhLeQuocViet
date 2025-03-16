// Copyright Epic Games, Inc. All Rights Reserved.

#include "TechArt_PrototypeGameMode.h"
#include "TechArt_PrototypePlayerController.h"

ATechArt_PrototypeGameMode::ATechArt_PrototypeGameMode()
{
	PlayerControllerClass = ATechArt_PrototypePlayerController::StaticClass();
}
