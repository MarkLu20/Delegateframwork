// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "iostream"
#include "MsgCenter.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMyDelegate,int32,test);
UCLASS(Blueprintable, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DELEGATEFRAMWORK_API UMsgCenter : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UMsgCenter();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

public:
	   FMyDelegate mytest;
	 FMyDelegate mytest1;
	 FMyDelegate mytest2;
	
	
};
