// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Editor/UnrealEdEngine.h"
#include "SomeUnrealEdEngine.generated.h"

/**
 * 
 */
UCLASS()
class TASK16_API USomeUnrealEdEngine : public UUnrealEdEngine
{
	GENERATED_BODY()
	
public:
	virtual void Init(IEngineLoop* InEngineLoop) override;

};
