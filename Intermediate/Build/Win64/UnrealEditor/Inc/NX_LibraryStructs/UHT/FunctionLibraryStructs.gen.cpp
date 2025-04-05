// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NX_LibraryStructs/Public/FunctionLibraryStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFunctionLibraryStructs() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
NX_LIBRARYSTRUCTS_API UClass* Z_Construct_UClass_UFunctionLibraryStructs();
NX_LIBRARYSTRUCTS_API UClass* Z_Construct_UClass_UFunctionLibraryStructs_NoRegister();
UPackage* Z_Construct_UPackage__Script_NX_LibraryStructs();
// End Cross Module References

// Begin Class UFunctionLibraryStructs
void UFunctionLibraryStructs::StaticRegisterNativesUFunctionLibraryStructs()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFunctionLibraryStructs);
UClass* Z_Construct_UClass_UFunctionLibraryStructs_NoRegister()
{
	return UFunctionLibraryStructs::StaticClass();
}
struct Z_Construct_UClass_UFunctionLibraryStructs_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "FunctionLibraryStructs.h" },
		{ "ModuleRelativePath", "Public/FunctionLibraryStructs.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFunctionLibraryStructs>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFunctionLibraryStructs_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_NX_LibraryStructs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFunctionLibraryStructs_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFunctionLibraryStructs_Statics::ClassParams = {
	&UFunctionLibraryStructs::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFunctionLibraryStructs_Statics::Class_MetaDataParams), Z_Construct_UClass_UFunctionLibraryStructs_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFunctionLibraryStructs()
{
	if (!Z_Registration_Info_UClass_UFunctionLibraryStructs.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFunctionLibraryStructs.OuterSingleton, Z_Construct_UClass_UFunctionLibraryStructs_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFunctionLibraryStructs.OuterSingleton;
}
template<> NX_LIBRARYSTRUCTS_API UClass* StaticClass<UFunctionLibraryStructs>()
{
	return UFunctionLibraryStructs::StaticClass();
}
UFunctionLibraryStructs::UFunctionLibraryStructs(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFunctionLibraryStructs);
UFunctionLibraryStructs::~UFunctionLibraryStructs() {}
// End Class UFunctionLibraryStructs

// Begin Registration
struct Z_CompiledInDeferFile_FID_Data_Informatics_UE_MyProject_InventoryReferenced_Plugins_NX_LibraryStructs_Source_NX_LibraryStructs_Public_FunctionLibraryStructs_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFunctionLibraryStructs, UFunctionLibraryStructs::StaticClass, TEXT("UFunctionLibraryStructs"), &Z_Registration_Info_UClass_UFunctionLibraryStructs, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFunctionLibraryStructs), 3968744413U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Data_Informatics_UE_MyProject_InventoryReferenced_Plugins_NX_LibraryStructs_Source_NX_LibraryStructs_Public_FunctionLibraryStructs_h_1137761816(TEXT("/Script/NX_LibraryStructs"),
	Z_CompiledInDeferFile_FID_Data_Informatics_UE_MyProject_InventoryReferenced_Plugins_NX_LibraryStructs_Source_NX_LibraryStructs_Public_FunctionLibraryStructs_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Data_Informatics_UE_MyProject_InventoryReferenced_Plugins_NX_LibraryStructs_Source_NX_LibraryStructs_Public_FunctionLibraryStructs_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
