#pragma once

namespace PI2021IIIP3EQUIPO1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmLibrosEstante
	/// </summary>
	public ref class frmLibrosEstante : public System::Windows::Forms::Form
	{
	public:
		frmLibrosEstante(void)
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
		~frmLibrosEstante()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblNumeroEstante;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colNombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colCodigo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colCategoria;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colAnio;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colVolumen;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colAutor;
	private: System::Windows::Forms::Button^ btnListar;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmLibrosEstante::typeid));
			this->lblNumeroEstante = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->colNombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colCodigo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colCategoria = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colAnio = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colVolumen = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colAutor = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnListar = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// lblNumeroEstante
			// 
			this->lblNumeroEstante->AutoSize = true;
			this->lblNumeroEstante->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNumeroEstante->Location = System::Drawing::Point(37, 35);
			this->lblNumeroEstante->Name = L"lblNumeroEstante";
			this->lblNumeroEstante->Size = System::Drawing::Size(134, 15);
			this->lblNumeroEstante->TabIndex = 0;
			this->lblNumeroEstante->Text = L"Numero de Estante:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(177, 34);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(41, 20);
			this->textBox1->TabIndex = 1;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->colNombre,
					this->colCodigo, this->colCategoria, this->colAnio, this->colVolumen, this->colAutor
			});
			this->dataGridView1->Location = System::Drawing::Point(40, 81);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(641, 215);
			this->dataGridView1->TabIndex = 2;
			// 
			// colNombre
			// 
			this->colNombre->HeaderText = L"Nombre";
			this->colNombre->Name = L"colNombre";
			// 
			// colCodigo
			// 
			this->colCodigo->HeaderText = L"Código";
			this->colCodigo->Name = L"colCodigo";
			// 
			// colCategoria
			// 
			this->colCategoria->HeaderText = L"Categoría";
			this->colCategoria->Name = L"colCategoria";
			// 
			// colAnio
			// 
			this->colAnio->HeaderText = L"Año de edición";
			this->colAnio->Name = L"colAnio";
			// 
			// colVolumen
			// 
			this->colVolumen->HeaderText = L"No. Volumen";
			this->colVolumen->Name = L"colVolumen";
			// 
			// colAutor
			// 
			this->colAutor->HeaderText = L"Autor";
			this->colAutor->Name = L"colAutor";
			// 
			// btnListar
			// 
			this->btnListar->BackColor = System::Drawing::Color::PeachPuff;
			this->btnListar->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnListar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnListar->Location = System::Drawing::Point(470, 26);
			this->btnListar->Name = L"btnListar";
			this->btnListar->Size = System::Drawing::Size(76, 35);
			this->btnListar->TabIndex = 3;
			this->btnListar->Text = L"Listar";
			this->btnListar->UseVisualStyleBackColor = false;
			// 
			// frmLibrosEstante
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkCyan;
			this->ClientSize = System::Drawing::Size(719, 389);
			this->Controls->Add(this->btnListar);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->lblNumeroEstante);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"frmLibrosEstante";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Libros Estante";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
};
}
