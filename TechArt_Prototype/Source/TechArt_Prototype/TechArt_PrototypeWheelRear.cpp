// Copyright Epic Games, Inc. All Rights Reserved.

#include "TechArt_PrototypeWheelRear.h"
#include "UObject/ConstructorHelpers.h"

UTechArt_PrototypeWheelRear::UTechArt_PrototypeWheelRear()
{
	AxleType = EAxleType::Rear;
	bAffectedByHandbrake = true;
	bAffectedByEngine = true;
}