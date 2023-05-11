#include <iostream>
#include <iomanip> // Для std::setw и std::setfill
#include "Clock.h"
#include "Aeroflot.h"
#include "DaysOfWeek.h"

void thirdExercise();

int main()
{
    thirdExercise();
	system("pause");
}

void thirdExercise() {
    std::cout << "=============== 3 ЗАДАНИЕ ================\n";

    std::vector<Aeroflot> flights = Aeroflot::createFlights();
    Aeroflot::showFlightsByDayOfWeek(flights, DaysOfWeek::Monday);
    Aeroflot::showFlightsByDestination(flights, "Moscow");
    Aeroflot::showFlightsByDayOfWeekAndDepartureTime(flights, DaysOfWeek::Monday, Clock(12, 30));
}