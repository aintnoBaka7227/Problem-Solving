#include "EggCartons.hpp"
#include <iostream>

int main () {

    EggCartons test;
    std::cout << test.minCartons(20) << std::endl;
    std::cout << test.minCartons(24) << std::endl;
    std::cout << test.minCartons(15) << std::endl;
    std::cout << test.minCartons(4) << std::endl;
    std::cout << test.minCartons(90) << std::endl;

    return 0;
}