#pragma once

void secondTaskThirdEx() {
    int h, n, m, b; // h - начало, n - макс.кол-во минут на все пары, m - пара, b - перерыв
    std::cout << "Введите время начала занятий (часы): ";
    std::cin >> h;
    Clock startTime(h);
    std::cout << "Введите максимальное количество минут на все занятия (минуты): ";
    std::cin >> n;
    Clock endTime(startTime.getHours());
    endTime.increaseTime(n*60);
    std::cout << "Введите длительность пары (минуты): ";
    std::cin >> m;
    Clock workingTime(0, m);
    std::cout << "Введите длительность перерыва (минуты): ";
    std::cin >> b;
    Clock breakTime(0, b);

    int i = 1;
    while (startTime.compareTo(endTime) < 0) {
        std::cout << i << " Пара: ";
        startTime.printTime();
        startTime.increaseTime(workingTime.getTimeInSeconds());
        if (startTime.compareTo(endTime) >= 0) {
            break;
        }
        std::cout << i << " Перерыв: ";
        startTime.printTime();
        startTime.increaseTime(breakTime.getTimeInSeconds());
        i++;
    }
    std::cout << "Время пар превысило допустимую норму минут. Расчёт расписания окончен.\n";
}