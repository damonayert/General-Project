#ifndef PASSENGER_H
#define PASSENGER_H
#include <iostream>
using namespace std;
class Passenger {
public:
    Passenger(const std::string& name, const std::string& gender, const std::string& passportNumber);
    void printInfo() const;
private:
    std::string m_name;
    std::string m_gender;
    std::string m_passportNumber;
};

#endif // PASSENGER_H
