#include <iostream>
#include "FracCount.hpp"


int main() {
    FracCount test;
    std::cout << test.position(5,6) << std::endl;
    std::cout << test.position(999, 1000) << std::endl;
    return 0;
}