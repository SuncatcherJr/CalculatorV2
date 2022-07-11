#pragma once
#include "Calc.h"
#include "wx/wx.h"

class App : public wxApp
{
public:
	// Con
	App();

	// Decon
	~App();

private:
	// Window for App
	Calc* window = nullptr;

public:
	virtual bool OnInit();
};

