#include "ButtonFactory.h"
#include "wx/wx.h"
	 wxButton* ButtonFactory::buttonCreation1(wxWindow* window)
	{
		return new wxButton(window, 1001, "0", wxPoint(125, 450), wxSize(50, 50));
	}
	 wxButton* ButtonFactory::buttonCreation2(wxWindow* window)
	{
		return new wxButton(window, 1002, "1", wxPoint(75, 400), wxSize(50, 50));
	}
	 wxButton* ButtonFactory::buttonCreation3(wxWindow* window)
	{
		return new wxButton(window, 1003, "2", wxPoint(125, 400), wxSize(50, 50));
	}
	 wxButton* ButtonFactory::buttonCreation4(wxWindow* window)
	{
		return new wxButton(window, 1004, "3", wxPoint(175, 400), wxSize(50, 50));
	}
	 wxButton* ButtonFactory::buttonCreation5(wxWindow* window)
	{
		return new wxButton(window, 1005, "4", wxPoint(75, 350), wxSize(50, 50));
	}
	 wxButton* ButtonFactory::buttonCreation6(wxWindow* window)
	{
		return new wxButton(window, 1006, "5", wxPoint(125, 350), wxSize(50, 50));
	}
	 wxButton* ButtonFactory::buttonCreation7(wxWindow* window)
	{
		return new wxButton(window, 1007, "6", wxPoint(175, 350), wxSize(50, 50));
	}
	 wxButton* ButtonFactory::buttonCreation8(wxWindow* window)
	{
		return new wxButton(window, 1008, "7", wxPoint(75, 300), wxSize(50, 50));
	}
	 wxButton* ButtonFactory::buttonCreation9(wxWindow* window)
	{
		return new wxButton(window, 1009, "8", wxPoint(125, 300), wxSize(50, 50));
	}
	 wxButton* ButtonFactory::buttonCreation10(wxWindow* window)
	{
		return new wxButton(window, 1010, "9", wxPoint(175, 300), wxSize(50, 50));
	}
	 wxButton* ButtonFactory::buttonCreation11(wxWindow* window)
	{
		return new wxButton(window, 1011, "Clr", wxPoint(75, 450), wxSize(50, 50));
	}
	 wxButton* ButtonFactory::buttonCreation12(wxWindow* window)
	{
		return new wxButton(window, 1012, "+", wxPoint(225, 300), wxSize(50, 50));
	}
	 wxButton* ButtonFactory::buttonCreation13(wxWindow* window)
	{
		return new wxButton(window, 1013, "-", wxPoint(225, 350), wxSize(50, 50));
	}
	 wxButton* ButtonFactory::buttonCreation14(wxWindow* window)
	{
		return new wxButton(window, 1014, "*", wxPoint(225, 400), wxSize(50, 50));
	}
	 wxButton* ButtonFactory::buttonCreation15(wxWindow* window)
	{
		return new wxButton(window, 1015, "/", wxPoint(225, 450), wxSize(50, 50));
	}
	 wxButton* ButtonFactory::buttonCreation16(wxWindow* window)
	{
		return new wxButton(window, 1016, "=", wxPoint(175, 450), wxSize(50, 50));
	}
	 wxButton* ButtonFactory::buttonCreation17(wxWindow* window)
	{
		return new wxButton(window, 1017, "Bin", wxPoint(25, 300), wxSize(50, 50));
	}
	 wxButton* ButtonFactory::buttonCreation18(wxWindow* window)
	{
		return new wxButton(window, 1018, "Hex", wxPoint(25, 350), wxSize(50, 50));
	}
	 wxButton* ButtonFactory::buttonCreation19(wxWindow* window)
	{
		return new wxButton(window, 1019, "Mod", wxPoint(25, 400), wxSize(50, 50));
	}
	 wxButton* ButtonFactory::buttonCreation20(wxWindow* window)
	{
		return new wxButton(window, 1020, "Dec", wxPoint(25, 450), wxSize(50, 50));
	}