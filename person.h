#ifndef PERSON_H
#define PERSON_H
#include <iostream>
using namespace std;
class Person {
public:
    Person(const std::string& name, const std::string& gender);
    virtual void printInfo() const;
protected:
    std::string m_name;
    std::string m_gender;
};

#endif // PERSON_H
