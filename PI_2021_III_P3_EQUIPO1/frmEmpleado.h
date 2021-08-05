#pragma once
#include "frmListaEmpleado.h";
namespace PI2021IIIP3EQUIPO1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmEmpleado
	/// </summary>
	public ref class frmEmpleado : public System::Windows::Forms::Form
	{
	public:
		frmEmpleado(void)
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
		~frmEmpleado()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblTitulo;
	protected:

	protected:

	private: System::Windows::Forms::Label^ lblIngreso;
	private: System::Windows::Forms::Label^ lblSueldo;
	private: System::Windows::Forms::Label^ lblHorasExtras;
	private: System::Windows::Forms::Label^ lblPrecioHora;
	private: System::Windows::Forms::Label^ lblVentas;
	private: System::Windows::Forms::Label^ lblDepartamento;
	private: System::Windows::Forms::Label^ lblSucursal;

	private: System::Windows::Forms::TextBox^ txtIngreso;
	private: System::Windows::Forms::TextBox^ txtSueldo;
	private: System::Windows::Forms::TextBox^ txtHorasExtras;
	private: System::Windows::Forms::TextBox^ txtPrecioHora;
	private: System::Windows::Forms::TextBox^ txtVentas;
	private: System::Windows::Forms::TextBox^ txtDepartamento;











	private: System::Windows::Forms::Label^ lblID;
	private: System::Windows::Forms::ComboBox^ cboID;








	private: System::Windows::Forms::Label^ lblN;
	private: System::Windows::Forms::Label^ lblNombre;
	private: System::Windows::Forms::Label^ lblA;
	private: System::Windows::Forms::Label^ lblApellido;

	private: System::Windows::Forms::Button^ btnAgregar;
	private: System::Windows::Forms::Button^ btnMostrar;
	private: System::Windows::Forms::ComboBox^ cboSucursal;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::Label^ lblEmpleadoID;
	private: System::Windows::Forms::TextBox^ txtEmpleadoID;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmEmpleado::typeid));
			this->lblTitulo = (gcnew System::Windows::Forms::Label());
			this->lblIngreso = (gcnew System::Windows::Forms::Label());
			this->lblSueldo = (gcnew System::Windows::Forms::Label());
			this->lblHorasExtras = (gcnew System::Windows::Forms::Label());
			this->lblPrecioHora = (gcnew System::Windows::Forms::Label());
			this->lblVentas = (gcnew System::Windows::Forms::Label());
			this->lblDepartamento = (gcnew System::Windows::Forms::Label());
			this->lblSucursal = (gcnew System::Windows::Forms::Label());
			this->txtIngreso = (gcnew System::Windows::Forms::TextBox());
			this->txtSueldo = (gcnew System::Windows::Forms::TextBox());
			this->txtHorasExtras = (gcnew System::Windows::Forms::TextBox());
			this->txtPrecioHora = (gcnew System::Windows::Forms::TextBox());
			this->txtVentas = (gcnew System::Windows::Forms::TextBox());
			this->txtDepartamento = (gcnew System::Windows::Forms::TextBox());
			this->lblID = (gcnew System::Windows::Forms::Label());
			this->cboID = (gcnew System::Windows::Forms::ComboBox());
			this->lblN = (gcnew System::Windows::Forms::Label());
			this->lblNombre = (gcnew System::Windows::Forms::Label());
			this->lblA = (gcnew System::Windows::Forms::Label());
			this->lblApellido = (gcnew System::Windows::Forms::Label());
			this->btnAgregar = (gcnew System::Windows::Forms::Button());
			this->btnMostrar = (gcnew System::Windows::Forms::Button());
			this->cboSucursal = (gcnew System::Windows::Forms::ComboBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->lblEmpleadoID = (gcnew System::Windows::Forms::Label());
			this->txtEmpleadoID = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			this->SuspendLayout();
			// 
			// lblTitulo
			// 
			this->lblTitulo->AutoSize = true;
			this->lblTitulo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitulo->Location = System::Drawing::Point(180, 39);
			this->lblTitulo->Name = L"lblTitulo";
			this->lblTitulo->Size = System::Drawing::Size(228, 24);
			this->lblTitulo->TabIndex = 0;
			this->lblTitulo->Text = L"Registro de Empleados";
			// 
			// lblIngreso
			// 
			this->lblIngreso->AutoSize = true;
			this->lblIngreso->Location = System::Drawing::Point(153, 218);
			this->lblIngreso->Name = L"lblIngreso";
			this->lblIngreso->Size = System::Drawing::Size(92, 13);
			this->lblIngreso->TabIndex = 2;
			this->lblIngreso->Text = L"Fecha de ingreso:";
			// 
			// lblSueldo
			// 
			this->lblSueldo->AutoSize = true;
			this->lblSueldo->Location = System::Drawing::Point(202, 262);
			this->lblSueldo->Name = L"lblSueldo";
			this->lblSueldo->Size = System::Drawing::Size(43, 13);
			this->lblSueldo->TabIndex = 3;
			this->lblSueldo->Text = L"Sueldo:";
			// 
			// lblHorasExtras
			// 
			this->lblHorasExtras->AutoSize = true;
			this->lblHorasExtras->Location = System::Drawing::Point(176, 303);
			this->lblHorasExtras->Name = L"lblHorasExtras";
			this->lblHorasExtras->Size = System::Drawing::Size(69, 13);
			this->lblHorasExtras->TabIndex = 4;
			this->lblHorasExtras->Text = L"Horas extras:";
			// 
			// lblPrecioHora
			// 
			this->lblPrecioHora->AutoSize = true;
			this->lblPrecioHora->Location = System::Drawing::Point(163, 391);
			this->lblPrecioHora->Name = L"lblPrecioHora";
			this->lblPrecioHora->Size = System::Drawing::Size(82, 13);
			this->lblPrecioHora->TabIndex = 5;
			this->lblPrecioHora->Text = L"Precio por hora:";
			// 
			// lblVentas
			// 
			this->lblVentas->AutoSize = true;
			this->lblVentas->Location = System::Drawing::Point(143, 346);
			this->lblVentas->Name = L"lblVentas";
			this->lblVentas->Size = System::Drawing::Size(102, 13);
			this->lblVentas->TabIndex = 6;
			this->lblVentas->Text = L"Cantidad de ventas:";
			// 
			// lblDepartamento
			// 
			this->lblDepartamento->AutoSize = true;
			this->lblDepartamento->Location = System::Drawing::Point(168, 431);
			this->lblDepartamento->Name = L"lblDepartamento";
			this->lblDepartamento->Size = System::Drawing::Size(77, 13);
			this->lblDepartamento->TabIndex = 7;
			this->lblDepartamento->Text = L"Departamento:";
			// 
			// lblSucursal
			// 
			this->lblSucursal->AutoSize = true;
			this->lblSucursal->Location = System::Drawing::Point(194, 471);
			this->lblSucursal->Name = L"lblSucursal";
			this->lblSucursal->Size = System::Drawing::Size(51, 13);
			this->lblSucursal->TabIndex = 8;
			this->lblSucursal->Text = L"Sucursal:";
			// 
			// txtIngreso
			// 
			this->txtIngreso->Location = System::Drawing::Point(270, 211);
			this->txtIngreso->Name = L"txtIngreso";
			this->txtIngreso->Size = System::Drawing::Size(100, 20);
			this->txtIngreso->TabIndex = 10;
			// 
			// txtSueldo
			// 
			this->txtSueldo->Location = System::Drawing::Point(270, 255);
			this->txtSueldo->Name = L"txtSueldo";
			this->txtSueldo->Size = System::Drawing::Size(100, 20);
			this->txtSueldo->TabIndex = 11;
			// 
			// txtHorasExtras
			// 
			this->txtHorasExtras->Location = System::Drawing::Point(270, 296);
			this->txtHorasExtras->Name = L"txtHorasExtras";
			this->txtHorasExtras->Size = System::Drawing::Size(100, 20);
			this->txtHorasExtras->TabIndex = 12;
			// 
			// txtPrecioHora
			// 
			this->txtPrecioHora->Location = System::Drawing::Point(270, 384);
			this->txtPrecioHora->Name = L"txtPrecioHora";
			this->txtPrecioHora->Size = System::Drawing::Size(100, 20);
			this->txtPrecioHora->TabIndex = 13;
			// 
			// txtVentas
			// 
			this->txtVentas->Location = System::Drawing::Point(270, 339);
			this->txtVentas->Name = L"txtVentas";
			this->txtVentas->Size = System::Drawing::Size(100, 20);
			this->txtVentas->TabIndex = 14;
			// 
			// txtDepartamento
			// 
			this->txtDepartamento->Location = System::Drawing::Point(270, 424);
			this->txtDepartamento->Name = L"txtDepartamento";
			this->txtDepartamento->Size = System::Drawing::Size(100, 20);
			this->txtDepartamento->TabIndex = 15;
			// 
			// lblID
			// 
			this->lblID->AutoSize = true;
			this->lblID->Location = System::Drawing::Point(143, 113);
			this->lblID->Name = L"lblID";
			this->lblID->Size = System::Drawing::Size(88, 13);
			this->lblID->TabIndex = 25;
			this->lblID->Text = L"Seleccione su ID";
			// 
			// cboID
			// 
			this->cboID->FormattingEnabled = true;
			this->cboID->Location = System::Drawing::Point(146, 129);
			this->cboID->Name = L"cboID";
			this->cboID->Size = System::Drawing::Size(121, 21);
			this->cboID->TabIndex = 26;
			// 
			// lblN
			// 
			this->lblN->AutoSize = true;
			this->lblN->Location = System::Drawing::Point(90, 167);
			this->lblN->Name = L"lblN";
			this->lblN->Size = System::Drawing::Size(47, 13);
			this->lblN->TabIndex = 27;
			this->lblN->Text = L"Nombre:";
			// 
			// lblNombre
			// 
			this->lblNombre->AutoSize = true;
			this->lblNombre->Location = System::Drawing::Point(143, 167);
			this->lblNombre->Name = L"lblNombre";
			this->lblNombre->Size = System::Drawing::Size(0, 13);
			this->lblNombre->TabIndex = 28;
			// 
			// lblA
			// 
			this->lblA->AutoSize = true;
			this->lblA->Location = System::Drawing::Point(247, 167);
			this->lblA->Name = L"lblA";
			this->lblA->Size = System::Drawing::Size(47, 13);
			this->lblA->TabIndex = 29;
			this->lblA->Text = L"Apellido:";
			// 
			// lblApellido
			// 
			this->lblApellido->AutoSize = true;
			this->lblApellido->Location = System::Drawing::Point(300, 167);
			this->lblApellido->Name = L"lblApellido";
			this->lblApellido->Size = System::Drawing::Size(0, 13);
			this->lblApellido->TabIndex = 30;
			// 
			// btnAgregar
			// 
			this->btnAgregar->BackColor = System::Drawing::Color::LightCyan;
			this->btnAgregar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAgregar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnAgregar.Image")));
			this->btnAgregar->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnAgregar->Location = System::Drawing::Point(470, 329);
			this->btnAgregar->Name = L"btnAgregar";
			this->btnAgregar->Size = System::Drawing::Size(125, 40);
			this->btnAgregar->TabIndex = 32;
			this->btnAgregar->Text = L"Agregar    ";
			this->btnAgregar->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnAgregar->UseVisualStyleBackColor = false;
			// 
			// btnMostrar
			// 
			this->btnMostrar->BackColor = System::Drawing::Color::LightCyan;
			this->btnMostrar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMostrar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnMostrar.Image")));
			this->btnMostrar->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnMostrar->Location = System::Drawing::Point(470, 401);
			this->btnMostrar->Name = L"btnMostrar";
			this->btnMostrar->Size = System::Drawing::Size(125, 43);
			this->btnMostrar->TabIndex = 33;
			this->btnMostrar->Text = L"Mostrar   ";
			this->btnMostrar->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnMostrar->UseVisualStyleBackColor = false;
			this->btnMostrar->Click += gcnew System::EventHandler(this, &frmEmpleado::btnMostrar_Click);
			// 
			// cboSucursal
			// 
			this->cboSucursal->FormattingEnabled = true;
			this->cboSucursal->Location = System::Drawing::Point(270, 463);
			this->cboSucursal->Name = L"cboSucursal";
			this->cboSucursal->Size = System::Drawing::Size(100, 21);
			this->cboSucursal->TabIndex = 34;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(93, 120);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(34, 30);
			this->pictureBox2->TabIndex = 36;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(470, 90);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(112, 165);
			this->pictureBox3->TabIndex = 37;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(103, 463);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(34, 30);
			this->pictureBox1->TabIndex = 38;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(103, 424);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(34, 30);
			this->pictureBox4->TabIndex = 39;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(103, 384);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(34, 30);
			this->pictureBox5->TabIndex = 40;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(103, 339);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(34, 30);
			this->pictureBox6->TabIndex = 41;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(103, 296);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(34, 30);
			this->pictureBox7->TabIndex = 42;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(103, 255);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(34, 28);
			this->pictureBox8->TabIndex = 43;
			this->pictureBox8->TabStop = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(103, 211);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(34, 30);
			this->pictureBox9->TabIndex = 44;
			this->pictureBox9->TabStop = false;
			// 
			// lblEmpleadoID
			// 
			this->lblEmpleadoID->AutoSize = true;
			this->lblEmpleadoID->Location = System::Drawing::Point(287, 113);
			this->lblEmpleadoID->Name = L"lblEmpleadoID";
			this->lblEmpleadoID->Size = System::Drawing::Size(86, 13);
			this->lblEmpleadoID->TabIndex = 45;
			this->lblEmpleadoID->Text = L"ID de Empleado:";
			// 
			// txtEmpleadoID
			// 
			this->txtEmpleadoID->Location = System::Drawing::Point(290, 129);
			this->txtEmpleadoID->Name = L"txtEmpleadoID";
			this->txtEmpleadoID->Size = System::Drawing::Size(122, 20);
			this->txtEmpleadoID->TabIndex = 46;
			// 
			// frmEmpleado
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkCyan;
			this->ClientSize = System::Drawing::Size(661, 555);
			this->Controls->Add(this->txtEmpleadoID);
			this->Controls->Add(this->lblEmpleadoID);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->cboSucursal);
			this->Controls->Add(this->btnMostrar);
			this->Controls->Add(this->btnAgregar);
			this->Controls->Add(this->lblApellido);
			this->Controls->Add(this->lblA);
			this->Controls->Add(this->lblNombre);
			this->Controls->Add(this->lblN);
			this->Controls->Add(this->cboID);
			this->Controls->Add(this->lblID);
			this->Controls->Add(this->txtDepartamento);
			this->Controls->Add(this->txtVentas);
			this->Controls->Add(this->txtPrecioHora);
			this->Controls->Add(this->txtHorasExtras);
			this->Controls->Add(this->txtSueldo);
			this->Controls->Add(this->txtIngreso);
			this->Controls->Add(this->lblSucursal);
			this->Controls->Add(this->lblDepartamento);
			this->Controls->Add(this->lblVentas);
			this->Controls->Add(this->lblPrecioHora);
			this->Controls->Add(this->lblHorasExtras);
			this->Controls->Add(this->lblSueldo);
			this->Controls->Add(this->lblIngreso);
			this->Controls->Add(this->lblTitulo);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"frmEmpleado";
			this->Text = L"Empleado";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void btnMostrar_Click(System::Object^ sender, System::EventArgs^ e) {
		frmListaEmpleado^ formulario = gcnew frmListaEmpleado;
		formulario->Show();
	}
	};
}