﻿// Made by TitledGooseTeam during Ludum Dare 53


#include "MeatCounterComponent.h"


UMeatCounterComponent::UMeatCounterComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

bool UMeatCounterComponent::IncreaseValue(const int32 Amount, const bool bClampToMax)
{
	if (Super::IncreaseValue(Amount, bClampToMax) && ResourceData.Value >= ResourceData.MaxValue)
	{
		DecreaseValue(ResourceData.MaxValue);
		return true;
	}

	return false;
}
