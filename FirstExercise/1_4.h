#pragma once

#define _USE_MATH_DEFINES // позволяет использовать константу M_PI
#include <iostream>
#include <cmath>
#include "Circle.h"

using namespace std;

void firstTaskFourthEx() {
    Circle c(5, 0, 0);
    cout << "Area: " << c.getArea() << endl;
    cout << "Length: " << c.getLength() << endl;
    cout << "Is point (5, 0) inside the circle? " << (c.isPointInside(5, 0) ? "Yes" : "No") << endl;
    cout << "Is point (3, 4) inside the circle? " << (c.isPointInside(3, 4) ? "Yes" : "No") << endl;
    c.printInfo();
};