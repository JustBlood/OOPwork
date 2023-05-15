#pragma once

#include <cmath>
#include <iostream>
using namespace std;

class Triangle {
private:
    double x1, y1, x2, y2, x3, y3;

public:
    Triangle() {}

    Triangle(double x1, double y1, double x2, double y2, double x3, double y3) {
        this->x1 = x1;
        this->y1 = y1;
        this->x2 = x2;
        this->y2 = y2;
        this->x3 = x3;
        this->y3 = y3;
    }

    bool isTriangleExists() {
        return side1() + side2() > side3()
            || side2() + side3() > side1()
            || side1() + side3() > side2();
    }

    double side1() {
        return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    }

    double side2() {
        return sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    }

    double side3() {
        return sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
    }

    double perimeter() {
        return side1() + side2() + side3();
    }

    double area() {
        double p = perimeter() / 2;
        return sqrt(p * (p - side1()) * (p - side2()) * (p - side3()));
    }

    void print() {
        cout << "Vertex 1: (" << x1 << ", " << y1 << ")" << endl;
        cout << "Vertex 2: (" << x2 << ", " << y2 << ")" << endl;
        cout << "Vertex 3: (" << x3 << ", " << y3 << ")" << endl;
    }
};