#pragma once

namespace PI2021IIIP3EQUIPO1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmVisitasSalaComputo
	/// </summary>
	public ref class frmVisitasSalaComputo : public System::Windows::Forms::Form
	{
	public:
		frmVisitasSalaComputo(void)
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
		~frmVisitasSalaComputo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dgvSalaComputo;
	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colIdLab;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colNombreCliente;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colAño;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colMes;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colDia;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colHoraInicial;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colHoraFinal;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colCapacidad;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colEncargado;
	private: System::Windows::Forms::Label^ label1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmVisitasSalaComputo::typeid));
			this->dgvSalaComputo = (gcnew System::Windows::Forms::DataGridView());
			this->colIdLab = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colNombreCliente = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colAño = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colMes = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colDia = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colHoraInicial = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colHoraFinal = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colCapacidad = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colEncargado = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvSalaComputo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// dgvSalaComputo
			// 
			this->dgvSalaComputo->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
			this->dgvSalaComputo->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvSalaComputo->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->colIdLab,
					this->colNombreCliente, this->colAño, this->colMes, this->colDia, this->colHoraInicial, this->colHoraFinal, this->colCapacidad,
					this->colEncargado
			});
			this->dgvSalaComputo->GridColor = System::Drawing::SystemColors::ActiveCaption;
			this->dgvSalaComputo->Location = System::Drawing::Point(27, 80);
			this->dgvSalaComputo->Name = L"dgvSalaComputo";
			this->dgvSalaComputo->Size = System::Drawing::Size(932, 325);
			this->dgvSalaComputo->TabIndex = 0;
			// 
			// colIdLab
			// 
			this->colIdLab->HeaderText = L"ID Laboratorio";
			this->colIdLab->Name = L"colIdLab";
			// 
			// colNombreCliente
			// 
			this->colNombreCliente->HeaderText = L"Cliente";
			this->colNombreCliente->Name = L"colNombreCliente";
			// 
			// colAño
			// 
			this->colAño->HeaderText = L"Año";
			this->colAño->Name = L"colAño";
			// 
			// colMes
			// 
			this->colMes->HeaderText = L"Mes";
			this->colMes->Name = L"colMes";
			// 
			// colDia
			// 
			this->colDia->HeaderText = L"Día";
			this->colDia->Name = L"colDia";
			// 
			// colHoraInicial
			// 
			this->colHoraInicial->HeaderText = L"Hora Inicial";
			this->colHoraInicial->Name = L"colHoraInicial";
			// 
			// colHoraFinal
			// 
			this->colHoraFinal->HeaderText = L"Hora Final";
			this->colHoraFinal->Name = L"colHoraFinal";
			// 
			// colCapacidad
			// 
			this->colCapacidad->HeaderText = L"Capacidad";
			this->colCapacidad->Name = L"colCapacidad";
			// 
			// colEncargado
			// 
			this->colEncargado->HeaderText = L"Encargado";
			this->colEncargado->Name = L"colEncargado";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(393, 38);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(211, 25);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Registro de Visitas";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(623, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(70, 67);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// frmVisitasSalaComputo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkCyan;
			this->ClientSize = System::Drawing::Size(984, 434);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dgvSalaComputo);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"frmVisitasSalaComputo";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Visitas Sala de Computo";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvSalaComputo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
