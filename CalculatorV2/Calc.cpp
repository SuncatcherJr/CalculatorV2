#include "Calc.h"

Calc::Calc() :wxFrame(nullptr, wxID_ANY, "THE CALC... sorry the name isnt loading :/", wxPoint(0, 200), wxSize(400, 550))
{	
	// Text Box
	textBox = new wxTextCtrl(this, 1000, "", wxPoint(35, 10), wxSize(300, 300));

	// Button Formatting
	func = new wxButton * [20];
	num0 = new wxButton(this, 1001, "0", wxPoint(155, 460), wxSize(50, 50));
	num1 = new wxButton(this, 1002, "1", wxPoint(105, 410), wxSize(50, 50));
	num2 = new wxButton(this, 1003, "2", wxPoint(155, 410), wxSize(50, 50));
	num3 = new wxButton(this, 1004, "3", wxPoint(205, 410), wxSize(50, 50));
	num4 = new wxButton(this, 1005, "4", wxPoint(105, 360), wxSize(50, 50));
	num5 = new wxButton(this, 1006, "5", wxPoint(155, 360), wxSize(50, 50));
	num6 = new wxButton(this, 1007, "6", wxPoint(205, 360), wxSize(50, 50));
	num7 = new wxButton(this, 1008, "7", wxPoint(105, 310), wxSize(50, 50));
	num8 = new wxButton(this, 1009, "8", wxPoint(155, 310), wxSize(50, 50));
	num9 = new wxButton(this, 1010, "9", wxPoint(205, 310), wxSize(50, 50));
	clear = new wxButton(this, 1011, "Clr", wxPoint(105, 460), wxSize(50, 50));
	plus = new wxButton(this, 1012, "+", wxPoint(255, 310), wxSize(50, 50));
	minus = new wxButton(this, 1013, "-", wxPoint(255, 360), wxSize(50, 50));
	multiply = new wxButton(this, 1014, "*", wxPoint(255, 410), wxSize(50, 50));
	divide = new wxButton(this, 1015, "/", wxPoint(255, 460), wxSize(50, 50));
	equal = new wxButton(this, 1016, "=", wxPoint(205, 460), wxSize(50, 50));
	binary = new wxButton(this, 1017, "Bin", wxPoint(55, 310), wxSize(50, 50));
	hexidecimal = new wxButton(this, 1018, "Hex", wxPoint(55, 360), wxSize(50, 50));
	mod = new wxButton(this, 1019, "Mod", wxPoint(55, 410), wxSize(50, 50));
	decimal = new wxButton(this, 1020, "Dec", wxPoint(55, 460), wxSize(50, 50));

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

void Calc::ButtonClicked(wxCommandEvent& _event)
{
	int sc = _event.GetId();
	switch(sc)
	{

	case 1001:
		textBox->AppendText("0");
		break;
	case 1002:
		textBox->AppendText("1");
		break;
	case 1003:
		textBox->AppendText("2");
		break;
	case 1004:
		textBox->AppendText("3");
		break;
	case 1005:
		textBox->AppendText("4");
		break;
	case 1006:
		textBox->AppendText("5");
		break;
	case 1007:
		textBox->AppendText("6");
		break;
	case 1008:
		textBox->AppendText("7");
		break;
	case 1009:
		textBox->AppendText("8");
		break;
	case 1010:
		textBox->AppendText("9");
		break;
	case 1011:
		textBox->AppendText("Clr");
		break;
	case 1012:
		textBox->AppendText("+");
		break;
	case 1013:
		textBox->AppendText("-");
		break;
	case 1014:
		textBox->AppendText("*");
		break;
	case 1015: 
		textBox->AppendText("/");
		break;
	case 1016: 
		textBox->AppendText("=");
		break;
	case 1017:
		textBox->AppendText("Bin");
		break;
	case 1018:
		textBox->AppendText("Hex");
		break;
	case 1019:
		textBox->AppendText("Mod");
		break;
	case 1020:
		textBox->AppendText("Dec");
		break;
	default:
		textBox->Clear();
		break;
	}
}