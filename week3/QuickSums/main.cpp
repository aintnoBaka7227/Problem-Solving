#include "QuickSums.hpp"

int main() {
    QuickSums qs;

    // // Test case 0
    // std::string test0 = "99999";
    // int sum0 = 45;
    // int result0 = qs.minSums(test0, sum0);
    // std::cout << "Test 0 - Expected: 4, Got: " << result0 << std::endl;

    // // Test case 1
    // std::string test1 = "1110";
    // int sum1 = 3;
    // int result1 = qs.minSums(test1, sum1);
    // std::cout << "Test 1 - Expected: 3, Got: " << result1 << std::endl;

    // // Test case 2
    // std::string test2 = "0123456789";
    // int sum2 = 45;
    // int result2 = qs.minSums(test2, sum2);
    // std::cout << "Test 2 - Expected: 8, Got: " << result2 << std::endl;

    // // Test case 3
    // std::string test3 = "99999";
    // int sum3 = 100;
    // int result3 = qs.minSums(test3, sum3);
    // std::cout << "Test 3 - Expected: -1, Got: " << result3 << std::endl;

    // // Test case 4
    // std::string test4 = "382834";
    // int sum4 = 100;
    // int result4 = qs.minSums(test4, sum4);
    // std::cout << "Test 4 - Expected: 2, Got: " << result4 << std::endl;

    // // Test case 5
    // std::string test5 = "9230560001";
    // int sum5 = 71;
    // int result5 = qs.minSums(test5, sum5);
    // std::cout << "Test 5 - Expected: 4, Got: " << result5 << std::endl;

    std::cout << qs.minSums("123", 6) << std::endl;
    return 0;
}