#ifndef FLIGHT_H
#define FLIGHT_H
#include "pilot.h"
#include <iostream>
using namespace std;
class Flight {
public:
    Flight(const std::string& number, const std::string& origin,
           const std::string& destination, const std::string& airplaneType);
    void setPilot(const Pilot& pilot);
    std::string getFlightNumber() const { return m_number; };
    void printInfo() const;
private:
    std::string m_number;
    std::string m_origin;
    std::string m_destination;
    std::string m_airplaneType;
    Pilot* m_pilot = nullptr;
};

#endif // FLIGHT_H
