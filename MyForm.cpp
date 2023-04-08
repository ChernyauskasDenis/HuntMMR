#include "MyForm.h"
#include <Windows.h>
#include <tchar.h>
#include <iostream> 
#include <iomanip> 
#include <cstdlib>
#include <math.h> 
#include <locale.h> 
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include <fstream>
#include <direct.h>
#include <stdio.h> 

#using<system.dll>  

using namespace System;
using namespace System::Windows::Forms;
using namespace System::IO;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Data;
using namespace System::Drawing;


[STAThreadAttribute]


int main(array<String^>^) {



	setlocale(LC_CTYPE, "Russian");
	SetConsoleCP(1251);

	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	HUNTMMR2::MyForm form;
	Application::Run(% form);


}