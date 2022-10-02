#pragma once
#include "RSlsd.h"// подключение .h файла с сортировкой
#include "HelpWindow.h"// подключение .h файла со справочной системой
namespace Kursovaya {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для WinLSD
	/// </summary>
	public ref class WinLSD : public System::Windows::Forms::Form
	{
	public:
		WinLSD(char lang, char color)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			if (lang == 'r')// проверка на язык
			{// изменение текста на русский
				this->английскийToolStripMenuItem->Text = L"Английсский";
				this->белорусскийToolStripMenuItem->Text = L"Белорусский";
				this->русскийToolStripMenuItem->Text = L"Русский";
				this->менюToolStripMenuItem->Text = L"Меню";
				this->цветToolStripMenuItem->Text = L"Цвет";
				this->помощьToolStripMenuItem->Text = L"Помощь";
				this->серыйToolStripMenuItem->Text = L"Серый";
				this->светлыйToolStripMenuItem->Text = L"Светлый";
				this->тёмныйToolStripMenuItem->Text = L"Темный";
				this->языкToolStripMenuItem->Text = L"Язык";
				this->label1->Text = L" ";
				this->label2->Text = L"← Введите число для размерности массива, а затем →";
				this->label3->Text = L"Массив после сортировки";
				this->label4->Text = L"Поразрядная сортировка LSD";
				this->label5->Text = L"Массив до сортировки";
				this->button1->Text = L"Рандомно заполнить массив";
				this->button2->Text = L"Создать новый массив";
				this->button3->Text = L"Внести число в массив";
				this->button4->Text = L"Распечатать массив";
				this->button5->Text = L"Выполнить поразрядную сортировку LSD";
				this->button6->Text = L"Сохранить массив в файл";
				this->button7->Text = L"Чтение массива из файла";
				this->label7->Text = L"Общее кол-во байтов";
				this->label8->Text = L"От";
				this->label9->Text = L"До";
				this->lang = 'r';
			}
			if (lang == 'e')// проверка на язык
			{// изменение текста на английский
				this->английскийToolStripMenuItem->Text = "English";
				this->русскийToolStripMenuItem->Text = "Russian";
				this->белорусскийToolStripMenuItem->Text = "Belarussian";
				this->языкToolStripMenuItem->Text = "Language";
				this->менюToolStripMenuItem->Text = "Menu";
				this->помощьToolStripMenuItem->Text = L"Help";
				this->цветToolStripMenuItem->Text = "Color";
				this->серыйToolStripMenuItem->Text = "Gray";
				this->светлыйToolStripMenuItem->Text = "Light";
				this->тёмныйToolStripMenuItem->Text = "Dark";
				this->label1->Text = L" ";
				this->label2->Text = L"← Enter a number for the dimension of the array, and then →";
				this->label3->Text = L"Array after sorting";
				this->label4->Text = L"Radix sort LSD";
				this->label5->Text = L"Array before sorting";
				this->button1->Text = L"Randomly fill the array";
				this->button2->Text = L"Create a new array";
				this->button3->Text = L"Add a number to the array";
				this->button4->Text = L"Print an array";
				this->button5->Text = L"Perform radix sort LSD ";
				this->button6->Text = L"Save an array to a file";
				this->button7->Text = L"Reading an array from a file";
				this->label7->Text = L"Total number of bytes";
				this->label8->Text = L"From";
				this->label9->Text = L"To";
				this->lang = 'e';
			}
			if (lang == 'b')// проверка на язык
			{// изменение текста на белорусский
				this->английскийToolStripMenuItem->Text = L"Англійскі";
				this->белорусскийToolStripMenuItem->Text = L"Беларускі";
				this->русскийToolStripMenuItem->Text = L"Рускі";
				this->менюToolStripMenuItem->Text = L"Мяню";
				this->цветToolStripMenuItem->Text = L"Колар";
				this->помощьToolStripMenuItem->Text = L"Дапамога";
				this->серыйToolStripMenuItem->Text = L"Шеры";
				this->светлыйToolStripMenuItem->Text = L"Светлы";
				this->тёмныйToolStripMenuItem->Text = L"Цемны";
				this->языкToolStripMenuItem->Text = L"Мова";
				this->label1->Text = L" ";
				this->label2->Text = L"← Увядзіце лік для памернасці масіва, а затым →";
				this->label3->Text = L"Масіў пасля сартавання";
				this->label4->Text = L"Поразрядная Сартаванне LSD";
				this->label5->Text = L"Масіў перад сартаваннем";
				this->button1->Text = L"Рандомные запоўніць масіў";
				this->button2->Text = L"Стварыце новы масіў";
				this->button3->Text = L"Дадайце лік у масіў";
				this->button4->Text = L"Друк масіва";
				this->button5->Text = L"Выканаць поразрядную Сартаванне LSD";
				this->button6->Text = L"Захаваць масіў у файл";
				this->button7->Text = L"Чытанне масіва з файла";
				this->label7->Text = L"Агульная кол-ць байтау";
				this->label8->Text = L"Ад";
				this->label9->Text = L"Да";
				this->lang = 'b';
			}
			if (color == 'l')// проверка на цвет
			{// изменение цвета окна
				this->BackColor = System::Drawing::Color::LightGray;
				this->color == 'l';
			}
			if (color == 'd')// проверка на цвет
			{// изменение цвета окна
				
				this->BackColor = System::Drawing::Color::DarkGray;
				this->color == 'd';
			}
			if (color == 'g')// проверка на цвет
			{// изменение цвета окна  и кнопок
				this->button1->BackColor = System::Drawing::SystemColors::ActiveBorder;
				this->button2->BackColor = System::Drawing::SystemColors::ActiveBorder;
				this->button3->BackColor = System::Drawing::SystemColors::ActiveBorder;
				this->button4->BackColor = System::Drawing::SystemColors::ActiveBorder;
				this->button5->BackColor = System::Drawing::SystemColors::ActiveBorder;
				this->BackColor = System::Drawing::Color::Gray;
				this->color == 'g';
				
			}
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~WinLSD()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;

	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ менюToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ цветToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ светлыйToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ тёмныйToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ серыйToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ языкToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ английскийToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ русскийToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ белорусскийToolStripMenuItem;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ToolStripMenuItem^ помощьToolStripMenuItem;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;

	private: System::ComponentModel::IContainer^ components;
	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
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
			this->помощьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->менюToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(5, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(947, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// менюToolStripMenuItem
			// 
			this->менюToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->цветToolStripMenuItem,
					this->языкToolStripMenuItem, this->помощьToolStripMenuItem
			});
			this->менюToolStripMenuItem->Name = L"менюToolStripMenuItem";
			this->менюToolStripMenuItem->Size = System::Drawing::Size(65, 24);
			this->менюToolStripMenuItem->Text = L"Меню";
			// 
			// цветToolStripMenuItem
			// 
			this->цветToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->светлыйToolStripMenuItem,
					this->тёмныйToolStripMenuItem, this->серыйToolStripMenuItem
			});
			this->цветToolStripMenuItem->Name = L"цветToolStripMenuItem";
			this->цветToolStripMenuItem->Size = System::Drawing::Size(152, 26);
			this->цветToolStripMenuItem->Text = L"Цвет";
			// 
			// светлыйToolStripMenuItem
			// 
			this->светлыйToolStripMenuItem->Name = L"светлыйToolStripMenuItem";
			this->светлыйToolStripMenuItem->Size = System::Drawing::Size(151, 26);
			this->светлыйToolStripMenuItem->Text = L"Светлый";
			this->светлыйToolStripMenuItem->Click += gcnew System::EventHandler(this, &WinLSD::светлыйToolStripMenuItem_Click);
			// 
			// тёмныйToolStripMenuItem
			// 
			this->тёмныйToolStripMenuItem->Name = L"тёмныйToolStripMenuItem";
			this->тёмныйToolStripMenuItem->Size = System::Drawing::Size(151, 26);
			this->тёмныйToolStripMenuItem->Text = L"Тёмный";
			this->тёмныйToolStripMenuItem->Click += gcnew System::EventHandler(this, &WinLSD::тёмныйToolStripMenuItem_Click);
			// 
			// серыйToolStripMenuItem
			// 
			this->серыйToolStripMenuItem->Name = L"серыйToolStripMenuItem";
			this->серыйToolStripMenuItem->Size = System::Drawing::Size(151, 26);
			this->серыйToolStripMenuItem->Text = L"Серый";
			this->серыйToolStripMenuItem->Click += gcnew System::EventHandler(this, &WinLSD::серыйToolStripMenuItem_Click);
			// 
			// языкToolStripMenuItem
			// 
			this->языкToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->английскийToolStripMenuItem,
					this->русскийToolStripMenuItem, this->белорусскийToolStripMenuItem
			});
			this->языкToolStripMenuItem->Name = L"языкToolStripMenuItem";
			this->языкToolStripMenuItem->Size = System::Drawing::Size(152, 26);
			this->языкToolStripMenuItem->Text = L"Язык";
			// 
			// английскийToolStripMenuItem
			// 
			this->английскийToolStripMenuItem->Name = L"английскийToolStripMenuItem";
			this->английскийToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->английскийToolStripMenuItem->Text = L"Английский";
			this->английскийToolStripMenuItem->Click += gcnew System::EventHandler(this, &WinLSD::английскийToolStripMenuItem_Click);
			// 
			// русскийToolStripMenuItem
			// 
			this->русскийToolStripMenuItem->Name = L"русскийToolStripMenuItem";
			this->русскийToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->русскийToolStripMenuItem->Text = L"Русский";
			this->русскийToolStripMenuItem->Click += gcnew System::EventHandler(this, &WinLSD::русскийToolStripMenuItem_Click);
			// 
			// белорусскийToolStripMenuItem
			// 
			this->белорусскийToolStripMenuItem->Name = L"белорусскийToolStripMenuItem";
			this->белорусскийToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->белорусскийToolStripMenuItem->Text = L"Белорусский";
			this->белорусскийToolStripMenuItem->Click += gcnew System::EventHandler(this, &WinLSD::белорусскийToolStripMenuItem_Click);
			// 
			// помощьToolStripMenuItem
			// 
			this->помощьToolStripMenuItem->Name = L"помощьToolStripMenuItem";
			this->помощьToolStripMenuItem->Size = System::Drawing::Size(152, 26);
			this->помощьToolStripMenuItem->Text = L"Помощь";
			this->помощьToolStripMenuItem->Click += gcnew System::EventHandler(this, &WinLSD::помощьToolStripMenuItem_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(16, 121);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(43, 22);
			this->textBox1->TabIndex = 5;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(24, 373);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox2->Size = System::Drawing::Size(352, 221);
			this->textBox2->TabIndex = 6;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(581, 373);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox3->Size = System::Drawing::Size(352, 221);
			this->textBox3->TabIndex = 12;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(60, 102);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 17);
			this->label1->TabIndex = 7;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(67, 121);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(381, 17);
			this->label2->TabIndex = 10;
			this->label2->Text = L"← Введите число для размерности массива, а затем → ";
			// 
			// button1
			// 
			this->button1->Enabled = false;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button1->Location = System::Drawing::Point(471, 162);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(223, 58);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Рандомно заполнить массив";
			this->button1->Click += gcnew System::EventHandler(this, &WinLSD::button1_Click);
			// 
			// button2
			// 
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button2->Location = System::Drawing::Point(471, 101);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(223, 54);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Создать новый массив";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &WinLSD::button2_Click);
			this->button2->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &WinLSD::button2_MouseClick);
			// 
			// button3
			// 
			this->button3->Enabled = false;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button3->Location = System::Drawing::Point(712, 102);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(223, 54);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Внести число в массив";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &WinLSD::button3_Click);
			// 
			// button4
			// 
			this->button4->Enabled = false;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button4->Location = System::Drawing::Point(712, 164);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(223, 57);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Распечатать массив";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &WinLSD::button4_Click);
			// 
			// button5
			// 
			this->button5->Cursor = System::Windows::Forms::Cursors::Default;
			this->button5->Enabled = false;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button5->Location = System::Drawing::Point(41, 197);
			this->button5->Margin = System::Windows::Forms::Padding(4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(300, 75);
			this->button5->TabIndex = 11;
			this->button5->Text = L"Выполнить поразрядную сортировку LSD\r\n";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &WinLSD::button5_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(675, 353);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(179, 17);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Массив после сортировки";
			// 
			// label4
			// 
			this->label4->Dock = System::Windows::Forms::DockStyle::Top;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(0, 28);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(947, 38);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Поразрядная сортировка LSD";
			this->label4->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(101, 353);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(156, 17);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Массив до сортировки";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(385, 398);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(177, 135);
			this->label6->TabIndex = 16;
			this->label6->Text = L"→";
			// 
			// button6
			// 
			this->button6->Enabled = false;
			this->button6->Location = System::Drawing::Point(471, 274);
			this->button6->Margin = System::Windows::Forms::Padding(4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(223, 57);
			this->button6->TabIndex = 17;
			this->button6->Text = L"Сохранить массив в файл";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &WinLSD::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(712, 229);
			this->button7->Margin = System::Windows::Forms::Padding(4);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(223, 57);
			this->button7->TabIndex = 18;
			this->button7->Text = L"Чтение массива из файла";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &WinLSD::button7_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(440, 386);
			this->textBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(79, 22);
			this->textBox4->TabIndex = 19;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(405, 367);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(151, 17);
			this->label7->TabIndex = 20;
			this->label7->Text = L"Общее кол-во байтов";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(559, 230);
			this->textBox5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(48, 22);
			this->textBox5->TabIndex = 21;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(646, 229);
			this->textBox6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(48, 22);
			this->textBox6->TabIndex = 22;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(511, 234);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(26, 17);
			this->label8->TabIndex = 23;
			this->label8->Text = L"От";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(613, 233);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(27, 17);
			this->label9->TabIndex = 24;
			this->label9->Text = L"До";
			// 
			// WinLSD
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(947, 597);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximumSize = System::Drawing::Size(965, 644);
			this->MinimumSize = System::Drawing::Size(965, 644);
			this->Name = L"WinLSD";
			this->Text = L"MainWindow";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &WinLSD::WinLSD_FormClosed);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		char lang;// создание перменной
		char color;// создание перменной
		int n = 0;// создание перменной
		int* m = nullptr;// создание перменной
		int i = 0;// создание перменной
		int size = 0;// создание перменной
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		
		try// попытка исполнения кода
		{
			int min = Convert::ToInt32(this->textBox5->Text); // создание элемента min и присваивание значения из textBox5
			int max = Convert::ToInt32(this->textBox6->Text); // создание элемента max и присваивание значения из textBox6
			if (min >= max) { // проверка диапозона
				MessageBox::Show("Минамальное значение диапозона не может быть больше или равно максимальному");// вывод текста
				this->textBox5->Clear();// очистка textBox5
				this->textBox6->Clear();// очистка textBox6
				return;// возвращение назад
			}
			if (min <= 0) {// проверка диапозона 
				MessageBox::Show("Минамальное значение диапозона не может быть меньше 0 ");// вывод текста
				this->textBox5->Clear();// очистка textBox5
				this->textBox6->Clear();// очистка textBox6
				return;// возвращение назад
			}
			for (int i = 0; i < n; i++)// цикл for
				{
					m[i] = Convert::ToInt32(min + rand() % (max - min + 1)); // рандомная генерация чисел в диапозоне
				}
		}
		catch (System::FormatException^ e)// отлов ошибок 
		{
			MessageBox::Show(e->Message);// вывод ошибки
			this->textBox5->Clear();// очистка textBox5
			this->textBox6->Clear();// очистка textBox6
			return;// возвращение
		}
		catch (System::Exception^ e)// отлов ошибок 
		{
			MessageBox::Show(e->Message);// вывод ошибки
			this->textBox5->Clear();// очистка textBox5
			this->textBox6->Clear();// очистка textBox6
			return;// возвращение назад
		}
		catch (System::OverflowException^ e)// отлов ошибок 
		{
			MessageBox::Show(e->Message);// вывод ошибки
			this->textBox5->Clear();// очистка textBox5
			this->textBox6->Clear();// очистка textBox6
			return;// возвращение назад
		}
		
		this->button4->Enabled = true;// разблокирование кнопки
		this->button3->Enabled = false;// заблокирование кнопки
		this->button1->Enabled = false;// заблокирование кнопки
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		try// попытка исполнения кода
		{
			size = Convert::ToInt32(this->textBox1->Text);
			if (m != nullptr)// проверка на пустоту
			{
				this->textBox2->Clear();// очистка textBox2
				delete[]m;// удаление массива
				m = nullptr;//  переменной m присваивается "пустота"
				n = 0;//  переменой n присваивается 0
				label1->Text = "Удален имеющийся массив";// вывод текста 
				
				this->textBox3->Clear();// очистка textBox3
				this->textBox2->Clear();// очистка textBox2
				this->textBox5->Clear();// очистка textBox5
				this->textBox6->Clear();// очистка textBox6
			}
			this->n = Convert::ToInt32(this->textBox1->Text);
			if (n >= 2001)// проверка значение
			{
				this->textBox1->Clear();
				MessageBox::Show("Максимальный размер массива может выбть не больше 2000\nThe maximum size of the array can knock out no more than 2000\nМаксімальны памер масіва можа выбіць не больш за 2000");// вывод текста
				return;// возвращение назад
			}
			if (n <= 0)// проверка на значение
			{
				this->textBox1->Clear();
				MessageBox::Show("Минимальный размер массива не может быть меньше 1\nThe minimum size of the array cannot be less than 1\nМінімальны памер масіва не можа быць менш 1");// вывод текста
				return;// возвращение назад
			}
			m = new int[n];
			if (!m)// проверка 
			{
				MessageBox::Show("Failed to create an array on " + n.ToString() + " elements");// вывод текста 
				return;// возвращение назад
			}
			this->button3->Enabled = true;// разблокирование кнопки
			this->button1->Enabled = true;// разблокирование кнопки
			this->button6->Enabled = false;// заблокирование кнопки
			i = 0;// зануляем переменную i
			if (lang == 'r')// проверка на язык
			{
				label1->Text = ("Создан массив на " + n.ToString() + " элементов");// вывод текста 
				this->label2->Text = L"<- Место для заполнения массива из " + n + " элементов";// вывод текста 
				this->textBox1->Clear();// очистка textbox 1
				this->textBox2->Clear();// очистка textbox 2
				this->textBox3->Clear();// очистка textbox 3
				this->textBox5->Clear();// очистка textbox 5
				this->textBox6->Clear();// очистка textbox 6
			}
			if (lang == 'e')// проверка на язык
			{
				label1->Text = ("An array was created on" + n.ToString() + " elements");// вывод текста 
				this->label2->Text = L"<- Place to fill the array from " + n + " elements";// вывод текста 
				this->textBox1->Clear();// очистка textbox 1
				this->textBox2->Clear();// очистка textbox 2
				this->textBox3->Clear();// очистка textbox 3
				this->textBox5->Clear();// очистка textbox 5
				this->textBox6->Clear();// очистка textbox 6
			}
			if (lang == 'b')// проверка на язык
			{
				label1->Text = ("Створаны масіў на " + n.ToString() + " элементы");// вывод текста 
				this->label2->Text = L"<- Месца для запаўнення масіва з " + n + " элементы";// вывод текста 
				this->textBox1->Clear();// очистка textbox 1
				this->textBox2->Clear();// очистка textbox 2
				this->textBox3->Clear();// очистка textbox 3
				this->textBox5->Clear();// очистка textbox 5
				this->textBox6->Clear();// очистка textbox 6
			}

			
			
		}
		catch (System::FormatException^ e)// отлов ошибок
		{
			MessageBox::Show(e->Message);// вывод ошибки
			this->textBox1->Clear();// очистка textbox 1
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e)
	{
		try// попытка исполнения кода
		{

			if (i < n && n>0 && m != nullptr)// проверка 
			{
				m[i] = Convert::ToInt32(this->textBox1->Text);// присваивание значение из textbox 1 в массив m
				i++;// инкримент
				//label1->Text = "";
				label1->Text = "The element is filled in " + i + " из " + n + " number " + this->textBox1->Text;// вывод текста 
				this->button1->Enabled = false;// заблокирование кнопки
				if (n == i)// проверка сходство по значению 
				{
					this->button4->Enabled = true;// разблокирование кнопки
					this->button5->Enabled = true;// разблокирование кнопки
					this->button3->Enabled = false;// заблокирование кнопки
					this->button1->Enabled = false;// заблокирование кнопки
				}
				this->textBox1->Clear();// очистка textbox 1
			}
			else
			{
				MessageBox::Show("Массив размерности " + n + " заполнен или не создан.\nThe array of dimension " + n + " is filled or not created.\nМасіў памернасці " + n + " запоўнены ці не створаны.");// вывод текста
			}

		}
		catch (System::FormatException^ e)// отлов ошибок
		{
			MessageBox::Show(e->Message);// вывод ошибки
		}
		catch (System::Exception^ e)// отлов ошибок
		{
			MessageBox::Show(e->Message);// вывод ошибки
		}
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->textBox2->Clear();// очистка textbox 2
		this->textBox1->Clear();// очистка textbox 1
		for (int i = 0; i < n; i++)// цикл for
		{
			this->textBox2->Text += m[i].ToString() + " ";// распечатывание массива
		}
		this->button5->Enabled = true;// разблокирование кнопки
		this->button4->Enabled = false;// заблокирование кнопки
		


	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e)
	{

		this->textBox1->Clear();// очистка textbox 1
		this->textBox3->Clear();// очистка textbox 3
		RadixSortLSD(m, size);// вызов функции RadixSortLSD
		for (int i = 0; i < size; i++)// цикл for
		{
			this->textBox3->Text += m[i].ToString() + " ";// распечатывание массива

		}
		size_t byte;// создание переменной byte
		byte = 4 * n;// нахождение общего кол-во байтов
		this->textBox4->Text = byte.ToString(); // распечатывание byte в textBox4
		this->button5->Enabled = false;// заблокирование кнопки
		this->button6->Enabled = true;// разблокирование кнопки

	}
	private: System::Void WinLSD_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		Application::Exit();// закрытие программы
	}
	private: System::Void светлыйToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->BackColor = System::Drawing::Color::LightGray;// изменение цвета
		color = 'l';
	}
	private: System::Void тёмныйToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->BackColor = System::Drawing::Color::DarkGray;// изменение цвета
		color = 'd';
	}
	private: System::Void серыйToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->BackColor = System::Drawing::Color::Gray;
		color = 'g';// изменение цвета
	}
	private: System::Void английскийToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		// изменение текста на английский
		this->английскийToolStripMenuItem->Text = "English";
		this->русскийToolStripMenuItem->Text = "Russian";
		this->белорусскийToolStripMenuItem->Text = "Belarussian";
		this->языкToolStripMenuItem->Text = "Language";
		this->менюToolStripMenuItem->Text = "Menu";
		this->цветToolStripMenuItem->Text = "Color";
		this->серыйToolStripMenuItem->Text = "Gray";
		this->светлыйToolStripMenuItem->Text = "Light";
		this->тёмныйToolStripMenuItem->Text = "Dark";
		this->label1->Text = L" ";
		this->label2->Text = L"← Enter a number for the dimension of the array, and then →";
		this->label3->Text = L"Array after sorting";
		this->label4->Text = L"Radix sort LSD";
		this->label5->Text = L"Array before sorting";
		this->button1->Text = L"Randomly fill the array";
		this->button2->Text = L"Create a new array";
		this->button3->Text = L"Add a number to the array";
		this->button4->Text = L"Print an array";
		this->button5->Text = L"Perform radix sort LSD ";
		this->button6->Text = L"Save an array to a file";
		this->button7->Text = L"Reading an array from a file";
		this->label7->Text = L"Total number of bytes";
		this->label8->Text = L"From";
		this->label9->Text = L"To";
		this->lang = 'e';
	}

	private: System::Void белорусскийToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		// изменение текста на белорусский
		this->английскийToolStripMenuItem->Text = L"Англійскі";
		this->белорусскийToolStripMenuItem->Text = L"Беларускі";
		this->русскийToolStripMenuItem->Text = L"Рускі";
		this->менюToolStripMenuItem->Text = L"Мяню";
		this->цветToolStripMenuItem->Text = L"Колар";
		this->серыйToolStripMenuItem->Text = L"Шеры";
		this->светлыйToolStripMenuItem->Text = L"Светлы";
		this->тёмныйToolStripMenuItem->Text = L"Цемны";
		this->языкToolStripMenuItem->Text = L"Мова";
		this->label1->Text = L" ";
		this->label2->Text = L"← Увядзіце лік для памернасці масіва, а затым →";
		this->label3->Text = L"Масіў пасля сартавання";
		this->label4->Text = L"Поразрядная Сартаванне LSD";
		this->label5->Text = L"Масіў перад сартаваннем";
		this->button1->Text = L"Рандомные запоўніць масіў";
		this->button2->Text = L"Стварыце новы масіў";
		this->button3->Text = L"Дадайце лік у масіў";
		this->button4->Text = L"Друк масіва";
		this->button5->Text = L"Выканаць поразрядную Сартаванне LSD";
		this->button6->Text = L"Захаваць масіў у файл";
		this->button7->Text = L"Чытанне масіва з файла";
		this->label7->Text = L"Агульная кол-ць байтау";
		this->label8->Text = L"Ад";
		this->label9->Text = L"Да";
		this->lang = 'b';
	}
	private: System::Void русскийToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		// изменение текста на русский
		this->английскийToolStripMenuItem->Text = L"Английсский";
		this->белорусскийToolStripMenuItem->Text = L"Белорусский";
		this->русскийToolStripMenuItem->Text = L"Русский";
		this->менюToolStripMenuItem->Text = L"Меню";
		this->цветToolStripMenuItem->Text = L"Цвет";
		this->серыйToolStripMenuItem->Text = L"Серый";
		this->светлыйToolStripMenuItem->Text = L"Светлый";
		this->тёмныйToolStripMenuItem->Text = L"Темный";
		this->языкToolStripMenuItem->Text = L"Язык";
		this->label1->Text = L" ";
		this->label2->Text = L"← Введите число для размерности массива, а затем →";
		this->label3->Text = L"Массив после сортировки";
		this->label4->Text = L"Поразрядная сортировка LSD";
		this->label5->Text = L"Массив до сортировки";
		this->button1->Text = L"Рандомно заполнить массив";
		this->button2->Text = L"Создать новый массив";
		this->button3->Text = L"Внести число в массив";
		this->button4->Text = L"Распечатать массив";
		this->button5->Text = L"Выполнить поразрядную сортировку LSD";
		this->button6->Text = L"Сохранить массив в файл";
		this->button7->Text = L"Чтение массива из файла";
		this->label7->Text = L"Общее кол-во байтов";
		this->label8->Text = L"От";
		this->label9->Text = L"До";
		this->lang = 'r';
	}
	private: System::Void помощьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		HelpWindow^ f = gcnew HelpWindow(this->lang, this->color);// переход на новое окно
		f->Show();
	}
	private: System::Void button2_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		this->button4->Enabled = false;// заблокирование кнопки
		this->button5->Enabled = false;// заблокирование кнопки
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog; // Возможность сохранения файла
		saveFileDialog1->Filter = "Текстовые файлы (*.txt)|*.txt|Все файлы (*.*)|*.*"; //Фильтр формата файлов
		saveFileDialog1->FilterIndex = true; // RestoreDirectory устанавливаем значение true
		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK && saveFileDialog1->FileName->Length > 0) // проверка на пустоту и возможность сохранения
		{
			IO::File::WriteAllText(saveFileDialog1->FileName, textBox3 -> Text); // Запись файла
		}
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textBox2->Clear();// очистка textbox2
		this->textBox3->Clear();// очистка textbox3
		try 
		{
			IO::Stream^ SortMas;
			OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog(); // Возможность открытие файла формата файлов
			if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) // проверка на открытие файла
			{
				if ((SortMas = openFileDialog1->OpenFile()) != nullptr)// проверка на пустоту  
				{

					SortMas->Close();
					textBox3->Text = System::IO::File::ReadAllText(openFileDialog1->FileName, System::Text::Encoding::Default); // Чтение файла
				}

			}
		}
		catch (System::Exception^ e)
		{
			MessageBox::Show(e->Message);
		}
	}
};
	}