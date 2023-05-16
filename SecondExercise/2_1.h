#pragma once

#include <iostream>
#include "Clock1.h"

using namespace std;

void secondTaskFirstEx() {
    int startHour, startMinute;
    cin >> startHour >> startMinute;

    Clock1 start(startHour, startMinute);
    Clock1 endFirstHalf(startHour, startMinute + 45);
    Clock1 startSecondHalf(startHour + 1, startMinute + 60);
    Clock1 endSecondHalf(startHour + 1, startMinute + 105);

    start.printTime();
    endFirstHalf.printTime();
    startSecondHalf.printTime();
    endSecondHalf.printTime();
}