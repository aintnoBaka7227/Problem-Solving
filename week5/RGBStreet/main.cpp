#include "RGBStreet.hpp"

int main() {
    RGBStreet test;
    std::cout << test.estimateCost({"1 100 100", "100 1 100", "100 100 1"}) << std::endl;
    return 0;
}