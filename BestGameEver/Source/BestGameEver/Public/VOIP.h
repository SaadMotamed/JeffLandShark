// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BlueprintDataDefinitions.h"
#include "Online.h"
#include "OnlineSubsystem.h"
#include "Interfaces/VoiceInterface.h"
#include "Engine/GameInstance.h"
#include "UObject/UObjectIterator.h"
#include "VOIP.generated.h"

/**
 * 
 */
UCLASS()
class BESTGAMEEVER_API UVOIP : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UFUNCTION(Blueprintcallable, Category = "VOIP")
	static void ClearVoicePackets(UObject* WorldContextObject);
};
