#pragma once
#include <string>

class Clock {
private:
    int hours;
    int minutes;
    int seconds;

public:
    // Конструкторы
    Clock();
    Clock(int h);
    Clock(int h, int m);
    Clock(int h, int m, int s);

    // Методы
    void printTime();
    std::string getTime();
    int getMinutes();
    int getHours();
    int getTimeInSeconds();
    void increaseTime(int k);
    int getDistance(Clock other);
};