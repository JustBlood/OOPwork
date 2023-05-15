#pragma once

#include "Triangle.h"
#include <iostream>

using namespace std;

void firstTaskSecondEx() {
    Triangle t(0, 0, 0, 0, 0, 0);
    if (!t.isTriangleExists()) {
        cout << "Такого треугольника не существует\n";
        return;
    }
    cout << "Side 1: " << t.side1() << endl;
    cout << "Side 2: " << t.side2() << endl;
    cout << "Side 3: " << t.side3() << endl;
    cout << "Perimeter: " << t.perimeter() << endl;
    cout << "Area: " << t.area() << endl;
    t.print();
};