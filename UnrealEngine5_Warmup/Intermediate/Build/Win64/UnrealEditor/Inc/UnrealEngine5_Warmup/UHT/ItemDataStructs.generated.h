// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/ItemDataStructs.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALENGINE5_WARMUP_ItemDataStructs_generated_h
#error "ItemDataStructs.generated.h already included, missing '#pragma once' in ItemDataStructs.h"
#endif
#define UNREALENGINE5_WARMUP_ItemDataStructs_generated_h

#define FID_UnrealEngine5__UnrealEngine5_Warmup_UnrealEngine5_Warmup_Source_UnrealEngine5_Warmup_Public_Data_ItemDataStructs_h_34_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FItemStatics_Statics; \
	UNREALENGINE5_WARMUP_API static class UScriptStruct* StaticStruct();


template<> UNREALENGINE5_WARMUP_API UScriptStruct* StaticStruct<struct FItemStatics>();

#define FID_UnrealEngine5__UnrealEngine5_Warmup_UnrealEngine5_Warmup_Source_UnrealEngine5_Warmup_Public_Data_ItemDataStructs_h_52_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FItemTextData_Statics; \
	UNREALENGINE5_WARMUP_API static class UScriptStruct* StaticStruct();


template<> UNREALENGINE5_WARMUP_API UScriptStruct* StaticStruct<struct FItemTextData>();

#define FID_UnrealEngine5__UnrealEngine5_Warmup_UnrealEngine5_Warmup_Source_UnrealEngine5_Warmup_Public_Data_ItemDataStructs_h_70_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FItemNumericData_Statics; \
	UNREALENGINE5_WARMUP_API static class UScriptStruct* StaticStruct();


template<> UNREALENGINE5_WARMUP_API UScriptStruct* StaticStruct<struct FItemNumericData>();

#define FID_UnrealEngine5__UnrealEngine5_Warmup_UnrealEngine5_Warmup_Source_UnrealEngine5_Warmup_Public_Data_ItemDataStructs_h_85_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FItemAssetData_Statics; \
	UNREALENGINE5_WARMUP_API static class UScriptStruct* StaticStruct();


template<> UNREALENGINE5_WARMUP_API UScriptStruct* StaticStruct<struct FItemAssetData>();

#define FID_UnrealEngine5__UnrealEngine5_Warmup_UnrealEngine5_Warmup_Source_UnrealEngine5_Warmup_Public_Data_ItemDataStructs_h_97_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FItemData_Statics; \
	UNREALENGINE5_WARMUP_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> UNREALENGINE5_WARMUP_API UScriptStruct* StaticStruct<struct FItemData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealEngine5__UnrealEngine5_Warmup_UnrealEngine5_Warmup_Source_UnrealEngine5_Warmup_Public_Data_ItemDataStructs_h


#define FOREACH_ENUM_EITEMQUALITY(op) \
	op(EItemQuality::Shoddy) \
	op(EItemQuality::Common) \
	op(EItemQuality::Quality) \
	op(EItemQuality::Masterwork) \
	op(EItemQuality::Grandmaster) 

enum class EItemQuality : uint8;
template<> struct TIsUEnumClass<EItemQuality> { enum { Value = true }; };
template<> UNREALENGINE5_WARMUP_API UEnum* StaticEnum<EItemQuality>();

#define FOREACH_ENUM_EITEMTYPE(op) \
	op(EItemType::Armor) \
	op(EItemType::Weapon) \
	op(EItemType::Shield) \
	op(EItemType::Spell) \
	op(EItemType::Consumable) \
	op(EItemType::Quest) \
	op(EItemType::Mundane) 

enum class EItemType : uint8;
template<> struct TIsUEnumClass<EItemType> { enum { Value = true }; };
template<> UNREALENGINE5_WARMUP_API UEnum* StaticEnum<EItemType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
