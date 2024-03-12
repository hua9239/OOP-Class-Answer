#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
    double width, height;

public:
    Rectangle(double, double);
    void setRectangle(double, double);
    double getArea();
    double getPerimeter();
};

#endif