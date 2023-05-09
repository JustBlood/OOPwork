#define _USE_MATH_DEFINES // позволяет использовать константу M_PI
#include <iostream>
#include <cmath>

class Circle {
private:
    double R;
    double x;
    double y;

public:
    Circle(double r, double x, double y);

    double getArea();
    double getLength();
    bool isPointInside(double x, double y);
    void printInfo();
};