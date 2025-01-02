#pragma once

namespace KalkulatorLengkap {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for Konversi_Jarak
	/// </summary>
	public ref class Konversi_Jarak : public System::Windows::Forms::Form
	{
	public:
		Konversi_Jarak(void)
		{
			InitializeComponent();
			InisialisasiKonverter();
			//
			//TODO: Add the constructor code here
			//
			this->Load += gcnew System::EventHandler(this, &Konversi_Jarak::MyForm_Load);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Konversi_Jarak()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		/// 		
		System::Windows::Forms::TextBox^ txtInput;
		System::Windows::Forms::ComboBox^ cmbDari;
		System::Windows::Forms::ComboBox^ cmbKe;
		System::Windows::Forms::Label^ lblHasil;
		System::Windows::Forms::Label^ lblDari;
		System::Windows::Forms::Label^ lblKe;
		Dictionary<String^, double>^ faktorKonversi;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::FlowLayoutPanel^ menuContainer;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Button^ menuKalkulator;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ menuKonversi;
	private: System::Windows::Forms::Timer^ MenuTransition;







	private: System::ComponentModel::IContainer^ components;


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>



		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->txtInput = (gcnew System::Windows::Forms::TextBox());
			this->cmbDari = (gcnew System::Windows::Forms::ComboBox());
			this->cmbKe = (gcnew System::Windows::Forms::ComboBox());
			this->lblHasil = (gcnew System::Windows::Forms::Label());
			this->lblDari = (gcnew System::Windows::Forms::Label());
			this->lblKe = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->menuContainer = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->menuKalkulator = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->menuKonversi = (gcnew System::Windows::Forms::Button());
			this->MenuTransition = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			this->menuContainer->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// txtInput
			// 
			this->txtInput->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtInput->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12));
			this->txtInput->Location = System::Drawing::Point(16, 51);
			this->txtInput->Name = L"txtInput";
			this->txtInput->Size = System::Drawing::Size(784, 39);
			this->txtInput->TabIndex = 0;
			this->txtInput->TextChanged += gcnew System::EventHandler(this, &Konversi_Jarak::OnTextChanged);
			// 
			// cmbDari
			// 
			this->cmbDari->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cmbDari->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12));
			this->cmbDari->Location = System::Drawing::Point(84, 111);
			this->cmbDari->Name = L"cmbDari";
			this->cmbDari->Size = System::Drawing::Size(109, 39);
			this->cmbDari->TabIndex = 1;
			this->cmbDari->SelectedIndexChanged += gcnew System::EventHandler(this, &Konversi_Jarak::OnSelectionChanged);
			// 
			// cmbKe
			// 
			this->cmbKe->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cmbKe->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12));
			this->cmbKe->Location = System::Drawing::Point(84, 164);
			this->cmbKe->Name = L"cmbKe";
			this->cmbKe->Size = System::Drawing::Size(109, 39);
			this->cmbKe->TabIndex = 2;
			this->cmbKe->SelectedIndexChanged += gcnew System::EventHandler(this, &Konversi_Jarak::OnSelectionChanged);
			// 
			// lblHasil
			// 
			this->lblHasil->AutoSize = true;
			this->lblHasil->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12));
			this->lblHasil->Location = System::Drawing::Point(12, 221);
			this->lblHasil->Name = L"lblHasil";
			this->lblHasil->Size = System::Drawing::Size(82, 31);
			this->lblHasil->TabIndex = 3;
			this->lblHasil->Text = L"Hasil: ";
			// 
			// lblDari
			// 
			this->lblDari->AutoSize = true;
			this->lblDari->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12));
			this->lblDari->Location = System::Drawing::Point(12, 111);
			this->lblDari->Name = L"lblDari";
			this->lblDari->Size = System::Drawing::Size(66, 31);
			this->lblDari->TabIndex = 4;
			this->lblDari->Text = L"Dari:";
			// 
			// lblKe
			// 
			this->lblKe->AutoSize = true;
			this->lblKe->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12));
			this->lblKe->Location = System::Drawing::Point(12, 172);
			this->lblKe->Name = L"lblKe";
			this->lblKe->Size = System::Drawing::Size(49, 31);
			this->lblKe->TabIndex = 5;
			this->lblKe->Text = L"Ke:";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(10, 7);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(37, 33);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 30;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Konversi_Jarak::pictureBox1_Click_1);
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
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(812, 43);
			this->panel2->TabIndex = 29;
			// 
			// menuContainer
			// 
			this->menuContainer->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->menuContainer->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->menuContainer->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->menuContainer->Controls->Add(this->panel4);
			this->menuContainer->Controls->Add(this->panel3);
			this->menuContainer->Location = System::Drawing::Point(-20, 43);
			this->menuContainer->Name = L"menuContainer";
			this->menuContainer->Size = System::Drawing::Size(0, 595);
			this->menuContainer->TabIndex = 30;
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
			this->menuKalkulator->Click += gcnew System::EventHandler(this, &Konversi_Jarak::menuKalkulator_Click);
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
			// 
			// MenuTransition
			// 
			this->MenuTransition->Interval = 10;
			this->MenuTransition->Tick += gcnew System::EventHandler(this, &Konversi_Jarak::MenuTransition_Tick);
			// 
			// Konversi_Jarak
			// 
			this->ClientSize = System::Drawing::Size(812, 642);
			this->Controls->Add(this->menuContainer);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->txtInput);
			this->Controls->Add(this->cmbDari);
			this->Controls->Add(this->cmbKe);
			this->Controls->Add(this->lblHasil);
			this->Controls->Add(this->lblDari);
			this->Controls->Add(this->lblKe);
			this->Name = L"Konversi_Jarak";
			this->Text = L"Kalkulator Konversi Satuan";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->menuContainer->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		void InisialisasiKonverter()
		{
			faktorKonversi = gcnew Dictionary<String^, double>();

			// Inisialisasi faktor konversi (relatif terhadap meter)
			faktorKonversi->Add("Meter", 1.0);
			faktorKonversi->Add("Kilometer", 0.001);
			faktorKonversi->Add("Centimeter", 100.0);
			faktorKonversi->Add("Millimeter", 1000.0);
			faktorKonversi->Add("Micrometer", 1000000.0);
			faktorKonversi->Add("Nanometer", 1000000000.0);
			faktorKonversi->Add("Mile", 0.000621371);
			faktorKonversi->Add("Yard", 1.09361);
			faktorKonversi->Add("Foot", 3.28084);
			faktorKonversi->Add("Inch", 39.3701);
			faktorKonversi->Add("Light Year", 1.057e-16);

			// Tambahkan item ke combo boxes
			for each (String ^ satuan in faktorKonversi->Keys)
			{
				cmbDari->Items->Add(satuan);
				cmbKe->Items->Add(satuan);
			}

			// Set nilai default
			if (cmbDari->Items->Count > 0)
				cmbDari->SelectedIndex = 0;
			if (cmbKe->Items->Count > 0)
				cmbKe->SelectedIndex = 2; // Default ke Centimeter
		}
		void HitungKonversi()
		{
			if (String::IsNullOrEmpty(txtInput->Text) ||
				cmbDari->SelectedItem == nullptr ||
				cmbKe->SelectedItem == nullptr)
				return;

			try {
				double nilai = System::Convert::ToDouble(txtInput->Text);
				String^ dari = safe_cast<String^>(cmbDari->SelectedItem);
				String^ ke = safe_cast<String^>(cmbKe->SelectedItem);

				double hasil = nilai * (faktorKonversi[ke] / faktorKonversi[dari]);

				lblHasil->Text = String::Format("Hasil: {0} {1} = {2} {3}",
					nilai.ToString("0.##"), dari, hasil.ToString("0.##"), ke);
			}
			catch (FormatException^) {
				lblHasil->Text = "Hasil: Masukkan angka yang valid";
			}
			catch (Exception^) {
				lblHasil->Text = "Hasil: Terjadi kesalahan dalam konversi";
			}
		}
		
#pragma endregion

		void OnTextChanged(System::Object^ sender, System::EventArgs^ e)
		{
			HitungKonversi();
		}

		void OnSelectionChanged(System::Object^ sender, System::EventArgs^ e)
		{
			HitungKonversi();
		}

		bool menuExpand = false;
		private: System::Void MenuTransition_Tick(System::Object^ sender, System::EventArgs^ e) {
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

	private: System::Void menuKalkulator_Click(System::Object^ sender, System::EventArgs^ e);


};
}
