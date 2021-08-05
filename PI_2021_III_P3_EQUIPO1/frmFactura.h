#pragma once
#include "frmListaFactura.h";
namespace PI2021IIIP3EQUIPO1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmFactura
	/// </summary>
	public ref class frmFactura : public System::Windows::Forms::Form
	{
	public:
		frmFactura(void)
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
		~frmFactura()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblTitulo;
	protected:
	private: System::Windows::Forms::Label^ lblFactura;
	private: System::Windows::Forms::TextBox^ txtID;
	private: System::Windows::Forms::Label^ lblCliente;
	private: System::Windows::Forms::ComboBox^ cboCliente;
	private: System::Windows::Forms::Label^ lblDatos;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ lblID;
	private: System::Windows::Forms::Label^ lblClienteID;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ lblEmpleado;
	private: System::Windows::Forms::Label^ lblFecha;
	private: System::Windows::Forms::Label^ lblTipoMembresia;
	private: System::Windows::Forms::Label^ lblMembresiaCliente;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ lblPrestamo;
	private: System::Windows::Forms::Label^ lblTotalPagar;
	private: System::Windows::Forms::Button^ btnAgregar;
	private: System::Windows::Forms::Button^ btnMostrar;
	private: System::Windows::Forms::Label^ lblNombreEmpleado;
	private: System::Windows::Forms::Label^ lblDia;
	private: System::Windows::Forms::Label^ lblTipoPrestamo;
	private: System::Windows::Forms::Label^ lblPago;
	private: System::Windows::Forms::Label^ lblMes;
	private: System::Windows::Forms::Label^ lblAño;
	private: System::Windows::Forms::Label^ lblEmpleadoApellido;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmFactura::typeid));
			this->lblTitulo = (gcnew System::Windows::Forms::Label());
			this->lblFactura = (gcnew System::Windows::Forms::Label());
			this->txtID = (gcnew System::Windows::Forms::TextBox());
			this->lblCliente = (gcnew System::Windows::Forms::Label());
			this->cboCliente = (gcnew System::Windows::Forms::ComboBox());
			this->lblDatos = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->lblID = (gcnew System::Windows::Forms::Label());
			this->lblClienteID = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->lblEmpleado = (gcnew System::Windows::Forms::Label());
			this->lblFecha = (gcnew System::Windows::Forms::Label());
			this->lblTipoMembresia = (gcnew System::Windows::Forms::Label());
			this->lblMembresiaCliente = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->lblPrestamo = (gcnew System::Windows::Forms::Label());
			this->lblTotalPagar = (gcnew System::Windows::Forms::Label());
			this->btnAgregar = (gcnew System::Windows::Forms::Button());
			this->btnMostrar = (gcnew System::Windows::Forms::Button());
			this->lblNombreEmpleado = (gcnew System::Windows::Forms::Label());
			this->lblDia = (gcnew System::Windows::Forms::Label());
			this->lblTipoPrestamo = (gcnew System::Windows::Forms::Label());
			this->lblPago = (gcnew System::Windows::Forms::Label());
			this->lblMes = (gcnew System::Windows::Forms::Label());
			this->lblAño = (gcnew System::Windows::Forms::Label());
			this->lblEmpleadoApellido = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lblTitulo
			// 
			this->lblTitulo->AutoSize = true;
			this->lblTitulo->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblTitulo->Location = System::Drawing::Point(222, 35);
			this->lblTitulo->Name = L"lblTitulo";
			this->lblTitulo->Size = System::Drawing::Size(176, 25);
			this->lblTitulo->TabIndex = 0;
			this->lblTitulo->Text = L"La Casa Del Lector";
			// 
			// lblFactura
			// 
			this->lblFactura->AutoSize = true;
			this->lblFactura->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblFactura->Location = System::Drawing::Point(208, 79);
			this->lblFactura->Name = L"lblFactura";
			this->lblFactura->Size = System::Drawing::Size(84, 16);
			this->lblFactura->TabIndex = 1;
			this->lblFactura->Text = L"Factura No";
			// 
			// txtID
			// 
			this->txtID->Location = System::Drawing::Point(298, 78);
			this->txtID->Name = L"txtID";
			this->txtID->Size = System::Drawing::Size(100, 20);
			this->txtID->TabIndex = 2;
			// 
			// lblCliente
			// 
			this->lblCliente->AutoSize = true;
			this->lblCliente->Location = System::Drawing::Point(103, 131);
			this->lblCliente->Name = L"lblCliente";
			this->lblCliente->Size = System::Drawing::Size(39, 13);
			this->lblCliente->TabIndex = 3;
			this->lblCliente->Text = L"Cliente";
			// 
			// cboCliente
			// 
			this->cboCliente->FormattingEnabled = true;
			this->cboCliente->Location = System::Drawing::Point(158, 128);
			this->cboCliente->Name = L"cboCliente";
			this->cboCliente->Size = System::Drawing::Size(121, 21);
			this->cboCliente->TabIndex = 4;
			// 
			// lblDatos
			// 
			this->lblDatos->AutoSize = true;
			this->lblDatos->Location = System::Drawing::Point(244, 176);
			this->lblDatos->Name = L"lblDatos";
			this->lblDatos->Size = System::Drawing::Size(108, 13);
			this->lblDatos->TabIndex = 5;
			this->lblDatos->Text = L"Datos del Adquiriente";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel1->Location = System::Drawing::Point(77, 192);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(446, 15);
			this->panel1->TabIndex = 6;
			// 
			// lblID
			// 
			this->lblID->AutoSize = true;
			this->lblID->Location = System::Drawing::Point(84, 225);
			this->lblID->Name = L"lblID";
			this->lblID->Size = System::Drawing::Size(88, 13);
			this->lblID->TabIndex = 7;
			this->lblID->Text = L"No ID de Cliente:";
			// 
			// lblClienteID
			// 
			this->lblClienteID->AutoSize = true;
			this->lblClienteID->Location = System::Drawing::Point(193, 225);
			this->lblClienteID->Name = L"lblClienteID";
			this->lblClienteID->Size = System::Drawing::Size(0, 13);
			this->lblClienteID->TabIndex = 8;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel2->Location = System::Drawing::Point(77, 274);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(446, 16);
			this->panel2->TabIndex = 9;
			// 
			// lblEmpleado
			// 
			this->lblEmpleado->AutoSize = true;
			this->lblEmpleado->Location = System::Drawing::Point(84, 304);
			this->lblEmpleado->Name = L"lblEmpleado";
			this->lblEmpleado->Size = System::Drawing::Size(57, 13);
			this->lblEmpleado->TabIndex = 10;
			this->lblEmpleado->Text = L"Empleado:";
			// 
			// lblFecha
			// 
			this->lblFecha->AutoSize = true;
			this->lblFecha->Location = System::Drawing::Point(84, 338);
			this->lblFecha->Name = L"lblFecha";
			this->lblFecha->Size = System::Drawing::Size(40, 13);
			this->lblFecha->TabIndex = 11;
			this->lblFecha->Text = L"Fecha:";
			// 
			// lblTipoMembresia
			// 
			this->lblTipoMembresia->AutoSize = true;
			this->lblTipoMembresia->Location = System::Drawing::Point(84, 258);
			this->lblTipoMembresia->Name = L"lblTipoMembresia";
			this->lblTipoMembresia->Size = System::Drawing::Size(85, 13);
			this->lblTipoMembresia->TabIndex = 0;
			this->lblTipoMembresia->Text = L"Tipo Membresia:";
			// 
			// lblMembresiaCliente
			// 
			this->lblMembresiaCliente->AutoSize = true;
			this->lblMembresiaCliente->Location = System::Drawing::Point(193, 258);
			this->lblMembresiaCliente->Name = L"lblMembresiaCliente";
			this->lblMembresiaCliente->Size = System::Drawing::Size(0, 13);
			this->lblMembresiaCliente->TabIndex = 12;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel3->Location = System::Drawing::Point(77, 354);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(446, 16);
			this->panel3->TabIndex = 13;
			// 
			// lblPrestamo
			// 
			this->lblPrestamo->AutoSize = true;
			this->lblPrestamo->Location = System::Drawing::Point(84, 385);
			this->lblPrestamo->Name = L"lblPrestamo";
			this->lblPrestamo->Size = System::Drawing::Size(54, 13);
			this->lblPrestamo->TabIndex = 14;
			this->lblPrestamo->Text = L"Prestamo:";
			// 
			// lblTotalPagar
			// 
			this->lblTotalPagar->AutoSize = true;
			this->lblTotalPagar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTotalPagar->Location = System::Drawing::Point(84, 423);
			this->lblTotalPagar->Name = L"lblTotalPagar";
			this->lblTotalPagar->Size = System::Drawing::Size(83, 15);
			this->lblTotalPagar->TabIndex = 15;
			this->lblTotalPagar->Text = L"Total a Pagar:";
			// 
			// btnAgregar
			// 
			this->btnAgregar->BackColor = System::Drawing::Color::PaleTurquoise;
			this->btnAgregar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAgregar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnAgregar.Image")));
			this->btnAgregar->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnAgregar->Location = System::Drawing::Point(196, 466);
			this->btnAgregar->Name = L"btnAgregar";
			this->btnAgregar->Size = System::Drawing::Size(96, 52);
			this->btnAgregar->TabIndex = 16;
			this->btnAgregar->Text = L"Agregar";
			this->btnAgregar->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnAgregar->UseVisualStyleBackColor = false;
			// 
			// btnMostrar
			// 
			this->btnMostrar->BackColor = System::Drawing::Color::PaleTurquoise;
			this->btnMostrar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMostrar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnMostrar.Image")));
			this->btnMostrar->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnMostrar->Location = System::Drawing::Point(336, 466);
			this->btnMostrar->Name = L"btnMostrar";
			this->btnMostrar->Size = System::Drawing::Size(96, 52);
			this->btnMostrar->TabIndex = 17;
			this->btnMostrar->Text = L"Mostrar  ";
			this->btnMostrar->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnMostrar->UseVisualStyleBackColor = false;
			this->btnMostrar->Click += gcnew System::EventHandler(this, &frmFactura::btnMostrar_Click);
			// 
			// lblNombreEmpleado
			// 
			this->lblNombreEmpleado->AutoSize = true;
			this->lblNombreEmpleado->Location = System::Drawing::Point(155, 304);
			this->lblNombreEmpleado->Name = L"lblNombreEmpleado";
			this->lblNombreEmpleado->Size = System::Drawing::Size(0, 13);
			this->lblNombreEmpleado->TabIndex = 18;
			// 
			// lblDia
			// 
			this->lblDia->AutoSize = true;
			this->lblDia->Location = System::Drawing::Point(155, 338);
			this->lblDia->Name = L"lblDia";
			this->lblDia->Size = System::Drawing::Size(0, 13);
			this->lblDia->TabIndex = 19;
			// 
			// lblTipoPrestamo
			// 
			this->lblTipoPrestamo->AutoSize = true;
			this->lblTipoPrestamo->Location = System::Drawing::Point(193, 385);
			this->lblTipoPrestamo->Name = L"lblTipoPrestamo";
			this->lblTipoPrestamo->Size = System::Drawing::Size(0, 13);
			this->lblTipoPrestamo->TabIndex = 20;
			// 
			// lblPago
			// 
			this->lblPago->AutoSize = true;
			this->lblPago->Location = System::Drawing::Point(193, 425);
			this->lblPago->Name = L"lblPago";
			this->lblPago->Size = System::Drawing::Size(0, 13);
			this->lblPago->TabIndex = 21;
			// 
			// lblMes
			// 
			this->lblMes->AutoSize = true;
			this->lblMes->Location = System::Drawing::Point(206, 338);
			this->lblMes->Name = L"lblMes";
			this->lblMes->Size = System::Drawing::Size(0, 13);
			this->lblMes->TabIndex = 22;
			// 
			// lblAño
			// 
			this->lblAño->AutoSize = true;
			this->lblAño->Location = System::Drawing::Point(259, 338);
			this->lblAño->Name = L"lblAño";
			this->lblAño->Size = System::Drawing::Size(0, 13);
			this->lblAño->TabIndex = 23;
			// 
			// lblEmpleadoApellido
			// 
			this->lblEmpleadoApellido->AutoSize = true;
			this->lblEmpleadoApellido->Location = System::Drawing::Point(226, 304);
			this->lblEmpleadoApellido->Name = L"lblEmpleadoApellido";
			this->lblEmpleadoApellido->Size = System::Drawing::Size(0, 13);
			this->lblEmpleadoApellido->TabIndex = 24;
			// 
			// frmFactura
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkCyan;
			this->ClientSize = System::Drawing::Size(646, 531);
			this->Controls->Add(this->lblEmpleadoApellido);
			this->Controls->Add(this->lblAño);
			this->Controls->Add(this->lblMes);
			this->Controls->Add(this->lblPago);
			this->Controls->Add(this->lblTipoPrestamo);
			this->Controls->Add(this->lblDia);
			this->Controls->Add(this->lblNombreEmpleado);
			this->Controls->Add(this->btnMostrar);
			this->Controls->Add(this->btnAgregar);
			this->Controls->Add(this->lblTotalPagar);
			this->Controls->Add(this->lblPrestamo);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->lblMembresiaCliente);
			this->Controls->Add(this->lblTipoMembresia);
			this->Controls->Add(this->lblFecha);
			this->Controls->Add(this->lblEmpleado);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->lblClienteID);
			this->Controls->Add(this->lblID);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->lblDatos);
			this->Controls->Add(this->cboCliente);
			this->Controls->Add(this->lblCliente);
			this->Controls->Add(this->txtID);
			this->Controls->Add(this->lblFactura);
			this->Controls->Add(this->lblTitulo);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"frmFactura";
			this->Text = L"Factura";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnMostrar_Click(System::Object^ sender, System::EventArgs^ e) {
		frmListaFactura^ formulario = gcnew frmListaFactura;
		formulario->Show();
	}
	};
}
