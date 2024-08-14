#include <iostream>
#include "SimpleCompressor.hpp"

int main() {
    SimpleCompressor test;
    std::cout << test.uncompress("CC") << std::endl;
    return 0;
}