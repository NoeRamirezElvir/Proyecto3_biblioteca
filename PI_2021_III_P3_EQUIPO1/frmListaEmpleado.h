#pragma once

namespace PI2021IIIP3EQUIPO1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmListaEmpleado
	/// </summary>
	public ref class frmListaEmpleado : public System::Windows::Forms::Form
	{
	public:
		frmListaEmpleado(void)
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
		~frmListaEmpleado()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:








	private: System::Windows::Forms::Label^ lblTitulo;

	private: System::Windows::Forms::DataGridViewComboBoxColumn^ colID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colNombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colApellido;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colFecha;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colSueldo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colHrsExtras;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colVentas;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colPrecio;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colDepartamento;
	private: System::Windows::Forms::DataGridViewComboBoxColumn^ colSucursal;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmListaEmpleado::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->colID = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
			this->colNombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colApellido = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colFecha = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colSueldo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colHrsExtras = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colVentas = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colPrecio = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colDepartamento = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colSucursal = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
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
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(10) {
				this->colID,
					this->colNombre, this->colApellido, this->colFecha, this->colSueldo, this->colHrsExtras, this->colVentas, this->colPrecio, this->colDepartamento,
					this->colSucursal
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 144);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(1050, 393);
			this->dataGridView1->TabIndex = 0;
			// 
			// colID
			// 
			this->colID->HeaderText = L"ID";
			this->colID->Name = L"colID";
			// 
			// colNombre
			// 
			this->colNombre->HeaderText = L"Nombre";
			this->colNombre->Name = L"colNombre";
			// 
			// colApellido
			// 
			this->colApellido->HeaderText = L"Apellido";
			this->colApellido->Name = L"colApellido";
			// 
			// colFecha
			// 
			this->colFecha->HeaderText = L"Fecha de Ingreso";
			this->colFecha->Name = L"colFecha";
			// 
			// colSueldo
			// 
			this->colSueldo->HeaderText = L"Sueldo";
			this->colSueldo->Name = L"colSueldo";
			// 
			// colHrsExtras
			// 
			this->colHrsExtras->HeaderText = L"Horas extras";
			this->colHrsExtras->Name = L"colHrsExtras";
			// 
			// colVentas
			// 
			this->colVentas->HeaderText = L"Cantidad de Ventas";
			this->colVentas->Name = L"colVentas";
			// 
			// colPrecio
			// 
			this->colPrecio->HeaderText = L"Precio por Hora";
			this->colPrecio->Name = L"colPrecio";
			// 
			// colDepartamento
			// 
			this->colDepartamento->HeaderText = L"Departamento";
			this->colDepartamento->Name = L"colDepartamento";
			// 
			// colSucursal
			// 
			this->colSucursal->HeaderText = L"Sucursal";
			this->colSucursal->Name = L"colSucursal";
			// 
			// lblTitulo
			// 
			this->lblTitulo->AutoSize = true;
			this->lblTitulo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitulo->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lblTitulo->Location = System::Drawing::Point(350, 62);
			this->lblTitulo->Name = L"lblTitulo";
			this->lblTitulo->Size = System::Drawing::Size(219, 25);
			this->lblTitulo->TabIndex = 1;
			this->lblTitulo->Text = L"Lista de Empleados";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(575, 38);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(57, 60);
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// frmListaEmpleado
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkCyan;
			this->ClientSize = System::Drawing::Size(1069, 549);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->lblTitulo);
			this->Controls->Add(this->dataGridView1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"frmListaEmpleado";
			this->Text = L"Lista de Empleados";
			this->Load += gcnew System::EventHandler(this, &frmListaEmpleado::frmListaEmpleado_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void frmListaEmpleado_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}