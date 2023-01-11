#pragma once
#include <vector>

namespace КурсовойпроектАСД {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ Nominal_tb;


	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;









	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel4;
	private: System::Windows::Forms::Button^ Solve_btn;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ Sum_tb;

	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
	private: System::Windows::Forms::Label^ ResCount_lb;

	private: System::Windows::Forms::TextBox^ ResCurrency_tb;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ обучениеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ теоретическиеСведенияToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ тестToolStripMenuItem;






	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Nominal_tb = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Solve_btn = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Sum_tb = (gcnew System::Windows::Forms::TextBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->ResCount_lb = (gcnew System::Windows::Forms::Label());
			this->ResCurrency_tb = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->обучениеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->теоретическиеСведенияToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->тестToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox1->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->tableLayoutPanel4->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->tableLayoutPanel1);
			this->groupBox1->Location = System::Drawing::Point(12, 27);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(429, 245);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Задача о размене";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				63.78897F)));
			this->tableLayoutPanel1->Controls->Add(this->label1, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->Nominal_tb, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel2, 0, 3);
			this->tableLayoutPanel1->Location = System::Drawing::Point(6, 19);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 4;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 57.89474F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 42.10526F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 18)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 176)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(417, 220);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(3, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(170, 15);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Номинал доступных купюр";
			// 
			// Nominal_tb
			// 
			this->Nominal_tb->Location = System::Drawing::Point(3, 18);
			this->Nominal_tb->Name = L"Nominal_tb";
			this->Nominal_tb->Size = System::Drawing::Size(411, 20);
			this->Nominal_tb->TabIndex = 1;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 2;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				58.15085F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				41.84915F)));
			this->tableLayoutPanel2->Controls->Add(this->groupBox2, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->groupBox3, 1, 0);
			this->tableLayoutPanel2->Location = System::Drawing::Point(3, 46);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 1;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(411, 171);
			this->tableLayoutPanel2->TabIndex = 3;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->tableLayoutPanel4);
			this->groupBox2->Location = System::Drawing::Point(3, 3);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(232, 90);
			this->groupBox2->TabIndex = 6;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L" ";
			this->groupBox2->Enter += gcnew System::EventHandler(this, &MainForm::groupBox2_Enter);
			// 
			// tableLayoutPanel4
			// 
			this->tableLayoutPanel4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->tableLayoutPanel4->ColumnCount = 1;
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel4->Controls->Add(this->Solve_btn, 0, 2);
			this->tableLayoutPanel4->Controls->Add(this->label2, 0, 0);
			this->tableLayoutPanel4->Controls->Add(this->Sum_tb, 0, 1);
			this->tableLayoutPanel4->Location = System::Drawing::Point(6, 10);
			this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
			this->tableLayoutPanel4->RowCount = 3;
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 42.22222F)));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 57.77778F)));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 33)));
			this->tableLayoutPanel4->Size = System::Drawing::Size(221, 74);
			this->tableLayoutPanel4->TabIndex = 7;
			// 
			// Solve_btn
			// 
			this->Solve_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Solve_btn->Location = System::Drawing::Point(3, 43);
			this->Solve_btn->Name = L"Solve_btn";
			this->Solve_btn->Size = System::Drawing::Size(211, 23);
			this->Solve_btn->TabIndex = 9;
			this->Solve_btn->Text = L"Решить задачу";
			this->Solve_btn->UseVisualStyleBackColor = true;
			this->Solve_btn->Click += gcnew System::EventHandler(this, &MainForm::Solve_btn_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(3, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(189, 16);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Сумма, подлежащая размену";
			// 
			// Sum_tb
			// 
			this->Sum_tb->Location = System::Drawing::Point(3, 20);
			this->Sum_tb->Name = L"Sum_tb";
			this->Sum_tb->Size = System::Drawing::Size(211, 20);
			this->Sum_tb->TabIndex = 8;
			// 
			// groupBox3
			// 
			this->groupBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->groupBox3->Controls->Add(this->tableLayoutPanel3);
			this->groupBox3->Location = System::Drawing::Point(241, 3);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(166, 165);
			this->groupBox3->TabIndex = 7;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L" Результаты";
			this->groupBox3->Enter += gcnew System::EventHandler(this, &MainForm::groupBox3_Enter);
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->ColumnCount = 1;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel3->Controls->Add(this->ResCount_lb, 0, 2);
			this->tableLayoutPanel3->Controls->Add(this->ResCurrency_tb, 0, 1);
			this->tableLayoutPanel3->Controls->Add(this->label3, 0, 0);
			this->tableLayoutPanel3->Location = System::Drawing::Point(6, 19);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 3;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 15.2F)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 84.8F)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 17)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(154, 140);
			this->tableLayoutPanel3->TabIndex = 6;
			// 
			// ResCount_lb
			// 
			this->ResCount_lb->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->ResCount_lb->AutoSize = true;
			this->ResCount_lb->Location = System::Drawing::Point(3, 122);
			this->ResCount_lb->Name = L"ResCount_lb";
			this->ResCount_lb->Padding = System::Windows::Forms::Padding(0, 4, 0, 0);
			this->ResCount_lb->Size = System::Drawing::Size(103, 18);
			this->ResCount_lb->TabIndex = 7;
			this->ResCount_lb->Text = L"Количество купюр:";
			// 
			// ResCurrency_tb
			// 
			this->ResCurrency_tb->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ResCurrency_tb->Cursor = System::Windows::Forms::Cursors::Default;
			this->ResCurrency_tb->Location = System::Drawing::Point(3, 21);
			this->ResCurrency_tb->Multiline = true;
			this->ResCurrency_tb->Name = L"ResCurrency_tb";
			this->ResCurrency_tb->ReadOnly = true;
			this->ResCurrency_tb->Size = System::Drawing::Size(148, 98);
			this->ResCurrency_tb->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(3, 0);
			this->label3->Name = L"label3";
			this->label3->Padding = System::Windows::Forms::Padding(0, 4, 0, 0);
			this->label3->Size = System::Drawing::Size(137, 17);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Использованные купюры";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->обучениеToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(453, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// обучениеToolStripMenuItem
			// 
			this->обучениеToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->теоретическиеСведенияToolStripMenuItem,
					this->тестToolStripMenuItem
			});
			this->обучениеToolStripMenuItem->Name = L"обучениеToolStripMenuItem";
			this->обучениеToolStripMenuItem->Size = System::Drawing::Size(74, 20);
			this->обучениеToolStripMenuItem->Text = L"Обучение";
			// 
			// теоретическиеСведенияToolStripMenuItem
			// 
			this->теоретическиеСведенияToolStripMenuItem->Name = L"теоретическиеСведенияToolStripMenuItem";
			this->теоретическиеСведенияToolStripMenuItem->Size = System::Drawing::Size(209, 22);
			this->теоретическиеСведенияToolStripMenuItem->Text = L"Теоретические сведения";
			this->теоретическиеСведенияToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::теоретическиеСведенияToolStripMenuItem_Click);
			// 
			// тестToolStripMenuItem
			// 
			this->тестToolStripMenuItem->Name = L"тестToolStripMenuItem";
			this->тестToolStripMenuItem->Size = System::Drawing::Size(209, 22);
			this->тестToolStripMenuItem->Text = L"Тест";
			this->тестToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::тестToolStripMenuItem_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(453, 284);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->groupBox1->ResumeLayout(false);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->tableLayoutPanel2->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->tableLayoutPanel4->ResumeLayout(false);
			this->tableLayoutPanel4->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->tableLayoutPanel3->ResumeLayout(false);
			this->tableLayoutPanel3->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void groupBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void groupBox3_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Solve_btn_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void getVecNominal(std::vector<int>& nom);
private: System::Void теоретическиеСведенияToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void тестToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
};
}
