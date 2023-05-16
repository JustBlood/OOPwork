#pragma once

#include <iostream>

class Clock3 {
private:
    int hours;
    int minutes;
    int seconds;
public:
    Clock3(int h, int m, int s) {
        hours = h;
        minutes = m;
        seconds = s;
    }
    Clock3(int h, int m) {
        hours = h;
        minutes = m;
        seconds = 0;
    }
    Clock3(int h) {
        hours = h;
        minutes = 0;
        seconds = 0;
    }
    void printTime() {
        std::cout << hours << ":" << minutes << ":" << seconds << std::endl;
    }
    int secondsFromStart() {
        return hours * 3600 + minutes * 60 + seconds;
    }
    void addSeconds(int k) {
        int totalSeconds = hours * 3600 + minutes * 60 + seconds + k;
        hours = totalSeconds / 3600 % 24;
        minutes = (totalSeconds % 3600) / 60;
        seconds = totalSeconds % 60;
    }
    int distanceFrom(Clock3 other) {
        int seconds1 = hours * 3600 + minutes * 60 + seconds;
        int seconds2 = other.hours * 3600 + other.minutes * 60 +
            other.seconds;
        return std::abs(seconds1 - seconds2);
    }
    int getMinutes() {
        return minutes;
    }

    int getHours() {
        return hours;
    }
    int getTimeInSeconds() {
        return hours * 3600 + minutes * 60 + seconds;
    }
};