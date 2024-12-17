#ifndef FOOD_H
#define FOOD_H
#include <iostream>
using namespace std;
class Food {
public:
    Food(const std::string& type, int quantity);
    void printInfo() const;
private:
    std::string m_type;
    int m_quantity;
};

#endif // FOOD_H
