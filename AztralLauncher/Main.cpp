#pragma once
#include "Globals.h"
#include "iostream"
#include "Main.h"

using namespace System;
using namespace System::Runtime::InteropServices;
using namespace System::Windows::Forms;

using namespace AztralLauncher;


[STAThread]
int main()
{
	Drawing::Text::PrivateFontCollection pfc;

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	pfc.AddFontFile(L"font.ttf");
	Globals::font = pfc.Families[0];

	Application::Run(gcnew Main());
}
