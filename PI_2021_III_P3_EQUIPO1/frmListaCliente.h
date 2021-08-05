#pragma once

namespace PI2021IIIP3EQUIPO1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmListaCliente
	/// </summary>
	public ref class frmListaCliente : public System::Windows::Forms::Form
	{
	public:
		frmListaCliente(void)
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
		~frmListaCliente()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colIDcliente;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colNombreCliente;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colDireccionCliente;
	private: System::Windows::Forms::DataGridViewComboBoxColumn^ colAñoCliente;
	private: System::Windows::Forms::DataGridViewComboBoxColumn^ colTipoMembresiaCliente;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colCorreoCliente;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colOcupacionCliente;












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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmListaCliente::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->colIDcliente = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colNombreCliente = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colDireccionCliente = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colAñoCliente = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
			this->colTipoMembresiaCliente = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
			this->colCorreoCliente = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colOcupacionCliente = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::LightSteelBlue;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->colIDcliente,
					this->colNombreCliente, this->colDireccionCliente, this->colAñoCliente, this->colTipoMembresiaCliente, this->colCorreoCliente,
					this->colOcupacionCliente
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 124);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(745, 411);
			this->dataGridView1->TabIndex = 0;
			// 
			// colIDcliente
			// 
			this->colIDcliente->HeaderText = L"ID";
			this->colIDcliente->Name = L"colIDcliente";
			// 
			// colNombreCliente
			// 
			this->colNombreCliente->HeaderText = L"Nombre";
			this->colNombreCliente->Name = L"colNombreCliente";
			// 
			// colDireccionCliente
			// 
			this->colDireccionCliente->HeaderText = L"Direccion";
			this->colDireccionCliente->Name = L"colDireccionCliente";
			// 
			// colAñoCliente
			// 
			this->colAñoCliente->HeaderText = L"Año de ingreso";
			this->colAñoCliente->Name = L"colAñoCliente";
			// 
			// colTipoMembresiaCliente
			// 
			this->colTipoMembresiaCliente->HeaderText = L"Tipo de membresia";
			this->colTipoMembresiaCliente->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Clasica", L"Premium", L"Mixta" });
			this->colTipoMembresiaCliente->Name = L"colTipoMembresiaCliente";
			// 
			// colCorreoCliente
			// 
			this->colCorreoCliente->HeaderText = L"Correo electronico";
			this->colCorreoCliente->Name = L"colCorreoCliente";
			// 
			// colOcupacionCliente
			// 
			this->colOcupacionCliente->HeaderText = L"Ocupacion";
			this->colOcupacionCliente->Name = L"colOcupacionCliente";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label1->Location = System::Drawing::Point(234, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(294, 36);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Clientes Registrados";
			// 
			// frmListaCliente
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkSlateGray;
			this->ClientSize = System::Drawing::Size(772, 561);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"frmListaCliente";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Clientes Registrados";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
