#pragma once
#include "MyForm.h"
#include <Windows.h>
#include <tchar.h>
#include <stdio.h>
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
#include <string>
#include <codecvt>


namespace HUNTMMR2 {

	using namespace System;
	using namespace System::Windows::Forms;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Button^ button2;



	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ListBox^ listBox2;




	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F));
			this->button2->Location = System::Drawing::Point(11, 64);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(208, 35);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Путь к XML";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button1_Click2);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F));
			this->label1->Location = System::Drawing::Point(19, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(894, 17);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Укажите путь к файлу с данными в Вашей библиотеке Steam: \"...\\steamapps\\common\\Hu"
				L"nt Showdown\\user\\profiles\\default\\attributes.xml\"";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(12, 146);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(208, 368);
			this->listBox1->TabIndex = 7;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox1_SelectedIndexChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F));
			this->label3->Location = System::Drawing::Point(266, 126);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(40, 17);
			this->label3->TabIndex = 8;
			this->label3->Text = L"MMR";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F));
			this->label4->Location = System::Drawing::Point(45, 126);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(174, 17);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Никнейм Steam аккаунта";
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(226, 146);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(119, 368);
			this->listBox2->TabIndex = 10;
			this->listBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox2_SelectedIndexChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(925, 553);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	
	
		   
	private: System::Void button1_Click2(System::Object^ sender, System::EventArgs^ e)
	{
		setlocale(LC_CTYPE, "Russian");
		SetConsoleCP(1251);


		this->listBox1->Items->Clear(); //очистка

		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
		openFileDialog1->Filter = "XML Files (*.xml)|*.xml|All Files (*.*)|*.*";
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			String^ fileName = openFileDialog1->FileName;
			try
			{
				StreamReader^ din = File::OpenText(fileName);
				// создаем список для хранения найденных значений
				List<String^>^ valuesList1 = gcnew List<String^>();
				// проходим по всем командам и игрокам
				for (int i = 0; i <= 11; i++) {
					for (int j = 0; j <= 2; j++) {
						String^ searchStr = String::Format("<Attr name=\"MissionBagPlayer_{0}_{1}_blood_line_name\" value=\"", i, j);
						String^ str;
						int lineNum = 0;
						while ((str = din->ReadLine()) != nullptr)
						{
							lineNum++;
							if (str->Contains(searchStr)) {
								int valueIndex = str->IndexOf("value=\"");
								if (valueIndex != -1) {
									int valueEndIndex = str->IndexOf("\"", valueIndex + 7);
									String^ value = str->Substring(valueIndex + 7, valueEndIndex - valueIndex - 7);

									// добавляем значение в список
									valuesList1->Add(value);
								}
							}
						}
						din->BaseStream->Seek(0, SeekOrigin::Begin); // переводим курсор обратно в начало файла
					}
				}
				// добавляем все значения из списка в ListBox1

				listBox1->Items->AddRange(valuesList1->ToArray());

				this->listBox2->Items->Clear(); //очистка
				List<String^>^ valuesList2 = gcnew List<String^>();
				din->BaseStream->Seek(0, SeekOrigin::Begin); // переводим курсор обратно в начало файла
				// проходим по всем командам и игрокам
				for (int i = 0; i <= 11; i++) {
					for (int j = 0; j <= 2; j++) {
						String^ searchStr = String::Format("<Attr name=\"MissionBagPlayer_{0}_{1}_mmr\" value=\"", i, j);
						String^ str2;
						int lineNum = 0;
						while ((str2 = din->ReadLine()) != nullptr)
						{
							lineNum++;
							if (str2->Contains(searchStr)) {
								int valueIndex = str2->IndexOf("value=\"");
								if (valueIndex != -1) {
									int valueEndIndex = str2->IndexOf("\"", valueIndex + 7);
									String^ value = str2->Substring(valueIndex + 7, valueEndIndex - valueIndex - 7);

									// добавляем значение в список
									valuesList2->Add(value);
								}
							}
						}
						din->BaseStream->Seek(0, SeekOrigin::Begin); // переводим курсор обратно в начало файла
					}
				}
				// добавляем все значения из списка в ListBox2
				listBox2->Items->AddRange(valuesList2->ToArray());

				din->Close();
				Console::WriteLine("done");
			}
			catch (Exception^ e)
			{
				if (dynamic_cast<FileNotFoundException^>(e))
					Console::WriteLine("file '{0}' not found", fileName);
				else
					Console::WriteLine("problem reading file '{0}'", fileName);
			}
		}






	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void listBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
