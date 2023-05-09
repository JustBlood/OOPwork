#include <iostream>
#include <iomanip>
#include "Clock.h"
#include "2_4.h"

void printSchedule(Clock firstPair, Clock lastPair, int breakDurationInMinutes, int numLessons, int lessonDurationInMinutes);

void secondTaskFourthEx() {
    // Задание 4
    /*
    В условиях предыдущей задачи заданы 8 чисел:
    время начала первой и конца последней пары с точностью до минуты, длительность перерыва, а также количество пар.
    Распечатайте полное расписание звонков.
    */
    // Clock startTime, endTime, breakTime;
    int startHour, startMinute, endHour, endMinute, breakDuration, numLessons, lessonDurationInMinutes;
    std::cout << "Введите:\n" << "1.Время начала занятий (часы, минуты)\n" << "2.Время окончания занятий (часы, минуты)\n"
        << "3.Длительность перерыва (минуты)\n" << "4.Количество пар\n" << "5. Длительность пары (минуты)\n";
    std::cin >> startHour >> startMinute >> endHour >> endMinute >> breakDuration >> numLessons >> lessonDurationInMinutes;
    Clock startPair(startHour, startMinute);
    Clock endPair(endHour, endMinute);

    printSchedule(startPair, endPair, breakDuration, numLessons, lessonDurationInMinutes);
}


void printSchedule(Clock firstPair, Clock lastPair, int breakDurationInMinutes, int numLessons, int lessonDurationInMinutes) {
    for (int i = 1; i <= numLessons; i++) {
        if (lastPair.getDistance(firstPair) <= 0) {
            std::cout << "Расписание не может быть рассчитано верно до конца. Промежутки неверны.\n";
            return;
        }
        std::cout << "Lesson " << i << ": "
            << firstPair.getHours() << ":"
            << std::setfill('0') << std::setw(2) << firstPair.getMinutes() << " - ";
        firstPair.increaseTime(lessonDurationInMinutes * 60);
        std::cout << firstPair.getHours() << ":"
            << std::setfill('0') << std::setw(2) << firstPair.getMinutes() << std::endl;
        firstPair.increaseTime(breakDurationInMinutes * 60);
    }
}