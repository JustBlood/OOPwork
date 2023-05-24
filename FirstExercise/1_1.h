#pragma once

#include "Triangle.h"
#include "Circle.h"
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
    std::cout << std::endl;
    // 1_2 задание
    cout << "Сторона 1: " << t.side1() << endl;
    cout << "Сторона 2: " << t.side2() << endl;
    cout << "Сторона 3: " << t.side3() << endl;
    cout << "Периметр: " << t.perimeter() << endl;
    cout << "Площадь: " << t.area() << endl;

    double radius = 2 * t.area() / (t.side1() + t.side2() + t.side3());
    std::cout << std::endl;
    // 1_1 задание
    cout << "Радиус вписанной окружности равен: " << radius << "\n";

    // находим x и y вписанной окружности
    double xCircle = (t.side1() * x1 + t.side2() * x2 + t.side3() * x3) / (t.side1() + t.side2() + t.side3());
    double yCircle = (t.side1() * y1 + t.side2() * y2 + t.side3() * y3) / (t.side1() + t.side2() + t.side3());
    
    std::cout << std::endl;
    // 1_4 задание с вписанной окружостью
    Circle c(radius, xCircle, yCircle);
    cout << "Площадь вписанной окружности: " << c.getArea() << endl;
    cout << "Длина вписанной окружности: " << c.getLength() << endl;
    cout << "Точка (5, 0) внутри окружности? " << (c.isPointInside(5, 0) ? "Yes" : "No") << endl;
    cout << "Точка (2, 1) внутри окружности? " << (c.isPointInside(2, 1) ? "Yes" : "No") << endl;
    c.printInfo();

};