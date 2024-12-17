#include "airport.h"
#include <iostream>
using namespace std;
int main() {
    
    Airport airport("SVO");
    if (airport.registerUser("ivanov", "password")) {
        std::cout << "Регистрация прошла успешно!" << std::endl;
    } else {
        std::cerr << "Ошибка регистрации." << std::endl;
    }

    if (airport.loginUser("ivanov", "password")) {
        std::cout << "Вы вошли в систему." << std::endl;
    } else {
        std::cerr << "Ошибка входа." << std::endl;
    }
    Flight flight1("SU123", "Moscow", "Paris", "A320");
    Flight flight2("SU456", "Moscow", "London", "B737");
    airport.addFlight(flight1);
    airport.addFlight(flight2);

    Passenger passenger1("Ivan Ivanov", "Male", "1234567890");
    Passenger passenger2("Maria Petrova", "Female", "0987654321");
    airport.addPassenger(passenger1);
    airport.addPassenger(passenger2);

    Pilot pilot1("Alexei Smirnov", "Male", "Captain");
    Pilot pilot2("Elena Kovalenko", "Female", "First Officer");
    airport.assignPilotToFlight(pilot1, flight1);
    airport.assignPilotToFlight(pilot2, flight2);

    airport.printInfo();
}
