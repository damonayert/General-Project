#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include "person.h"
using namespace std;
class Employee : public Person {
public:
    Employee(const std::string& name, const std::string& gender, const std::string& position);
    void printInfo() const override;
private:
    std::string m_position;
};

#endif // EMPLOYEE_H
