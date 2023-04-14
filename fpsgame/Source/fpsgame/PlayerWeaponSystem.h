// Fill out your copyright notice in the Description page of Project Settings.

/*
This class is used to manage the weapons of the player.
*/
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WeaponActor.h"
#include "WeaponAttachmentSystem.h"
#include "Net/UnrealNetwork.h"
#include "PlayerWeaponSystem.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FPSGAME_API UPlayerWeaponSystem : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UPlayerWeaponSystem();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	// Replicated properties tracking
	//Property replication
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	// Called when a new weapon is picked up
	UFUNCTION(BlueprintCallable, Category = "PlayerWeaponSystem")
		void AddWeapon(AWeaponActor* Weapon, bool SwitchAfterPickup);

	void RemoveWeapon(AWeaponActor* Weapon);

	void RemoveWeapon(int SlotNumber);

	// Switch to the next available weapon if the current weappon is dropped
	UFUNCTION(BlueprintCallable, Category = "PlayerWeaponSystem")
		void SwitchToNextAvailableWeapon();

	/* Called when a weapon is equipped, slot number is as follows:
	* 0 - Primary
	* 1 - Secondary
	* 2 - Melee
	* 	*/
	UFUNCTION(BlueprintCallable, Category = "PlayerWeaponSystem")
		void EquipWeapon(int SlotNumber);
	
	// Array storing all weapons equipped, length of 3 for 3 slots
	// Should be replicated from server to client.
	UPROPERTY(Replicated)
		TArray<AWeaponActor*> Weapons;

	// Current weapon slot equipped
	// Should only be changed on the server, and replicated to clients
	// Replicated using OnRep_WeaponChanged
	UPROPERTY(ReplicatedUsing = OnRep_WeaponChanged)
		int CurrentWeaponSlot;

	// Called when the current weapon slot is changed (on clients)
	UFUNCTION()
		void OnRep_WeaponChanged();

	// Get the current weapon equipped
	UFUNCTION(BlueprintCallable, Category = "PlayerWeaponSystem")
		AWeaponActor* GetCurrentWeapon();

	void SetAmmo(int SlotNumber, int Ammo);

	// Server RPC call for setting the ammo of the weapon in the given slot
	UFUNCTION(Server, Reliable, WithValidation)
		void ServerSetAmmo(int SlotNumber, int Ammo);

	void SetAmmo(int Ammo);

};
