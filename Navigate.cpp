#include "pch.h"
#include "Kalkulator_Lengkap_1.h"
#include "Konversi_Jarak1.h"

namespace KalkulatorLengkap {
	System::Void Main::menuKonversi_Click(System::Object^ sender, System::EventArgs^ e) {
		Konversi_Jarak^ konversiMenu = gcnew Konversi_Jarak();
		konversiMenu ->Show();
		this->Hide();
	}

	System::Void Konversi_Jarak::menuKalkulator_Click(System::Object^ sender, System::EventArgs^ e) {
		Main^ kalkulatorLengkap = gcnew Main();
		kalkulatorLengkap->Show();
		this->Hide();
	}

}