#include "Main.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main()
{
	Application::EnableVisualStyles();
	AztralLauncher::Main main;
	Application::Run(%main);
}