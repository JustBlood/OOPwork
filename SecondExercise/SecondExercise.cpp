#include <iostream>
#include <iomanip> // Для std::setw и std::setfill
#include "Clock.h"
#include "2_2.h"
#include "2_4.h"

void secondExercise();

int main()
{
    secondExercise();
}

void secondExercise() {

    std::cout << "=============== 2 ЗАДАНИЕ ================\n";

    Clock c1(10, 30, 0);
    Clock c2(12, 0, 0);

    c1.printTime(); // Выводит "10:30:00"
    c2.printTime(); // Выводит "12:00:00"

    std::cout << c1.getTimeInSeconds() << std::endl; // Выводит "37800"

    c1.increaseTime(3600); // Увеличивает время на 1 час
    c1.printTime(); // Выводит "11:30:00"

    std::cout << std::abs(c1.getDistance(c2)) << std::endl; // Выводит "5400" (разница в секундах между 11:30:00 и 12:00:00)

    std::cout << "=============== 2 задание 2 упражнение ================\n";

    secondTaskSecondEx();

    std::cout << "=============== 2 задание 4 упражнение ================\n";

    secondTaskFourthEx();
}