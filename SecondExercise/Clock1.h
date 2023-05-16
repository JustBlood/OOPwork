#pragma once

#include <iostream>

using namespace std;

class Clock1 {
private:
    int hours, minutes, seconds;
public:
    Clock1(int h = 0, int m = 0, int s = 0) {
        hours = h;
        minutes = m;
        seconds = s;
    }
    void printTime() {
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }
    int secondsFromStart() {
        return hours * 3600 + minutes * 60 + seconds;
    }
    void addSeconds(int k) {
        int totalSeconds = secondsFromStart() + k;
        hours = totalSeconds / 3600;
        minutes = (totalSeconds % 3600) / 60;
        seconds = totalSeconds % 60;
    }
    int distanceFrom(Clock1 other) {
        return abs(secondsFromStart() - other.secondsFromStart());
    }
};