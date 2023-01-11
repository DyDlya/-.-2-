#include "TheoryForm.h"

System::Void КурсовойпроектАСД::TheoryForm::TheoryForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	std::ifstream ifn("Theory.txt");

	if (!ifn) {
		MessageBox::Show("Ошибка при считывании файла!", "Ошибка");
		return System::Void();
	}
	std::string st; 
	Theory_tb->Clear();
	String^ en = "\n\n";
	while (!ifn.eof()) {
		std::getline(ifn, st);		
		Theory_tb->Text += msclr::interop::marshal_as<String^>(st) + "\r\n";
	}
	
}
