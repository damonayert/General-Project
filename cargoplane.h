#ifndef CARGOPLANE_H
#define CARGOPLANE_H
#include <iostream>
#include "airplane.h"
using namespace std;
class CargoPlane : public Airplane {
public:
    CargoPlane(const std::string& model, int capacity, double maxPayload);
    void printInfo() const override;
private:
    double m_maxPayload;
};

#endif // CARGOPLANE_H
