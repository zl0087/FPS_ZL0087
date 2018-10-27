// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Boilerplate C++ definitions for a single module.
	This is automatically generated by UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "FPSProject_zl0087.h"
#include "FPSProject_zl0087.generated.dep.h"
void EmptyLinkFunctionForGeneratedCodeFPSProject_zl0087() {}
	void AFPSCharacter::StaticRegisterNativesAFPSCharacter()
	{
		FNativeFunctionRegistrar::RegisterFunction(AFPSCharacter::StaticClass(),"MoveForward",(Native)&AFPSCharacter::execMoveForward);
		FNativeFunctionRegistrar::RegisterFunction(AFPSCharacter::StaticClass(),"MoveRight",(Native)&AFPSCharacter::execMoveRight);
		FNativeFunctionRegistrar::RegisterFunction(AFPSCharacter::StaticClass(),"OnFire",(Native)&AFPSCharacter::execOnFire);
		FNativeFunctionRegistrar::RegisterFunction(AFPSCharacter::StaticClass(),"OnStartJump",(Native)&AFPSCharacter::execOnStartJump);
		FNativeFunctionRegistrar::RegisterFunction(AFPSCharacter::StaticClass(),"OnStopJump",(Native)&AFPSCharacter::execOnStopJump);
	}
	IMPLEMENT_CLASS(AFPSCharacter, 1047450761);
	void AFPSHUD::StaticRegisterNativesAFPSHUD()
	{
	}
	IMPLEMENT_CLASS(AFPSHUD, 1989193776);
	void AFPSProject_zl0087GameMode::StaticRegisterNativesAFPSProject_zl0087GameMode()
	{
	}
	IMPLEMENT_CLASS(AFPSProject_zl0087GameMode, 4265224365);
	void AFPSProjectile::StaticRegisterNativesAFPSProjectile()
	{
		FNativeFunctionRegistrar::RegisterFunction(AFPSProjectile::StaticClass(),"OnHit",(Native)&AFPSProjectile::execOnHit);
	}
	IMPLEMENT_CLASS(AFPSProjectile, 2561248196);
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_ACharacter();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_UObject_FVector();
	ENGINE_API class UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AHUD();
	ENGINE_API class UClass* Z_Construct_UClass_AGameMode();
	ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_UEngineTypes_FHitResult();
	ENGINE_API class UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AActor();
	ENGINE_API class UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_USphereComponent_NoRegister();

	FPSPROJECT_ZL0087_API class UFunction* Z_Construct_UFunction_AFPSCharacter_MoveForward();
	FPSPROJECT_ZL0087_API class UFunction* Z_Construct_UFunction_AFPSCharacter_MoveRight();
	FPSPROJECT_ZL0087_API class UFunction* Z_Construct_UFunction_AFPSCharacter_OnFire();
	FPSPROJECT_ZL0087_API class UFunction* Z_Construct_UFunction_AFPSCharacter_OnStartJump();
	FPSPROJECT_ZL0087_API class UFunction* Z_Construct_UFunction_AFPSCharacter_OnStopJump();
	FPSPROJECT_ZL0087_API class UClass* Z_Construct_UClass_AFPSCharacter_NoRegister();
	FPSPROJECT_ZL0087_API class UClass* Z_Construct_UClass_AFPSCharacter();
	FPSPROJECT_ZL0087_API class UClass* Z_Construct_UClass_AFPSHUD_NoRegister();
	FPSPROJECT_ZL0087_API class UClass* Z_Construct_UClass_AFPSHUD();
	FPSPROJECT_ZL0087_API class UClass* Z_Construct_UClass_AFPSProject_zl0087GameMode_NoRegister();
	FPSPROJECT_ZL0087_API class UClass* Z_Construct_UClass_AFPSProject_zl0087GameMode();
	FPSPROJECT_ZL0087_API class UFunction* Z_Construct_UFunction_AFPSProjectile_OnHit();
	FPSPROJECT_ZL0087_API class UClass* Z_Construct_UClass_AFPSProjectile_NoRegister();
	FPSPROJECT_ZL0087_API class UClass* Z_Construct_UClass_AFPSProjectile();
	FPSPROJECT_ZL0087_API class UPackage* Z_Construct_UPackage_FPSProject_zl0087();
	UFunction* Z_Construct_UFunction_AFPSCharacter_MoveForward()
	{
		struct FPSCharacter_eventMoveForward_Parms
		{
			float Val;
		};
		UClass* OuterClass=Z_Construct_UClass_AFPSCharacter();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(OuterClass, TEXT("MoveForward"), RF_Public|RF_Transient|RF_Native) UFunction(FObjectInitializer(), NULL, 0x00080401, 65535, sizeof(FPSCharacter_eventMoveForward_Parms));
			UProperty* NewProp_Val = new(ReturnFunction, TEXT("Val"), RF_Public|RF_Transient|RF_Native) UFloatProperty(CPP_PROPERTY_BASE(Val, FPSCharacter_eventMoveForward_Parms), 0x0000000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("FPSCharacter.h"));
			MetaData->SetValue(NewProp_Val, TEXT("ModuleRelativePath"), TEXT("FPSCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AFPSCharacter_MoveRight()
	{
		struct FPSCharacter_eventMoveRight_Parms
		{
			float Val;
		};
		UClass* OuterClass=Z_Construct_UClass_AFPSCharacter();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(OuterClass, TEXT("MoveRight"), RF_Public|RF_Transient|RF_Native) UFunction(FObjectInitializer(), NULL, 0x00080401, 65535, sizeof(FPSCharacter_eventMoveRight_Parms));
			UProperty* NewProp_Val = new(ReturnFunction, TEXT("Val"), RF_Public|RF_Transient|RF_Native) UFloatProperty(CPP_PROPERTY_BASE(Val, FPSCharacter_eventMoveRight_Parms), 0x0000000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("FPSCharacter.h"));
			MetaData->SetValue(NewProp_Val, TEXT("ModuleRelativePath"), TEXT("FPSCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AFPSCharacter_OnFire()
	{
		UClass* OuterClass=Z_Construct_UClass_AFPSCharacter();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(OuterClass, TEXT("OnFire"), RF_Public|RF_Transient|RF_Native) UFunction(FObjectInitializer(), NULL, 0x00080401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("FPSCharacter.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Function that handles firing projectiles.\nhandles firing"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AFPSCharacter_OnStartJump()
	{
		UClass* OuterClass=Z_Construct_UClass_AFPSCharacter();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(OuterClass, TEXT("OnStartJump"), RF_Public|RF_Transient|RF_Native) UFunction(FObjectInitializer(), NULL, 0x00080401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("FPSCharacter.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("sets jump flag when key is pressed"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AFPSCharacter_OnStopJump()
	{
		UClass* OuterClass=Z_Construct_UClass_AFPSCharacter();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(OuterClass, TEXT("OnStopJump"), RF_Public|RF_Transient|RF_Native) UFunction(FObjectInitializer(), NULL, 0x00080401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("FPSCharacter.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("clears jump flag when key is released"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFPSCharacter_NoRegister()
	{
		return AFPSCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_AFPSCharacter()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ACharacter();
			Z_Construct_UPackage_FPSProject_zl0087();
			OuterClass = AFPSCharacter::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;

				OuterClass->LinkChild(Z_Construct_UFunction_AFPSCharacter_MoveForward());
				OuterClass->LinkChild(Z_Construct_UFunction_AFPSCharacter_MoveRight());
				OuterClass->LinkChild(Z_Construct_UFunction_AFPSCharacter_OnFire());
				OuterClass->LinkChild(Z_Construct_UFunction_AFPSCharacter_OnStartJump());
				OuterClass->LinkChild(Z_Construct_UFunction_AFPSCharacter_OnStopJump());

				UProperty* NewProp_ProjectileClass = new(OuterClass, TEXT("ProjectileClass"), RF_Public|RF_Transient|RF_Native) UClassProperty(CPP_PROPERTY_BASE(ProjectileClass, AFPSCharacter), 0x0000000000010001, Z_Construct_UClass_AFPSProjectile_NoRegister());
				UProperty* NewProp_MuzzleOffset = new(OuterClass, TEXT("MuzzleOffset"), RF_Public|RF_Transient|RF_Native) UStructProperty(CPP_PROPERTY_BASE(MuzzleOffset, AFPSCharacter), 0x0000000000000005, Z_Construct_UScriptStruct_UObject_FVector());
				UProperty* NewProp_FirstPersonCameraComponent = new(OuterClass, TEXT("FirstPersonCameraComponent"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(FirstPersonCameraComponent, AFPSCharacter), 0x00000000000a001d, Z_Construct_UClass_UCameraComponent_NoRegister());
				UProperty* NewProp_FirstPersonMesh = new(OuterClass, TEXT("FirstPersonMesh"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(FirstPersonMesh, AFPSCharacter), 0x00000000000b0009, Z_Construct_UClass_USkeletalMeshComponent_NoRegister());
				OuterClass->AddFunctionToFunctionMap(Z_Construct_UFunction_AFPSCharacter_MoveForward()); // 1716287439
				OuterClass->AddFunctionToFunctionMap(Z_Construct_UFunction_AFPSCharacter_MoveRight()); // 1479997972
				OuterClass->AddFunctionToFunctionMap(Z_Construct_UFunction_AFPSCharacter_OnFire()); // 3887690517
				OuterClass->AddFunctionToFunctionMap(Z_Construct_UFunction_AFPSCharacter_OnStartJump()); // 2861848762
				OuterClass->AddFunctionToFunctionMap(Z_Construct_UFunction_AFPSCharacter_OnStopJump()); // 4223339163
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation AI|Navigation Pawn|Character|InternalEvents"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("FPSCharacter.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("FPSCharacter.h"));
				MetaData->SetValue(NewProp_ProjectileClass, TEXT("Category"), TEXT("Projectile"));
				MetaData->SetValue(NewProp_ProjectileClass, TEXT("ModuleRelativePath"), TEXT("FPSCharacter.h"));
				MetaData->SetValue(NewProp_ProjectileClass, TEXT("ToolTip"), TEXT("Projectile class to spawn."));
				MetaData->SetValue(NewProp_MuzzleOffset, TEXT("Category"), TEXT("Gameplay"));
				MetaData->SetValue(NewProp_MuzzleOffset, TEXT("ModuleRelativePath"), TEXT("FPSCharacter.h"));
				MetaData->SetValue(NewProp_MuzzleOffset, TEXT("ToolTip"), TEXT("Gun muzzle's offset from the camera location."));
				MetaData->SetValue(NewProp_FirstPersonCameraComponent, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_FirstPersonCameraComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_FirstPersonCameraComponent, TEXT("ModuleRelativePath"), TEXT("FPSCharacter.h"));
				MetaData->SetValue(NewProp_FirstPersonCameraComponent, TEXT("ToolTip"), TEXT("Specifies that the variable below can be seen in all Unreal Editor property windows, that the property can be read by Blueprints but not modified, and that the Category of the object is a Camera\nSpecifies a new first person camera component object"));
				MetaData->SetValue(NewProp_FirstPersonMesh, TEXT("Category"), TEXT("Mesh"));
				MetaData->SetValue(NewProp_FirstPersonMesh, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_FirstPersonMesh, TEXT("ModuleRelativePath"), TEXT("FPSCharacter.h"));
				MetaData->SetValue(NewProp_FirstPersonMesh, TEXT("ToolTip"), TEXT("FirstPersonMesh: 1st person view (arms; seen only by self)"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPSCharacter(Z_Construct_UClass_AFPSCharacter, TEXT("AFPSCharacter"));
	UClass* Z_Construct_UClass_AFPSHUD_NoRegister()
	{
		return AFPSHUD::StaticClass();
	}
	UClass* Z_Construct_UClass_AFPSHUD()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AHUD();
			Z_Construct_UPackage_FPSProject_zl0087();
			OuterClass = AFPSHUD::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x2090028C;


				OuterClass->ClassConfigName = FName(TEXT("Game"));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Rendering Actor Input Replication"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("FPSHUD.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("FPSHUD.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPSHUD(Z_Construct_UClass_AFPSHUD, TEXT("AFPSHUD"));
	UClass* Z_Construct_UClass_AFPSProject_zl0087GameMode_NoRegister()
	{
		return AFPSProject_zl0087GameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_AFPSProject_zl0087GameMode()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameMode();
			Z_Construct_UPackage_FPSProject_zl0087();
			OuterClass = AFPSProject_zl0087GameMode::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x209002AC;


				OuterClass->ClassConfigName = FName(TEXT("Game"));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Input Movement Collision Rendering Utilities|Transformation Info MovementReplication Replication Actor"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("FPSProject_zl0087GameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("FPSProject_zl0087GameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPSProject_zl0087GameMode(Z_Construct_UClass_AFPSProject_zl0087GameMode, TEXT("AFPSProject_zl0087GameMode"));
	UFunction* Z_Construct_UFunction_AFPSProjectile_OnHit()
	{
		struct FPSProjectile_eventOnHit_Parms
		{
			class AActor* OtherActor;
			class UPrimitiveComponent* OtherComp;
			FVector NormalImpulse;
			struct FHitResult Hit;
		};
		UClass* OuterClass=Z_Construct_UClass_AFPSProjectile();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(OuterClass, TEXT("OnHit"), RF_Public|RF_Transient|RF_Native) UFunction(FObjectInitializer(), NULL, 0x00C20401, 65535, sizeof(FPSProjectile_eventOnHit_Parms));
			UProperty* NewProp_Hit = new(ReturnFunction, TEXT("Hit"), RF_Public|RF_Transient|RF_Native) UStructProperty(CPP_PROPERTY_BASE(Hit, FPSProjectile_eventOnHit_Parms), 0x0000000008000182, Z_Construct_UScriptStruct_UEngineTypes_FHitResult());
			UProperty* NewProp_NormalImpulse = new(ReturnFunction, TEXT("NormalImpulse"), RF_Public|RF_Transient|RF_Native) UStructProperty(CPP_PROPERTY_BASE(NormalImpulse, FPSProjectile_eventOnHit_Parms), 0x0000000000000080, Z_Construct_UScriptStruct_UObject_FVector());
			UProperty* NewProp_OtherComp = new(ReturnFunction, TEXT("OtherComp"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(OtherComp, FPSProjectile_eventOnHit_Parms), 0x0000000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_OtherActor = new(ReturnFunction, TEXT("OtherActor"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(OtherActor, FPSProjectile_eventOnHit_Parms), 0x0000000000000080, Z_Construct_UClass_AActor_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("FPSProjectile.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("called when projectile hits something"));
			MetaData->SetValue(NewProp_Hit, TEXT("ModuleRelativePath"), TEXT("FPSProjectile.h"));
			MetaData->SetValue(NewProp_NormalImpulse, TEXT("ModuleRelativePath"), TEXT("FPSProjectile.h"));
			MetaData->SetValue(NewProp_OtherComp, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_OtherComp, TEXT("ModuleRelativePath"), TEXT("FPSProjectile.h"));
			MetaData->SetValue(NewProp_OtherActor, TEXT("ModuleRelativePath"), TEXT("FPSProjectile.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFPSProjectile_NoRegister()
	{
		return AFPSProjectile::StaticClass();
	}
	UClass* Z_Construct_UClass_AFPSProjectile()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage_FPSProject_zl0087();
			OuterClass = AFPSProjectile::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;

				OuterClass->LinkChild(Z_Construct_UFunction_AFPSProjectile_OnHit());

				UProperty* NewProp_ProjectileMovement = new(OuterClass, TEXT("ProjectileMovement"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(ProjectileMovement, AFPSProjectile), 0x00000000000a001d, Z_Construct_UClass_UProjectileMovementComponent_NoRegister());
				UProperty* NewProp_CollisionComp = new(OuterClass, TEXT("CollisionComp"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(CollisionComp, AFPSProjectile), 0x00000000000b0009, Z_Construct_UClass_USphereComponent_NoRegister());
				OuterClass->AddFunctionToFunctionMap(Z_Construct_UFunction_AFPSProjectile_OnHit()); // 1218505340
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("FPSProjectile.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("FPSProjectile.h"));
				MetaData->SetValue(NewProp_ProjectileMovement, TEXT("Category"), TEXT("Movement"));
				MetaData->SetValue(NewProp_ProjectileMovement, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_ProjectileMovement, TEXT("ModuleRelativePath"), TEXT("FPSProjectile.h"));
				MetaData->SetValue(NewProp_ProjectileMovement, TEXT("ToolTip"), TEXT("Projectile movement component"));
				MetaData->SetValue(NewProp_CollisionComp, TEXT("Category"), TEXT("Projectile"));
				MetaData->SetValue(NewProp_CollisionComp, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_CollisionComp, TEXT("ModuleRelativePath"), TEXT("FPSProjectile.h"));
				MetaData->SetValue(NewProp_CollisionComp, TEXT("ToolTip"), TEXT("Sphere collision component"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPSProjectile(Z_Construct_UClass_AFPSProjectile, TEXT("AFPSProjectile"));
	UPackage* Z_Construct_UPackage_FPSProject_zl0087()
	{
		static UPackage* ReturnPackage = NULL;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), NULL, FName(TEXT("/Script/FPSProject_zl0087")), false, false));
			ReturnPackage->PackageFlags |= PKG_CompiledIn | 0x00000000;
			FGuid Guid;
			Guid.A = 0xBC819420;
			Guid.B = 0x77F28758;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);
		}
		return ReturnPackage;
	}
#endif

