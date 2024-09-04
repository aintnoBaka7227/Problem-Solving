#include "TaliluluCoffee.hpp"

int main() {
    TaliluluCoffee test;
    std::cout << test.maxTip({3,3,3,3}) << std::endl;
    std::cout << test.maxTip({3, 2, 3}) << std::endl;
    std::cout << test.maxTip({7, 8, 6, 9, 10}) << std::endl;
    std::cout << test.maxTip({1, 1, 1, 1, 2}) << std::endl;
    return 0;
}