#pragma once
#include "MyForm.h"
#include <iostream>
#include <fstream>
#include <process.h>
#include <windows.h>
#include<string>
#include <msclr\marshal_cppstd.h>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Runtime::InteropServices;

//using namespace std;
//#include "MyForm2.h"
int theta = 5;
const char* str;
HANDLE hThread;
char* chr = new char;
//HANDLE hthread;
unsigned __stdcall ClientSession(void* data) {
	// 1 == client id in use, 2== server is down, 3 == succesful, 4== client exit 
	if (theta != 5)
		return 1;
	theta = 3;
	theta = system(str);


	if (theta == 1)
	{
		MessageBox::Show("client already in use !");
		Application::Exit();
		//this->textBox1->Text = " ";
	}
	if (theta == 2)
	{
		MessageBox::Show("Server is down");
		Application::Exit();
	}

	//Sleep(10000);
	/*int ans = system(str);
	theta = ans;*/
	return 1;
}
namespace Project4 {
	//	using namespace System::Diagnostics;

		//using namespace MySql::Data::MySqlClient;

		/// <summary>
		/// Summary for MyForm
		/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
		//private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ groupBox1;
	private: System::Windows::Forms::Panel^ groupBox2;
	private: System::Windows::Forms::Panel^ groupBox3;
	private: System::Windows::Forms::Panel^ groupBox4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Label^ label6;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->groupBox4 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox3 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::DarkSlateGray;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label1->Location = System::Drawing::Point(152, 102);
			this->label1->Margin = System::Windows::Forms::Padding(0);
			this->label1->Name = L"label1";
			this->label1->Padding = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->label1->Size = System::Drawing::Size(37, 24);
			this->label1->TabIndex = 1;
			this->label1->Text = L"16";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::DarkSlateGray;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label3->Location = System::Drawing::Point(54, 65);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(203, 16);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Enter your Client ID";
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::DarkSlateGray;
			this->groupBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->groupBox1->Location = System::Drawing::Point(24, 183);
			this->groupBox1->Margin = System::Windows::Forms::Padding(0);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(340, 289);
			this->groupBox1->TabIndex = 12;
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::DarkSlateGray;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label5->Location = System::Drawing::Point(65, 86);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(203, 16);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Client Connected";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::DarkSlateGray;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->button2->Location = System::Drawing::Point(68, 175);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(204, 43);
			this->button2->TabIndex = 2;
			this->button2->Text = L"EXIT";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::DarkSlateGray;
			this->groupBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->groupBox2->Location = System::Drawing::Point(24, 182);
			this->groupBox2->Margin = System::Windows::Forms::Padding(0);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(340, 289);
			this->groupBox2->TabIndex = 12;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::DarkSlateGray;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label2->Location = System::Drawing::Point(16, 48);
			this->label2->Margin = System::Windows::Forms::Padding(0);
			this->label2->Name = L"label2";
			this->label2->Padding = System::Windows::Forms::Padding(4, 2, 4, 2);
			this->label2->Size = System::Drawing::Size(314, 24);
			this->label2->TabIndex = 5;
			this->label2->Text = L"HOW DO YOU WANT TO CONNECT\?";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::DarkSlateGray;
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->button3->Location = System::Drawing::Point(32, 115);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(283, 52);
			this->button3->TabIndex = 3;
			this->button3->Text = L"DEFAULT";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::DarkSlateGray;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->button4->Location = System::Drawing::Point(32, 191);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(283, 50);
			this->button4->TabIndex = 4;
			this->button4->Text = L"USER DEFINED";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::DarkSlateGray;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label4->Location = System::Drawing::Point(69, 72);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(172, 16);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Select wait time";
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::DarkSlateGray;
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->button5->Location = System::Drawing::Point(72, 235);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(191, 46);
			this->button5->TabIndex = 4;
			this->button5->Text = L"OK";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// groupBox4
			// 
			this->groupBox4->BackColor = System::Drawing::Color::DarkSlateGray;
			this->groupBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->groupBox4->Controls->Add(this->textBox1);
			this->groupBox4->Controls->Add(this->button1);
			this->groupBox4->Controls->Add(this->label3);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox4->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->groupBox4->Location = System::Drawing::Point(24, 183);
			this->groupBox4->Margin = System::Windows::Forms::Padding(0);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(340, 293);
			this->groupBox4->TabIndex = 12;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::InfoText;
			this->textBox1->Location = System::Drawing::Point(57, 85);
			this->textBox1->MaximumSize = System::Drawing::Size(1000, 1000);
			this->textBox1->MaxLength = 300;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(236, 23);
			this->textBox1->TabIndex = 1;
			this->textBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkSlateGray;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->button1->Location = System::Drawing::Point(73, 188);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(204, 43);
			this->button1->TabIndex = 1;
			this->button1->Text = L"CONNECT TO SERVER";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"6000", L"10000", L"15000", L"20000", L"25000",
					L"30000", L"35000", L"40000"
			});
			this->comboBox1->Location = System::Drawing::Point(72, 178);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(191, 21);
			this->comboBox1->TabIndex = 0;
			// 
			// comboBox2
			// 
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(7) { L"4", L"6", L"8", L"10", L"12", L"14", L"16" });
			this->comboBox2->Location = System::Drawing::Point(72, 91);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(191, 21);
			this->comboBox2->TabIndex = 0;
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::Color::DarkSlateGray;
			this->groupBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->Controls->Add(this->comboBox1);
			this->groupBox3->Controls->Add(this->comboBox2);
			this->groupBox3->Controls->Add(this->button5);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox3->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->groupBox3->Location = System::Drawing::Point(24, 182);
			this->groupBox3->Margin = System::Windows::Forms::Padding(0);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(340, 290);
			this->groupBox3->TabIndex = 12;
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::DarkSlateGray;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label6->Location = System::Drawing::Point(69, 159);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(172, 16);
			this->label6->TabIndex = 2;
			this->label6->Text = L"Select data delay time";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(96, 96);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(686, 518);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Location = System::Drawing::Point(200, 400);
			this->Margin = System::Windows::Forms::Padding(8);
			this->MinimumSize = System::Drawing::Size(652, 494);
			this->Name = L"MyForm";
			this->Text = L"SysMON";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			theta = 5;
			if (textBox1->Text == L"")
			{
				MessageBox::Show("Enter a Client ID");
				theta = 90;
			}
			if (theta != 90)
			{
				str = (const char*)(void*)
					Marshal::StringToHGlobalAnsi("C:/Users/kartik.khandelwal/source/repos/Client2/x64/Debug/Client2.exe " + this->textBox1->Text + " Start");


				unsigned threadID;
				hThread = (HANDLE)_beginthreadex(NULL, 0, &ClientSession, "A", 0, &threadID);
				Sleep(5000);
				if (theta == 3)
				{
					this->label1->Text = this->textBox1->Text;
					groupBox4->Hide();
					groupBox1->Show();

				}
			}
		}

		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);

		}
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		groupBox1->Hide();
		groupBox3->Hide();
		groupBox4->Hide();
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		std::ofstream myfile;

		std::string  Path_On_Off = "C:/Users/kartik.khandelwal/source/repos/Client2/Client2/";
		msclr::interop::marshal_context context;
		std::string temp = context.marshal_as<std::string>(this->textBox1->Text);

		Path_On_Off += "On_Off_" + temp + ".txt";

		myfile.open(Path_On_Off);
		myfile << "0";
		myfile.close();

		TerminateThread(hThread, 0x0);
		MessageBox::Show("Client Exited");
		Application::Exit();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			groupBox2->Hide();
			groupBox3->Show();
		}
		catch (Exception^ ex) {

			MessageBox::Show(ex->Message);
		}
	}




private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		std::ofstream myfile2;

		std::string  Path = "C:/Users/kartik.khandelwal/source/repos/Client2/Client2/Start_Data.txt";
		/*msclr::interop::marshal_context context;
		std::string temp = context.marshal_as<std::string>(this->textBox1->Text);

		Path_On_Off += "On_Off_" + temp + ".txt";*/

		myfile2.open(Path);
		myfile2 << "27015 127.0.0.1 10 6000";
		myfile2.close();

		groupBox2->Hide();
		groupBox4->Show();
	}
	catch (Exception^ ex) {

		MessageBox::Show(ex->Message);
	}
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		if (comboBox1->Text == L"" || comboBox2->Text == L"")
		{
			MessageBox::Show("Please Select the values");
		}
		else
		{
			std::ofstream myfile2;

			std::string  Path = "C:/Users/kartik.khandelwal/source/repos/Client2/Client2/Start_Data.txt";
			msclr::interop::marshal_context context;
			std::string temp1 = context.marshal_as<std::string>(this->comboBox1->Text);
			std::string temp2 = context.marshal_as<std::string>(this->comboBox2->Text);


			myfile2.open(Path);
			myfile2 << "27015 127.0.0.1 " + temp2 + " " + temp1;
			myfile2.close();
			groupBox3->Hide();
			groupBox4->Show();
		}
		
	}
	catch (Exception^ ex) {

		MessageBox::Show(ex->Message);
	}
}
};
}
