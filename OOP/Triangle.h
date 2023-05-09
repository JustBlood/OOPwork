#pragma once

class Triangle {
private:
    double x1, y1, x2, y2, x3, y3;

public:
    Triangle(double x1, double y1, double x2, double y2, double x3, double y3);

    double side1();
    double side2();
    double side3();
    double perimeter();
    double area();
    void print();
};