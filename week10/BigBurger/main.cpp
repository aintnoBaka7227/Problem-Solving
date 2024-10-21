#include "BigBurger.hpp"

int main() {
    BigBurger test;
    std::cout << test.maxWait({3,3,9},{2,15,14}) << std::endl;
    std::cout << test.maxWait({182},{11}) << std::endl;
    std::cout << test.maxWait({2,10,11},{3,4,3}) << std::endl;
    std::cout << test.maxWait({2,10,12},{15,1,15}) << std::endl;
    return 0;
}