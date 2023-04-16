// Fill out your copyright notice in the Description page of Project Settings.

#include "fpscharacter.h"
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

// Replicated properties tracking
void UPlayerWeaponSystem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	// Replicate to everyone
	DOREPLIFETIME(UPlayerWeaponSystem, Weapons);
	DOREPLIFETIME(UPlayerWeaponSystem, CurrentWeaponSlot);
}

// Called when the game starts
void UPlayerWeaponSystem::BeginPlay()
{
	Super::BeginPlay();

}


// Called every frame
void UPlayerWeaponSystem::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

// Called when a new weapon is picked up
int UPlayerWeaponSystem::AddWeapon(AWeaponActor* Weapon)
{

	// check if weapon is valid
	if (Weapon)
	{

		// add weapon to array
		Weapon->OnPickupWeapon();
		int equipslot = -1;
		switch (Weapon->GetWeaponDataStruct().MetaData.TypeOfEquip)
		{
			case Equips::PRIMARY:
				if (Weapons[0] != nullptr)
				{
					RemoveWeapon(0);
				}
				Weapons[0] = Weapon;
				equipslot = 0;
				break;
			case Equips::SECONDARY:
				if (Weapons[1] != nullptr)
				{
					RemoveWeapon(1);
				}
				Weapons[1] = Weapon;
				equipslot = 1;
				break;
			case Equips::MELEE:
				if (Weapons[2] != nullptr)
				{
					RemoveWeapon(2);
				}
				Weapons[2] = Weapon;
				equipslot = 2;
				break;
			case Equips::BOTH:
				if (Weapons[CurrentWeaponSlot] != nullptr)
				{
					RemoveWeapon(CurrentWeaponSlot);
				}
				Weapons[CurrentWeaponSlot] = Weapon;
				equipslot = CurrentWeaponSlot;
				break;
			default:
				break;
		}
		return equipslot;
		
	}
	return -1;
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
			// unequip if it is the current weapon
			if (Weapons.Find(Weapon) == CurrentWeaponSlot)
			{
				// Call weapon unequipped function
				Weapon->OnUnequipWeapon();
			}
			// Call weapon unequipped function
			Weapon->OnDropWeapon();
			// remove weapon from array
			Weapons[Weapons.Find(Weapon)] = nullptr;
			SwitchToNextAvailableWeapon();
		}
	}
}

// Remove a weapon by slot
void UPlayerWeaponSystem::RemoveWeapon(int SlotNumber)
{
	// check if slot number is valid
	if (SlotNumber >= 0 && SlotNumber < Weapons.Num())
	{
		// check if weapon is valid
		if (Weapons[SlotNumber])
		{
			// unequip if it is the current weapon
			if (SlotNumber == CurrentWeaponSlot)
			{
				// Call weapon unequipped function
				Weapons[SlotNumber]->OnUnequipWeapon();
			}
			// Call weapon unequipped function
			Weapons[SlotNumber]->OnDropWeapon();
			// remove weapon from array
			Weapons[SlotNumber] = nullptr;
			// Switch to next available weapon
			SwitchToNextAvailableWeapon();
		}
	}
}

// Get the next available weapon slot and equip that weapon
void UPlayerWeaponSystem::SwitchToNextAvailableWeapon()
{
	
	// loop through all the weapons
	for (int i = 0; i < Weapons.Num(); i++)
	{
		// check if weapon is valid
		if (Weapons[i])
		{
			EquipWeapon(i);
			// break out of loop
			break;
		}
	}
}


// Called when a weapon is equipped, slot number is as follows:
// 0 - Primary
// 1 - Secondary
// 2 - Melee
void UPlayerWeaponSystem::EquipWeapon(int SlotNumber)
{

	// Make sure that when calling this you check to make sure there has
	// actually been a change in the weapon slot, otherwise you will
	// unequip and re-equip the same weapon, which will cause issues
	// with the weapon's animation blueprint
	
	// check if slot number is valid
	if (SlotNumber >= 0 && SlotNumber < Weapons.Num())
	{
		UE_LOG(LogTemp, Warning, TEXT("Slot"));
		// check if weapon is valid
		if (Weapons[SlotNumber])
		{
			UE_LOG(LogTemp, Warning, TEXT("Slit"));
			// first unequip the current weapon
			if (GetCurrentWeapon())
			{
				GetCurrentWeapon()->OnUnequipWeapon();
			}
			// Call weapon equipped function
			Weapons[SlotNumber]->OnEquipWeapon(Cast<Afpscharacter>(GetOwner())->FPSGunComponent);
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

// Setting the ammo of the weapon in the given slot
void UPlayerWeaponSystem::SetAmmo(int SlotNumber, int Ammo)
{
	// If not server, call server function
	// else run the code below
	if (GetOwnerRole() != ROLE_Authority)
	{
		ServerSetAmmo(SlotNumber, Ammo);
		return;
	}
	// check if slot number is valid
	if (SlotNumber >= 0 && SlotNumber < Weapons.Num())
	{
		// check if weapon is valid
		if (Weapons[SlotNumber])
		{
			// set ammo
			Weapons[SlotNumber]->SetAmmo(Ammo);
			// update ammo UI
			Cast<Afpscharacter>(GetOwner())->UpdateAmmoDisplay();
		}
	}
}

// Set ammo of the current weapon
void UPlayerWeaponSystem::SetAmmo(int Ammo)
{
	if (GetOwnerRole() != ROLE_Authority)
	{
		ServerSetAmmo(CurrentWeaponSlot, Ammo);
		return;
	}
}

// Server implementation for setting ammo
bool UPlayerWeaponSystem::ServerSetAmmo_Validate(int SlotNumber, int Ammo)
{
	return true;
}

void UPlayerWeaponSystem::ServerSetAmmo_Implementation(int SlotNumber, int Ammo)
{
	SetAmmo(SlotNumber, Ammo);
}


