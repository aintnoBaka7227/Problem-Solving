#include "JumpyNum.hpp"

int main() {
    JumpyNum test;
    std::cout << test.howMany(1,10) << std::endl;
    std::cout << test.howMany(9,23) << std::endl;
    std::cout << test.howMany(2000,2000) << std::endl;
    std::cout << test.howMany(8000,20934) << std::endl;
    return 0;
}