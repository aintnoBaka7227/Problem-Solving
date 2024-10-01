#include "ProblemsToSolve.hpp"

int main() {
    ProblemsToSolve test;
    std::cout << test.minNumber({1,2,3}, 2) << std::endl;
    std::cout << test.minNumber({1,2,3,4,5}, 4) << std::endl;
    std::cout << test.minNumber({10,1,12,101}, 100) << std::endl;
    std::cout << test.minNumber({10,1}, 9) << std::endl;
    std::cout << test.minNumber({6, 2, 6, 2, 6, 3, 3, 3, 7}, 4) << std::endl;
    return 0;
}