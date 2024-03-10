#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Watch
{
public:
    string brand;
    string color;
    double price;
    double weight;
    void print()
    {
        cout << fixed << setprecision(2) << brand << " " << color << " " << price / weight << endl;
    }
};

int main()
{
    Watch myWatch1, myWatch2;
    cin >> myWatch1.brand >> myWatch1.color >> myWatch1.price >> myWatch1.weight;
    cin >> myWatch2.brand >> myWatch2.color >> myWatch2.price >> myWatch2.weight;
    myWatch1.print();
    myWatch2.print();
}

/*
請撰寫主程式，並使用上述的類別建立兩個物件，
帶入輸入的資料後，稍加修改類別內的內容，使其符合題目所需，
並使用print()方式將物件內的資訊顯示出來

請勿修改類別中除print以外的部分
*/