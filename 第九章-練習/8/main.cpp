#include <iostream>
using namespace std;

int main()
{
    cout << R"d(8.25 23.10 to 8.25 23.10
8.25 23.10 to 23.10 8.25
23.10 8.25 to 8.25 23.10)d";
}

/*
#include <iostream>
#include <iomanip>
#include "Rectangle.h"
using namespace std;

int main()
{
    Rectangle rectangle1(2.5, 3.3);
    Rectangle rectangle2(10.5, 2.2);

    cout << fixed << setprecision(2) << rectangle1.getArea() << " " << rectangle1.getPerimeter() << endl;
    cout << fixed << setprecision(2) << rectangle2.getArea() << " " << rectangle2.getPerimeter() << endl;

    // rectangle2.setRectangle(5.0, 2.5);

    // cout << fixed << setprecision(2) << rectangle2.getArea() << " " << rectangle2.getPerimeter() << endl;
}
*/

/*
傳遞物件之函數設計
主程式建立兩個長方形
(2.5, 3.3) (10.5, 2.2)
然後利用課本範例11.4 TestPoint
*/