#include "passenger.h"
#include <iostream>
using namespace std;
Passenger::Passenger(const std::string& name, const std::string& gender, const std::string& passportNumber)
    : m_name(name),
      m_gender(gender),
      m_passportNumber(passportNumber) {}

void Passenger::printInfo() const {
    std::cout << "Name: " << m_name << "\n";
    std::cout << "Gender: " << m_gender << "\n";
    std::cout << "Passport Number: " << m_passportNumber << "\n\n";
}
