#pragma once
#include "frmInventario.h"

namespace PI2021IIIP3EQUIPO1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmRecibidos
	/// </summary>
	public ref class frmRecibidos : public System::Windows::Forms::Form
	{
	public:
		frmRecibidos(void)
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
		~frmRecibidos()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnRegistrarRecibido;
	protected:
	private: System::Windows::Forms::Button^ btnMostrarRecibido;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ lblID;
	private: System::Windows::Forms::Label^ lblFecha;
	private: System::Windows::Forms::Label^ lblHora;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ lblEmpleado;
	private: System::Windows::Forms::Label^ lblProveedor;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmRecibidos::typeid));
			this->btnRegistrarRecibido = (gcnew System::Windows::Forms::Button());
			this->btnMostrarRecibido = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lblID = (gcnew System::Windows::Forms::Label());
			this->lblFecha = (gcnew System::Windows::Forms::Label());
			this->lblHora = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->lblEmpleado = (gcnew System::Windows::Forms::Label());
			this->lblProveedor = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// btnRegistrarRecibido
			// 
			this->btnRegistrarRecibido->BackColor = System::Drawing::Color::MediumAquamarine;
			this->btnRegistrarRecibido->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnRegistrarRecibido->FlatAppearance->BorderSize = 2;
			this->btnRegistrarRecibido->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnRegistrarRecibido->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnRegistrarRecibido.Image")));
			this->btnRegistrarRecibido->Location = System::Drawing::Point(332, 287);
			this->btnRegistrarRecibido->Name = L"btnRegistrarRecibido";
			this->btnRegistrarRecibido->Size = System::Drawing::Size(103, 50);
			this->btnRegistrarRecibido->TabIndex = 0;
			this->btnRegistrarRecibido->Text = L"Registrar";
			this->btnRegistrarRecibido->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnRegistrarRecibido->UseVisualStyleBackColor = false;
			// 
			// btnMostrarRecibido
			// 
			this->btnMostrarRecibido->BackColor = System::Drawing::Color::MediumAquamarine;
			this->btnMostrarRecibido->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnMostrarRecibido->FlatAppearance->BorderSize = 2;
			this->btnMostrarRecibido->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMostrarRecibido->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnMostrarRecibido.Image")));
			this->btnMostrarRecibido->Location = System::Drawing::Point(331, 364);
			this->btnMostrarRecibido->Name = L"btnMostrarRecibido";
			this->btnMostrarRecibido->Size = System::Drawing::Size(104, 48);
			this->btnMostrarRecibido->TabIndex = 1;
			this->btnMostrarRecibido->Text = L"Mostrar Encargos";
			this->btnMostrarRecibido->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnMostrarRecibido->UseVisualStyleBackColor = false;
			this->btnMostrarRecibido->Click += gcnew System::EventHandler(this, &frmRecibidos::btnMostrarRecibido_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(176, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(144, 31);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Inventario";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(157, 41);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(183, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Registro de paquetes recibidos";
			// 
			// lblID
			// 
			this->lblID->AutoSize = true;
			this->lblID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblID->Location = System::Drawing::Point(33, 144);
			this->lblID->Name = L"lblID";
			this->lblID->Size = System::Drawing::Size(95, 13);
			this->lblID->TabIndex = 4;
			this->lblID->Text = L"ID del paquete:";
			// 
			// lblFecha
			// 
			this->lblFecha->AutoSize = true;
			this->lblFecha->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblFecha->Location = System::Drawing::Point(82, 201);
			this->lblFecha->Name = L"lblFecha";
			this->lblFecha->Size = System::Drawing::Size(46, 13);
			this->lblFecha->TabIndex = 5;
			this->lblFecha->Text = L"Fecha:";
			// 
			// lblHora
			// 
			this->lblHora->AutoSize = true;
			this->lblHora->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblHora->Location = System::Drawing::Point(82, 258);
			this->lblHora->Name = L"lblHora";
			this->lblHora->Size = System::Drawing::Size(38, 13);
			this->lblHora->TabIndex = 6;
			this->lblHora->Text = L"Hora:";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(331, 141);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 7;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(331, 198);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 21);
			this->comboBox2->TabIndex = 8;
			// 
			// lblEmpleado
			// 
			this->lblEmpleado->AutoSize = true;
			this->lblEmpleado->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblEmpleado->Location = System::Drawing::Point(260, 144);
			this->lblEmpleado->Name = L"lblEmpleado";
			this->lblEmpleado->Size = System::Drawing::Size(72, 13);
			this->lblEmpleado->TabIndex = 9;
			this->lblEmpleado->Text = L"Encargado:";
			// 
			// lblProveedor
			// 
			this->lblProveedor->AutoSize = true;
			this->lblProveedor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblProveedor->Location = System::Drawing::Point(263, 201);
			this->lblProveedor->Name = L"lblProveedor";
			this->lblProveedor->Size = System::Drawing::Size(69, 13);
			this->lblProveedor->TabIndex = 10;
			this->lblProveedor->Text = L"Proveedor:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(125, 141);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(106, 20);
			this->textBox1->TabIndex = 11;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(125, 198);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(106, 20);
			this->textBox2->TabIndex = 12;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(125, 255);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(106, 20);
			this->textBox3->TabIndex = 13;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(36, 287);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(269, 186);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 14;
			this->pictureBox1->TabStop = false;
			// 
			// frmRecibidos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSeaGreen;
			this->ClientSize = System::Drawing::Size(508, 487);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->lblProveedor);
			this->Controls->Add(this->lblEmpleado);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->lblHora);
			this->Controls->Add(this->lblFecha);
			this->Controls->Add(this->lblID);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnMostrarRecibido);
			this->Controls->Add(this->btnRegistrarRecibido);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"frmRecibidos";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Recibidos";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnMostrarRecibido_Click(System::Object^ sender, System::EventArgs^ e) {
		frmInventario^ listaInventario = gcnew frmInventario;
		listaInventario->Show();
	}
};
}
