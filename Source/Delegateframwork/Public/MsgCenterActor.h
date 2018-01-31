// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MsgCenterActor.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTest, int32, index);
UCLASS()
class DELEGATEFRAMWORK_API AMsgCenterActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMsgCenterActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	FTest test;
	
	
};
