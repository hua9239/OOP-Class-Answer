#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Item
{
public:
    string item, volume;
    int singlePrice, quantity;

    void setItem()
    {
        cin >> item >> volume >> singlePrice >> quantity;
    }
    void printItem()
    {
        cout << item << " " << volume << " " << singlePrice * quantity << endl;
    }
    int Total()
    {
        return singlePrice * quantity;
    }
};

int main()
{
    Item shoppingList[3];
    for (int i = 0; i < 3; i++)
    {
        shoppingList[i].setItem();
    }
    for (int i = 0; i < 3; i++)
    {
        shoppingList[i].printItem();
    }

    int total = 0;
    for (int i = 0; i < 3; i++)
    {
        total += shoppingList[i].Total();
    }
    cout << "[Total] " << total << endl;
}

/*
請各位撰寫主程式，並使用上述的類別建立兩個物件，使用setItem()輸入資料後，稍加修改類別內的內容，
使其符合題目所需，並使用printItem()方式將物件內的資訊顯示出來，再利用printTotal()顯示出鯊鯊至少需要領出多少錢。

輸入說明:
    輸入三組資料，每一組資料中有物品、容量、單價以及該數量，請在setItem()進行輸入的動作。

輸出說明:
    使用printItem()印出物件中的資料、printTotal()印出所有物件的總金額。

備註:
    printItem()中印出的資料包含物品、容量以及該品項的總金額。
    請勿修改類別中除printItem()、printTotal()以及setItem()以外的部分！
*/