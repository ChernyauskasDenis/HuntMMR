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
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F));
			this->button2->Location = System::Drawing::Point(15, 247);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(214, 46);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Показать результат";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click2);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			this->label1->Location = System::Drawing::Point(12, 89);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(562, 36);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Укажите путь к файлу с данными в Вашей библиотеке\r\n Steam: \"...\\steamapps\\common\\"
				L"Hunt Showdown\\user\\profiles\\default\\attributes.xml\"";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(309, 159);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(214, 368);
			this->listBox1->TabIndex = 7;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox1_SelectedIndexChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F));
			this->label3->Location = System::Drawing::Point(550, 139);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(40, 17);
			this->label3->TabIndex = 8;
			this->label3->Text = L"MMR";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F));
			this->label4->Location = System::Drawing::Point(335, 139);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(174, 17);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Никнейм Steam аккаунта";
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(529, 159);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(80, 368);
			this->listBox2->TabIndex = 10;
			this->listBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox2_SelectedIndexChanged);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F));
			this->button1->Location = System::Drawing::Point(15, 335);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(214, 46);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Отчиска XML файла от игроков";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click1);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F));
			this->label2->Location = System::Drawing::Point(12, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(576, 68);
			this->label2->TabIndex = 12;
			this->label2->Text = resources->GetString(L"label2.Text");
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			this->label5->Location = System::Drawing::Point(12, 296);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(266, 36);
			this->label5->TabIndex = 13;
			this->label5->Text = L"— по нажатию покажет информацию,\r\n  без каких либо изменений";
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F));
			this->button3->Location = System::Drawing::Point(15, 159);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(214, 46);
			this->button3->TabIndex = 14;
			this->button3->Text = L"Показать и отчистить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			this->label6->Location = System::Drawing::Point(12, 384);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(231, 36);
			this->label6->TabIndex = 15;
			this->label6->Text = L"— по нажатию,\r\n удалит данные игроков из XML";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			this->label7->Location = System::Drawing::Point(12, 208);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(266, 36);
			this->label7->TabIndex = 16;
			this->label7->Text = L"— по нажатию покажет информацию,\r\n  и автоматически отчистит XML";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(15, 440);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(185, 65);
			this->label8->TabIndex = 17;
			this->label8->Text = L"P.S. Из-за отчиски файла,\r\n в главном меню будет предлагать\r\n залогинится учёткой"
				L" крайтек,\r\n для получения 5000 долларов.\r\n Это баг, деньги не дадут";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(623, 530);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
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
	public: System::Void button2_Click2(System::Object^ sender, System::EventArgs^ e)  // заполнение листбокс элементами
	{
		setlocale(LC_CTYPE, "Russian");
		SetConsoleCP(1251);
		this->listBox1->Items->Clear(); //очистка от прошлых элементов 
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
		openFileDialog1->Filter = "XML Files (*.xml)|*.xml|All Files (*.*)|*.*";
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			String^ fileName = openFileDialog1->FileName;
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
				//очистка
				this->listBox2->Items->Clear();
				List<String^>^ valuesList2 = gcnew List<String^>();
				// переводим курсор обратно в начало файла
				din->BaseStream->Seek(0, SeekOrigin::Begin);
				// проходим по всем командам и игрокам
				for (int i = 0; i <= 11; i++)
				{
					for (int j = 0; j <= 2; j++)
					{
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
			}
		}
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void listBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	public: System::Void button1_Click1(System::Object^ sender, System::EventArgs^ e)  //удаление элементов
	{
		setlocale(LC_CTYPE, "Russian");
		SetConsoleCP(1251);
		this->listBox1->Items->Clear(); //очистка
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
		openFileDialog1->Filter = "XML Files (*.xml)|*.xml|All Files (*.*)|*.*";
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			String^ fileName = openFileDialog1->FileName;
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
									// закрываем поток чтения
									din->Close(); 
									//удаляем строку из файла
									FileStream^ fs = gcnew FileStream(fileName, FileMode::Open, FileAccess::ReadWrite);
									StreamReader^ sr = gcnew StreamReader(fs);
									String^ contents = sr->ReadToEnd();
									// закрываем поток чтения
									fs->Close(); 
									sr->Close();
									// создаем новый поток записи
									fs = gcnew FileStream(fileName, FileMode::Create, FileAccess::Write);
									StreamWriter^ sw = gcnew StreamWriter(fs);
									sw->Write(contents->Replace(str, ""));
									sw->Close();
									fs->Close();
									// открываем поток чтения снова
									din = File::OpenText(fileName); 
								}
							}
						}
						din->BaseStream->Seek(0, SeekOrigin::Begin); // переводим курсор обратно в начало файла
					}
				}
				// добавляем все значения из списка в ListBox1
				listBox1->Items->AddRange(valuesList1->ToArray());
				//очистка
				this->listBox2->Items->Clear();
				List<String^>^ valuesList2 = gcnew List<String^>();
				// переводим курсор обратно в начало файла
				din->BaseStream->Seek(0, SeekOrigin::Begin);
				// проходим по всем командам и игрокам
				for (int i = 0; i <= 11; i++)
				{
					for (int j = 0; j <= 2; j++)
					{
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
									// закрываем поток чтения
									din->Close(); 
									//удаляем строку из файла
									FileStream^ fs = gcnew FileStream(fileName, FileMode::Open, FileAccess::ReadWrite);
									StreamReader^ sr = gcnew StreamReader(fs);
									String^ contents = sr->ReadToEnd();
									fs->Close(); // закрываем поток чтения
									sr->Close();
									// создаем новый поток записи
									fs = gcnew FileStream(fileName, FileMode::Create, FileAccess::Write); 
									StreamWriter^ sw = gcnew StreamWriter(fs);
									sw->Write(contents->Replace(str2, ""));
									sw->Close();
									fs->Close();
									din = File::OpenText(fileName); // открываем поток чтения снова
								}
							}
						}
						din->BaseStream->Seek(0, SeekOrigin::Begin); // переводим курсор обратно в начало файла
					}
				}
				din->Close();
			}
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		setlocale(LC_CTYPE, "Russian");
		SetConsoleCP(1251);
		this->listBox1->Items->Clear(); //очистка от прошлых элементов 
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
		openFileDialog1->Filter = "XML Files (*.xml)|*.xml|All Files (*.*)|*.*";
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			String^ fileName = openFileDialog1->FileName;
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
									// закрываем поток чтения
									din->Close();
									//удаляем строку из файла
									FileStream^ fs = gcnew FileStream(fileName, FileMode::Open, FileAccess::ReadWrite);
									StreamReader^ sr = gcnew StreamReader(fs);
									String^ contents = sr->ReadToEnd();
									// закрываем поток чтения
									fs->Close();
									sr->Close();
									// создаем новый поток записи
									fs = gcnew FileStream(fileName, FileMode::Create, FileAccess::Write);
									StreamWriter^ sw = gcnew StreamWriter(fs);
									sw->Write(contents->Replace(str, ""));
									sw->Close();
									fs->Close();
									// открываем поток чтения снова
									din = File::OpenText(fileName);
								}
							}
						}
						din->BaseStream->Seek(0, SeekOrigin::Begin); // переводим курсор обратно в начало файла
					}
				}
				// добавляем все значения из списка в ListBox1
				listBox1->Items->AddRange(valuesList1->ToArray());
				//очистка
				this->listBox2->Items->Clear();
				List<String^>^ valuesList2 = gcnew List<String^>();
				// переводим курсор обратно в начало файла
				din->BaseStream->Seek(0, SeekOrigin::Begin);
				// проходим по всем командам и игрокам
				for (int i = 0; i <= 11; i++)
				{
					for (int j = 0; j <= 2; j++)
					{
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
									// закрываем поток чтения
									din->Close();
									//удаляем строку из файла
									FileStream^ fs = gcnew FileStream(fileName, FileMode::Open, FileAccess::ReadWrite);
									StreamReader^ sr = gcnew StreamReader(fs);
									String^ contents = sr->ReadToEnd();
									// закрываем поток чтения
									fs->Close();
									sr->Close();
									// создаем новый поток записи
									fs = gcnew FileStream(fileName, FileMode::Create, FileAccess::Write);
									StreamWriter^ sw = gcnew StreamWriter(fs);
									sw->Write(contents->Replace(str2, ""));
									sw->Close();
									fs->Close();
									// открываем поток чтения снова
									din = File::OpenText(fileName);
								}
							}
						}
						din->BaseStream->Seek(0, SeekOrigin::Begin); // переводим курсор обратно в начало файла
					}
				}
				// добавляем все значения из списка в ListBox2
				listBox2->Items->AddRange(valuesList2->ToArray());
				din->Close();
			}
		}
	}
};
}
