#include "StrangeComputer.hpp"
#include <iostream>

int main() {

    StrangeComputer test;
    std::cout << test.setMemory("0011") << std::endl;
    std::cout << test.setMemory("000") << std::endl;
    std::cout << test.setMemory("0100") << std::endl;
    std::cout << test.setMemory("111000111") << std::endl;
    return 0;
}