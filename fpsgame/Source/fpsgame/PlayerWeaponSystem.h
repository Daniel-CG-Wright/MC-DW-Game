// Fill out your copyright notice in the Description page of Project Settings.

/*
This class is used to manage the weapons of the player.
*/
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WeaponActor.h"
#include "WeaponAttachmentSystem.h"
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

	// The weapon attachment system of this gun
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayerWeaponSystem")
		class UWeaponAttachmentSystem* WeaponAttachmentSystem;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	// Called when a new weapon is picked up
	UFUNCTION(BlueprintCallable, Category = "PlayerWeaponSystem")
		void AddWeapon(AWeaponActor* Weapon);

	// Called when a weapon is dropped
	UFUNCTION(BlueprintCallable, Category = "PlayerWeaponSystem")
		void RemoveWeapon(AWeaponActor* Weapon);

	/* Called when a weapon is equipped, slot number is as follows:
	* 0 - Primary
	* 1 - Secondary
	* 2 - Melee
	* 	*/
	UFUNCTION(BlueprintCallable, Category = "PlayerWeaponSystem")
		void EquipWeapon(int SlotNumber);
	
	// Array storing all weapons equipped, length of 3 for 3 slots
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayerWeaponSystem")
		TArray<AWeaponActor*> Weapons;

	// Current weapon slot equipped
	// Should only be changed on the server, and replicated to clients
	// Replicated using OnRep_WeaponChanged
	UPROPERTY(ReplicatedUsing = OnRep_WeaponChanged)
		int CurrentWeaponSlot;

	// Called when the current weapon slot is changed (on clients)
	UPROPERTY()
		void OnRep_WeaponChanged();

	// Get the current weapon equipped
	UFUNCTION(BlueprintCallable, Category = "PlayerWeaponSystem")
		AWeaponActor* GetCurrentWeapon();

};
