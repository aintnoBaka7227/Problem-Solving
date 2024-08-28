#include "NiceOrUgly.hpp"

int main() {
    NiceOrUgly test;
    std::cout << test.describe("HELLOWORLD") << std::endl;
    std::cout << test.describe("ABCDEFGHIJKLMNOPQRSTUVWXYZ") << std::endl;
    std::cout << test.describe("HELLOW?RLD") << std::endl;
    std::cout << test.describe("H??LOWOR??") << std::endl;
    std::cout << test.describe("EE?FFFF") << std::endl;
    return 0;
}