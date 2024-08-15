#include <iostream>
#include "SimpleCompressor.hpp"

int main() {
    SimpleCompressor test;
    // std::cout << test.uncompress("[5[9CQKQYW][2[5QTYWYYND]]]") << std::endl;
    test.uncompress("[5[9CQKQYW][2[5QTYWYYND]]]");
    return 0;
}