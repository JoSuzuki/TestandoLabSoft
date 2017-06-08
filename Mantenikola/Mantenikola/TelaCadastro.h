#pragma once

#include<string>
#include"ControladorCadastroDeMotor.h"
#include"PopupMotorJaCadastrado.h"
#include <msclr\marshal_cppstd.h>


namespace Mantenikola {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TelaCadastro
	/// </summary>

	public ref class TelaCadastro : public System::Windows::Forms::Form
	{
	public:
		TelaCadastro(void)
		{
			InitializeComponent();
			
		}


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~TelaCadastro()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  botãoRetornar;
	private: System::Windows::Forms::ComboBox^  cbModelo;
	private: System::Windows::Forms::Button^  botãoCadastrar;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::ComboBox^  cbProprietario;

	private: System::Windows::Forms::TextBox^  textoNumeroDeSerie;
	private: System::Windows::Forms::TextBox^  textoDataDeEntrada;


	private: System::Windows::Forms::Label^  labelMantenikola;
	private: System::Windows::Forms::Label^  labelErroNSerie;
	private: System::Windows::Forms::Label^  labelErroDataEntrada;
	private: System::Windows::Forms::Label^  labelErroModelo;
	private: System::Windows::Forms::Label^  labelErroProprietario;
	private: System::Windows::Forms::Label^  labelMotorCadastrado;





	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->botãoRetornar = (gcnew System::Windows::Forms::Button());
			this->cbModelo = (gcnew System::Windows::Forms::ComboBox());
			this->botãoCadastrar = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->cbProprietario = (gcnew System::Windows::Forms::ComboBox());
			this->textoNumeroDeSerie = (gcnew System::Windows::Forms::TextBox());
			this->textoDataDeEntrada = (gcnew System::Windows::Forms::TextBox());
			this->labelMantenikola = (gcnew System::Windows::Forms::Label());
			this->labelErroNSerie = (gcnew System::Windows::Forms::Label());
			this->labelErroDataEntrada = (gcnew System::Windows::Forms::Label());
			this->labelErroModelo = (gcnew System::Windows::Forms::Label());
			this->labelErroProprietario = (gcnew System::Windows::Forms::Label());
			this->labelMotorCadastrado = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// botãoRetornar
			// 
			this->botãoRetornar->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->botãoRetornar->Location = System::Drawing::Point(348, 266);
			this->botãoRetornar->Name = L"botãoRetornar";
			this->botãoRetornar->Size = System::Drawing::Size(100, 36);
			this->botãoRetornar->TabIndex = 0;
			this->botãoRetornar->Text = L"Cancelar";
			this->botãoRetornar->UseVisualStyleBackColor = true;
			this->botãoRetornar->Click += gcnew System::EventHandler(this, &TelaCadastro::botãoRetornar_Click);
			// 
			// cbModelo
			// 
			this->cbModelo->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->cbModelo->FormattingEnabled = true;
			this->cbModelo->Location = System::Drawing::Point(214, 176);
			this->cbModelo->Name = L"cbModelo";
			this->cbModelo->Size = System::Drawing::Size(121, 21);
			this->cbModelo->TabIndex = 1;
			// 
			// botãoCadastrar
			// 
			this->botãoCadastrar->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->botãoCadastrar->Location = System::Drawing::Point(67, 266);
			this->botãoCadastrar->Name = L"botãoCadastrar";
			this->botãoCadastrar->Size = System::Drawing::Size(100, 36);
			this->botãoCadastrar->TabIndex = 2;
			this->botãoCadastrar->Text = L"Cadastrar";
			this->botãoCadastrar->UseVisualStyleBackColor = true;
			this->botãoCadastrar->Click += gcnew System::EventHandler(this, &TelaCadastro::botãoCadastrar_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(214, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(105, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Cadastro de Motores";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(125, 179);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(42, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Modelo";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(101, 145);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(87, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Datat de entrada";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(101, 93);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(84, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Número de série";
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(214, 113);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(121, 13);
			this->label5->TabIndex = 7;
			this->label5->Text = L"(Formato: aaaassnnnnn)";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(125, 227);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(60, 13);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Proprietário";
			// 
			// cbProprietario
			// 
			this->cbProprietario->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->cbProprietario->FormattingEnabled = true;
			this->cbProprietario->Location = System::Drawing::Point(214, 224);
			this->cbProprietario->Name = L"cbProprietario";
			this->cbProprietario->Size = System::Drawing::Size(121, 21);
			this->cbProprietario->TabIndex = 9;
			// 
			// textoNumeroDeSerie
			// 
			this->textoNumeroDeSerie->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textoNumeroDeSerie->Location = System::Drawing::Point(214, 90);
			this->textoNumeroDeSerie->Name = L"textoNumeroDeSerie";
			this->textoNumeroDeSerie->Size = System::Drawing::Size(121, 20);
			this->textoNumeroDeSerie->TabIndex = 10;
			// 
			// textoDataDeEntrada
			// 
			this->textoDataDeEntrada->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textoDataDeEntrada->Location = System::Drawing::Point(214, 145);
			this->textoDataDeEntrada->Name = L"textoDataDeEntrada";
			this->textoDataDeEntrada->Size = System::Drawing::Size(121, 20);
			this->textoDataDeEntrada->TabIndex = 11;
			// 
			// labelMantenikola
			// 
			this->labelMantenikola->AutoSize = true;
			this->labelMantenikola->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->labelMantenikola->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->labelMantenikola->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->labelMantenikola->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelMantenikola->ForeColor = System::Drawing::SystemColors::ControlText;
			this->labelMantenikola->Location = System::Drawing::Point(-1, -2);
			this->labelMantenikola->Name = L"labelMantenikola";
			this->labelMantenikola->Size = System::Drawing::Size(108, 22);
			this->labelMantenikola->TabIndex = 12;
			this->labelMantenikola->Text = L"Mantenikola";
			// 
			// labelErroNSerie
			// 
			this->labelErroNSerie->AutoSize = true;
			this->labelErroNSerie->ForeColor = System::Drawing::Color::Red;
			this->labelErroNSerie->Location = System::Drawing::Point(345, 92);
			this->labelErroNSerie->Name = L"labelErroNSerie";
			this->labelErroNSerie->Size = System::Drawing::Size(0, 13);
			this->labelErroNSerie->TabIndex = 13;
			// 
			// labelErroDataEntrada
			// 
			this->labelErroDataEntrada->AutoSize = true;
			this->labelErroDataEntrada->ForeColor = System::Drawing::Color::Red;
			this->labelErroDataEntrada->Location = System::Drawing::Point(345, 145);
			this->labelErroDataEntrada->Name = L"labelErroDataEntrada";
			this->labelErroDataEntrada->Size = System::Drawing::Size(0, 13);
			this->labelErroDataEntrada->TabIndex = 14;
			// 
			// labelErroModelo
			// 
			this->labelErroModelo->AutoSize = true;
			this->labelErroModelo->ForeColor = System::Drawing::Color::Red;
			this->labelErroModelo->Location = System::Drawing::Point(345, 184);
			this->labelErroModelo->Name = L"labelErroModelo";
			this->labelErroModelo->Size = System::Drawing::Size(0, 13);
			this->labelErroModelo->TabIndex = 15;
			// 
			// labelErroProprietario
			// 
			this->labelErroProprietario->AutoSize = true;
			this->labelErroProprietario->ForeColor = System::Drawing::Color::Red;
			this->labelErroProprietario->Location = System::Drawing::Point(345, 232);
			this->labelErroProprietario->Name = L"labelErroProprietario";
			this->labelErroProprietario->Size = System::Drawing::Size(0, 13);
			this->labelErroProprietario->TabIndex = 16;
			// 
			// labelMotorCadastrado
			// 
			this->labelMotorCadastrado->AutoSize = true;
			this->labelMotorCadastrado->Location = System::Drawing::Point(244, 266);
			this->labelMotorCadastrado->Name = L"labelMotorCadastrado";
			this->labelMotorCadastrado->Size = System::Drawing::Size(0, 13);
			this->labelMotorCadastrado->TabIndex = 17;
			// 
			// TelaCadastro
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(514, 341);
			this->Controls->Add(this->labelMotorCadastrado);
			this->Controls->Add(this->labelErroProprietario);
			this->Controls->Add(this->labelErroModelo);
			this->Controls->Add(this->labelErroDataEntrada);
			this->Controls->Add(this->labelErroNSerie);
			this->Controls->Add(this->labelMantenikola);
			this->Controls->Add(this->textoDataDeEntrada);
			this->Controls->Add(this->textoNumeroDeSerie);
			this->Controls->Add(this->cbProprietario);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->botãoCadastrar);
			this->Controls->Add(this->cbModelo);
			this->Controls->Add(this->botãoRetornar);
			this->Name = L"TelaCadastro";
			this->Text = L"Tela de Cadastro";
			this->Load += gcnew System::EventHandler(this, &TelaCadastro::TelaCadastro_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void botãoRetornar_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	private: System::Void botãoCadastrar_Click(System::Object^  sender, System::EventArgs^  e) {
		int nSerie;
		string data, modelo, proprietario;

		if (String::IsNullOrEmpty(textoNumeroDeSerie->Text)) {
			labelErroNSerie->Text = "Número de Série inválido";
		}
		else {
			try {
				nSerie = int::Parse(textoNumeroDeSerie->Text);
			}
			catch (...) {
				labelErroNSerie->Text = "Número de Série inválido";
			}
		}
		if (String::IsNullOrEmpty(textoDataDeEntrada->Text)) {
			labelErroDataEntrada->Text = "Número de Data de entrada inválida";

		}
		else {
			data = msclr::interop::marshal_as<string>(textoDataDeEntrada->Text);
		}
		if (String::IsNullOrEmpty(cbModelo->Text)) {
			labelErroModelo->Text = "Modelo inválido";

		}
		else {
			modelo = msclr::interop::marshal_as<string>(cbModelo->Text);
		}
		if (String::IsNullOrEmpty(cbProprietario->Text)) {
			labelErroProprietario->Text = "Proprietário inválido";

		}
		else {
			proprietario = msclr::interop::marshal_as<string>(cbProprietario->Text);
		}

		ControladorCadastroDeMotor *controladorCadastro = new ControladorCadastroDeMotor();
		
		if (controladorCadastro->cadastarMotor(nSerie, modelo, data, proprietario)) {
			labelMotorCadastrado->Text = "Motor Cadastrado!";
		}
		else {
			PopupMotorJaCadastrado ^popup = gcnew PopupMotorJaCadastrado();
			popup->ShowDialog();
		
			this->Close();
		}

		
	}
	private: System::Void TelaCadastro_Load(System::Object^  sender, System::EventArgs^  e) {
		ControladorCadastroDeMotor *controladorCadastro = new ControladorCadastroDeMotor();

		controladorCadastro->materializarModelos();
		for (int i = 0; controladorCadastro->getModelos().size(); i++) {
			cbModelo->Items->Add(msclr::interop::marshal_as<System::String^>(controladorCadastro->getModelos()[i]->getNome()));
		}

		controladorCadastro->materializarProprietarios();
		for (int i = 0; controladorCadastro->getProprietarios().size(); i++) {
			cbProprietario->Items->Add(msclr::interop::marshal_as<System::String^>(controladorCadastro->getProprietarios()[i]->getNome()));
		}



	}
};
}
