#include <iostream>
#include "1_2.h"
#include "1_4.h"
#include <iomanip> // Для std::setw и std::setfill
#include "Clock.h"
#include "2_2.h"
#include "2_4.h"
#include "Aeroflot.h"
#include "DaysOfWeek.h"

void firstTask();
void secondTask();
void thirdTask();

int main()
{
    firstTask();
    secondTask();
    thirdTask();
	system("pause");
}

void firstTask() {
    std::cout << "=============== 1 ЗАДАНИЕ ================\n";
    std::cout << "=============== 1 задание 2 упражнение ================\n";
    firstTaskSecondEx();
    std::cout << "=============== 1 задание 4 упражнение ================\n";
    firstTaskFourthEx();
}

void secondTask() {

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

void thirdTask() {
    std::cout << "=============== 3 ЗАДАНИЕ ================\n";

    std::vector<Aeroflot> flights = Aeroflot::createFlights();
    Aeroflot::showFlightsByDayOfWeek(flights, DaysOfWeek::Monday);
    Aeroflot::showFlightsByDestination(flights, "Moscow");
    Aeroflot::showFlightsByDayOfWeekAndDepartureTime(flights, DaysOfWeek::Monday, Clock(12, 30));
}