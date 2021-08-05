#pragma once
#include "frmLibrosEstante.h"

namespace PI2021IIIP3EQUIPO1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmEstante
	/// </summary>
	public ref class frmEstante : public System::Windows::Forms::Form
	{
	public:
		frmEstante(void)
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
		~frmEstante()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblNumeroEstante;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ lblLetraInicial;
	private: System::Windows::Forms::Label^ lblLetraFinal;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ btnCrear;
	private: System::Windows::Forms::Button^ btnMostrar;



	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmEstante::typeid));
			this->lblNumeroEstante = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->lblLetraInicial = (gcnew System::Windows::Forms::Label());
			this->lblLetraFinal = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->btnCrear = (gcnew System::Windows::Forms::Button());
			this->btnMostrar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lblNumeroEstante
			// 
			this->lblNumeroEstante->AutoSize = true;
			this->lblNumeroEstante->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNumeroEstante->Location = System::Drawing::Point(128, 92);
			this->lblNumeroEstante->Name = L"lblNumeroEstante";
			this->lblNumeroEstante->Size = System::Drawing::Size(134, 15);
			this->lblNumeroEstante->TabIndex = 0;
			this->lblNumeroEstante->Text = L"Numero de Estante:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(268, 91);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(125, 20);
			this->textBox1->TabIndex = 1;
			// 
			// lblLetraInicial
			// 
			this->lblLetraInicial->AutoSize = true;
			this->lblLetraInicial->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblLetraInicial->Location = System::Drawing::Point(175, 117);
			this->lblLetraInicial->Name = L"lblLetraInicial";
			this->lblLetraInicial->Size = System::Drawing::Size(87, 15);
			this->lblLetraInicial->TabIndex = 2;
			this->lblLetraInicial->Text = L"Letra Inicial:";
			// 
			// lblLetraFinal
			// 
			this->lblLetraFinal->AutoSize = true;
			this->lblLetraFinal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblLetraFinal->Location = System::Drawing::Point(182, 146);
			this->lblLetraFinal->Name = L"lblLetraFinal";
			this->lblLetraFinal->Size = System::Drawing::Size(80, 15);
			this->lblLetraFinal->TabIndex = 3;
			this->lblLetraFinal->Text = L"Letra Final:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(268, 117);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(125, 20);
			this->textBox2->TabIndex = 4;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(268, 145);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(125, 20);
			this->textBox3->TabIndex = 5;
			// 
			// btnCrear
			// 
			this->btnCrear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCrear->Location = System::Drawing::Point(286, 202);
			this->btnCrear->Name = L"btnCrear";
			this->btnCrear->Size = System::Drawing::Size(107, 52);
			this->btnCrear->TabIndex = 6;
			this->btnCrear->Text = L"Crear";
			this->btnCrear->UseVisualStyleBackColor = true;
			// 
			// btnMostrar
			// 
			this->btnMostrar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMostrar->Location = System::Drawing::Point(501, 311);
			this->btnMostrar->Name = L"btnMostrar";
			this->btnMostrar->Size = System::Drawing::Size(95, 52);
			this->btnMostrar->TabIndex = 8;
			this->btnMostrar->Text = L"Mostrar libros ";
			this->btnMostrar->UseVisualStyleBackColor = true;
			this->btnMostrar->Click += gcnew System::EventHandler(this, &frmEstante::btnMostrar_Click);
			// 
			// frmEstante
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkCyan;
			this->ClientSize = System::Drawing::Size(608, 375);
			this->Controls->Add(this->btnMostrar);
			this->Controls->Add(this->btnCrear);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->lblLetraFinal);
			this->Controls->Add(this->lblLetraInicial);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->lblNumeroEstante);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"frmEstante";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Estante";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	
private: System::Void btnMostrar_Click(System::Object^ sender, System::EventArgs^ e) {
	frmLibrosEstante^ formulario = gcnew frmLibrosEstante;
	formulario->Show();
}
};
}
