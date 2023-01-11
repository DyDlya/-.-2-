#pragma once
#include <fstream>
#include <string>
#include <msclr\marshal_cppstd.h>

namespace  урсовойпроектј—ƒ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ TheoryForm
	/// </summary>
	public ref class TheoryForm : public System::Windows::Forms::Form
	{
	public:
		TheoryForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~TheoryForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ Theory_tb;
	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Theory_tb = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// Theory_tb
			// 
			this->Theory_tb->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Theory_tb->Location = System::Drawing::Point(12, 12);
			this->Theory_tb->Multiline = true;
			this->Theory_tb->Name = L"Theory_tb";
			this->Theory_tb->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->Theory_tb->Size = System::Drawing::Size(547, 276);
			this->Theory_tb->TabIndex = 0;
			// 
			// TheoryForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(571, 300);
			this->Controls->Add(this->Theory_tb);
			this->Name = L"TheoryForm";
			this->Text = L"“еоретические сведени€";
			this->Load += gcnew System::EventHandler(this, &TheoryForm::TheoryForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void TheoryForm_Load(System::Object^ sender, System::EventArgs^ e);
	};
}
