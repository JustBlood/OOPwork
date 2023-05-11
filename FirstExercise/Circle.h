#pragma once

#define M_PI 3.14159265358979 // позволяет использовать константу M_PI
#include <iostream>
#include <cmath>

class Circle {
private:
    double R;
    double x;
    double y;

public:
    Circle(double r, double x, double y) {
        R = r;
        this->x = x;
        this->y = y;
    }

    double getArea() {
        return M_PI * R * R;
    }

    double getLength() {
        return 2 * M_PI * R;
    }

    bool isPointInside(double x, double y) {
        double distance = sqrt(pow(this->x - x, 2) + pow(this->y - y, 2));
        return distance <= R;
    }

    void printInfo() {
        std::cout << "Radius: " << R << std::endl;
        std::cout << "Center coordinates: (" << x << ", " << y << ")" << std::endl;
    }
};