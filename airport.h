#ifndef AIRPORT_H
#define AIRPORT_H
#include <iostream>
#include <vector>
#include <unordered_map>
#include "flight.h"
#include "passenger.h"
#include "pilot.h"
#include "user.h"
using namespace std;
class Airport {
public:
    Airport(const std::string& name);
    void addFlight(const Flight& flight);
    void addPassenger(const Passenger& passenger);
    void assignPilotToFlight(const Pilot& pilot, const Flight& flight);
    void printInfo() const;
    bool registerUser(const std::string& username, const std::string& password);
    bool loginUser(const std::string& username, const std::string& password);
private:
    std::string m_name;
    std::vector<Flight> m_flights;
    std::vector<Passenger> m_passengers;
    std::unordered_map<std::string, User> m_users;
};

#endif // AIRPORT_H
