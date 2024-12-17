#ifndef USER_H
#define USER_H

#include <iostream>
using namespace std;
class User {
public:
    User(const std::string& username, const std::string& password);
    std::string getUsername() const;
    bool checkPassword(const std::string& password) const;
private:
    std::string m_username;
    std::string m_password;
};

#endif // USER_H
