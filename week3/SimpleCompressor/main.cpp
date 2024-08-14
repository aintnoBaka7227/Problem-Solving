#include <iostream>
#include "SimpleCompressor.hpp"


int main () {
    SimpleCompressor test;
    std::cout << test.uncompress("C[6AB]C") << std::endl;
    return 0;
}