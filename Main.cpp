#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<System::String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    lab3::MyForm form; // Убедитесь, что здесь указано ваше пространство имен (lab3)
    Application::Run(% form);
    return 0;
}