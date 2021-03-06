// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TestObject.generated.h"

/**
 * 
 */
UENUM(BlueprintType)
enum class EChatType :uint8
{
	TEAM UMETA(DisplayName = "队伍"),
	_WORLD UMETA(DisplayName = "世界"),
	_PRIVATE UMETA(DisplayName = "私聊"),
};
UCLASS()
class CODETESTFORWINDOWS_API UTestObject : public UObject
{ public:
	GENERATED_BODY()
		UTestObject(const FObjectInitializer &ObjectInitializer);
	UFUNCTION(BlueprintCallable)
	FString DisPlayEnumName(EChatType ChatType);
	UFUNCTION(BlueprintCallable)
		static UTestObject *GetTestInstance();
	UFUNCTION(BlueprintCallable)
	void Test(int a, float b, UGameInstance *gameinstance);

private:
	static UTestObject *TestInstance;
	
	
};
