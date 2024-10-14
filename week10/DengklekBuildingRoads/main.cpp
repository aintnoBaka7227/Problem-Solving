#include "DengklekBuildingRoads.hpp"

int main() {
    DengklekBuildingRoads test;
    std::cout << test.numWays(3,4,1) << std::endl;
    std::cout << test.numWays(4,3,3) << std::endl;
    std::cout << test.numWays(2,1,1) << std::endl;
    std::cout << test.numWays(5,0,3) << std::endl;
    std::cout << test.numWays(10,20,5) << std::endl;
    return 0;
}