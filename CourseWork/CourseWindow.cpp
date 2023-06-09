#include "CourseWindow.h"


using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

int main(cli::array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	CourseWork::CourseWindow form;
	Application::Run(% form);
}

