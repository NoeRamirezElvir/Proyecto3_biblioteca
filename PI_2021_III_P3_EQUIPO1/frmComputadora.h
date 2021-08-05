#pragma once
#include "frmSalaComputo.h"
namespace PI2021IIIP3EQUIPO1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmComputadora
	/// </summary>
	public ref class frmComputadora : public System::Windows::Forms::Form
	{
	public:
		frmComputadora(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmComputadora()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblIdComputadora;
	private: System::Windows::Forms::Label^ lblMarca;
	private: System::Windows::Forms::Label^ lblModelo;
	private: System::Windows::Forms::Label^ lblHdd;
	private: System::Windows::Forms::Label^ lblRam;
	private: System::Windows::Forms::Label^ lblTipo;
	private: System::Windows::Forms::Label^ lblOs;
	private: System::Windows::Forms::Label^ lblObservacion;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Button^ btnAgregar;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ btnSala;
	protected:

	protected:





	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmComputadora::typeid));
			this->lblIdComputadora = (gcnew System::Windows::Forms::Label());
			this->lblMarca = (gcnew System::Windows::Forms::Label());
			this->lblModelo = (gcnew System::Windows::Forms::Label());
			this->lblHdd = (gcnew System::Windows::Forms::Label());
			this->lblRam = (gcnew System::Windows::Forms::Label());
			this->lblTipo = (gcnew System::Windows::Forms::Label());
			this->lblOs = (gcnew System::Windows::Forms::Label());
			this->lblObservacion = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->btnAgregar = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btnSala = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// lblIdComputadora
			// 
			this->lblIdComputadora->AutoSize = true;
			this->lblIdComputadora->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblIdComputadora->Location = System::Drawing::Point(93, 40);
			this->lblIdComputadora->Name = L"lblIdComputadora";
			this->lblIdComputadora->Size = System::Drawing::Size(115, 15);
			this->lblIdComputadora->TabIndex = 0;
			this->lblIdComputadora->Text = L"ID Computadora:";
			// 
			// lblMarca
			// 
			this->lblMarca->AutoSize = true;
			this->lblMarca->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblMarca->Location = System::Drawing::Point(152, 69);
			this->lblMarca->Name = L"lblMarca";
			this->lblMarca->Size = System::Drawing::Size(51, 15);
			this->lblMarca->TabIndex = 1;
			this->lblMarca->Text = L"Marca:";
			// 
			// lblModelo
			// 
			this->lblModelo->AutoSize = true;
			this->lblModelo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblModelo->Location = System::Drawing::Point(149, 99);
			this->lblModelo->Name = L"lblModelo";
			this->lblModelo->Size = System::Drawing::Size(59, 15);
			this->lblModelo->TabIndex = 2;
			this->lblModelo->Text = L"Modelo:";
			// 
			// lblHdd
			// 
			this->lblHdd->AutoSize = true;
			this->lblHdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblHdd->Location = System::Drawing::Point(167, 130);
			this->lblHdd->Name = L"lblHdd";
			this->lblHdd->Size = System::Drawing::Size(41, 15);
			this->lblHdd->TabIndex = 3;
			this->lblHdd->Text = L"HDD:";
			// 
			// lblRam
			// 
			this->lblRam->AutoSize = true;
			this->lblRam->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblRam->Location = System::Drawing::Point(167, 160);
			this->lblRam->Name = L"lblRam";
			this->lblRam->Size = System::Drawing::Size(41, 15);
			this->lblRam->TabIndex = 4;
			this->lblRam->Text = L"Ram:";
			// 
			// lblTipo
			// 
			this->lblTipo->AutoSize = true;
			this->lblTipo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTipo->Location = System::Drawing::Point(169, 191);
			this->lblTipo->Name = L"lblTipo";
			this->lblTipo->Size = System::Drawing::Size(39, 15);
			this->lblTipo->TabIndex = 5;
			this->lblTipo->Text = L"Tipo:";
			// 
			// lblOs
			// 
			this->lblOs->AutoSize = true;
			this->lblOs->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblOs->Location = System::Drawing::Point(80, 222);
			this->lblOs->Name = L"lblOs";
			this->lblOs->Size = System::Drawing::Size(128, 15);
			this->lblOs->TabIndex = 6;
			this->lblOs->Text = L"Sistema Operativo:";
			// 
			// lblObservacion
			// 
			this->lblObservacion->AutoSize = true;
			this->lblObservacion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblObservacion->Location = System::Drawing::Point(118, 254);
			this->lblObservacion->Name = L"lblObservacion";
			this->lblObservacion->Size = System::Drawing::Size(90, 15);
			this->lblObservacion->TabIndex = 7;
			this->lblObservacion->Text = L"Observacion:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(214, 39);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(124, 20);
			this->textBox1->TabIndex = 8;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(214, 68);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(124, 20);
			this->textBox2->TabIndex = 9;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(214, 98);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(124, 20);
			this->textBox3->TabIndex = 10;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(214, 129);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(124, 20);
			this->textBox4->TabIndex = 11;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(214, 159);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(124, 20);
			this->textBox5->TabIndex = 12;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(214, 249);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(124, 20);
			this->textBox6->TabIndex = 13;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Desktop", L"Laptop" });
			this->comboBox1->Location = System::Drawing::Point(214, 185);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(124, 21);
			this->comboBox1->TabIndex = 14;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Windows 7", L"Windows 8", L"Windows 8.1", L"Windows 10",
					L"Windows 11"
			});
			this->comboBox2->Location = System::Drawing::Point(214, 222);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(124, 21);
			this->comboBox2->TabIndex = 15;
			// 
			// btnAgregar
			// 
			this->btnAgregar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAgregar->Location = System::Drawing::Point(229, 293);
			this->btnAgregar->Name = L"btnAgregar";
			this->btnAgregar->Size = System::Drawing::Size(93, 42);
			this->btnAgregar->TabIndex = 16;
			this->btnAgregar->Text = L"Agregar";
			this->btnAgregar->UseVisualStyleBackColor = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(425, 75);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(135, 131);
			this->pictureBox1->TabIndex = 17;
			this->pictureBox1->TabStop = false;
			// 
			// btnSala
			// 
			this->btnSala->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSala->Location = System::Drawing::Point(398, 293);
			this->btnSala->Name = L"btnSala";
			this->btnSala->Size = System::Drawing::Size(92, 42);
			this->btnSala->TabIndex = 18;
			this->btnSala->Text = L"Ir a Sala de Computo";
			this->btnSala->UseVisualStyleBackColor = true;
			this->btnSala->Click += gcnew System::EventHandler(this, &frmComputadora::btnSala_Click);
			// 
			// frmComputadora
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkCyan;
			this->ClientSize = System::Drawing::Size(623, 380);
			this->Controls->Add(this->btnSala);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btnAgregar);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->lblObservacion);
			this->Controls->Add(this->lblOs);
			this->Controls->Add(this->lblTipo);
			this->Controls->Add(this->lblRam);
			this->Controls->Add(this->lblHdd);
			this->Controls->Add(this->lblModelo);
			this->Controls->Add(this->lblMarca);
			this->Controls->Add(this->lblIdComputadora);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"frmComputadora";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Computadora";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void btnSala_Click(System::Object^ sender, System::EventArgs^ e) {
	frmSalaComputo^ formulario = gcnew frmSalaComputo;
	formulario->Show();
}
};
}
