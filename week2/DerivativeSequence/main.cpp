#include "DerivativeSequence.hpp"
#include <iostream>
#include <vector>

int main() {
    DerivativeSequence test;
    std::vector<int> ran = test.derSeq({5,6,3,9,-1}, 2);
    for (int i = 0; i < ran.size(); i++) {
        std::cout << ran[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}