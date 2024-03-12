#include <iostream>
#include <iomanip>
using namespace std;

class Rectangle
{
    double width, height;

public:
    void setRectangle(double w, double h)
    {
        width = w;
        height = h;
    }
    double getArea()
    {
        return width * height;
    }
    double getPerimeter()
    {
        return 2 * (width + height);
    }
};

int main()
{
    Rectangle rectangle1;
    Rectangle rectangle2;

    double w, h;
    cin >> w >> h;
    rectangle1.setRectangle(w, h);
    cin >> w >> h;
    rectangle2.setRectangle(w, h);

    cout << fixed << setprecision(2) << rectangle1.getArea() << " " << rectangle1.getPerimeter() << endl;
    cout << fixed << setprecision(2) << rectangle2.getArea() << " " << rectangle2.getPerimeter() << endl;

    rectangle2.setRectangle(5.0, 2.5);

    cout << fixed << setprecision(2) << rectangle2.getArea() << " " << rectangle2.getPerimeter() << endl;
}

/*
設計物件長方形Rectangle:
    double width, height
    取得面積getArea()
    取得周長getPerimeter()

輸入2組長方形的長寬作為建構2個長方形的參數，輸出2個長方形的面積和周長。
再將第二個長方形的長改為5.0、寬改為2.5，輸出修改後第2個長方形的面積和周長。
*/