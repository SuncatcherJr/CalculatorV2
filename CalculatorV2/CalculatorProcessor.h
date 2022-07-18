#pragma once
#include "wx/wx.h"
class CalculatorProcessor
{
private:
	static CalculatorProcessor* _processor; // Instance Variable
	CalculatorProcessor() {}

public:
	static CalculatorProcessor* getInstance()
	{
		if (_processor == nullptr)
		{
			_processor = new CalculatorProcessor;
		}
		return _processor;
	}

	CalculatorProcessor(CalculatorProcessor& other) = delete;
	void operator=(CalculatorProcessor& other) = delete;

	float AllFuncSwitch(float n1, float n2, char operate);
	std::string toBinaryString(float number);
	std::string toHexaDecimalString(float number);
};

