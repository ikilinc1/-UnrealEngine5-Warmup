// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEngine5_Warmup/Public/Data/ItemDataStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemDataStructs() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	UNREALENGINE5_WARMUP_API UEnum* Z_Construct_UEnum_UnrealEngine5_Warmup_EItemQuality();
	UNREALENGINE5_WARMUP_API UEnum* Z_Construct_UEnum_UnrealEngine5_Warmup_EItemType();
	UNREALENGINE5_WARMUP_API UScriptStruct* Z_Construct_UScriptStruct_FItemAssetData();
	UNREALENGINE5_WARMUP_API UScriptStruct* Z_Construct_UScriptStruct_FItemData();
	UNREALENGINE5_WARMUP_API UScriptStruct* Z_Construct_UScriptStruct_FItemNumericData();
	UNREALENGINE5_WARMUP_API UScriptStruct* Z_Construct_UScriptStruct_FItemStatics();
	UNREALENGINE5_WARMUP_API UScriptStruct* Z_Construct_UScriptStruct_FItemTextData();
	UPackage* Z_Construct_UPackage__Script_UnrealEngine5_Warmup();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EItemQuality;
	static UEnum* EItemQuality_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EItemQuality.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EItemQuality.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealEngine5_Warmup_EItemQuality, (UObject*)Z_Construct_UPackage__Script_UnrealEngine5_Warmup(), TEXT("EItemQuality"));
		}
		return Z_Registration_Info_UEnum_EItemQuality.OuterSingleton;
	}
	template<> UNREALENGINE5_WARMUP_API UEnum* StaticEnum<EItemQuality>()
	{
		return EItemQuality_StaticEnum();
	}
	struct Z_Construct_UEnum_UnrealEngine5_Warmup_EItemQuality_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UnrealEngine5_Warmup_EItemQuality_Statics::Enumerators[] = {
		{ "EItemQuality::Shoddy", (int64)EItemQuality::Shoddy },
		{ "EItemQuality::Common", (int64)EItemQuality::Common },
		{ "EItemQuality::Quality", (int64)EItemQuality::Quality },
		{ "EItemQuality::Masterwork", (int64)EItemQuality::Masterwork },
		{ "EItemQuality::Grandmaster", (int64)EItemQuality::Grandmaster },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UnrealEngine5_Warmup_EItemQuality_Statics::Enum_MetaDataParams[] = {
		{ "Common.DisplayName", "Common" },
		{ "Common.Name", "EItemQuality::Common" },
		{ "Grandmaster.DisplayName", "Grandmaster" },
		{ "Grandmaster.Name", "EItemQuality::Grandmaster" },
		{ "Masterwork.DisplayName", "Masterwork" },
		{ "Masterwork.Name", "EItemQuality::Masterwork" },
		{ "ModuleRelativePath", "Public/Data/ItemDataStructs.h" },
		{ "Quality.DisplayName", "Quality" },
		{ "Quality.Name", "EItemQuality::Quality" },
		{ "Shoddy.DisplayName", "Shoddy" },
		{ "Shoddy.Name", "EItemQuality::Shoddy" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealEngine5_Warmup_EItemQuality_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UnrealEngine5_Warmup,
		nullptr,
		"EItemQuality",
		"EItemQuality",
		Z_Construct_UEnum_UnrealEngine5_Warmup_EItemQuality_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEngine5_Warmup_EItemQuality_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEngine5_Warmup_EItemQuality_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UnrealEngine5_Warmup_EItemQuality_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_UnrealEngine5_Warmup_EItemQuality()
	{
		if (!Z_Registration_Info_UEnum_EItemQuality.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EItemQuality.InnerSingleton, Z_Construct_UEnum_UnrealEngine5_Warmup_EItemQuality_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EItemQuality.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EItemType;
	static UEnum* EItemType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EItemType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EItemType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealEngine5_Warmup_EItemType, (UObject*)Z_Construct_UPackage__Script_UnrealEngine5_Warmup(), TEXT("EItemType"));
		}
		return Z_Registration_Info_UEnum_EItemType.OuterSingleton;
	}
	template<> UNREALENGINE5_WARMUP_API UEnum* StaticEnum<EItemType>()
	{
		return EItemType_StaticEnum();
	}
	struct Z_Construct_UEnum_UnrealEngine5_Warmup_EItemType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UnrealEngine5_Warmup_EItemType_Statics::Enumerators[] = {
		{ "EItemType::Armor", (int64)EItemType::Armor },
		{ "EItemType::Weapon", (int64)EItemType::Weapon },
		{ "EItemType::Shield", (int64)EItemType::Shield },
		{ "EItemType::Spell", (int64)EItemType::Spell },
		{ "EItemType::Consumable", (int64)EItemType::Consumable },
		{ "EItemType::Quest", (int64)EItemType::Quest },
		{ "EItemType::Mundane", (int64)EItemType::Mundane },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UnrealEngine5_Warmup_EItemType_Statics::Enum_MetaDataParams[] = {
		{ "Armor.DisplayName", "Armor" },
		{ "Armor.Name", "EItemType::Armor" },
		{ "Consumable.DisplayName", "Consumable" },
		{ "Consumable.Name", "EItemType::Consumable" },
		{ "ModuleRelativePath", "Public/Data/ItemDataStructs.h" },
		{ "Mundane.DisplayName", "Mundane" },
		{ "Mundane.Name", "EItemType::Mundane" },
		{ "Quest.DisplayName", "Quest" },
		{ "Quest.Name", "EItemType::Quest" },
		{ "Shield.DisplayName", "Shield" },
		{ "Shield.Name", "EItemType::Shield" },
		{ "Spell.DisplayName", "Spell" },
		{ "Spell.Name", "EItemType::Spell" },
		{ "Weapon.DisplayName", "Weapon" },
		{ "Weapon.Name", "EItemType::Weapon" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealEngine5_Warmup_EItemType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UnrealEngine5_Warmup,
		nullptr,
		"EItemType",
		"EItemType",
		Z_Construct_UEnum_UnrealEngine5_Warmup_EItemType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEngine5_Warmup_EItemType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEngine5_Warmup_EItemType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UnrealEngine5_Warmup_EItemType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_UnrealEngine5_Warmup_EItemType()
	{
		if (!Z_Registration_Info_UEnum_EItemType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EItemType.InnerSingleton, Z_Construct_UEnum_UnrealEngine5_Warmup_EItemType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EItemType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ItemStatics;
class UScriptStruct* FItemStatics::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ItemStatics.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ItemStatics.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemStatics, (UObject*)Z_Construct_UPackage__Script_UnrealEngine5_Warmup(), TEXT("ItemStatics"));
	}
	return Z_Registration_Info_UScriptStruct_ItemStatics.OuterSingleton;
}
template<> UNREALENGINE5_WARMUP_API UScriptStruct* StaticStruct<FItemStatics>()
{
	return FItemStatics::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FItemStatics_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArmorRating_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ArmorRating;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RestorationAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RestorationAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SellValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SellValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemStatics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Data/ItemDataStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FItemStatics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemStatics>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemStatics_Statics::NewProp_ArmorRating_MetaData[] = {
		{ "Category", "ItemStatics" },
		{ "ModuleRelativePath", "Public/Data/ItemDataStructs.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FItemStatics_Statics::NewProp_ArmorRating = { "ArmorRating", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemStatics, ArmorRating), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemStatics_Statics::NewProp_ArmorRating_MetaData), Z_Construct_UScriptStruct_FItemStatics_Statics::NewProp_ArmorRating_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemStatics_Statics::NewProp_DamageValue_MetaData[] = {
		{ "Category", "ItemStatics" },
		{ "ModuleRelativePath", "Public/Data/ItemDataStructs.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FItemStatics_Statics::NewProp_DamageValue = { "DamageValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemStatics, DamageValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemStatics_Statics::NewProp_DamageValue_MetaData), Z_Construct_UScriptStruct_FItemStatics_Statics::NewProp_DamageValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemStatics_Statics::NewProp_RestorationAmount_MetaData[] = {
		{ "Category", "ItemStatics" },
		{ "ModuleRelativePath", "Public/Data/ItemDataStructs.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FItemStatics_Statics::NewProp_RestorationAmount = { "RestorationAmount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemStatics, RestorationAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemStatics_Statics::NewProp_RestorationAmount_MetaData), Z_Construct_UScriptStruct_FItemStatics_Statics::NewProp_RestorationAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemStatics_Statics::NewProp_SellValue_MetaData[] = {
		{ "Category", "ItemStatics" },
		{ "ModuleRelativePath", "Public/Data/ItemDataStructs.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FItemStatics_Statics::NewProp_SellValue = { "SellValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemStatics, SellValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemStatics_Statics::NewProp_SellValue_MetaData), Z_Construct_UScriptStruct_FItemStatics_Statics::NewProp_SellValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemStatics_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemStatics_Statics::NewProp_ArmorRating,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemStatics_Statics::NewProp_DamageValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemStatics_Statics::NewProp_RestorationAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemStatics_Statics::NewProp_SellValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemStatics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEngine5_Warmup,
		nullptr,
		&NewStructOps,
		"ItemStatics",
		Z_Construct_UScriptStruct_FItemStatics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemStatics_Statics::PropPointers),
		sizeof(FItemStatics),
		alignof(FItemStatics),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemStatics_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FItemStatics_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemStatics_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FItemStatics()
	{
		if (!Z_Registration_Info_UScriptStruct_ItemStatics.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ItemStatics.InnerSingleton, Z_Construct_UScriptStruct_FItemStatics_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ItemStatics.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ItemTextData;
class UScriptStruct* FItemTextData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ItemTextData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ItemTextData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemTextData, (UObject*)Z_Construct_UPackage__Script_UnrealEngine5_Warmup(), TEXT("ItemTextData"));
	}
	return Z_Registration_Info_UScriptStruct_ItemTextData.OuterSingleton;
}
template<> UNREALENGINE5_WARMUP_API UScriptStruct* StaticStruct<FItemTextData>()
{
	return FItemTextData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FItemTextData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractionTest_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_InteractionTest;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UsageText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_UsageText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemTextData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Data/ItemDataStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FItemTextData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemTextData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemTextData_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "ItemTextData" },
		{ "ModuleRelativePath", "Public/Data/ItemDataStructs.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FItemTextData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemTextData, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemTextData_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FItemTextData_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemTextData_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "ItemTextData" },
		{ "ModuleRelativePath", "Public/Data/ItemDataStructs.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FItemTextData_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemTextData, Description), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemTextData_Statics::NewProp_Description_MetaData), Z_Construct_UScriptStruct_FItemTextData_Statics::NewProp_Description_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemTextData_Statics::NewProp_InteractionTest_MetaData[] = {
		{ "Category", "ItemTextData" },
		{ "ModuleRelativePath", "Public/Data/ItemDataStructs.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FItemTextData_Statics::NewProp_InteractionTest = { "InteractionTest", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemTextData, InteractionTest), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemTextData_Statics::NewProp_InteractionTest_MetaData), Z_Construct_UScriptStruct_FItemTextData_Statics::NewProp_InteractionTest_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemTextData_Statics::NewProp_UsageText_MetaData[] = {
		{ "Category", "ItemTextData" },
		{ "ModuleRelativePath", "Public/Data/ItemDataStructs.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FItemTextData_Statics::NewProp_UsageText = { "UsageText", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemTextData, UsageText), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemTextData_Statics::NewProp_UsageText_MetaData), Z_Construct_UScriptStruct_FItemTextData_Statics::NewProp_UsageText_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemTextData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemTextData_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemTextData_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemTextData_Statics::NewProp_InteractionTest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemTextData_Statics::NewProp_UsageText,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemTextData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEngine5_Warmup,
		nullptr,
		&NewStructOps,
		"ItemTextData",
		Z_Construct_UScriptStruct_FItemTextData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemTextData_Statics::PropPointers),
		sizeof(FItemTextData),
		alignof(FItemTextData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemTextData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FItemTextData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemTextData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FItemTextData()
	{
		if (!Z_Registration_Info_UScriptStruct_ItemTextData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ItemTextData.InnerSingleton, Z_Construct_UScriptStruct_FItemTextData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ItemTextData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ItemNumericData;
class UScriptStruct* FItemNumericData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ItemNumericData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ItemNumericData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemNumericData, (UObject*)Z_Construct_UPackage__Script_UnrealEngine5_Warmup(), TEXT("ItemNumericData"));
	}
	return Z_Registration_Info_UScriptStruct_ItemNumericData.OuterSingleton;
}
template<> UNREALENGINE5_WARMUP_API UScriptStruct* StaticStruct<FItemNumericData>()
{
	return FItemNumericData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FItemNumericData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxStackSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxStackSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsStackable_MetaData[];
#endif
		static void NewProp_bIsStackable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsStackable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemNumericData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Data/ItemDataStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FItemNumericData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemNumericData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemNumericData_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "ItemNumericData" },
		{ "ModuleRelativePath", "Public/Data/ItemDataStructs.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FItemNumericData_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemNumericData, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemNumericData_Statics::NewProp_Weight_MetaData), Z_Construct_UScriptStruct_FItemNumericData_Statics::NewProp_Weight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemNumericData_Statics::NewProp_MaxStackSize_MetaData[] = {
		{ "Category", "ItemNumericData" },
		{ "ModuleRelativePath", "Public/Data/ItemDataStructs.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItemNumericData_Statics::NewProp_MaxStackSize = { "MaxStackSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemNumericData, MaxStackSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemNumericData_Statics::NewProp_MaxStackSize_MetaData), Z_Construct_UScriptStruct_FItemNumericData_Statics::NewProp_MaxStackSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemNumericData_Statics::NewProp_bIsStackable_MetaData[] = {
		{ "Category", "ItemNumericData" },
		{ "ModuleRelativePath", "Public/Data/ItemDataStructs.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FItemNumericData_Statics::NewProp_bIsStackable_SetBit(void* Obj)
	{
		((FItemNumericData*)Obj)->bIsStackable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FItemNumericData_Statics::NewProp_bIsStackable = { "bIsStackable", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FItemNumericData), &Z_Construct_UScriptStruct_FItemNumericData_Statics::NewProp_bIsStackable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemNumericData_Statics::NewProp_bIsStackable_MetaData), Z_Construct_UScriptStruct_FItemNumericData_Statics::NewProp_bIsStackable_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemNumericData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemNumericData_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemNumericData_Statics::NewProp_MaxStackSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemNumericData_Statics::NewProp_bIsStackable,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemNumericData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEngine5_Warmup,
		nullptr,
		&NewStructOps,
		"ItemNumericData",
		Z_Construct_UScriptStruct_FItemNumericData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemNumericData_Statics::PropPointers),
		sizeof(FItemNumericData),
		alignof(FItemNumericData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemNumericData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FItemNumericData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemNumericData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FItemNumericData()
	{
		if (!Z_Registration_Info_UScriptStruct_ItemNumericData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ItemNumericData.InnerSingleton, Z_Construct_UScriptStruct_FItemNumericData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ItemNumericData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ItemAssetData;
class UScriptStruct* FItemAssetData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ItemAssetData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ItemAssetData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemAssetData, (UObject*)Z_Construct_UPackage__Script_UnrealEngine5_Warmup(), TEXT("ItemAssetData"));
	}
	return Z_Registration_Info_UScriptStruct_ItemAssetData.OuterSingleton;
}
template<> UNREALENGINE5_WARMUP_API UScriptStruct* StaticStruct<FItemAssetData>()
{
	return FItemAssetData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FItemAssetData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Icon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemAssetData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Data/ItemDataStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FItemAssetData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemAssetData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemAssetData_Statics::NewProp_Icon_MetaData[] = {
		{ "Category", "ItemAssetData" },
		{ "ModuleRelativePath", "Public/Data/ItemDataStructs.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FItemAssetData_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemAssetData, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemAssetData_Statics::NewProp_Icon_MetaData), Z_Construct_UScriptStruct_FItemAssetData_Statics::NewProp_Icon_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemAssetData_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "ItemAssetData" },
		{ "ModuleRelativePath", "Public/Data/ItemDataStructs.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FItemAssetData_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemAssetData, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemAssetData_Statics::NewProp_Mesh_MetaData), Z_Construct_UScriptStruct_FItemAssetData_Statics::NewProp_Mesh_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemAssetData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemAssetData_Statics::NewProp_Icon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemAssetData_Statics::NewProp_Mesh,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemAssetData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEngine5_Warmup,
		nullptr,
		&NewStructOps,
		"ItemAssetData",
		Z_Construct_UScriptStruct_FItemAssetData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemAssetData_Statics::PropPointers),
		sizeof(FItemAssetData),
		alignof(FItemAssetData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemAssetData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FItemAssetData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemAssetData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FItemAssetData()
	{
		if (!Z_Registration_Info_UScriptStruct_ItemAssetData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ItemAssetData.InnerSingleton, Z_Construct_UScriptStruct_FItemAssetData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ItemAssetData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FItemData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FItemData cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ItemData;
class UScriptStruct* FItemData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ItemData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ItemData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemData, (UObject*)Z_Construct_UPackage__Script_UnrealEngine5_Warmup(), TEXT("ItemData"));
	}
	return Z_Registration_Info_UScriptStruct_ItemData.OuterSingleton;
}
template<> UNREALENGINE5_WARMUP_API UScriptStruct* StaticStruct<FItemData>()
{
	return FItemData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FItemData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ItemType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ItemType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ItemQuality_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemQuality_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ItemQuality;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemStatics_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemStatics;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemTextData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemTextData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemNumericData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemNumericData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemAssetData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemAssetData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Data/ItemDataStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FItemData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "Item Data" },
		{ "ModuleRelativePath", "Public/Data/ItemDataStructs.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, ID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ID_MetaData), Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ID_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemType_MetaData[] = {
		{ "Category", "Item Data" },
		{ "ModuleRelativePath", "Public/Data/ItemDataStructs.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, ItemType), Z_Construct_UEnum_UnrealEngine5_Warmup_EItemType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemType_MetaData), Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemType_MetaData) }; // 1712738755
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemQuality_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemQuality_MetaData[] = {
		{ "Category", "Item Data" },
		{ "ModuleRelativePath", "Public/Data/ItemDataStructs.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemQuality = { "ItemQuality", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, ItemQuality), Z_Construct_UEnum_UnrealEngine5_Warmup_EItemQuality, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemQuality_MetaData), Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemQuality_MetaData) }; // 1322066313
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemStatics_MetaData[] = {
		{ "Category", "Item Data" },
		{ "ModuleRelativePath", "Public/Data/ItemDataStructs.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemStatics = { "ItemStatics", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, ItemStatics), Z_Construct_UScriptStruct_FItemStatics, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemStatics_MetaData), Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemStatics_MetaData) }; // 1488040550
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemTextData_MetaData[] = {
		{ "Category", "Item Data" },
		{ "ModuleRelativePath", "Public/Data/ItemDataStructs.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemTextData = { "ItemTextData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, ItemTextData), Z_Construct_UScriptStruct_FItemTextData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemTextData_MetaData), Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemTextData_MetaData) }; // 4258936291
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemNumericData_MetaData[] = {
		{ "Category", "Item Data" },
		{ "ModuleRelativePath", "Public/Data/ItemDataStructs.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemNumericData = { "ItemNumericData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, ItemNumericData), Z_Construct_UScriptStruct_FItemNumericData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemNumericData_MetaData), Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemNumericData_MetaData) }; // 2603629084
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemAssetData_MetaData[] = {
		{ "Category", "Item Data" },
		{ "ModuleRelativePath", "Public/Data/ItemDataStructs.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemAssetData = { "ItemAssetData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, ItemAssetData), Z_Construct_UScriptStruct_FItemAssetData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemAssetData_MetaData), Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemAssetData_MetaData) }; // 2645421537
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemQuality_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemQuality,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemStatics,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemTextData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemNumericData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ItemAssetData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEngine5_Warmup,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ItemData",
		Z_Construct_UScriptStruct_FItemData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::PropPointers),
		sizeof(FItemData),
		alignof(FItemData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FItemData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FItemData()
	{
		if (!Z_Registration_Info_UScriptStruct_ItemData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ItemData.InnerSingleton, Z_Construct_UScriptStruct_FItemData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ItemData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UnrealEngine5__UnrealEngine5_Warmup_UnrealEngine5_Warmup_Source_UnrealEngine5_Warmup_Public_Data_ItemDataStructs_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5__UnrealEngine5_Warmup_UnrealEngine5_Warmup_Source_UnrealEngine5_Warmup_Public_Data_ItemDataStructs_h_Statics::EnumInfo[] = {
		{ EItemQuality_StaticEnum, TEXT("EItemQuality"), &Z_Registration_Info_UEnum_EItemQuality, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1322066313U) },
		{ EItemType_StaticEnum, TEXT("EItemType"), &Z_Registration_Info_UEnum_EItemType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1712738755U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5__UnrealEngine5_Warmup_UnrealEngine5_Warmup_Source_UnrealEngine5_Warmup_Public_Data_ItemDataStructs_h_Statics::ScriptStructInfo[] = {
		{ FItemStatics::StaticStruct, Z_Construct_UScriptStruct_FItemStatics_Statics::NewStructOps, TEXT("ItemStatics"), &Z_Registration_Info_UScriptStruct_ItemStatics, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItemStatics), 1488040550U) },
		{ FItemTextData::StaticStruct, Z_Construct_UScriptStruct_FItemTextData_Statics::NewStructOps, TEXT("ItemTextData"), &Z_Registration_Info_UScriptStruct_ItemTextData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItemTextData), 4258936291U) },
		{ FItemNumericData::StaticStruct, Z_Construct_UScriptStruct_FItemNumericData_Statics::NewStructOps, TEXT("ItemNumericData"), &Z_Registration_Info_UScriptStruct_ItemNumericData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItemNumericData), 2603629084U) },
		{ FItemAssetData::StaticStruct, Z_Construct_UScriptStruct_FItemAssetData_Statics::NewStructOps, TEXT("ItemAssetData"), &Z_Registration_Info_UScriptStruct_ItemAssetData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItemAssetData), 2645421537U) },
		{ FItemData::StaticStruct, Z_Construct_UScriptStruct_FItemData_Statics::NewStructOps, TEXT("ItemData"), &Z_Registration_Info_UScriptStruct_ItemData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItemData), 1687408940U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine5__UnrealEngine5_Warmup_UnrealEngine5_Warmup_Source_UnrealEngine5_Warmup_Public_Data_ItemDataStructs_h_944385565(TEXT("/Script/UnrealEngine5_Warmup"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UnrealEngine5__UnrealEngine5_Warmup_UnrealEngine5_Warmup_Source_UnrealEngine5_Warmup_Public_Data_ItemDataStructs_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5__UnrealEngine5_Warmup_UnrealEngine5_Warmup_Source_UnrealEngine5_Warmup_Public_Data_ItemDataStructs_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_UnrealEngine5__UnrealEngine5_Warmup_UnrealEngine5_Warmup_Source_UnrealEngine5_Warmup_Public_Data_ItemDataStructs_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine5__UnrealEngine5_Warmup_UnrealEngine5_Warmup_Source_UnrealEngine5_Warmup_Public_Data_ItemDataStructs_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
