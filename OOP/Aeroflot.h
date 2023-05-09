#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "DaysOfWeek.h"
#include "Clock.h"

class Aeroflot {
private:
    std::string destination;
    int flightNumber;
    std::string planeType;
    Clock departureTime;
    std::vector<DaysOfWeek> daysOfWeek;

public:
    static const std::vector<std::string> realDaysOfWeek;

    Aeroflot() {}

    Aeroflot(std::string destination, int flightNumber, std::string planeType, Clock departureTime, std::vector<DaysOfWeek> daysOfWeek) {
        this->destination = destination;
        this->flightNumber = flightNumber;
        this->planeType = planeType;
        this->departureTime = departureTime;
        this->daysOfWeek = daysOfWeek;
    }

    void setDestination(std::string destination) {
        this->destination = destination;
    }

    void setFlightNumber(int flightNumber) {
        this->flightNumber = flightNumber;
    }

    void setPlaneType(std::string planeType) {
        this->planeType = planeType;
    }

    void setDepartureTime(Clock departureTime) {
        this->departureTime = departureTime;
    }

    void setDaysOfWeek(std::vector<DaysOfWeek> daysOfWeek) {
        this->daysOfWeek = daysOfWeek;
    }

    std::string getDestination() {
        return destination;
    }

    int getFlightNumber() {
        return flightNumber;
    }

    std::string getPlaneType() {
        return planeType;
    }

    Clock getDepartureTime() {
        return departureTime;
    }

    std::vector<DaysOfWeek> getDaysOfWeek() {
        return daysOfWeek;
    }

    static std::vector<Aeroflot> createFlights() {
        std::vector<Aeroflot> flights;
        flights.push_back(Aeroflot("Москва", 101, "Boeing 747", Clock(10, 0), {DaysOfWeek::Monday, DaysOfWeek::Wednesday, DaysOfWeek::Friday}));
        flights.push_back(Aeroflot("Санкт-Петербург", 102, "Airbus A320", Clock(11, 0), { DaysOfWeek::Tuesday, DaysOfWeek::Thursday, DaysOfWeek::Saturday }));
        flights.push_back(Aeroflot("Казань", 103, "Boeing 737", Clock(12, 0), { DaysOfWeek::Monday, DaysOfWeek::Wednesday, DaysOfWeek::Friday }));
        flights.push_back(Aeroflot("Сочи", 104, "Airbus A330", Clock(13, 0), { DaysOfWeek::Tuesday, DaysOfWeek::Thursday, DaysOfWeek::Saturday }));
        flights.push_back(Aeroflot("Новосибирск", 105, "Boeing 777", Clock(14, 0), { DaysOfWeek::Monday, DaysOfWeek::Wednesday, DaysOfWeek::Friday }));
        flights.push_back(Aeroflot("Екатеринбург", 106, "Airbus A380", Clock(15, 0), { DaysOfWeek::Tuesday, DaysOfWeek::Thursday, DaysOfWeek::Saturday }));
        return flights;
    }

    // выводит рейсы по пункту назначения
    static void showFlightsByDestination(std::vector<Aeroflot> flights, std::string destination) {
        std::cout << "Вылет в г." << destination << ":" << std::endl;
        for (Aeroflot flight : flights) {
            if (flight.getDestination() == destination) {
                std::cout << "Вылет " << flight.getFlightNumber() << " на " << flight.getPlaneType() << " отправляется в " << flight.getDepartureTime().getTime() << " в ";
                for (DaysOfWeek day : flight.getDaysOfWeek()) {
                    std::cout << realDaysOfWeek[day] << " ";
                }
                std::cout << std::endl;
            }
        }
    }

    // выводит рейсы для заданного дня недели
    static void showFlightsByDayOfWeek(std::vector<Aeroflot> flights, DaysOfWeek dayOfWeek) {
        std::cout << "Вылеты в " << realDaysOfWeek[dayOfWeek] << ":" << std::endl;
        for (Aeroflot flight : flights) {
            for (DaysOfWeek day : flight.getDaysOfWeek()) {
                if (day == dayOfWeek) {
                    std::cout << "Вылет " << flight.getFlightNumber() << " в г." << flight.getDestination() << " на " << flight.getPlaneType() << " отправляется в " << flight.getDepartureTime().getTime() << std::endl;
                }
            }
        }
    }

    // выводит рейсы для заданного дня недели и время вылета которых больше заданного
    static void showFlightsByDayOfWeekAndDepartureTime(std::vector<Aeroflot> flights, DaysOfWeek dayOfWeek, Clock departureTime) {
        std::cout << "Вылеты в " << realDaysOfWeek[dayOfWeek] << " после " << departureTime.getTime() << ":" << std::endl;
        for (Aeroflot flight : flights) {
            for (DaysOfWeek day : flight.getDaysOfWeek()) {
                if (day == dayOfWeek && flight.getDepartureTime().getTimeInSeconds() > departureTime.getTimeInSeconds()) {
                    std::cout << "Вылет " << flight.getFlightNumber() << " в г." << flight.getDestination() << " на " << flight.getPlaneType()
                        << " отправляется в " << flight.getDepartureTime().getTime() << std::endl;
                }
            }
        }
    }
};

const std::vector<std::string> Aeroflot::realDaysOfWeek = { "Понедельник", "Вторник", "Среда", "Четверг", "Пятница", "Суббота", "Воскресенье" };