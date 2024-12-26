#include "pch.h"
#include "Kalkulator_Lengkap_1.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]

void main()
{
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	KalkulatorLengkap::Main frm;
	Application::Run(% frm);
}
