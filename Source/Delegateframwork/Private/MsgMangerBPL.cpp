// Fill out your copyright notice in the Description page of Project Settings.

#include "MsgMangerBPL.h"
#include "Engine.h"

AActor * UMsgMangerBPL::SpawnActorToWorld(UClass * aclass)
{
	AActor *actor;
	UWorld *world = UGameplayStatics::GetPlayerController(NULL, 0)->GetWorld();
	//GetWorld()->SpawnActorFromClass<>()
	actor = world->SpawnActor<AActor>(aclass,FVector(0.0f,0.0f,0.0f),FRotator(0.0f,0.0f,0.0f));
	
	return actor;
}
