// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleGroomExporterDialog.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeSimpleGroomExporterDialog() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_SimpleGroomExporter(ETypeConstructPhase);
SIMPLEGROOMEXPORTER_API UClass* Z_Construct_UClass_USimpleGroomExportOptions(ETypeConstructPhase);
SIMPLEGROOMEXPORTER_API UClass* Z_Construct_UClass_USimpleGroomExportOptions(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class USimpleGroomExportOptions ************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_USimpleGroomExportOptions_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Groom Export" },
		{ "IncludePath", "SimpleGroomExporterDialog.h" },
		{ "ModuleRelativePath", "Private/SimpleGroomExporterDialog.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseRenderData_MetaData[] = {
		{ "Category", "Export Options" },
		{ "DisplayName", "Use Render Data" },
		{ "ModuleRelativePath", "Private/SimpleGroomExporterDialog.h" },
		{ "ToolTip", "Whether to export groom render data instead of raw data for export, groom must NOT be decimated. This can sometime fix issues with the export." },
	};
#endif // WITH_METADATA

// ********** Begin Class USimpleGroomExportOptions constinit property declarations ****************
	static void NewProp_bUseRenderData_SetBit(void* Obj)
	{
		((USimpleGroomExportOptions*)Obj)->bUseRenderData = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseRenderData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USimpleGroomExportOptions constinit property declarations ******************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleGroomExportOptions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class USimpleGroomExportOptions Property Definitions ***************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bUseRenderData = { "bUseRenderData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(USimpleGroomExportOptions), &UHT_STATICS::NewProp_bUseRenderData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseRenderData_MetaData), NewProp_bUseRenderData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bUseRenderData,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class USimpleGroomExportOptions Property Definitions *****************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_SimpleGroomExporter,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_USimpleGroomExportOptions,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_USimpleGroomExportOptions;
UClass* Z_Construct_UClass_USimpleGroomExportOptions(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = USimpleGroomExportOptions;
		if (!Z_Registration_Info_UClass_USimpleGroomExportOptions.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("SimpleGroomExportOptions"),
				Z_Registration_Info_UClass_USimpleGroomExportOptions.InnerSingleton,
				nullptr,
				DataSizeOf<TClass>(),
				alignof(TClass),
				TClass::StaticClassFlags,
				TClass::StaticClassCastFlags(),
				TClass::StaticConfigName(),
				(UClass::ClassConstructorType)InternalConstructor<TClass>,
				(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
				UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
				&TClass::Super::StaticClass,
				&TClass::WithinClass::StaticClass
			);
		}
		return Z_Registration_Info_UClass_USimpleGroomExportOptions.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_USimpleGroomExportOptions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleGroomExportOptions.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_USimpleGroomExportOptions.OuterSingleton;
}
#undef UHT_STATICS
USimpleGroomExportOptions::USimpleGroomExportOptions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USimpleGroomExportOptions);
USimpleGroomExportOptions::~USimpleGroomExportOptions() {}
// ********** End Class USimpleGroomExportOptions **************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_SimpleGroomExporter_Source_SimpleGroomExporter_Private_SimpleGroomExporterDialog_h__Script_SimpleGroomExporter_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USimpleGroomExportOptions, TEXT("USimpleGroomExportOptions"), &Z_Registration_Info_UClass_USimpleGroomExportOptions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleGroomExportOptions), 389563122U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_SimpleGroomExporter_Source_SimpleGroomExporter_Private_SimpleGroomExporterDialog_h__Script_SimpleGroomExporter_fa7ee013b3d27a5b2038923b8e8893e6fecc6357{
	TEXT("/Script/SimpleGroomExporter"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
