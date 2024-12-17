#include "airport.h"
#include <iostream>
using namespace std;
Airport::Airport(const std::string& name)
    : m_name(name) {}

bool Airport::registerUser(const std::string& username, const std::string& password) {
    if (m_users.find(username) != m_users.end()) {
        std::cerr << "Пользователь с таким именем уже существует.\n";
        return false;
    }
    m_users.emplace(username, User(username, password));
    std::cout << "Регистрация прошла успешно!\n";
    return true;
}

bool Airport::loginUser(const std::string& username, const std::string& password) {
    auto it = m_users.find(username);
    if (it == m_users.end()) {
        std::cerr << "Пользователь с таким именем не найден.\n";
        return false;
    }
    if (!it->second.checkPassword(password)) {
        std::cerr << "Неверный пароль.\n";
        return false;
    }
    std::cout << "Вы вошли в систему.\n";
    return true;
}

void Airport::addFlight(const Flight& flight) {
    m_flights.push_back(flight);
}

void Airport::addPassenger(const Passenger& passenger) {
    m_passengers.push_back(passenger);
}

void Airport::assignPilotToFlight(const Pilot& pilot, const Flight& flight) {
    for (auto& f : m_flights) {
        if (f.getFlightNumber() == flight.getFlightNumber()) {
            f.setPilot(pilot);
            break;
        }
    }
}

void Airport::printInfo() const {
    std::cout << "Airport Name: " << m_name << "\n";
    std::cout << "Flights:\n";
    for (const auto& flight : m_flights) {
        flight.printInfo();
    }
    std::cout << "Passengers:\n";
    for (const auto& passenger : m_passengers) {
        passenger.printInfo();
    }
}
