#include "CountExpressions.hpp"

int main() {
    CountExpressions test;
    std::cout << test.calcExpressions(7,8,16) << std::endl;
    std::cout << test.calcExpressions(3,5,7) << std::endl;
    std::cout << test.calcExpressions(99,100,98010000) << std::endl;
    std::cout << test.calcExpressions(-99,42,-1764) << std::endl;
    std::cout << test.calcExpressions(100,-100,-100000000) << std::endl;
    std::cout << test.calcExpressions(1,2,5) << std::endl;
    return 0;
}