#include <iostream>
#include "SimpleCompressor.hpp"

int main() {
    SimpleCompressor test;
    std::cout << test.uncompress("CO[1N]TEST") << std::endl;
    return 0;
}