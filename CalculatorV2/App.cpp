#include "App.h"
wxIMPLEMENT_APP(App);

// Con
App::App()
{

}

// Decon
App::~App()
{

}

// Display Function
bool App::OnInit()
{
	window = new Calc();
	window->Show();
	return true;
}

