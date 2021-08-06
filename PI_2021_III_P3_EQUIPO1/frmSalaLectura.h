#pragma once

namespace PI2021IIIP3EQUIPO1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmSalaLectura
	/// </summary>
	public ref class frmSalaLectura : public System::Windows::Forms::Form
	{
	public:
		frmSalaLectura(void)
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
		~frmSalaLectura()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ lblID;
	private: System::Windows::Forms::Label^ lblCapacidad;
	private: System::Windows::Forms::Label^ lblEmpleadoSalaL;
	private: System::Windows::Forms::Label^ lblDisponibilidad;





	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ComboBox^ cboEncargadoSalaL;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmSalaLectura::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->lblID = (gcnew System::Windows::Forms::Label());
			this->lblCapacidad = (gcnew System::Windows::Forms::Label());
			this->lblEmpleadoSalaL = (gcnew System::Windows::Forms::Label());
			this->lblDisponibilidad = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->cboEncargadoSalaL = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(196, 232);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(188, 29);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Sala de lectura";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(88, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(418, 226);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// lblID
			// 
			this->lblID->AutoSize = true;
			this->lblID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblID->Location = System::Drawing::Point(119, 304);
			this->lblID->Name = L"lblID";
			this->lblID->Size = System::Drawing::Size(24, 13);
			this->lblID->TabIndex = 4;
			this->lblID->Text = L"ID:";
			// 
			// lblCapacidad
			// 
			this->lblCapacidad->AutoSize = true;
			this->lblCapacidad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCapacidad->Location = System::Drawing::Point(72, 377);
			this->lblCapacidad->Name = L"lblCapacidad";
			this->lblCapacidad->Size = System::Drawing::Size(71, 13);
			this->lblCapacidad->TabIndex = 5;
			this->lblCapacidad->Text = L"Capacidad:";
			// 
			// lblEmpleadoSalaL
			// 
			this->lblEmpleadoSalaL->AutoSize = true;
			this->lblEmpleadoSalaL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblEmpleadoSalaL->Location = System::Drawing::Point(288, 304);
			this->lblEmpleadoSalaL->Name = L"lblEmpleadoSalaL";
			this->lblEmpleadoSalaL->Size = System::Drawing::Size(76, 13);
			this->lblEmpleadoSalaL->TabIndex = 6;
			this->lblEmpleadoSalaL->Text = L"Encargado: ";
			// 
			// lblDisponibilidad
			// 
			this->lblDisponibilidad->AutoSize = true;
			this->lblDisponibilidad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDisponibilidad->Location = System::Drawing::Point(274, 377);
			this->lblDisponibilidad->Name = L"lblDisponibilidad";
			this->lblDisponibilidad->Size = System::Drawing::Size(90, 13);
			this->lblDisponibilidad->TabIndex = 7;
			this->lblDisponibilidad->Text = L"Disponibilidad:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(147, 301);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(111, 20);
			this->textBox1->TabIndex = 8;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(147, 374);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(111, 20);
			this->textBox2->TabIndex = 9;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(370, 374);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(121, 20);
			this->textBox4->TabIndex = 11;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LightSeaGreen;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button1->FlatAppearance->BorderSize = 2;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->Location = System::Drawing::Point(326, 422);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(180, 44);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Editar informacion";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// cboEncargadoSalaL
			// 
			this->cboEncargadoSalaL->FormattingEnabled = true;
			this->cboEncargadoSalaL->Location = System::Drawing::Point(370, 304);
			this->cboEncargadoSalaL->Name = L"cboEncargadoSalaL";
			this->cboEncargadoSalaL->Size = System::Drawing::Size(121, 21);
			this->cboEncargadoSalaL->TabIndex = 13;
			// 
			// frmSalaLectura
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->ClientSize = System::Drawing::Size(590, 490);
			this->Controls->Add(this->cboEncargadoSalaL);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->lblDisponibilidad);
			this->Controls->Add(this->lblEmpleadoSalaL);
			this->Controls->Add(this->lblCapacidad);
			this->Controls->Add(this->lblID);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"frmSalaLectura";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Sala De Lectura";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
