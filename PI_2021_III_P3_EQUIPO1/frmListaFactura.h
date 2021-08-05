#pragma once

namespace PI2021IIIP3EQUIPO1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmListaFactura
	/// </summary>
	public ref class frmListaFactura : public System::Windows::Forms::Form
	{
	public:
		frmListaFactura(void)
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
		~frmListaFactura()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colFactura;
	private: System::Windows::Forms::DataGridViewComboBoxColumn^ colCliente;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colClienteID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colMembresia;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colEmpleado;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colFecha;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colTipoPrestamo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colPagar;
	private: System::Windows::Forms::Label^ lblTitulo;
	private: System::Windows::Forms::PictureBox^ pictureBox1;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmListaFactura::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->colFactura = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colCliente = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
			this->colClienteID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colMembresia = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colEmpleado = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colFecha = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colTipoPrestamo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colPagar = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->lblTitulo = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::LightCyan;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->colFactura,
					this->colCliente, this->colClienteID, this->colMembresia, this->colEmpleado, this->colFecha, this->colTipoPrestamo, this->colPagar
			});
			this->dataGridView1->Location = System::Drawing::Point(22, 152);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(875, 438);
			this->dataGridView1->TabIndex = 0;
			// 
			// colFactura
			// 
			this->colFactura->HeaderText = L"No Factura";
			this->colFactura->Name = L"colFactura";
			// 
			// colCliente
			// 
			this->colCliente->HeaderText = L"Cliente";
			this->colCliente->Name = L"colCliente";
			// 
			// colClienteID
			// 
			this->colClienteID->HeaderText = L"ID de Cliente";
			this->colClienteID->Name = L"colClienteID";
			// 
			// colMembresia
			// 
			this->colMembresia->HeaderText = L"Membresia de Cliente";
			this->colMembresia->Name = L"colMembresia";
			// 
			// colEmpleado
			// 
			this->colEmpleado->HeaderText = L"Empleado";
			this->colEmpleado->Name = L"colEmpleado";
			// 
			// colFecha
			// 
			this->colFecha->HeaderText = L"Fecha";
			this->colFecha->Name = L"colFecha";
			// 
			// colTipoPrestamo
			// 
			this->colTipoPrestamo->HeaderText = L"Tipo de Prestamo";
			this->colTipoPrestamo->Name = L"colTipoPrestamo";
			// 
			// colPagar
			// 
			this->colPagar->HeaderText = L"Total a Pagar";
			this->colPagar->Name = L"colPagar";
			// 
			// lblTitulo
			// 
			this->lblTitulo->AutoSize = true;
			this->lblTitulo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitulo->Location = System::Drawing::Point(383, 60);
			this->lblTitulo->Name = L"lblTitulo";
			this->lblTitulo->Size = System::Drawing::Size(195, 25);
			this->lblTitulo->TabIndex = 1;
			this->lblTitulo->Text = L"Lista de Facturas";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(249, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(89, 114);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// frmListaFactura
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkCyan;
			this->ClientSize = System::Drawing::Size(909, 602);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->lblTitulo);
			this->Controls->Add(this->dataGridView1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"frmListaFactura";
			this->Text = L"frmListaFactura";
			this->Load += gcnew System::EventHandler(this, &frmListaFactura::frmListaFactura_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void frmListaFactura_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}

