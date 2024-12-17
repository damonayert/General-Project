#include "flight.h"
#include <iostream>
using namespace std;
Flight::Flight(const std::string& number, const std::string& origin,
               const std::string& destination, const std::string& airplaneType)
    : m_number(number),
      m_origin(origin),
      m_destination(destination),
      m_airplaneType(airplaneType) {}

void Flight::setPilot(const Pilot& pilot) {
    m_pilot = new Pilot(pilot);
}

void Flight::printInfo() const {
    std::cout << "Flight Number: " << m_number << "\n";
    std::cout << "Origin: " << m_origin << std::endl;
    std::cout << "Destination: " << m_destination << "\n";
    std::cout << "Airplane Type: " << m_airplaneType << "\n";
    if (m_pilot != nullptr) {
        std::cout << "Pilot: ";
        m_pilot->printInfo();
    }
}
