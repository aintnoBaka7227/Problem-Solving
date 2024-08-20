#include "RunLengthEncoding.hpp"

int main() {
    RunLengthEncoding test;
    std::cout << test.decode("123456789012345678901234567890B") << std::endl;
    return 0;
}