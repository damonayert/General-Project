#include "utils.h"
#include <random>
#include <algorithm>
#include <iostream>
using namespace std;
std::string generateRandomString(size_t length) {
    static const char alphanum[] =
        "0123456789"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";

    std::string s;
    s.resize(length);

    std::random_device rd;
    std::mt19937 generator(rd());
    std::uniform_int_distribution<> distribution(0, sizeof(alphanum) - 2);

    std::generate_n(s.begin(), length, [&]() { return alphanum[distribution(generator)]; });

    return s;
}
