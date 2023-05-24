#pragma once

#include "Triangle.h"
#include <iostream>

using namespace std;

void firstTaskFirstEx() {
    int x1, y1, x2, y2, x3, y3;
    cout << "Введите координаты треугольника в формате: x1,y1,x2,y2,x3,y3:\n";
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    Triangle t(x1, y1, x2, y2, x3, y3);
    if (!t.isTriangleExists()) {
        cout << "Такого треугольника не существует\n";
        return;
    }
    cout << "Сторона 1: " << t.side1() << endl;
    cout << "Сторона 2: " << t.side2() << endl;
    cout << "Сторона 3: " << t.side3() << endl;
    double radius = 2 * t.area() / (t.side1() + t.side2() + t.side3());

    cout << "Радиус вписанной окружности равен: " << radius << "\n";
};