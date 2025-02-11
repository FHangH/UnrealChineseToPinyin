#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FuncLib_ChineseToPinyin.generated.h"

UCLASS()
class UNREALCHINESETOPINYIN_API UFuncLib_ChineseToPinyin : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category="FH|ChineseToPinYin")
	static void ChineseToPinYin(const FString& ChineseStr, FString& PinYinStr);
};
