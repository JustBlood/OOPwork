#include "Circle.h"
Circle::Circle(double r, double x, double y) {
    R = r;
    this->x = x;
    this->y = y;
}

double Circle::getArea() {
    return M_PI * R * R;
}

double Circle::getLength() {
    return 2 * M_PI * R;
}

bool Circle::isPointInside(double x, double y) {
    double distance = sqrt(pow(this->x - x, 2) + pow(this->y - y, 2));
    return distance <= R;
}

void Circle::printInfo() {
    std::cout << "Radius: " << R << std::endl;
    std::cout << "Center coordinates: (" << x << ", " << y << ")" << std::endl;
}