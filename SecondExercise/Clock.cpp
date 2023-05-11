#include "Clock.h"
#include <stdexcept>
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

Clock::Clock() : hours(0), minutes(0), seconds(0) {}
Clock::Clock(int h) : minutes(0), seconds(0)
{
    if (h < 25 && h > -1) {
        this->hours = h;
    }
    else {
        throw runtime_error("Неверное количество часов");
    }
}
Clock::Clock(int h, int m) : Clock(h)
{
    if (m < 60 && m > -1) {
        this->minutes = m;
    }
    else {
        throw runtime_error("Неверное количество минут");
    }
}
Clock::Clock(int h, int m, int s) : Clock(h, m)
{
    if (s < 60 && s > -1) {
        this->seconds = s;
    }
    else {
        throw runtime_error("Неверное количество секунд");
    }
}

// Методы
void Clock::printTime() {
    std::cout << std::setfill('0') << std::setw(2) << hours << ":"
        << std::setfill('0') << std::setw(2) << minutes << ":"
        << std::setfill('0') << std::setw(2) << seconds << std::endl;
}

std::string Clock::getTime() {
    std::string time = std::to_string(hours) + ":";
    if (minutes < 10) {
        time += "0";
    }
    time += std::to_string(minutes);
    return time;
}

int Clock::getMinutes() {
    return minutes;
}

int Clock::getHours() {
    return hours;
}
int Clock::getTimeInSeconds() {
    return hours * 3600 + minutes * 60 + seconds;
}

void Clock::increaseTime(int k) {
    int totalSeconds = getTimeInSeconds() + k;
    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = totalSeconds % 60;
}

int Clock::getDistance(Clock other) {
    int thisTimeInSeconds = getTimeInSeconds();
    int otherTimeInSeconds = other.getTimeInSeconds();
    return thisTimeInSeconds - otherTimeInSeconds;
}