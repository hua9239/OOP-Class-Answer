#include "Score.h"

int main()
{
    Score score1("John", 90);
    Score score2("Mary", 80);

    string name;
    int math;
    cin >> name >> math;

    score1.setName(name);
    score2.setMath(math);

    score1.print();
    score2.print();
}

/*
Score:
    string name
    int math
    void setName(string)
    void setMath(int)
    string getName()
    int getMath()
    void print()

建立兩個Score
    score1(John, 90)
    score2(Mary, 80)

然後輸入string name, int math
    score1.setName(name)
    score2.setMath(math)
*/