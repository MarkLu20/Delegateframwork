// Fill out your copyright notice in the Description page of Project Settings.

#include "AddDymincFunction.h"
#include "MsgCenter.h"
#include "Engine.h"


// Sets default values
AAddDymincFunction::AAddDymincFunction()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAddDymincFunction::BeginPlay()
{
	Super::BeginPlay();
	//UMsgCenter::mytest.AddDynamic(this,&AAddDymincFunction::Print);
	
}

// Called every frame
void AAddDymincFunction::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	

}

void AAddDymincFunction::Print(int p)
{
	GEngine->AddOnScreenDebugMessage(-1,3.0f,FColor::Red,FString::FromInt(p));
}

