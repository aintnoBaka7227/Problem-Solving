#include "RoughStrings.hpp"

int main() {
    RoughStrings test;
    std::cout << test.minRoughness("aaaaabbc",1) << std::endl;
    std::cout << test.minRoughness("aaaabbbbc",5) << std::endl;
    std::cout << test.minRoughness("veryeviltestcase",1) << std::endl;
    std::cout << test.minRoughness("gggggggooooooodddddddllllllluuuuuuuccckkk",5) << std::endl;
    std::cout << test.minRoughness("zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",17) << std::endl;
    std::cout << test.minRoughness("bbbccca",2) << std::endl;
    return 0;
}