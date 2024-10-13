#include "FoxAndMountainEasy.hpp"

int main() {
    FoxAndMountainEasy test;
    std::cout << test.possible(4,0,4, "UU") << std::endl;
    std::cout << test.possible(4,0,4, "D") << std::endl;
    std::cout << test.possible(4,100000,100000, "DDU") << std::endl;
    std::cout << test.possible(4,0,0, "DDU") << std::endl;
    std::cout << test.possible(20,20,20, "UDUDUDUDUD") << std::endl;
    std::cout << test.possible(20,0,0, "UUUUUUUUUU") << std::endl;
    std::cout << test.possible(20,0,0, "UUUUUUUUUUU") << std::endl;
    return 0;
}