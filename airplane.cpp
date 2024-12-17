#include "airplane.h"
#include <iostream>
using namespace std;
Airplane::Airplane(const std::string& model, int capacity)
    : m_model(model),
      m_capacity(capacity) {}

void Airplane::printInfo() const {
    std::cout << "Model: " << m_model << "\n";
    std::cout << "Capacity: " << m_capacity << "\n\n";
}
