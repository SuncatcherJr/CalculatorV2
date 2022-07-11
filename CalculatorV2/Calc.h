#pragma once
#include "wx/wx.h"

class Calc : public wxFrame
{
public:

public:
	// Con
	Calc();

	// Buttons
	wxButton* num0;
	wxButton* num1;
	wxButton* num2;
	wxButton* num3;
	wxButton* num4;
	wxButton* num5;
	wxButton* num6;
	wxButton* num7;
	wxButton* num8;
	wxButton* num9;
	wxButton* clear;
	wxButton* plus;
	wxButton* minus;
	wxButton* multiply;
	wxButton* divide;
	wxButton* equal;
	wxButton* binary;
	wxButton* hexidecimal;
	wxButton* mod;
	wxButton* decimal;
	wxButton** func;

	// Text Box
	wxTextCtrl* textBox;

	// Button Function
	void ButtonClicked(wxCommandEvent& _event);
};

