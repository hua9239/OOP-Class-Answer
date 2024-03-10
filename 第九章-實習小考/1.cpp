#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class StuCard
{
public:
    string name, stdID;
    double chinese, english, math, science, history, geography, computerScience;

    void setStuCard()
    {
        cin >> name >> stdID >> chinese >> english >> math >> science >> history >> geography >> computerScience;
    }
    void printStuCard()
    {
        cout << name << " " << stdID << " " << fixed << setprecision(1) << (chinese + english + math + science + history + geography + computerScience) / 7 << endl;
    }
};

int main()
{
    StuCard stuCard1;
    StuCard stuCard2;

    stuCard1.setStuCard();
    stuCard2.setStuCard();

    stuCard1.printStuCard();
    stuCard2.printStuCard();
}

/*
請寫出一個物件StuCard，該物件包含下列屬性:
    string name, stdID
    double chinese, english, math, science, history, geography, computerScience

輸入說明:
    輸入兩組:
        string 姓名
        string 學號
        double*7 七個課目的成績

輸出說明:
    輸出兩組物件的姓名、學號、七個課目的成績取平均(取至小數點第一位)
*/