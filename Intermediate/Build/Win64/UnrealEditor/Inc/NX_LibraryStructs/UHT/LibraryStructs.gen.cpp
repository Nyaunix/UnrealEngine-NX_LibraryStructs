// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NX_LibraryStructs/Public/LibraryStructs.h"
#include "StructUtils/Public/InstancedStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLibraryStructs() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
NX_LIBRARYSTRUCTS_API UScriptStruct* Z_Construct_UScriptStruct_FArrayInstanceStruct();
NX_LIBRARYSTRUCTS_API UScriptStruct* Z_Construct_UScriptStruct_FArrayUInt8Struct();
NX_LIBRARYSTRUCTS_API UScriptStruct* Z_Construct_UScriptStruct_FBoolStruct();
NX_LIBRARYSTRUCTS_API UScriptStruct* Z_Construct_UScriptStruct_FClassStruct();
NX_LIBRARYSTRUCTS_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableStruct();
NX_LIBRARYSTRUCTS_API UScriptStruct* Z_Construct_UScriptStruct_FFloatStruct();
NX_LIBRARYSTRUCTS_API UScriptStruct* Z_Construct_UScriptStruct_FInstanceStruct();
NX_LIBRARYSTRUCTS_API UScriptStruct* Z_Construct_UScriptStruct_FInt32Struct();
NX_LIBRARYSTRUCTS_API UScriptStruct* Z_Construct_UScriptStruct_FInt64Struct();
NX_LIBRARYSTRUCTS_API UScriptStruct* Z_Construct_UScriptStruct_FMapNameArrayInstanceStruct();
NX_LIBRARYSTRUCTS_API UScriptStruct* Z_Construct_UScriptStruct_FMapNameInstanceStruct();
NX_LIBRARYSTRUCTS_API UScriptStruct* Z_Construct_UScriptStruct_FNameStruct();
NX_LIBRARYSTRUCTS_API UScriptStruct* Z_Construct_UScriptStruct_FObjectStruct();
NX_LIBRARYSTRUCTS_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassStruct();
NX_LIBRARYSTRUCTS_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectStruct();
NX_LIBRARYSTRUCTS_API UScriptStruct* Z_Construct_UScriptStruct_FStringStruct();
NX_LIBRARYSTRUCTS_API UScriptStruct* Z_Construct_UScriptStruct_FTextStruct();
STRUCTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStruct();
UPackage* Z_Construct_UPackage__Script_NX_LibraryStructs();
// End Cross Module References

// Begin ScriptStruct FBoolStruct
static_assert(std::is_polymorphic<FBoolStruct>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FBoolStruct cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BoolStruct;
class UScriptStruct* FBoolStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BoolStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BoolStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoolStruct, (UObject*)Z_Construct_UPackage__Script_NX_LibraryStructs(), TEXT("BoolStruct"));
	}
	return Z_Registration_Info_UScriptStruct_BoolStruct.OuterSingleton;
}
template<> NX_LIBRARYSTRUCTS_API UScriptStruct* StaticStruct<FBoolStruct>()
{
	return FBoolStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBoolStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//bool-------------------------------------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/LibraryStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "bool-------------------------------------------------------------" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBool_MetaData[] = {
		{ "Category", "LibraryStructs" },
		{ "ModuleRelativePath", "Public/LibraryStructs.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bBool_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBool;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoolStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FBoolStruct_Statics::NewProp_bBool_SetBit(void* Obj)
{
	((FBoolStruct*)Obj)->bBool = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBoolStruct_Statics::NewProp_bBool = { "bBool", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FBoolStruct), &Z_Construct_UScriptStruct_FBoolStruct_Statics::NewProp_bBool_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBool_MetaData), NewProp_bBool_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBoolStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoolStruct_Statics::NewProp_bBool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoolStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBoolStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NX_LibraryStructs,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"BoolStruct",
	Z_Construct_UScriptStruct_FBoolStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoolStruct_Statics::PropPointers),
	sizeof(FBoolStruct),
	alignof(FBoolStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoolStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBoolStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBoolStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BoolStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BoolStruct.InnerSingleton, Z_Construct_UScriptStruct_FBoolStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BoolStruct.InnerSingleton;
}
// End ScriptStruct FBoolStruct

// Begin ScriptStruct FArrayUInt8Struct
static_assert(std::is_polymorphic<FArrayUInt8Struct>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FArrayUInt8Struct cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ArrayUInt8Struct;
class UScriptStruct* FArrayUInt8Struct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ArrayUInt8Struct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ArrayUInt8Struct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FArrayUInt8Struct, (UObject*)Z_Construct_UPackage__Script_NX_LibraryStructs(), TEXT("ArrayUInt8Struct"));
	}
	return Z_Registration_Info_UScriptStruct_ArrayUInt8Struct.OuterSingleton;
}
template<> NX_LIBRARYSTRUCTS_API UScriptStruct* StaticStruct<FArrayUInt8Struct>()
{
	return FArrayUInt8Struct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FArrayUInt8Struct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LibraryStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArrayBytes_MetaData[] = {
		{ "Category", "LibraryStructs" },
		{ "ModuleRelativePath", "Public/LibraryStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ArrayBytes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ArrayBytes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArrayUInt8Struct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FArrayUInt8Struct_Statics::NewProp_ArrayBytes_Inner = { "ArrayBytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FArrayUInt8Struct_Statics::NewProp_ArrayBytes = { "ArrayBytes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArrayUInt8Struct, ArrayBytes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArrayBytes_MetaData), NewProp_ArrayBytes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArrayUInt8Struct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArrayUInt8Struct_Statics::NewProp_ArrayBytes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArrayUInt8Struct_Statics::NewProp_ArrayBytes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArrayUInt8Struct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArrayUInt8Struct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NX_LibraryStructs,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"ArrayUInt8Struct",
	Z_Construct_UScriptStruct_FArrayUInt8Struct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArrayUInt8Struct_Statics::PropPointers),
	sizeof(FArrayUInt8Struct),
	alignof(FArrayUInt8Struct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArrayUInt8Struct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FArrayUInt8Struct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FArrayUInt8Struct()
{
	if (!Z_Registration_Info_UScriptStruct_ArrayUInt8Struct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ArrayUInt8Struct.InnerSingleton, Z_Construct_UScriptStruct_FArrayUInt8Struct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ArrayUInt8Struct.InnerSingleton;
}
// End ScriptStruct FArrayUInt8Struct

// Begin ScriptStruct FInt32Struct
static_assert(std::is_polymorphic<FInt32Struct>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FInt32Struct cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Int32Struct;
class UScriptStruct* FInt32Struct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Int32Struct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Int32Struct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInt32Struct, (UObject*)Z_Construct_UPackage__Script_NX_LibraryStructs(), TEXT("Int32Struct"));
	}
	return Z_Registration_Info_UScriptStruct_Int32Struct.OuterSingleton;
}
template<> NX_LIBRARYSTRUCTS_API UScriptStruct* StaticStruct<FInt32Struct>()
{
	return FInt32Struct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInt32Struct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//numeric--------------------------------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/LibraryStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "numeric--------------------------------------------------------" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Int32_MetaData[] = {
		{ "Category", "LibraryStructs" },
		{ "ModuleRelativePath", "Public/LibraryStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Int32;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInt32Struct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInt32Struct_Statics::NewProp_Int32 = { "Int32", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInt32Struct, Int32), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Int32_MetaData), NewProp_Int32_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInt32Struct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInt32Struct_Statics::NewProp_Int32,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInt32Struct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInt32Struct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NX_LibraryStructs,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"Int32Struct",
	Z_Construct_UScriptStruct_FInt32Struct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInt32Struct_Statics::PropPointers),
	sizeof(FInt32Struct),
	alignof(FInt32Struct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInt32Struct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInt32Struct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInt32Struct()
{
	if (!Z_Registration_Info_UScriptStruct_Int32Struct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Int32Struct.InnerSingleton, Z_Construct_UScriptStruct_FInt32Struct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Int32Struct.InnerSingleton;
}
// End ScriptStruct FInt32Struct

// Begin ScriptStruct FInt64Struct
static_assert(std::is_polymorphic<FInt64Struct>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FInt64Struct cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Int64Struct;
class UScriptStruct* FInt64Struct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Int64Struct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Int64Struct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInt64Struct, (UObject*)Z_Construct_UPackage__Script_NX_LibraryStructs(), TEXT("Int64Struct"));
	}
	return Z_Registration_Info_UScriptStruct_Int64Struct.OuterSingleton;
}
template<> NX_LIBRARYSTRUCTS_API UScriptStruct* StaticStruct<FInt64Struct>()
{
	return FInt64Struct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInt64Struct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LibraryStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Int64_MetaData[] = {
		{ "Category", "LibraryStructs" },
		{ "ModuleRelativePath", "Public/LibraryStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_Int64;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInt64Struct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FInt64Struct_Statics::NewProp_Int64 = { "Int64", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInt64Struct, Int64), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Int64_MetaData), NewProp_Int64_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInt64Struct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInt64Struct_Statics::NewProp_Int64,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInt64Struct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInt64Struct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NX_LibraryStructs,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"Int64Struct",
	Z_Construct_UScriptStruct_FInt64Struct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInt64Struct_Statics::PropPointers),
	sizeof(FInt64Struct),
	alignof(FInt64Struct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInt64Struct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInt64Struct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInt64Struct()
{
	if (!Z_Registration_Info_UScriptStruct_Int64Struct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Int64Struct.InnerSingleton, Z_Construct_UScriptStruct_FInt64Struct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Int64Struct.InnerSingleton;
}
// End ScriptStruct FInt64Struct

// Begin ScriptStruct FFloatStruct
static_assert(std::is_polymorphic<FFloatStruct>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FFloatStruct cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FloatStruct;
class UScriptStruct* FFloatStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FloatStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FloatStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFloatStruct, (UObject*)Z_Construct_UPackage__Script_NX_LibraryStructs(), TEXT("FloatStruct"));
	}
	return Z_Registration_Info_UScriptStruct_FloatStruct.OuterSingleton;
}
template<> NX_LIBRARYSTRUCTS_API UScriptStruct* StaticStruct<FFloatStruct>()
{
	return FFloatStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFloatStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LibraryStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Float_MetaData[] = {
		{ "Category", "LibraryStructs" },
		{ "ModuleRelativePath", "Public/LibraryStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Float;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFloatStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFloatStruct_Statics::NewProp_Float = { "Float", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFloatStruct, Float), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Float_MetaData), NewProp_Float_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFloatStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatStruct_Statics::NewProp_Float,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFloatStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NX_LibraryStructs,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"FloatStruct",
	Z_Construct_UScriptStruct_FFloatStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatStruct_Statics::PropPointers),
	sizeof(FFloatStruct),
	alignof(FFloatStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFloatStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFloatStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FloatStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FloatStruct.InnerSingleton, Z_Construct_UScriptStruct_FFloatStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FloatStruct.InnerSingleton;
}
// End ScriptStruct FFloatStruct

// Begin ScriptStruct FStringStruct
static_assert(std::is_polymorphic<FStringStruct>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FStringStruct cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StringStruct;
class UScriptStruct* FStringStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StringStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StringStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStringStruct, (UObject*)Z_Construct_UPackage__Script_NX_LibraryStructs(), TEXT("StringStruct"));
	}
	return Z_Registration_Info_UScriptStruct_StringStruct.OuterSingleton;
}
template<> NX_LIBRARYSTRUCTS_API UScriptStruct* StaticStruct<FStringStruct>()
{
	return FStringStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStringStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//characters--------------------------------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/LibraryStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "characters--------------------------------------------------------" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_String_MetaData[] = {
		{ "Category", "LibraryStructs" },
		{ "ModuleRelativePath", "Public/LibraryStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_String;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStringStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStringStruct_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStringStruct, String), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_String_MetaData), NewProp_String_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStringStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStringStruct_Statics::NewProp_String,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStringStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStringStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NX_LibraryStructs,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"StringStruct",
	Z_Construct_UScriptStruct_FStringStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStringStruct_Statics::PropPointers),
	sizeof(FStringStruct),
	alignof(FStringStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStringStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStringStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStringStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StringStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StringStruct.InnerSingleton, Z_Construct_UScriptStruct_FStringStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StringStruct.InnerSingleton;
}
// End ScriptStruct FStringStruct

// Begin ScriptStruct FNameStruct
static_assert(std::is_polymorphic<FNameStruct>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FNameStruct cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NameStruct;
class UScriptStruct* FNameStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NameStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NameStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNameStruct, (UObject*)Z_Construct_UPackage__Script_NX_LibraryStructs(), TEXT("NameStruct"));
	}
	return Z_Registration_Info_UScriptStruct_NameStruct.OuterSingleton;
}
template<> NX_LIBRARYSTRUCTS_API UScriptStruct* StaticStruct<FNameStruct>()
{
	return FNameStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNameStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LibraryStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "LibraryStructs" },
		{ "ModuleRelativePath", "Public/LibraryStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNameStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNameStruct_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNameStruct, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNameStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNameStruct_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNameStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNameStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NX_LibraryStructs,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"NameStruct",
	Z_Construct_UScriptStruct_FNameStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNameStruct_Statics::PropPointers),
	sizeof(FNameStruct),
	alignof(FNameStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNameStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNameStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNameStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NameStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NameStruct.InnerSingleton, Z_Construct_UScriptStruct_FNameStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NameStruct.InnerSingleton;
}
// End ScriptStruct FNameStruct

// Begin ScriptStruct FTextStruct
static_assert(std::is_polymorphic<FTextStruct>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FTextStruct cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TextStruct;
class UScriptStruct* FTextStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TextStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TextStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTextStruct, (UObject*)Z_Construct_UPackage__Script_NX_LibraryStructs(), TEXT("TextStruct"));
	}
	return Z_Registration_Info_UScriptStruct_TextStruct.OuterSingleton;
}
template<> NX_LIBRARYSTRUCTS_API UScriptStruct* StaticStruct<FTextStruct>()
{
	return FTextStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTextStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LibraryStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "Category", "LibraryStructs" },
		{ "ModuleRelativePath", "Public/LibraryStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTextStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FTextStruct_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextStruct, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTextStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextStruct_Statics::NewProp_Text,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTextStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NX_LibraryStructs,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"TextStruct",
	Z_Construct_UScriptStruct_FTextStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextStruct_Statics::PropPointers),
	sizeof(FTextStruct),
	alignof(FTextStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTextStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTextStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TextStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TextStruct.InnerSingleton, Z_Construct_UScriptStruct_FTextStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TextStruct.InnerSingleton;
}
// End ScriptStruct FTextStruct

// Begin ScriptStruct FObjectStruct
static_assert(std::is_polymorphic<FObjectStruct>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FObjectStruct cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ObjectStruct;
class UScriptStruct* FObjectStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ObjectStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ObjectStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FObjectStruct, (UObject*)Z_Construct_UPackage__Script_NX_LibraryStructs(), TEXT("ObjectStruct"));
	}
	return Z_Registration_Info_UScriptStruct_ObjectStruct.OuterSingleton;
}
template<> NX_LIBRARYSTRUCTS_API UScriptStruct* StaticStruct<FObjectStruct>()
{
	return FObjectStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FObjectStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Object--------------------------------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/LibraryStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Object--------------------------------------------------------" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[] = {
		{ "Category", "LibraryStructs" },
		{ "ModuleRelativePath", "Public/LibraryStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FObjectStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FObjectStruct_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FObjectStruct, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Object_MetaData), NewProp_Object_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FObjectStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectStruct_Statics::NewProp_Object,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FObjectStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NX_LibraryStructs,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"ObjectStruct",
	Z_Construct_UScriptStruct_FObjectStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectStruct_Statics::PropPointers),
	sizeof(FObjectStruct),
	alignof(FObjectStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FObjectStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FObjectStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ObjectStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ObjectStruct.InnerSingleton, Z_Construct_UScriptStruct_FObjectStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ObjectStruct.InnerSingleton;
}
// End ScriptStruct FObjectStruct

// Begin ScriptStruct FSoftObjectStruct
static_assert(std::is_polymorphic<FSoftObjectStruct>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSoftObjectStruct cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SoftObjectStruct;
class UScriptStruct* FSoftObjectStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SoftObjectStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SoftObjectStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoftObjectStruct, (UObject*)Z_Construct_UPackage__Script_NX_LibraryStructs(), TEXT("SoftObjectStruct"));
	}
	return Z_Registration_Info_UScriptStruct_SoftObjectStruct.OuterSingleton;
}
template<> NX_LIBRARYSTRUCTS_API UScriptStruct* StaticStruct<FSoftObjectStruct>()
{
	return FSoftObjectStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSoftObjectStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LibraryStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoftObject_MetaData[] = {
		{ "Category", "LibraryStructs" },
		{ "ModuleRelativePath", "Public/LibraryStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SoftObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoftObjectStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FSoftObjectStruct_Statics::NewProp_SoftObject = { "SoftObject", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoftObjectStruct, SoftObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoftObject_MetaData), NewProp_SoftObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoftObjectStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoftObjectStruct_Statics::NewProp_SoftObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoftObjectStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoftObjectStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NX_LibraryStructs,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"SoftObjectStruct",
	Z_Construct_UScriptStruct_FSoftObjectStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoftObjectStruct_Statics::PropPointers),
	sizeof(FSoftObjectStruct),
	alignof(FSoftObjectStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoftObjectStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSoftObjectStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SoftObjectStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SoftObjectStruct.InnerSingleton, Z_Construct_UScriptStruct_FSoftObjectStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SoftObjectStruct.InnerSingleton;
}
// End ScriptStruct FSoftObjectStruct

// Begin ScriptStruct FClassStruct
static_assert(std::is_polymorphic<FClassStruct>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FClassStruct cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClassStruct;
class UScriptStruct* FClassStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClassStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClassStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClassStruct, (UObject*)Z_Construct_UPackage__Script_NX_LibraryStructs(), TEXT("ClassStruct"));
	}
	return Z_Registration_Info_UScriptStruct_ClassStruct.OuterSingleton;
}
template<> NX_LIBRARYSTRUCTS_API UScriptStruct* StaticStruct<FClassStruct>()
{
	return FClassStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FClassStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LibraryStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[] = {
		{ "Category", "LibraryStructs" },
		{ "ModuleRelativePath", "Public/LibraryStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClassStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FClassStruct_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClassStruct, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Class_MetaData), NewProp_Class_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClassStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassStruct_Statics::NewProp_Class,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClassStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NX_LibraryStructs,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"ClassStruct",
	Z_Construct_UScriptStruct_FClassStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassStruct_Statics::PropPointers),
	sizeof(FClassStruct),
	alignof(FClassStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FClassStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FClassStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClassStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClassStruct.InnerSingleton, Z_Construct_UScriptStruct_FClassStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ClassStruct.InnerSingleton;
}
// End ScriptStruct FClassStruct

// Begin ScriptStruct FSoftClassStruct
static_assert(std::is_polymorphic<FSoftClassStruct>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSoftClassStruct cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SoftClassStruct;
class UScriptStruct* FSoftClassStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SoftClassStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SoftClassStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoftClassStruct, (UObject*)Z_Construct_UPackage__Script_NX_LibraryStructs(), TEXT("SoftClassStruct"));
	}
	return Z_Registration_Info_UScriptStruct_SoftClassStruct.OuterSingleton;
}
template<> NX_LIBRARYSTRUCTS_API UScriptStruct* StaticStruct<FSoftClassStruct>()
{
	return FSoftClassStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSoftClassStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LibraryStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoftClass_MetaData[] = {
		{ "Category", "LibraryStructs" },
		{ "ModuleRelativePath", "Public/LibraryStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_SoftClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoftClassStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FSoftClassStruct_Statics::NewProp_SoftClass = { "SoftClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoftClassStruct, SoftClass), Z_Construct_UClass_UClass, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoftClass_MetaData), NewProp_SoftClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoftClassStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoftClassStruct_Statics::NewProp_SoftClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoftClassStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoftClassStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NX_LibraryStructs,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"SoftClassStruct",
	Z_Construct_UScriptStruct_FSoftClassStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoftClassStruct_Statics::PropPointers),
	sizeof(FSoftClassStruct),
	alignof(FSoftClassStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoftClassStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSoftClassStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSoftClassStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SoftClassStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SoftClassStruct.InnerSingleton, Z_Construct_UScriptStruct_FSoftClassStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SoftClassStruct.InnerSingleton;
}
// End ScriptStruct FSoftClassStruct

// Begin ScriptStruct FDataTableStruct
static_assert(std::is_polymorphic<FDataTableStruct>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FDataTableStruct cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataTableStruct;
class UScriptStruct* FDataTableStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataTableStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataTableStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataTableStruct, (UObject*)Z_Construct_UPackage__Script_NX_LibraryStructs(), TEXT("DataTableStruct"));
	}
	return Z_Registration_Info_UScriptStruct_DataTableStruct.OuterSingleton;
}
template<> NX_LIBRARYSTRUCTS_API UScriptStruct* StaticStruct<FDataTableStruct>()
{
	return FDataTableStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataTableStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//DataTable--------------------------------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/LibraryStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DataTable--------------------------------------------------------" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataTable_MetaData[] = {
		{ "Category", "LibraryStructs" },
		{ "ModuleRelativePath", "Public/LibraryStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DataTable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataTableStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataTableStruct_Statics::NewProp_DataTable = { "DataTable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataTableStruct, DataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataTable_MetaData), NewProp_DataTable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataTableStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataTableStruct_Statics::NewProp_DataTable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataTableStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataTableStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NX_LibraryStructs,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"DataTableStruct",
	Z_Construct_UScriptStruct_FDataTableStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataTableStruct_Statics::PropPointers),
	sizeof(FDataTableStruct),
	alignof(FDataTableStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataTableStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataTableStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataTableStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataTableStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataTableStruct.InnerSingleton, Z_Construct_UScriptStruct_FDataTableStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataTableStruct.InnerSingleton;
}
// End ScriptStruct FDataTableStruct

// Begin ScriptStruct FInstanceStruct
static_assert(std::is_polymorphic<FInstanceStruct>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FInstanceStruct cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InstanceStruct;
class UScriptStruct* FInstanceStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InstanceStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InstanceStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInstanceStruct, (UObject*)Z_Construct_UPackage__Script_NX_LibraryStructs(), TEXT("InstanceStruct"));
	}
	return Z_Registration_Info_UScriptStruct_InstanceStruct.OuterSingleton;
}
template<> NX_LIBRARYSTRUCTS_API UScriptStruct* StaticStruct<FInstanceStruct>()
{
	return FInstanceStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInstanceStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//InstancedStruct-------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/LibraryStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "InstancedStruct-------------------------------" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstancedStruct_MetaData[] = {
		{ "Category", "LibraryStructs" },
		{ "ModuleRelativePath", "Public/LibraryStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InstancedStruct;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInstanceStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInstanceStruct_Statics::NewProp_InstancedStruct = { "InstancedStruct", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInstanceStruct, InstancedStruct), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstancedStruct_MetaData), NewProp_InstancedStruct_MetaData) }; // 174410355
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInstanceStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstanceStruct_Statics::NewProp_InstancedStruct,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstanceStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInstanceStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NX_LibraryStructs,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"InstanceStruct",
	Z_Construct_UScriptStruct_FInstanceStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstanceStruct_Statics::PropPointers),
	sizeof(FInstanceStruct),
	alignof(FInstanceStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstanceStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInstanceStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInstanceStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InstanceStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InstanceStruct.InnerSingleton, Z_Construct_UScriptStruct_FInstanceStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InstanceStruct.InnerSingleton;
}
// End ScriptStruct FInstanceStruct

// Begin ScriptStruct FArrayInstanceStruct
static_assert(std::is_polymorphic<FArrayInstanceStruct>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FArrayInstanceStruct cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ArrayInstanceStruct;
class UScriptStruct* FArrayInstanceStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ArrayInstanceStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ArrayInstanceStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FArrayInstanceStruct, (UObject*)Z_Construct_UPackage__Script_NX_LibraryStructs(), TEXT("ArrayInstanceStruct"));
	}
	return Z_Registration_Info_UScriptStruct_ArrayInstanceStruct.OuterSingleton;
}
template<> NX_LIBRARYSTRUCTS_API UScriptStruct* StaticStruct<FArrayInstanceStruct>()
{
	return FArrayInstanceStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FArrayInstanceStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LibraryStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "Category", "LibraryStructs" },
		{ "ModuleRelativePath", "Public/LibraryStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArrayInstanceStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FArrayInstanceStruct_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(0, nullptr) }; // 174410355
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FArrayInstanceStruct_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArrayInstanceStruct, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 174410355
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArrayInstanceStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArrayInstanceStruct_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArrayInstanceStruct_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArrayInstanceStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArrayInstanceStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NX_LibraryStructs,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"ArrayInstanceStruct",
	Z_Construct_UScriptStruct_FArrayInstanceStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArrayInstanceStruct_Statics::PropPointers),
	sizeof(FArrayInstanceStruct),
	alignof(FArrayInstanceStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArrayInstanceStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FArrayInstanceStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FArrayInstanceStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ArrayInstanceStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ArrayInstanceStruct.InnerSingleton, Z_Construct_UScriptStruct_FArrayInstanceStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ArrayInstanceStruct.InnerSingleton;
}
// End ScriptStruct FArrayInstanceStruct

// Begin ScriptStruct FMapNameInstanceStruct
static_assert(std::is_polymorphic<FMapNameInstanceStruct>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FMapNameInstanceStruct cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MapNameInstanceStruct;
class UScriptStruct* FMapNameInstanceStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MapNameInstanceStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MapNameInstanceStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMapNameInstanceStruct, (UObject*)Z_Construct_UPackage__Script_NX_LibraryStructs(), TEXT("MapNameInstanceStruct"));
	}
	return Z_Registration_Info_UScriptStruct_MapNameInstanceStruct.OuterSingleton;
}
template<> NX_LIBRARYSTRUCTS_API UScriptStruct* StaticStruct<FMapNameInstanceStruct>()
{
	return FMapNameInstanceStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMapNameInstanceStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LibraryStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "Category", "LibraryStructs" },
		{ "ModuleRelativePath", "Public/LibraryStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Data_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMapNameInstanceStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMapNameInstanceStruct_Statics::NewProp_Data_ValueProp = { "Data", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(0, nullptr) }; // 174410355
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMapNameInstanceStruct_Statics::NewProp_Data_Key_KeyProp = { "Data_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMapNameInstanceStruct_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMapNameInstanceStruct, Data), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 174410355
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMapNameInstanceStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapNameInstanceStruct_Statics::NewProp_Data_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapNameInstanceStruct_Statics::NewProp_Data_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapNameInstanceStruct_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapNameInstanceStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMapNameInstanceStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NX_LibraryStructs,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"MapNameInstanceStruct",
	Z_Construct_UScriptStruct_FMapNameInstanceStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapNameInstanceStruct_Statics::PropPointers),
	sizeof(FMapNameInstanceStruct),
	alignof(FMapNameInstanceStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapNameInstanceStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMapNameInstanceStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMapNameInstanceStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MapNameInstanceStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MapNameInstanceStruct.InnerSingleton, Z_Construct_UScriptStruct_FMapNameInstanceStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MapNameInstanceStruct.InnerSingleton;
}
// End ScriptStruct FMapNameInstanceStruct

// Begin ScriptStruct FMapNameArrayInstanceStruct
static_assert(std::is_polymorphic<FMapNameArrayInstanceStruct>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FMapNameArrayInstanceStruct cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MapNameArrayInstanceStruct;
class UScriptStruct* FMapNameArrayInstanceStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MapNameArrayInstanceStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MapNameArrayInstanceStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMapNameArrayInstanceStruct, (UObject*)Z_Construct_UPackage__Script_NX_LibraryStructs(), TEXT("MapNameArrayInstanceStruct"));
	}
	return Z_Registration_Info_UScriptStruct_MapNameArrayInstanceStruct.OuterSingleton;
}
template<> NX_LIBRARYSTRUCTS_API UScriptStruct* StaticStruct<FMapNameArrayInstanceStruct>()
{
	return FMapNameArrayInstanceStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMapNameArrayInstanceStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LibraryStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "Category", "LibraryStructs" },
		{ "ModuleRelativePath", "Public/LibraryStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Data_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMapNameArrayInstanceStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMapNameArrayInstanceStruct_Statics::NewProp_Data_ValueProp = { "Data", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FArrayInstanceStruct, METADATA_PARAMS(0, nullptr) }; // 1350675038
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMapNameArrayInstanceStruct_Statics::NewProp_Data_Key_KeyProp = { "Data_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMapNameArrayInstanceStruct_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMapNameArrayInstanceStruct, Data), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 1350675038
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMapNameArrayInstanceStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapNameArrayInstanceStruct_Statics::NewProp_Data_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapNameArrayInstanceStruct_Statics::NewProp_Data_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapNameArrayInstanceStruct_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapNameArrayInstanceStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMapNameArrayInstanceStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NX_LibraryStructs,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"MapNameArrayInstanceStruct",
	Z_Construct_UScriptStruct_FMapNameArrayInstanceStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapNameArrayInstanceStruct_Statics::PropPointers),
	sizeof(FMapNameArrayInstanceStruct),
	alignof(FMapNameArrayInstanceStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapNameArrayInstanceStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMapNameArrayInstanceStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMapNameArrayInstanceStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MapNameArrayInstanceStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MapNameArrayInstanceStruct.InnerSingleton, Z_Construct_UScriptStruct_FMapNameArrayInstanceStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MapNameArrayInstanceStruct.InnerSingleton;
}
// End ScriptStruct FMapNameArrayInstanceStruct

// Begin Registration
struct Z_CompiledInDeferFile_FID_Data_Informatics_UE_MyProject_InventoryReferenced_Plugins_NX_LibraryStructs_Source_NX_LibraryStructs_Public_LibraryStructs_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBoolStruct::StaticStruct, Z_Construct_UScriptStruct_FBoolStruct_Statics::NewStructOps, TEXT("BoolStruct"), &Z_Registration_Info_UScriptStruct_BoolStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBoolStruct), 2193065017U) },
		{ FArrayUInt8Struct::StaticStruct, Z_Construct_UScriptStruct_FArrayUInt8Struct_Statics::NewStructOps, TEXT("ArrayUInt8Struct"), &Z_Registration_Info_UScriptStruct_ArrayUInt8Struct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FArrayUInt8Struct), 3241911940U) },
		{ FInt32Struct::StaticStruct, Z_Construct_UScriptStruct_FInt32Struct_Statics::NewStructOps, TEXT("Int32Struct"), &Z_Registration_Info_UScriptStruct_Int32Struct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInt32Struct), 3069743120U) },
		{ FInt64Struct::StaticStruct, Z_Construct_UScriptStruct_FInt64Struct_Statics::NewStructOps, TEXT("Int64Struct"), &Z_Registration_Info_UScriptStruct_Int64Struct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInt64Struct), 2269143751U) },
		{ FFloatStruct::StaticStruct, Z_Construct_UScriptStruct_FFloatStruct_Statics::NewStructOps, TEXT("FloatStruct"), &Z_Registration_Info_UScriptStruct_FloatStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFloatStruct), 2898886111U) },
		{ FStringStruct::StaticStruct, Z_Construct_UScriptStruct_FStringStruct_Statics::NewStructOps, TEXT("StringStruct"), &Z_Registration_Info_UScriptStruct_StringStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStringStruct), 2981564990U) },
		{ FNameStruct::StaticStruct, Z_Construct_UScriptStruct_FNameStruct_Statics::NewStructOps, TEXT("NameStruct"), &Z_Registration_Info_UScriptStruct_NameStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNameStruct), 2358430912U) },
		{ FTextStruct::StaticStruct, Z_Construct_UScriptStruct_FTextStruct_Statics::NewStructOps, TEXT("TextStruct"), &Z_Registration_Info_UScriptStruct_TextStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTextStruct), 4073799128U) },
		{ FObjectStruct::StaticStruct, Z_Construct_UScriptStruct_FObjectStruct_Statics::NewStructOps, TEXT("ObjectStruct"), &Z_Registration_Info_UScriptStruct_ObjectStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FObjectStruct), 3928088226U) },
		{ FSoftObjectStruct::StaticStruct, Z_Construct_UScriptStruct_FSoftObjectStruct_Statics::NewStructOps, TEXT("SoftObjectStruct"), &Z_Registration_Info_UScriptStruct_SoftObjectStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSoftObjectStruct), 2854185144U) },
		{ FClassStruct::StaticStruct, Z_Construct_UScriptStruct_FClassStruct_Statics::NewStructOps, TEXT("ClassStruct"), &Z_Registration_Info_UScriptStruct_ClassStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClassStruct), 2216655812U) },
		{ FSoftClassStruct::StaticStruct, Z_Construct_UScriptStruct_FSoftClassStruct_Statics::NewStructOps, TEXT("SoftClassStruct"), &Z_Registration_Info_UScriptStruct_SoftClassStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSoftClassStruct), 3918085339U) },
		{ FDataTableStruct::StaticStruct, Z_Construct_UScriptStruct_FDataTableStruct_Statics::NewStructOps, TEXT("DataTableStruct"), &Z_Registration_Info_UScriptStruct_DataTableStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataTableStruct), 3823953033U) },
		{ FInstanceStruct::StaticStruct, Z_Construct_UScriptStruct_FInstanceStruct_Statics::NewStructOps, TEXT("InstanceStruct"), &Z_Registration_Info_UScriptStruct_InstanceStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInstanceStruct), 312708907U) },
		{ FArrayInstanceStruct::StaticStruct, Z_Construct_UScriptStruct_FArrayInstanceStruct_Statics::NewStructOps, TEXT("ArrayInstanceStruct"), &Z_Registration_Info_UScriptStruct_ArrayInstanceStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FArrayInstanceStruct), 1350675038U) },
		{ FMapNameInstanceStruct::StaticStruct, Z_Construct_UScriptStruct_FMapNameInstanceStruct_Statics::NewStructOps, TEXT("MapNameInstanceStruct"), &Z_Registration_Info_UScriptStruct_MapNameInstanceStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMapNameInstanceStruct), 593581000U) },
		{ FMapNameArrayInstanceStruct::StaticStruct, Z_Construct_UScriptStruct_FMapNameArrayInstanceStruct_Statics::NewStructOps, TEXT("MapNameArrayInstanceStruct"), &Z_Registration_Info_UScriptStruct_MapNameArrayInstanceStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMapNameArrayInstanceStruct), 402617242U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Data_Informatics_UE_MyProject_InventoryReferenced_Plugins_NX_LibraryStructs_Source_NX_LibraryStructs_Public_LibraryStructs_h_2429512336(TEXT("/Script/NX_LibraryStructs"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Data_Informatics_UE_MyProject_InventoryReferenced_Plugins_NX_LibraryStructs_Source_NX_LibraryStructs_Public_LibraryStructs_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Data_Informatics_UE_MyProject_InventoryReferenced_Plugins_NX_LibraryStructs_Source_NX_LibraryStructs_Public_LibraryStructs_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
