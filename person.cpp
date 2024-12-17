#include "person.h"
#include <iostream>
using namespace std;
Person::Person(const std::string& name, const std::string& gender)
    : m_name(name),
      m_gender(gender) {}
void Person::printInfo() const {
    std::cout << "Name: " << m_name << "\n";
    std::cout << "Gender: " << m_gender << "\n";
}
