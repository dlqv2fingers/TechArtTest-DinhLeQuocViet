// Copyright Epic Games, Inc. All Rights Reserved.

#include "TechArt_PrototypeWheelFront.h"
#include "UObject/ConstructorHelpers.h"

UTechArt_PrototypeWheelFront::UTechArt_PrototypeWheelFront()
{
	AxleType = EAxleType::Front;
	bAffectedBySteering = true;
	MaxSteerAngle = 40.f;
}