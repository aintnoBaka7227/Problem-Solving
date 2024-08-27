#include "ColorfulRabbits.hpp"

int main() {
    ColorfulRabbits test;
    std::cout << test.getMinimum({ 2, 2, 44, 2, 2, 2, 444, 2, 2 }) << std::endl;
    std::cout << test.getMinimum({ 1, 1, 2, 2 }) << std::endl;
    std::cout << test.getMinimum({0}) << std::endl;
    return 0;
}