#include "FuncLib_ChineseToPinyin.h"
#include "Pinyin.h"

void UFuncLib_ChineseToPinyin::ChineseToPinYin(const FString& ChineseStr, FString& PinYinStr)
{
	if (ChineseStr.IsEmpty()) PinYinStr = {};

	for (const TCHAR& Char : ChineseStr)
	{
		auto HexCode = FString::Printf(TEXT("%X"), static_cast<int32>(Char));
		if (const auto Result = PinYinMap.Find(HexCode))
		{
			PinYinStr += FString::Printf(TEXT("%s "), **Result);
		}
		else
		{
			PinYinStr += Char;
		}
	}
}
