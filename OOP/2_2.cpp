#include <iostream>
#include "Clock.h"
#include <string>
#include "2_2.h"

void secondTaskSecondEx() {
    // Задание 2
    /*
    Во входных данных записано 6 чисел: время на часах в формате часы, минуты секунды и реальное время в том же формате.
    Определите, на сколько минут спешат/отстают часы от реального времени.
    */
    int h1, m1, s1, h2, m2, s2;
    std::cout << "Введите время часов (часы, минуты, секунды): ";
    std::cin >> h1 >> m1 >> s1;
    std::cout << "Введите реальное время (часы, минуты, секунды): ";
    std::cin >> h2 >> m2 >> s2;

    Clock time1(h1, m1, s1);
    Clock time2(h2, m2, s2);

    std::cout << "Время на часах: ";
    time1.printTime();
    std::cout << "Реальное время: ";
    time2.printTime();

    double difference = time2.getDistance(time1);
    Clock differenceTime;
    differenceTime.increaseTime(std::abs(difference));
    std::string hurryOrLagging = "";
    if (difference < 0) {
        hurryOrLagging = "спешат";
    }
    else {
        hurryOrLagging = "отстают";
    }
    std::cout << "Часы " << hurryOrLagging << " на: ";
    differenceTime.printTime();
}