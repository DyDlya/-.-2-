#pragma once
#include <fstream>
#include <string>
#include <msclr\marshal_cppstd.h>
#include <random>

namespace КурсовойпроектАСД {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для TestCard
	/// </summary>
	public ref class TestCard : public System::Windows::Forms::Form
	{
	public:
		array<int>^ userAnswer;
		array<int>^ trueAnswer;
		int curQuestion;
		int randomQuestionNum;
		
		TestCard()
		{
			InitializeComponent();

			curQuestion = 1;

			userAnswer = gcnew array<int>(20) { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
			trueAnswer = gcnew array<int>(20) { 1, 2, 2, 3, 4, 1, 2, 1, 4, 4, 3, 1, 3, 2, 4, 1, 3, 2, 3, 1 };
			
			
		}
		int curAnswer;
		
		
		
		

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~TestCard()
		{
			if (components)
			{
				delete components;
			}

			
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ Question_lb;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::RadioButton^ Answer4_rb;

	private: System::Windows::Forms::RadioButton^ Answer3_rb;

	private: System::Windows::Forms::RadioButton^ Answer2_rb;

	private: System::Windows::Forms::RadioButton^ Answer1_rb;

	private: System::Windows::Forms::Button^ button1;
	protected:

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
			this->Question_lb = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Answer4_rb = (gcnew System::Windows::Forms::RadioButton());
			this->Answer3_rb = (gcnew System::Windows::Forms::RadioButton());
			this->Answer2_rb = (gcnew System::Windows::Forms::RadioButton());
			this->Answer1_rb = (gcnew System::Windows::Forms::RadioButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox1->Controls->Add(this->Question_lb);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(434, 77);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Вопрос";
			// 
			// Question_lb
			// 
			this->Question_lb->AutoSize = true;
			this->Question_lb->Location = System::Drawing::Point(6, 16);
			this->Question_lb->Name = L"Question_lb";
			this->Question_lb->Padding = System::Windows::Forms::Padding(0, 4, 0, 0);
			this->Question_lb->Size = System::Drawing::Size(41, 17);
			this->Question_lb->TabIndex = 0;
			this->Question_lb->Text = L"label1";
			// 
			// groupBox2
			// 
			this->groupBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox2->Controls->Add(this->tableLayoutPanel1);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox2->Location = System::Drawing::Point(12, 95);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(434, 154);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Ответы";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel2, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->button1, 0, 1);
			this->tableLayoutPanel1->Location = System::Drawing::Point(9, 19);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 80.62016F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 19.37984F)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(419, 129);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 1;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->Controls->Add(this->Answer4_rb, 0, 3);
			this->tableLayoutPanel2->Controls->Add(this->Answer3_rb, 0, 2);
			this->tableLayoutPanel2->Controls->Add(this->Answer2_rb, 0, 1);
			this->tableLayoutPanel2->Controls->Add(this->Answer1_rb, 0, 0);
			this->tableLayoutPanel2->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->Padding = System::Windows::Forms::Padding(4, 0, 0, 0);
			this->tableLayoutPanel2->RowCount = 4;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 23)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 29)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(413, 98);
			this->tableLayoutPanel2->TabIndex = 0;
			// 
			// Answer4_rb
			// 
			this->Answer4_rb->AutoSize = true;
			this->Answer4_rb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Answer4_rb->Location = System::Drawing::Point(7, 72);
			this->Answer4_rb->Name = L"Answer4_rb";
			this->Answer4_rb->Size = System::Drawing::Size(81, 17);
			this->Answer4_rb->TabIndex = 3;
			this->Answer4_rb->TabStop = true;
			this->Answer4_rb->Text = L"Answer4_rb";
			this->Answer4_rb->UseVisualStyleBackColor = true;
			this->Answer4_rb->CheckedChanged += gcnew System::EventHandler(this, &TestCard::Answer4_rb_CheckedChanged);
			// 
			// Answer3_rb
			// 
			this->Answer3_rb->AutoSize = true;
			this->Answer3_rb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Answer3_rb->Location = System::Drawing::Point(7, 49);
			this->Answer3_rb->Name = L"Answer3_rb";
			this->Answer3_rb->Size = System::Drawing::Size(81, 17);
			this->Answer3_rb->TabIndex = 2;
			this->Answer3_rb->TabStop = true;
			this->Answer3_rb->Text = L"Answer3_rb";
			this->Answer3_rb->UseVisualStyleBackColor = true;
			this->Answer3_rb->CheckedChanged += gcnew System::EventHandler(this, &TestCard::Answer3_rb_CheckedChanged);
			// 
			// Answer2_rb
			// 
			this->Answer2_rb->AutoSize = true;
			this->Answer2_rb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Answer2_rb->Location = System::Drawing::Point(7, 26);
			this->Answer2_rb->Name = L"Answer2_rb";
			this->Answer2_rb->Size = System::Drawing::Size(81, 17);
			this->Answer2_rb->TabIndex = 1;
			this->Answer2_rb->TabStop = true;
			this->Answer2_rb->Text = L"Answer2_rb";
			this->Answer2_rb->UseVisualStyleBackColor = true;
			this->Answer2_rb->CheckedChanged += gcnew System::EventHandler(this, &TestCard::Answer2_rb_CheckedChanged);
			// 
			// Answer1_rb
			// 
			this->Answer1_rb->AutoSize = true;
			this->Answer1_rb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Answer1_rb->Location = System::Drawing::Point(7, 3);
			this->Answer1_rb->Name = L"Answer1_rb";
			this->Answer1_rb->Size = System::Drawing::Size(81, 17);
			this->Answer1_rb->TabIndex = 0;
			this->Answer1_rb->TabStop = true;
			this->Answer1_rb->Text = L"Answer1_rb";
			this->Answer1_rb->UseVisualStyleBackColor = true;
			this->Answer1_rb->CheckedChanged += gcnew System::EventHandler(this, &TestCard::Answer1_rb_CheckedChanged);
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(271, 107);
			this->button1->Name = L"button1";
			this->button1->Padding = System::Windows::Forms::Padding(0, 0, 12, 0);
			this->button1->Size = System::Drawing::Size(145, 19);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Следующий вопрос";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &TestCard::button1_Click);
			// 
			// TestCard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(458, 261);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"TestCard";
			this->Text = L"Тест";
			this->Load += gcnew System::EventHandler(this, &TestCard::TestCard_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void getQuestion();
private: System::Void TestCard_Load(System::Object^ sender, System::EventArgs^ e);
private: System::Void Answer1_rb_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	curAnswer = 1;
}
private: System::Void Answer2_rb_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	curAnswer = 2;
}
private: System::Void Answer3_rb_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	curAnswer = 3;
}
private: System::Void Answer4_rb_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	curAnswer = 4;
}
};
}
