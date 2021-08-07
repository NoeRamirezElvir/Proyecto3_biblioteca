#pragma once

namespace PI2021IIIP3EQUIPO1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmRegistroComputadoras
	/// </summary>
	public ref class frmRegistroComputadoras : public System::Windows::Forms::Form
	{
	public:
		frmRegistroComputadoras(void)
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
		~frmRegistroComputadoras()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colMarca;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colModelo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colhdd;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colram;
	private: System::Windows::Forms::DataGridViewComboBoxColumn^ colTipo;
	private: System::Windows::Forms::DataGridViewComboBoxColumn^ colOS;
	private: System::Windows::Forms::DataGridViewComboBoxColumn^ colObservacion;
	private: System::Windows::Forms::Label^ lblTitulo;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmRegistroComputadoras::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->colID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colMarca = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colModelo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colhdd = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colram = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colTipo = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
			this->colOS = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
			this->colObservacion = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
			this->lblTitulo = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->colID,
					this->colMarca, this->colModelo, this->colhdd, this->colram, this->colTipo, this->colOS, this->colObservacion
			});
			this->dataGridView1->Location = System::Drawing::Point(24, 86);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(839, 339);
			this->dataGridView1->TabIndex = 0;
			// 
			// colID
			// 
			this->colID->HeaderText = L"ID";
			this->colID->Name = L"colID";
			// 
			// colMarca
			// 
			this->colMarca->HeaderText = L"Marca";
			this->colMarca->Name = L"colMarca";
			// 
			// colModelo
			// 
			this->colModelo->HeaderText = L"Modelo";
			this->colModelo->Name = L"colModelo";
			// 
			// colhdd
			// 
			this->colhdd->HeaderText = L"Disco Duro";
			this->colhdd->Name = L"colhdd";
			// 
			// colram
			// 
			this->colram->HeaderText = L"Ram";
			this->colram->Name = L"colram";
			// 
			// colTipo
			// 
			this->colTipo->HeaderText = L"Tipo";
			this->colTipo->Name = L"colTipo";
			// 
			// colOS
			// 
			this->colOS->HeaderText = L"Sistema Operativo";
			this->colOS->Name = L"colOS";
			// 
			// colObservacion
			// 
			this->colObservacion->HeaderText = L"Observacion";
			this->colObservacion->Name = L"colObservacion";
			// 
			// lblTitulo
			// 
			this->lblTitulo->AutoSize = true;
			this->lblTitulo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitulo->Location = System::Drawing::Point(290, 41);
			this->lblTitulo->Name = L"lblTitulo";
			this->lblTitulo->Size = System::Drawing::Size(297, 25);
			this->lblTitulo->TabIndex = 1;
			this->lblTitulo->Text = L"Computadoras Registradas";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Location = System::Drawing::Point(664, 30);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(143, 50);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// frmRegistroComputadoras
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkCyan;
			this->ClientSize = System::Drawing::Size(885, 477);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->lblTitulo);
			this->Controls->Add(this->dataGridView1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"frmRegistroComputadoras";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Registro Computadoras";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
};
}
