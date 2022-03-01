// Copyright Epic Games, Inc. All Rights Reserved.


#include "Test_cinematic_cppGameModeBase.h"
//#include "LevelSequenceActor.h"
#include <Engine/World.h>
#include <Kismet/GameplayStatics.h>

#include <LevelSequenceActor.h>
#include <LevelSequencePlayer.h>
#include <MovieSceneSequencePlayer.h>


ATest_cinematic_cppGameModeBase::ATest_cinematic_cppGameModeBase()
{
	secuencia_cinematica = nullptr;
}

ATest_cinematic_cppGameModeBase::~ATest_cinematic_cppGameModeBase()
{
}

void ATest_cinematic_cppGameModeBase::BeginPlay()
{
	TArray< AActor*> matrix_de_secuencias;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ALevelSequenceActor::StaticClass(), matrix_de_secuencias);

	//secuencia_cinematica = Cast<ALevelSequenceActor>(matrix_de_secuencias[0]);
	for (AActor* Actor : matrix_de_secuencias)
	{
		secuencia_cinematica = Cast<ALevelSequenceActor>(Actor);
	}

	//secuencia_cinematica->SequencePlayer->Stop();
	secuencia_cinematica->SequencePlayer->Play();
	
	//secuencia_cinematica->GetSequencePlayer()->Stop();
}


