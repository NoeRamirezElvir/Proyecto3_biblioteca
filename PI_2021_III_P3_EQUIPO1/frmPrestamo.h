#pragma once
#include "frmListaPrestamo.h"
namespace PI2021IIIP3EQUIPO1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmPrestamo
	/// </summary>
	public ref class frmPrestamo : public System::Windows::Forms::Form
	{
	public:
		frmPrestamo(void)
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
		~frmPrestamo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblTitulo;
	protected:

	protected:
	private: System::Windows::Forms::Label^ lblPrestamoID;
	private: System::Windows::Forms::Label^ lblCliente;
	private: System::Windows::Forms::Label^ lblTipoPrestamo;
	private: System::Windows::Forms::Label^ lblDias;
	private: System::Windows::Forms::Label^ lblCosto;
	private: System::Windows::Forms::Label^ lblDaño;
	private: System::Windows::Forms::Label^ lblLibro;

	private: System::Windows::Forms::TextBox^ txtDias;
	private: System::Windows::Forms::TextBox^ txtCosto;







	private: System::Windows::Forms::ComboBox^ cboID;

	private: System::Windows::Forms::Label^ lblACliente;

	private: System::Windows::Forms::Label^ lblNombre;
	private: System::Windows::Forms::Label^ lblApellido;

	private: System::Windows::Forms::ComboBox^ cboDaño;
	private: System::Windows::Forms::ComboBox^ cboLibro;
	private: System::Windows::Forms::Button^ btnAgregar;

	private: System::Windows::Forms::Button^ btnMostrar;
	private: System::Windows::Forms::TextBox^ txtTipoPrestamo;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox7;








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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmPrestamo::typeid));
			this->lblTitulo = (gcnew System::Windows::Forms::Label());
			this->lblPrestamoID = (gcnew System::Windows::Forms::Label());
			this->lblCliente = (gcnew System::Windows::Forms::Label());
			this->lblTipoPrestamo = (gcnew System::Windows::Forms::Label());
			this->lblDias = (gcnew System::Windows::Forms::Label());
			this->lblCosto = (gcnew System::Windows::Forms::Label());
			this->lblDaño = (gcnew System::Windows::Forms::Label());
			this->lblLibro = (gcnew System::Windows::Forms::Label());
			this->txtDias = (gcnew System::Windows::Forms::TextBox());
			this->txtCosto = (gcnew System::Windows::Forms::TextBox());
			this->cboID = (gcnew System::Windows::Forms::ComboBox());
			this->lblACliente = (gcnew System::Windows::Forms::Label());
			this->lblNombre = (gcnew System::Windows::Forms::Label());
			this->lblApellido = (gcnew System::Windows::Forms::Label());
			this->cboDaño = (gcnew System::Windows::Forms::ComboBox());
			this->cboLibro = (gcnew System::Windows::Forms::ComboBox());
			this->btnAgregar = (gcnew System::Windows::Forms::Button());
			this->btnMostrar = (gcnew System::Windows::Forms::Button());
			this->txtTipoPrestamo = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			this->SuspendLayout();
			// 
			// lblTitulo
			// 
			this->lblTitulo->AutoSize = true;
			this->lblTitulo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitulo->Location = System::Drawing::Point(201, 39);
			this->lblTitulo->Name = L"lblTitulo";
			this->lblTitulo->Size = System::Drawing::Size(213, 24);
			this->lblTitulo->TabIndex = 0;
			this->lblTitulo->Text = L"Solicitud de Préstamo";
			// 
			// lblPrestamoID
			// 
			this->lblPrestamoID->AutoSize = true;
			this->lblPrestamoID->Location = System::Drawing::Point(180, 113);
			this->lblPrestamoID->Name = L"lblPrestamoID";
			this->lblPrestamoID->Size = System::Drawing::Size(91, 13);
			this->lblPrestamoID->TabIndex = 1;
			this->lblPrestamoID->Text = L"Seleccione su ID:";
			// 
			// lblCliente
			// 
			this->lblCliente->AutoSize = true;
			this->lblCliente->Location = System::Drawing::Point(91, 148);
			this->lblCliente->Name = L"lblCliente";
			this->lblCliente->Size = System::Drawing::Size(97, 13);
			this->lblCliente->TabIndex = 2;
			this->lblCliente->Text = L"Nombre de Cliente:";
			// 
			// lblTipoPrestamo
			// 
			this->lblTipoPrestamo->AutoSize = true;
			this->lblTipoPrestamo->Location = System::Drawing::Point(179, 187);
			this->lblTipoPrestamo->Name = L"lblTipoPrestamo";
			this->lblTipoPrestamo->Size = System::Drawing::Size(92, 13);
			this->lblTipoPrestamo->TabIndex = 3;
			this->lblTipoPrestamo->Text = L"Tipo de préstamo:";
			// 
			// lblDias
			// 
			this->lblDias->AutoSize = true;
			this->lblDias->Location = System::Drawing::Point(187, 226);
			this->lblDias->Name = L"lblDias";
			this->lblDias->Size = System::Drawing::Size(84, 13);
			this->lblDias->TabIndex = 4;
			this->lblDias->Text = L"Días de alquiler:";
			// 
			// lblCosto
			// 
			this->lblCosto->AutoSize = true;
			this->lblCosto->Location = System::Drawing::Point(197, 265);
			this->lblCosto->Name = L"lblCosto";
			this->lblCosto->Size = System::Drawing::Size(74, 13);
			this->lblCosto->TabIndex = 5;
			this->lblCosto->Text = L"Costo por día:";
			// 
			// lblDaño
			// 
			this->lblDaño->AutoSize = true;
			this->lblDaño->Location = System::Drawing::Point(202, 303);
			this->lblDaño->Name = L"lblDaño";
			this->lblDaño->Size = System::Drawing::Size(69, 13);
			this->lblDaño->TabIndex = 6;
			this->lblDaño->Text = L"Daño al libro:";
			// 
			// lblLibro
			// 
			this->lblLibro->AutoSize = true;
			this->lblLibro->Location = System::Drawing::Point(185, 344);
			this->lblLibro->Name = L"lblLibro";
			this->lblLibro->Size = System::Drawing::Size(86, 13);
			this->lblLibro->TabIndex = 7;
			this->lblLibro->Text = L"Nombre del libro:";
			// 
			// txtDias
			// 
			this->txtDias->Location = System::Drawing::Point(295, 219);
			this->txtDias->Name = L"txtDias";
			this->txtDias->Size = System::Drawing::Size(100, 20);
			this->txtDias->TabIndex = 11;
			// 
			// txtCosto
			// 
			this->txtCosto->Location = System::Drawing::Point(295, 258);
			this->txtCosto->Name = L"txtCosto";
			this->txtCosto->Size = System::Drawing::Size(100, 20);
			this->txtCosto->TabIndex = 12;
			// 
			// cboID
			// 
			this->cboID->FormattingEnabled = true;
			this->cboID->Location = System::Drawing::Point(295, 105);
			this->cboID->Name = L"cboID";
			this->cboID->Size = System::Drawing::Size(100, 21);
			this->cboID->TabIndex = 23;
			// 
			// lblACliente
			// 
			this->lblACliente->AutoSize = true;
			this->lblACliente->Location = System::Drawing::Point(266, 148);
			this->lblACliente->Name = L"lblACliente";
			this->lblACliente->Size = System::Drawing::Size(47, 13);
			this->lblACliente->TabIndex = 24;
			this->lblACliente->Text = L"Apellido:";
			// 
			// lblNombre
			// 
			this->lblNombre->AutoSize = true;
			this->lblNombre->Location = System::Drawing::Point(185, 148);
			this->lblNombre->Name = L"lblNombre";
			this->lblNombre->Size = System::Drawing::Size(0, 13);
			this->lblNombre->TabIndex = 25;
			// 
			// lblApellido
			// 
			this->lblApellido->AutoSize = true;
			this->lblApellido->Location = System::Drawing::Point(319, 148);
			this->lblApellido->Name = L"lblApellido";
			this->lblApellido->Size = System::Drawing::Size(0, 13);
			this->lblApellido->TabIndex = 26;
			// 
			// cboDaño
			// 
			this->cboDaño->FormattingEnabled = true;
			this->cboDaño->Location = System::Drawing::Point(295, 296);
			this->cboDaño->Name = L"cboDaño";
			this->cboDaño->Size = System::Drawing::Size(100, 21);
			this->cboDaño->TabIndex = 28;
			// 
			// cboLibro
			// 
			this->cboLibro->FormattingEnabled = true;
			this->cboLibro->Location = System::Drawing::Point(293, 336);
			this->cboLibro->Name = L"cboLibro";
			this->cboLibro->Size = System::Drawing::Size(102, 21);
			this->cboLibro->TabIndex = 29;
			// 
			// btnAgregar
			// 
			this->btnAgregar->BackColor = System::Drawing::Color::LightCyan;
			this->btnAgregar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAgregar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnAgregar.Image")));
			this->btnAgregar->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnAgregar->Location = System::Drawing::Point(486, 258);
			this->btnAgregar->Name = L"btnAgregar";
			this->btnAgregar->Size = System::Drawing::Size(120, 46);
			this->btnAgregar->TabIndex = 30;
			this->btnAgregar->Text = L"Agregar    ";
			this->btnAgregar->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnAgregar->UseVisualStyleBackColor = false;
			// 
			// btnMostrar
			// 
			this->btnMostrar->BackColor = System::Drawing::Color::LightCyan;
			this->btnMostrar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMostrar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnMostrar.Image")));
			this->btnMostrar->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnMostrar->Location = System::Drawing::Point(486, 311);
			this->btnMostrar->Name = L"btnMostrar";
			this->btnMostrar->Size = System::Drawing::Size(120, 46);
			this->btnMostrar->TabIndex = 31;
			this->btnMostrar->Text = L"Mostrar     ";
			this->btnMostrar->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnMostrar->UseVisualStyleBackColor = false;
			this->btnMostrar->Click += gcnew System::EventHandler(this, &frmPrestamo::btnMostrar_Click);
			// 
			// txtTipoPrestamo
			// 
			this->txtTipoPrestamo->Location = System::Drawing::Point(295, 180);
			this->txtTipoPrestamo->Name = L"txtTipoPrestamo";
			this->txtTipoPrestamo->Size = System::Drawing::Size(100, 20);
			this->txtTipoPrestamo->TabIndex = 32;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(124, 105);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(33, 29);
			this->pictureBox1->TabIndex = 33;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(123, 336);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(33, 29);
			this->pictureBox2->TabIndex = 34;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(123, 296);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(33, 29);
			this->pictureBox3->TabIndex = 35;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(124, 258);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(33, 29);
			this->pictureBox4->TabIndex = 36;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(123, 221);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(33, 29);
			this->pictureBox5->TabIndex = 37;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(123, 180);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(33, 29);
			this->pictureBox6->TabIndex = 38;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(449, 73);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(184, 145);
			this->pictureBox7->TabIndex = 39;
			this->pictureBox7->TabStop = false;
			// 
			// frmPrestamo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkCyan;
			this->ClientSize = System::Drawing::Size(678, 438);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->txtTipoPrestamo);
			this->Controls->Add(this->btnMostrar);
			this->Controls->Add(this->btnAgregar);
			this->Controls->Add(this->cboLibro);
			this->Controls->Add(this->cboDaño);
			this->Controls->Add(this->lblApellido);
			this->Controls->Add(this->lblNombre);
			this->Controls->Add(this->lblACliente);
			this->Controls->Add(this->cboID);
			this->Controls->Add(this->txtCosto);
			this->Controls->Add(this->txtDias);
			this->Controls->Add(this->lblLibro);
			this->Controls->Add(this->lblDaño);
			this->Controls->Add(this->lblCosto);
			this->Controls->Add(this->lblDias);
			this->Controls->Add(this->lblTipoPrestamo);
			this->Controls->Add(this->lblCliente);
			this->Controls->Add(this->lblPrestamoID);
			this->Controls->Add(this->lblTitulo);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"frmPrestamo";
			this->Text = L"Préstamo";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void btnMostrar_Click(System::Object^ sender, System::EventArgs^ e) {
		frmListaPrestamo^ formulario = gcnew frmListaPrestamo;
		formulario->Show();
	}
	
};
}