#include "wx/wx.h"
#include "CppUnitTest.h"
#include "../CalculatorV2/ButtonFactory.h"
#include "../CalculatorV2/CalculatorProcessor.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CalcTesting
{
	TEST_CLASS(ButtonFactTests)
	{
	public:
		wxFrame* buttonText = new wxFrame(nullptr, wxID_ANY, "THE CALC... sorry the name isn't loading :/", wxPoint(0, 200), wxSize(400, 550));
		TEST_METHOD(buttonCreation1Testing)
		{
			int id = 1001;
			wxButton* zeroButton = ButtonFactory::buttonCreation1(buttonText);
			Assert::IsTrue(zeroButton->GetId() == id);
		}
		TEST_METHOD(buttonCreation2Testing)
		{
			int id = 1002;
			wxButton* oneButton = ButtonFactory::buttonCreation2(buttonText);
			Assert::IsTrue(oneButton->GetId() == id);
		}
		TEST_METHOD(buttonCreation3Testing)
		{
			int id = 1003;
			wxButton* twoButton = ButtonFactory::buttonCreation3(buttonText);
			Assert::IsTrue(twoButton->GetId() == id);
		}
		TEST_METHOD(buttonCreation4Testing)
		{
			int id = 1004;
			wxButton* threeButton = ButtonFactory::buttonCreation4(buttonText);
			Assert::IsTrue(threeButton->GetId() == id);
		}
		TEST_METHOD(buttonCreation5testing)
		{
			int id = 1005;
			wxButton* fourButton = ButtonFactory::buttonCreation5(buttonText);
			Assert::IsTrue(fourButton->GetId() == id);
		}
		TEST_METHOD(buttonCreation6Testing)
		{
			int id = 1006;
			wxButton* fiveButton = ButtonFactory::buttonCreation6(buttonText);
			Assert::IsTrue(fiveButton->GetId() == id);
		}
		TEST_METHOD(buttonCreation7Testing)
		{
			int id = 1007;
			wxButton* sevenButton = ButtonFactory::buttonCreation7(buttonText);
			Assert::IsTrue(sevenButton->GetId() == id);
		}
		TEST_METHOD(buttonCreation8Testing)
		{
			int id = 1008;
			wxButton* eightButton = ButtonFactory::buttonCreation8(buttonText);
			Assert::IsTrue(eightButton->GetId() == id);
		}
		TEST_METHOD(buttonCreation9Testing)
		{
			int id = 1009;
			wxButton* nineButton = ButtonFactory::buttonCreation9(buttonText);
			Assert::IsTrue(nineButton->GetId() == id);
		}
		TEST_METHOD(buttonCreation10Testing)
		{
			int id = 1010;
			wxButton* tenButton = ButtonFactory::buttonCreation10(buttonText);
			Assert::IsTrue(tenButton->GetId() == id);
		}
	};
	TEST_CLASS(CalcProcessorTests)
	{
	public:
		CalculatorProcessor* theProcess = CalculatorProcessor::getInstance();
		TEST_METHOD(add10to10)
		{
			float res = theProcess->AllFuncSwitch(10, 10, '+');
			Assert::IsTrue(res == (float)20);
		}
		TEST_METHOD(add22to33)
		{
			float res = theProcess->AllFuncSwitch(22, 33, '+');
			Assert::IsTrue(res == (float)55);
		}
		TEST_METHOD(add80to911)
		{
			float res = theProcess->AllFuncSwitch(80, 911, '+');
			Assert::IsTrue(res == (float)991);
		}
		TEST_METHOD(sub10to10)
		{
			float res = theProcess->AllFuncSwitch(10, 10, '-');
			Assert::IsTrue(res == (float)0);
		}
		TEST_METHOD(sub420to421)
		{
			float res = theProcess->AllFuncSwitch(420, 421, '-');
			Assert::IsTrue(res == (float)-1);
		}
		TEST_METHOD(sub10000to10)
		{
			float res = theProcess->AllFuncSwitch(10000, 10, '-');
			Assert::IsTrue(res == (float)9990);
		}
		TEST_METHOD(mult10to10)
		{
			float res = theProcess->AllFuncSwitch(10, 10, '*');
			Assert::IsTrue(res == (float)100);
		}
		TEST_METHOD(div10to10)
		{
			float res = theProcess->AllFuncSwitch(10, 10, '/');
			Assert::IsTrue(res == (float)1);
		}
		TEST_METHOD(mod10to10)
		{
			float res = theProcess->AllFuncSwitch(10, 10, '%');
			Assert::IsTrue(res == (float)0);
		}
		TEST_METHOD(mod69to70)
		{
			float res = theProcess->AllFuncSwitch(69, 70, '%');
			Assert::IsTrue(res == (float)69);
		}
	};
}
