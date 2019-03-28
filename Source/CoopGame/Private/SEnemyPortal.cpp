// Fill out your copyright notice in the Description page of Project Settings.

#include "SEnemyPortal.h"
#include "Components/StaticMeshComponent.h"




// Sets default values
ASEnemyPortal::ASEnemyPortal()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	RootComponent = MeshComp;
	

}



// Called when the game starts or when spawned
void ASEnemyPortal::BeginPlay()
{
	Super::BeginPlay();
	
}

void ASEnemyPortal::ActorBeginOverlap()
{
	for (int i = 0; i < 10; i++)
	{
		SpawnEnemy();
	}

}

void ASEnemyPortal::SpawnEnemy()
{
	

}

// Called every frame
void ASEnemyPortal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

