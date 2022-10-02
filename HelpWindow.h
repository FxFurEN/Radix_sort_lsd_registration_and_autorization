#pragma once

namespace Kursovaya {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для HelpWindow
	/// </summary>
	public ref class HelpWindow : public System::Windows::Forms::Form
	{
	public:
		HelpWindow(char lang, char color)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(HelpWindow::typeid));
			if (lang == 'r')
			{
				this->label1->Text = L"Курсовая работа";
				this->label2->Text = L"Сделал: Тимошенко Н. А.";
				this->label3->Text = L"Тема: Поразрядная сортировка LSD";
				this->label4->Text = resources->GetString(L"rus_button");
				this->label5->Text = resources->GetString(L"radix_sort_lsd_rus");
				
			}
			if (lang == 'e')
			{
				this->label1->Text = L"Course paper";
				this->label2->Text = L"Made by: Timoshenko N. A.";
				this->label3->Text = L"Subject: Radix sort of LSD";
				this->label4->Text = resources->GetString(L"eng_button");
				this->label5->Text = resources->GetString(L"radix_sort_lsd_eng");
			}
			if (lang == 'b')
			{
				this->label1->Text = L"Курсавая праца";
				this->label2->Text = L"Зрабіў: Цімашэнка М. А.";
				this->label3->Text = L"Тэма: Поразрядная Сартаванне LSD";
				this->label4->Text = resources->GetString(L"bel_button");
				this->label5->Text = resources->GetString(L"radix_sort_lsd_bel");
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
		/// Освободить все используемые ресурсы.
		/// </summary>
		~HelpWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label5;






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(HelpWindow::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(10, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(751, 23);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Курсовая работа";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(12, 64);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(749, 23);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Тема: Поразрядная сортировка LSD";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label4
			// 
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(398, 143);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(443, 386);
			this->label4->TabIndex = 3;
			this->label4->Text = resources->GetString(L"rus_button");
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label2->Location = System::Drawing::Point(695, 553);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(136, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Сделал: Тимошенко Н. А.";
			// 
			// label5
			// 
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(12, 143);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(380, 423);
			this->label5->TabIndex = 5;
			this->label5->Text = resources->GetString(L"radix_sort_lsd_rus");
			// 
			// HelpWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(843, 575);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Name = L"HelpWindow";
			this->Text = L"HelpWindow";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
