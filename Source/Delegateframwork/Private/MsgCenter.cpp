// Fill out your copyright notice in the Description page of Project Settings.

#include "MsgCenter.h"
#include "Engine.h"
#include "ManagerModule.h"



// Sets default values for this component's properties
UMsgCenter::UMsgCenter()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UMsgCenter::BeginPlay()
{
	Super::BeginPlay();

	/*IManagerModuleInterface *ManagerModule = FModuleManager::LoadModulePtr<IManagerModuleInterface>("ManagerModule");
	ManagerModule->StartupModule();
	ManagerModule->doNothing();*/
	
	

	// ...
	
}


// Called every frame
void UMsgCenter::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

