#include "pilot.h"
#include <iostream>
using namespace std;
Pilot::Pilot(const std::string& name, const std::string& gender, const std::string& rank)
    : Employee(name, gender, "Pilot"), 
      m_rank(rank) {}                  

void Pilot::printInfo() const {
    Employee::printInfo();             
    std::cout << "Rank: " << m_rank << "\n"; 
}
