// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BestGameEver/Public/VOIP.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVOIP() {}

// Begin Cross Module References
BESTGAMEEVER_API UClass* Z_Construct_UClass_UVOIP();
BESTGAMEEVER_API UClass* Z_Construct_UClass_UVOIP_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_BestGameEver();
// End Cross Module References

// Begin Class UVOIP Function ClearVoicePackets
struct Z_Construct_UFunction_UVOIP_ClearVoicePackets_Statics
{
	struct VOIP_eventClearVoicePackets_Parms
	{
		UObject* WorldContextObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VOIP" },
		{ "ModuleRelativePath", "Public/VOIP.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVOIP_ClearVoicePackets_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VOIP_eventClearVoicePackets_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVOIP_ClearVoicePackets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVOIP_ClearVoicePackets_Statics::NewProp_WorldContextObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVOIP_ClearVoicePackets_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVOIP_ClearVoicePackets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVOIP, nullptr, "ClearVoicePackets", nullptr, nullptr, Z_Construct_UFunction_UVOIP_ClearVoicePackets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVOIP_ClearVoicePackets_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVOIP_ClearVoicePackets_Statics::VOIP_eventClearVoicePackets_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVOIP_ClearVoicePackets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVOIP_ClearVoicePackets_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVOIP_ClearVoicePackets_Statics::VOIP_eventClearVoicePackets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVOIP_ClearVoicePackets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVOIP_ClearVoicePackets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVOIP::execClearVoicePackets)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVOIP::ClearVoicePackets(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UVOIP Function ClearVoicePackets

// Begin Class UVOIP
void UVOIP::StaticRegisterNativesUVOIP()
{
	UClass* Class = UVOIP::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClearVoicePackets", &UVOIP::execClearVoicePackets },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVOIP);
UClass* Z_Construct_UClass_UVOIP_NoRegister()
{
	return UVOIP::StaticClass();
}
struct Z_Construct_UClass_UVOIP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "VOIP.h" },
		{ "ModuleRelativePath", "Public/VOIP.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVOIP_ClearVoicePackets, "ClearVoicePackets" }, // 2575737396
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVOIP>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVOIP_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_BestGameEver,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVOIP_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVOIP_Statics::ClassParams = {
	&UVOIP::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVOIP_Statics::Class_MetaDataParams), Z_Construct_UClass_UVOIP_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVOIP()
{
	if (!Z_Registration_Info_UClass_UVOIP.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVOIP.OuterSingleton, Z_Construct_UClass_UVOIP_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVOIP.OuterSingleton;
}
template<> BESTGAMEEVER_API UClass* StaticClass<UVOIP>()
{
	return UVOIP::StaticClass();
}
UVOIP::UVOIP(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVOIP);
UVOIP::~UVOIP() {}
// End Class UVOIP

// Begin Registration
struct Z_CompiledInDeferFile_FID_BestGameEver_BestGameEver_BestGameEver_Source_BestGameEver_Public_VOIP_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVOIP, UVOIP::StaticClass, TEXT("UVOIP"), &Z_Registration_Info_UClass_UVOIP, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVOIP), 2324434904U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BestGameEver_BestGameEver_BestGameEver_Source_BestGameEver_Public_VOIP_h_1820137878(TEXT("/Script/BestGameEver"),
	Z_CompiledInDeferFile_FID_BestGameEver_BestGameEver_BestGameEver_Source_BestGameEver_Public_VOIP_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BestGameEver_BestGameEver_BestGameEver_Source_BestGameEver_Public_VOIP_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
