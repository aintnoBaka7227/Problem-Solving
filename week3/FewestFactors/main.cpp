#include <iostream>
#include "FewestFactors.hpp"

int main() {
    FewestFactors ff;

    // Test case 1
    std::vector<int> digits1 = {1, 2};
    std::cout << "Test case 1: Expected: 21, Result: " << ff.number(digits1) << std::endl;

    // Test case 2
    std::vector<int> digits2 = {6, 0};
    std::cout << "Test case 2: Expected: 6, Result: " << ff.number(digits2) << std::endl;

    // Test case 3
    std::vector<int> digits3 = {4, 7, 4};
    std::cout << "Test case 3: Expected: 447, Result: " << ff.number(digits3) << std::endl;

    // Test case 4
    std::vector<int> digits4 = {1, 3, 7, 9};
    std::cout << "Test case 4: Expected: 1973, Result: " << ff.number(digits4) << std::endl;

    // Test case 5
    std::vector<int> digits5 = {7, 5, 4, 3, 6};
    std::cout << "Test case 5: Expected: 36457, Result: " << ff.number(digits5) << std::endl;

    // Test case 6
    std::vector<int> digits6 = {1, 2, 4};
    std::cout << "Test case 6: Expected: 241, Result: " << ff.number(digits6) << std::endl;
    return 0;
}