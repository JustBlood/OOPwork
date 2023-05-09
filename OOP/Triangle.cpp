#include "Triangle.h"
#include <cmath>
#include <iostream>
using namespace std;

Triangle::Triangle(double x1, double y1, double x2, double y2, double x3, double y3) {
    this->x1 = x1;
    this->y1 = y1;
    this->x2 = x2;
    this->y2 = y2;
    this->x3 = x3;
    this->y3 = y3;
}

double Triangle::side1() {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

double Triangle::side2() {
    return sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
}

double Triangle::side3() {
    return sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
}

double Triangle::perimeter() {
    return side1() + side2() + side3();
}

double Triangle::area() {
    double p = perimeter() / 2;
    return sqrt(p * (p - side1()) * (p - side2()) * (p - side3()));
}

void Triangle::print() {
    cout << "Vertex 1: (" << x1 << ", " << y1 << ")" << endl;
    cout << "Vertex 2: (" << x2 << ", " << y2 << ")" << endl;
    cout << "Vertex 3: (" << x3 << ", " << y3 << ")" << endl;
}