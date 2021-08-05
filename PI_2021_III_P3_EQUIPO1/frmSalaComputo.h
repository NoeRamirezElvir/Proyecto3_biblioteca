#pragma once

namespace PI2021IIIP3EQUIPO1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmSalaComputo
	/// </summary>
	public ref class frmSalaComputo : public System::Windows::Forms::Form
	{
	public:
		frmSalaComputo(void)
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
		~frmSalaComputo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblId;
	protected:
	private: System::Windows::Forms::Label^ lblCapacidad;
	private: System::Windows::Forms::Label^ lblEmpleado;
	private: System::Windows::Forms::Label^ lblDispo;
	private: System::Windows::Forms::Label^ lblComputadora;
	private: System::Windows::Forms::Label^ lblHoraInicial;
	private: System::Windows::Forms::Label^ lblHoraFinal;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ lblcosto;

	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ComboBox^ cboId;

	private: System::Windows::Forms::Label^ lblCliente;
	private: System::Windows::Forms::ComboBox^ cboCliente;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmSalaComputo::typeid));
			this->lblId = (gcnew System::Windows::Forms::Label());
			this->lblCapacidad = (gcnew System::Windows::Forms::Label());
			this->lblEmpleado = (gcnew System::Windows::Forms::Label());
			this->lblDispo = (gcnew System::Windows::Forms::Label());
			this->lblComputadora = (gcnew System::Windows::Forms::Label());
			this->lblHoraInicial = (gcnew System::Windows::Forms::Label());
			this->lblHoraFinal = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->lblcosto = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->cboId = (gcnew System::Windows::Forms::ComboBox());
			this->lblCliente = (gcnew System::Windows::Forms::Label());
			this->cboCliente = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// lblId
			// 
			this->lblId->AutoSize = true;
			this->lblId->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblId->Location = System::Drawing::Point(88, 42);
			this->lblId->Name = L"lblId";
			this->lblId->Size = System::Drawing::Size(103, 15);
			this->lblId->TabIndex = 0;
			this->lblId->Text = L"ID Laboratorio:";
			// 
			// lblCapacidad
			// 
			this->lblCapacidad->AutoSize = true;
			this->lblCapacidad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCapacidad->Location = System::Drawing::Point(364, 44);
			this->lblCapacidad->Name = L"lblCapacidad";
			this->lblCapacidad->Size = System::Drawing::Size(79, 15);
			this->lblCapacidad->TabIndex = 1;
			this->lblCapacidad->Text = L"Capacidad:";
			// 
			// lblEmpleado
			// 
			this->lblEmpleado->AutoSize = true;
			this->lblEmpleado->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblEmpleado->Location = System::Drawing::Point(369, 70);
			this->lblEmpleado->Name = L"lblEmpleado";
			this->lblEmpleado->Size = System::Drawing::Size(74, 15);
			this->lblEmpleado->TabIndex = 2;
			this->lblEmpleado->Text = L" Asignado:";
			// 
			// lblDispo
			// 
			this->lblDispo->AutoSize = true;
			this->lblDispo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDispo->Location = System::Drawing::Point(102, 102);
			this->lblDispo->Name = L"lblDispo";
			this->lblDispo->Size = System::Drawing::Size(87, 15);
			this->lblDispo->TabIndex = 3;
			this->lblDispo->Text = L"Disponibles:";
			// 
			// lblComputadora
			// 
			this->lblComputadora->AutoSize = true;
			this->lblComputadora->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblComputadora->Location = System::Drawing::Point(88, 135);
			this->lblComputadora->Name = L"lblComputadora";
			this->lblComputadora->Size = System::Drawing::Size(104, 15);
			this->lblComputadora->TabIndex = 4;
			this->lblComputadora->Text = L"Computadoras:";
			// 
			// lblHoraInicial
			// 
			this->lblHoraInicial->AutoSize = true;
			this->lblHoraInicial->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblHoraInicial->Location = System::Drawing::Point(102, 165);
			this->lblHoraInicial->Name = L"lblHoraInicial";
			this->lblHoraInicial->Size = System::Drawing::Size(85, 15);
			this->lblHoraInicial->TabIndex = 5;
			this->lblHoraInicial->Text = L"Hora Inicial:";
			// 
			// lblHoraFinal
			// 
			this->lblHoraFinal->AutoSize = true;
			this->lblHoraFinal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblHoraFinal->Location = System::Drawing::Point(106, 196);
			this->lblHoraFinal->Name = L"lblHoraFinal";
			this->lblHoraFinal->Size = System::Drawing::Size(78, 15);
			this->lblHoraFinal->TabIndex = 6;
			this->lblHoraFinal->Text = L"Hora Final:";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(416, 107);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(143, 135);
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// lblcosto
			// 
			this->lblcosto->AutoSize = true;
			this->lblcosto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblcosto->Location = System::Drawing::Point(102, 222);
			this->lblcosto->Name = L"lblcosto";
			this->lblcosto->Size = System::Drawing::Size(82, 15);
			this->lblcosto->TabIndex = 8;
			this->lblcosto->Text = L"Costo Hora:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(449, 39);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(110, 20);
			this->textBox2->TabIndex = 10;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(449, 65);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(110, 20);
			this->textBox3->TabIndex = 11;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(195, 101);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(110, 20);
			this->textBox4->TabIndex = 12;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(196, 135);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(109, 20);
			this->textBox5->TabIndex = 13;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(195, 164);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(109, 20);
			this->textBox6->TabIndex = 14;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(195, 191);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(109, 20);
			this->textBox7->TabIndex = 15;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(196, 222);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(109, 20);
			this->textBox8->TabIndex = 16;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(290, 297);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(105, 41);
			this->button1->TabIndex = 17;
			this->button1->Text = L"Registrar Visita";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// cboId
			// 
			this->cboId->FormattingEnabled = true;
			this->cboId->Location = System::Drawing::Point(195, 38);
			this->cboId->Name = L"cboId";
			this->cboId->Size = System::Drawing::Size(110, 21);
			this->cboId->TabIndex = 18;
			// 
			// lblCliente
			// 
			this->lblCliente->AutoSize = true;
			this->lblCliente->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCliente->Location = System::Drawing::Point(128, 71);
			this->lblCliente->Name = L"lblCliente";
			this->lblCliente->Size = System::Drawing::Size(56, 15);
			this->lblCliente->TabIndex = 19;
			this->lblCliente->Text = L"Cliente:";
			// 
			// cboCliente
			// 
			this->cboCliente->FormattingEnabled = true;
			this->cboCliente->Location = System::Drawing::Point(196, 70);
			this->cboCliente->Name = L"cboCliente";
			this->cboCliente->Size = System::Drawing::Size(109, 21);
			this->cboCliente->TabIndex = 20;
			// 
			// frmSalaComputo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkCyan;
			this->ClientSize = System::Drawing::Size(665, 412);
			this->Controls->Add(this->cboCliente);
			this->Controls->Add(this->lblCliente);
			this->Controls->Add(this->cboId);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->lblcosto);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->lblHoraFinal);
			this->Controls->Add(this->lblHoraInicial);
			this->Controls->Add(this->lblComputadora);
			this->Controls->Add(this->lblDispo);
			this->Controls->Add(this->lblEmpleado);
			this->Controls->Add(this->lblCapacidad);
			this->Controls->Add(this->lblId);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"frmSalaComputo";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Sala Computo";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
