#pragma once

void secondTaskFirstEx() {
    int h, m;
    std::cout << "Введите время начала матча (часы, минуты): ";
    std::cin >> h >> m;
    Clock time(h, m);
    std::cout << "Начало 1 тайма: \n";
    time.printTime();
    time.increaseTime(45 * 60);
    std::cout << "Конец 1 тайма: \n";
    time.printTime();
    time.increaseTime(15 * 60);
    std::cout << "Начало 2 тайма: \n";
    time.printTime();
    time.increaseTime(45 * 60);
    std::cout << "Конец 2 тайма: \n";
    time.printTime();
}