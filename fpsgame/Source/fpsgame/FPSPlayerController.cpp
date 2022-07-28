// Fill out your copyright notice in the Description page of Project Settings.

#include "fpsgame.h"
#include "FPSPlayerController.h"


AFPSPlayerController::AFPSPlayerController()
{
    APlayerController();
}

void AFPSPlayerController::ServerRequestServerTime_Implementation(
    APlayerController* requester,
    float requestWorldTime
)
{
    float serverTime = GetWorld()->GetGameState()->
        GetServerWorldTimeSeconds();
    ClientReportServerTime(requestWorldTime, serverTime);
}

bool AFPSPlayerController::ServerRequestServerTime_Validate(
    APlayerController* requester,
    float requestWorldTime
)
{
    return true;
}

void AFPSPlayerController::ClientReportServerTime_Implementation(
    float requestWorldTime,
    float serverTime
)
{
    // Apply the round-trip request time to the server's         
    // reported time to get the up-to-date server time
    float roundTripTime = GetWorld()->GetTimeSeconds() -
        requestWorldTime;
    float adjustedTime = serverTime + (roundTripTime * 0.5f);
    ServerTime = adjustedTime;
}

void AFPSPlayerController::ReceivedPlayer()
{
    Super::ReceivedPlayer();

    if (IsLocalController())
    {
        ServerRequestServerTime(
            this,
            GetWorld()->GetTimeSeconds()
        );
    }
}