#include "Main.h"
#include "iostream"

using namespace System;
using namespace System::Runtime::InteropServices;
using namespace System::Windows::Forms;

[STAThread]
int main()
{
	Drawing::Text::PrivateFontCollection pfc;

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	pfc.AddFontFile(L"font.ttf");
	AztralLauncher::Main ^main = gcnew AztralLauncher::Main(pfc.Families[0]);

	Application::Run(main);
}