// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerWeaponSystem.h"

// Sets default values for this component's properties
UPlayerWeaponSystem::UPlayerWeaponSystem()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// initialize array of weapons
	Weapons.Init(nullptr, 3);

}


// Called when the game starts
void UPlayerWeaponSystem::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UPlayerWeaponSystem::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

// Called when a new weapon is picked up
void UPlayerWeaponSystem::AddWeapon(AWeaponActor* Weapon)
{
	// check if weapon is valid
	if (Weapon)
	{
		// if the weapon is already in the array, drop it first
		if (Weapons.Contains(Weapon))
		{
			RemoveWeapon(Weapon);
		}
		// add weapon to array
		Weapon->OnPickupWeapon();
		switch (Weapon->GetWeaponDataStruct().MetaData.TypeOfEquip)
		{
			case Equips::PRIMARY:
				Weapons[0] = Weapon;
				break;
			case Equips::SECONDARY:
				Weapons[1] = Weapon;
				break;
			case Equips::MELEE:
				Weapons[2] = Weapon;
				break;
			case Equips::BOTH:
				Weapons[CurrentWeaponSlot] = Weapon;
				break;
			default:
				break;
		}
		// NOTE this uses pointer comparison, so it will only work if the weapon is the same instance
		// if you want to check if the weapon is the same type, you will need to implement a custom function
		// to check if the weapon is the same type
		
	}
}

// Called when a weapon is dropped
void UPlayerWeaponSystem::RemoveWeapon(AWeaponActor* Weapon)
{
	// check if weapon is valid
	if (Weapon)
	{
		// check if weapon is in the array
		if (Weapons.Contains(Weapon))
		{
			// Call weapon unequipped function
			Weapon->OnDropWeapon();
			// remove weapon from array
			Weapons.Remove(Weapon);
		}
	}
}

// Called when a weapon is equipped, slot number is as follows:
// 0 - Primary
// 1 - Secondary
// 2 - Melee
void UPlayerWeaponSystem::EquipWeapon(int SlotNumber)
{
	// if it is the current slot, do nothing
	if (SlotNumber == CurrentWeaponSlot)
	{
		return;
	}
	// check if slot number is valid
	if (SlotNumber >= 0 && SlotNumber < Weapons.Num())
	{
		// check if weapon is valid
		if (Weapons[SlotNumber])
		{
			// first unequip the current weapon
			if (GetCurrentWeapon())
			{
				GetCurrentWeapon()->OnUnequipWeapon();
			}
			// Call weapon equipped function
			Weapons[SlotNumber]->OnEquipWeapon();
			// set current weapon slot
			CurrentWeaponSlot = SlotNumber;
		}
	}
}

// Get the current weapon equipped, or nullptr if no weapon is equipped
AWeaponActor* UPlayerWeaponSystem::GetCurrentWeapon()
{
	// check if current weapon slot is valid
	if (CurrentWeaponSlot >= 0 && CurrentWeaponSlot < Weapons.Num())
	{
		// check if weapon is valid
		if (Weapons[CurrentWeaponSlot])
		{
			// return weapon
			return Weapons[CurrentWeaponSlot];
		}
	}
	// if no weapon is equipped, return nullptr
	return nullptr;
}

// When the weapon is changed on the server, reflect this
// on the client
// TODO do client side prediction too
void UPlayerWeaponSystem::OnRep_WeaponChanged()
{
	// run equip weapon function
	EquipWeapon(CurrentWeaponSlot);
}