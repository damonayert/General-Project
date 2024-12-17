#ifndef AIRPLANE_H
#define AIRPLANE_H
#include <iostream>
using namespace std;
class Airplane {
public:
    Airplane(const std::string& model, int capacity);
    virtual void printInfo() const;
protected:
    std::string m_model;
    int m_capacity;
};

#endif // AIRPLANE_H
