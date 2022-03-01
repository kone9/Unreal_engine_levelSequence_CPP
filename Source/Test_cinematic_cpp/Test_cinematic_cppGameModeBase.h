// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Test_cinematic_cppGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class TEST_CINEMATIC_CPP_API ATest_cinematic_cppGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	

public:
	ATest_cinematic_cppGameModeBase();//method contructor
	~ATest_cinematic_cppGameModeBase();//method destruction

protected:
	virtual void BeginPlay() override;

private:
	UPROPERTY(VisibleAnywhere)
	class ALevelSequenceActor* secuencia_cinematica;

};
