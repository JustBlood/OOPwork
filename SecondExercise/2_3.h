#pragma once

#include <iostream>
#include <cmath>
#include "Clock3.h"

void secondTaskThirdEx() {
    int h, b, m, n;
    std::cin >> h >> b >> m >> n;

    Clock3 start(h, 0);
    Clock3 endFirstHalf(h, m);
    endFirstHalf.addSeconds(n);
    Clock3 startSecondHalf(endFirstHalf.getHours(), endFirstHalf.getMinutes());
    Clock3 endSecondHalf(endFirstHalf.getHours(), endFirstHalf.getMinutes() + m);
    endSecondHalf.addSeconds(n);

    start.printTime();
    endFirstHalf.printTime();
    startSecondHalf.printTime();
    endSecondHalf.printTime();

    int numPairs = (24 - h) * 60 / (m + b);
    for (int i = 0; i < numPairs; i++) {
        Clock3 pairStart(h, 0);
        pairStart.addSeconds(i * (m + b));
        Clock3 pairEnd(pairStart.getHours(), pairStart.getMinutes() + m);
        pairEnd.addSeconds(n);

        pairStart.printTime();
        pairEnd.printTime();
    }
}
