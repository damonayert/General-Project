#include "employee.h"
#include <iostream>
using namespace std;
Employee::Employee(const std::string& name, const std::string& gender, const std::string& position)
    : Person(name, gender),
      m_position(position) {}

void Employee::printInfo() const {
    Person::printInfo();
    std::cout << "Position: " << m_position << "\n";
}
