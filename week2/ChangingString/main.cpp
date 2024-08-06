#include "ChangingString.hpp"
#include <iostream>

int main() {
    ChangingString test;
    std::cout << test.distance("fbs", "wns", 3);
    return 0;
}