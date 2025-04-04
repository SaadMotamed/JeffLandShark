// Fill out your copyright notice in the Description page of Project Settings.


#include "VOIP.h"

void UVOIP::ClearVoicePackets(UObject* WorldContextObject)
{
	UWorld* const World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull);
	if (!IsValid(World))
	{
		return;
	}

	IOnlineVoicePtr VoiceInterface = Online::GetVoiceInterface(World);

	if (!VoiceInterface.IsValid())
	{
		UE_LOG(LogTemp, Warning, TEXT("Clear voice packet couldnt get the voice interface!"));
	}

	VoiceInterface->ClearVoicePackets();
}
