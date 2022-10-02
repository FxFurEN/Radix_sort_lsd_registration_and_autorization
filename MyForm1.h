#pragma once
#include "WinLSD.h"
namespace Kursovaya {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Ñâîäêà äëÿ MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(String^ x,String^ y, char lang, char color)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòğóêòîğà
			//
			this->textBox1->Text = x;
			this->textBox2->Text = y;
			if (lang == 'r')
			{
				this->àíãëèéñêèéToolStripMenuItem->Text = "Àíãëèéñêèé";
				this->áåëîğóññêèéToolStripMenuItem->Text = "Áåëîğóññêèé";
				this->ğóññêèéToolStripMenuItem->Text = "Ğóññêèé";
				this->ìåíşToolStripMenuItem->Text = "Ìåíş";
				this->öâåòToolStripMenuItem->Text = "Öâåò";
				this->ñåğûéToolStripMenuItem->Text = "Ñåğûé";
				this->ñâåòëûéToolStripMenuItem->Text = "Ñâåòëûé";
				this->ò¸ìíûéToolStripMenuItem->Text = "Òåìíûé";
				this->ÿçûêToolStripMenuItem->Text = "ßçûê";
				this->label1->Text = "Ğåãèñòğàöèÿ";
				this->label2->Text = "Ëîãèí:";
				this->label3->Text = "Ïàğîëü:";
				this->button1->Text = "Çàğåãèñòğèğîâàòü";
			}
			if (lang == 'e')
			{
				this->àíãëèéñêèéToolStripMenuItem->Text = "English";
				this->ğóññêèéToolStripMenuItem->Text = "Russian";
				this->áåëîğóññêèéToolStripMenuItem->Text = "Belarussian";
				this->ÿçûêToolStripMenuItem->Text = "Language";
				this->ìåíşToolStripMenuItem->Text = "Menu";
				this->öâåòToolStripMenuItem->Text = "Color";
				this->ñåğûéToolStripMenuItem->Text = "Gray";
				this->ñâåòëûéToolStripMenuItem->Text = "Light";
				this->ò¸ìíûéToolStripMenuItem->Text = "Dark";
				this->label1->Text = "Registration";
				this->label2->Text = "Login:";
				this->label3->Text = "Password:";
				this->button1->Text = "Registration";
			}
			if (lang == 'b')
			{
				this->àíãëèéñêèéToolStripMenuItem->Text = "Àíãë³éñê³";
				this->áåëîğóññêèéToolStripMenuItem->Text = "Áåëàğóñê³";
				this->ğóññêèéToolStripMenuItem->Text = "Ğóñê³";
				this->ìåíşToolStripMenuItem->Text = "Ìÿíş";
				this->öâåòToolStripMenuItem->Text = "Êîëàğ";
				this->ñåğûéToolStripMenuItem->Text = "Øåğû";
				this->ñâåòëûéToolStripMenuItem->Text = "Ñâåòëû";
				this->ò¸ìíûéToolStripMenuItem->Text = "Öåìíû";
				this->ÿçûêToolStripMenuItem->Text = "Ìîâà";
				this->label1->Text = "Ğıãiñòğàöûÿ";
				this->label2->Text = "Ëàãií:";
				this->label3->Text = "Ïàğîëü:";
				this->button1->Text = "Çàğıã³ñòğóéöåñÿ";
			}
			if (color == 'l')
			{
				this->BackColor = System::Drawing::Color::LightGray;
			}
			if (color == 'd')
			{
				this->BackColor = System::Drawing::Color::DarkGray;
			}
			if (color == 'g')
			{
				this->BackColor = System::Drawing::Color::Gray;
			}
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ìåíşToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ öâåòToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñâåòëûéToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ò¸ìíûéToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñåğûéToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ÿçûêToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ àíãëèéñêèéToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ğóññêèéToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ áåëîğóññêèéToolStripMenuItem;
	protected:

	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ìåíşToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->öâåòToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñâåòëûéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ò¸ìíûéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñåğûéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ÿçûêToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->àíãëèéñêèéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ğóññêèéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->áåëîğóññêèéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(0, 45);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(242, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ğåãèñòğàöèÿ";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(50, 288);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(141, 32);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Çàğåãèñòğèğîâàòü";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 109);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(41, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Ëîãèí:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 188);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(48, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Ïàğîëü:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(15, 125);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(215, 20);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(15, 204);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(215, 20);
			this->textBox2->TabIndex = 2;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->ìåíşToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(242, 24);
			this->menuStrip1->TabIndex = 8;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ìåíşToolStripMenuItem
			// 
			this->ìåíşToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->öâåòToolStripMenuItem,
					this->ÿçûêToolStripMenuItem
			});
			this->ìåíşToolStripMenuItem->Name = L"ìåíşToolStripMenuItem";
			this->ìåíşToolStripMenuItem->Size = System::Drawing::Size(53, 20);
			this->ìåíşToolStripMenuItem->Text = L"Ìåíş";
			// 
			// öâåòToolStripMenuItem
			// 
			this->öâåòToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->ñâåòëûéToolStripMenuItem,
					this->ò¸ìíûéToolStripMenuItem, this->ñåğûéToolStripMenuItem
			});
			this->öâåòToolStripMenuItem->Name = L"öâåòToolStripMenuItem";
			this->öâåòToolStripMenuItem->Size = System::Drawing::Size(101, 22);
			this->öâåòToolStripMenuItem->Text = L"Öâåò";
			// 
			// ñâåòëûéToolStripMenuItem
			// 
			this->ñâåòëûéToolStripMenuItem->Name = L"ñâåòëûéToolStripMenuItem";
			this->ñâåòëûéToolStripMenuItem->Size = System::Drawing::Size(122, 22);
			this->ñâåòëûéToolStripMenuItem->Text = L"Ñâåòëûé";
			this->ñâåòëûéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::ñâåòëûéToolStripMenuItem_Click);
			// 
			// ò¸ìíûéToolStripMenuItem
			// 
			this->ò¸ìíûéToolStripMenuItem->Name = L"ò¸ìíûéToolStripMenuItem";
			this->ò¸ìíûéToolStripMenuItem->Size = System::Drawing::Size(122, 22);
			this->ò¸ìíûéToolStripMenuItem->Text = L"Ò¸ìíûé";
			this->ò¸ìíûéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::ò¸ìíûéToolStripMenuItem_Click);
			// 
			// ñåğûéToolStripMenuItem
			// 
			this->ñåğûéToolStripMenuItem->Name = L"ñåğûéToolStripMenuItem";
			this->ñåğûéToolStripMenuItem->Size = System::Drawing::Size(122, 22);
			this->ñåğûéToolStripMenuItem->Text = L"Ñåğûé";
			this->ñåğûéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::ñåğûéToolStripMenuItem_Click);
			// 
			// ÿçûêToolStripMenuItem
			// 
			this->ÿçûêToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->àíãëèéñêèéToolStripMenuItem,
					this->ğóññêèéToolStripMenuItem, this->áåëîğóññêèéToolStripMenuItem
			});
			this->ÿçûêToolStripMenuItem->Name = L"ÿçûêToolStripMenuItem";
			this->ÿçûêToolStripMenuItem->Size = System::Drawing::Size(101, 22);
			this->ÿçûêToolStripMenuItem->Text = L"ßçûê";
			// 
			// àíãëèéñêèéToolStripMenuItem
			// 
			this->àíãëèéñêèéToolStripMenuItem->Name = L"àíãëèéñêèéToolStripMenuItem";
			this->àíãëèéñêèéToolStripMenuItem->Size = System::Drawing::Size(146, 22);
			this->àíãëèéñêèéToolStripMenuItem->Text = L"Àíãëèéñêèé";
			this->àíãëèéñêèéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::àíãëèéñêèéToolStripMenuItem_Click);
			// 
			// ğóññêèéToolStripMenuItem
			// 
			this->ğóññêèéToolStripMenuItem->Name = L"ğóññêèéToolStripMenuItem";
			this->ğóññêèéToolStripMenuItem->Size = System::Drawing::Size(146, 22);
			this->ğóññêèéToolStripMenuItem->Text = L"Ğóññêèé";
			this->ğóññêèéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::ğóññêèéToolStripMenuItem_Click);
			// 
			// áåëîğóññêèéToolStripMenuItem
			// 
			this->áåëîğóññêèéToolStripMenuItem->Name = L"áåëîğóññêèéToolStripMenuItem";
			this->áåëîğóññêèéToolStripMenuItem->Size = System::Drawing::Size(146, 22);
			this->áåëîğóññêèéToolStripMenuItem->Text = L"Áåëîğóññêèé";
			this->áåëîğóññêèéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::toolStripMenuItem1_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->ClientSize = System::Drawing::Size(242, 411);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MainMenuStrip = this->menuStrip1;
			this->MaximumSize = System::Drawing::Size(258, 450);
			this->MinimumSize = System::Drawing::Size(258, 450);
			this->Name = L"MyForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Registration";
			this->Deactivate += gcnew System::EventHandler(this, &MyForm1::MyForm1_Deactivate);
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &MyForm1::MyForm1_FormClosed);
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private:
			char color;
			char lang;
	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) { 
	}
	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	}
private: System::Void MyForm1_Deactivate(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void ñâåòëûéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->BackColor = System::Drawing::Color::LightGray;
	color = 'l';
}
private: System::Void ò¸ìíûéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	/*this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
		static_cast<System::Int32>(static_cast<System::Byte>(64)));*/
	this->BackColor = System::Drawing::Color::DarkGray;
	color = 'd';
}
private: System::Void ñåğûéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->BackColor = System::Drawing::Color::Gray;
	color = 'g';
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "" || textBox2->Text== "")
	{
		MessageBox::Show("Âû íå àâòîğèçîâàíû.\nYou aren't logged in.\nÂû íå à¢òàğûçàâàíû.");
	}
	else
	{
	StreamWriter^ log = gcnew StreamWriter("login.txt", true);
	log->WriteLine(textBox1->Text);
	log ->Close();
	StreamWriter^ pass = gcnew StreamWriter("password.txt", true);
	pass->WriteLine(textBox2->Text);
	pass->Close();
	MessageBox::Show("Âû àâòîğèçîâàíû.\nYou are logged in.\nÂû à¢òàğûçàâàíû.");
	WinLSD^ f = gcnew WinLSD(this->lang, this->color);
	f->Show();
	this->WindowState = FormWindowState(true);
	}

}
private: System::Void àíãëèéñêèéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->àíãëèéñêèéToolStripMenuItem->Text = "English";
	this->ğóññêèéToolStripMenuItem->Text = "Russian";
	this->áåëîğóññêèéToolStripMenuItem->Text = "Belarussian";
	this->ÿçûêToolStripMenuItem->Text = "Language";
	this->ìåíşToolStripMenuItem->Text = "Menu";
	this->öâåòToolStripMenuItem->Text = "Color";
	this->ñåğûéToolStripMenuItem->Text = "Gray";
	this->ñâåòëûéToolStripMenuItem->Text = "Light";
	this->ò¸ìíûéToolStripMenuItem->Text = "Dark";
	this->label1->Text = "Registration";
	this->label2->Text = "Login:";
	this->label3->Text = "Password:";
	this->button1->Text = "Registration";
	this->lang = 'e';

}
private: System::Void ğóññêèéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->àíãëèéñêèéToolStripMenuItem->Text = "Àíãëèéñêèé";
	this->áåëîğóññêèéToolStripMenuItem->Text = "Áåëîğóññêèé";
	this->ğóññêèéToolStripMenuItem->Text = "Ğóññêèé";
	this->ìåíşToolStripMenuItem->Text = "Ìåíş";
	this->öâåòToolStripMenuItem->Text = "Öâåò";
	this->ñåğûéToolStripMenuItem->Text = "Ñåğûé";
	this->ñâåòëûéToolStripMenuItem->Text = "Ñâåòëûé";
	this->ò¸ìíûéToolStripMenuItem->Text = "Òåìíûé";
	this->ÿçûêToolStripMenuItem->Text = "ßçûê";
	this->label1->Text = "Ğåãèñòğàöèÿ";
	this->label2->Text = "Ëîãèí:";
	this->label3->Text = "Ïàğîëü:";
	this->button1->Text = "Çàğåãèñòğèğîâàòü";
	this->lang = 'r';
}
private: System::Void toolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->àíãëèéñêèéToolStripMenuItem->Text = "Àíãë³éñê³";
	this->áåëîğóññêèéToolStripMenuItem->Text = "Áåëàğóñê³";
	this->ğóññêèéToolStripMenuItem->Text = "Ğóñê³";
	this->ìåíşToolStripMenuItem->Text = "Ìÿíş";
	this->öâåòToolStripMenuItem->Text = "Êîëàğ";
	this->ñåğûéToolStripMenuItem->Text = "Øåğû";
	this->ñâåòëûéToolStripMenuItem->Text = "Ñâåòëû";
	this->ò¸ìíûéToolStripMenuItem->Text = "Öåìíû";
	this->ÿçûêToolStripMenuItem->Text = "Ìîâà";
	this->label1->Text = "Ğıãiñòğàöûÿ";
	this->label2->Text = "Ëàãií:";
	this->label3->Text = "Ïàğîëü:";
	this->button1->Text = "Çàğıã³ñòğóéöåñÿ";
	this->lang = 'b';
}
private: System::Void MyForm1_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
	Application::Exit();
}
};
}
