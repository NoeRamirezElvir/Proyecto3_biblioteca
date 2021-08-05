#pragma once
#include "frmPersona.h"
#include "frmCliente.h"
#include "frmLibro.h"
#include "frmSucursal.h"
#include "frmSalaComputo.h"
#include "frmComputadora.h"
#include "frmEstante.h"
#include "frmDaño.h"
#include "frmPrestamo.h"
#include "frmEmpleado.h"
#include "frmFactura.h"


namespace PI2021IIIP3EQUIPO1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmBiblioteca
	/// </summary>
	public ref class frmBiblioteca : public System::Windows::Forms::Form
	{
	public:
		frmBiblioteca(void)
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
		~frmBiblioteca()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnPersona;
	protected:
	private: System::Windows::Forms::Button^ btnCliente;
	private: System::Windows::Forms::Button^ btnLibro;
	private: System::Windows::Forms::Button^ btnEstantes;
	private: System::Windows::Forms::Button^ btnComputadora;


	private: System::Windows::Forms::Button^ btnComputo;
	private: System::Windows::Forms::Button^ btnSucursal;
	private: System::Windows::Forms::Button^ btnDaño;
	private: System::Windows::Forms::Button^ btnFactura;
	private: System::Windows::Forms::Button^ btnEmpleado;
	private: System::Windows::Forms::Button^ btnPrestamo;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmBiblioteca::typeid));
			this->btnPersona = (gcnew System::Windows::Forms::Button());
			this->btnCliente = (gcnew System::Windows::Forms::Button());
			this->btnLibro = (gcnew System::Windows::Forms::Button());
			this->btnEstantes = (gcnew System::Windows::Forms::Button());
			this->btnComputadora = (gcnew System::Windows::Forms::Button());
			this->btnComputo = (gcnew System::Windows::Forms::Button());
			this->btnSucursal = (gcnew System::Windows::Forms::Button());
			this->btnDaño = (gcnew System::Windows::Forms::Button());
			this->btnFactura = (gcnew System::Windows::Forms::Button());
			this->btnEmpleado = (gcnew System::Windows::Forms::Button());
			this->btnPrestamo = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnPersona
			// 
			this->btnPersona->BackColor = System::Drawing::Color::LightSalmon;
			this->btnPersona->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->btnPersona->FlatAppearance->BorderSize = 2;
			this->btnPersona->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnPersona->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPersona->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnPersona->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnPersona.Image")));
			this->btnPersona->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnPersona->Location = System::Drawing::Point(248, 86);
			this->btnPersona->Name = L"btnPersona";
			this->btnPersona->Size = System::Drawing::Size(164, 47);
			this->btnPersona->TabIndex = 0;
			this->btnPersona->Text = L"Persona";
			this->btnPersona->UseVisualStyleBackColor = false;
			this->btnPersona->Click += gcnew System::EventHandler(this, &frmBiblioteca::btnPersona_Click);
			// 
			// btnCliente
			// 
			this->btnCliente->BackColor = System::Drawing::Color::LightSalmon;
			this->btnCliente->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->btnCliente->FlatAppearance->BorderSize = 2;
			this->btnCliente->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCliente->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCliente->ForeColor = System::Drawing::SystemColors::Desktop;
			this->btnCliente->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnCliente.Image")));
			this->btnCliente->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnCliente->Location = System::Drawing::Point(248, 140);
			this->btnCliente->Name = L"btnCliente";
			this->btnCliente->Size = System::Drawing::Size(164, 47);
			this->btnCliente->TabIndex = 1;
			this->btnCliente->Text = L"Cliente";
			this->btnCliente->UseVisualStyleBackColor = false;
			this->btnCliente->Click += gcnew System::EventHandler(this, &frmBiblioteca::btnCliente_Click);
			// 
			// btnLibro
			// 
			this->btnLibro->BackColor = System::Drawing::Color::LightSalmon;
			this->btnLibro->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->btnLibro->FlatAppearance->BorderSize = 2;
			this->btnLibro->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLibro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLibro->ForeColor = System::Drawing::SystemColors::Desktop;
			this->btnLibro->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnLibro.Image")));
			this->btnLibro->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnLibro->Location = System::Drawing::Point(248, 193);
			this->btnLibro->Name = L"btnLibro";
			this->btnLibro->Size = System::Drawing::Size(164, 47);
			this->btnLibro->TabIndex = 2;
			this->btnLibro->Text = L"Libros";
			this->btnLibro->UseVisualStyleBackColor = false;
			this->btnLibro->Click += gcnew System::EventHandler(this, &frmBiblioteca::btnLibro_Click);
			// 
			// btnEstantes
			// 
			this->btnEstantes->BackColor = System::Drawing::Color::LightSalmon;
			this->btnEstantes->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->btnEstantes->FlatAppearance->BorderSize = 2;
			this->btnEstantes->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnEstantes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEstantes->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnEstantes.Image")));
			this->btnEstantes->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnEstantes->Location = System::Drawing::Point(515, 86);
			this->btnEstantes->Name = L"btnEstantes";
			this->btnEstantes->Size = System::Drawing::Size(164, 47);
			this->btnEstantes->TabIndex = 3;
			this->btnEstantes->Text = L"Estante";
			this->btnEstantes->UseVisualStyleBackColor = false;
			this->btnEstantes->Click += gcnew System::EventHandler(this, &frmBiblioteca::btnEstantes_Click);
			// 
			// btnComputadora
			// 
			this->btnComputadora->BackColor = System::Drawing::Color::LightSalmon;
			this->btnComputadora->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->btnComputadora->FlatAppearance->BorderSize = 2;
			this->btnComputadora->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnComputadora->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnComputadora->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnComputadora.Image")));
			this->btnComputadora->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnComputadora->Location = System::Drawing::Point(515, 193);
			this->btnComputadora->Name = L"btnComputadora";
			this->btnComputadora->Size = System::Drawing::Size(164, 47);
			this->btnComputadora->TabIndex = 4;
			this->btnComputadora->Text = L"Computadora";
			this->btnComputadora->UseVisualStyleBackColor = false;
			this->btnComputadora->Click += gcnew System::EventHandler(this, &frmBiblioteca::btnComputadora_Click);
			// 
			// btnComputo
			// 
			this->btnComputo->BackColor = System::Drawing::Color::LightSalmon;
			this->btnComputo->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->btnComputo->FlatAppearance->BorderSize = 2;
			this->btnComputo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnComputo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnComputo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnComputo.Image")));
			this->btnComputo->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnComputo->Location = System::Drawing::Point(515, 248);
			this->btnComputo->Name = L"btnComputo";
			this->btnComputo->Size = System::Drawing::Size(164, 47);
			this->btnComputo->TabIndex = 5;
			this->btnComputo->Text = L"Sala de Computo";
			this->btnComputo->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnComputo->UseVisualStyleBackColor = false;
			this->btnComputo->Click += gcnew System::EventHandler(this, &frmBiblioteca::btnComputo_Click);
			// 
			// btnSucursal
			// 
			this->btnSucursal->BackColor = System::Drawing::Color::LightSalmon;
			this->btnSucursal->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->btnSucursal->FlatAppearance->BorderSize = 2;
			this->btnSucursal->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSucursal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSucursal->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSucursal.Image")));
			this->btnSucursal->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnSucursal->Location = System::Drawing::Point(515, 139);
			this->btnSucursal->Name = L"btnSucursal";
			this->btnSucursal->Size = System::Drawing::Size(164, 47);
			this->btnSucursal->TabIndex = 6;
			this->btnSucursal->Text = L"Sucursal";
			this->btnSucursal->UseVisualStyleBackColor = false;
			this->btnSucursal->Click += gcnew System::EventHandler(this, &frmBiblioteca::btnSucursal_Click);
			// 
			// btnDaño
			// 
			this->btnDaño->BackColor = System::Drawing::Color::LightSalmon;
			this->btnDaño->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->btnDaño->FlatAppearance->BorderSize = 2;
			this->btnDaño->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDaño->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDaño->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnDaño->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnDaño.Image")));
			this->btnDaño->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnDaño->Location = System::Drawing::Point(754, 86);
			this->btnDaño->Name = L"btnDaño";
			this->btnDaño->Size = System::Drawing::Size(164, 47);
			this->btnDaño->TabIndex = 7;
			this->btnDaño->Text = L"Daño a Libros";
			this->btnDaño->UseVisualStyleBackColor = false;
			this->btnDaño->Click += gcnew System::EventHandler(this, &frmBiblioteca::btnDaño_Click);
			// 
			// btnFactura
			// 
			this->btnFactura->BackColor = System::Drawing::Color::LightSalmon;
			this->btnFactura->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->btnFactura->FlatAppearance->BorderSize = 2;
			this->btnFactura->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnFactura->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnFactura->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnFactura->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnFactura.Image")));
			this->btnFactura->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnFactura->Location = System::Drawing::Point(754, 247);
			this->btnFactura->Name = L"btnFactura";
			this->btnFactura->Size = System::Drawing::Size(164, 47);
			this->btnFactura->TabIndex = 8;
			this->btnFactura->Text = L"Factura";
			this->btnFactura->UseVisualStyleBackColor = false;
			this->btnFactura->Click += gcnew System::EventHandler(this, &frmBiblioteca::btnFactura_Click);
			// 
			// btnEmpleado
			// 
			this->btnEmpleado->BackColor = System::Drawing::Color::LightSalmon;
			this->btnEmpleado->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->btnEmpleado->FlatAppearance->BorderSize = 2;
			this->btnEmpleado->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnEmpleado->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEmpleado->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnEmpleado->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnEmpleado.Image")));
			this->btnEmpleado->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnEmpleado->Location = System::Drawing::Point(754, 194);
			this->btnEmpleado->Name = L"btnEmpleado";
			this->btnEmpleado->Size = System::Drawing::Size(164, 47);
			this->btnEmpleado->TabIndex = 9;
			this->btnEmpleado->Text = L"Empleado";
			this->btnEmpleado->UseVisualStyleBackColor = false;
			this->btnEmpleado->Click += gcnew System::EventHandler(this, &frmBiblioteca::btnEmpleado_Click);
			// 
			// btnPrestamo
			// 
			this->btnPrestamo->BackColor = System::Drawing::Color::LightSalmon;
			this->btnPrestamo->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->btnPrestamo->FlatAppearance->BorderSize = 2;
			this->btnPrestamo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnPrestamo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPrestamo->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnPrestamo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnPrestamo.Image")));
			this->btnPrestamo->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnPrestamo->Location = System::Drawing::Point(754, 140);
			this->btnPrestamo->Name = L"btnPrestamo";
			this->btnPrestamo->Size = System::Drawing::Size(164, 47);
			this->btnPrestamo->TabIndex = 10;
			this->btnPrestamo->Text = L"Prestamo";
			this->btnPrestamo->UseVisualStyleBackColor = false;
			this->btnPrestamo->Click += gcnew System::EventHandler(this, &frmBiblioteca::btnPrestamo_Click);
			// 
			// frmBiblioteca
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Teal;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(989, 594);
			this->Controls->Add(this->btnPrestamo);
			this->Controls->Add(this->btnEmpleado);
			this->Controls->Add(this->btnFactura);
			this->Controls->Add(this->btnDaño);
			this->Controls->Add(this->btnSucursal);
			this->Controls->Add(this->btnComputo);
			this->Controls->Add(this->btnComputadora);
			this->Controls->Add(this->btnEstantes);
			this->Controls->Add(this->btnLibro);
			this->Controls->Add(this->btnCliente);
			this->Controls->Add(this->btnPersona);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"frmBiblioteca";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Biblioteca";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnPersona_Click(System::Object^ sender, System::EventArgs^ e) {
		frmPersona^ formulario = gcnew frmPersona;
		formulario->Show();
	}
	private: System::Void btnCliente_Click(System::Object^ sender, System::EventArgs^ e) {
		frmCliente^ formulario = gcnew frmCliente;
		formulario->Show();
	}
	private: System::Void btnLibro_Click(System::Object^ sender, System::EventArgs^ e) {
		frmLibro^ formulario = gcnew frmLibro;
		formulario->Show();
	}
private: System::Void btnComputo_Click(System::Object^ sender, System::EventArgs^ e) {
	frmSalaComputo^ formulario = gcnew frmSalaComputo;
	formulario->Show();
}
private: System::Void btnEstantes_Click(System::Object^ sender, System::EventArgs^ e) {
	frmEstante^ formulario = gcnew frmEstante;
	formulario->Show();
}


private: System::Void btnComputadora_Click(System::Object^ sender, System::EventArgs^ e) {
	frmComputadora^ formulario = gcnew frmComputadora;
	formulario->Show();
}

private: System::Void btnSucursal_Click(System::Object^ sender, System::EventArgs^ e) {
	frmSucursal^ formulario = gcnew frmSucursal;
	formulario->Show();
}
private: System::Void btnDaño_Click(System::Object^ sender, System::EventArgs^ e) {
	frmDaño^ formulario = gcnew frmDaño;
	formulario->Show();
}
private: System::Void btnPrestamo_Click(System::Object^ sender, System::EventArgs^ e) {
	frmPrestamo^ formulario = gcnew frmPrestamo;
	formulario->Show(); 
}
private: System::Void btnEmpleado_Click(System::Object^ sender, System::EventArgs^ e) {
	frmEmpleado^ formulario = gcnew frmEmpleado;
	formulario->Show();
}
private: System::Void btnFactura_Click(System::Object^ sender, System::EventArgs^ e) {
	frmFactura^ formulario = gcnew frmFactura;
	formulario->Show();
}
};
}
