#include "cargoplane.h"
#include <iostream>
using namespace std;
CargoPlane::CargoPlane(const std::string& model, int capacity, double maxPayload)
    : Airplane(model, capacity),
      m_maxPayload(maxPayload) {}

void CargoPlane::printInfo() const {
    Airplane::printInfo();
    std::cout << "Max Payload: " << m_maxPayload << " tons\n\n";
}
