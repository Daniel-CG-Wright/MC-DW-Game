// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */

 // Enum storing all types of attachments possible
 /*
 1. SIGHT
 2. MAG
 3. STOCK
 4. UNDERBARREL
 5. BARREL
 */
UENUM(BlueprintType)
enum class EAttachmentType : uint8
{
	SIGHT		UMETA(DisplayName = "Sight"),
	MAG			UMETA(DisplayName = "Mag"),
	STOCK		UMETA(DisplayName = "Stock"),
	UNDERBARREL	UMETA(DisplayName = "Underbarrel"),
	BARREL		UMETA(DisplayName = "Barrel")
};

UENUM(BlueprintType)
enum class Equips : uint8 {
	//Default testing pistol
	PRIMARY = 0,
	SECONDARY,
	BOTH,
	MELEE
};

UENUM(BlueprintType)
enum class Guns : uint8 {
	NONE,
	//Default testing pistol
	PROTOTYPE_PISTOL UMETA(DisplayName = "Prototype Pistol"),
	//testing AR
	PROTOTYPE_AR UMETA(Displayname = "Prototype AR"),
	//testing burst
	PROTOTYPE_BURST UMETA(Displayname = "Prototype Burst"),
	//Testing shotgun
	PROTOTYPE_SHOTGUN UMETA(Displayname = "Prototype Shotgun"),

	LAST
};

UENUM(BlueprintType)
enum class FireType : uint8 {
	//Hitscan weapon
	HITSCAN,
	//Projectile weapon
	PROJECTILE,



};

UENUM(BlueprintType)
enum class FireMode : uint8 {
	//Automatic firing (hold down mouse)
	AUTO,
	//Burst, should set burst amount if in use. Auto firing in bursts
	BURST,
	//Semi - tap fire
	SEMI,
	//Bolt, requires animation between shots
	BOLT

	//Beam weapons should be implemented by using an automatic weapon with very high rate of fire and no spread.
	//Also configure the tracer so that it looks constant.
};

UENUM(BlueprintType)
enum class WeaponType : uint8 {
	AR,
	SMG,
	PISTOL,
	SHOTGUN,
	SNIPER_RIFLE
};