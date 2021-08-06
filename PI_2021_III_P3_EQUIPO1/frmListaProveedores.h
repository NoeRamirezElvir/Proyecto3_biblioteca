#pragma once

namespace PI2021IIIP3EQUIPO1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmListaProveedores
	/// </summary>
	public ref class frmListaProveedores : public System::Windows::Forms::Form
	{
	public:
		frmListaProveedores(void)
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
		~frmListaProveedores()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colIDProveedores;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colNombreProveedor;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colTelefonoProveedores;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colRTN;
	private: System::Windows::Forms::DataGridViewComboBoxColumn^ colFechaProveedor;
	private: System::Windows::Forms::DataGridViewComboBoxColumn^ colCiudad;
	private: System::Windows::Forms::DataGridViewComboBoxColumn^ colDireccionProveedor;
	private: System::Windows::Forms::Label^ lblProveedores;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmListaProveedores::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->colIDProveedores = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colNombreProveedor = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colTelefonoProveedores = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colRTN = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colFechaProveedor = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
			this->colCiudad = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
			this->colDireccionProveedor = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
			this->lblProveedores = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::PaleTurquoise;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->colIDProveedores,
					this->colNombreProveedor, this->colTelefonoProveedores, this->colRTN, this->colFechaProveedor, this->colCiudad, this->colDireccionProveedor
			});
			this->dataGridView1->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dataGridView1->Location = System::Drawing::Point(8, 98);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(743, 450);
			this->dataGridView1->TabIndex = 0;
			// 
			// colIDProveedores
			// 
			this->colIDProveedores->HeaderText = L"ID";
			this->colIDProveedores->Name = L"colIDProveedores";
			// 
			// colNombreProveedor
			// 
			this->colNombreProveedor->HeaderText = L"Nombre";
			this->colNombreProveedor->Name = L"colNombreProveedor";
			// 
			// colTelefonoProveedores
			// 
			this->colTelefonoProveedores->HeaderText = L"Telefono";
			this->colTelefonoProveedores->Name = L"colTelefonoProveedores";
			// 
			// colRTN
			// 
			this->colRTN->HeaderText = L"RTN";
			this->colRTN->Name = L"colRTN";
			// 
			// colFechaProveedor
			// 
			this->colFechaProveedor->HeaderText = L"Fecha";
			this->colFechaProveedor->Name = L"colFechaProveedor";
			// 
			// colCiudad
			// 
			this->colCiudad->HeaderText = L"Ciudad";
			this->colCiudad->Name = L"colCiudad";
			// 
			// colDireccionProveedor
			// 
			this->colDireccionProveedor->HeaderText = L"Direccion";
			this->colDireccionProveedor->Name = L"colDireccionProveedor";
			// 
			// lblProveedores
			// 
			this->lblProveedores->AutoSize = true;
			this->lblProveedores->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblProveedores->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblProveedores->Location = System::Drawing::Point(265, 23);
			this->lblProveedores->Name = L"lblProveedores";
			this->lblProveedores->Size = System::Drawing::Size(207, 37);
			this->lblProveedores->TabIndex = 1;
			this->lblProveedores->Text = L"Proveedores";
			// 
			// frmListaProveedores
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SeaGreen;
			this->ClientSize = System::Drawing::Size(761, 560);
			this->Controls->Add(this->lblProveedores);
			this->Controls->Add(this->dataGridView1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"frmListaProveedores";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Lista de Proveedores";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
