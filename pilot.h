#ifndef PILOT_H
#define PILOT_H
#include <iostream>
#include "employee.h"
using namespace std;
class Pilot : public Employee {
public:
    Pilot(const std::string& name, const std::string& gender, const std::string& rank);
    void printInfo() const override;
private:
    std::string m_rank;
};

#endif // PILOT_H
