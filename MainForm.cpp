#include "MainForm.h"
#include "Solve.h"
#include "TheoryForm.h"
#include <iostream>
#include <msclr\marshal_cppstd.h>
#include "TestCard.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ args)
{
    
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    КурсовойпроектАСД::MainForm form;
    Application::Run(%form);
}

System::Void КурсовойпроектАСД::MainForm::getVecNominal(std::vector<int>& nom)
{
    
    std::string st = msclr::interop::marshal_as<std::string>(Nominal_tb->Text);

    int i = 0;
    std::string str;
    while (i < st.size()) {
        if (st[i] == ',') {
            nom.push_back(atoi(str.c_str()));
            str = "";
        }
        else {
            str += st[i];
        }
        i++;
    }
    nom.push_back(atoi(str.c_str()));
}

System::Void КурсовойпроектАСД::MainForm::теоретическиеСведенияToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    TheoryForm^ thForm = gcnew TheoryForm();
    thForm->Show();
    
    return System::Void();
}

System::Void КурсовойпроектАСД::MainForm::тестToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    TestCard^ tCard = gcnew TestCard();
    
    tCard->Show();

    return System::Void();
}

System::Void КурсовойпроектАСД::MainForm::Solve_btn_Click(System::Object^ sender, System::EventArgs^ e)
{
    std::vector<int> Nominal;
    std::vector<int> ResNominal;
    int Count = Int32::Parse(Sum_tb->Text);

    this->getVecNominal(Nominal);

    Count = min_coins(Nominal, Count, ResNominal);

    ResCurrency_tb->Clear();
    ResCurrency_tb->Text += ResNominal[0];
    for (int i = 1; i < ResNominal.size(); i++) {
        ResCurrency_tb->Text += "," + ResNominal[i].ToString();
    }

    ResCount_lb->Text = "Количество купюр: " + Count.ToString();

}


