// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSGameModeDefault.h"

void AFPSGameModeDefault::AddRewindComponent(URewindComponent* const RewindComponent)
{
    if (RewindComponent)
    {
        RewindComponentsSet.Emplace(RewindComponent);


    }

    UE_LOG(LogTemp, Warning, TEXT("Numebr of rewind components = %d"), RewindComponentsSet.Num());
}

void AFPSGameModeDefault::RemoveRewindComponent(URewindComponent* const RewindComponent)
{
    if (RewindComponent)
    {
        RewindComponentsSet.Remove(RewindComponent);
    }
}


void AFPSGameModeDefault::RewindActors(TMap<AActor*, FRewindDataStruct> const ValuesToUseInRewind)
{
    UE_LOG(LogTemp, Warning, TEXT("Rewinding"));
    //First gotta clear the saved rewind values
    SavedRewindValues.Reset();
    FRewindDataStruct CurrentTransformData;
    UE_LOG(LogTemp, Warning, TEXT("Rewind length = %d"), ValuesToUseInRewind.Num())

    //We iterate through all the entries to perform the rewind on each actor.
    for (auto& Elem : ValuesToUseInRewind)
    {
        //First we save the current transform data
        CurrentTransformData.SnapshotPosition = Elem.Key->GetActorLocation();
        CurrentTransformData.SnapshotRotation = Elem.Key->GetActorRotation();
        CurrentTransformData.SnapshotScale = Elem.Key->GetActorScale();

        //Now we add the currenttransformdata to the map for original locations
        SavedRewindValues.Emplace(Elem.Key, CurrentTransformData);

        //Now we can safely perform the rewind
        Elem.Key->SetActorLocation(Elem.Value.SnapshotPosition, false, 0, ETeleportType::TeleportPhysics);
        Elem.Key->SetActorRotation(Elem.Value.SnapshotRotation, ETeleportType::TeleportPhysics);
        Elem.Key->SetActorScale3D(Elem.Value.SnapshotScale);
     
    }
}

void AFPSGameModeDefault::ResetActorPositionsToBefore()
{
    UE_LOG(LogTemp, Warning, TEXT("Resetting"));
    //Now we reset all the actor positions
    for (auto& Elem : SavedRewindValues)
    {
        Elem.Key->SetActorLocation(Elem.Value.SnapshotPosition, false, 0, ETeleportType::TeleportPhysics);
        Elem.Key->SetActorRotation(Elem.Value.SnapshotRotation, ETeleportType::TeleportPhysics);
        Elem.Key->SetActorScale3D(Elem.Value.SnapshotScale);
    }
}