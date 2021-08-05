#pragma once
#include "frmListaDaños.h";
#include "frmPrestamo.h"

namespace PI2021IIIP3EQUIPO1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmDaño
	/// </summary>
	public ref class frmDaño : public System::Windows::Forms::Form
	{
	public:
		frmDaño(void)
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
		~frmDaño()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblDañoID;
	private: System::Windows::Forms::Label^ lblTitulo;
	protected:

	private: System::Windows::Forms::Label^ lblCostoExtravio;
	private: System::Windows::Forms::Label^ lblTipoDaño;
	private: System::Windows::Forms::Label^ lblCostoDaño;

	private: System::Windows::Forms::TextBox^ txtCostoExtravio;

	private: System::Windows::Forms::TextBox^ txtCostoDaño;











	private: System::Windows::Forms::ComboBox^ cboTipoDaño;
	private: System::Windows::Forms::Button^ btnAgregar;
	private: System::Windows::Forms::Button^ btnMostrar;
	private: System::Windows::Forms::TextBox^ txtID;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;





	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmDaño::typeid));
			this->lblDañoID = (gcnew System::Windows::Forms::Label());
			this->lblTitulo = (gcnew System::Windows::Forms::Label());
			this->lblCostoExtravio = (gcnew System::Windows::Forms::Label());
			this->lblTipoDaño = (gcnew System::Windows::Forms::Label());
			this->lblCostoDaño = (gcnew System::Windows::Forms::Label());
			this->txtCostoExtravio = (gcnew System::Windows::Forms::TextBox());
			this->txtCostoDaño = (gcnew System::Windows::Forms::TextBox());
			this->cboTipoDaño = (gcnew System::Windows::Forms::ComboBox());
			this->btnAgregar = (gcnew System::Windows::Forms::Button());
			this->btnMostrar = (gcnew System::Windows::Forms::Button());
			this->txtID = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// lblDañoID
			// 
			this->lblDañoID->AutoSize = true;
			this->lblDañoID->Location = System::Drawing::Point(221, 132);
			this->lblDañoID->Name = L"lblDañoID";
			this->lblDañoID->Size = System::Drawing::Size(38, 13);
			this->lblDañoID->TabIndex = 0;
			this->lblDañoID->Text = L"No ID:";
			this->lblDañoID->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// lblTitulo
			// 
			this->lblTitulo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitulo->Location = System::Drawing::Point(128, 43);
			this->lblTitulo->Name = L"lblTitulo";
			this->lblTitulo->Size = System::Drawing::Size(270, 44);
			this->lblTitulo->TabIndex = 1;
			this->lblTitulo->Text = L"Penalizaciones por Daño ";
			this->lblTitulo->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblCostoExtravio
			// 
			this->lblCostoExtravio->AutoSize = true;
			this->lblCostoExtravio->Location = System::Drawing::Point(162, 175);
			this->lblCostoExtravio->Name = L"lblCostoExtravio";
			this->lblCostoExtravio->Size = System::Drawing::Size(97, 13);
			this->lblCostoExtravio->TabIndex = 2;
			this->lblCostoExtravio->Text = L"Costo por extravío:";
			// 
			// lblTipoDaño
			// 
			this->lblTipoDaño->AutoSize = true;
			this->lblTipoDaño->Location = System::Drawing::Point(186, 224);
			this->lblTipoDaño->Name = L"lblTipoDaño";
			this->lblTipoDaño->Size = System::Drawing::Size(73, 13);
			this->lblTipoDaño->TabIndex = 3;
			this->lblTipoDaño->Text = L"Tipo de daño:";
			// 
			// lblCostoDaño
			// 
			this->lblCostoDaño->AutoSize = true;
			this->lblCostoDaño->Location = System::Drawing::Point(177, 269);
			this->lblCostoDaño->Name = L"lblCostoDaño";
			this->lblCostoDaño->Size = System::Drawing::Size(82, 13);
			this->lblCostoDaño->TabIndex = 4;
			this->lblCostoDaño->Text = L"Costo por daño:";
			// 
			// txtCostoExtravio
			// 
			this->txtCostoExtravio->Location = System::Drawing::Point(277, 168);
			this->txtCostoExtravio->Name = L"txtCostoExtravio";
			this->txtCostoExtravio->Size = System::Drawing::Size(121, 20);
			this->txtCostoExtravio->TabIndex = 6;
			// 
			// txtCostoDaño
			// 
			this->txtCostoDaño->Location = System::Drawing::Point(277, 262);
			this->txtCostoDaño->Name = L"txtCostoDaño";
			this->txtCostoDaño->Size = System::Drawing::Size(121, 20);
			this->txtCostoDaño->TabIndex = 8;
			// 
			// cboTipoDaño
			// 
			this->cboTipoDaño->FormattingEnabled = true;
			this->cboTipoDaño->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Paginas rayadas", L"Deterioro de la estructura",
					L"Otro", L""
			});
			this->cboTipoDaño->Location = System::Drawing::Point(277, 217);
			this->cboTipoDaño->Name = L"cboTipoDaño";
			this->cboTipoDaño->Size = System::Drawing::Size(121, 21);
			this->cboTipoDaño->TabIndex = 16;
			// 
			// btnAgregar
			// 
			this->btnAgregar->BackColor = System::Drawing::Color::PaleTurquoise;
			this->btnAgregar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAgregar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnAgregar.Image")));
			this->btnAgregar->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnAgregar->Location = System::Drawing::Point(132, 356);
			this->btnAgregar->Name = L"btnAgregar";
			this->btnAgregar->Size = System::Drawing::Size(100, 38);
			this->btnAgregar->TabIndex = 17;
			this->btnAgregar->Text = L"Agregar  ";
			this->btnAgregar->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnAgregar->UseVisualStyleBackColor = false;
			// 
			// btnMostrar
			// 
			this->btnMostrar->BackColor = System::Drawing::Color::PaleTurquoise;
			this->btnMostrar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMostrar->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnMostrar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnMostrar.Image")));
			this->btnMostrar->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnMostrar->Location = System::Drawing::Point(277, 356);
			this->btnMostrar->Name = L"btnMostrar";
			this->btnMostrar->Size = System::Drawing::Size(100, 38);
			this->btnMostrar->TabIndex = 18;
			this->btnMostrar->Text = L"Mostrar  ";
			this->btnMostrar->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnMostrar->UseVisualStyleBackColor = false;
			this->btnMostrar->Click += gcnew System::EventHandler(this, &frmDaño::btnMostrar_Click);
			// 
			// txtID
			// 
			this->txtID->Location = System::Drawing::Point(277, 125);
			this->txtID->Name = L"txtID";
			this->txtID->Size = System::Drawing::Size(121, 20);
			this->txtID->TabIndex = 19;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(106, 125);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(32, 30);
			this->pictureBox1->TabIndex = 20;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(106, 262);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(32, 30);
			this->pictureBox2->TabIndex = 21;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(106, 217);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(32, 30);
			this->pictureBox3->TabIndex = 22;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(106, 168);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(32, 33);
			this->pictureBox4->TabIndex = 23;
			this->pictureBox4->TabStop = false;
			// 
			// frmDaño
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkCyan;
			this->ClientSize = System::Drawing::Size(528, 463);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->txtID);
			this->Controls->Add(this->btnMostrar);
			this->Controls->Add(this->btnAgregar);
			this->Controls->Add(this->cboTipoDaño);
			this->Controls->Add(this->txtCostoDaño);
			this->Controls->Add(this->txtCostoExtravio);
			this->Controls->Add(this->lblCostoDaño);
			this->Controls->Add(this->lblTipoDaño);
			this->Controls->Add(this->lblCostoExtravio);
			this->Controls->Add(this->lblTitulo);
			this->Controls->Add(this->lblDañoID);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"frmDaño";
			this->Text = L"Daño";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void btnMostrar_Click(System::Object^ sender, System::EventArgs^ e) {
		frmListaDaños^ formulario = gcnew frmListaDaños;
		formulario->Show();

	}
	};
}
