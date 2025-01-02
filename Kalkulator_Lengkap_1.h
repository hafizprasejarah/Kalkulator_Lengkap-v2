#pragma once
#include <corecrt_math_defines.h>
#include <cmath>

namespace KalkulatorLengkap {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Main
	/// </summary>
	public ref class Main : public System::Windows::Forms::Form
	{
	public:
        Main(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
            this->btn0->Click += gcnew System::EventHandler(this, &Main::numberButton_Click);
            this->btn1->Click += gcnew System::EventHandler(this, &Main::numberButton_Click);
            this->btn2->Click += gcnew System::EventHandler(this, &Main::numberButton_Click);
            this->btn3->Click += gcnew System::EventHandler(this, &Main::numberButton_Click);
            this->btn4->Click += gcnew System::EventHandler(this, &Main::numberButton_Click);
            this->btn5->Click += gcnew System::EventHandler(this, &Main::numberButton_Click);
            this->btn6->Click += gcnew System::EventHandler(this, &Main::numberButton_Click);
            this->btn7->Click += gcnew System::EventHandler(this, &Main::numberButton_Click);
            this->btn8->Click += gcnew System::EventHandler(this, &Main::numberButton_Click);
            this->btn9->Click += gcnew System::EventHandler(this, &Main::numberButton_Click);


            // Menghubungkan event handler ke tombol operasi
            this->btnPlus->Click += gcnew System::EventHandler(this, &Main::operationButton_Click);
            this->btnMinus->Click += gcnew System::EventHandler(this, &Main::operationButton_Click);
            this->btnMultiply->Click += gcnew System::EventHandler(this, &Main::operationButton_Click);
            this->btnDivide->Click += gcnew System::EventHandler(this, &Main::operationButton_Click);


            // Menghubungkan event handler untuk tombol "=" dan "C"
            this->btnEqual->Click += gcnew System::EventHandler(this, &Main::equalButton_Click);
            this->btnClear->Click += gcnew System::EventHandler(this, &Main::clearButton_Click);

            // Menghubungkan event handler ke tombol-tombol Trigonometri
            this->SinBtn->Click += gcnew System::EventHandler(this, &Main::Trigonometri_Click);
            this->CosBtn->Click += gcnew System::EventHandler(this, &Main::Trigonometri_Click);
            this->TanBtn->Click += gcnew System::EventHandler(this, &Main::Trigonometri_Click);
            this->InversBtn->Click += gcnew System::EventHandler(this, &Main::Trigonometri_Click);

            // Menghubungkan event handler ke tombol "."
            this->PointButton->Click += gcnew System::EventHandler(this, &Main::Point_Click);

            // Menghubungkan event handler ke tombol persen
            this->percentBtn->Click += gcnew System::EventHandler(this, &Main::Percent_Click);
            // Menghubungkan event handler ke tombol "."
            this->pangkatBtn->Click += gcnew System::EventHandler(this, &Main::Pangkat_Click);
            // Menghubungkan event handler ke tombol "."
            this->akarBtn->Click += gcnew System::EventHandler(this, &Main::Akar_Click);

            this->Load += gcnew System::EventHandler(this, &Main::MyForm_Load);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Main()
		{
			if (components)
			{
				delete components;
			}
		}
    private:
        double firstnumber;
        double secondnumber;
        String^ operation;
        String^ firstchar;
        String^ trigonometri;
        String^ koma;
        String^ Persen;
        String^ Pangkat;
        String^ Akar;


    protected:































    private: System::Windows::Forms::Timer^ MenuTransition;
    private: System::Windows::Forms::Panel^ panel2;
    private: System::Windows::Forms::PictureBox^ pictureBox1;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::TextBox^ displayBox;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
    private: System::Windows::Forms::Button^ InversBtn;
    private: System::Windows::Forms::Button^ PointButton;
    private: System::Windows::Forms::Button^ btn0;
private: System::Windows::Forms::Button^ percentBtn;

    private: System::Windows::Forms::Button^ btn1;
private: System::Windows::Forms::Button^ pangkatBtn;

    private: System::Windows::Forms::Button^ btn4;
    private: System::Windows::Forms::Button^ TanBtn;
    private: System::Windows::Forms::Button^ btn7;
    private: System::Windows::Forms::Button^ btnClear;
    private: System::Windows::Forms::Button^ btn2;
    private: System::Windows::Forms::Button^ CosBtn;
    private: System::Windows::Forms::Button^ btn3;
    private: System::Windows::Forms::Button^ btn5;
    private: System::Windows::Forms::Button^ SinBtn;
private: System::Windows::Forms::Button^ akarBtn;

    private: System::Windows::Forms::Button^ btn8;
    private: System::Windows::Forms::Button^ btnPlus;
    private: System::Windows::Forms::Button^ btnEqual;
    private: System::Windows::Forms::Button^ btn6;
    private: System::Windows::Forms::Button^ btnMinus;
    private: System::Windows::Forms::Button^ btnMultiply;
    private: System::Windows::Forms::Button^ btnDivide;
    private: System::Windows::Forms::Button^ btn9;
    private: System::Windows::Forms::FlowLayoutPanel^ menuContainer;
    private: System::Windows::Forms::Panel^ panel4;
private: System::Windows::Forms::Button^ menuKalkulator;

    private: System::Windows::Forms::Panel^ panel3;
private: System::Windows::Forms::Button^ menuKonversi;

    private: System::Windows::Forms::Panel^ panel1;



    private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
            this->components = (gcnew System::ComponentModel::Container());
            this->MenuTransition = (gcnew System::Windows::Forms::Timer(this->components));
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->displayBox = (gcnew System::Windows::Forms::TextBox());
            this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->InversBtn = (gcnew System::Windows::Forms::Button());
            this->PointButton = (gcnew System::Windows::Forms::Button());
            this->btn0 = (gcnew System::Windows::Forms::Button());
            this->percentBtn = (gcnew System::Windows::Forms::Button());
            this->btn1 = (gcnew System::Windows::Forms::Button());
            this->pangkatBtn = (gcnew System::Windows::Forms::Button());
            this->btn4 = (gcnew System::Windows::Forms::Button());
            this->TanBtn = (gcnew System::Windows::Forms::Button());
            this->btn7 = (gcnew System::Windows::Forms::Button());
            this->btnClear = (gcnew System::Windows::Forms::Button());
            this->btn2 = (gcnew System::Windows::Forms::Button());
            this->CosBtn = (gcnew System::Windows::Forms::Button());
            this->btn3 = (gcnew System::Windows::Forms::Button());
            this->btn5 = (gcnew System::Windows::Forms::Button());
            this->SinBtn = (gcnew System::Windows::Forms::Button());
            this->akarBtn = (gcnew System::Windows::Forms::Button());
            this->btn8 = (gcnew System::Windows::Forms::Button());
            this->btnPlus = (gcnew System::Windows::Forms::Button());
            this->btnEqual = (gcnew System::Windows::Forms::Button());
            this->btn6 = (gcnew System::Windows::Forms::Button());
            this->btnMinus = (gcnew System::Windows::Forms::Button());
            this->btnMultiply = (gcnew System::Windows::Forms::Button());
            this->btnDivide = (gcnew System::Windows::Forms::Button());
            this->btn9 = (gcnew System::Windows::Forms::Button());
            this->menuContainer = (gcnew System::Windows::Forms::FlowLayoutPanel());
            this->panel4 = (gcnew System::Windows::Forms::Panel());
            this->menuKalkulator = (gcnew System::Windows::Forms::Button());
            this->panel3 = (gcnew System::Windows::Forms::Panel());
            this->menuKonversi = (gcnew System::Windows::Forms::Button());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->panel2->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            this->tableLayoutPanel1->SuspendLayout();
            this->menuContainer->SuspendLayout();
            this->panel4->SuspendLayout();
            this->panel3->SuspendLayout();
            this->panel1->SuspendLayout();
            this->SuspendLayout();
            // 
            // MenuTransition
            // 
            this->MenuTransition->Interval = 10;
            this->MenuTransition->Tick += gcnew System::EventHandler(this, &Main::MenuTransition_Tick_1);
            // 
            // panel2
            // 
            this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
                static_cast<System::Int32>(static_cast<System::Byte>(29)));
            this->panel2->Controls->Add(this->pictureBox1);
            this->panel2->Controls->Add(this->label1);
            this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
            this->panel2->Location = System::Drawing::Point(0, 0);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(808, 43);
            this->panel2->TabIndex = 28;
            // 
            // pictureBox1
            // 
            this->pictureBox1->Location = System::Drawing::Point(10, 7);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(37, 33);
            this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox1->TabIndex = 30;
            this->pictureBox1->TabStop = false;
            this->pictureBox1->Click += gcnew System::EventHandler(this, &Main::pictureBox1_Click_1);
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->BackColor = System::Drawing::Color::Black;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->ForeColor = System::Drawing::Color::White;
            this->label1->Location = System::Drawing::Point(51, 15);
            this->label1->Name = L"label1";
            this->label1->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->label1->Size = System::Drawing::Size(222, 22);
            this->label1->TabIndex = 26;
            this->label1->Text = L"Kalkulator Hebat Lengkap";
            // 
            // displayBox
            // 
            this->displayBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->displayBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
                static_cast<System::Int32>(static_cast<System::Byte>(29)));
            this->displayBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->displayBox->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->displayBox->ForeColor = System::Drawing::Color::White;
            this->displayBox->Location = System::Drawing::Point(10, 100);
            this->displayBox->Name = L"displayBox";
            this->displayBox->ReadOnly = true;
            this->displayBox->Size = System::Drawing::Size(788, 32);
            this->displayBox->TabIndex = 0;
            this->displayBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
            // 
            // tableLayoutPanel1
            // 
            this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tableLayoutPanel1->AutoScroll = true;
            this->tableLayoutPanel1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
            this->tableLayoutPanel1->ColumnCount = 6;
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                16.66667F)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                16.66667F)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                16.66667F)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                16.66667F)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                16.66667F)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                16.66667F)));
            this->tableLayoutPanel1->Controls->Add(this->InversBtn, 5, 0);
            this->tableLayoutPanel1->Controls->Add(this->PointButton, 1, 3);
            this->tableLayoutPanel1->Controls->Add(this->btn0, 0, 3);
            this->tableLayoutPanel1->Controls->Add(this->percentBtn, 5, 1);
            this->tableLayoutPanel1->Controls->Add(this->btn1, 0, 2);
            this->tableLayoutPanel1->Controls->Add(this->pangkatBtn, 5, 2);
            this->tableLayoutPanel1->Controls->Add(this->btn4, 0, 1);
            this->tableLayoutPanel1->Controls->Add(this->TanBtn, 4, 2);
            this->tableLayoutPanel1->Controls->Add(this->btn7, 0, 0);
            this->tableLayoutPanel1->Controls->Add(this->btnClear, 5, 3);
            this->tableLayoutPanel1->Controls->Add(this->btn2, 1, 2);
            this->tableLayoutPanel1->Controls->Add(this->CosBtn, 4, 1);
            this->tableLayoutPanel1->Controls->Add(this->btn3, 2, 2);
            this->tableLayoutPanel1->Controls->Add(this->btn5, 1, 1);
            this->tableLayoutPanel1->Controls->Add(this->SinBtn, 4, 0);
            this->tableLayoutPanel1->Controls->Add(this->akarBtn, 4, 3);
            this->tableLayoutPanel1->Controls->Add(this->btn8, 1, 0);
            this->tableLayoutPanel1->Controls->Add(this->btnPlus, 3, 0);
            this->tableLayoutPanel1->Controls->Add(this->btnEqual, 2, 3);
            this->tableLayoutPanel1->Controls->Add(this->btn6, 2, 1);
            this->tableLayoutPanel1->Controls->Add(this->btnMinus, 3, 1);
            this->tableLayoutPanel1->Controls->Add(this->btnMultiply, 3, 2);
            this->tableLayoutPanel1->Controls->Add(this->btnDivide, 3, 3);
            this->tableLayoutPanel1->Controls->Add(this->btn9, 2, 0);
            this->tableLayoutPanel1->GrowStyle = System::Windows::Forms::TableLayoutPanelGrowStyle::FixedSize;
            this->tableLayoutPanel1->Location = System::Drawing::Point(10, 239);
            this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
            this->tableLayoutPanel1->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->tableLayoutPanel1->RowCount = 4;
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
            this->tableLayoutPanel1->Size = System::Drawing::Size(788, 389);
            this->tableLayoutPanel1->TabIndex = 25;
            // 
            // InversBtn
            // 
            this->InversBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->InversBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
                static_cast<System::Int32>(static_cast<System::Byte>(55)));
            this->InversBtn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(91)));
            this->InversBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->InversBtn->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->InversBtn->ForeColor = System::Drawing::Color::White;
            this->InversBtn->Location = System::Drawing::Point(658, 3);
            this->InversBtn->Name = L"InversBtn";
            this->InversBtn->Size = System::Drawing::Size(127, 91);
            this->InversBtn->TabIndex = 21;
            this->InversBtn->Text = L"Inv";
            this->InversBtn->UseVisualStyleBackColor = false;
            // 
            // PointButton
            // 
            this->PointButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->PointButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
                static_cast<System::Int32>(static_cast<System::Byte>(55)));
            this->PointButton->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(91)));
            this->PointButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->PointButton->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->PointButton->ForeColor = System::Drawing::Color::White;
            this->PointButton->Location = System::Drawing::Point(134, 294);
            this->PointButton->Name = L"PointButton";
            this->PointButton->Size = System::Drawing::Size(125, 92);
            this->PointButton->TabIndex = 24;
            this->PointButton->Text = L",";
            this->PointButton->UseVisualStyleBackColor = false;
            // 
            // btn0
            // 
            this->btn0->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btn0->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
                static_cast<System::Int32>(static_cast<System::Byte>(55)));
            this->btn0->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(91)));
            this->btn0->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn0->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn0->ForeColor = System::Drawing::Color::White;
            this->btn0->Location = System::Drawing::Point(3, 294);
            this->btn0->Name = L"btn0";
            this->btn0->Size = System::Drawing::Size(125, 92);
            this->btn0->TabIndex = 1;
            this->btn0->Text = L"0";
            this->btn0->UseVisualStyleBackColor = false;
            // 
            // percentBtn
            // 
            this->percentBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->percentBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
                static_cast<System::Int32>(static_cast<System::Byte>(55)));
            this->percentBtn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(91)));
            this->percentBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->percentBtn->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->percentBtn->ForeColor = System::Drawing::Color::White;
            this->percentBtn->Location = System::Drawing::Point(658, 100);
            this->percentBtn->Name = L"percentBtn";
            this->percentBtn->Size = System::Drawing::Size(127, 91);
            this->percentBtn->TabIndex = 22;
            this->percentBtn->Text = L"%";
            this->percentBtn->UseVisualStyleBackColor = false;
            // 
            // btn1
            // 
            this->btn1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btn1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
                static_cast<System::Int32>(static_cast<System::Byte>(55)));
            this->btn1->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(91)));
            this->btn1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn1->ForeColor = System::Drawing::Color::White;
            this->btn1->Location = System::Drawing::Point(3, 197);
            this->btn1->Name = L"btn1";
            this->btn1->Size = System::Drawing::Size(125, 91);
            this->btn1->TabIndex = 2;
            this->btn1->Text = L"1";
            this->btn1->UseVisualStyleBackColor = false;
            // 
            // pangkatBtn
            // 
            this->pangkatBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pangkatBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
                static_cast<System::Int32>(static_cast<System::Byte>(55)));
            this->pangkatBtn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(91)));
            this->pangkatBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->pangkatBtn->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->pangkatBtn->ForeColor = System::Drawing::Color::White;
            this->pangkatBtn->Location = System::Drawing::Point(658, 197);
            this->pangkatBtn->Name = L"pangkatBtn";
            this->pangkatBtn->Size = System::Drawing::Size(127, 91);
            this->pangkatBtn->TabIndex = 23;
            this->pangkatBtn->Text = L"^";
            this->pangkatBtn->UseVisualStyleBackColor = false;
            // 
            // btn4
            // 
            this->btn4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btn4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
                static_cast<System::Int32>(static_cast<System::Byte>(55)));
            this->btn4->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(91)));
            this->btn4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn4->ForeColor = System::Drawing::Color::White;
            this->btn4->Location = System::Drawing::Point(3, 100);
            this->btn4->Name = L"btn4";
            this->btn4->Size = System::Drawing::Size(125, 91);
            this->btn4->TabIndex = 5;
            this->btn4->Text = L"4";
            this->btn4->UseVisualStyleBackColor = false;
            // 
            // TanBtn
            // 
            this->TanBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->TanBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
                static_cast<System::Int32>(static_cast<System::Byte>(55)));
            this->TanBtn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(91)));
            this->TanBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->TanBtn->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->TanBtn->ForeColor = System::Drawing::Color::White;
            this->TanBtn->Location = System::Drawing::Point(527, 197);
            this->TanBtn->Name = L"TanBtn";
            this->TanBtn->Size = System::Drawing::Size(125, 91);
            this->TanBtn->TabIndex = 19;
            this->TanBtn->Text = L"Tan";
            this->TanBtn->UseVisualStyleBackColor = false;
            // 
            // btn7
            // 
            this->btn7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btn7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
                static_cast<System::Int32>(static_cast<System::Byte>(55)));
            this->btn7->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(91)));
            this->btn7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn7->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn7->ForeColor = System::Drawing::Color::White;
            this->btn7->Location = System::Drawing::Point(3, 3);
            this->btn7->Name = L"btn7";
            this->btn7->Size = System::Drawing::Size(125, 91);
            this->btn7->TabIndex = 8;
            this->btn7->Text = L"7";
            this->btn7->UseVisualStyleBackColor = false;
            // 
            // btnClear
            // 
            this->btnClear->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btnClear->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(101)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->btnClear->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(91)));
            this->btnClear->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnClear->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnClear->ForeColor = System::Drawing::Color::White;
            this->btnClear->Location = System::Drawing::Point(658, 294);
            this->btnClear->Name = L"btnClear";
            this->btnClear->Size = System::Drawing::Size(127, 92);
            this->btnClear->TabIndex = 16;
            this->btnClear->Text = L"C";
            this->btnClear->UseVisualStyleBackColor = false;
            // 
            // btn2
            // 
            this->btn2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btn2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
                static_cast<System::Int32>(static_cast<System::Byte>(55)));
            this->btn2->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(91)));
            this->btn2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn2->ForeColor = System::Drawing::Color::White;
            this->btn2->Location = System::Drawing::Point(134, 197);
            this->btn2->Name = L"btn2";
            this->btn2->Size = System::Drawing::Size(125, 91);
            this->btn2->TabIndex = 3;
            this->btn2->Text = L"2";
            this->btn2->UseVisualStyleBackColor = false;
            // 
            // CosBtn
            // 
            this->CosBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->CosBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
                static_cast<System::Int32>(static_cast<System::Byte>(55)));
            this->CosBtn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(91)));
            this->CosBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->CosBtn->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->CosBtn->ForeColor = System::Drawing::Color::White;
            this->CosBtn->Location = System::Drawing::Point(527, 100);
            this->CosBtn->Name = L"CosBtn";
            this->CosBtn->Size = System::Drawing::Size(125, 91);
            this->CosBtn->TabIndex = 18;
            this->CosBtn->Text = L"Cos";
            this->CosBtn->UseVisualStyleBackColor = false;
            // 
            // btn3
            // 
            this->btn3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btn3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
                static_cast<System::Int32>(static_cast<System::Byte>(55)));
            this->btn3->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(91)));
            this->btn3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn3->ForeColor = System::Drawing::Color::White;
            this->btn3->Location = System::Drawing::Point(265, 197);
            this->btn3->Name = L"btn3";
            this->btn3->Size = System::Drawing::Size(125, 91);
            this->btn3->TabIndex = 4;
            this->btn3->Text = L"3";
            this->btn3->UseVisualStyleBackColor = false;
            // 
            // btn5
            // 
            this->btn5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btn5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
                static_cast<System::Int32>(static_cast<System::Byte>(55)));
            this->btn5->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(91)));
            this->btn5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn5->ForeColor = System::Drawing::Color::White;
            this->btn5->Location = System::Drawing::Point(134, 100);
            this->btn5->Name = L"btn5";
            this->btn5->Size = System::Drawing::Size(125, 91);
            this->btn5->TabIndex = 6;
            this->btn5->Text = L"5";
            this->btn5->UseVisualStyleBackColor = false;
            // 
            // SinBtn
            // 
            this->SinBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->SinBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
                static_cast<System::Int32>(static_cast<System::Byte>(55)));
            this->SinBtn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(91)));
            this->SinBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->SinBtn->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->SinBtn->ForeColor = System::Drawing::Color::White;
            this->SinBtn->Location = System::Drawing::Point(527, 3);
            this->SinBtn->Name = L"SinBtn";
            this->SinBtn->Size = System::Drawing::Size(125, 91);
            this->SinBtn->TabIndex = 17;
            this->SinBtn->Text = L"Sin";
            this->SinBtn->UseVisualStyleBackColor = false;
            // 
            // akarBtn
            // 
            this->akarBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->akarBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
                static_cast<System::Int32>(static_cast<System::Byte>(55)));
            this->akarBtn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(91)));
            this->akarBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->akarBtn->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->akarBtn->ForeColor = System::Drawing::Color::White;
            this->akarBtn->Location = System::Drawing::Point(527, 294);
            this->akarBtn->Name = L"akarBtn";
            this->akarBtn->Size = System::Drawing::Size(125, 92);
            this->akarBtn->TabIndex = 20;
            this->akarBtn->Text = L"√";
            this->akarBtn->UseVisualStyleBackColor = false;
            // 
            // btn8
            // 
            this->btn8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btn8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
                static_cast<System::Int32>(static_cast<System::Byte>(55)));
            this->btn8->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(91)));
            this->btn8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn8->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn8->ForeColor = System::Drawing::Color::White;
            this->btn8->Location = System::Drawing::Point(134, 3);
            this->btn8->Name = L"btn8";
            this->btn8->Size = System::Drawing::Size(125, 91);
            this->btn8->TabIndex = 9;
            this->btn8->Text = L"8";
            this->btn8->UseVisualStyleBackColor = false;
            // 
            // btnPlus
            // 
            this->btnPlus->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btnPlus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
                static_cast<System::Int32>(static_cast<System::Byte>(55)));
            this->btnPlus->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(91)));
            this->btnPlus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnPlus->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnPlus->ForeColor = System::Drawing::Color::White;
            this->btnPlus->Location = System::Drawing::Point(396, 3);
            this->btnPlus->Name = L"btnPlus";
            this->btnPlus->Size = System::Drawing::Size(125, 91);
            this->btnPlus->TabIndex = 11;
            this->btnPlus->Text = L"+";
            this->btnPlus->UseVisualStyleBackColor = false;
            // 
            // btnEqual
            // 
            this->btnEqual->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btnEqual->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
                static_cast<System::Int32>(static_cast<System::Byte>(55)));
            this->btnEqual->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(91)));
            this->btnEqual->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnEqual->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnEqual->ForeColor = System::Drawing::Color::White;
            this->btnEqual->Location = System::Drawing::Point(265, 294);
            this->btnEqual->Name = L"btnEqual";
            this->btnEqual->Size = System::Drawing::Size(125, 92);
            this->btnEqual->TabIndex = 15;
            this->btnEqual->Text = L"=";
            this->btnEqual->UseVisualStyleBackColor = false;
            // 
            // btn6
            // 
            this->btn6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btn6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
                static_cast<System::Int32>(static_cast<System::Byte>(55)));
            this->btn6->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(91)));
            this->btn6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn6->ForeColor = System::Drawing::Color::White;
            this->btn6->Location = System::Drawing::Point(265, 100);
            this->btn6->Name = L"btn6";
            this->btn6->Size = System::Drawing::Size(125, 91);
            this->btn6->TabIndex = 7;
            this->btn6->Text = L"6";
            this->btn6->UseVisualStyleBackColor = false;
            // 
            // btnMinus
            // 
            this->btnMinus->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btnMinus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
                static_cast<System::Int32>(static_cast<System::Byte>(55)));
            this->btnMinus->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(91)));
            this->btnMinus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnMinus->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnMinus->ForeColor = System::Drawing::Color::White;
            this->btnMinus->Location = System::Drawing::Point(396, 100);
            this->btnMinus->Name = L"btnMinus";
            this->btnMinus->Size = System::Drawing::Size(125, 91);
            this->btnMinus->TabIndex = 12;
            this->btnMinus->Text = L"-";
            this->btnMinus->UseVisualStyleBackColor = false;
            // 
            // btnMultiply
            // 
            this->btnMultiply->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btnMultiply->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
                static_cast<System::Int32>(static_cast<System::Byte>(55)));
            this->btnMultiply->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(91)));
            this->btnMultiply->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnMultiply->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnMultiply->ForeColor = System::Drawing::Color::White;
            this->btnMultiply->Location = System::Drawing::Point(396, 197);
            this->btnMultiply->Name = L"btnMultiply";
            this->btnMultiply->Size = System::Drawing::Size(125, 91);
            this->btnMultiply->TabIndex = 13;
            this->btnMultiply->Text = L"*";
            this->btnMultiply->UseVisualStyleBackColor = false;
            // 
            // btnDivide
            // 
            this->btnDivide->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btnDivide->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
                static_cast<System::Int32>(static_cast<System::Byte>(55)));
            this->btnDivide->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(91)));
            this->btnDivide->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnDivide->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnDivide->ForeColor = System::Drawing::Color::White;
            this->btnDivide->Location = System::Drawing::Point(396, 294);
            this->btnDivide->Name = L"btnDivide";
            this->btnDivide->Size = System::Drawing::Size(125, 92);
            this->btnDivide->TabIndex = 14;
            this->btnDivide->Text = L"/";
            this->btnDivide->UseVisualStyleBackColor = false;
            // 
            // btn9
            // 
            this->btn9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btn9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
                static_cast<System::Int32>(static_cast<System::Byte>(55)));
            this->btn9->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(136)), static_cast<System::Int32>(static_cast<System::Byte>(91)));
            this->btn9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn9->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn9->ForeColor = System::Drawing::Color::White;
            this->btn9->Location = System::Drawing::Point(265, 3);
            this->btn9->Name = L"btn9";
            this->btn9->Size = System::Drawing::Size(125, 91);
            this->btn9->TabIndex = 10;
            this->btn9->Text = L"9";
            this->btn9->UseVisualStyleBackColor = false;
            // 
            // menuContainer
            // 
            this->menuContainer->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
                static_cast<System::Int32>(static_cast<System::Byte>(29)));
            this->menuContainer->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
            this->menuContainer->Controls->Add(this->panel4);
            this->menuContainer->Controls->Add(this->panel3);
            this->menuContainer->Dock = System::Windows::Forms::DockStyle::Left;
            this->menuContainer->Location = System::Drawing::Point(0, 43);
            this->menuContainer->Name = L"menuContainer";
            this->menuContainer->Size = System::Drawing::Size(0, 595);
            this->menuContainer->TabIndex = 29;
            // 
            // panel4
            // 
            this->panel4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
            this->panel4->Controls->Add(this->menuKalkulator);
            this->panel4->Location = System::Drawing::Point(3, 3);
            this->panel4->Name = L"panel4";
            this->panel4->Size = System::Drawing::Size(282, 89);
            this->panel4->TabIndex = 33;
            // 
            // menuKalkulator
            // 
            this->menuKalkulator->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
            this->menuKalkulator->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(101)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->menuKalkulator->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->menuKalkulator->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->menuKalkulator->ForeColor = System::Drawing::Color::White;
            this->menuKalkulator->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
            this->menuKalkulator->Location = System::Drawing::Point(0, 1);
            this->menuKalkulator->MaximumSize = System::Drawing::Size(343, 89);
            this->menuKalkulator->Name = L"menuKalkulator";
            this->menuKalkulator->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
            this->menuKalkulator->Size = System::Drawing::Size(282, 89);
            this->menuKalkulator->TabIndex = 30;
            this->menuKalkulator->Text = L"Kalkulator";
            this->menuKalkulator->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            this->menuKalkulator->UseVisualStyleBackColor = false;
            // 
            // panel3
            // 
            this->panel3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
            this->panel3->Controls->Add(this->menuKonversi);
            this->panel3->Location = System::Drawing::Point(3, 98);
            this->panel3->Name = L"panel3";
            this->panel3->Size = System::Drawing::Size(282, 89);
            this->panel3->TabIndex = 32;
            // 
            // menuKonversi
            // 
            this->menuKonversi->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
            this->menuKonversi->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(101)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->menuKonversi->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->menuKonversi->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->menuKonversi->ForeColor = System::Drawing::Color::White;
            this->menuKonversi->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
            this->menuKonversi->Location = System::Drawing::Point(0, 3);
            this->menuKonversi->MaximumSize = System::Drawing::Size(343, 89);
            this->menuKonversi->Name = L"menuKonversi";
            this->menuKonversi->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
            this->menuKonversi->Size = System::Drawing::Size(282, 89);
            this->menuKonversi->TabIndex = 30;
            this->menuKonversi->Text = L"Konversi panjang";
            this->menuKonversi->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
            this->menuKonversi->UseVisualStyleBackColor = false;
            this->menuKonversi->Click += gcnew System::EventHandler(this, &Main::menuKonversi_Click);
            // 
            // panel1
            // 
            this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
                static_cast<System::Int32>(static_cast<System::Byte>(29)));
            this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
            this->panel1->Controls->Add(this->menuContainer);
            this->panel1->Controls->Add(this->tableLayoutPanel1);
            this->panel1->Controls->Add(this->displayBox);
            this->panel1->Controls->Add(this->panel2);
            this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
            this->panel1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->panel1->Location = System::Drawing::Point(0, 0);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(812, 642);
            this->panel1->TabIndex = 19;
            // 
            // Main
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(812, 642);
            this->Controls->Add(this->panel1);
            this->Name = L"Main";
            this->Text = L"Kalkulator";
            this->panel2->ResumeLayout(false);
            this->panel2->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            this->tableLayoutPanel1->ResumeLayout(false);
            this->menuContainer->ResumeLayout(false);
            this->panel4->ResumeLayout(false);
            this->panel3->ResumeLayout(false);
            this->panel1->ResumeLayout(false);
            this->panel1->PerformLayout();
            this->ResumeLayout(false);

        }
#pragma endregion
    private: System::Void Main_Load(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
    }


    private: System::Void numberButton_Click(System::Object^ sender, System::EventArgs^ e) {
        Button^ button = safe_cast<Button^>(sender);
        if (displayBox->Text == "Error" || displayBox->Text == "Invalid Input" || displayBox->Text == "Input string was not in a correct format.")
        {
            displayBox->Text = "";
        }
        displayBox->Text += button->Text;   // Menambahkan angka ke displayBox
    }


private: System::Void operationButton_Click(System::Object^ sender, System::EventArgs^ e) {
    Button^ button = safe_cast<Button^>(sender);
    if (displayBox->Text == "Error" || displayBox->Text == "Invalid Input" || displayBox->Text == "Input string was not in a correct format.")
    {
        displayBox->Text = "";
    }
    firstchar = displayBox->Text;
    operation = button->Text; // Simpan operasi
    displayBox->Text += " " + operation + " "; // Tampilkan operasi di displayBox
}

private: System::Void Trigonometri_Click(System::Object^ sender, System::EventArgs^ e) {
    if (displayBox->Text == "Error" || displayBox->Text == "Invalid Input" || displayBox->Text == "Input string was not in a correct format.")
    {
        displayBox->Text = "";
    }
    Button^ button = safe_cast<Button^>(sender);
    trigonometri = button->Text; // Simpan Trigonometri ke dalam variav
    displayBox->Text += trigonometri + " "; // Tampilkan operasi di displayBox

}
private: System::Void Point_Click(System::Object^ sender, System::EventArgs^ e) {
    if (displayBox->Text == "Error" || displayBox->Text == "Invalid Input" || displayBox->Text == "Input string was not in a correct format.")
    {
        displayBox->Text = "";
    }
    Button^ button = safe_cast<Button^>(sender);
    koma = button->Text; // Simpan Trigonometri ke dalam variav
    displayBox->Text += koma; // Tampilkan operasi di displayBox

}
private: System::Void Percent_Click(System::Object^ sender, System::EventArgs^ e) {
    if (displayBox->Text == "Error" || displayBox->Text == "Invalid Input" || displayBox->Text == "Input string was not in a correct format.")
    {
        displayBox->Text = "";
    }
    Button^ button = safe_cast<Button^>(sender);
    Persen = button->Text; // Simpan Trigonometri ke dalam variav
    displayBox->Text += " "+ Persen; // Tampilkan operasi di displayBox

}
private: System::Void Pangkat_Click(System::Object^ sender, System::EventArgs^ e) {
    if (displayBox->Text == "Error" || displayBox->Text == "Invalid Input" || displayBox->Text == "Input string was not in a correct format.")
    {
        displayBox->Text = "";
    }
    Button^ button = safe_cast<Button^>(sender);
    Pangkat = button->Text; // Simpan Trigonometri ke dalam variav
    displayBox->Text += " " + Pangkat+ " "  ; // Tampilkan operasi di displayBox

}
private: System::Void Akar_Click(System::Object^ sender, System::EventArgs^ e) {
    if (displayBox->Text == "Error" || displayBox->Text == "Invalid Input" || displayBox->Text == "Input string was not in a correct format.")
    {
        displayBox->Text = "";
    }
    Button^ button = safe_cast<Button^>(sender);
    Akar = button->Text; // Simpan Trigonometri ke dalam variav
    displayBox->Text += Akar + " "; // Tampilkan operasi di displayBox

}

private: System::Void equalButton_Click(System::Object^ sender, System::EventArgs^ e) {
    //Ambil dan pisahkan angka dan operasi dengan spasi (' ') dan menyimpannya sebagai array 
    array<String^>^ parts = displayBox->Text->Split(' ');
    bool apakahTrigonometri = false;
    bool persen = false;
    bool akar = false;
    bool pangkat = false;
    bool operasiBiasa = false;

    for each (String ^ bagian in parts) {
        if (bagian == "Sin" || bagian == "Cos" || bagian == "Tan" || bagian == "Inv") {
            apakahTrigonometri = true;
            break; // Tidak perlu lanjutkan jika sudah ditemukan
        }
        else if (bagian == "+" || bagian == "-" || bagian == "*" || bagian == "/") {
            operasiBiasa = true;
            break;
        }
        else if (bagian == "%") {
            persen = true;
            break;
        }
        else if (bagian == "^") {
            pangkat = true;
            break;
        }
        else if (bagian == gcnew System::String(L"\u221A")) { //gcnew System::String(L"\u221A") adalah untuk simbol "√"
            akar = true;
            break;
        }
    }

    if (apakahTrigonometri) {
        if (parts[0] == "Tan" || parts[0] == "Cos" || parts[0] == "Sin") {
            if (parts->Length == 2 && parts[1] != "") {

                double radian = Double::Parse(parts[1]) * M_PI / 180.0; //Rumus radian
                double hasil;

                if (parts[0] == "Sin") hasil = sin(radian);
                else if (parts[0] == "Cos") hasil = cos(radian);
                else if (parts[0] == "Tan") hasil = tan(radian);

                displayBox->Text = hasil.ToString();

                return;
            }
            else {
                displayBox->Text = "Invalid Input";
                return;
            }

        }
        else if (parts[0] == "Inv") {
            if (parts->Length == 3 && parts[2] != "")
            {
                double nilai = Double::Parse(parts[2]);
                double hasil;

                if (nilai >= -1.0 && nilai <= 1.0) {
                    if (parts[0] + parts[1] == "InvSin") hasil = asin(nilai);
                    else if (parts[0] + parts[1] == "InvCos") hasil = acos(nilai);
                    else if (parts[0] + parts[1] == "InvTan") hasil = atan(nilai);

                    double sudut = hasil * (180.0 / M_PI); //Rumus radian
                    displayBox->Text = sudut.ToString();

                    return;
                }
                else {
                    displayBox->Text = "Invalid Input";
                    return;
                }


            }
            else {
                displayBox->Text = "Invalid Input";
                return;
            }
        }

    }
    else if (operasiBiasa) {
        try
        {
            //jika angka kedua tidak ada
            if (parts->Length < 3 || String::IsNullOrWhiteSpace(parts[2])) {
                displayBox->Text = "Error";
                return;
            }

            //jika variabel yang di hitung lebih dari 2
            if (parts->Length > 3 && parts[0] != "") {

                double result = 0;
                int arrayLength = parts->Length;
                Generic::List<System::String^>^ parts2 = gcnew Generic::List<System::String^>();

                // Langkah 1: Proses perkalian (*) dan pembagian (/)
                for (size_t i = 0; i < arrayLength; i++) {
                    System::String^ part = parts[i];

                    if (part == "*") {
                        double kiri = Double::Parse(parts2[parts2->Count - 1]);
                        double kanan = Double::Parse(parts[++i]);
                        parts2[parts2->Count - 1] = (kiri * kanan).ToString();
                    }
                    else if (part == "/") {
                        double kiri = Double::Parse(parts2[parts2->Count - 1]);
                        double kanan = Double::Parse(parts[++i]);
                        parts2[parts2->Count - 1] = (kiri / kanan).ToString();
                    }
                    else {
                        parts2->Add(part);  // Tambahkan angka atau operator
                    }
                }

                // Langkah 2: Proses penjumlahan (+) dan pengurangann (-)
                result = Double::Parse(parts2[0]); /*mengabil angka pertama dari "parts2"*/
                for (size_t i = 1; i < parts2->Count; i += 2) {
                    System::String^ operation = parts2[i]; /*menyimpan operasi yang di iterasi kedala variabel*/
                    double kanan = Double::Parse(parts2[i + 1]);

                    if (operation == "+") {
                        result += kanan;
                    }
                    else if (operation == "-") {
                        result -= kanan;
                    }
                }

                // Tampilkan hasil di displayBox
                displayBox->Text = result.ToString();
                return;
            }
            //jika angka pertama dalam perhitungan adala - dan variabel nnya lebih dari 2
            else if (parts->Length > 5 && parts[1] == "-" && parts[0] == "") {
                double result = 0;
                int arrayLength = parts->Length;


                Generic::List<System::String^>^ parts2 = gcnew Generic::List<System::String^>();

                // Langkah 1: Proses perkalian (*) dan pembagian (/)
                for (size_t i = 1; i < arrayLength; i++) {
                    System::String^ part = parts[i];

                    if (part == "*") {
                        double kiri = Double::Parse(parts2[parts2->Count - 1]);
                        double kanan = Double::Parse(parts[++i]);
                        parts2[parts2->Count - 1] = (kiri * kanan).ToString();
                    }
                    else if (part == "/") {
                        double kiri = Double::Parse(parts2[parts2->Count - 1]);
                        double kanan = Double::Parse(parts[++i]);
                        parts2[parts2->Count - 1] = (kiri / kanan).ToString();
                    }
                    else {
                        parts2->Add(part);  // Tambahkan angka atau operator
                    }
                }

                // Langkah 2: Proses penjumlahan (+) dan pengurangan (-)

                result = Double::Parse(parts2[0] + parts2[1]);
                for (size_t i = 2; i < parts2->Count; i += 2) {
                    System::String^ operatorPart = parts2[i];
                    double kanan = Double::Parse(parts2[i + 1]);

                    if (operatorPart == "+") {
                        result += kanan;
                    }
                    else if (operatorPart == "-") {
                        result -= kanan;
                    }
                }

                // Tampilkan hasil di displayBox
                displayBox->Text = result.ToString();
                return;
            }



            if (parts[0] == "" && parts[1] == "-") {

                //untuk mendapatkan variabel pertama untuk di kalkulasi, jika angka pertama adalah minus
                parts[0] = parts[1] + parts[2];
                int arrayLength = parts->Length;
                if (arrayLength <= 3) {
                    displayBox->Text = parts[0];
                }
                else {
                    firstnumber = Double::Parse(parts[0]);
                    operation = parts[3];
                    secondnumber = Double::Parse(parts[4]);

                }


            }
            else if (parts[0] != "") {
                firstnumber = Double::Parse(parts[0]);
                operation = parts[1];
                secondnumber = Double::Parse(parts[2]);
            }
            else {
                displayBox->Text = "Error";
            }


            //error handling


            double result;
            if (operation == "+") {
                result = firstnumber + secondnumber;
            }
            else if (operation == "-") {
                result = firstnumber - secondnumber;
            }
            else if (operation == "*") {
                result = firstnumber * secondnumber;
            }
            else if (operation == "/") {
                if (secondnumber != 0) {
                    result = firstnumber / secondnumber;
                }
                else {
                    displayBox->Text = "Error";
                    return;
                }
            }

            displayBox->Text = result.ToString(); // Tampilkan hasil


        }
        catch (Exception^ ex)
        {
            displayBox->Text = ex->Message; // Tampilkan hasil
            return;
        }


    }
    else if (persen) {
        try
        {
            if (parts[1] == "%" && parts[0] != "" && parts->Length <= 2) {
                double nilai = Double::Parse(parts[0]);
                double hasil = nilai / 100;
                displayBox->Text = hasil.ToString();
                return;
            }
            else {
                displayBox->Text = "Invalid Input";

                return;

            }
        }
        catch (Exception^ ex)
        {
            displayBox->Text = ex->Message; // Tampilkan hasil
            return;
        }

    }
    else if (pangkat) {
        try
        {
            if ((parts[0] != "" && parts[2] != "") && parts[1] == "^" && parts->Length <= 3) {
                double nilai1 = Double::Parse(parts[0]);
                double nilai2 = Double::Parse(parts[2]);
                double hasil = pow(nilai1, nilai2);
                displayBox->Text = hasil.ToString();
                return;
            }
            else {
                displayBox->Text = "Invalid Input";
                return;

            }
        }
        catch (Exception^ ex)
        {
            displayBox->Text = ex->Message; // Tampilkan hasil
            return;
        }

    }
    else if (akar) {
        try
        {
            if (parts[0] == L"√" && parts[1] != "" && parts->Length <= 2) {
                double nilai = Double::Parse(parts[1]);
                double hasil = sqrt(nilai);
                displayBox->Text = hasil.ToString();
                return;
            }
            else {
                displayBox->Text = "Invalid Input";
                return;

            }
        }
        catch (Exception^ ex)
        {
            displayBox->Text = ex->Message; // Tampilkan hasil
            return;
        }
    }

}









private: System::Void clearButton_Click(System::Object^ sender, System::EventArgs^ e) {
    displayBox->Clear(); // Bersihkan displayBox
    firstnumber = 0;
    secondnumber = 0;
    operation = "";
}

 bool menuExpand = false;

private: System::Void MenuTransition_Tick_1(System::Object^ sender, System::EventArgs^ e) {
    if (menuExpand == false) {
        menuContainer->Width += 10;
        if (menuContainer->Width >= 192) {
            MenuTransition->Stop();
            menuExpand = true;
        }
    }
    else {
        menuContainer->Width -= 10;
        if (menuContainer->Width <= 0) {
            MenuTransition->Stop();
            menuExpand = false;
        }
    }
}
    private: System::Void pictureBox1_Click_1(System::Object^ sender, System::EventArgs^ e) {
        MenuTransition->Start();

    }
    private:
        void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
            this->pictureBox1->Image = System::Drawing::Image::FromFile("image.png");
        }
    private: System::Void menuKonversi_Click(System::Object^ sender, System::EventArgs^ e);
};
}
