#include "user.h"
#include <iostream>
using namespace std;
User::User(const std::string& username, const std::string& password)
    : m_username(username),
      m_password(password) {}

std::string User::getUsername() const {
    return m_username;
}

bool User::checkPassword(const std::string& password) const {
    return m_password == password;
}
