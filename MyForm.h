#pragma once
#include <fstream>//библиотека для потока чтения из файла.
#include <string>//библиотека для использования строк.
#include "MyForm1.h"//подключение .h файла окна регистрации.
#include "WinLSD.h"//подключение .h файла окна сортировки.
#include <msclr\marshal_cppstd.h>//библиотека предназначена для маршаллинга, т.е. преобразования типов.
namespace Kursovaya {//открытие пространства имён курсовой работы.
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;//пространство имён для streamwriter'a и streamreader'a.
	
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
			//TODO: добавьте код конструктора.
			//
		}
	public:
		~MyForm()//деструктор для класса MyForm.
		{
			if (components)
			{
				delete components;
			}
		}
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1; 
	private: System::Windows::Forms::ToolStripMenuItem^ менюToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ цветToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ светлыйToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ тёмныйToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ серыйToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ языкToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ английскийToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ русскийToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ белорусскийToolStripMenuItem;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary> 
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->менюToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->цветToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->светлыйToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->тёмныйToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->серыйToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->языкToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->английскийToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->русскийToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->белорусскийToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(0, 55);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(323, 36);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Авторизуйтесь";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(20, 154);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(285, 22);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(20, 251);
			this->textBox2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(285, 22);
			this->textBox2->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(16, 134);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(51, 17);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Логин:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(16, 231);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(61, 17);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Пароль:";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(67, 354);
			this->button2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(188, 39);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Вход";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(16, 458);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(147, 17);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Нет аккаунта\? Тогда";
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(165, 458);
			this->linkLabel1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(136, 17);
			this->linkLabel1->TabIndex = 8;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Зарегистрируйтесь";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::linkLabel1_LinkClicked);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->менюToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(320, 28);
			this->menuStrip1->TabIndex = 9;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// менюToolStripMenuItem
			// 
			this->менюToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->цветToolStripMenuItem,
					this->языкToolStripMenuItem
			});
			this->менюToolStripMenuItem->Name = L"менюToolStripMenuItem";
			this->менюToolStripMenuItem->Size = System::Drawing::Size(65, 24);
			this->менюToolStripMenuItem->Text = L"Меню";
			this->менюToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::менюToolStripMenuItem_Click);
			// 
			// цветToolStripMenuItem
			// 
			this->цветToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->светлыйToolStripMenuItem,
					this->тёмныйToolStripMenuItem, this->серыйToolStripMenuItem
			});
			this->цветToolStripMenuItem->Name = L"цветToolStripMenuItem";
			this->цветToolStripMenuItem->Size = System::Drawing::Size(126, 26);
			this->цветToolStripMenuItem->Text = L"Цвет";
			// 
			// светлыйToolStripMenuItem
			// 
			this->светлыйToolStripMenuItem->Name = L"светлыйToolStripMenuItem";
			this->светлыйToolStripMenuItem->Size = System::Drawing::Size(151, 26);
			this->светлыйToolStripMenuItem->Text = L"Светлый";
			this->светлыйToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::светлыйToolStripMenuItem_Click);
			// 
			// тёмныйToolStripMenuItem
			// 
			this->тёмныйToolStripMenuItem->Name = L"тёмныйToolStripMenuItem";
			this->тёмныйToolStripMenuItem->Size = System::Drawing::Size(151, 26);
			this->тёмныйToolStripMenuItem->Text = L"Тёмный";
			this->тёмныйToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::тёмныйToolStripMenuItem_Click);
			// 
			// серыйToolStripMenuItem
			// 
			this->серыйToolStripMenuItem->Name = L"серыйToolStripMenuItem";
			this->серыйToolStripMenuItem->Size = System::Drawing::Size(151, 26);
			this->серыйToolStripMenuItem->Text = L"Серый";
			this->серыйToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::сераяToolStripMenuItem_Click);
			// 
			// языкToolStripMenuItem
			// 
			this->языкToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->английскийToolStripMenuItem,
					this->русскийToolStripMenuItem, this->белорусскийToolStripMenuItem
			});
			this->языкToolStripMenuItem->Name = L"языкToolStripMenuItem";
			this->языкToolStripMenuItem->Size = System::Drawing::Size(126, 26);
			this->языкToolStripMenuItem->Text = L"Язык";
			// 
			// английскийToolStripMenuItem
			// 
			this->английскийToolStripMenuItem->Name = L"английскийToolStripMenuItem";
			this->английскийToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->английскийToolStripMenuItem->Text = L"Английский";
			this->английскийToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::английскийToolStripMenuItem_Click);
			// 
			// русскийToolStripMenuItem
			// 
			this->русскийToolStripMenuItem->Name = L"русскийToolStripMenuItem";
			this->русскийToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->русскийToolStripMenuItem->Text = L"Русский";
			this->русскийToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::русскийToolStripMenuItem_Click);
			// 
			// белорусскийToolStripMenuItem
			// 
			this->белорусскийToolStripMenuItem->Name = L"белорусскийToolStripMenuItem";
			this->белорусскийToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->белорусскийToolStripMenuItem->Text = L"Белорусский";
			this->белорусскийToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::белорусскийToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->ClientSize = System::Drawing::Size(320, 496);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->MaximumSize = System::Drawing::Size(338, 543);
			this->MinimumSize = System::Drawing::Size(338, 543);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Sign in";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private:
	char color;
	char lang;
private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	MyForm1^ f = gcnew MyForm1(this->textBox1->Text, this->textBox2->Text, this->lang, this->color);
	f->Show();
	this->WindowState = FormWindowState(true);
	f->Show();
	this->WindowState = FormWindowState(true);

}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	vector<std::string> login;
	vector<std::string> passwords;

	ifstream l("login.txt");
	ifstream p("password.txt");
	string login_temp;
	string passwords_temp;
	bool check = false;

	while (!l.eof())
	{
		l >> login_temp;
		login.push_back(login_temp);
	}
	while (!p.eof())
	{
		p >> passwords_temp;
		passwords.push_back(passwords_temp);
	}

	System::String^ managedString = Convert::ToString(this->textBox1->Text);
	msclr::interop::marshal_context context;
	std::string textbox_1 = context.marshal_as<std::string>(managedString);


	System::String^ managedString_2 = Convert::ToString(this->textBox2->Text);
	msclr::interop::marshal_context context_2;
	std::string textbox_2 = context.marshal_as<std::string>(managedString_2);


	for (size_t i = 0; i < login.size(); i++)
	{
		if (textbox_1 == login[i] && textbox_2 == passwords[i])
		{
			check = true;
		}

	}

	if (check)
	{
		
		WinLSD^ f = gcnew WinLSD(this->lang, this->color);
		f->Show();
		this->WindowState = FormWindowState(true);
		//MyForm::Close();
		MyForm::Hide();
	}
	else
	{
		MessageBox::Show("Авторизация не удалась.\nAutorazition failed.\nАўтарызацыя не прайшла.");
	}
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void светлыйToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->BackColor = System::Drawing::Color::LightGray;
	color = 'l';
}
private: System::Void тёмныйToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->BackColor = System::Drawing::Color::DarkGray;
	color = 'd';
}
private: System::Void сераяToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->BackColor = System::Drawing::Color::Gray;
	color = 'g';

}
private: System::Void английскийToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->английскийToolStripMenuItem->Text = "English";
	this->русскийToolStripMenuItem->Text = "Russian";
	this->белорусскийToolStripMenuItem->Text = "Belarussian";
	this->языкToolStripMenuItem->Text = "Language";
	this->менюToolStripMenuItem->Text = "Menu";
	this->цветToolStripMenuItem->Text = "Color";
	this->серыйToolStripMenuItem->Text = "Gray";
	this->светлыйToolStripMenuItem->Text = "Light";
	this->тёмныйToolStripMenuItem->Text = "Dark";
	this->label1->Text = "Sign in";
	this->label2->Text = "Login:";
	this->label3->Text = "Password:";
	this->label4->Text = "Don't have an account?";
	this->linkLabel1->Text = "Registration";
	this->button2->Text = "Sign in";
	this->lang = 'e';
	

}
private: System::Void русскийToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->английскийToolStripMenuItem->Text = "Английский";
	this->русскийToolStripMenuItem->Text = "Русский";
	this->белорусскийToolStripMenuItem->Text = "Белорусский";
	this->языкToolStripMenuItem->Text = "Язык";
	this->менюToolStripMenuItem->Text = "Меню";
	this->цветToolStripMenuItem->Text = "Цвет";
	this->серыйToolStripMenuItem->Text = "Серый";
	this->светлыйToolStripMenuItem->Text = "Светлый";
	this->тёмныйToolStripMenuItem->Text = "Темный";
	this->label1->Text = "Авторизуйтесь";
	this->label2->Text = "Логин:";
	this->label3->Text = "Пароль:";
	this->label4->Text = "Нет аккаунта?";
	this->linkLabel1->Text = "Регистрация";
	this->button2->Text = "Вход";
	this->lang = 'r';
	
}
private: System::Void белорусскийToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->английскийToolStripMenuItem->Text = "Англійскі";
	this->белорусскийToolStripMenuItem->Text = "Беларускі";
	this->русскийToolStripMenuItem->Text = "Рускі";
	this->менюToolStripMenuItem->Text = "Мяню";
	this->цветToolStripMenuItem->Text = "Колар";
	this->серыйToolStripMenuItem->Text = "Шеры";
	this->светлыйToolStripMenuItem->Text = "Светлы";
	this->тёмныйToolStripMenuItem->Text = "Цемны";
	this->языкToolStripMenuItem->Text = "Мова";
	this->label1->Text = "Аўтарызацыя";
	this->label2->Text = "Лагiн:";
	this->label3->Text = "Пароль:";
	this->label4->Text = "Не маеце аккаўнт?";
	this->linkLabel1->Text = "Зарэгіструйцеся";
	this->button2->Text = "Уваход";
	this->lang = 'b';
}
private: System::Void MyForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
	Application::Exit();
}
private: System::Void менюToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
