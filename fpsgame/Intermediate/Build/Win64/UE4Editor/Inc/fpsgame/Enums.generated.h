// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPSGAME_Enums_generated_h
#error "Enums.generated.h already included, missing '#pragma once' in Enums.h"
#endif
#define FPSGAME_Enums_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID fpsgame_Source_fpsgame_Enums_h


#define FOREACH_ENUM_WEAPONTYPE(op) \
	op(WeaponType::AR) \
	op(WeaponType::SMG) \
	op(WeaponType::PISTOL) \
	op(WeaponType::SHOTGUN) \
	op(WeaponType::SNIPER_RIFLE) 

enum class WeaponType : uint8;
template<> FPSGAME_API UEnum* StaticEnum<WeaponType>();

#define FOREACH_ENUM_FIREMODE(op) \
	op(FireMode::AUTO) \
	op(FireMode::BURST) \
	op(FireMode::SEMI) \
	op(FireMode::BOLT) 

enum class FireMode : uint8;
template<> FPSGAME_API UEnum* StaticEnum<FireMode>();

#define FOREACH_ENUM_FIRETYPE(op) \
	op(FireType::HITSCAN) \
	op(FireType::PROJECTILE) 

enum class FireType : uint8;
template<> FPSGAME_API UEnum* StaticEnum<FireType>();

#define FOREACH_ENUM_GUNS(op) \
	op(Guns::NONE) \
	op(Guns::PROTOTYPE_PISTOL) \
	op(Guns::PROTOTYPE_AR) \
	op(Guns::PROTOTYPE_BURST) \
	op(Guns::PROTOTYPE_SHOTGUN) \
	op(Guns::LAST) 

enum class Guns : uint8;
template<> FPSGAME_API UEnum* StaticEnum<Guns>();

#define FOREACH_ENUM_EQUIPS(op) \
	op(Equips::PRIMARY) \
	op(Equips::SECONDARY) \
	op(Equips::BOTH) \
	op(Equips::MELEE) 

enum class Equips : uint8;
template<> FPSGAME_API UEnum* StaticEnum<Equips>();

#define FOREACH_ENUM_EATTACHMENTTYPE(op) \
	op(EAttachmentType::SIGHT) \
	op(EAttachmentType::MAG) \
	op(EAttachmentType::STOCK) \
	op(EAttachmentType::UNDERBARREL) \
	op(EAttachmentType::BARREL) 

enum class EAttachmentType : uint8;
template<> FPSGAME_API UEnum* StaticEnum<EAttachmentType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
