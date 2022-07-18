#include "Calc.h"
#include "ButtonFactory.h"
#include "CalculatorProcessor.h"

Calc::Calc() :wxFrame(nullptr, wxID_ANY, "THE CALC... sorry the name isn't loading :/", wxPoint(0, 200), wxSize(400, 550))
{	
	// Text Box
	textBox = new wxTextCtrl(this, 1000, "", wxPoint(35, 10), wxSize(300, 300));

	// Button Formatting
	func = new wxButton * [20];
	num0 = ButtonFactory::buttonCreation1(this);
	num1 = ButtonFactory::buttonCreation2(this);
	num2 = ButtonFactory::buttonCreation3(this);
	num3 = ButtonFactory::buttonCreation4(this);
	num4 = ButtonFactory::buttonCreation5(this);
	num5 = ButtonFactory::buttonCreation6(this);
	num6 = ButtonFactory::buttonCreation7(this);
	num7 = ButtonFactory::buttonCreation8(this);
	num8 = ButtonFactory::buttonCreation9(this);
	num9 = ButtonFactory::buttonCreation10(this);
	clear = ButtonFactory::buttonCreation11(this);
	plus = ButtonFactory::buttonCreation12(this);
	minus = ButtonFactory::buttonCreation13(this);
	multiply = ButtonFactory::buttonCreation14(this);
	divide = ButtonFactory::buttonCreation15(this);
	equal = ButtonFactory::buttonCreation16(this);
	binary = ButtonFactory::buttonCreation17(this);
	hexidecimal = ButtonFactory::buttonCreation18(this);
	mod = ButtonFactory::buttonCreation19(this);
	decimal = ButtonFactory::buttonCreation20(this);


	// Function for Buttons
	func[0] = num0;
	func[1] = num1;
	func[2] = num2;
	func[3] = num3;
	func[4] = num4;
	func[5] = num5;
	func[6] = num6;
	func[7] = num7;
	func[8] = num8;
	func[9] = num9;
	func[10] = clear;
	func[11] = plus;
	func[12] = minus;
	func[13] = multiply;
	func[14] = divide;
	func[15] = equal;
	func[16] = binary;
	func[17] = hexidecimal;
	func[18] = mod;
	func[19] = decimal;
	for (size_t i = 0; i < 20; i++)
	{
		func[i]->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &Calc::ButtonClicked, this);
	}
}

void Calc::IsSolved()
{
	if (solve == true)
	{
		n1 = 0;
		textBox->Clear();
	}
	solve = false;
}

void Calc::ButtonClicked(wxCommandEvent& _event)
{
	CalculatorProcessor* process = CalculatorProcessor::getInstance();

	int sc = _event.GetId();
	switch(sc)
	{
	case 1001:
		IsSolved();
		textBox->AppendText("0");
		if (operate == ' ')
		{
			n1 = (n1 * 10) + 0;
		}
		else
		{
			n2 = (n2 * 10) + 0;
		}
		break;
	case 1002:
		IsSolved();
		textBox->AppendText("1");
		if (operate == ' ')
		{
			n1 = (n1 * 10) + 1;
		}
		else
		{
			n2 = (n2 * 10) + 1;
		}
		break;
	case 1003:
		IsSolved();
		textBox->AppendText("2");
		if (operate == ' ')
		{
			n1 = (n1 * 10) + 2;
		}
		else
		{
			n2 = (n2 * 10) + 2;
		}
		break;
	case 1004:
		IsSolved();
		textBox->AppendText("3");
		{
			if (operate == ' ')
			{
				n1 = (n1 * 10) + 3;
			}
			else
			{
				n2 = (n2 * 10) + 3;
			}
		}
		break;
	case 1005:
		IsSolved();
		textBox->AppendText("4");
		if (operate == ' ')
		{
			n1 = (n1 * 10) + 4;
		}
		else
		{
			n2 = (n2 * 10) + 4;
		}
		break;
	case 1006:
		IsSolved();
		textBox->AppendText("5");
		if (operate == ' ')
		{
			n1 = (n1 * 10) + 5;
		}
		else
		{
			n2 = (n2 * 10) + 5;
		}
		break;
	case 1007:
		IsSolved();
		textBox->AppendText("6");
		if (operate == ' ')
		{
			n1 = (n1 * 10) + 6;
		}
		else
		{
			n2 = (n2 * 10) + 6;
		}
		break;
	case 1008:
		IsSolved();
		textBox->AppendText("7");
		if (operate == ' ')
		{
			n1 = (n1 * 10) + 7;
		}
		else
		{
			n2 = (n2 * 10) + 7;
		}
		break;
	case 1009:
		IsSolved();
		textBox->AppendText("8");
		if (operate == ' ')
		{
			n1 = (n1 * 10) + 8;
		}
		else
		{
			n2 = (n2 * 10) + 8;
		}
		break;
	case 1010:
		IsSolved();
		textBox->AppendText("9");
		if (operate == ' ')
		{
			n1 = (n1 * 10) + 9;
		}
		else
		{
			n2 = (n2 * 10) + 9;
		}
		break;
	case 1011:
		solve = false;
		textBox->Clear();
		operate = ' ';
		n1 = 0;
		n2 = 0;
		break;
	case 1012:
		solve = false;
		textBox->AppendText("+");
		operate = '+';
		break;
	case 1013:
		solve = false;
		textBox->AppendText("-");
		operate = '-';
		break;
	case 1014:
		solve = false;
		textBox->AppendText("*");
		operate = '*';
		break;
	case 1015:
		solve = false;
		textBox->AppendText("/");
		operate = '/';
		break;
	case 1016:
		textBox->AppendText("=");
		textBox->Clear();
		result = process->AllFuncSwitch(n1, n2, operate);
		textBox->AppendText(std::to_string(result));
		operate = ' ';
		n1 = result;
		n2 = 0;
		solve = true;
		break;
	case 1017:
		solve = false;
		textBox->AppendText("Bin");
		textBox->Clear();
		result2 = process->toBinaryString(result);
		textBox->AppendText(result2);
		break;
	case 1018:
		solve = false;
		textBox->AppendText("Hex");
		textBox->Clear();
		result2 = process->toHexaDecimalString(result);
		textBox->AppendText(result2);
		break;
	case 1019:
		solve = false;
		textBox->AppendText("Mod");
		operate = '%';
		break;
	case 1020:
		solve = false;
		textBox->Clear();
		textBox->AppendText(std::to_string(n1));
		break;
	default:
		textBox->Clear();
		break;
	}
}