// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VOIP.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef BESTGAMEEVER_VOIP_generated_h
#error "VOIP.generated.h already included, missing '#pragma once' in VOIP.h"
#endif
#define BESTGAMEEVER_VOIP_generated_h

#define FID_BestGameEver_BestGameEver_BestGameEver_Source_BestGameEver_Public_VOIP_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execClearVoicePackets);


#define FID_BestGameEver_BestGameEver_BestGameEver_Source_BestGameEver_Public_VOIP_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVOIP(); \
	friend struct Z_Construct_UClass_UVOIP_Statics; \
public: \
	DECLARE_CLASS(UVOIP, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BestGameEver"), NO_API) \
	DECLARE_SERIALIZER(UVOIP)


#define FID_BestGameEver_BestGameEver_BestGameEver_Source_BestGameEver_Public_VOIP_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVOIP(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UVOIP(UVOIP&&); \
	UVOIP(const UVOIP&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVOIP); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVOIP); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVOIP) \
	NO_API virtual ~UVOIP();


#define FID_BestGameEver_BestGameEver_BestGameEver_Source_BestGameEver_Public_VOIP_h_18_PROLOG
#define FID_BestGameEver_BestGameEver_BestGameEver_Source_BestGameEver_Public_VOIP_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BestGameEver_BestGameEver_BestGameEver_Source_BestGameEver_Public_VOIP_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_BestGameEver_BestGameEver_BestGameEver_Source_BestGameEver_Public_VOIP_h_21_INCLASS_NO_PURE_DECLS \
	FID_BestGameEver_BestGameEver_BestGameEver_Source_BestGameEver_Public_VOIP_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BESTGAMEEVER_API UClass* StaticClass<class UVOIP>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BestGameEver_BestGameEver_BestGameEver_Source_BestGameEver_Public_VOIP_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
