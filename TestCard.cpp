#include "TestCard.h"

int randomer(int a, int b) { // Функция для получения случайных чисел в интервале от 1 до 100
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dist(a, b);
    int var;
    var = dist(gen);
    return var;
}

System::Void КурсовойпроектАСД::TestCard::button1_Click(System::Object^ sender, System::EventArgs^ e)
{

    
    userAnswer[randomQuestionNum] = curAnswer;

    randomQuestionNum = randomer(1, 19);

    this->getQuestion();
}

System::Void КурсовойпроектАСД::TestCard::TestCard_Load(System::Object^ sender, System::EventArgs^ e)
{
    randomQuestionNum = randomer(1, 19);

    this->getQuestion();
}

System::Void КурсовойпроектАСД::TestCard::getQuestion()
{
    if (curQuestion <= 5) {
        std::ifstream qStream("Question.txt");
        std::ifstream aStream("Answer.txt");

        std::string s1, s2;

        if ((!qStream) || (!aStream)) {
            MessageBox::Show("Ошибка при считывании файлов!", "Ошибка");
            return System::Void();
        }

        for (int i = 0; i != randomQuestionNum; i++) {
            std::getline(qStream, s1);
        }
        for (int i = 0; i != (randomQuestionNum) * 4; i++) {
            std::getline(aStream, s2);
        }

        std::getline(qStream, s1);
        Question_lb->Text = msclr::interop::marshal_as<String^>(s1);

        std::getline(aStream, s2);
        Answer1_rb->Text = msclr::interop::marshal_as<String^>(s2);
        std::getline(aStream, s2);
        Answer2_rb->Text = msclr::interop::marshal_as<String^>(s2);
        std::getline(aStream, s2);
        Answer3_rb->Text = msclr::interop::marshal_as<String^>(s2);
        std::getline(aStream, s2);
        Answer4_rb->Text = msclr::interop::marshal_as<String^>(s2);

        curQuestion++;
    }
    else {

        int score = 0;
        for (int i = 0; i < 20; i++) {
            if (userAnswer[i] == trueAnswer[i]) {
                score++;
            }
        }
        std::string result = "Ваша оценка: " + std::to_string(score) + "\nПравильных ответов: " + std::to_string(score) + " из пяти.";
        MessageBox::Show(msclr::interop::marshal_as<String^>(result));

        
        this->Close();

    }
}


