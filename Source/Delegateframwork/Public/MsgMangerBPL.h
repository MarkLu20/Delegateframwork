// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MsgMangerBPL.generated.h"

/**
 * 
 */
UCLASS()
class DELEGATEFRAMWORK_API UMsgMangerBPL : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

		static AActor *MsgCenter;
		UFUNCTION()
		
		static AActor* SpawnActorToWorld(UClass *aclass);
	
};
