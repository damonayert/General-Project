#include "food.h"
#include <iostream>
using namespace std;
Food::Food(const std::string& type, int quantity)
    : m_type(type),
      m_quantity(quantity) {}

void Food::printInfo() const {
    std::cout << "Type: " << m_type << "\n";
    std::cout << "Quantity: " << m_quantity << "\n\n";
}
