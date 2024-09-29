#include "MatchNumbersEasy.hpp"

int main() {
    MatchNumbersEasy test;
    std::cout << test.maxNumber({6,7,8}, 21) << std::endl;
    std::cout << test.maxNumber({5,23,24},30) << std::endl;
    std::cout << test.maxNumber({1,5,3,2},1) << std::endl;
    return 0;
}