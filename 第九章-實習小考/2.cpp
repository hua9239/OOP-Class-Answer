#include <iostream>
#include <string>
using namespace std;

class Food
{
private:
    string name;
    int price, quantity;

public:
    void setFood()
    {
        cin >> name >> price >> quantity;
    }
    void printData()
    {
        cout << name << " " << price << " " << quantity << endl;
    }
    double getTotal()
    {
        return price * quantity;
    }
};

void printDay(Food myFood_1, Food myFood_2, Food myFood_3)
{
    myFood_1.printData();
    myFood_2.printData();
    myFood_3.printData();
    cout << "-----" << endl;
    cout << "當日金額:" << myFood_1.getTotal() + myFood_2.getTotal() + myFood_3.getTotal() << endl;
}

void printWeek(Food myFood[], int size)
{
    double total = 0;
    for (int i = 0; i < size; i++)
    {
        total += myFood[i].getTotal();
    }
    cout << "本週總金額：" << total << endl;
}
int main()
{
    Food myFood[21];
    for (int i = 0; i < 21; i++)
    {
        myFood[i].setFood();
    }

    for (int i = 0; i < 21; i += 3)
    {
        printDay(myFood[i], myFood[i + 1], myFood[i + 2]);
    }

    printWeek(myFood, 21);
}

/*
輸入說明:
    輸入21組資料，每一組資料中有食物名稱、食物價格、食物數量，請在setFood()進行輸入的動作。

輸出說明:
    使用printData()印出物件中的資料、printDay()印出當天三個物件的總金額，printWeek()印出一週全部物件的總金額。

備註：
printData() 中印出的資料包含食物名稱、食物價格以及食物數量
printDay()  中印出三餐的資料並以"-----"換行再輸出當日金額
printWeek() 中印出一週的總金額
getTotal()  回傳該物件總共花費的金額
*/