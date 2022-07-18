#include "CalculatorProcessor.h"
#include "wx/wx.h"

CalculatorProcessor* CalculatorProcessor::_processor = nullptr;

float CalculatorProcessor::AllFuncSwitch(float n1, float n2, char operate)
{
	float ret = 0;
	switch (operate)
	{
	case '+':
		ret = n1 + n2;
		break;
	case '-':
		ret = n1 - n2;
		break;
	case '*':
		ret = n1 * n2;
		break;
	case '/':
		ret = n1 / n2;
		break;
	case '%':
		ret = (int)n1 % (int)n2;
		break;
	}
	return ret;
}

std::string CalculatorProcessor::toBinaryString(float number)
{
	std::string results = "";
	for (int i = 0; i < 16; i++)
	{
		results = std::to_string((int)number % 2) + results;
		number = number / 2;
	}

	return results;
}

std::string CalculatorProcessor::toHexaDecimalString(float number)
{
	std::string results = "";
	while (number > 0)
	{
		int remainder = (int)number % 16;
		if (remainder < 10)
		{
			results = std::to_string(remainder) + results;
		}
		else if (remainder == 10)
		{
			results = "A" + remainder;
		}
		else if (remainder == 11)
		{
			results = "B" + remainder;
		}
		else if (remainder == 12)
		{
			results = "C" + remainder;
		}
		else if (remainder == 13)
		{
			results = "D" + remainder;
		}
		else if (remainder == 14)
		{
			results = "E" + remainder;
		}
		else if (remainder == 15)
		{
			results = "F" + remainder;
		}
		number = number / 16;
	}
	return "0x" + results;
}
