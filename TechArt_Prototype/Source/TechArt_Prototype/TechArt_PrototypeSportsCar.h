// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "TechArt_PrototypePawn.h"
#include "TechArt_PrototypeSportsCar.generated.h"

/**
 *  Sports car wheeled vehicle implementation
 */
UCLASS(abstract)
class TECHART_PROTOTYPE_API ATechArt_PrototypeSportsCar : public ATechArt_PrototypePawn
{
	GENERATED_BODY()
	
public:

	ATechArt_PrototypeSportsCar();
};
